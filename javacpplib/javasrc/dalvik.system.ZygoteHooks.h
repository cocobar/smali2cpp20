#ifndef __dalvik_system_ZygoteHooks__
#define __dalvik_system_ZygoteHooks__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\ZygoteHooks.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace dalvik::system{
class ZygoteHooks : public java::lang::Object {
protected:
private:
	long long token;
	static void nativePostForkChild(long long var0,int var1,bool var2,std::shared_ptr<java::lang::String> var3) = 0;
	static long long nativePreFork() = 0;
	static void waitUntilAllThreadsStopped();
public:
	ZygoteHooks();
	static void startZygoteNoThreadCreation() = 0;
	static void stopZygoteNoThreadCreation() = 0;
	void virtual postForkChild(int debugFlags,bool isSystemServer,std::shared_ptr<java::lang::String> instructionSet);
	void virtual postForkCommon();
	void virtual preFork();
public:
	virtual ~ZygoteHooks(){
	}

}; // class ZygoteHooks
}; // namespace dalvik::system

#endif //__dalvik_system_ZygoteHooks__

