#ifndef __java_io_FileDescriptor__
#define __java_io_FileDescriptor__
// H L:\smali2cpp20\x64\Release\out\java\io\FileDescriptor.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace java::io{
class FileDescriptor : public java::lang::Object {
protected:
private:
	int descriptor;
	FileDescriptor(int descriptor);
	static std::shared_ptr<java::io::FileDescriptor> dupFd(int fd);
	static bool isSocket(int var0) = 0;
public:
	static std::shared_ptr<java::io::FileDescriptor> err;
	static std::shared_ptr<java::io::FileDescriptor> in;
	static std::shared_ptr<java::io::FileDescriptor> out;
	static int _get0(std::shared_ptr<java::io::FileDescriptor> _this);
	static int _set0(std::shared_ptr<java::io::FileDescriptor> _this,int _value);
	static void static_cinit();
	FileDescriptor();
	int virtual getInt_S_();
	bool virtual isSocket_S_();
	void virtual setInt_S_(int fd);
	void virtual sync();
	bool virtual valid();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::FileDescriptor::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~FileDescriptor(){
	}

}; // class FileDescriptor
}; // namespace java::io

#endif //__java_io_FileDescriptor__

