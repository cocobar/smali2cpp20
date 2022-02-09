#ifndef __java_io_CharArrayReader__
#define __java_io_CharArrayReader__
// H L:\smali2cpp20\x64\Release\out\java\io\CharArrayReader.smali
#include "java2ctype.h"
#include "java.io.Reader.h"

namespace java::io{
class CharArrayReader : public java::io::Reader {
protected:
	std::shared_ptr<char[]> buf;
	int count;
	int markedPos;
	int pos;
private:
	void virtual ensureOpen();
public:
	CharArrayReader(std::shared_ptr<char[]> buf);
	CharArrayReader(std::shared_ptr<char[]> buf,int offset,int length);
	void virtual close();
	void virtual mark(int readAheadLimit);
	bool virtual markSupported();
	int virtual read();
	int virtual read(std::shared_ptr<char[]> b,int off,int cVar3);
	bool virtual ready();
	void virtual reset();
	long long virtual skip(long long cVar2);
public:
	virtual ~CharArrayReader(){
	}

}; // class CharArrayReader
}; // namespace java::io

#endif //__java_io_CharArrayReader__

