#ifndef __java_io_ObjectOutputStream_S_DebugTraceInfoStack__
#define __java_io_ObjectOutputStream_S_DebugTraceInfoStack__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream$DebugTraceInfoStack.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace java::io{
class ObjectOutputStream_S_DebugTraceInfoStack : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::List<java::lang::String>> stack;
public:
	ObjectOutputStream_S_DebugTraceInfoStack();
	void virtual clear();
	void virtual pop();
	void virtual push(std::shared_ptr<java::lang::String> entry);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~ObjectOutputStream_S_DebugTraceInfoStack(){
	}

}; // class ObjectOutputStream_S_DebugTraceInfoStack
}; // namespace java::io

#endif //__java_io_ObjectOutputStream_S_DebugTraceInfoStack__

