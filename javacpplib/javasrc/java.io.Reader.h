#ifndef __java_io_Reader__
#define __java_io_Reader__
// H L:\smali2cpp20\x64\Release\out\java\io\Reader.smali
#include "java2ctype.h"
#include "java.io.Closeable.h"
#include "java.lang.Object.h"
#include "java.lang.Readable.h"
#include "java.nio.CharBuffer.h"

namespace java::io{
class Reader : public java::lang::Readable, public java::io::Closeable {
protected:
	std::shared_ptr<java::lang::Object> lock;
	Reader();
	Reader(std::shared_ptr<java::lang::Object> lock);
private:
	static int maxSkipBufferSize;
	std::shared_ptr<char[]> skipBuffer;
public:
	void close();
	void virtual mark(int readAheadLimit);
	bool virtual markSupported();
	int virtual read();
	int virtual read(std::shared_ptr<java::nio::CharBuffer> target);
	int virtual read(std::shared_ptr<char[]> cbuf);
	int read(std::shared_ptr<char[]> var0,int var1,int var2);
	bool virtual ready();
	void virtual reset();
	long long virtual skip(long long n);
public:
	virtual ~Reader(){
	}

}; // class Reader
}; // namespace java::io

#endif //__java_io_Reader__

