#ifndef __java_io_Console_S_LineReader__
#define __java_io_Console_S_LineReader__
// H L:\smali2cpp20\x64\Release\out\java\io\Console$LineReader.smali
#include "java2ctype.h"
#include "java.io.Console.h"
#include "java.io.Reader.h"

namespace java::io{
class Console_S_LineReader : public java::io::Reader {
protected:
private:
	std::shared_ptr<char[]> cb;
	std::shared_ptr<java::io::Reader> in;
	int nChars;
	int nextChar;
public:
	bool leftoverLF;
	std::shared_ptr<java::io::Console> this_S_0;
	Console_S_LineReader(std::shared_ptr<java::io::Console> this_S_0,std::shared_ptr<java::io::Reader> in);
	void virtual close();
	int virtual read(std::shared_ptr<char[]> cbuf,int offset,int length);
	bool virtual ready();
public:
	virtual ~Console_S_LineReader(){
	}

}; // class Console_S_LineReader
}; // namespace java::io

#endif //__java_io_Console_S_LineReader__

