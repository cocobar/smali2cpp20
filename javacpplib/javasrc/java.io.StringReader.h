#ifndef __java_io_StringReader__
#define __java_io_StringReader__
// H L:\smali2cpp20\x64\Release\out\java\io\StringReader.smali
#include "java2ctype.h"
#include "java.io.Reader.h"
#include "java.lang.String.h"

namespace java::io{
class StringReader : public java::io::Reader {
protected:
private:
	int length;
	int mark;
	int next;
	std::shared_ptr<java::lang::String> str;
	void virtual ensureOpen();
public:
	StringReader(std::shared_ptr<java::lang::String> s);
	void virtual close();
	void virtual mark(int readAheadLimit);
	bool virtual markSupported();
	int virtual read();
	int virtual read(std::shared_ptr<char[]> cbuf,int off,int len);
	bool virtual ready();
	void virtual reset();
	long long virtual skip(long long ns);
public:
	virtual ~StringReader(){
	}

}; // class StringReader
}; // namespace java::io

#endif //__java_io_StringReader__

