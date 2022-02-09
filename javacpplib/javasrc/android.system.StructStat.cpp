// CPP L:\smali2cpp20\x64\Release\out\android\system\StructStat.smali
#include "java2ctype.h"
#include "android.system.StructStat.h"
#include "android.system.StructTimespec.h"
#include "java.lang.String.h"
#include "libcore.util.Objects.h"

// .method public constructor <init>(JJIJIIJJJJJJJ)V
android::system::StructStat::StructStat(long long st_dev,long long st_ino,int st_mode,long long st_nlink,int st_uid,int st_gid,long long st_rdev,long long st_size,long long st_atime,long long st_mtime,long long st_ctime,long long st_blksize,long long st_blocks)
{
	
	std::shared_ptr<android::system::StructTimespec> cVar0;
	std::shared_ptr<android::system::StructTimespec> cVar1;
	std::shared_ptr<android::system::StructTimespec> cVar2;
	
	//    .param p1, "st_dev"    # J
	//    .param p3, "st_ino"    # J
	//    .param p5, "st_mode"    # I
	//    .param p6, "st_nlink"    # J
	//    .param p8, "st_uid"    # I
	//    .param p9, "st_gid"    # I
	//    .param p10, "st_rdev"    # J
	//    .param p12, "st_size"    # J
	//    .param p14, "st_atime"    # J
	//    .param p16, "st_mtime"    # J
	//    .param p18, "st_ctime"    # J
	//    .param p20, "st_blksize"    # J
	//    .param p22, "st_blocks"    # J
	var15 = cVar0(st_atime, 0x0);
	var20 = cVar1(st_mtime, 0x0);
	var25 = cVar2(st_ctime, 0x0);
	android::system::StructStat::(st_dev, st_ino, st_mode, st_nlink, st_uid, st_gid, st_rdev, st_size, cVar0, cVar1, cVar2, st_blksize, st_blocks);
	return;

}
// .method public constructor <init>(JJIJIIJJLandroid/system/StructTimespec;Landroid/system/StructTimespec;Landroid/system/StructTimespec;JJ)V
android::system::StructStat::StructStat(long long st_dev,long long st_ino,int st_mode,long long st_nlink,int st_uid,int st_gid,long long st_rdev,long long st_size,std::shared_ptr<android::system::StructTimespec> st_atim,std::shared_ptr<android::system::StructTimespec> st_mtim,std::shared_ptr<android::system::StructTimespec> st_ctim,long long st_blksize,long long st_blocks)
{
	
	//    .param p1, "st_dev"    # J
	//    .param p3, "st_ino"    # J
	//    .param p5, "st_mode"    # I
	//    .param p6, "st_nlink"    # J
	//    .param p8, "st_uid"    # I
	//    .param p9, "st_gid"    # I
	//    .param p10, "st_rdev"    # J
	//    .param p12, "st_size"    # J
	//    .param p14, "st_atim"    # Landroid/system/StructTimespec;
	//    .param p15, "st_mtim"    # Landroid/system/StructTimespec;
	//    .param p16, "st_ctim"    # Landroid/system/StructTimespec;
	//    .param p17, "st_blksize"    # J
	//    .param p19, "st_blocks"    # J
	// 137    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->st_dev = st_dev;
	this->st_ino = st_ino;
	this->st_mode = st_mode;
	this->st_nlink = st_nlink;
	this->st_uid = st_uid;
	this->st_gid = st_gid;
	this->st_rdev = st_rdev;
	this->st_size = st_size;
	this->st_atime = st_atim->tv_sec;
	this->st_mtime = st_mtim->tv_sec;
	this->st_ctime = st_ctim->tv_sec;
	this->st_atim = st_atim;
	this->st_mtim = st_mtim;
	this->st_ctim = st_ctim;
	this->st_blksize = st_blksize;
	this->st_blocks = st_blocks;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::StructStat::toString()
{
	
	return libcore::util::Objects::toString(this);

}


