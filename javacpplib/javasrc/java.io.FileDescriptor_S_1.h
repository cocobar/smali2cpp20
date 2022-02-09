#ifndef __java_io_FileDescriptor_S_1__
#define __java_io_FileDescriptor_S_1__
// H L:\smali2cpp20\x64\Release\out\java\io\FileDescriptor$1.smali
#include "java2ctype.h"
#include "java.io.FileDescriptor.h"
#include "sun.misc.JavaIOFileDescriptorAccess.h"

namespace java::io{
class FileDescriptor_S_1 : public sun::misc::JavaIOFileDescriptorAccess {
protected:
private:
public:
	FileDescriptor_S_1();
	int virtual get(std::shared_ptr<java::io::FileDescriptor> obj);
	long long virtual getHandle(std::shared_ptr<java::io::FileDescriptor> obj);
	void virtual set(std::shared_ptr<java::io::FileDescriptor> obj,int fd);
	void virtual setHandle(std::shared_ptr<java::io::FileDescriptor> obj,long long handle);
public:
	virtual ~FileDescriptor_S_1(){
	}

}; // class FileDescriptor_S_1
}; // namespace java::io

#endif //__java_io_FileDescriptor_S_1__

