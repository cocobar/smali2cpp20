#ifndef __java_io_LineNumberInputStream__
#define __java_io_LineNumberInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\LineNumberInputStream.smali
#include "java2ctype.h"
#include "java.io.FilterInputStream.h"
#include "java.io.InputStream.h"

namespace java::io{
class LineNumberInputStream : public java::io::FilterInputStream {
protected:
private:
public:
	int lineNumber;
	int markLineNumber;
	int markPushBack;
	int pushBack;
	LineNumberInputStream(std::shared_ptr<java::io::InputStream> in);
	int virtual available();
	int virtual getLineNumber();
	void virtual mark(int readlimit);
	int virtual read();
	int virtual read(std::shared_ptr<unsigned char[]> b,int off,int len);
	void virtual reset();
	void virtual setLineNumber(int lineNumber);
	long long virtual skip(long long n);
public:
	virtual ~LineNumberInputStream(){
	}

}; // class LineNumberInputStream
}; // namespace java::io

#endif //__java_io_LineNumberInputStream__

