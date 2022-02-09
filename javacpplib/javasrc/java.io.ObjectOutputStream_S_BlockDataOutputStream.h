#ifndef __java_io_ObjectOutputStream_S_BlockDataOutputStream__
#define __java_io_ObjectOutputStream_S_BlockDataOutputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream$BlockDataOutputStream.smali
#include "java2ctype.h"
#include "java.io.DataOutput.h"
#include "java.io.DataOutputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.String.h"

namespace java::io{
class ObjectOutputStream_S_BlockDataOutputStream : public java::io::OutputStream, public java::io::DataOutput {
protected:
private:
	static int CHAR_BUF_SIZE;
	static int MAX_BLOCK_SIZE;
	static int MAX_HEADER_SIZE;
	bool blkmode;
	std::shared_ptr<unsigned char[]> buf;
	std::shared_ptr<char[]> cbuf;
	std::shared_ptr<java::io::DataOutputStream> dout;
	std::shared_ptr<unsigned char[]> hbuf;
	std::shared_ptr<java::io::OutputStream> out;
	int pos;
	bool warnOnceWhenWriting;
	void virtual warnIfClosed();
	void virtual writeBlockHeader(int len);
	void virtual writeUTFBody(std::shared_ptr<java::lang::String> s);
public:
	ObjectOutputStream_S_BlockDataOutputStream(std::shared_ptr<java::io::OutputStream> out);
	void virtual close();
	void virtual drain();
	void virtual flush();
	bool virtual getBlockDataMode();
	long long virtual getUTFLength(std::shared_ptr<java::lang::String> s);
	bool virtual setBlockDataMode(bool mode);
	void virtual write(int b);
	void virtual write(std::shared_ptr<unsigned char[]> b);
	void virtual write(std::shared_ptr<unsigned char[]> b,int off,int len);
	void virtual write(std::shared_ptr<unsigned char[]> b,int off,int len,bool copy);
	void virtual writeBoolean(bool v);
	void virtual writeBooleans(std::shared_ptr<bool[]> v,int off,int len);
	void virtual writeByte(int v);
	void virtual writeBytes(std::shared_ptr<java::lang::String> s);
	void virtual writeChar(int v);
	void virtual writeChars(std::shared_ptr<java::lang::String> s);
	void virtual writeChars(std::shared_ptr<char[]> v,int off,int len);
	void virtual writeDouble(double v);
	void virtual writeDoubles(std::shared_ptr<double[]> v,int off,int len);
	void virtual writeFloat(float v);
	void virtual writeFloats(std::shared_ptr<float[]> v,int off,int len);
	void virtual writeInt(int v);
	void virtual writeInts(std::shared_ptr<int[]> v,int off,int len);
	void virtual writeLong(long long v);
	void virtual writeLongUTF(std::shared_ptr<java::lang::String> s);
	void virtual writeLongUTF(std::shared_ptr<java::lang::String> s,long long utflen);
	void virtual writeLongs(std::shared_ptr<long long[]> v,int off,int len);
	void virtual writeShort(int v);
	void virtual writeShorts(std::shared_ptr<short[]> v,int off,int len);
	void virtual writeUTF(std::shared_ptr<java::lang::String> s);
	void virtual writeUTF(std::shared_ptr<java::lang::String> s,long long utflen);
public:
	virtual ~ObjectOutputStream_S_BlockDataOutputStream(){
	}

}; // class ObjectOutputStream_S_BlockDataOutputStream
}; // namespace java::io

#endif //__java_io_ObjectOutputStream_S_BlockDataOutputStream__

