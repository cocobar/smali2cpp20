#ifndef __dalvik_system_EmulatedStackFrame_S_Range__
#define __dalvik_system_EmulatedStackFrame_S_Range__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\EmulatedStackFrame$Range.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.invoke.MethodType.h"

namespace dalvik::system{
class EmulatedStackFrame_S_Range : public java::lang::Object {
protected:
private:
	EmulatedStackFrame_S_Range(int referencesStart,int numReferences,int stackFrameStart,int numBytes);
public:
	int numBytes;
	int numReferences;
	int referencesStart;
	int stackFrameStart;
	static std::shared_ptr<dalvik::system::EmulatedStackFrame_S_Range> all(std::shared_ptr<java::lang::invoke::MethodType> frameType);
	static std::shared_ptr<dalvik::system::EmulatedStackFrame_S_Range> of(std::shared_ptr<java::lang::invoke::MethodType> frameType,int startArg,int endArg);
public:
	virtual ~EmulatedStackFrame_S_Range(){
	}

}; // class EmulatedStackFrame_S_Range
}; // namespace dalvik::system

#endif //__dalvik_system_EmulatedStackFrame_S_Range__

