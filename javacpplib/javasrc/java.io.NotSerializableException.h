#ifndef __java_io_NotSerializableException__
#define __java_io_NotSerializableException__
// H L:\smali2cpp20\x64\Release\out\java\io\NotSerializableException.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamException.h"
#include "java.lang.String.h"

namespace java::io{
class NotSerializableException : public java::io::ObjectStreamException {
protected:
private:
	static long long serialVersionUID;
public:
	NotSerializableException();
	NotSerializableException(std::shared_ptr<java::lang::String> classname);
public:
	virtual ~NotSerializableException(){
	}

}; // class NotSerializableException
}; // namespace java::io

#endif //__java_io_NotSerializableException__

