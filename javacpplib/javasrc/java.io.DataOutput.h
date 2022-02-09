#ifndef __java_io_DataOutput__
#define __java_io_DataOutput__
// H L:\smali2cpp20\x64\Release\out\java\io\DataOutput.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::io{
class DataOutput : public java::lang::Object {
protected:
private:
public:
	void write(int var0);
	void write(std::shared_ptr<unsigned char[]> var0);
	void write(std::shared_ptr<unsigned char[]> var0,int var1,int var2);
	void writeBoolean(bool var0);
	void writeByte(int var0);
	void writeBytes(std::shared_ptr<java::lang::String> var0);
	void writeChar(int var0);
	void writeChars(std::shared_ptr<java::lang::String> var0);
	void writeDouble(double var0);
	void writeFloat(float var0);
	void writeInt(int var0);
	void writeLong(long long var0);
	void writeShort(int var0);
	void writeUTF(std::shared_ptr<java::lang::String> var0);
	DataOutput(){ };
	virtual ~DataOutput(){ };

}; // class DataOutput
}; // namespace java::io

#endif //__java_io_DataOutput__

