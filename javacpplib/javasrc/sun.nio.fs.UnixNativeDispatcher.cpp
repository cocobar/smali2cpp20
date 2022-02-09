// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixNativeDispatcher.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.nio.fs.NativeBuffer.h"
#include "sun.nio.fs.NativeBuffers.h"
#include "sun.nio.fs.UnixFileAttributes.h"
#include "sun.nio.fs.UnixFileStoreAttributes.h"
#include "sun.nio.fs.UnixNativeDispatcher.h"
#include "sun.nio.fs.UnixPath.h"
#include "sun.nio.fs.Util.h"

static sun::nio::fs::UnixNativeDispatcher::SUPPORTS_BIRTHTIME = 0x10000;
static sun::nio::fs::UnixNativeDispatcher::SUPPORTS_FUTIMES = 0x4;
static sun::nio::fs::UnixNativeDispatcher::SUPPORTS_OPENAT = 0x2;
static sun::nio::fs::UnixNativeDispatcher::capabilities;
// .method static constructor <clinit>()V
void sun::nio::fs::UnixNativeDispatcher::static_cinit()
{
	
	sun::nio::fs::UnixNativeDispatcher::capabilities = sun::nio::fs::UnixNativeDispatcher::init({const[class].FS-Param});
	return;

}
// .method protected constructor <init>()V
sun::nio::fs::UnixNativeDispatcher::UnixNativeDispatcher()
{
	
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static access(Lsun/nio/fs/UnixPath;I)V
void sun::nio::fs::UnixNativeDispatcher::access(std::shared_ptr<sun::nio::fs::UnixPath> path,int amode)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .param p1, "amode"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 047        value = {
	// 048            Lsun/nio/fs/UnixException;
	// 049        }
	// 050    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	sun::nio::fs::UnixNativeDispatcher::access0(buffer->address(), amode);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_f
	buffer->release();
	return;
	// 075    .line 450
label_catchall_f:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native access0(JI)V
void sun::nio::fs::UnixNativeDispatcher::access0(long long var0,int var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 088        value = {
	// 089            Lsun/nio/fs/UnixException;
	// 090        }
	// 091    .end annotation

}
// .method static birthtimeSupported()Z
bool sun::nio::fs::UnixNativeDispatcher::birthtimeSupported()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( !((sun::nio::fs::UnixNativeDispatcher::capabilities &  0x10000)) )  
		goto label_cond_9;
	cVar1 = 0x1;
label_cond_9:
	return cVar1;

}
// .method static chmod(Lsun/nio/fs/UnixPath;I)V
void sun::nio::fs::UnixNativeDispatcher::chmod(std::shared_ptr<sun::nio::fs::UnixPath> path,int mode)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .param p1, "mode"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 120        value = {
	// 121            Lsun/nio/fs/UnixException;
	// 122        }
	// 123    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	sun::nio::fs::UnixNativeDispatcher::chmod0(buffer->address(), mode);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_f
	buffer->release();
	return;
	// 148    .line 369
label_catchall_f:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native chmod0(JI)V
void sun::nio::fs::UnixNativeDispatcher::chmod0(long long var0,int var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 161        value = {
	// 162            Lsun/nio/fs/UnixException;
	// 163        }
	// 164    .end annotation

}
// .method static chown(Lsun/nio/fs/UnixPath;II)V
void sun::nio::fs::UnixNativeDispatcher::chown(std::shared_ptr<sun::nio::fs::UnixPath> path,int uid,int gid)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .param p1, "uid"    # I
	//    .param p2, "gid"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 173        value = {
	// 174            Lsun/nio/fs/UnixException;
	// 175        }
	// 176    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	sun::nio::fs::UnixNativeDispatcher::chown0(buffer->address(), uid, gid);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_f
	buffer->release();
	return;
	// 201    .line 336
label_catchall_f:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native chown0(JII)V
void sun::nio::fs::UnixNativeDispatcher::chown0(long long var0,int var1,int var2)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 214        value = {
	// 215            Lsun/nio/fs/UnixException;
	// 216        }
	// 217    .end annotation

}
// .method static native closedir(J)V
void sun::nio::fs::UnixNativeDispatcher::closedir(long long var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 225        value = {
	// 226            Lsun/nio/fs/UnixException;
	// 227        }
	// 228    .end annotation

}
// .method private static copyToNativeBuffer(Lsun/nio/fs/UnixPath;)Lsun/nio/fs/NativeBuffer;
std::shared_ptr<sun::nio::fs::NativeBuffer> sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(std::shared_ptr<sun::nio::fs::UnixPath> path)
{
	
	std::shared_ptr<unsigned char[]> cstr;
	int size;
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	cstr = path->getByteArrayForSysCalls();
	//    .local v1, "cstr":[B
	size = ( cstr->size() + 0x1);
	//    .local v2, "size":I
	buffer = sun::nio::fs::NativeBuffers::getNativeBufferFromCache(size);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	if ( buffer )     
		goto label_cond_18;
	buffer = sun::nio::fs::NativeBuffers::allocNativeBuffer(size);
label_cond_11:
	sun::nio::fs::NativeBuffers::copyCStringToNativeBuffer(cstr, buffer);
	buffer->setOwner(path);
	return buffer;
	// 272    .line 47
label_cond_18:
	if ( buffer->owner() != path )
		goto label_cond_11;
	return buffer;

}
// .method static native dup(I)I
int sun::nio::fs::UnixNativeDispatcher::dup(int var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 286        value = {
	// 287            Lsun/nio/fs/UnixException;
	// 288        }
	// 289    .end annotation

}
// .method static native fchmod(II)V
void sun::nio::fs::UnixNativeDispatcher::fchmod(int var0,int var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 294        value = {
	// 295            Lsun/nio/fs/UnixException;
	// 296        }
	// 297    .end annotation

}
// .method static native fchown(III)V
void sun::nio::fs::UnixNativeDispatcher::fchown(int var0,int var1,int var2)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 302        value = {
	// 303            Lsun/nio/fs/UnixException;
	// 304        }
	// 305    .end annotation

}
// .method static native fclose(J)V
void sun::nio::fs::UnixNativeDispatcher::fclose(long long var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 310        value = {
	// 311            Lsun/nio/fs/UnixException;
	// 312        }
	// 313    .end annotation

}
// .method static native fdopendir(I)J
long long sun::nio::fs::UnixNativeDispatcher::fdopendir(int var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 318        value = {
	// 319            Lsun/nio/fs/UnixException;
	// 320        }
	// 321    .end annotation

}
// .method static fopen(Lsun/nio/fs/UnixPath;Ljava/lang/String;)J
long long sun::nio::fs::UnixNativeDispatcher::fopen(std::shared_ptr<sun::nio::fs::UnixPath> filename,std::shared_ptr<java::lang::String> mode)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> pathBuffer;
	std::shared_ptr<sun::nio::fs::NativeBuffer> modeBuffer;
	
	//    .param p0, "filename"    # Lsun/nio/fs/UnixPath;
	//    .param p1, "mode"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 329        value = {
	// 330            Lsun/nio/fs/UnixException;
	// 331        }
	// 332    .end annotation
	pathBuffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(filename);
	//    .local v1, "pathBuffer":Lsun/nio/fs/NativeBuffer;
	modeBuffer = sun::nio::fs::NativeBuffers::asNativeBuffer(sun::nio::fs::Util::toBytes(mode));
	//    .local v0, "modeBuffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_c:
	//label_try_end_17:
	}
	catch (...){
		goto label_catchall_1f;
	}
	//    .catchall {:try_start_c .. :try_end_17} :catchall_1f
	modeBuffer->release();
	pathBuffer->release();
	return sun::nio::fs::UnixNativeDispatcher::fopen0(pathBuffer->address(), modeBuffer->address());
	// 376    .line 106
label_catchall_1f:
	// move-exception
	
	modeBuffer->release();
	pathBuffer->release();
	// throw
	throw;

}
// .method private static native fopen0(JJ)J
long long sun::nio::fs::UnixNativeDispatcher::fopen0(long long var0,long long var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 392        value = {
	// 393            Lsun/nio/fs/UnixException;
	// 394        }
	// 395    .end annotation

}
// .method static native fpathconf(II)J
long long sun::nio::fs::UnixNativeDispatcher::fpathconf(int var0,int var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 400        value = {
	// 401            Lsun/nio/fs/UnixException;
	// 402        }
	// 403    .end annotation

}
// .method static native fstat(ILsun/nio/fs/UnixFileAttributes;)V
void sun::nio::fs::UnixNativeDispatcher::fstat(int var0,std::shared_ptr<sun::nio::fs::UnixFileAttributes> var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 408        value = {
	// 409            Lsun/nio/fs/UnixException;
	// 410        }
	// 411    .end annotation

}
// .method static fstatat(I[BILsun/nio/fs/UnixFileAttributes;)V
void sun::nio::fs::UnixNativeDispatcher::fstatat(int dfd,std::shared_ptr<unsigned char[]> path,int flag,std::shared_ptr<sun::nio::fs::UnixFileAttributes> attrs)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "dfd"    # I
	//    .param p1, "path"    # [B
	//    .param p2, "flag"    # I
	//    .param p3, "attrs"    # Lsun/nio/fs/UnixFileAttributes;
	//    .annotation system Ldalvik/annotation/Throws;
	// 421        value = {
	// 422            Lsun/nio/fs/UnixException;
	// 423        }
	// 424    .end annotation
	buffer = sun::nio::fs::NativeBuffers::asNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	sun::nio::fs::UnixNativeDispatcher::fstatat0(dfd, buffer->address(), flag, attrs);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_f
	buffer->release();
	return;
	// 449    .line 322
label_catchall_f:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native fstatat0(IJILsun/nio/fs/UnixFileAttributes;)V
void sun::nio::fs::UnixNativeDispatcher::fstatat0(int var0,long long var1,int var2,std::shared_ptr<sun::nio::fs::UnixFileAttributes> var3)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 462        value = {
	// 463            Lsun/nio/fs/UnixException;
	// 464        }
	// 465    .end annotation

}
// .method static native futimes(IJJ)V
void sun::nio::fs::UnixNativeDispatcher::futimes(int var0,long long var1,long long var2)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 470        value = {
	// 471            Lsun/nio/fs/UnixException;
	// 472        }
	// 473    .end annotation

}
// .method static futimesSupported()Z
bool sun::nio::fs::UnixNativeDispatcher::futimesSupported()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( !(( sun::nio::fs::UnixNativeDispatcher::capabilities & 0x4)) )  
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method static native getgrgid(I)[B
unsigned char sun::nio::fs::UnixNativeDispatcher::getgrgid(int var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 500        value = {
	// 501            Lsun/nio/fs/UnixException;
	// 502        }
	// 503    .end annotation

}
// .method static getgrnam(Ljava/lang/String;)I
int sun::nio::fs::UnixNativeDispatcher::getgrnam(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 510        value = {
	// 511            Lsun/nio/fs/UnixException;
	// 512        }
	// 513    .end annotation
	buffer = sun::nio::fs::NativeBuffers::asNativeBuffer(sun::nio::fs::Util::toBytes(name));
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_8:
	//label_try_end_f:
	}
	catch (...){
		goto label_catchall_14;
	}
	//    .catchall {:try_start_8 .. :try_end_f} :catchall_14
	buffer->release();
	return sun::nio::fs::UnixNativeDispatcher::getgrnam0(buffer->address());
	// 544    .line 494
label_catchall_14:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native getgrnam0(J)I
int sun::nio::fs::UnixNativeDispatcher::getgrnam0(long long var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 557        value = {
	// 558            Lsun/nio/fs/UnixException;
	// 559        }
	// 560    .end annotation

}
// .method static getpwnam(Ljava/lang/String;)I
int sun::nio::fs::UnixNativeDispatcher::getpwnam(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 567        value = {
	// 568            Lsun/nio/fs/UnixException;
	// 569        }
	// 570    .end annotation
	buffer = sun::nio::fs::NativeBuffers::asNativeBuffer(sun::nio::fs::Util::toBytes(name));
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_8:
	//label_try_end_f:
	}
	catch (...){
		goto label_catchall_14;
	}
	//    .catchall {:try_start_8 .. :try_end_f} :catchall_14
	buffer->release();
	return sun::nio::fs::UnixNativeDispatcher::getpwnam0(buffer->address());
	// 601    .line 479
label_catchall_14:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native getpwnam0(J)I
int sun::nio::fs::UnixNativeDispatcher::getpwnam0(long long var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 614        value = {
	// 615            Lsun/nio/fs/UnixException;
	// 616        }
	// 617    .end annotation

}
// .method static native getpwuid(I)[B
unsigned char sun::nio::fs::UnixNativeDispatcher::getpwuid(int var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 622        value = {
	// 623            Lsun/nio/fs/UnixException;
	// 624        }
	// 625    .end annotation

}
// .method static lchown(Lsun/nio/fs/UnixPath;II)V
void sun::nio::fs::UnixNativeDispatcher::lchown(std::shared_ptr<sun::nio::fs::UnixPath> path,int uid,int gid)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .param p1, "uid"    # I
	//    .param p2, "gid"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 637        value = {
	// 638            Lsun/nio/fs/UnixException;
	// 639        }
	// 640    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	sun::nio::fs::UnixNativeDispatcher::lchown0(buffer->address(), uid, gid);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_f
	buffer->release();
	return;
	// 665    .line 350
label_catchall_f:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native lchown0(JII)V
void sun::nio::fs::UnixNativeDispatcher::lchown0(long long var0,int var1,int var2)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 678        value = {
	// 679            Lsun/nio/fs/UnixException;
	// 680        }
	// 681    .end annotation

}
// .method static link(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixPath;)V
void sun::nio::fs::UnixNativeDispatcher::link(std::shared_ptr<sun::nio::fs::UnixPath> existing,std::shared_ptr<sun::nio::fs::UnixPath> newfile)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> existingBuffer;
	std::shared_ptr<sun::nio::fs::NativeBuffer> newBuffer;
	
	//    .param p0, "existing"    # Lsun/nio/fs/UnixPath;
	//    .param p1, "newfile"    # Lsun/nio/fs/UnixPath;
	//    .annotation system Ldalvik/annotation/Throws;
	// 689        value = {
	// 690            Lsun/nio/fs/UnixException;
	// 691        }
	// 692    .end annotation
	existingBuffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(existing);
	//    .local v0, "existingBuffer":Lsun/nio/fs/NativeBuffer;
	newBuffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(newfile);
	//    .local v1, "newBuffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_8:
	sun::nio::fs::UnixNativeDispatcher::link0(existingBuffer->address(), newBuffer->address());
	//label_try_end_13:
	}
	catch (...){
		goto label_catchall_1a;
	}
	//    .catchall {:try_start_8 .. :try_end_13} :catchall_1a
	newBuffer->release();
	existingBuffer->release();
	return;
	// 730    .line 127
label_catchall_1a:
	// move-exception
	
	newBuffer->release();
	existingBuffer->release();
	// throw
	throw;

}
// .method private static native link0(JJ)V
void sun::nio::fs::UnixNativeDispatcher::link0(long long var0,long long var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 746        value = {
	// 747            Lsun/nio/fs/UnixException;
	// 748        }
	// 749    .end annotation

}
// .method static lstat(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixFileAttributes;)V
void sun::nio::fs::UnixNativeDispatcher::lstat(std::shared_ptr<sun::nio::fs::UnixPath> path,std::shared_ptr<sun::nio::fs::UnixFileAttributes> attrs)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .param p1, "attrs"    # Lsun/nio/fs/UnixFileAttributes;
	//    .annotation system Ldalvik/annotation/Throws;
	// 757        value = {
	// 758            Lsun/nio/fs/UnixException;
	// 759        }
	// 760    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	sun::nio::fs::UnixNativeDispatcher::lstat0(buffer->address(), attrs);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_f
	buffer->release();
	return;
	// 785    .line 301
label_catchall_f:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native lstat0(JLsun/nio/fs/UnixFileAttributes;)V
void sun::nio::fs::UnixNativeDispatcher::lstat0(long long var0,std::shared_ptr<sun::nio::fs::UnixFileAttributes> var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 798        value = {
	// 799            Lsun/nio/fs/UnixException;
	// 800        }
	// 801    .end annotation

}
// .method static mkdir(Lsun/nio/fs/UnixPath;I)V
void sun::nio::fs::UnixNativeDispatcher::mkdir(std::shared_ptr<sun::nio::fs::UnixPath> path,int mode)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .param p1, "mode"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 809        value = {
	// 810            Lsun/nio/fs/UnixException;
	// 811        }
	// 812    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	sun::nio::fs::UnixNativeDispatcher::mkdir0(buffer->address(), mode);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_f
	buffer->release();
	return;
	// 837    .line 215
label_catchall_f:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native mkdir0(JI)V
void sun::nio::fs::UnixNativeDispatcher::mkdir0(long long var0,int var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 850        value = {
	// 851            Lsun/nio/fs/UnixException;
	// 852        }
	// 853    .end annotation

}
// .method static mknod(Lsun/nio/fs/UnixPath;IJ)V
void sun::nio::fs::UnixNativeDispatcher::mknod(std::shared_ptr<sun::nio::fs::UnixPath> path,int mode,long long dev)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .param p1, "mode"    # I
	//    .param p2, "dev"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 862        value = {
	// 863            Lsun/nio/fs/UnixException;
	// 864        }
	// 865    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	sun::nio::fs::UnixNativeDispatcher::mknod0(buffer->address(), mode, dev);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_f
	buffer->release();
	return;
	// 890    .line 169
label_catchall_f:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native mknod0(JIJ)V
void sun::nio::fs::UnixNativeDispatcher::mknod0(long long var0,int var1,long long var2)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 903        value = {
	// 904            Lsun/nio/fs/UnixException;
	// 905        }
	// 906    .end annotation

}
// .method static open(Lsun/nio/fs/UnixPath;II)I
int sun::nio::fs::UnixNativeDispatcher::open(std::shared_ptr<sun::nio::fs::UnixPath> path,int flags,int mode)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .param p1, "flags"    # I
	//    .param p2, "mode"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 915        value = {
	// 916            Lsun/nio/fs/UnixException;
	// 917        }
	// 918    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_10
	buffer->release();
	return sun::nio::fs::UnixNativeDispatcher::open0(buffer->address(), flags, mode);
	// 945    .line 72
label_catchall_10:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native open0(JII)I
int sun::nio::fs::UnixNativeDispatcher::open0(long long var0,int var1,int var2)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 958        value = {
	// 959            Lsun/nio/fs/UnixException;
	// 960        }
	// 961    .end annotation

}
// .method static openat(I[BII)I
int sun::nio::fs::UnixNativeDispatcher::openat(int dfd,std::shared_ptr<unsigned char[]> path,int flags,int mode)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "dfd"    # I
	//    .param p1, "path"    # [B
	//    .param p2, "flags"    # I
	//    .param p3, "mode"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 971        value = {
	// 972            Lsun/nio/fs/UnixException;
	// 973        }
	// 974    .end annotation
	buffer = sun::nio::fs::NativeBuffers::asNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_10
	buffer->release();
	return sun::nio::fs::UnixNativeDispatcher::openat0(dfd, buffer->address(), flags, mode);
	// 1001    .line 86
label_catchall_10:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native openat0(IJII)I
int sun::nio::fs::UnixNativeDispatcher::openat0(int var0,long long var1,int var2,int var3)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1014        value = {
	// 1015            Lsun/nio/fs/UnixException;
	// 1016        }
	// 1017    .end annotation

}
// .method static openatSupported()Z
bool sun::nio::fs::UnixNativeDispatcher::openatSupported()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( !(( sun::nio::fs::UnixNativeDispatcher::capabilities & 0x2)) )  
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method static opendir(Lsun/nio/fs/UnixPath;)J
long long sun::nio::fs::UnixNativeDispatcher::opendir(std::shared_ptr<sun::nio::fs::UnixPath> path)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1043        value = {
	// 1044            Lsun/nio/fs/UnixException;
	// 1045        }
	// 1046    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_10
	buffer->release();
	return sun::nio::fs::UnixNativeDispatcher::opendir0(buffer->address());
	// 1073    .line 409
label_catchall_10:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native opendir0(J)J
long long sun::nio::fs::UnixNativeDispatcher::opendir0(long long var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1086        value = {
	// 1087            Lsun/nio/fs/UnixException;
	// 1088        }
	// 1089    .end annotation

}
// .method static pathconf(Lsun/nio/fs/UnixPath;I)J
long long sun::nio::fs::UnixNativeDispatcher::pathconf(std::shared_ptr<sun::nio::fs::UnixPath> path,int name)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .param p1, "name"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1097        value = {
	// 1098            Lsun/nio/fs/UnixException;
	// 1099        }
	// 1100    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_10
	buffer->release();
	return sun::nio::fs::UnixNativeDispatcher::pathconf0(buffer->address(), name);
	// 1127    .line 523
label_catchall_10:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native pathconf0(JI)J
long long sun::nio::fs::UnixNativeDispatcher::pathconf0(long long var0,int var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1140        value = {
	// 1141            Lsun/nio/fs/UnixException;
	// 1142        }
	// 1143    .end annotation

}
// .method static native read(IJI)I
int sun::nio::fs::UnixNativeDispatcher::read(int var0,long long var1,int var2)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1148        value = {
	// 1149            Lsun/nio/fs/UnixException;
	// 1150        }
	// 1151    .end annotation

}
// .method static native readdir(J)[B
unsigned char sun::nio::fs::UnixNativeDispatcher::readdir(long long var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1156        value = {
	// 1157            Lsun/nio/fs/UnixException;
	// 1158        }
	// 1159    .end annotation

}
// .method static readlink(Lsun/nio/fs/UnixPath;)[B
unsigned char sun::nio::fs::UnixNativeDispatcher::readlink(std::shared_ptr<sun::nio::fs::UnixPath> path)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1166        value = {
	// 1167            Lsun/nio/fs/UnixException;
	// 1168        }
	// 1169    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_10
	buffer->release();
	return sun::nio::fs::UnixNativeDispatcher::readlink0(buffer->address());
	// 1196    .line 243
label_catchall_10:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native readlink0(J)[B
unsigned char sun::nio::fs::UnixNativeDispatcher::readlink0(long long var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1209        value = {
	// 1210            Lsun/nio/fs/UnixException;
	// 1211        }
	// 1212    .end annotation

}
// .method static realpath(Lsun/nio/fs/UnixPath;)[B
unsigned char sun::nio::fs::UnixNativeDispatcher::realpath(std::shared_ptr<sun::nio::fs::UnixPath> path)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1219        value = {
	// 1220            Lsun/nio/fs/UnixException;
	// 1221        }
	// 1222    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_10
	buffer->release();
	return sun::nio::fs::UnixNativeDispatcher::realpath0(buffer->address());
	// 1249    .line 258
label_catchall_10:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native realpath0(J)[B
unsigned char sun::nio::fs::UnixNativeDispatcher::realpath0(long long var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1262        value = {
	// 1263            Lsun/nio/fs/UnixException;
	// 1264        }
	// 1265    .end annotation

}
// .method static rename(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixPath;)V
void sun::nio::fs::UnixNativeDispatcher::rename(std::shared_ptr<sun::nio::fs::UnixPath> from,std::shared_ptr<sun::nio::fs::UnixPath> to)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> fromBuffer;
	std::shared_ptr<sun::nio::fs::NativeBuffer> toBuffer;
	
	//    .param p0, "from"    # Lsun/nio/fs/UnixPath;
	//    .param p1, "to"    # Lsun/nio/fs/UnixPath;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1273        value = {
	// 1274            Lsun/nio/fs/UnixException;
	// 1275        }
	// 1276    .end annotation
	fromBuffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(from);
	//    .local v0, "fromBuffer":Lsun/nio/fs/NativeBuffer;
	toBuffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(to);
	//    .local v1, "toBuffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_8:
	sun::nio::fs::UnixNativeDispatcher::rename0(fromBuffer->address(), toBuffer->address());
	//label_try_end_13:
	}
	catch (...){
		goto label_catchall_1a;
	}
	//    .catchall {:try_start_8 .. :try_end_13} :catchall_1a
	toBuffer->release();
	fromBuffer->release();
	return;
	// 1314    .line 184
label_catchall_1a:
	// move-exception
	
	toBuffer->release();
	fromBuffer->release();
	// throw
	throw;

}
// .method private static native rename0(JJ)V
void sun::nio::fs::UnixNativeDispatcher::rename0(long long var0,long long var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1330        value = {
	// 1331            Lsun/nio/fs/UnixException;
	// 1332        }
	// 1333    .end annotation

}
// .method static renameat(I[BI[B)V
void sun::nio::fs::UnixNativeDispatcher::renameat(int fromfd,std::shared_ptr<unsigned char[]> from,int tofd,std::shared_ptr<unsigned char[]> to)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> fromBuffer;
	std::shared_ptr<sun::nio::fs::NativeBuffer> toBuffer;
	
	//    .param p0, "fromfd"    # I
	//    .param p1, "from"    # [B
	//    .param p2, "tofd"    # I
	//    .param p3, "to"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 1343        value = {
	// 1344            Lsun/nio/fs/UnixException;
	// 1345        }
	// 1346    .end annotation
	fromBuffer = sun::nio::fs::NativeBuffers::asNativeBuffer(from);
	//    .local v6, "fromBuffer":Lsun/nio/fs/NativeBuffer;
	toBuffer = sun::nio::fs::NativeBuffers::asNativeBuffer(to);
	//    .local v7, "toBuffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_8:
	sun::nio::fs::UnixNativeDispatcher::renameat0(fromfd, fromBuffer->address(), tofd, toBuffer->address());
	//label_try_end_15:
	}
	catch (...){
		goto label_catchall_1c;
	}
	//    .catchall {:try_start_8 .. :try_end_15} :catchall_1c
	toBuffer->release();
	fromBuffer->release();
	return;
	// 1388    .line 200
label_catchall_1c:
	// move-exception
	
	toBuffer->release();
	fromBuffer->release();
	// throw
	throw;

}
// .method private static native renameat0(IJIJ)V
void sun::nio::fs::UnixNativeDispatcher::renameat0(int var0,long long var1,int var2,long long var3)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1404        value = {
	// 1405            Lsun/nio/fs/UnixException;
	// 1406        }
	// 1407    .end annotation

}
// .method static rmdir(Lsun/nio/fs/UnixPath;)V
void sun::nio::fs::UnixNativeDispatcher::rmdir(std::shared_ptr<sun::nio::fs::UnixPath> path)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1414        value = {
	// 1415            Lsun/nio/fs/UnixException;
	// 1416        }
	// 1417    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	sun::nio::fs::UnixNativeDispatcher::rmdir0(buffer->address());
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_f
	buffer->release();
	return;
	// 1442    .line 228
label_catchall_f:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native rmdir0(J)V
void sun::nio::fs::UnixNativeDispatcher::rmdir0(long long var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1455        value = {
	// 1456            Lsun/nio/fs/UnixException;
	// 1457        }
	// 1458    .end annotation

}
// .method static stat(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixFileAttributes;)V
void sun::nio::fs::UnixNativeDispatcher::stat(std::shared_ptr<sun::nio::fs::UnixPath> path,std::shared_ptr<sun::nio::fs::UnixFileAttributes> attrs)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .param p1, "attrs"    # Lsun/nio/fs/UnixFileAttributes;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1466        value = {
	// 1467            Lsun/nio/fs/UnixException;
	// 1468        }
	// 1469    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	sun::nio::fs::UnixNativeDispatcher::stat0(buffer->address(), attrs);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_f
	buffer->release();
	return;
	// 1494    .line 287
label_catchall_f:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native stat0(JLsun/nio/fs/UnixFileAttributes;)V
void sun::nio::fs::UnixNativeDispatcher::stat0(long long var0,std::shared_ptr<sun::nio::fs::UnixFileAttributes> var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1507        value = {
	// 1508            Lsun/nio/fs/UnixException;
	// 1509        }
	// 1510    .end annotation

}
// .method static statvfs(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixFileStoreAttributes;)V
void sun::nio::fs::UnixNativeDispatcher::statvfs(std::shared_ptr<sun::nio::fs::UnixPath> path,std::shared_ptr<sun::nio::fs::UnixFileStoreAttributes> attrs)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .param p1, "attrs"    # Lsun/nio/fs/UnixFileStoreAttributes;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1518        value = {
	// 1519            Lsun/nio/fs/UnixException;
	// 1520        }
	// 1521    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	sun::nio::fs::UnixNativeDispatcher::statvfs0(buffer->address(), attrs);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_f
	buffer->release();
	return;
	// 1546    .line 509
label_catchall_f:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native statvfs0(JLsun/nio/fs/UnixFileStoreAttributes;)V
void sun::nio::fs::UnixNativeDispatcher::statvfs0(long long var0,std::shared_ptr<sun::nio::fs::UnixFileStoreAttributes> var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1559        value = {
	// 1560            Lsun/nio/fs/UnixException;
	// 1561        }
	// 1562    .end annotation

}
// .method static symlink([BLsun/nio/fs/UnixPath;)V
void sun::nio::fs::UnixNativeDispatcher::symlink(std::shared_ptr<unsigned char[]> name1,std::shared_ptr<sun::nio::fs::UnixPath> name2)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> targetBuffer;
	std::shared_ptr<sun::nio::fs::NativeBuffer> linkBuffer;
	
	//    .param p0, "name1"    # [B
	//    .param p1, "name2"    # Lsun/nio/fs/UnixPath;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1573        value = {
	// 1574            Lsun/nio/fs/UnixException;
	// 1575        }
	// 1576    .end annotation
	targetBuffer = sun::nio::fs::NativeBuffers::asNativeBuffer(name1);
	//    .local v1, "targetBuffer":Lsun/nio/fs/NativeBuffer;
	linkBuffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(name2);
	//    .local v0, "linkBuffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_8:
	sun::nio::fs::UnixNativeDispatcher::symlink0(targetBuffer->address(), linkBuffer->address());
	//label_try_end_13:
	}
	catch (...){
		goto label_catchall_1a;
	}
	//    .catchall {:try_start_8 .. :try_end_13} :catchall_1a
	linkBuffer->release();
	targetBuffer->release();
	return;
	// 1614    .line 272
label_catchall_1a:
	// move-exception
	
	linkBuffer->release();
	targetBuffer->release();
	// throw
	throw;

}
// .method private static native symlink0(JJ)V
void sun::nio::fs::UnixNativeDispatcher::symlink0(long long var0,long long var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1630        value = {
	// 1631            Lsun/nio/fs/UnixException;
	// 1632        }
	// 1633    .end annotation

}
// .method static unlink(Lsun/nio/fs/UnixPath;)V
void sun::nio::fs::UnixNativeDispatcher::unlink(std::shared_ptr<sun::nio::fs::UnixPath> path)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1640        value = {
	// 1641            Lsun/nio/fs/UnixException;
	// 1642        }
	// 1643    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	sun::nio::fs::UnixNativeDispatcher::unlink0(buffer->address());
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_f
	buffer->release();
	return;
	// 1668    .line 142
label_catchall_f:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native unlink0(J)V
void sun::nio::fs::UnixNativeDispatcher::unlink0(long long var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1681        value = {
	// 1682            Lsun/nio/fs/UnixException;
	// 1683        }
	// 1684    .end annotation

}
// .method static unlinkat(I[BI)V
void sun::nio::fs::UnixNativeDispatcher::unlinkat(int dfd,std::shared_ptr<unsigned char[]> path,int flag)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "dfd"    # I
	//    .param p1, "path"    # [B
	//    .param p2, "flag"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1693        value = {
	// 1694            Lsun/nio/fs/UnixException;
	// 1695        }
	// 1696    .end annotation
	buffer = sun::nio::fs::NativeBuffers::asNativeBuffer(path);
	//    .local v0, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	sun::nio::fs::UnixNativeDispatcher::unlinkat0(dfd, buffer->address(), flag);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_f
	buffer->release();
	return;
	// 1721    .line 155
label_catchall_f:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native unlinkat0(IJI)V
void sun::nio::fs::UnixNativeDispatcher::unlinkat0(int var0,long long var1,int var2)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1734        value = {
	// 1735            Lsun/nio/fs/UnixException;
	// 1736        }
	// 1737    .end annotation

}
// .method static utimes(Lsun/nio/fs/UnixPath;JJ)V
void sun::nio::fs::UnixNativeDispatcher::utimes(std::shared_ptr<sun::nio::fs::UnixPath> path,long long times0,long long times1)
{
	
	std::shared_ptr<sun::nio::fs::NativeBuffer> buffer;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .param p1, "times0"    # J
	//    .param p3, "times1"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1746        value = {
	// 1747            Lsun/nio/fs/UnixException;
	// 1748        }
	// 1749    .end annotation
	buffer = sun::nio::fs::UnixNativeDispatcher::copyToNativeBuffer(path);
	//    .local v6, "buffer":Lsun/nio/fs/NativeBuffer;
	try {
	//label_try_start_4:
	sun::nio::fs::UnixNativeDispatcher::utimes0(buffer->address(), times0, times1);
	//label_try_end_d:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_4 .. :try_end_d} :catchall_11
	buffer->release();
	return;
	// 1778    .line 390
label_catchall_11:
	// move-exception
	
	buffer->release();
	// throw
	throw;

}
// .method private static native utimes0(JJJ)V
void sun::nio::fs::UnixNativeDispatcher::utimes0(long long var0,long long var1,long long var2)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1791        value = {
	// 1792            Lsun/nio/fs/UnixException;
	// 1793        }
	// 1794    .end annotation

}
// .method static native write(IJI)I
int sun::nio::fs::UnixNativeDispatcher::write(int var0,long long var1,int var2)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1799        value = {
	// 1800            Lsun/nio/fs/UnixException;
	// 1801        }
	// 1802    .end annotation

}


