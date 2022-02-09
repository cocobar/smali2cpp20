#ifndef __java_io_RandomAccessFile__
#define __java_io_RandomAccessFile__
// H L:\smali2cpp20\x64\Release\out\java\io\RandomAccessFile.smali
#include "java2ctype.h"
#include "dalvik.system.CloseGuard.h"
#include "java.io.Closeable.h"
#include "java.io.DataInput.h"
#include "java.io.DataOutput.h"
#include "java.io.File.h"
#include "java.io.FileDescriptor.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.channels.FileChannel.h"
#include "libcore.io.IoTracker.h"

namespace java::io{
class RandomAccessFile : public java::io::DataOutput, public java::io::DataInput, public java::io::Closeable {
protected:
	void virtual finalize();
private:
	std::shared_ptr<java::nio::channels::FileChannel> channel;
	std::shared_ptr<java::lang::Object> closeLock;
	bool closed;
	std::shared_ptr<java::io::FileDescriptor> fd;
	std::shared_ptr<dalvik::system::CloseGuard> guard;
	std::shared_ptr<libcore::io::IoTracker> ioTracker;
	int mode;
	std::shared_ptr<java::lang::String> path;
	bool rw;
	std::shared_ptr<unsigned char[]> scratch;
	bool syncMetadata;
	int virtual readBytes(std::shared_ptr<unsigned char[]> b,int off,int len);
	void virtual writeBytes(std::shared_ptr<unsigned char[]> b,int off,int len);
public:
	RandomAccessFile(std::shared_ptr<java::io::File> file,std::shared_ptr<java::lang::String> mode);
	RandomAccessFile(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> mode);
	void virtual close();
	std::shared_ptr<java::nio::channels::FileChannel> virtual getChannel();
	std::shared_ptr<java::io::FileDescriptor> virtual getFD();
	long long virtual getFilePointer();
	long long virtual length();
	int virtual read();
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
	void virtual seek(long long pos);
	void virtual setLength(long long newLength);
	int virtual skipBytes(int n);
	void virtual write(int b);
	void virtual write(std::shared_ptr<unsigned char[]> b);
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
	virtual ~RandomAccessFile(){
	}

}; // class RandomAccessFile
}; // namespace java::io

#endif //__java_io_RandomAccessFile__

