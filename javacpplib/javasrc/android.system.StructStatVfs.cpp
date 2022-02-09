// CPP L:\smali2cpp20\x64\Release\out\android\system\StructStatVfs.smali
#include "java2ctype.h"
#include "android.system.StructStatVfs.h"
#include "java.lang.String.h"
#include "libcore.util.Objects.h"

// .method public constructor <init>(JJJJJJJJJJJ)V
android::system::StructStatVfs::StructStatVfs(long long f_bsize,long long f_frsize,long long f_blocks,long long f_bfree,long long f_bavail,long long f_files,long long f_ffree,long long f_favail,long long f_fsid,long long f_flag,long long f_namemax)
{
	
	//    .param p1, "f_bsize"    # J
	//    .param p3, "f_frsize"    # J
	//    .param p5, "f_blocks"    # J
	//    .param p7, "f_bfree"    # J
	//    .param p9, "f_bavail"    # J
	//    .param p11, "f_files"    # J
	//    .param p13, "f_ffree"    # J
	//    .param p15, "f_favail"    # J
	//    .param p17, "f_fsid"    # J
	//    .param p19, "f_flag"    # J
	//    .param p21, "f_namemax"    # J
	// 047    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->f_bsize = f_bsize;
	this->f_frsize = f_frsize;
	this->f_blocks = f_blocks;
	this->f_bfree = f_bfree;
	this->f_bavail = f_bavail;
	this->f_files = f_files;
	this->f_ffree = f_ffree;
	this->f_favail = f_favail;
	this->f_fsid = f_fsid;
	this->f_flag = f_flag;
	this->f_namemax = f_namemax;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::StructStatVfs::toString()
{
	
	return libcore::util::Objects::toString(this);

}


