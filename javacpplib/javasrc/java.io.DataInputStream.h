#ifndef __java_io_DataInputStream__
#define __java_io_DataInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\DataInputStream.smali
#include "java2ctype.h"
#include "java.io.DataInput.h"
#include "java.io.FilterInputStream.h"
#include "java.io.InputStream.h"
#include "java.lang.String.h"

namespace java::io{
class DataInputStream : public java::io::FilterInputStream, public java::io::DataInput {
protected:
private:
	std::shared_ptr<unsigned char[]> bytearr;
	std::shared_ptr<char[]> chararr;
	std::shared_ptr<char[]> lineBuffer;
	std::shared_ptr<unsigned char[]> readBuffer;
public:
	DataInputStream(std::shared_ptr<java::io::InputStream> in);
	static std::shared_ptr<java::lang::String> readUTF(std::shared_ptr<java::io::DataInput> in);
	int virtual read(std::shared_ptr<unsigned char[]> b);
	int virtual read(std::shared_ptr<unsigned char[]> b,int off,int len);
	bool virtual readBoolean();
	unsigned char virtual readByte();
	char virtual readChar();
	double virtual readDouble();
	float virtual readFloat();
	void virtual readFully(std::shared_ptr<unsigned char[]> b);
	void virtual readFully(std::shared_ptr<unsigned char[]> b,int off,int len);
	int virtual readInt();
	std::shared_ptr<java::lang::String> virtual readLine();
	long long virtual readLong();
	short virtual readShort();
	std::shared_ptr<java::lang::String> virtual readUTF();
	int virtual readUnsignedByte();
	int virtual readUnsignedShort();
	int virtual skipBytes(int n);
public:
	virtual ~DataInputStream(){
	}

}; // class DataInputStream
}; // namespace java::io

#endif //__java_io_DataInputStream__

