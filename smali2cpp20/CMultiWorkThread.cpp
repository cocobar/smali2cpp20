#include "CMultiWorkThread.h"

#include <iostream>
#include "CSmaliClass.h"
#include <map>
#include <string>
#include <vector>
#include "TestAnnotationSignature.h"
#include "CBaseThread.h"


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

	// ������һ��Ŀ¼
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

	cSmaliClass->loadFile();
	cSmaliClass->processAllLine();

	// ���е��಻�����ȫ�������������������� Class ��
	mtxSmaliFileMap.lock();
	// CSmaliType(h->second->strClassName, nullptr).getBaseType()->getCppFileName();
	mapSmaliFile.insert(std::make_pair(cSmaliClass->getClassCppSaveName(), cSmaliClass));
	mtxSmaliFileMap.unlock();
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

void CMultiWorkThread::work() {
	int nMaxTh = this->nMaxThreadCounts;
	nCurrentIndex = 0;

	/*
	*
# ����`add.o`�ļ�
clang++ -c add.cc
# ����`libadd.a`��̬���ӿ�
ar -rcs libstr.a add.o
# ���ɶ������ļ�
clang++ -o t main.cc libadd.a
# ������ϵͳĿ¼�²��Ҿ�̬���ӿ������������̬���ӿ�`libadd.a`��`lib`��`.a`
clang++ -o t main.cc -ladd
# �����ָ��Ŀ¼������Ҫʹ��
clang++ -o t main.cc -L./ -l add
��������������������������������
��Ȩ����������ΪCSDN������bleedingfight����ԭ�����£���ѭCC 4.0 BY-SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https://blog.csdn.net/bleedingfight/article/details/80906556
	*/

	TestAnnotationSignature::clearData();

	if (nMaxTh < 1) {
		nMaxTh = 1;
	}
	std::shared_ptr<std::vector<std::shared_ptr<CBaseThread>>> listThreads = std::make_shared<std::vector<std::shared_ptr<CBaseThread>>>(nMaxTh);
	for (int i = 0; i < nMaxTh; i++) {
		(*listThreads)[i] = std::make_shared<CBaseThread>(std::make_shared<std::thread>(&CMultiWorkThread::doOneThread, this));
	}

	// �ȵ������߳̽���
	for (int i = 0; i < nMaxTh; i++) {
		(*listThreads)[i]->join();
	}
	listThreads = nullptr;

	// ���̷߳�ʽ����
	// ��ʼ���������ļ�
	int nTestCount = 5;
	for (auto a = mapSmaliFile.begin(); a != mapSmaliFile.end(); a++) {
		std::string strInputFile = a->second->getFilePath();
		std::unique_ptr<CodeDumper> d(new CodeDumper());
		std::filesystem::path fsPath(strInputFile);
		std::filesystem::path toSavePath = fsPath.parent_path();
		// ������һ��Ŀ¼
		if (strOutputDir.size() > 0) {
			toSavePath.append(strOutputDir);
		}
		else {
			toSavePath.append("..");
		}

		std::filesystem::path toSavePathHfile = toSavePath;
		std::filesystem::path toSavePathTfile = toSavePath;

		try {
			// ��� CPP �ļ�
			a->second->dumpToCpp(d.get());
			//d->dumpAll();
			toSavePath.append(a->second->getClassCppSaveName() + ".cpp");
			d->dumpToFile(toSavePath.string());
			d->clear();
			//system

			// ���������ļ������������Զ�����ű�
			mtxOutputList.lock();
			std::string strCppFileName = toSavePath.filename().string();
			this->listOutputFile.push_back(strCppFileName);
			mtxOutputList.unlock();

			// ��� H �ļ�
			// ��������������
			a->second->dumpToH(d.get());
			toSavePathHfile.append(a->second->getClassCppSaveName() + ".h");
			d->dumpToFile(toSavePathHfile.string());
			d->clear();
		}
		catch (std::string strErrorFile) {
			TestAnnotationSignature::insertErrorFileName(strErrorFile);
		}

		if (nTestCount-- == 0) {
			break;
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
	std::filesystem::path toSaveJava2CppPath = fsPath.parent_path();
	{// �������ͷ�ļ�
		toSaveJava2CppPath.append("java2ctype.h");
		std::ofstream ifile(toSaveJava2CppPath.string(), std::ofstream::out);
		if (ifile.is_open()) {
			ifile << "#ifndef __java2ctype_h__" << std::endl;
			ifile << "#define __java2ctype_h__" << std::endl;
			ifile << "#include <vector>" << std::endl;
			ifile << "#include <memory>" << std::endl;
			ifile << "#include <any>" << std::endl;
			ifile << "typedef bool boolean;" << std::endl;
			ifile << "class java2cBase {" << std::endl;
			ifile << "public:" << std::endl;
			ifile << "    java2cBase() {};" << std::endl;
			ifile << "    java2cBase(const java2cBase& mr) {};" << std::endl;
			ifile << "    virtual java2cBase& operator = (const java2cBase& mr) {" << std::endl;
			ifile << "        return *this;" << std::endl;
			ifile << "    };" << std::endl;
			ifile << "};" << std::endl;
			ifile << "#endif" << std::endl;
			ifile.close();
		}
	}

	{
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
}
