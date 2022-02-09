#ifndef __java_io_IOError__
#define __java_io_IOError__
// H L:\smali2cpp20\x64\Release\out\java\io\IOError.smali
#include "java2ctype.h"
#include "java.lang.Error.h"
#include "java.lang.Throwable.h"

namespace java::io{
class IOError : public java::lang::Error {
protected:
private:
	static long long serialVersionUID;
public:
	IOError(std::shared_ptr<java::lang::Throwable> cause);
public:
	virtual ~IOError(){
	}

}; // class IOError
}; // namespace java::io

#endif //__java_io_IOError__
