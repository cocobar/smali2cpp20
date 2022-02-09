#ifndef __dalvik_system_EmulatedStackFrame_S_StackFrameAccessor__
#define __dalvik_system_EmulatedStackFrame_S_StackFrameAccessor__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\EmulatedStackFrame$StackFrameAccessor.smali
#include "java2ctype.h"
#include "dalvik.system.EmulatedStackFrame_S_StackFrameReader.h"
#include "dalvik.system.EmulatedStackFrame_S_StackFrameWriter.h"
#include "dalvik.system.EmulatedStackFrame.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.nio.ByteBuffer.h"

namespace dalvik::system{
class EmulatedStackFrame_S_StackFrameAccessor : public java::lang::Object {
protected:
	int argumentIdx;
	std::shared_ptr<dalvik::system::EmulatedStackFrame> frame;
	std::shared_ptr<java::nio::ByteBuffer> frameBuf;
	int referencesOffset;
	EmulatedStackFrame_S_StackFrameAccessor();
	void virtual checkType(std::shared_ptr<java::lang::Class<java::lang::Object>> type);
private:
	static int RETURN_VALUE_IDX;
	int numArgs;
public:
	static void copyNext(std::shared_ptr<dalvik::system::EmulatedStackFrame_S_StackFrameReader> reader,std::shared_ptr<dalvik::system::EmulatedStackFrame_S_StackFrameWriter> writer,std::shared_ptr<java::lang::Class<java::lang::Object>> type);
	std::shared_ptr<dalvik::system::EmulatedStackFrame_S_StackFrameAccessor> virtual attach(std::shared_ptr<dalvik::system::EmulatedStackFrame> stackFrame);
	std::shared_ptr<dalvik::system::EmulatedStackFrame_S_StackFrameAccessor> virtual attach(std::shared_ptr<dalvik::system::EmulatedStackFrame> stackFrame,int argumentIdx,int referencesOffset,int frameOffset);
	void virtual makeReturnValueAccessor();
public:
	virtual ~EmulatedStackFrame_S_StackFrameAccessor(){
	}

}; // class EmulatedStackFrame_S_StackFrameAccessor
}; // namespace dalvik::system

#endif //__dalvik_system_EmulatedStackFrame_S_StackFrameAccessor__

