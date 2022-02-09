#ifndef __android_icu_impl_ICURWLock__
#define __android_icu_impl_ICURWLock__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICURWLock.smali
#include "java2ctype.h"
#include "android.icu.impl.ICURWLock_S_Stats.h"
#include "java.lang.Object.h"
#include "java.util.concurrent.locks.ReentrantReadWriteLock.h"

namespace android::icu::impl{
class ICURWLock : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::concurrent::locks::ReentrantReadWriteLock> rwl;
	std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> stats;
public:
	ICURWLock();
	void virtual acquireRead();
	void virtual acquireWrite();
	std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> virtual clearStats();
	std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> virtual getStats();
	void virtual releaseRead();
	void virtual releaseWrite();
	std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> virtual resetStats();
public:
	virtual ~ICURWLock(){
	}

}; // class ICURWLock
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICURWLock__

