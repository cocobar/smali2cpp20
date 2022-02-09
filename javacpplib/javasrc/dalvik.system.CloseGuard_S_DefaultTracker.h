#ifndef __dalvik_system_CloseGuard_S_DefaultTracker__
#define __dalvik_system_CloseGuard_S_DefaultTracker__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\CloseGuard$DefaultTracker.smali
#include "java2ctype.h"
#include "dalvik.system.CloseGuard_S_Tracker.h"
#include "java.lang.Throwable.h"

namespace dalvik::system{
class CloseGuard_S_DefaultTracker : public dalvik::system::CloseGuard_S_Tracker {
protected:
private:
	CloseGuard_S_DefaultTracker();
public:
	CloseGuard_S_DefaultTracker(std::shared_ptr<dalvik::system::CloseGuard_S_DefaultTracker> _this0);
	void virtual close(std::shared_ptr<java::lang::Throwable> allocationSite);
	void virtual open(std::shared_ptr<java::lang::Throwable> allocationSite);
public:
	virtual ~CloseGuard_S_DefaultTracker(){
	}

}; // class CloseGuard_S_DefaultTracker
}; // namespace dalvik::system

#endif //__dalvik_system_CloseGuard_S_DefaultTracker__

