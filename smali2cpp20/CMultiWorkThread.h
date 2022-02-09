
#ifndef __CMultiWorkThread_H__
#define __CMultiWorkThread_H__

#include <string>
#include <mutex>
#include <map>
#include <vector>
#include <memory>

class CSmaliClass;

class CMultiWorkThread
{
private:
	CMultiWorkThread();
	std::mutex mtxInputList;
	std::mutex mtxSmaliFileMap;
	std::map<int, std::string> listFiles;

	int nMaxThreadCounts;
	int nCurrentIndex = 0;
	int nTotalCounts = 0;
	std::mutex mtxClang;
	std::string strOutputDir;
	std::mutex mtxOutputList;
	std::vector<std::string> listOutputFile;

	std::map<std::string, std::shared_ptr<CSmaliClass>> mapSmaliFile;

public:

	bool checkClassInheritLink(std::vector<std::vector<std::string>> & savedLink, std::vector<std::string> listLink, std::string strCurrentClass);
	CMultiWorkThread(std::map<int, std::string> listFileInput, std::string& strOutDir, int nMaxThreads);
	void doOneFile(std::string strInputFile, std::string strOutputDir);
	void doOneThread();
	void work();
};


#endif
