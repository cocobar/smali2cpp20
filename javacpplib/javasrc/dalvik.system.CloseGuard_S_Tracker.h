#ifndef __dalvik_system_CloseGuard_S_Tracker__
#define __dalvik_system_CloseGuard_S_Tracker__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\CloseGuard$Tracker.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.Throwable.h"

namespace dalvik::system{
class CloseGuard_S_Tracker : public java::lang::Object {
protected:
private:
public:
	void close(std::shared_ptr<java::lang::Throwable> var0) = 0;
	void open(std::shared_ptr<java::lang::Throwable> var0) = 0;
	CloseGuard_S_Tracker(){ };
	virtual ~CloseGuard_S_Tracker(){ };

}; // class CloseGuard_S_Tracker
}; // namespace dalvik::system

#endif //__dalvik_system_CloseGuard_S_Tracker__

