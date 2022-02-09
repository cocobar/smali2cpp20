#ifndef __dalvik_system_EmulatedStackFrame_S_StackFrameWriter__
#define __dalvik_system_EmulatedStackFrame_S_StackFrameWriter__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\EmulatedStackFrame$StackFrameWriter.smali
#include "java2ctype.h"
#include "dalvik.system.EmulatedStackFrame_S_StackFrameAccessor.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"

namespace dalvik::system{
class EmulatedStackFrame_S_StackFrameWriter : public dalvik::system::EmulatedStackFrame_S_StackFrameAccessor {
protected:
private:
public:
	EmulatedStackFrame_S_StackFrameWriter();
	void virtual putNextBoolean(bool value);
	void virtual putNextByte(unsigned char value);
	void virtual putNextChar(char value);
	void virtual putNextDouble(double value);
	void virtual putNextFloat(float value);
	void virtual putNextInt(int value);
	void virtual putNextLong(long long value);
	void virtual putNextReference(std::shared_ptr<java::lang::Object> value,std::shared_ptr<java::lang::Class<java::lang::Object>> expectedType);
	void virtual putNextShort(short value);
public:
	virtual ~EmulatedStackFrame_S_StackFrameWriter(){
	}

}; // class EmulatedStackFrame_S_StackFrameWriter
}; // namespace dalvik::system

#endif //__dalvik_system_EmulatedStackFrame_S_StackFrameWriter__

