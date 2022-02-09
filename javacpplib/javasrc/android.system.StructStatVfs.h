#ifndef __android_system_StructStatVfs__
#define __android_system_StructStatVfs__
// H L:\smali2cpp20\x64\Release\out\android\system\StructStatVfs.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::system{
class StructStatVfs : public java::lang::Object {
protected:
private:
public:
	long long f_bavail;
	long long f_bfree;
	long long f_blocks;
	long long f_bsize;
	long long f_favail;
	long long f_ffree;
	long long f_files;
	long long f_flag;
	long long f_frsize;
	long long f_fsid;
	long long f_namemax;
	StructStatVfs(long long f_bsize,long long f_frsize,long long f_blocks,long long f_bfree,long long f_bavail,long long f_files,long long f_ffree,long long f_favail,long long f_fsid,long long f_flag,long long f_namemax);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructStatVfs(){
	}

}; // class StructStatVfs
}; // namespace android::system

#endif //__android_system_StructStatVfs__

