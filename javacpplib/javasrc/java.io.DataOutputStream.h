#ifndef __java_io_DataOutputStream__
#define __java_io_DataOutputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\DataOutputStream.smali
#include "java2ctype.h"
#include "java.io.DataOutput.h"
#include "java.io.FilterOutputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.String.h"

namespace java::io{
class DataOutputStream : public java::io::FilterOutputStream, public java::io::DataOutput {
protected:
	int written;
private:
	std::shared_ptr<unsigned char[]> bytearr;
	std::shared_ptr<unsigned char[]> writeBuffer;
	void virtual incCount(int value);
public:
	DataOutputStream(std::shared_ptr<java::io::OutputStream> out);
	static int writeUTF(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::io::DataOutput> out);
	void virtual flush();
	int virtual size();
	void virtual write(int b);
	void virtual write(std::shared_ptr<unsigned char[]> b,int off,int len);
	void virtual writeBoolean(bool v);
	void virtual writeByte(int v);
	void virtual writeBytes(std::shared_ptr<java::lang::String> s);
	void virtual writeChar(int v);
	void virtual writeChars(std::shared_ptr<java::lang::String> s);
	void virtual writeDouble(double v);
	void virtual writeFloat(float v);
	void virtual writeInt(int v);
	void virtual writeLong(long long v);
	void virtual writeShort(int v);
	void virtual writeUTF(std::shared_ptr<java::lang::String> str);
public:
	virtual ~DataOutputStream(){
	}

}; // class DataOutputStream
}; // namespace java::io

#endif //__java_io_DataOutputStream__

