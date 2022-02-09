#ifndef __java_io_CharConversionException__
#define __java_io_CharConversionException__
// H L:\smali2cpp20\x64\Release\out\java\io\CharConversionException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"

namespace java::io{
class CharConversionException : public java::io::IOException {
protected:
private:
	static long long serialVersionUID;
public:
	CharConversionException();
	CharConversionException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~CharConversionException(){
	}

}; // class CharConversionException
}; // namespace java::io

#endif //__java_io_CharConversionException__

