#ifndef __dalvik_system_VMStack__
#define __dalvik_system_VMStack__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\VMStack.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.StackTraceElement.h"
#include "java.lang.Thread.h"

namespace dalvik::system{
class VMStack : public java::lang::Object {
protected:
private:
public:
	VMStack();
	static int fillStackTraceElements(std::shared_ptr<java::lang::Thread> var0,std::shared_ptr<std::vector<java::lang::StackTraceElement>> var1);
	static std::shared_ptr<java::lang::ClassLoader> getCallingClassLoader();
	static std::shared_ptr<java::lang::ClassLoader> getClosestUserClassLoader();
	static std::shared_ptr<java::lang::Class<java::lang::Object>> getStackClass1();
	static std::shared_ptr<java::lang::Class<java::lang::Object>> getStackClass2();
	static std::shared_ptr<java::lang::StackTraceElement> getThreadStackTrace(std::shared_ptr<java::lang::Thread> var0);
public:
	virtual ~VMStack(){
	}

}; // class VMStack
}; // namespace dalvik::system

#endif //__dalvik_system_VMStack__

