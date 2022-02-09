#include "CMultiWorkThread.h"

#include <iostream>
#include "SmaliClass.h"
#include "config.hpp"
#include <map>
#include <string>
#include <vector>
#include "TestAnnotationSignature.h"
#include "BaseThread.h"


CMultiWorkThread::CMultiWorkThread() {
	listFiles.clear();
	strOutputDir.clear();
	nMaxThreadCounts = 0;
}

CMultiWorkThread::CMultiWorkThread(std::map<int, std::string> listFileInput, std::string& strOutDir, int nMaxThreads) {
	listFiles = listFileInput;
	strOutputDir = strOutDir;
	nMaxThreadCounts = nMaxThreads;
	nTotalCounts = (int)listFileInput.size();
}

void CMultiWorkThread::doOneFile(std::string strInputFile, std::string strOutputDir) {

	std::unique_ptr<CodeDumper> d(new CodeDumper());
	std::filesystem::path fsPath(strInputFile);
	std::filesystem::path toSavePath = fsPath.parent_path();

	//config::strInputFileName = strInputFile;

	// 往上退一个目录
	if (strOutputDir.size() > 0) {
		toSavePath.append(strOutputDir);
	}
	else {
		toSavePath.append("..");
	}

	std::filesystem::path toSavePathHfile = toSavePath;
	std::filesystem::path toSavePathTfile = toSavePath;
	std::filesystem::path toSavePathTHeaderfile = toSavePath;

	std::filesystem::path toSavePathCPP20file = toSavePath;

	std::shared_ptr<CSmaliClass> cSmaliClass = std::make_shared<CSmaliClass>(strInputFile);

	//mtxClang.lock();
	cSmaliClass->loadFile();
	//mtxClang.unlock();
	cSmaliClass->processAllLine();

	mtxSmaliFileMap.lock();
	this->mapSmaliFile.insert(std::make_pair(cSmaliClass->getClassCppSaveName(), cSmaliClass));
	mtxSmaliFileMap.unlock();

#if 1
	// 输出 CPP 文件
	cSmaliClass->dumpToCpp(d.get());
	//d->dumpAll();
	toSavePath.append(cSmaliClass->getClassCppSaveName() + ".cpp");
	d->dumpToFile(toSavePath.string());
	d->clear();
	//system

	mtxOutputList.lock();
	std::string strCppFileName = toSavePath.filename().string();
	this->listOutputFile.push_back(strCppFileName);
	mtxOutputList.unlock();

	// 输出 H 文件
	// 完整的类型申明
	cSmaliClass->dumpToH(d.get());
	toSavePathHfile.append(cSmaliClass->getClassCppSaveName() + ".h");
	d->dumpToFile(toSavePathHfile.string());
	d->clear();

	// 输出 T 文件
	// 申明了只带有默认构造函数的类型
	cSmaliClass->dumpToType(d.get());
	toSavePathTfile.append(cSmaliClass->getClassCppSaveName() + ".hh");
	d->dumpToFile(toSavePathTfile.string());
	d->clear();

	// 输出 THeader 文件
	// 只申明了类型
	cSmaliClass->dumpToTypeHHH(d.get());
	toSavePathTHeaderfile.append(cSmaliClass->getClassCppSaveName() + ".hhh");
	d->dumpToFile(toSavePathTHeaderfile.string());
	d->clear();
#endif

	// 输出 CPP20 文件
	// 只申明了类型
#if 0
	cSmaliClass.dumpToModule(d.get());
	toSavePathCPP20file.append(cSmaliClass.getClassCppSaveName() + ".ixx");
	d->dumpToFile(toSavePathCPP20file.string());
	d->clear();
	mtxOutputList.lock();
	std::string strCpp20FileName = toSavePathCPP20file.filename().string();
	this->listOutputFile.push_back(strCpp20FileName);
	mtxOutputList.unlock();


	// 输出 CPP 文件
	cSmaliClass.dumpToCpp20Cpp(d.get());
	toSavePath.append(cSmaliClass.getClassCppSaveName() + ".cpp");
	d->dumpToFile(toSavePath.string());
	d->clear();
	mtxOutputList.lock();
	std::string strCppFileName = toSavePath.filename().string();
	this->listOutputFile.push_back(strCppFileName);
	mtxOutputList.unlock();
#endif

#if 0
	mtxClang.lock();
	{
		std::string strFormatCmd = "clang-format";
		strFormatCmd.append(" -style=WebKit -i ");
		strFormatCmd.append(toSavePath.string());
		system(strFormatCmd.c_str());
	}
	{
		std::string strFormatCmd = "clang-format";
		strFormatCmd.append(" -style=WebKit -i ");
		strFormatCmd.append(toSavePathHfile.string());
		system(strFormatCmd.c_str());
	}
	mtxClang.unlock();
#endif
}

void CMultiWorkThread::doOneThread() {
	int nIndex = -1;
	do {
		nIndex = -1;

		this->mtxInputList.lock();
		std::string strInputFileName;
		auto it = listFiles.begin();
		if (it != listFiles.end()) {
			nIndex = it->first;
			strInputFileName = it->second;
			listFiles.erase(it);
		}

		CBaseThread::setCurrentThreadWorkFile(strInputFileName);
		if (nIndex >= 0) {
			std::cout << "[ " << nIndex << "/" << nTotalCounts << " ] " << strInputFileName << std::endl;
		}
		this->mtxInputList.unlock();
		if (nIndex >= 0) {
			try {
				doOneFile(strInputFileName, this->strOutputDir);
			}
			catch (std::string strErrorFile) {
				TestAnnotationSignature::insertErrorFileName(strErrorFile);
			}
		}
	} while (nIndex >= 0);
}

bool CMultiWorkThread::checkClassInheritLink(std::vector<std::vector<std::string>>& savedLink, std::vector<std::string> listLink, std::string strCurrentClass) {
	if (std::find(listLink.begin(), listLink.end(), strCurrentClass) != listLink.end()) {

		auto a = listLink.rbegin();
		if ((*a) != strCurrentClass) {
			listLink.push_back(strCurrentClass);
			savedLink.push_back(listLink);
		}

		return false;
	}

	auto a = mapSmaliFile.find(strCurrentClass);
	if (a != mapSmaliFile.end()) {
		listLink.push_back(a->first);
		std::vector<std::string> listInheritClass;
		std::string strSuper = a->second->getSuperName();
		std::vector<std::string> listImp = a->second->getListImplements();
		if (strSuper.size() > 0) {
			listInheritClass.push_back(strSuper);
		}
		for (auto b = listImp.begin(); b != listImp.end(); b++) {
			listInheritClass.push_back(*b);
		}

		for (auto c = listInheritClass.begin(); c != listInheritClass.end(); c++) {
			std::string strCppSuper = SmaliType(*c).getCppFileName();
			std::string strCppOneFile;
			std::string strCppOneFull;
			int nIndex = 0;
			//std::cout << "--->" << strCppSuper << std::endl;
			for (int i = 0; i < strCppSuper.size(); i++) {
				if ((strCppSuper[i] == '<') || (strCppSuper[i] == '>') || (strCppSuper[i] == ',')) {

					if ((strCppSuper[i] == '<')) {
						nIndex++;
					}
					else if (strCppSuper[i] == '>') {
						nIndex--;
					}

					if (strCppOneFile.size() > 1) {
						if (("T_CONS" != strCppOneFile) 
							&& ("P_OUT" != strCppOneFile)
							&& ("P_IN" != strCppOneFile)
							&& ("T_SPLITR" != strCppOneFile)
							&& ("E_OUT" != strCppOneFile)
							&& ("E_IN" != strCppOneFile)
							&& ("T_ARR" != strCppOneFile)
							&& ("T_NODE" != strCppOneFile)
							&& ("long long[]" != strCppOneFile)
							&& ("double[]" != strCppOneFile)
							&& ("int[]" != strCppOneFile)
							&& ("std.vector" != strCppOneFile)
							&& ("unsigned char[]" != strCppOneFile)
							&& ("TK;TV;" != strCppOneFile)
							&& (".Itr" != strCppOneFile)
							&& ("C0" != strCppOneFile)
							&& ("C1" != strCppOneFile)
							&& ("C2" != strCppOneFile)
							&& ("C3" != strCppOneFile)
							&& ("C4" != strCppOneFile)
							) {
							//std::cout << "to find the class " << strCppOneFile << std::endl;
							if ((".BaseSpliterator" == strCppOneFile) 
								|| ("std.vector" == strCppOneFile)
								) {
								std::cout << "--->" << strCppSuper << std::endl;
							}

							if (nIndex == 0) {
								strCppOneFull.append(strCppOneFile);
							}

							if (strCppOneFile[0] == '.') {
								if (strCppOneFull.size() > 0) {
									checkClassInheritLink(savedLink, listLink, strCppOneFull);
								}
							}
							else {
								checkClassInheritLink(savedLink, listLink, strCppOneFile);
							}


						}
					}
					strCppOneFile = "";
					//break;
				}
				else {
					strCppOneFile += strCppSuper[i];
				}
			}
		}
	}
	else {
		std::cout << "can not find the class [" << strCurrentClass << "]" << std::endl;
	}


	return true;
}


void CMultiWorkThread::work() {
	int nMaxTh = this->nMaxThreadCounts;
	nCurrentIndex = 0;

	/*
	* 
# 生成`add.o`文件
clang++ -c add.cc
# 生成`libadd.a`静态链接库
ar -rcs libstr.a add.o
# 生成二进制文件
clang++ -o t main.cc libadd.a
# 或者在系统目录下查找静态链接库参数不包含静态链接库`libadd.a`的`lib`和`.a`
clang++ -o t main.cc -ladd
# 如果在指定目录查找需要使用
clang++ -o t main.cc -L./ -l add
————————————————
版权声明：本文为CSDN博主「bleedingfight」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/bleedingfight/article/details/80906556
	*/

	TestAnnotationSignature::clearData();

	if (nMaxTh < 1) {
		nMaxTh = 1;
	}
	std::shared_ptr<std::vector<std::shared_ptr<CBaseThread>>> listThreads = std::make_shared<std::vector<std::shared_ptr<CBaseThread>>>(nMaxTh);
	for (int i = 0; i < nMaxTh; i++) {
		(*listThreads)[i] = std::make_shared<CBaseThread>(std::make_shared<std::thread>(&CMultiWorkThread::doOneThread, this));
	}

	for (int i = 0; i < nMaxTh; i++) {
		(*listThreads)[i]->join();
	}

	// 全部处理结束
	// 开始分析 class 派生关系是否出现了递归
	// mapSmaliFile
	for (auto a = mapSmaliFile.begin(); a != mapSmaliFile.end(); a++) {

		std::vector<std::vector<std::string>> savedLink;
		std::vector<std::string> currentLink;
		savedLink.clear();
		currentLink.clear();
		checkClassInheritLink(savedLink, currentLink, a->first);
		if (savedLink.size() > 0) {
			for (auto b = savedLink.begin(); b != savedLink.end(); b++) {
				std::cout << "has loop ref ! ";
				for (auto c = b->begin(); c != b->end(); c++) {
					std::cout << "[" << *c << "]";
				}
				std::cout << std::endl;
			}

		}
	}

#ifndef _DEBUG
	TestAnnotationSignature::saveToMethodFile(strOutputDir);
	TestAnnotationSignature::saveToClassFile(strOutputDir);
	TestAnnotationSignature::saveToErrorFileList(strOutputDir);
	TestAnnotationSignature::saveToFieldFile(strOutputDir);
#endif

	// 
	std::filesystem::path fsPath(strOutputDir);
	std::filesystem::path toSavePath = fsPath.parent_path();
	toSavePath.append("build_all.bat");

	std::ofstream ifile(toSavePath.string(), std::ofstream::out);
	if (ifile.is_open()) {

		std::string strClang = "clang++ -std=c++17 -Wno-inaccessible-base -ferror-limit=5 -c ";
		//std::string strClang = "clang++ -std=c++20 -c ";

		//ifile << "clang++ -std=c++17 -Wno-inaccessible-base -o t ";
		ifile << strClang;
		int nCount = 0;
		for (auto a = listOutputFile.begin(); a != listOutputFile.end(); a++) {

			nCount++;
			ifile << (*a) << " ";
			if (nCount > 0) {
				nCount = 0;
				ifile << " -I./" << "\n";
				ifile << "\n";
				ifile << strClang;
			}
		}
		ifile << " -I./" << "\n";
		ifile << "\n";
		ifile.close();
	}
}
