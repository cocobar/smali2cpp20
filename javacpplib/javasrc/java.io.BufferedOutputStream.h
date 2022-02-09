#ifndef __java_io_BufferedOutputStream__
#define __java_io_BufferedOutputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\BufferedOutputStream.smali
#include "java2ctype.h"
#include "java.io.FilterOutputStream.h"
#include "java.io.OutputStream.h"

namespace java::io{
class BufferedOutputStream : public java::io::FilterOutputStream {
protected:
	std::shared_ptr<unsigned char[]> buf;
	int count;
private:
	void virtual flushBuffer();
public:
	BufferedOutputStream(std::shared_ptr<java::io::OutputStream> out);
	BufferedOutputStream(std::shared_ptr<java::io::OutputStream> out,int size);
	void virtual flush();
	void virtual write(int b);
	void virtual write(std::shared_ptr<unsigned char[]> b,int off,int len);
public:
	virtual ~BufferedOutputStream(){
	}

}; // class BufferedOutputStream
}; // namespace java::io

#endif //__java_io_BufferedOutputStream__

