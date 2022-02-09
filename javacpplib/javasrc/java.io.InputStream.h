#ifndef __java_io_InputStream__
#define __java_io_InputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\InputStream.smali
#include "java2ctype.h"
#include "java.io.Closeable.h"

namespace java::io{
class InputStream : public java::io::Closeable {
protected:
private:
	static int MAX_SKIP_BUFFER_SIZE;
public:
	InputStream();
	int virtual available();
	void virtual close();
	void virtual mark(int readlimit);
	bool virtual markSupported();
	int read();
	int virtual read(std::shared_ptr<unsigned char[]> b);
	int virtual read(std::shared_ptr<unsigned char[]> b,int off,int len);
	void virtual reset();
	long long virtual skip(long long n);
public:
	virtual ~InputStream(){
	}

}; // class InputStream
}; // namespace java::io

#endif //__java_io_InputStream__

