#ifndef __dalvik_system_EmulatedStackFrame_S_StackFrameReader__
#define __dalvik_system_EmulatedStackFrame_S_StackFrameReader__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\EmulatedStackFrame$StackFrameReader.smali
#include "java2ctype.h"
#include "dalvik.system.EmulatedStackFrame_S_StackFrameAccessor.h"
#include "java.lang.Class.h"

namespace dalvik::system{
class EmulatedStackFrame_S_StackFrameReader : public dalvik::system::EmulatedStackFrame_S_StackFrameAccessor {
protected:
private:
public:
	EmulatedStackFrame_S_StackFrameReader();
	bool virtual nextBoolean();
	unsigned char virtual nextByte();
	char virtual nextChar();
	double virtual nextDouble();
	float virtual nextFloat();
	int virtual nextInt();
	long long virtual nextLong();
	std::shared_ptr<T> virtual nextReference(std::shared_ptr<java::lang::Class<T>> expectedType);
	short virtual nextShort();
public:
	virtual ~EmulatedStackFrame_S_StackFrameReader(){
	}

}; // class EmulatedStackFrame_S_StackFrameReader
}; // namespace dalvik::system

#endif //__dalvik_system_EmulatedStackFrame_S_StackFrameReader__

