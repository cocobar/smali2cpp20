#ifndef __java_io_PipedOutputStream__
#define __java_io_PipedOutputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\PipedOutputStream.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.io.PipedInputStream.h"

namespace java::io{
class PipedOutputStream : public java::io::OutputStream {
protected:
private:
	std::shared_ptr<java::io::PipedInputStream> sink;
public:
	PipedOutputStream();
	PipedOutputStream(std::shared_ptr<java::io::PipedInputStream> snk);
	void virtual close();
	void virtual connect(std::shared_ptr<java::io::PipedInputStream> snk);
	void virtual flush();
	void virtual write(int b);
	void virtual write(std::shared_ptr<unsigned char[]> b,int off,int len);
public:
	virtual ~PipedOutputStream(){
	}

}; // class PipedOutputStream
}; // namespace java::io

#endif //__java_io_PipedOutputStream__

