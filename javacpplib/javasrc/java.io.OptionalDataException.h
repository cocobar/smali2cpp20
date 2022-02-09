#ifndef __java_io_OptionalDataException__
#define __java_io_OptionalDataException__
// H L:\smali2cpp20\x64\Release\out\java\io\OptionalDataException.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamException.h"

namespace java::io{
class OptionalDataException : public java::io::ObjectStreamException {
protected:
private:
	static long long serialVersionUID;
public:
	bool eof;
	int length;
	OptionalDataException(int len);
	OptionalDataException(bool end);
public:
	virtual ~OptionalDataException(){
	}

}; // class OptionalDataException
}; // namespace java::io

#endif //__java_io_OptionalDataException__

