// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixSecureDirectoryStream$PosixFileAttributeViewImpl.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.RuntimePermission.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.nio.file.ClosedDirectoryStreamException.h"
#include "java.nio.file.ProviderMismatchException.h"
#include "java.nio.file.attribute.GroupPrincipal.h"
#include "java.nio.file.attribute.PosixFileAttributes.h"
#include "java.nio.file.attribute.PosixFilePermission.h"
#include "java.nio.file.attribute.UserPrincipal.h"
#include "java.util.Set.h"
#include "java.util.concurrent.locks.Lock.h"
#include "sun.nio.fs.UnixDirectoryStream.h"
#include "sun.nio.fs.UnixException.h"
#include "sun.nio.fs.UnixFileAttributes.h"
#include "sun.nio.fs.UnixFileModeAttribute.h"
#include "sun.nio.fs.UnixNativeDispatcher.h"
#include "sun.nio.fs.UnixPath.h"
#include "sun.nio.fs.UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl.h"
#include "sun.nio.fs.UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl.h"
#include "sun.nio.fs.UnixSecureDirectoryStream.h"
#include "sun.nio.fs.UnixUserPrincipals_S_Group.h"
#include "sun.nio.fs.UnixUserPrincipals_S_User.h"

// .method constructor <init>(Lsun/nio/fs/UnixSecureDirectoryStream;Lsun/nio/fs/UnixPath;Z)V
sun::nio::fs::UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl::UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl(std::shared_ptr<sun::nio::fs::UnixSecureDirectoryStream> this_S_0,std::shared_ptr<sun::nio::fs::UnixPath> file,bool followLinks)
{
	
	//    .param p1, "this$0"    # Lsun/nio/fs/UnixSecureDirectoryStream;
	//    .param p2, "file"    # Lsun/nio/fs/UnixPath;
	//    .param p3, "followLinks"    # Z
	this->this_S_0 = this_S_0;
	sun::nio::fs::UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl::(this_S_0, file, followLinks);
	return;

}
// .method private checkWriteAndUserAccess()V
void sun::nio::fs::UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl::checkWriteAndUserAccess()
{
	
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::shared_ptr<java::lang::RuntimePermission> cVar0;
	
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_14;
	sun::nio::fs::UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl::-wrap0(this);
	cVar0 = std::make_shared<java::lang::RuntimePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("accessUserInformation")));
	sm->checkPermission(cVar0);
label_cond_14:
	return;

}
// .method private setOwners(II)V
void sun::nio::fs::UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl::setOwners(int uid,int gid)
{
	
	std::shared_ptr<java::nio::file::ClosedDirectoryStreamException> cVar0;
	int fd;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "uid"    # I
	//    .param p2, "gid"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 077        value = {
	// 078            Ljava/io/IOException;
	// 079        }
	// 080    .end annotation
	this->checkWriteAndUserAccess();
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->lock();
	try {
	//label_try_start_10:
	if ( sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->isOpen() )     
		goto label_cond_31;
	cVar0 = std::make_shared<java::nio::file::ClosedDirectoryStreamException>();
	// throw
	throw cVar0;
	// 119    :try_end_22
	// 120    .catchall {:try_start_10 .. :try_end_22} :catchall_22
	// 122    .line 536
label_catchall_22:
	// move-exception
	
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->unlock();
	// throw
	throw;
	// 142    .line 527
label_cond_31:
	try {
	//label_try_start_31:
	if ( this->file )     
		goto label_cond_55;
	//label_try_end_3a:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_31 .. :try_end_3a} :catchall_22
	fd = sun::nio::fs::UnixSecureDirectoryStream::-get0(this->this_S_0);
	//    .local v0, "fd":I
label_goto_3b:
	try {
	//label_try_start_3b:
	sun::nio::fs::UnixNativeDispatcher::fchown(fd, uid, gid);
	//label_try_end_3e:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5a;
	}
	catch (...){
		goto label_catchall_6a;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_3b .. :try_end_3e} :catch_5a
	//    .catchall {:try_start_3b .. :try_end_3e} :catchall_6a
	try {
	//label_try_start_3e:
	if ( !(this->file) )  
		goto label_cond_47;
	if ( fd < 0 ) 
		goto label_cond_47;
	sun::nio::fs::UnixNativeDispatcher::close(fd);
	//label_try_end_47:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_3e .. :try_end_47} :catchall_22
label_cond_47:
label_goto_47:
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->unlock();
	return;
	// 197    .line 527
	// 198    .end local v0    # "fd":I
label_cond_55:
	try {
	//label_try_start_55:
	//label_try_end_58:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_55 .. :try_end_58} :catchall_22
	//    .restart local v0    # "fd":I
	goto label_goto_3b;
	// 210    .line 530
label_catch_5a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Lsun/nio/fs/UnixException;
	try {
	//label_try_start_5b:
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//label_try_end_60:
	}
	catch (...){
		goto label_catchall_6a;
	}
	//    .catchall {:try_start_5b .. :try_end_60} :catchall_6a
	try {
	//label_try_start_60:
	if ( !(this->file) )  
		goto label_cond_47;
	if ( fd < 0 ) 
		goto label_cond_47;
	sun::nio::fs::UnixNativeDispatcher::close(fd);
	goto label_goto_47;
	// 236    .line 532
	// 237    .end local v1    # "x":Lsun/nio/fs/UnixException;
label_catchall_6a:
	// move-exception
	
	if ( !(this->file) )  
		goto label_cond_74;
	if ( fd < 0 ) 
		goto label_cond_74;
	sun::nio::fs::UnixNativeDispatcher::close(fd);
label_cond_74:
	// throw
	throw;
	// 254    :try_end_75
	// 255    .catchall {:try_start_60 .. :try_end_75} :catchall_22

}
// .method public getOwner()Ljava/nio/file/attribute/UserPrincipal;
std::shared_ptr<java::nio::file::attribute::UserPrincipal> sun::nio::fs::UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl::getOwner()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 263        value = {
	// 264            Ljava/io/IOException;
	// 265        }
	// 266    .end annotation
	return this->readAttributes()->owner();

}
// .method public name()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl::name()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("posix"));

}
// .method public readAttributes()Ljava/nio/file/attribute/PosixFileAttributes;
std::shared_ptr<java::nio::file::attribute::PosixFileAttributes> sun::nio::fs::UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl::readAttributes()
{
	
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::shared_ptr<java::lang::RuntimePermission> cVar0;
	std::shared_ptr<java::nio::file::ClosedDirectoryStreamException> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 311        value = {
	// 312            Ljava/io/IOException;
	// 313        }
	// 314    .end annotation
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v1, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_23;
	if ( this->file )     
		goto label_cond_51;
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->directory()->checkRead();
label_goto_18:
	cVar0 = std::make_shared<java::lang::RuntimePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("accessUserInformation")));
	sm->checkPermission(cVar0);
label_cond_23:
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->lock();
	try {
	//label_try_start_30:
	if ( sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->isOpen() )     
		goto label_cond_65;
	cVar1 = std::make_shared<java::nio::file::ClosedDirectoryStreamException>();
	// throw
	throw cVar1;
	// 390    :try_end_42
	// 391    .catchall {:try_start_30 .. :try_end_42} :catchall_42
	// 393    .line 487
label_catchall_42:
	// move-exception
	
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->unlock();
	// throw
	throw;
	// 413    .line 469
label_cond_51:
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->directory()->resolve(this->file)->checkRead();
	goto label_goto_18;
	// 435    .line 479
label_cond_65:
	try {
	//label_try_start_65:
	if ( this->file )     
		goto label_cond_81;
	//label_try_end_72:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_90;
	}
	catch (...){
		goto label_catchall_42;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_65 .. :try_end_72} :catch_90
	//    .catchall {:try_start_65 .. :try_end_72} :catchall_42
	//    .local v0, "attrs":Lsun/nio/fs/UnixFileAttributes;
label_goto_73:
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->unlock();
	return attrs;
	// 474    .line 481
	// 475    .end local v0    # "attrs":Lsun/nio/fs/UnixFileAttributes;
label_cond_81:
	try {
	//label_try_start_81:
	//label_try_end_8e:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_90;
	}
	catch (...){
		goto label_catchall_42;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_81 .. :try_end_8e} :catch_90
	//    .catchall {:try_start_81 .. :try_end_8e} :catchall_42
	//    .restart local v0    # "attrs":Lsun/nio/fs/UnixFileAttributes;
	goto label_goto_73;
	// 498    .line 483
	// 499    .end local v0    # "attrs":Lsun/nio/fs/UnixFileAttributes;
label_catch_90:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "x":Lsun/nio/fs/UnixException;
	try {
	//label_try_start_91:
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//label_try_end_96:
	}
	catch (...){
		goto label_catchall_42;
	}
	//    .catchall {:try_start_91 .. :try_end_96} :catchall_42
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->unlock();
	return 0x0;

}
// .method public setGroup(Ljava/nio/file/attribute/GroupPrincipal;)V
void sun::nio::fs::UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl::setGroup(std::shared_ptr<java::nio::file::attribute::GroupPrincipal> group)
{
	
	std::shared_ptr<java::nio::file::ProviderMismatchException> cVar0;
	
	//    .param p1, "group"    # Ljava/nio/file/attribute/GroupPrincipal;
	//    .annotation system Ldalvik/annotation/Throws;
	// 533        value = {
	// 534            Ljava/io/IOException;
	// 535        }
	// 536    .end annotation
	if ( group->instanceOf("sun::nio::fs::UnixUserPrincipals_S_Group") )     
		goto label_cond_a;
	cVar0 = std::make_shared<java::nio::file::ProviderMismatchException>();
	// throw
	throw cVar0;
	// 551    .line 564
label_cond_a:
	group->checkCast("sun::nio::fs::UnixUserPrincipals_S_Group");
	//    .end local p1    # "group":Ljava/nio/file/attribute/GroupPrincipal;
	//    .local v0, "gid":I
	this->setOwners(-0x1, group->gid());
	return;

}
// .method public setOwner(Ljava/nio/file/attribute/UserPrincipal;)V
void sun::nio::fs::UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl::setOwner(std::shared_ptr<java::nio::file::attribute::UserPrincipal> owner)
{
	
	std::shared_ptr<java::nio::file::ProviderMismatchException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "owner"    # Ljava/nio/file/attribute/UserPrincipal;
	//    .annotation system Ldalvik/annotation/Throws;
	// 574        value = {
	// 575            Ljava/io/IOException;
	// 576        }
	// 577    .end annotation
	if ( owner->instanceOf("sun::nio::fs::UnixUserPrincipals_S_User") )     
		goto label_cond_a;
	cVar0 = std::make_shared<java::nio::file::ProviderMismatchException>();
	// throw
	throw cVar0;
	// 592    .line 552
label_cond_a:
	if ( !(owner->instanceOf("sun::nio::fs::UnixUserPrincipals_S_Group")) )  
		goto label_cond_17;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'owner\' parameter can\'t be a group")));
	// throw
	throw cVar1;
	// 607    .line 554
label_cond_17:
	owner->checkCast("sun::nio::fs::UnixUserPrincipals_S_User");
	//    .end local p1    # "owner":Ljava/nio/file/attribute/UserPrincipal;
	//    .local v0, "uid":I
	this->setOwners(owner->uid(), -0x1);
	return;

}
// .method public setPermissions(Ljava/util/Set;)V
void sun::nio::fs::UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl::setPermissions(std::shared_ptr<java::util::Set<java::nio::file::attribute::PosixFilePermission>> perms)
{
	
	std::shared_ptr<java::nio::file::ClosedDirectoryStreamException> cVar0;
	int fd;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 629        value = {
	// 630            "(",
	// 631            "Ljava/util/Set",
	// 632            "<",
	// 633            "Ljava/nio/file/attribute/PosixFilePermission;",
	// 634            ">;)V"
	// 635        }
	// 636    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 639        value = {
	// 640            Ljava/io/IOException;
	// 641        }
	// 642    .end annotation
	//    .local p1, "perms":Ljava/util/Set;, "Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;"
	this->checkWriteAndUserAccess();
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->lock();
	try {
	//label_try_start_10:
	if ( sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->isOpen() )     
		goto label_cond_31;
	cVar0 = std::make_shared<java::nio::file::ClosedDirectoryStreamException>();
	// throw
	throw cVar0;
	// 682    :try_end_22
	// 683    .catchall {:try_start_10 .. :try_end_22} :catchall_22
	// 685    .line 513
label_catchall_22:
	// move-exception
	
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->unlock();
	// throw
	throw;
	// 705    .line 504
label_cond_31:
	try {
	//label_try_start_31:
	if ( this->file )     
		goto label_cond_59;
	//label_try_end_3a:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_31 .. :try_end_3a} :catchall_22
	fd = sun::nio::fs::UnixSecureDirectoryStream::-get0(this->this_S_0);
	//    .local v0, "fd":I
label_goto_3b:
	try {
	//label_try_start_3b:
	sun::nio::fs::UnixNativeDispatcher::fchmod(fd, sun::nio::fs::UnixFileModeAttribute::toUnixMode(perms));
	//label_try_end_42:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5e;
	}
	catch (...){
		goto label_catchall_6e;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_3b .. :try_end_42} :catch_5e
	//    .catchall {:try_start_3b .. :try_end_42} :catchall_6e
	try {
	//label_try_start_42:
	if ( !(this->file) )  
		goto label_cond_4b;
	if ( fd < 0 ) 
		goto label_cond_4b;
	sun::nio::fs::UnixNativeDispatcher::close(fd);
	//label_try_end_4b:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_42 .. :try_end_4b} :catchall_22
label_cond_4b:
label_goto_4b:
	sun::nio::fs::UnixSecureDirectoryStream::-get1(this->this_S_0)->readLock()->unlock();
	return;
	// 764    .line 504
	// 765    .end local v0    # "fd":I
label_cond_59:
	try {
	//label_try_start_59:
	//label_try_end_5c:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_59 .. :try_end_5c} :catchall_22
	//    .restart local v0    # "fd":I
	goto label_goto_3b;
	// 777    .line 507
label_catch_5e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Lsun/nio/fs/UnixException;
	try {
	//label_try_start_5f:
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//label_try_end_64:
	}
	catch (...){
		goto label_catchall_6e;
	}
	//    .catchall {:try_start_5f .. :try_end_64} :catchall_6e
	try {
	//label_try_start_64:
	if ( !(this->file) )  
		goto label_cond_4b;
	if ( fd < 0 ) 
		goto label_cond_4b;
	sun::nio::fs::UnixNativeDispatcher::close(fd);
	goto label_goto_4b;
	// 803    .line 509
	// 804    .end local v1    # "x":Lsun/nio/fs/UnixException;
label_catchall_6e:
	// move-exception
	
	if ( !(this->file) )  
		goto label_cond_78;
	if ( fd < 0 ) 
		goto label_cond_78;
	sun::nio::fs::UnixNativeDispatcher::close(fd);
label_cond_78:
	// throw
	throw;
	// 821    :try_end_79
	// 822    .catchall {:try_start_64 .. :try_end_79} :catchall_22

}


