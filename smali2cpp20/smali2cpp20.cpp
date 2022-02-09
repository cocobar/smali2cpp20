// smali2cpp20.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

//#include <system>
#include "SmaliClass.h"
#include "config.hpp"
#include <map>
#include "CMultiWorkThread.h"
#include <regex>
#include "TestAnnotationSignature.h"

int main(int argc, char* argv[])
{
	if (argc > 1) {

		// xx --listfile nnn  --outputdir mmm
		std::string strListFile = "";
		std::string strOutputDir = "";
		for (int i = 1; i < argc; i++) {
			if (std::string(argv[i]) == "--listfile") {
				if (i + 1 < argc) {
					strListFile = std::string(argv[i + 1]);
					i++;
				}
			}
			if (std::string(argv[i]) == "--outputdir") {
				if (i + 1 < argc) {
					strOutputDir = std::string(argv[i + 1]);
					i++;
				}
			}
		}


		std::map<int, std::string> listSmaliFile;		// 保存所有的文件名
		std::filesystem::path fsPath(strListFile);
		if (std::filesystem::exists(fsPath)) {
			std::ifstream ifile(strListFile, std::ifstream::in);
			int nCurrentLineIndex = 0;
			if (ifile.is_open()) {
				std::string strLine;

				while (std::getline(ifile, strLine)) {
					std::smatch m;
					if (std::regex_search(strLine, m, std::regex("^\\s*([\\w\\\\$-:.]+[.]smali)\\s*$")) && (m.size() == 2)) {
						strLine = m[1];
						if (strLine.length() > 0) {
							listSmaliFile.insert(std::make_pair(nCurrentLineIndex++, strLine));
						}
						//printf("%s\n", strLine.c_str());
					}
					else {
						BaseAssert(0);
					}


				}
				ifile.close();
			}
		}
		int nMaxThread = 16;

#ifdef _DEBUG
		nMaxThread = 1;

		//TestAnnotationSignature::load$MethodTest(strOutputDir);
		//TestAnnotationSignature::load$ClassTest(strOutputDir);
		//TestAnnotationSignature::load$FieldTest(strOutputDir);
#if 0
		std::cout << "finished!\n";
		return 0;
#endif
#endif


		auto run = CMultiWorkThread(listSmaliFile, strOutputDir, nMaxThread);
		run.work();
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
