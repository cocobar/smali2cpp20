#ifndef __java_io_IOException__
#define __java_io_IOException__
// H L:\smali2cpp20\x64\Release\out\java\io\IOException.smali
#include "java2ctype.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace java::io{
class IOException : public java::lang::Exception {
protected:
private:
public:
	static long long serialVersionUID;
	IOException();
	IOException(std::shared_ptr<java::lang::String> message);
	IOException(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause);
	IOException(std::shared_ptr<java::lang::Throwable> cause);
public:
	virtual ~IOException(){
	}

}; // class IOException
}; // namespace java::io

#endif //__java_io_IOException__

