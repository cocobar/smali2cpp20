#ifndef __java_io_ByteArrayOutputStream__
#define __java_io_ByteArrayOutputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\ByteArrayOutputStream.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.String.h"

namespace java::io{
class ByteArrayOutputStream : public java::io::OutputStream {
protected:
	std::shared_ptr<unsigned char[]> buf;
	int count;
private:
	static int MAX_ARRAY_SIZE;
	void virtual ensureCapacity(int minCapacity);
	void virtual grow(int minCapacity);
	static int hugeCapacity(int minCapacity);
public:
	ByteArrayOutputStream();
	ByteArrayOutputStream(int size);
	void virtual close();
	void virtual reset();
	int virtual size();
	unsigned char virtual toByteArray();
	std::shared_ptr<java::lang::String> virtual toString();
	std::shared_ptr<java::lang::String> virtual toString(int hibyte);
	std::shared_ptr<java::lang::String> virtual toString(std::shared_ptr<java::lang::String> charsetName);
	void virtual write(int b);
	void virtual write(std::shared_ptr<unsigned char[]> b,int off,int len);
	void virtual writeTo(std::shared_ptr<java::io::OutputStream> out);
public:
	virtual ~ByteArrayOutputStream(){
	}

}; // class ByteArrayOutputStream
}; // namespace java::io

#endif //__java_io_ByteArrayOutputStream__

