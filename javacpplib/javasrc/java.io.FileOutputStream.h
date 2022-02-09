#ifndef __java_io_FileOutputStream__
#define __java_io_FileOutputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\FileOutputStream.smali
#include "java2ctype.h"
#include "dalvik.system.CloseGuard.h"
#include "java.io.File.h"
#include "java.io.FileDescriptor.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.channels.FileChannel.h"
#include "libcore.io.IoTracker.h"

namespace java::io{
class FileOutputStream : public java::io::OutputStream {
protected:
	void virtual finalize();
private:
	bool append;
	std::shared_ptr<java::nio::channels::FileChannel> channel;
	std::shared_ptr<java::lang::Object> closeLock;
	bool closed;
	std::shared_ptr<java::io::FileDescriptor> fd;
	std::shared_ptr<dalvik::system::CloseGuard> guard;
	bool isFdOwner;
	std::shared_ptr<java::lang::String> path;
	std::shared_ptr<libcore::io::IoTracker> tracker;
	void virtual open(std::shared_ptr<java::lang::String> name,bool append);
	void virtual open0(std::shared_ptr<java::lang::String> var0,bool var1);
public:
	FileOutputStream(std::shared_ptr<java::io::File> file);
	FileOutputStream(std::shared_ptr<java::io::File> file,bool append);
	FileOutputStream(std::shared_ptr<java::io::FileDescriptor> fdObj);
	FileOutputStream(std::shared_ptr<java::io::FileDescriptor> fdObj,bool isFdOwner);
	FileOutputStream(std::shared_ptr<java::lang::String> name);
	FileOutputStream(std::shared_ptr<java::lang::String> name,bool append);
	void virtual close();
	std::shared_ptr<java::nio::channels::FileChannel> virtual getChannel();
	std::shared_ptr<java::io::FileDescriptor> virtual getFD();
	void virtual write(int b);
	void virtual write(std::shared_ptr<unsigned char[]> b);
	void virtual write(std::shared_ptr<unsigned char[]> b,int off,int len);
public:
	virtual ~FileOutputStream(){
	}

}; // class FileOutputStream
}; // namespace java::io

#endif //__java_io_FileOutputStream__

