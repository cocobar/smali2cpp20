#ifndef __BASE_THREAD_H__
#define __BASE_THREAD_H__

#include <thread>
#include <map>
#include <mutex>
#include <memory>
#include "CBaseObject.h"

#include <cassert>

class CBaseObject;
class CBaseThread : public CBaseObject {

private:
	static inline std::mutex mtxThreadList;
	static inline std::map<std::thread::id, CBaseThread*> listBaseThread;

	std::string strWorkFile;
	std::shared_ptr<std::thread> ptrThread;

public:

	void join() {
		ptrThread->join();
	}

	CBaseThread(std::shared_ptr<std::thread> inputhread) {
		ptrThread = inputhread;
		mtxThreadList.lock();


		auto id = ptrThread->get_id();
		auto aa = listBaseThread.find(id);
		if (aa != listBaseThread.end()) {
			mtxThreadList.unlock();
			assert(0);
			return;
		}
		else {
			listBaseThread.insert(std::make_pair(id, this));
		}
		mtxThreadList.unlock();
	};

	virtual ~CBaseThread() {
		mtxThreadList.lock();
		auto id = ptrThread->get_id();
		auto aa = listBaseThread.find(id);
		if (aa != listBaseThread.end()) {
			listBaseThread.erase(aa);
			mtxThreadList.unlock();
		}
		else {
			mtxThreadList.unlock();
			//assert(0);
			return;
		}
	}

	static std::string getCurrentThreadWorkFile() {
		std::string strWorkFile;
		mtxThreadList.lock();
		auto id = std::this_thread::get_id();
		auto aa = listBaseThread.find(id);
		if (aa != listBaseThread.end()) {
			strWorkFile = aa->second->strWorkFile;
		}
		else {
			mtxThreadList.unlock();
			assert(0);
			return strWorkFile;
		}

		mtxThreadList.unlock();

		return strWorkFile;
	}

	static void setCurrentThreadWorkFile(std::string strWorkFile) {
		mtxThreadList.lock();
		auto id = std::this_thread::get_id();
		auto aa = listBaseThread.find(id);
		if (aa != listBaseThread.end()) {
			aa->second->strWorkFile = strWorkFile;
		}
		else {
			mtxThreadList.unlock();
			assert(0);
			return;
		}
		mtxThreadList.unlock();
	}
};












#endif
