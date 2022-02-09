#ifndef __android_system_StructStat__
#define __android_system_StructStat__
// H L:\smali2cpp20\x64\Release\out\android\system\StructStat.smali
#include "java2ctype.h"
#include "android.system.StructTimespec.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::system{
class StructStat : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::system::StructTimespec> st_atim;
	long long st_atime;
	long long st_blksize;
	long long st_blocks;
	std::shared_ptr<android::system::StructTimespec> st_ctim;
	long long st_ctime;
	long long st_dev;
	int st_gid;
	long long st_ino;
	int st_mode;
	std::shared_ptr<android::system::StructTimespec> st_mtim;
	long long st_mtime;
	long long st_nlink;
	long long st_rdev;
	long long st_size;
	int st_uid;
	StructStat(long long st_dev,long long st_ino,int st_mode,long long st_nlink,int st_uid,int st_gid,long long st_rdev,long long st_size,long long st_atime,long long st_mtime,long long st_ctime,long long st_blksize,long long st_blocks);
	StructStat(long long st_dev,long long st_ino,int st_mode,long long st_nlink,int st_uid,int st_gid,long long st_rdev,long long st_size,std::shared_ptr<android::system::StructTimespec> st_atim,std::shared_ptr<android::system::StructTimespec> st_mtim,std::shared_ptr<android::system::StructTimespec> st_ctim,long long st_blksize,long long st_blocks);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructStat(){
	}

}; // class StructStat
}; // namespace android::system

#endif //__android_system_StructStat__

