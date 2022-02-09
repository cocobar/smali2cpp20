#ifndef __java_io_NotActiveException__
#define __java_io_NotActiveException__
// H L:\smali2cpp20\x64\Release\out\java\io\NotActiveException.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamException.h"
#include "java.lang.String.h"

namespace java::io{
class NotActiveException : public java::io::ObjectStreamException {
protected:
private:
	static long long serialVersionUID;
public:
	NotActiveException();
	NotActiveException(std::shared_ptr<java::lang::String> reason);
public:
	virtual ~NotActiveException(){
	}

}; // class NotActiveException
}; // namespace java::io

#endif //__java_io_NotActiveException__

