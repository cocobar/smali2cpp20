#ifndef __java_io_PushbackInputStream__
#define __java_io_PushbackInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\PushbackInputStream.smali
#include "java2ctype.h"
#include "java.io.FilterInputStream.h"
#include "java.io.InputStream.h"

namespace java::io{
class PushbackInputStream : public java::io::FilterInputStream {
protected:
	std::shared_ptr<unsigned char[]> buf;
	int pos;
private:
	void virtual ensureOpen();
public:
	PushbackInputStream(std::shared_ptr<java::io::InputStream> in);
	PushbackInputStream(std::shared_ptr<java::io::InputStream> in,int size);
	int virtual available();
	void virtual close();
	void virtual mark(int readlimit);
	bool virtual markSupported();
	int virtual read();
	int virtual read(std::shared_ptr<unsigned char[]> b,int off,int cVar3);
	void virtual reset();
	long long virtual skip(long long cVar1);
	void virtual unread(int b);
	void virtual unread(std::shared_ptr<unsigned char[]> b);
	void virtual unread(std::shared_ptr<unsigned char[]> b,int off,int len);
public:
	virtual ~PushbackInputStream(){
	}

}; // class PushbackInputStream
}; // namespace java::io

#endif //__java_io_PushbackInputStream__

