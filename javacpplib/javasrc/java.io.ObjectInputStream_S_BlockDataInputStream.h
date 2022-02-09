#ifndef __java_io_ObjectInputStream_S_BlockDataInputStream__
#define __java_io_ObjectInputStream_S_BlockDataInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$BlockDataInputStream.smali
#include "java2ctype.h"
#include "java.io.DataInput.h"
#include "java.io.DataInputStream.h"
#include "java.io.InputStream.h"
#include "java.io.ObjectInputStream_S_PeekInputStream.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace java::io{
class ObjectInputStream_S_BlockDataInputStream : public java::io::InputStream, public java::io::DataInput {
protected:
private:
	static int CHAR_BUF_SIZE;
	static int HEADER_BLOCKED;
	static int MAX_BLOCK_SIZE;
	static int MAX_HEADER_SIZE;
	bool blkmode;
	std::shared_ptr<unsigned char[]> buf;
	std::shared_ptr<char[]> cbuf;
	std::shared_ptr<java::io::DataInputStream> din;
	int end;
	std::shared_ptr<unsigned char[]> hbuf;
	std::shared_ptr<java::io::ObjectInputStream_S_PeekInputStream> in;
	int pos;
	int unread;
	int virtual readBlockHeader(bool canBlock);
	std::shared_ptr<java::lang::String> virtual readUTFBody(long long utflen);
	int virtual readUTFChar(std::shared_ptr<java::lang::StringBuilder> sbuf,long long utflen);
	long long virtual readUTFSpan(std::shared_ptr<java::lang::StringBuilder> sbuf,long long utflen);
	void virtual refill();
public:
	std::shared_ptr<java::io::ObjectInputStream> this_S_0;
	ObjectInputStream_S_BlockDataInputStream(std::shared_ptr<java::io::ObjectInputStream> this_S_0,std::shared_ptr<java::io::InputStream> in);
	int virtual available();
	void virtual close();
	int virtual currentBlockRemaining();
	bool virtual getBlockDataMode();
	int virtual peek();
	unsigned char virtual peekByte();
	int virtual read();
	int virtual read(std::shared_ptr<unsigned char[]> b,int off,int len);
	int virtual read(std::shared_ptr<unsigned char[]> b,int off,int len,bool copy);
	bool virtual readBoolean();
	void virtual readBooleans(std::shared_ptr<bool[]> v,int off,int len);
	unsigned char virtual readByte();
	char virtual readChar();
	void virtual readChars(std::shared_ptr<char[]> v,int off,int len);
	double virtual readDouble();
	void virtual readDoubles(std::shared_ptr<double[]> v,int off,int len);
	float virtual readFloat();
	void virtual readFloats(std::shared_ptr<float[]> v,int off,int len);
	void virtual readFully(std::shared_ptr<unsigned char[]> b);
	void virtual readFully(std::shared_ptr<unsigned char[]> b,int off,int len);
	void virtual readFully(std::shared_ptr<unsigned char[]> b,int off,int len,bool copy);
	int virtual readInt();
	void virtual readInts(std::shared_ptr<int[]> v,int off,int len);
	std::shared_ptr<java::lang::String> virtual readLine();
	long long virtual readLong();
	std::shared_ptr<java::lang::String> virtual readLongUTF();
	void virtual readLongs(std::shared_ptr<long long[]> v,int off,int len);
	short virtual readShort();
	void virtual readShorts(std::shared_ptr<short[]> v,int off,int len);
	std::shared_ptr<java::lang::String> virtual readUTF();
	int virtual readUnsignedByte();
	int virtual readUnsignedShort();
	bool virtual setBlockDataMode(bool newmode);
	long long virtual skip(long long len);
	void virtual skipBlockData();
	int virtual skipBytes(int n);
public:
	virtual ~ObjectInputStream_S_BlockDataInputStream(){
	}

}; // class ObjectInputStream_S_BlockDataInputStream
}; // namespace java::io

#endif //__java_io_ObjectInputStream_S_BlockDataInputStream__

