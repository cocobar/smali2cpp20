#ifndef __dalvik_system_NativeStart__
#define __dalvik_system_NativeStart__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\NativeStart.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace dalvik::system{
class NativeStart : public java::lang::Object {
protected:
private:
	NativeStart();
	static void main(std::shared_ptr<std::vector<java::lang::String>> var0) = 0;
	static void run() = 0;
public:
public:
	virtual ~NativeStart(){
	}

}; // class NativeStart
}; // namespace dalvik::system

#endif //__dalvik_system_NativeStart__

