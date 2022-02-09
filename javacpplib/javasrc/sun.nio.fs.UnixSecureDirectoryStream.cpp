// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixSecureDirectoryStream.smali
#include "java2ctype.h"
#include "dalvik.system.CloseGuard.h"
#include "java.lang.Class.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.nio.channels.FileChannel.h"
#include "java.nio.channels.SeekableByteChannel.h"
#include "java.nio.file.AtomicMoveNotSupportedException.h"
#include "java.nio.file.ClosedDirectoryStreamException.h"
#include "java.nio.file.DirectoryNotEmptyException.h"
#include "java.nio.file.DirectoryStream_S_Filter.h"
#include "java.nio.file.LinkOption.h"
#include "java.nio.file.NotDirectoryException.h"
#include "java.nio.file.OpenOption.h"
#include "java.nio.file.Path.h"
#include "java.nio.file.ProviderMismatchException.h"
#include "java.nio.file.SecureDirectoryStream.h"
#include "java.nio.file.attribute.BasicFileAttributeView.h"
#include "java.nio.file.attribute.FileAttribute.h"
#include "java.nio.file.attribute.FileAttributeView.h"
#include "java.nio.file.attribute.FileOwnerAttributeView.h"
#include "java.nio.file.attribute.PosixFileAttributeView.h"
#include "java.util.Iterator.h"
#include "java.util.Set.h"
#include "java.util.concurrent.locks.Lock.h"
#include "sun.nio.fs.UnixChannelFactory.h"
#include "sun.nio.fs.UnixConstants.h"
#include "sun.nio.fs.UnixDirectoryStream.h"
#include "sun.nio.fs.UnixException.h"
#include "sun.nio.fs.UnixFileAttributes.h"
#include "sun.nio.fs.UnixFileModeAttribute.h"
#include "sun.nio.fs.UnixNativeDispatcher.h"
#include "sun.nio.fs.UnixPath.h"
#include "sun.nio.fs.UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl.h"
#include "sun.nio.fs.UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl.h"
#include "sun.nio.fs.UnixSecureDirectoryStream.h"
#include "sun.nio.fs.Util.h"

// .method static synthetic -get0(Lsun/nio/fs/UnixSecureDirectoryStream;)I
int sun::nio::fs::UnixSecureDirectoryStream::_get0(std::shared_ptr<sun::nio::fs::UnixSecureDirectoryStream> _this)
{
	
	//    .param p0, "-this"    # Lsun/nio/fs/UnixSecureDirectoryStream;
	return _this->dfd;

}
// .method static synthetic -get1(Lsun/nio/fs/UnixSecureDirectoryStream;)Lsun/nio/fs/UnixDirectoryStream;
std::shared_ptr<sun::nio::fs::UnixDirectoryStream> sun::nio::fs::UnixSecureDirectoryStream::_get1(std::shared_ptr<sun::nio::fs::UnixSecureDirectoryStream> _this)
{
	
	//    .param p0, "-this"    # Lsun/nio/fs/UnixSecureDirectoryStream;
	return _this->ds;

}
// .method constructor <init>(Lsun/nio/fs/UnixPath;JILjava/nio/file/DirectoryStream$Filter;)V
sun::nio::fs::UnixSecureDirectoryStream::UnixSecureDirectoryStream(std::shared_ptr<sun::nio::fs::UnixPath> dir,long long dp,int dfd,std::shared_ptr<java::nio::file::DirectoryStream_S_Filter<java::nio::file::Path>> filter)
{
	
	std::shared_ptr<sun::nio::fs::UnixDirectoryStream> cVar0;
	
	//    .param p1, "dir"    # Lsun/nio/fs/UnixPath;
	//    .param p2, "dp"    # J
	//    .param p4, "dfd"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 063        value = {
	// 064            "(",
	// 065            "Lsun/nio/fs/UnixPath;",
	// 066            "JI",
	// 067            "Ljava/nio/file/DirectoryStream$Filter",
	// 068            "<-",
	// 069            "Ljava/nio/file/Path;",
	// 070            ">;)V"
	// 071        }
	// 072    .end annotation
	//    .local p5, "filter":Ljava/nio/file/DirectoryStream$Filter;, "Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;"
	// 077    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->guard = dalvik::system::CloseGuard::get({const[class].FS-Param});
	cVar0 = std::make_shared<sun::nio::fs::UnixDirectoryStream>(dir, dp, filter);
	this->ds = cVar0;
	this->dfd = dfd;
	if ( dfd == -0x1 )
		goto label_cond_1d;
	this->guard->open(std::make_shared<java::lang::String>(std::make_shared<char[]>("close")));
label_cond_1d:
	return;

}
// .method private getFileAttributeViewImpl(Lsun/nio/fs/UnixPath;Ljava/lang/Class;Z)Ljava/nio/file/attribute/FileAttributeView;
std::shared_ptr<java::nio::file::attribute::FileAttributeView> sun::nio::fs::UnixSecureDirectoryStream::getFileAttributeViewImpl(std::shared_ptr<sun::nio::fs::UnixPath> file,std::shared_ptr<java::lang::Class<java::nio::file::attribute::FileAttributeView>> type,bool followLinks)
{
	
	std::shared_ptr<java::nio::file::attribute::FileAttributeView> cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	std::shared_ptr<sun::nio::fs::UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl> cVar2;
	std::shared_ptr<sun::nio::fs::UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl> cVar3;
	
	//    .param p1, "file"    # Lsun/nio/fs/UnixPath;
	//    .param p3, "followLinks"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 118        value = {
	// 119            "<V::",
	// 120            "Ljava/nio/file/attribute/FileAttributeView;",
	// 121            ">(",
	// 122            "Lsun/nio/fs/UnixPath;",
	// 123            "Ljava/lang/Class",
	// 124            "<TV;>;Z)TV;"
	// 125        }
	// 126    .end annotation
	//    .local p2, "type":Ljava/lang/Class;, "Ljava/lang/Class<TV;>;"
	cVar0 = 0x0;
	if ( type )     
		goto label_cond_9;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 142    .line 288
label_cond_9:
	type;
	//    .local v0, "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( type != java::nio::file::attribute::BasicFileAttributeView() )
		goto label_cond_14;
	cVar2 = std::make_shared<sun::nio::fs::UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl>(this, file, followLinks);
	return cVar2;
	// 159    .line 292
label_cond_14:
	if ( type == java::nio::file::attribute::PosixFileAttributeView() )
		goto label_cond_1c;
	if ( type != java::nio::file::attribute::FileOwnerAttributeView() )
		goto label_cond_22;
label_cond_1c:
	cVar3 = std::make_shared<sun::nio::fs::UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl>(this, file, followLinks);
	return cVar3;
	// 177    .line 296
label_cond_22:
	cVar0->checkCast("java::nio::file::attribute::FileAttributeView");
	return cVar0;

}
// .method private getName(Ljava/nio/file/Path;)Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixSecureDirectoryStream::getName(std::shared_ptr<java::nio::file::Path> obj)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::nio::file::ProviderMismatchException> cVar1;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	if ( obj )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 199    .line 90
label_cond_8:
	if ( obj->instanceOf("sun::nio::fs::UnixPath") )     
		goto label_cond_12;
	cVar1 = std::make_shared<java::nio::file::ProviderMismatchException>();
	// throw
	throw cVar1;
	// 212    .line 92
label_cond_12:
	obj->checkCast("sun::nio::fs::UnixPath");
	//    .end local p1    # "obj":Ljava/nio/file/Path;
	return obj;

}
// .method private implDelete(Ljava/nio/file/Path;ZI)V
void sun::nio::fs::UnixSecureDirectoryStream::implDelete(std::shared_ptr<java::nio::file::Path> obj,bool haveFlags,int cVar1)
{
	
	std::shared_ptr<java::nio::file::Path> file;
	std::shared_ptr<java::nio::file::ClosedDirectoryStreamException> cVar0;
	std::shared_ptr<sun::nio::fs::UnixFileAttributes> attrs;
	int cVar1;
	std::shared_ptr<sun::nio::fs::UnixException> x;
	std::shared_ptr<java::nio::file::DirectoryNotEmptyException> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	//    .param p2, "haveFlags"    # Z
	//    .param p3, "flags"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 226        value = {
	// 227            Ljava/io/IOException;
	// 228        }
	// 229    .end annotation
	file = this->getName(obj);
	//    .local v1, "file":Lsun/nio/fs/UnixPath;
	//    .local v2, "sm":Ljava/lang/SecurityManager;
	if ( !(java::lang::System::getSecurityManager({const[class].FS-Param})) )  
		goto label_cond_17;
	this->ds->directory()->resolve(file)->checkDelete();
label_cond_17:
	this->ds->readLock()->lock();
	try {
	//label_try_start_20:
	if ( this->ds->isOpen() )     
		goto label_cond_39;
	cVar0 = std::make_shared<java::nio::file::ClosedDirectoryStreamException>();
	// throw
	throw cVar0;
	// 286    :try_end_2e
	// 287    .catchall {:try_start_20 .. :try_end_2e} :catchall_2e
	// 289    .line 220
label_catchall_2e:
	// move-exception
	
	this->ds->readLock()->unlock();
	// throw
	throw;
	// 305    .line 196
label_cond_39:
	if ( haveFlags )     
		goto label_cond_4b;
	attrs = 0x0;
	//    .local v0, "attrs":Lsun/nio/fs/UnixFileAttributes;
	try {
	//label_try_start_3c:
	//label_try_end_42:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5e;
	}
	catch (...){
		goto label_catchall_2e;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_3c .. :try_end_42} :catch_5e
	//    .catchall {:try_start_3c .. :try_end_42} :catchall_2e
	attrs = sun::nio::fs::UnixFileAttributes::get(this->dfd, file, 0x0);
	//    .end local v0    # "attrs":Lsun/nio/fs/UnixFileAttributes;
label_goto_43:
	try {
	//label_try_start_43:
	//label_try_end_46:
	}
	catch (...){
		goto label_catchall_2e;
	}
	//    .catchall {:try_start_43 .. :try_end_46} :catchall_2e
	if ( !(attrs->isDirectory()) )  
		goto label_cond_63;
	cVar1 = 0x200;
label_cond_4b:
label_goto_4b:
	try {
	//label_try_start_4b:
	sun::nio::fs::UnixNativeDispatcher::unlinkat(this->dfd, file->asByteArray(), cVar1);
	//label_try_end_54:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_65;
	}
	catch (...){
		goto label_catchall_2e;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_4b .. :try_end_54} :catch_65
	//    .catchall {:try_start_4b .. :try_end_54} :catchall_2e
label_goto_54:
	this->ds->readLock()->unlock();
	return;
	// 368    .line 204
	// 369    .restart local v0    # "attrs":Lsun/nio/fs/UnixFileAttributes;
label_catch_5e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "x":Lsun/nio/fs/UnixException;
	try {
	//label_try_start_5f:
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_43;
	// 380    .line 207
	// 381    .end local v0    # "attrs":Lsun/nio/fs/UnixFileAttributes;
	// 382    .end local v3    # "x":Lsun/nio/fs/UnixException;
label_cond_63:
	cVar1 = 0x0;
	goto label_goto_4b;
	// 388    .line 212
label_catch_65:
	// move-exception
	x = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v3    # "x":Lsun/nio/fs/UnixException;
	if ( !(( cVar1 & 0x200)) )  
		goto label_cond_81;
	if ( x->errno() == sun::nio::fs::UnixConstants::EEXIST )
		goto label_cond_7a;
	if ( x->errno() != sun::nio::fs::UnixConstants::ENOTEMPTY )
		goto label_cond_81;
label_cond_7a:
	cVar3 = std::make_shared<java::nio::file::DirectoryNotEmptyException>(0x0);
	// throw
	throw cVar3;
	// 425    .line 218
label_cond_81:
	// throw
	x->rethrowAsIOException(file);
	//label_try_end_84:
	}
	catch (...){
		goto label_catchall_2e;
	}
	//    .catchall {:try_start_5f .. :try_end_84} :catchall_2e
	goto label_goto_54;

}
// .method public close()V
void sun::nio::fs::UnixSecureDirectoryStream::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 439        value = {
	// 440            Ljava/io/IOException;
	// 441        }
	// 442    .end annotation
	this->ds->writeLock()->lock();
	try {
	//label_try_start_9:
	if ( !(this->ds->closeImpl()) )  
		goto label_cond_16;
	sun::nio::fs::UnixNativeDispatcher::close(this->dfd);
	//label_try_end_16:
	}
	catch (...){
		goto label_catchall_25;
	}
	//    .catchall {:try_start_9 .. :try_end_16} :catchall_25
label_cond_16:
	this->ds->writeLock()->unlock();
	this->guard->close();
	return;
	// 489    .line 75
label_catchall_25:
	// move-exception
	
	this->ds->writeLock()->unlock();
	// throw
	throw;

}
// .method public deleteDirectory(Ljava/nio/file/Path;)V
void sun::nio::fs::UnixSecureDirectoryStream::deleteDirectory(std::shared_ptr<java::nio::file::Path> dir)
{
	
	//    .param p1, "dir"    # Ljava/nio/file/Path;
	//    .annotation system Ldalvik/annotation/Throws;
	// 527        value = {
	// 528            Ljava/io/IOException;
	// 529        }
	// 530    .end annotation
	this->implDelete(dir, 0x1, 0x200);
	return;

}
// .method public deleteFile(Ljava/nio/file/Path;)V
void sun::nio::fs::UnixSecureDirectoryStream::deleteFile(std::shared_ptr<java::nio::file::Path> file)
{
	
	//    .param p1, "file"    # Ljava/nio/file/Path;
	//    .annotation system Ldalvik/annotation/Throws;
	// 565        value = {
	// 566            Ljava/io/IOException;
	// 567        }
	// 568    .end annotation
	this->implDelete(file, 0x1, 0x0);
	return;

}
// .method protected finalize()V
void sun::nio::fs::UnixSecureDirectoryStream::finalize()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 585        value = {
	// 586            Ljava/io/IOException;
	// 587        }
	// 588    .end annotation
	if ( !(this->guard) )  
		goto label_cond_9;
	this->guard->warnIfOpen();
label_cond_9:
	this->close();
	return;

}
// .method public getFileAttributeView(Ljava/lang/Class;)Ljava/nio/file/attribute/FileAttributeView;
std::shared_ptr<java::nio::file::attribute::FileAttributeView> sun::nio::fs::UnixSecureDirectoryStream::getFileAttributeView(std::shared_ptr<java::lang::Class<java::nio::file::attribute::FileAttributeView>> type)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 612        value = {
	// 613            "<V::",
	// 614            "Ljava/nio/file/attribute/FileAttributeView;",
	// 615            ">(",
	// 616            "Ljava/lang/Class",
	// 617            "<TV;>;)TV;"
	// 618        }
	// 619    .end annotation
	//    .local p1, "type":Ljava/lang/Class;, "Ljava/lang/Class<TV;>;"
	return this->getFileAttributeViewImpl(0x0, type, 0x0);

}
// .method public varargs getFileAttributeView(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;
std::shared_ptr<java::nio::file::attribute::FileAttributeView> sun::nio::fs::UnixSecureDirectoryStream::getFileAttributeView(std::shared_ptr<java::nio::file::Path> obj,std::shared_ptr<java::lang::Class<java::nio::file::attribute::FileAttributeView>> type,std::shared_ptr<std::vector<java::nio::file::LinkOption>> options)
{
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	//    .param p3, "options"    # [Ljava/nio/file/LinkOption;
	//    .annotation system Ldalvik/annotation/Signature;
	// 654        value = {
	// 655            "<V::",
	// 656            "Ljava/nio/file/attribute/FileAttributeView;",
	// 657            ">(",
	// 658            "Ljava/nio/file/Path;",
	// 659            "Ljava/lang/Class",
	// 660            "<TV;>;[",
	// 661            "Ljava/nio/file/LinkOption;",
	// 662            ")TV;"
	// 663        }
	// 664    .end annotation
	//    .local p2, "type":Ljava/lang/Class;, "Ljava/lang/Class<TV;>;"
	//    .local v0, "file":Lsun/nio/fs/UnixPath;
	//    .local v1, "followLinks":Z
	return this->getFileAttributeViewImpl(this->getName(obj), type, sun::nio::fs::Util::followLinks(options));

}
// .method public iterator()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<java::nio::file::Path>> sun::nio::fs::UnixSecureDirectoryStream::iterator()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 691        value = {
	// 692            "()",
	// 693            "Ljava/util/Iterator",
	// 694            "<",
	// 695            "Ljava/nio/file/Path;",
	// 696            ">;"
	// 697        }
	// 698    .end annotation
	return this->ds->iterator(this);

}
// .method public move(Ljava/nio/file/Path;Ljava/nio/file/SecureDirectoryStream;Ljava/nio/file/Path;)V
void sun::nio::fs::UnixSecureDirectoryStream::move(std::shared_ptr<java::nio::file::Path> fromObj,std::shared_ptr<java::nio::file::SecureDirectoryStream<java::nio::file::Path>> dir,std::shared_ptr<java::nio::file::Path> toObj)
{
	
	std::shared_ptr<java::nio::file::Path> from;
	std::shared_ptr<java::nio::file::Path> to;
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::nio::file::ProviderMismatchException> cVar1;
	std::shared_ptr<sun::nio::fs::UnixSecureDirectoryStream> that;
	std::shared_ptr<java::nio::file::ClosedDirectoryStreamException> cVar2;
	std::shared_ptr<sun::nio::fs::UnixException> x;
	std::shared_ptr<java::nio::file::AtomicMoveNotSupportedException> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "fromObj"    # Ljava/nio/file/Path;
	//    .param p3, "toObj"    # Ljava/nio/file/Path;
	//    .annotation system Ldalvik/annotation/Signature;
	// 735        value = {
	// 736            "(",
	// 737            "Ljava/nio/file/Path;",
	// 738            "Ljava/nio/file/SecureDirectoryStream",
	// 739            "<",
	// 740            "Ljava/nio/file/Path;",
	// 741            ">;",
	// 742            "Ljava/nio/file/Path;",
	// 743            ")V"
	// 744        }
	// 745    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 748        value = {
	// 749            Ljava/io/IOException;
	// 750        }
	// 751    .end annotation
	//    .local p2, "dir":Ljava/nio/file/SecureDirectoryStream;, "Ljava/nio/file/SecureDirectoryStream<Ljava/nio/file/Path;>;"
	from = this->getName(fromObj);
	//    .local v0, "from":Lsun/nio/fs/UnixPath;
	to = this->getName(toObj);
	//    .local v3, "to":Lsun/nio/fs/UnixPath;
	if ( dir )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 777    .line 246
label_cond_10:
	if ( dir->instanceOf("sun::nio::fs::UnixSecureDirectoryStream") )     
		goto label_cond_1a;
	cVar1 = std::make_shared<java::nio::file::ProviderMismatchException>();
	// throw
	throw cVar1;
label_cond_1a:
	that = dir;
	that->checkCast("sun::nio::fs::UnixSecureDirectoryStream");
	//    .local v2, "that":Lsun/nio/fs/UnixSecureDirectoryStream;
	//    .local v1, "sm":Ljava/lang/SecurityManager;
	if ( !(java::lang::System::getSecurityManager({const[class].FS-Param})) )  
		goto label_cond_3d;
	this->ds->directory()->resolve(from)->checkWrite();
	that->ds->directory()->resolve(to)->checkWrite();
label_cond_3d:
	this->ds->readLock()->lock();
	try {
	//label_try_start_46:
	that->ds->readLock()->lock();
	//label_try_end_4f:
	}
	catch (...){
		goto label_catchall_72;
	}
	//    .catchall {:try_start_46 .. :try_end_4f} :catchall_72
	try {
	//label_try_start_4f:
	if ( !(this->ds->isOpen()) )  
		goto label_cond_61;
	if ( !(( that->ds->isOpen() ^ 0x1)) )  
		goto label_cond_7d;
label_cond_61:
	cVar2 = std::make_shared<java::nio::file::ClosedDirectoryStreamException>();
	// throw
	throw cVar2;
	// 881    :try_end_67
	// 882    .catchall {:try_start_4f .. :try_end_67} :catchall_67
	// 884    .line 273
label_catchall_67:
	// move-exception
	
	try {
	//label_try_start_68:
	that->ds->readLock()->unlock();
	// throw
	throw;
	// 900    :try_end_72
	// 901    .catchall {:try_start_68 .. :try_end_72} :catchall_72
	// 903    .line 276
label_catchall_72:
	// move-exception
	
	this->ds->readLock()->unlock();
	// throw
	throw;
	// 919    .line 265
label_cond_7d:
	try {
	//label_try_start_7d:
	sun::nio::fs::UnixNativeDispatcher::renameat(this->dfd, from->asByteArray(), that->dfd, to->asByteArray());
	//label_try_end_8c:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9f;
	}
	catch (...){
		goto label_catchall_67;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_7d .. :try_end_8c} :catch_9f
	//    .catchall {:try_start_7d .. :try_end_8c} :catchall_67
label_goto_8c:
	try {
	//label_try_start_8c:
	that->ds->readLock()->unlock();
	//label_try_end_95:
	}
	catch (...){
		goto label_catchall_72;
	}
	//    .catchall {:try_start_8c .. :try_end_95} :catchall_72
	this->ds->readLock()->unlock();
	return;
	// 964    .line 266
label_catch_9f:
	// move-exception
	x = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "x":Lsun/nio/fs/UnixException;
	try {
	//label_try_start_a0:
	if ( x->errno() != sun::nio::fs::UnixConstants::EXDEV )
		goto label_cond_ba;
	cVar3 = std::make_shared<java::nio::file::AtomicMoveNotSupportedException>(from->toString(), to->toString(), x->errorString());
	// throw
	throw cVar3;
	// 1000    .line 271
label_cond_ba:
	// throw
	x->rethrowAsIOException(from, to);
	//label_try_end_bd:
	}
	catch (...){
		goto label_catchall_67;
	}
	//    .catchall {:try_start_a0 .. :try_end_bd} :catchall_67
	goto label_goto_8c;

}
// .method public varargs newByteChannel(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;
std::shared_ptr<java::nio::channels::SeekableByteChannel> sun::nio::fs::UnixSecureDirectoryStream::newByteChannel(std::shared_ptr<java::nio::file::Path> obj,std::shared_ptr<java::util::Set<java::nio::file::OpenOption>> options,std::shared_ptr<std::vector<java::nio::file::attribute::FileAttribute<java::lang::Object>>> attrs)
{
	
	std::shared_ptr<java::nio::file::Path> file;
	std::shared_ptr<java::nio::file::ClosedDirectoryStreamException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1032        value = {
	// 1033            "(",
	// 1034            "Ljava/nio/file/Path;",
	// 1035            "Ljava/util/Set",
	// 1036            "<+",
	// 1037            "Ljava/nio/file/OpenOption;",
	// 1038            ">;[",
	// 1039            "Ljava/nio/file/attribute/FileAttribute",
	// 1040            "<*>;)",
	// 1041            "Ljava/nio/channels/SeekableByteChannel;"
	// 1042        }
	// 1043    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1046        value = {
	// 1047            Ljava/io/IOException;
	// 1048        }
	// 1049    .end annotation
	//    .local p2, "options":Ljava/util/Set;, "Ljava/util/Set<+Ljava/nio/file/OpenOption;>;"
	//    .local p3, "attrs":[Ljava/nio/file/attribute/FileAttribute;, "[Ljava/nio/file/attribute/FileAttribute<*>;"
	file = this->getName(obj);
	//    .local v0, "file":Lsun/nio/fs/UnixPath;
	//    .local v1, "mode":I
	//    .local v2, "pathToCheck":Ljava/lang/String;
	this->ds->readLock()->lock();
	try {
	//label_try_start_21:
	if ( this->ds->isOpen() )     
		goto label_cond_3a;
	cVar0 = std::make_shared<java::nio::file::ClosedDirectoryStreamException>();
	// throw
	throw cVar0;
	// 1110    :try_end_2f
	// 1111    .catchall {:try_start_21 .. :try_end_2f} :catchall_2f
	// 1113    .line 171
label_catchall_2f:
	// move-exception
	
	this->ds->readLock()->unlock();
	// throw
	throw;
	// 1129    .line 166
label_cond_3a:
	try {
	//label_try_start_3a:
	//label_try_end_3f:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4a;
	}
	catch (...){
		goto label_catchall_2f;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_3a .. :try_end_3f} :catch_4a
	//    .catchall {:try_start_3a .. :try_end_3f} :catchall_2f
	this->ds->readLock()->unlock();
	return sun::nio::fs::UnixChannelFactory::newFileChannel(this->dfd, file, this->ds->directory()->resolve(file)->getPathForPermissionCheck(), options, sun::nio::fs::UnixFileModeAttribute::toUnixMode(sun::nio::fs::UnixFileModeAttribute::ALL_READWRITE, attrs));
	// 1153    .line 167
label_catch_4a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "x":Lsun/nio/fs/UnixException;
	try {
	//label_try_start_4b:
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//label_try_end_4e:
	}
	catch (...){
		goto label_catchall_2f;
	}
	//    .catchall {:try_start_4b .. :try_end_4e} :catchall_2f
	this->ds->readLock()->unlock();
	return 0x0;

}
// .method public varargs newDirectoryStream(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/nio/file/SecureDirectoryStream;
std::shared_ptr<java::nio::file::SecureDirectoryStream<java::nio::file::Path>> sun::nio::fs::UnixSecureDirectoryStream::newDirectoryStream(std::shared_ptr<java::nio::file::Path> obj,std::shared_ptr<std::vector<java::nio::file::LinkOption>> options)
{
	
	std::shared_ptr<java::nio::file::Path> file;
	std::shared_ptr<sun::nio::fs::UnixPath> child;
	std::shared_ptr<java::nio::file::ClosedDirectoryStreamException> cVar0;
	int newdfd1;
	int newdfd2;
	long long ptr;
	std::shared_ptr<sun::nio::fs::UnixException> x;
	std::shared_ptr<java::nio::file::NotDirectoryException> cVar2;
	std::shared_ptr<sun::nio::fs::UnixSecureDirectoryStream> cVar1;
	int flags;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	//    .param p2, "options"    # [Ljava/nio/file/LinkOption;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1204        value = {
	// 1205            "(",
	// 1206            "Ljava/nio/file/Path;",
	// 1207            "[",
	// 1208            "Ljava/nio/file/LinkOption;",
	// 1209            ")",
	// 1210            "Ljava/nio/file/SecureDirectoryStream",
	// 1211            "<",
	// 1212            "Ljava/nio/file/Path;",
	// 1213            ">;"
	// 1214        }
	// 1215    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1218        value = {
	// 1219            Ljava/io/IOException;
	// 1220        }
	// 1221    .end annotation
	file = this->getName(obj);
	//    .local v6, "file":Lsun/nio/fs/UnixPath;
	child = this->ds->directory()->resolve(file);
	//    .local v1, "child":Lsun/nio/fs/UnixPath;
	//    .local v8, "followLinks":Z
	//    .local v10, "sm":Ljava/lang/SecurityManager;
	if ( !(java::lang::System::getSecurityManager({const[class].FS-Param})) )  
		goto label_cond_1b;
	child->checkRead();
label_cond_1b:
	this->ds->readLock()->lock();
	try {
	//label_try_start_24:
	if ( this->ds->isOpen() )     
		goto label_cond_3d;
	cVar0 = std::make_shared<java::nio::file::ClosedDirectoryStreamException>();
	// throw
	throw cVar0;
	// 1286    :try_end_32
	// 1287    .catchall {:try_start_24 .. :try_end_32} :catchall_32
	// 1289    .line 139
label_catchall_32:
	// move-exception
	
	this->ds->readLock()->unlock();
	// throw
	throw;
	// 1305    .line 119
label_cond_3d:
	newdfd1 = -0x1;
	//    .local v9, "newdfd1":I
	newdfd2 = -0x1;
	//    .local v4, "newdfd2":I
	ptr = 0x0;
	//    .local v2, "ptr":J
	try {
	//label_try_start_41:
	flags = sun::nio::fs::UnixConstants::O_RDONLY;
	//    .local v7, "flags":I
	if ( sun::nio::fs::Util::followLinks(options) )     
		goto label_cond_48;
label_cond_48:
	newdfd1 = sun::nio::fs::UnixNativeDispatcher::openat(this->dfd, file->asByteArray(), flags, 0x0);
	newdfd2 = sun::nio::fs::UnixNativeDispatcher::dup(newdfd1);
	//label_try_end_5a:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6b;
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_41 .. :try_end_5a} :catch_6b
	//    .catchall {:try_start_41 .. :try_end_5a} :catchall_32
	ptr = sun::nio::fs::UnixNativeDispatcher::fdopendir(newdfd1);
	//    .end local v7    # "flags":I
label_goto_5b:
	try {
	//label_try_start_5b:
	cVar1 = std::make_shared<sun::nio::fs::UnixSecureDirectoryStream>(child, ptr, newdfd2, 0x0);
	//label_try_end_61:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_5b .. :try_end_61} :catchall_32
	this->ds->readLock()->unlock();
	return cVar1;
	// 1382    .line 129
label_catch_6b:
	// move-exception
	x = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v11, "x":Lsun/nio/fs/UnixException;
	if ( newdfd1 == -0x1 )
		goto label_cond_72;
	try {
	//label_try_start_6f:
	sun::nio::fs::UnixNativeDispatcher::close(newdfd1);
label_cond_72:
	if ( newdfd2 == -0x1 )
		goto label_cond_78;
	sun::nio::fs::UnixNativeDispatcher::close(newdfd2);
label_cond_78:
	if ( x->errno() != sun::nio::fs::UnixConstants::ENOTDIR )
		goto label_cond_8a;
	cVar2 = std::make_shared<java::nio::file::NotDirectoryException>(file->toString());
	// throw
	throw cVar2;
	// 1426    .line 136
label_cond_8a:
	// throw
	x->rethrowAsIOException(file);
	//label_try_end_8d:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_6f .. :try_end_8d} :catchall_32
	goto label_goto_5b;

}


