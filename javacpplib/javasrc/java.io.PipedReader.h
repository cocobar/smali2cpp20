#ifndef __java_io_PipedReader__
#define __java_io_PipedReader__
// H L:\smali2cpp20\x64\Release\out\java\io\PipedReader.smali
#include "java2ctype.h"
#include "java.io.PipedWriter.h"
#include "java.io.Reader.h"
#include "java.lang.Thread.h"

namespace java::io{
class PipedReader : public java::io::Reader {
protected:
private:
	static int DEFAULT_PIPE_SIZE;
	void virtual initPipe(int pipeSize);
public:
	std::shared_ptr<char[]> buffer;
	bool closedByReader;
	bool closedByWriter;
	bool connected;
	int in;
	int out;
	std::shared_ptr<java::lang::Thread> readSide;
	std::shared_ptr<java::lang::Thread> writeSide;
	PipedReader();
	PipedReader(int pipeSize);
	PipedReader(std::shared_ptr<java::io::PipedWriter> src);
	PipedReader(std::shared_ptr<java::io::PipedWriter> src,int pipeSize);
	void virtual close();
	void virtual connect(std::shared_ptr<java::io::PipedWriter> src);
	int virtual read();
	int virtual read(std::shared_ptr<char[]> cbuf,int off,int len);
	bool virtual ready();
	void virtual receive(int c);
	void virtual receive(std::shared_ptr<char[]> c,int off,int len);
	void virtual receivedLast();
public:
	virtual ~PipedReader(){
	}

}; // class PipedReader
}; // namespace java::io

#endif //__java_io_PipedReader__

