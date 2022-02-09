#ifndef __java_io_InvalidClassException__
#define __java_io_InvalidClassException__
// H L:\smali2cpp20\x64\Release\out\java\io\InvalidClassException.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamException.h"
#include "java.lang.String.h"

namespace java::io{
class InvalidClassException : public java::io::ObjectStreamException {
protected:
private:
	static long long serialVersionUID;
public:
	std::shared_ptr<java::lang::String> classname;
	InvalidClassException(std::shared_ptr<java::lang::String> reason);
	InvalidClassException(std::shared_ptr<java::lang::String> cname,std::shared_ptr<java::lang::String> reason);
	std::shared_ptr<java::lang::String> virtual getMessage();
public:
	virtual ~InvalidClassException(){
	}

}; // class InvalidClassException
}; // namespace java::io

#endif //__java_io_InvalidClassException__

