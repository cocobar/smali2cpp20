#ifndef __dalvik_system_CloseGuard_S_DefaultReporter__
#define __dalvik_system_CloseGuard_S_DefaultReporter__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\CloseGuard$DefaultReporter.smali
#include "java2ctype.h"
#include "dalvik.system.CloseGuard_S_Reporter.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace dalvik::system{
class CloseGuard_S_DefaultReporter : public dalvik::system::CloseGuard_S_Reporter {
protected:
private:
	CloseGuard_S_DefaultReporter();
public:
	CloseGuard_S_DefaultReporter(std::shared_ptr<dalvik::system::CloseGuard_S_DefaultReporter> _this0);
	void virtual report(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> allocationSite);
public:
	virtual ~CloseGuard_S_DefaultReporter(){
	}

}; // class CloseGuard_S_DefaultReporter
}; // namespace dalvik::system

#endif //__dalvik_system_CloseGuard_S_DefaultReporter__

