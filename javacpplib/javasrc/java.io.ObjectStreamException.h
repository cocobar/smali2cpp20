#ifndef __java_io_ObjectStreamException__
#define __java_io_ObjectStreamException__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"

namespace java::io{
class ObjectStreamException : public java::io::IOException {
protected:
	ObjectStreamException();
	ObjectStreamException(std::shared_ptr<java::lang::String> classname);
private:
	static long long serialVersionUID;
public:
public:
	virtual ~ObjectStreamException(){
	}

}; // class ObjectStreamException
}; // namespace java::io

#endif //__java_io_ObjectStreamException__

