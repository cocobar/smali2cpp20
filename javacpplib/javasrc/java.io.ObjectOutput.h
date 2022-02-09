#ifndef __java_io_ObjectOutput__
#define __java_io_ObjectOutput__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectOutput.smali
#include "java2ctype.h"
#include "java.io.DataOutput.h"
#include "java.lang.AutoCloseable.h"
#include "java.lang.Object.h"

namespace java::io{
class ObjectOutput : public java::io::DataOutput, public java::lang::AutoCloseable {
protected:
private:
public:
	void close();
	void flush();
	void write(int var0);
	void write(std::shared_ptr<unsigned char[]> var0);
	void write(std::shared_ptr<unsigned char[]> var0,int var1,int var2);
	void writeObject(std::shared_ptr<java::lang::Object> var0);
	ObjectOutput(){ };
	virtual ~ObjectOutput(){ };

}; // class ObjectOutput
}; // namespace java::io

#endif //__java_io_ObjectOutput__

