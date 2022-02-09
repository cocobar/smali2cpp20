#ifndef __java_io_PipedInputStream__
#define __java_io_PipedInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\PipedInputStream.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.PipedOutputStream.h"
#include "java.lang.Thread.h"

namespace java::io{
class PipedInputStream : public java::io::InputStream {
protected:
	static int PIPE_SIZE;
	std::shared_ptr<unsigned char[]> buffer;
	int in;
	int out;
	void virtual receive(int b);
private:
	static int DEFAULT_PIPE_SIZE;
	void virtual awaitSpace();
	void virtual checkStateForReceive();
	void virtual initPipe(int pipeSize);
public:
	static bool _assertionsDisabled;
	bool closedByReader;
	bool closedByWriter;
	bool connected;
	std::shared_ptr<java::lang::Thread> readSide;
	std::shared_ptr<java::lang::Thread> writeSide;
	static void static_cinit();
	PipedInputStream();
	PipedInputStream(int pipeSize);
	PipedInputStream(std::shared_ptr<java::io::PipedOutputStream> src);
	PipedInputStream(std::shared_ptr<java::io::PipedOutputStream> src,int pipeSize);
	int virtual available();
	void virtual close();
	void virtual connect(std::shared_ptr<java::io::PipedOutputStream> src);
	int virtual read();
	int virtual read(std::shared_ptr<unsigned char[]> b,int off,int len);
	void virtual receive(std::shared_ptr<unsigned char[]> b,int off,int len);
	void virtual receivedLast();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::PipedInputStream::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PipedInputStream(){
	}

}; // class PipedInputStream
}; // namespace java::io

#endif //__java_io_PipedInputStream__

