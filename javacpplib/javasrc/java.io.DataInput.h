#ifndef __java_io_DataInput__
#define __java_io_DataInput__
// H L:\smali2cpp20\x64\Release\out\java\io\DataInput.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::io{
class DataInput : public java::lang::Object {
protected:
private:
public:
	bool readBoolean();
	unsigned char readByte();
	char readChar();
	double readDouble();
	float readFloat();
	void readFully(std::shared_ptr<unsigned char[]> var0);
	void readFully(std::shared_ptr<unsigned char[]> var0,int var1,int var2);
	int readInt();
	std::shared_ptr<java::lang::String> readLine();
	long long readLong();
	short readShort();
	std::shared_ptr<java::lang::String> readUTF();
	int readUnsignedByte();
	int readUnsignedShort();
	int skipBytes(int var0);
	DataInput(){ };
	virtual ~DataInput(){ };

}; // class DataInput
}; // namespace java::io

#endif //__java_io_DataInput__

