
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
	friend CSmaliClass;
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
	static inline std::map<std::string, std::shared_ptr<CSmaliClass>> mapSmaliFile;
public:
	CMultiWorkThread(std::map<int, std::string> listFileInput, std::string& strOutDir, int nMaxThreads);
	void doOneFile(std::string strInputFile, std::string strOutputDir);
	void doOneThread();
	void work();
};


#endif
