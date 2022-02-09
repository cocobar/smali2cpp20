#ifndef __dalvik_system_EmulatedStackFrame__
#define __dalvik_system_EmulatedStackFrame__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\EmulatedStackFrame.smali
#include "java2ctype.h"
#include "dalvik.system.EmulatedStackFrame_S_Range.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.invoke.MethodType.h"

namespace dalvik::system{
class EmulatedStackFrame : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::invoke::MethodType> callsiteType;
	std::shared_ptr<std::vector<java::lang::Object>> references;
	std::shared_ptr<unsigned char[]> stackFrame;
	std::shared_ptr<java::lang::invoke::MethodType> type;
	EmulatedStackFrame(std::shared_ptr<java::lang::invoke::MethodType> type,std::shared_ptr<java::lang::invoke::MethodType> callsiteType,std::shared_ptr<std::vector<java::lang::Object>> references,std::shared_ptr<unsigned char[]> stackFrame);
	static bool is64BitPrimitive(std::shared_ptr<java::lang::Class<java::lang::Object>> type);
public:
	static std::shared_ptr<java::lang::Object> _get0(std::shared_ptr<dalvik::system::EmulatedStackFrame> _this);
	static unsigned char _get1(std::shared_ptr<dalvik::system::EmulatedStackFrame> _this);
	static std::shared_ptr<java::lang::invoke::MethodType> _get2(std::shared_ptr<dalvik::system::EmulatedStackFrame> _this);
	static std::shared_ptr<dalvik::system::EmulatedStackFrame> create(std::shared_ptr<java::lang::invoke::MethodType> frameType);
	static int getSize(std::shared_ptr<java::lang::Class<java::lang::Object>> type);
	void virtual copyRangeTo(std::shared_ptr<dalvik::system::EmulatedStackFrame> other,std::shared_ptr<dalvik::system::EmulatedStackFrame_S_Range> fromRange,int referencesStart,int primitivesStart);
	void virtual copyReturnValueTo(std::shared_ptr<dalvik::system::EmulatedStackFrame> other);
	std::shared_ptr<java::lang::invoke::MethodType> virtual getCallsiteType();
	std::shared_ptr<java::lang::invoke::MethodType> virtual getMethodType();
	std::shared_ptr<T> virtual getReference(int idx,std::shared_ptr<java::lang::Class<T>> referenceType);
	void virtual setReference(int idx,std::shared_ptr<java::lang::Object> reference);
	void virtual setReturnValueTo(std::shared_ptr<java::lang::Object> reference);
public:
	virtual ~EmulatedStackFrame(){
	}

}; // class EmulatedStackFrame
}; // namespace dalvik::system

#endif //__dalvik_system_EmulatedStackFrame__

