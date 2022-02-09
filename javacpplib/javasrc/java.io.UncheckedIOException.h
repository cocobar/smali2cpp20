#ifndef __java_io_UncheckedIOException__
#define __java_io_UncheckedIOException__
// H L:\smali2cpp20\x64\Release\out\java\io\UncheckedIOException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

namespace java::io{
class UncheckedIOException : public java::lang::RuntimeException {
protected:
private:
	static long long serialVersionUID;
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> s);
public:
	UncheckedIOException(std::shared_ptr<java::io::IOException> cause);
	UncheckedIOException(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::io::IOException> cause);
	std::shared_ptr<java::io::IOException> virtual getCause();
public:
	virtual ~UncheckedIOException(){
	}

}; // class UncheckedIOException
}; // namespace java::io

#endif //__java_io_UncheckedIOException__

