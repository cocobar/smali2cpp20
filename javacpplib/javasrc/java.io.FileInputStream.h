#ifndef __java_io_FileInputStream__
#define __java_io_FileInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\FileInputStream.smali
#include "java2ctype.h"
#include "dalvik.system.CloseGuard.h"
#include "java.io.File.h"
#include "java.io.FileDescriptor.h"
#include "java.io.InputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.channels.FileChannel.h"
#include "libcore.io.IoTracker.h"

namespace java::io{
class FileInputStream : public java::io::InputStream {
protected:
	void virtual finalize();
private:
	std::shared_ptr<java::nio::channels::FileChannel> channel;
	std::shared_ptr<java::lang::Object> closeLock;
	bool closed;
	std::shared_ptr<java::io::FileDescriptor> fd;
	std::shared_ptr<dalvik::system::CloseGuard> guard;
	bool isFdOwner;
	std::shared_ptr<java::lang::String> path;
	std::shared_ptr<libcore::io::IoTracker> tracker;
	int virtual available0();
	void virtual open(std::shared_ptr<java::lang::String> name);
	void virtual open0(std::shared_ptr<java::lang::String> var0);
	long long virtual skip0(long long var0);
public:
	FileInputStream(std::shared_ptr<java::io::File> file);
	FileInputStream(std::shared_ptr<java::io::FileDescriptor> fdObj);
	FileInputStream(std::shared_ptr<java::io::FileDescriptor> fdObj,bool isFdOwner);
	FileInputStream(std::shared_ptr<java::lang::String> name);
	int virtual available();
	void virtual close();
	std::shared_ptr<java::nio::channels::FileChannel> virtual getChannel();
	std::shared_ptr<java::io::FileDescriptor> virtual getFD();
	int virtual read();
	int virtual read(std::shared_ptr<unsigned char[]> b);
	int virtual read(std::shared_ptr<unsigned char[]> b,int off,int len);
	long long virtual skip(long long n);
public:
	virtual ~FileInputStream(){
	}

}; // class FileInputStream
}; // namespace java::io

#endif //__java_io_FileInputStream__

