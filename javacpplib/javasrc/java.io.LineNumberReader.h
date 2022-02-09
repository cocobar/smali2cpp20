#ifndef __java_io_LineNumberReader__
#define __java_io_LineNumberReader__
// H L:\smali2cpp20\x64\Release\out\java\io\LineNumberReader.smali
#include "java2ctype.h"
#include "java.io.BufferedReader.h"
#include "java.io.Reader.h"
#include "java.lang.String.h"

namespace java::io{
class LineNumberReader : public java::io::BufferedReader {
protected:
private:
	static int maxSkipBufferSize;
	int lineNumber;
	int markedLineNumber;
	bool markedSkipLF;
	std::shared_ptr<char[]> skipBuffer;
	bool skipLF;
public:
	LineNumberReader(std::shared_ptr<java::io::Reader> in);
	LineNumberReader(std::shared_ptr<java::io::Reader> in,int sz);
	int virtual getLineNumber();
	void virtual mark(int readAheadLimit);
	int virtual read();
	int virtual read(std::shared_ptr<char[]> cbuf,int off,int len);
	std::shared_ptr<java::lang::String> virtual readLine();
	void virtual reset();
	void virtual setLineNumber(int lineNumber);
	long long virtual skip(long long n);
public:
	virtual ~LineNumberReader(){
	}

}; // class LineNumberReader
}; // namespace java::io

#endif //__java_io_LineNumberReader__

