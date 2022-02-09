#ifndef __java_io_ObjectInputStream_S_PeekInputStream__
#define __java_io_ObjectInputStream_S_PeekInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$PeekInputStream.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"

namespace java::io{
class ObjectInputStream_S_PeekInputStream : public java::io::InputStream {
protected:
private:
	std::shared_ptr<java::io::InputStream> in;
	int peekb;
public:
	ObjectInputStream_S_PeekInputStream(std::shared_ptr<java::io::InputStream> in);
	int virtual available();
	void virtual close();
	int virtual peek();
	int virtual read();
	int virtual read(std::shared_ptr<unsigned char[]> b,int off,int len);
	void virtual readFully(std::shared_ptr<unsigned char[]> b,int off,int len);
	long long virtual skip(long long cVar1);
public:
	virtual ~ObjectInputStream_S_PeekInputStream(){
	}

}; // class ObjectInputStream_S_PeekInputStream
}; // namespace java::io

#endif //__java_io_ObjectInputStream_S_PeekInputStream__

