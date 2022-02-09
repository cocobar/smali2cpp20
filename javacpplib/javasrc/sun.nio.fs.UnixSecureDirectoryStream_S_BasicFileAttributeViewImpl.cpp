// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixSecureDirectoryStream$BasicFileAttributeViewImpl.smali
#include "java2ctype.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.nio.file.ClosedDirectoryStreamException.h"
#include "java.nio.file.attribute.BasicFileAttributes.h"
#include "java.nio.file.attribute.FileTime.h"
#include "java.util.concurrent.TimeUnit.h"
#include "java.util.concurrent.locks.Lock.h"
#include "sun.nio.fs.UnixConstants.h"
#include "sun.nio.fs.UnixDirectoryStream.h"
#include "sun.nio.fs.UnixException.h"
#include "sun.nio.fs.UnixFileAttributes.h"
#include "sun.nio.fs.UnixNativeDispatcher.h"
#include "sun.nio.fs.UnixPath.h"
#include "sun.nio.fs.UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl.h"
#include "sun.nio.fs.UnixSecureDirectoryStream.h"

// .method static synthetic -wrap0(Lsun/nio/fs/UnixSecureDirectoryStream$BasicFileAttributeViewImpl;)V
void sun::nio::fs::UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl::_wrap0(std::shared_ptr<sun::nio::fs::UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl> _this)
{
	
	//    .param p0, "-this"    # Lsun/nio/fs/UnixSecureDirectoryStream$BasicFileAttributeViewImpl;
	_this->checkWriteAccess();
	return;

}
// .method constructor <init>(Lsun/nio/fs/UnixSecureDirectoryStream;Lsun/nio/fs/UnixPath;Z)V
sun::nio::fs::UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl::UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl(std::shared_ptr<sun::nio::fs::UnixSecureDirectoryStream> this_S_0,std::shared_ptr<sun::nio::fs::UnixPath> file,bool followLinks)
{
	
	//    .param p1, "this$0"    # Lsun/nio/fs/UnixSecureDirectoryStream;
	//    .param p2, "file"    # Lsun/nio/fs/UnixPath;
	//    .param p3, "followLinks"    # Z
	this->this_S_0 = this_S_0;
	// 049    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->file = file;
	this->followLinks = followLinks;
	return;

}
// .method private checkWriteAccess()V
void sun::nio::fs::UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl::checkWriteAccess()
{
	
	//    .local v0, "sm":Ljava/lang/SecurityManager;
	if ( !(java::lang::System::getSecurityManager({const[class].FS-Param})) )  
		goto label_cond_17;
	if ( this->file )     
		goto label_cond_18;
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->directory()->checkWrite();
label_cond_17:
label_goto_17:
	return;
	// 097    .line 353
label_cond_18:
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->directory()->resolve(this->file)->checkWrite();
	goto label_goto_17;

}
// .method public name()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl::name()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("basic"));

}
// .method open()I
int sun::nio::fs::UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl::open()
{
	
	int oflags;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 135        value = {
	// 136            Ljava/io/IOException;
	// 137        }
	// 138    .end annotation
	oflags = sun::nio::fs::UnixConstants::O_RDONLY;
	//    .local v0, "oflags":I
	if ( this->followLinks )     
		goto label_cond_9;
label_cond_9:
	try {
	//label_try_start_9:
	//label_try_end_19:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1b;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_9 .. :try_end_19} :catch_1b
	return sun::nio::fs::UnixNativeDispatcher::openat(sun::nio::fs::UnixSecureDirectoryStream::-get0(this->this_S_0), this->file->asByteArray(), oflags, 0x0);
	// 180    .line 341
label_catch_1b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Lsun/nio/fs/UnixException;
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	return -0x1;

}
// .method public readAttributes()Ljava/nio/file/attribute/BasicFileAttributes;
std::shared_ptr<java::nio::file::attribute::BasicFileAttributes> sun::nio::fs::UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl::readAttributes()
{
	
	std::shared_ptr<java::nio::file::ClosedDirectoryStreamException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 199        value = {
	// 200            Ljava/io/IOException;
	// 201        }
	// 202    .end annotation
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->lock();
	try {
	//label_try_start_e:
	if ( sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->isOpen() )     
		goto label_cond_2f;
	cVar0 = std::make_shared<java::nio::file::ClosedDirectoryStreamException>();
	// throw
	throw cVar0;
	// 240    :try_end_20
	// 241    .catchall {:try_start_e .. :try_end_20} :catchall_20
	// 243    .line 389
label_catchall_20:
	// move-exception
	
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->unlock();
	// throw
	throw;
	// 263    .line 370
label_cond_2f:
	try {
	//label_try_start_2f:
	//    .local v1, "sm":Ljava/lang/SecurityManager;
	if ( !(java::lang::System::getSecurityManager({const[class].FS-Param})) )  
		goto label_cond_46;
	if ( this->file )     
		goto label_cond_66;
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->directory()->checkRead();
	//label_try_end_46:
	}
	catch (...){
		goto label_catchall_20;
	}
	//    .catchall {:try_start_2f .. :try_end_46} :catchall_20
label_cond_46:
label_goto_46:
	try {
	//label_try_start_46:
	if ( this->file )     
		goto label_cond_7a;
	//    .local v0, "attrs":Lsun/nio/fs/UnixFileAttributes;
label_goto_54:
	//label_try_end_57:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_89;
	}
	catch (...){
		goto label_catchall_20;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_46 .. :try_end_57} :catch_89
	//    .catchall {:try_start_46 .. :try_end_57} :catchall_20
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->unlock();
	return attrs->asBasicFileAttributes();
	// 339    .line 375
	// 340    .end local v0    # "attrs":Lsun/nio/fs/UnixFileAttributes;
label_cond_66:
	try {
	//label_try_start_66:
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->directory()->resolve(this->file)->checkRead();
	//label_try_end_79:
	}
	catch (...){
		goto label_catchall_20;
	}
	//    .catchall {:try_start_66 .. :try_end_79} :catchall_20
	goto label_goto_46;
	// 365    .line 381
label_cond_7a:
	try {
	//label_try_start_7a:
	//label_try_end_87:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_89;
	}
	catch (...){
		goto label_catchall_20;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_7a .. :try_end_87} :catch_89
	//    .catchall {:try_start_7a .. :try_end_87} :catchall_20
	//    .restart local v0    # "attrs":Lsun/nio/fs/UnixFileAttributes;
	goto label_goto_54;
	// 388    .line 385
	// 389    .end local v0    # "attrs":Lsun/nio/fs/UnixFileAttributes;
label_catch_89:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "x":Lsun/nio/fs/UnixException;
	try {
	//label_try_start_8a:
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//label_try_end_8f:
	}
	catch (...){
		goto label_catchall_20;
	}
	//    .catchall {:try_start_8a .. :try_end_8f} :catchall_20
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->unlock();
	return 0x0;

}
// .method public setTimes(Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;)V
void sun::nio::fs::UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl::setTimes(std::shared_ptr<java::nio::file::attribute::FileTime> lastModifiedTime,std::shared_ptr<java::nio::file::attribute::FileTime> lastAccessTime,std::shared_ptr<java::nio::file::attribute::FileTime> createTime)
{
	
	std::shared_ptr<java::nio::file::ClosedDirectoryStreamException> cVar0;
	int fd;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::nio::fs::UnixFileAttributes> attrs;
	std::shared_ptr<java::nio::file::attribute::FileTime> lastModifiedTime;
	std::shared_ptr<java::nio::file::attribute::FileTime> lastAccessTime;
	
	//    .param p1, "lastModifiedTime"    # Ljava/nio/file/attribute/FileTime;
	//    .param p2, "lastAccessTime"    # Ljava/nio/file/attribute/FileTime;
	//    .param p3, "createTime"    # Ljava/nio/file/attribute/FileTime;
	//    .annotation system Ldalvik/annotation/Throws;
	// 425        value = {
	// 426            Ljava/io/IOException;
	// 427        }
	// 428    .end annotation
	this->checkWriteAccess();
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->lock();
	try {
	//label_try_start_10:
	if ( sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->isOpen() )     
		goto label_cond_31;
	cVar0 = std::make_shared<java::nio::file::ClosedDirectoryStreamException>();
	// throw
	throw cVar0;
	// 467    :try_end_22
	// 468    .catchall {:try_start_10 .. :try_end_22} :catchall_22
	// 470    .line 433
label_catchall_22:
	// move-exception
	
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->unlock();
	// throw
	throw;
	// 490    .line 407
label_cond_31:
	try {
	//label_try_start_31:
	if ( this->file )     
		goto label_cond_73;
	//label_try_end_3a:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_31 .. :try_end_3a} :catchall_22
	fd = sun::nio::fs::UnixSecureDirectoryStream::-get0(this->this_S_0);
	//    .local v1, "fd":I
label_goto_3b:
	if ( !(lastModifiedTime) )  
		goto label_cond_3f;
	if ( lastAccessTime )     
		goto label_cond_4f;
label_cond_3f:
	try {
	//label_try_start_3f:
	attrs = sun::nio::fs::UnixFileAttributes::get(fd);
	//    .local v0, "attrs":Lsun/nio/fs/UnixFileAttributes;
	if ( lastModifiedTime )     
		goto label_cond_49;
	lastModifiedTime = attrs->lastModifiedTime();
label_cond_49:
	if ( lastAccessTime )     
		goto label_cond_4f;
	//label_try_end_4e:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_78;
	}
	catch (...){
		goto label_catchall_7f;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_3f .. :try_end_4e} :catch_78
	//    .catchall {:try_start_3f .. :try_end_4e} :catchall_7f
	lastAccessTime = attrs->lastAccessTime();
	//    .end local v0    # "attrs":Lsun/nio/fs/UnixFileAttributes;
label_cond_4f:
label_goto_4f:
	try {
	//label_try_start_4f:
	sun::nio::fs::UnixNativeDispatcher::futimes(fd, lastAccessTime->to(java::util::concurrent::TimeUnit::MICROSECONDS), lastModifiedTime->to(java::util::concurrent::TimeUnit::MICROSECONDS));
	//label_try_end_5e:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_88;
	}
	catch (...){
		goto label_catchall_7f;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_4f .. :try_end_5e} :catch_88
	//    .catchall {:try_start_4f .. :try_end_5e} :catchall_7f
label_goto_5e:
	try {
	//label_try_start_5e:
	if ( !(this->file) )  
		goto label_cond_65;
	sun::nio::fs::UnixNativeDispatcher::close(fd);
	//label_try_end_65:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_5e .. :try_end_65} :catchall_22
label_cond_65:
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->unlock();
	return;
	// 593    .line 407
	// 594    .end local v1    # "fd":I
label_cond_73:
	try {
	//label_try_start_73:
	//label_try_end_76:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_73 .. :try_end_76} :catchall_22
	fd = this->open();
	//    .restart local v1    # "fd":I
	goto label_goto_3b;
	// 606    .line 417
label_catch_78:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "x":Lsun/nio/fs/UnixException;
	try {
	//label_try_start_79:
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//label_try_end_7e:
	}
	catch (...){
		goto label_catchall_7f;
	}
	//    .catchall {:try_start_79 .. :try_end_7e} :catchall_7f
	goto label_goto_4f;
	// 621    .line 429
	// 622    .end local v2    # "x":Lsun/nio/fs/UnixException;
label_catchall_7f:
	// move-exception
	
	try {
	//label_try_start_80:
	if ( !(this->file) )  
		goto label_cond_87;
	sun::nio::fs::UnixNativeDispatcher::close(fd);
label_cond_87:
	// throw
	throw;
	// 638    :try_end_88
	// 639    .catchall {:try_start_80 .. :try_end_88} :catchall_22
	// 641    .line 426
label_catch_88:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v2    # "x":Lsun/nio/fs/UnixException;
	try {
	//label_try_start_89:
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//label_try_end_8e:
	}
	catch (...){
		goto label_catchall_7f;
	}
	//    .catchall {:try_start_89 .. :try_end_8e} :catchall_7f
	goto label_goto_5e;

}


