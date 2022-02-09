#ifndef __java_io_UTFDataFormatException__
#define __java_io_UTFDataFormatException__
// H L:\smali2cpp20\x64\Release\out\java\io\UTFDataFormatException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"

namespace java::io{
class UTFDataFormatException : public java::io::IOException {
protected:
private:
	static long long serialVersionUID;
public:
	UTFDataFormatException();
	UTFDataFormatException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~UTFDataFormatException(){
	}

}; // class UTFDataFormatException
}; // namespace java::io

#endif //__java_io_UTFDataFormatException__

