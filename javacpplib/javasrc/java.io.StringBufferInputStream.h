#ifndef __java_io_StringBufferInputStream__
#define __java_io_StringBufferInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\StringBufferInputStream.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.lang.String.h"

namespace java::io{
class StringBufferInputStream : public java::io::InputStream {
protected:
	std::shared_ptr<java::lang::String> buffer;
	int count;
	int pos;
private:
public:
	StringBufferInputStream(std::shared_ptr<java::lang::String> s);
	int virtual available();
	int virtual read();
	int virtual read(std::shared_ptr<unsigned char[]> b,int off,int cVar3);
	void virtual reset();
	long long virtual skip(long long cVar1);
public:
	virtual ~StringBufferInputStream(){
	}

}; // class StringBufferInputStream
}; // namespace java::io

#endif //__java_io_StringBufferInputStream__

