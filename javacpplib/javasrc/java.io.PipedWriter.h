#ifndef __java_io_PipedWriter__
#define __java_io_PipedWriter__
// H L:\smali2cpp20\x64\Release\out\java\io\PipedWriter.smali
#include "java2ctype.h"
#include "java.io.PipedReader.h"
#include "java.io.Writer.h"

namespace java::io{
class PipedWriter : public java::io::Writer {
protected:
private:
	bool closed;
	std::shared_ptr<java::io::PipedReader> sink;
public:
	PipedWriter();
	PipedWriter(std::shared_ptr<java::io::PipedReader> snk);
	void virtual close();
	void virtual connect(std::shared_ptr<java::io::PipedReader> snk);
	void virtual flush();
	void virtual write(int c);
	void virtual write(std::shared_ptr<char[]> cbuf,int off,int len);
public:
	virtual ~PipedWriter(){
	}

}; // class PipedWriter
}; // namespace java::io

#endif //__java_io_PipedWriter__

