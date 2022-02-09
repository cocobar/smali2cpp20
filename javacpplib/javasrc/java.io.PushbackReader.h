#ifndef __java_io_PushbackReader__
#define __java_io_PushbackReader__
// H L:\smali2cpp20\x64\Release\out\java\io\PushbackReader.smali
#include "java2ctype.h"
#include "java.io.FilterReader.h"
#include "java.io.Reader.h"

namespace java::io{
class PushbackReader : public java::io::FilterReader {
protected:
private:
	std::shared_ptr<char[]> buf;
	int pos;
	void virtual ensureOpen();
public:
	PushbackReader(std::shared_ptr<java::io::Reader> in);
	PushbackReader(std::shared_ptr<java::io::Reader> in,int size);
	void virtual close();
	void virtual mark(int readAheadLimit);
	bool virtual markSupported();
	int virtual read();
	int virtual read(std::shared_ptr<char[]> cbuf,int off,int cVar5);
	bool virtual ready();
	void virtual reset();
	long long virtual skip(long long cVar2);
	void virtual unread(int c);
	void virtual unread(std::shared_ptr<char[]> cbuf);
	void virtual unread(std::shared_ptr<char[]> cbuf,int off,int len);
public:
	virtual ~PushbackReader(){
	}

}; // class PushbackReader
}; // namespace java::io

#endif //__java_io_PushbackReader__

