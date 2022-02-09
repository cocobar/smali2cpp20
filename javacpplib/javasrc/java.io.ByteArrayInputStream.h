#ifndef __java_io_ByteArrayInputStream__
#define __java_io_ByteArrayInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\ByteArrayInputStream.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"

namespace java::io{
class ByteArrayInputStream : public java::io::InputStream {
protected:
	std::shared_ptr<unsigned char[]> buf;
	int count;
	int mark;
	int pos;
private:
public:
	ByteArrayInputStream(std::shared_ptr<unsigned char[]> buf);
	ByteArrayInputStream(std::shared_ptr<unsigned char[]> buf,int offset,int length);
	int virtual available();
	void virtual close();
	void virtual mark(int readAheadLimit);
	bool virtual markSupported();
	int virtual read();
	int virtual read(std::shared_ptr<unsigned char[]> b,int off,int cVar2);
	void virtual reset();
	long long virtual skip(long long n);
public:
	virtual ~ByteArrayInputStream(){
	}

}; // class ByteArrayInputStream
}; // namespace java::io

#endif //__java_io_ByteArrayInputStream__

