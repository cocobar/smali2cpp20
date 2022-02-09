#ifndef __java_io_ObjectInput__
#define __java_io_ObjectInput__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectInput.smali
#include "java2ctype.h"
#include "java.io.DataInput.h"
#include "java.lang.AutoCloseable.h"
#include "java.lang.Object.h"

namespace java::io{
class ObjectInput : public java::io::DataInput, public java::lang::AutoCloseable {
protected:
private:
public:
	int available();
	void close();
	int read();
	int read(std::shared_ptr<unsigned char[]> var0);
	int read(std::shared_ptr<unsigned char[]> var0,int var1,int var2);
	std::shared_ptr<java::lang::Object> readObject();
	long long skip(long long var0);
	ObjectInput(){ };
	virtual ~ObjectInput(){ };

}; // class ObjectInput
}; // namespace java::io

#endif //__java_io_ObjectInput__

