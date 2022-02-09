#ifndef __dalvik_system_CloseGuard_S_Reporter__
#define __dalvik_system_CloseGuard_S_Reporter__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\CloseGuard$Reporter.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace dalvik::system{
class CloseGuard_S_Reporter : public java::lang::Object {
protected:
private:
public:
	void report(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::Throwable> var1) = 0;
	CloseGuard_S_Reporter(){ };
	virtual ~CloseGuard_S_Reporter(){ };

}; // class CloseGuard_S_Reporter
}; // namespace dalvik::system

#endif //__dalvik_system_CloseGuard_S_Reporter__

