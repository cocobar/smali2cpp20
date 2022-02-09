#ifndef __java_io_WriteAbortedException__
#define __java_io_WriteAbortedException__
// H L:\smali2cpp20\x64\Release\out\java\io\WriteAbortedException.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamException.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace java::io{
class WriteAbortedException : public java::io::ObjectStreamException {
protected:
private:
	static long long serialVersionUID;
public:
	std::shared_ptr<java::lang::Exception> detail;
	WriteAbortedException(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::Exception> ex);
	std::shared_ptr<java::lang::Throwable> virtual getCause();
	std::shared_ptr<java::lang::String> virtual getMessage();
public:
	virtual ~WriteAbortedException(){
	}

}; // class WriteAbortedException
}; // namespace java::io

#endif //__java_io_WriteAbortedException__

