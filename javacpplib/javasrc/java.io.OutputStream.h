#ifndef __java_io_OutputStream__
#define __java_io_OutputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\OutputStream.smali
#include "java2ctype.h"
#include "java.io.Closeable.h"
#include "java.io.Flushable.h"

namespace java::io{
class OutputStream : public java::io::Closeable, public java::io::Flushable {
protected:
private:
public:
	OutputStream();
	void virtual close();
	void virtual flush();
	void write(int var0);
	void virtual write(std::shared_ptr<unsigned char[]> b);
	void virtual write(std::shared_ptr<unsigned char[]> b,int off,int len);
public:
	virtual ~OutputStream(){
	}

}; // class OutputStream
}; // namespace java::io

#endif //__java_io_OutputStream__

