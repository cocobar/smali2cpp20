#ifndef __java_io_ObjectStreamClass_S_ExceptionInfo__
#define __java_io_ObjectStreamClass_S_ExceptionInfo__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$ExceptionInfo.smali
#include "java2ctype.h"
#include "java.io.InvalidClassException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::io{
class ObjectStreamClass_S_ExceptionInfo : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::String> className;
	std::shared_ptr<java::lang::String> message;
public:
	ObjectStreamClass_S_ExceptionInfo(std::shared_ptr<java::lang::String> cn,std::shared_ptr<java::lang::String> msg);
	std::shared_ptr<java::io::InvalidClassException> virtual newInvalidClassException();
public:
	virtual ~ObjectStreamClass_S_ExceptionInfo(){
	}

}; // class ObjectStreamClass_S_ExceptionInfo
}; // namespace java::io

#endif //__java_io_ObjectStreamClass_S_ExceptionInfo__

