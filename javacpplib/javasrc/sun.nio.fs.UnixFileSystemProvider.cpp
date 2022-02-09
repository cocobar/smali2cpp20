// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileSystemProvider.smali
#include "java2ctype.h"
#include "java.io.FilePermission.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.SecurityException.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.net.URI.h"
#include "java.nio.channels.AsynchronousFileChannel.h"
#include "java.nio.channels.FileChannel.h"
#include "java.nio.channels.SeekableByteChannel.h"
#include "java.nio.file.AccessMode.h"
#include "java.nio.file.CopyOption.h"
#include "java.nio.file.DirectoryNotEmptyException.h"
#include "java.nio.file.DirectoryStream_S_Filter.h"
#include "java.nio.file.DirectoryStream.h"
#include "java.nio.file.FileAlreadyExistsException.h"
#include "java.nio.file.FileStore.h"
#include "java.nio.file.FileSystem.h"
#include "java.nio.file.FileSystemAlreadyExistsException.h"
#include "java.nio.file.LinkOption.h"
#include "java.nio.file.LinkPermission.h"
#include "java.nio.file.NotDirectoryException.h"
#include "java.nio.file.NotLinkException.h"
#include "java.nio.file.OpenOption.h"
#include "java.nio.file.Path.h"
#include "java.nio.file.ProviderMismatchException.h"
#include "java.nio.file.attribute.BasicFileAttributeView.h"
#include "java.nio.file.attribute.BasicFileAttributes.h"
#include "java.nio.file.attribute.FileAttribute.h"
#include "java.nio.file.attribute.FileAttributeView.h"
#include "java.nio.file.attribute.FileOwnerAttributeView.h"
#include "java.nio.file.attribute.PosixFileAttributeView.h"
#include "java.nio.file.attribute.PosixFileAttributes.h"
#include "java.nio.file.spi.FileTypeDetector.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.concurrent.ExecutorService.h"
#include "sun.nio.ch.ThreadPool.h"
#include "sun.nio.fs.AbstractFileTypeDetector.h"
#include "sun.nio.fs.DynamicFileAttributeView.h"
#include "sun.nio.fs.FileOwnerAttributeViewImpl.h"
#include "sun.nio.fs.UnixChannelFactory.h"
#include "sun.nio.fs.UnixConstants.h"
#include "sun.nio.fs.UnixCopyFile.h"
#include "sun.nio.fs.UnixDirectoryStream.h"
#include "sun.nio.fs.UnixException.h"
#include "sun.nio.fs.UnixFileAttributeViews_S_Basic.h"
#include "sun.nio.fs.UnixFileAttributeViews_S_Posix.h"
#include "sun.nio.fs.UnixFileAttributeViews_S_Unix.h"
#include "sun.nio.fs.UnixFileAttributeViews.h"
#include "sun.nio.fs.UnixFileAttributes.h"
#include "sun.nio.fs.UnixFileModeAttribute.h"
#include "sun.nio.fs.UnixFileSystem.h"
#include "sun.nio.fs.UnixFileSystemProvider_S_1.h"
#include "sun.nio.fs.UnixFileSystemProvider_S_2.h"
#include "sun.nio.fs.UnixFileSystemProvider.h"
#include "sun.nio.fs.UnixNativeDispatcher.h"
#include "sun.nio.fs.UnixPath.h"
#include "sun.nio.fs.UnixSecureDirectoryStream.h"
#include "sun.nio.fs.UnixUriUtils.h"
#include "sun.nio.fs.Util.h"

static sun::nio::fs::UnixFileSystemProvider::_java_nio_file_AccessModeSwitchesValues = nullptr;
static sun::nio::fs::UnixFileSystemProvider::USER_DIR = std::make_shared<java::lang::String>("user.dir");
// .method private static synthetic -getjava-nio-file-AccessModeSwitchesValues()[I
int sun::nio::fs::UnixFileSystemProvider::_getjava_nio_file_AccessModeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(sun::nio::fs::UnixFileSystemProvider::_java_nio_file_AccessModeSwitchesValues) )  
		goto label_cond_7;
	return sun::nio::fs::UnixFileSystemProvider::_java_nio_file_AccessModeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(java::nio::file::AccessMode::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[java::nio::file::AccessMode::EXECUTE->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_30;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_30
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[java::nio::file::AccessMode::READ->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2e;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_2e
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[java::nio::file::AccessMode::WRITE->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_2c
label_goto_29:
	sun::nio::fs::UnixFileSystemProvider::_java_nio_file_AccessModeSwitchesValues = cVar0;
	return cVar0;
label_catch_2c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_2e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_30:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method public constructor <init>()V
sun::nio::fs::UnixFileSystemProvider::UnixFileSystemProvider()
{
	
	// 104    invoke-direct {p0}, Lsun/nio/fs/AbstractFileSystemProvider;-><init>()V
	//    .local v0, "userDir":Ljava/lang/String;
	this->theFileSystem = this->newFileSystem(java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("user.dir"))));
	return;

}
// .method private checkUri(Ljava/net/URI;)V
void sun::nio::fs::UnixFileSystemProvider::checkUri(std::shared_ptr<java::net::URI> uri)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	
	//    .param p1, "uri"    # Ljava/net/URI;
	if ( uri->getScheme()->equalsIgnoreCase(this->getScheme()) )     
		goto label_cond_17;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI does not match this provider")));
	// throw
	throw cVar0;
	// 154    .line 72
label_cond_17:
	if ( !(uri->getAuthority()) )  
		goto label_cond_26;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Authority component present")));
	// throw
	throw cVar1;
	// 171    .line 74
label_cond_26:
	if ( uri->getPath() )     
		goto label_cond_35;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Path component is undefined")));
	// throw
	throw cVar2;
	// 188    .line 76
label_cond_35:
	if ( uri->getPath()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("/"))) )     
		goto label_cond_4b;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Path component should be \'/\'")));
	// throw
	throw cVar3;
	// 211    .line 78
label_cond_4b:
	if ( !(uri->getQuery()) )  
		goto label_cond_5a;
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Query component present")));
	// throw
	throw cVar4;
	// 228    .line 80
label_cond_5a:
	if ( !(uri->getFragment()) )  
		goto label_cond_69;
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Fragment component present")));
	// throw
	throw cVar5;
	// 245    .line 82
label_cond_69:
	return;

}
// .method final varargs chain([Lsun/nio/fs/AbstractFileTypeDetector;)Ljava/nio/file/spi/FileTypeDetector;
std::shared_ptr<java::nio::file::spi::FileTypeDetector> sun::nio::fs::UnixFileSystemProvider::chain(std::shared_ptr<std::vector<sun::nio::fs::AbstractFileTypeDetector>> detectors)
{
	
	std::shared_ptr<sun::nio::fs::UnixFileSystemProvider_S_2> cVar0;
	
	//    .param p1, "detectors"    # [Lsun/nio/fs/AbstractFileTypeDetector;
	cVar0 = std::make_shared<sun::nio::fs::UnixFileSystemProvider_S_2>(this, detectors);
	return cVar0;

}
// .method public varargs checkAccess(Ljava/nio/file/Path;[Ljava/nio/file/AccessMode;)V
void sun::nio::fs::UnixFileSystemProvider::checkAccess(std::shared_ptr<java::nio::file::Path> obj,std::shared_ptr<std::vector<java::nio::file::AccessMode>> modes)
{
	
	int cVar0;
	std::shared_ptr<sun::nio::fs::UnixPath> file;
	int r;
	int cVar1;
	int mode;
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	//    .param p2, "modes"    # [Ljava/nio/file/AccessMode;
	//    .annotation system Ldalvik/annotation/Throws;
	// 270        value = {
	// 271            Ljava/io/IOException;
	// 272        }
	// 273    .end annotation
	cVar0 = 0x0;
	file = sun::nio::fs::UnixPath::toUnixPath(obj);
	//    .local v2, "file":Lsun/nio/fs/UnixPath;
	//    .local v0, "e":Z
	r = 0x0;
	//    .local v5, "r":Z
	//    .local v7, "w":Z
	//    .local v8, "x":Z
	if ( modes->size() )     
		goto label_cond_39;
label_cond_d:
	//    .local v3, "mode":I
	if ( 0x0 )     
		goto label_cond_12;
	if ( !(r) )  
		goto label_cond_1b;
label_cond_12:
	file->checkRead();
	if ( !(r) )  
		goto label_cond_5c;
	cVar1 = sun::nio::fs::UnixConstants::R_OK;
label_goto_19:
	mode = ( cVar1 | 0x0);
label_cond_1b:
	if ( !(0x0) )  
		goto label_cond_23;
	file->checkWrite();
	mode = (mode |  sun::nio::fs::UnixConstants::W_OK);
label_cond_23:
	if ( !(0x0) )  
		goto label_cond_35;
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v6, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_32;
	sm->checkExec(file->getPathForPermissionCheck());
label_cond_32:
	//    .end local v6    # "sm":Ljava/lang/SecurityManager;
label_cond_35:
	try {
	//label_try_start_35:
	sun::nio::fs::UnixNativeDispatcher::access(file, 0x0);
	//label_try_end_38:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5f;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_35 .. :try_end_38} :catch_5f
label_goto_38:
	return;
	// 380    .line 278
	// 381    .end local v3    # "mode":I
label_cond_39:
label_goto_3a:
	if ( cVar0 >= modes->size() )
		goto label_cond_d;
	//    .local v4, "mode":Ljava/nio/file/AccessMode;
	// switch
	{
	auto item = ( sun::nio::fs::UnixFileSystemProvider::-getjava-nio-file-AccessModeSwitchesValues({const[class].FS-Param})[modes[cVar0]->ordinal()] );
	if (item == 1) goto label_pswitch_5a;
	if (item == 2) goto label_pswitch_54;
	if (item == 3) goto label_pswitch_58;
	}
	cVar2 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Should not get here")));
	// throw
	throw cVar2;
	// 413    .line 280
label_pswitch_54:
	0x1;
label_goto_55:
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_3a;
	// 423    .line 281
label_pswitch_58:
	0x1;
	goto label_goto_55;
	// 429    .line 282
label_pswitch_5a:
	0x1;
	goto label_goto_55;
	// 435    .line 291
	// 436    .end local v4    # "mode":Ljava/nio/file/AccessMode;
	// 437    .restart local v3    # "mode":I
label_cond_5c:
	cVar1 = sun::nio::fs::UnixConstants::F_OK;
	goto label_goto_19;
	// 443    .line 307
label_catch_5f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "exc":Lsun/nio/fs/UnixException;
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_38;
	// 453    .line 279
	// 454    :pswitch_data_64
	// 455    .packed-switch 0x1
	// 456        :pswitch_5a
	// 457        :pswitch_54
	// 458        :pswitch_58
	// 459    .end packed-switch

}
// .method checkPath(Ljava/nio/file/Path;)Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixFileSystemProvider::checkPath(std::shared_ptr<java::nio::file::Path> obj)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::nio::file::ProviderMismatchException> cVar1;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	if ( obj )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 477    .line 104
label_cond_8:
	if ( obj->instanceOf("sun::nio::fs::UnixPath") )     
		goto label_cond_12;
	cVar1 = std::make_shared<java::nio::file::ProviderMismatchException>();
	// throw
	throw cVar1;
	// 490    .line 106
label_cond_12:
	obj->checkCast("sun::nio::fs::UnixPath");
	//    .end local p1    # "obj":Ljava/nio/file/Path;
	return obj;

}
// .method public varargs copy(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V
void sun::nio::fs::UnixFileSystemProvider::copy(std::shared_ptr<java::nio::file::Path> source,std::shared_ptr<java::nio::file::Path> target,std::shared_ptr<std::vector<java::nio::file::CopyOption>> options)
{
	
	//    .param p1, "source"    # Ljava/nio/file/Path;
	//    .param p2, "target"    # Ljava/nio/file/Path;
	//    .param p3, "options"    # [Ljava/nio/file/CopyOption;
	//    .annotation system Ldalvik/annotation/Throws;
	// 504        value = {
	// 505            Ljava/io/IOException;
	// 506        }
	// 507    .end annotation
	sun::nio::fs::UnixCopyFile::copy(sun::nio::fs::UnixPath::toUnixPath(source), sun::nio::fs::UnixPath::toUnixPath(target), options);
	return;

}
// .method public varargs createDirectory(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V
void sun::nio::fs::UnixFileSystemProvider::createDirectory(std::shared_ptr<java::nio::file::Path> obj,std::shared_ptr<std::vector<java::nio::file::attribute::FileAttribute<java::lang::Object>>> attrs)
{
	
	std::shared_ptr<sun::nio::fs::UnixPath> dir;
	std::shared_ptr<sun::nio::fs::UnixException> x;
	std::shared_ptr<java::nio::file::FileAlreadyExistsException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	//    .annotation system Ldalvik/annotation/Signature;
	// 531        value = {
	// 532            "(",
	// 533            "Ljava/nio/file/Path;",
	// 534            "[",
	// 535            "Ljava/nio/file/attribute/FileAttribute",
	// 536            "<*>;)V"
	// 537        }
	// 538    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 541        value = {
	// 542            Ljava/io/IOException;
	// 543        }
	// 544    .end annotation
	//    .local p2, "attrs":[Ljava/nio/file/attribute/FileAttribute;, "[Ljava/nio/file/attribute/FileAttribute<*>;"
	dir = sun::nio::fs::UnixPath::toUnixPath(obj);
	//    .local v0, "dir":Lsun/nio/fs/UnixPath;
	dir->checkWrite();
	//    .local v1, "mode":I
	try {
	//label_try_start_d:
	sun::nio::fs::UnixNativeDispatcher::mkdir(dir, sun::nio::fs::UnixFileModeAttribute::toUnixMode(sun::nio::fs::UnixFileModeAttribute::ALL_PERMISSIONS, attrs));
	//label_try_end_10:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_11;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_d .. :try_end_10} :catch_11
label_goto_10:
	return;
	// 575    .line 385
label_catch_11:
	// move-exception
	x = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "x":Lsun/nio/fs/UnixException;
	if ( x->errno() != sun::nio::fs::UnixConstants::EISDIR )
		goto label_cond_24;
	cVar0 = std::make_shared<java::nio::file::FileAlreadyExistsException>(dir->toString());
	// throw
	throw cVar0;
	// 600    .line 388
label_cond_24:
	// throw
	x->rethrowAsIOException(dir);
	goto label_goto_10;

}
// .method public createLink(Ljava/nio/file/Path;Ljava/nio/file/Path;)V
void sun::nio::fs::UnixFileSystemProvider::createLink(std::shared_ptr<java::nio::file::Path> obj1,std::shared_ptr<java::nio::file::Path> obj2)
{
	
	std::shared_ptr<sun::nio::fs::UnixPath> link;
	std::shared_ptr<sun::nio::fs::UnixPath> existing;
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::shared_ptr<java::nio::file::LinkPermission> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj1"    # Ljava/nio/file/Path;
	//    .param p2, "obj2"    # Ljava/nio/file/Path;
	//    .annotation system Ldalvik/annotation/Throws;
	// 612        value = {
	// 613            Ljava/io/IOException;
	// 614        }
	// 615    .end annotation
	link = sun::nio::fs::UnixPath::toUnixPath(obj1);
	//    .local v1, "link":Lsun/nio/fs/UnixPath;
	existing = sun::nio::fs::UnixPath::toUnixPath(obj2);
	//    .local v0, "existing":Lsun/nio/fs/UnixPath;
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v2, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_1f;
	cVar0 = std::make_shared<java::nio::file::LinkPermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hard")));
	sm->checkPermission(cVar0);
	link->checkWrite();
	existing->checkWrite();
label_cond_1f:
	try {
	//label_try_start_1f:
	sun::nio::fs::UnixNativeDispatcher::link(existing, link);
	//label_try_end_22:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_1f .. :try_end_22} :catch_23
label_goto_22:
	return;
	// 665    .line 479
label_catch_23:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "x":Lsun/nio/fs/UnixException;
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_22;

}
// .method public varargs createSymbolicLink(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V
void sun::nio::fs::UnixFileSystemProvider::createSymbolicLink(std::shared_ptr<java::nio::file::Path> obj1,std::shared_ptr<java::nio::file::Path> obj2,std::shared_ptr<std::vector<java::nio::file::attribute::FileAttribute<java::lang::Object>>> attrs)
{
	
	std::shared_ptr<sun::nio::fs::UnixPath> link;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::shared_ptr<java::nio::file::LinkPermission> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj1"    # Ljava/nio/file/Path;
	//    .param p2, "obj2"    # Ljava/nio/file/Path;
	//    .annotation system Ldalvik/annotation/Signature;
	// 681        value = {
	// 682            "(",
	// 683            "Ljava/nio/file/Path;",
	// 684            "Ljava/nio/file/Path;",
	// 685            "[",
	// 686            "Ljava/nio/file/attribute/FileAttribute",
	// 687            "<*>;)V"
	// 688        }
	// 689    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 692        value = {
	// 693            Ljava/io/IOException;
	// 694        }
	// 695    .end annotation
	//    .local p3, "attrs":[Ljava/nio/file/attribute/FileAttribute;, "[Ljava/nio/file/attribute/FileAttribute<*>;"
	link = sun::nio::fs::UnixPath::toUnixPath(obj1);
	//    .local v0, "link":Lsun/nio/fs/UnixPath;
	//    .local v2, "target":Lsun/nio/fs/UnixPath;
	if ( attrs->size() <= 0 )
		goto label_cond_18;
	sun::nio::fs::UnixFileModeAttribute::toUnixMode(0x0, attrs);
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Initial file attributesnot supported when creating symbolic link")));
	// throw
	throw cVar0;
	// 730    .line 451
label_cond_18:
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v1, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_2c;
	cVar1 = std::make_shared<java::nio::file::LinkPermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("symbolic")));
	sm->checkPermission(cVar1);
	link->checkWrite();
label_cond_2c:
	try {
	//label_try_start_2c:
	sun::nio::fs::UnixNativeDispatcher::symlink(sun::nio::fs::UnixPath::toUnixPath(obj2)->asByteArray(), link);
	//label_try_end_33:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_34;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_2c .. :try_end_33} :catch_34
label_goto_33:
	return;
	// 767    .line 460
label_catch_34:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "x":Lsun/nio/fs/UnixException;
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_33;

}
// .method public varargs getFileAttributeView(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;
std::shared_ptr<java::nio::file::attribute::FileAttributeView> sun::nio::fs::UnixFileSystemProvider::getFileAttributeView(std::shared_ptr<java::nio::file::Path> obj,std::shared_ptr<java::lang::Class<java::nio::file::attribute::FileAttributeView>> type,std::shared_ptr<std::vector<java::nio::file::LinkOption>> options)
{
	
	std::shared_ptr<java::nio::file::attribute::FileAttributeView> cVar0;
	std::shared_ptr<sun::nio::fs::UnixPath> file;
	bool followLinks;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	//    .param p3, "options"    # [Ljava/nio/file/LinkOption;
	//    .annotation system Ldalvik/annotation/Signature;
	// 783        value = {
	// 784            "<V::",
	// 785            "Ljava/nio/file/attribute/FileAttributeView;",
	// 786            ">(",
	// 787            "Ljava/nio/file/Path;",
	// 788            "Ljava/lang/Class",
	// 789            "<TV;>;[",
	// 790            "Ljava/nio/file/LinkOption;",
	// 791            ")TV;"
	// 792        }
	// 793    .end annotation
	//    .local p2, "type":Ljava/lang/Class;, "Ljava/lang/Class<TV;>;"
	cVar0 = 0x0;
	file = sun::nio::fs::UnixPath::toUnixPath(obj);
	//    .local v0, "file":Lsun/nio/fs/UnixPath;
	followLinks = sun::nio::fs::Util::followLinks(options);
	//    .local v1, "followLinks":Z
	if ( type != java::nio::file::attribute::BasicFileAttributeView() )
		goto label_cond_12;
	return sun::nio::fs::UnixFileAttributeViews::createBasicView(file, followLinks);
	// 823    .line 119
label_cond_12:
	if ( type != java::nio::file::attribute::PosixFileAttributeView() )
		goto label_cond_1b;
	return sun::nio::fs::UnixFileAttributeViews::createPosixView(file, followLinks);
	// 836    .line 121
label_cond_1b:
	if ( type != java::nio::file::attribute::FileOwnerAttributeView() )
		goto label_cond_24;
	return sun::nio::fs::UnixFileAttributeViews::createOwnerView(file, followLinks);
	// 849    .line 123
label_cond_24:
	if ( type )     
		goto label_cond_2c;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 860    .line 125
label_cond_2c:
	cVar0->checkCast("java::nio::file::attribute::FileAttributeView");
	return cVar0;

}
// .method protected varargs getFileAttributeView(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Lsun/nio/fs/DynamicFileAttributeView;
std::shared_ptr<sun::nio::fs::DynamicFileAttributeView> sun::nio::fs::UnixFileSystemProvider::getFileAttributeView(std::shared_ptr<java::nio::file::Path> obj,std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::nio::file::LinkOption>> options)
{
	
	std::shared_ptr<sun::nio::fs::UnixPath> file;
	bool followLinks;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	//    .param p2, "name"    # Ljava/lang/String;
	//    .param p3, "options"    # [Ljava/nio/file/LinkOption;
	file = sun::nio::fs::UnixPath::toUnixPath(obj);
	//    .local v0, "file":Lsun/nio/fs/UnixPath;
	followLinks = sun::nio::fs::Util::followLinks(options);
	//    .local v1, "followLinks":Z
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("basic")))) )  
		goto label_cond_16;
	return sun::nio::fs::UnixFileAttributeViews::createBasicView(file, followLinks);
	// 902    .line 156
label_cond_16:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("posix")))) )  
		goto label_cond_24;
	return sun::nio::fs::UnixFileAttributeViews::createPosixView(file, followLinks);
	// 919    .line 158
label_cond_24:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("unix")))) )  
		goto label_cond_32;
	return sun::nio::fs::UnixFileAttributeViews::createUnixView(file, followLinks);
	// 936    .line 160
label_cond_32:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("owner")))) )  
		goto label_cond_40;
	return sun::nio::fs::UnixFileAttributeViews::createOwnerView(file, followLinks);
	// 953    .line 162
label_cond_40:
	return 0x0;

}
// .method public getFileStore(Ljava/nio/file/Path;)Ljava/nio/file/FileStore;
std::shared_ptr<java::nio::file::FileStore> sun::nio::fs::UnixFileSystemProvider::getFileStore(std::shared_ptr<java::nio::file::Path> obj)
{
	
	std::shared_ptr<java::lang::SecurityException> cVar0;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	//    .annotation system Ldalvik/annotation/Throws;
	// 964        value = {
	// 965            Ljava/io/IOException;
	// 966        }
	// 967    .end annotation
	cVar0 = std::make_shared<java::lang::SecurityException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("getFileStore")));
	// throw
	throw cVar0;

}
// .method abstract getFileStore(Lsun/nio/fs/UnixPath;)Ljava/nio/file/FileStore;
std::shared_ptr<java::nio::file::FileStore> sun::nio::fs::UnixFileSystemProvider::getFileStore(std::shared_ptr<sun::nio::fs::UnixPath> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 982        value = {
	// 983            Ljava/io/IOException;
	// 984        }
	// 985    .end annotation

}
// .method public final getFileSystem(Ljava/net/URI;)Ljava/nio/file/FileSystem;
std::shared_ptr<java::nio::file::FileSystem> sun::nio::fs::UnixFileSystemProvider::getFileSystem(std::shared_ptr<java::net::URI> uri)
{
	
	//    .param p1, "uri"    # Ljava/net/URI;
	this->checkUri(uri);
	return this->theFileSystem;

}
// .method getFileTypeDetector()Ljava/nio/file/spi/FileTypeDetector;
std::shared_ptr<java::nio::file::spi::FileTypeDetector> sun::nio::fs::UnixFileSystemProvider::getFileTypeDetector()
{
	
	std::shared_ptr<sun::nio::fs::UnixFileSystemProvider_S_1> cVar0;
	
	cVar0 = std::make_shared<sun::nio::fs::UnixFileSystemProvider_S_1>(this);
	return cVar0;

}
// .method public getPath(Ljava/net/URI;)Ljava/nio/file/Path;
std::shared_ptr<java::nio::file::Path> sun::nio::fs::UnixFileSystemProvider::getPath(std::shared_ptr<java::net::URI> uri)
{
	
	//    .param p1, "uri"    # Ljava/net/URI;
	return sun::nio::fs::UnixUriUtils::fromUri(this->theFileSystem, uri);

}
// .method public final getScheme()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixFileSystemProvider::getScheme()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("file"));

}
// .method implDelete(Ljava/nio/file/Path;Z)Z
bool sun::nio::fs::UnixFileSystemProvider::implDelete(std::shared_ptr<java::nio::file::Path> obj,bool failIfNotExists)
{
	
	bool cVar0;
	std::shared_ptr<sun::nio::fs::UnixPath> file;
	std::shared_ptr<sun::nio::fs::UnixFileAttributes> attrs;
	std::shared_ptr<sun::nio::fs::UnixException> x;
	std::shared_ptr<java::nio::file::DirectoryNotEmptyException> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	//    .param p2, "failIfNotExists"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1044        value = {
	// 1045            Ljava/io/IOException;
	// 1046        }
	// 1047    .end annotation
	cVar0 = 0x0;
	file = sun::nio::fs::UnixPath::toUnixPath(obj);
	//    .local v1, "file":Lsun/nio/fs/UnixPath;
	file->checkDelete();
	attrs = 0x0;
	//    .local v0, "attrs":Lsun/nio/fs/UnixFileAttributes;
	try {
	//label_try_start_a:
	//    .local v0, "attrs":Lsun/nio/fs/UnixFileAttributes;
	if ( !(sun::nio::fs::UnixFileAttributes::get(file, 0x0)->isDirectory()) )  
		goto label_cond_19;
	sun::nio::fs::UnixNativeDispatcher::rmdir(file);
label_goto_17:
	return 0x1;
	// 1090    .line 231
label_cond_19:
	sun::nio::fs::UnixNativeDispatcher::unlink(file);
	//label_try_end_1c:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1d;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_a .. :try_end_1c} :catch_1d
	goto label_goto_17;
	// 1098    .line 234
	// 1099    .end local v0    # "attrs":Lsun/nio/fs/UnixFileAttributes;
label_catch_1d:
	// move-exception
	x = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "x":Lsun/nio/fs/UnixException;
	if ( failIfNotExists )     
		goto label_cond_29;
	if ( x->errno() != sun::nio::fs::UnixConstants::ENOENT )
		goto label_cond_29;
	return cVar0;
	// 1118    .line 240
label_cond_29:
	if ( !(attrs) )  
		goto label_cond_4b;
	if ( !(attrs->isDirectory()) )  
		goto label_cond_4b;
	if ( x->errno() == sun::nio::fs::UnixConstants::EEXIST )
		goto label_cond_41;
	if ( x->errno() != sun::nio::fs::UnixConstants::ENOTEMPTY )
		goto label_cond_4b;
label_cond_41:
	cVar1 = std::make_shared<java::nio::file::DirectoryNotEmptyException>(file->getPathForExceptionMessage());
	// throw
	throw cVar1;
	// 1157    .line 244
label_cond_4b:
	// throw
	x->rethrowAsIOException(file);
	return cVar0;

}
// .method public isHidden(Ljava/nio/file/Path;)Z
bool sun::nio::fs::UnixFileSystemProvider::isHidden(std::shared_ptr<java::nio::file::Path> obj)
{
	
	bool cVar1;
	std::shared_ptr<sun::nio::fs::UnixPath> file;
	std::shared_ptr<sun::nio::fs::UnixPath> name;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	cVar1 = 0x0;
	file = sun::nio::fs::UnixPath::toUnixPath(obj);
	//    .local v0, "file":Lsun/nio/fs/UnixPath;
	file->checkRead();
	name = file->getFileName();
	//    .local v1, "name":Lsun/nio/fs/UnixPath;
	if ( name )     
		goto label_cond_f;
	return cVar1;
	// 1193    .line 351
label_cond_f:
	if ( name->asByteArray()[cVar1] != 0x2e )
		goto label_cond_1a;
	cVar1 = 0x1;
label_cond_1a:
	return cVar1;

}
// .method public isSameFile(Ljava/nio/file/Path;Ljava/nio/file/Path;)Z
bool sun::nio::fs::UnixFileSystemProvider::isSameFile(std::shared_ptr<java::nio::file::Path> obj1,std::shared_ptr<java::nio::file::Path> obj2)
{
	
	bool cVar0;
	std::shared_ptr<sun::nio::fs::UnixPath> file1;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	std::shared_ptr<sun::nio::fs::UnixPath> file2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj1"    # Ljava/nio/file/Path;
	//    .param p2, "obj2"    # Ljava/nio/file/Path;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1216        value = {
	// 1217            Ljava/io/IOException;
	// 1218        }
	// 1219    .end annotation
	cVar0 = 0x0;
	file1 = sun::nio::fs::UnixPath::toUnixPath(obj1);
	//    .local v2, "file1":Lsun/nio/fs/UnixPath;
	if ( !(file1->equals(obj2)) )  
		goto label_cond_d;
	return 0x1;
	// 1242    .line 317
label_cond_d:
	if ( obj2 )     
		goto label_cond_15;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 1253    .line 319
label_cond_15:
	if ( obj2->instanceOf("sun::nio::fs::UnixPath") )     
		goto label_cond_1a;
	return cVar0;
label_cond_1a:
	file2 = obj2;
	file2->checkCast("sun::nio::fs::UnixPath");
	//    .local v3, "file2":Lsun/nio/fs/UnixPath;
	file1->checkRead();
	file2->checkRead();
	try {
	//label_try_start_24:
	//label_try_end_27:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_32;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_24 .. :try_end_27} :catch_32
	//    .local v0, "attrs1":Lsun/nio/fs/UnixFileAttributes;
	try {
	//label_try_start_29:
	//label_try_end_2c:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_29 .. :try_end_2c} :catch_37
	//    .local v1, "attrs2":Lsun/nio/fs/UnixFileAttributes;
	return sun::nio::fs::UnixFileAttributes::get(file1, 0x1)->isSameFile(sun::nio::fs::UnixFileAttributes::get(file2, 0x1));
	// 1304    .line 331
	// 1305    .end local v0    # "attrs1":Lsun/nio/fs/UnixFileAttributes;
	// 1306    .end local v1    # "attrs2":Lsun/nio/fs/UnixFileAttributes;
label_catch_32:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v4, "x":Lsun/nio/fs/UnixException;
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	return cVar0;
	// 1317    .line 337
	// 1318    .end local v4    # "x":Lsun/nio/fs/UnixException;
	// 1319    .restart local v0    # "attrs1":Lsun/nio/fs/UnixFileAttributes;
label_catch_37:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v4    # "x":Lsun/nio/fs/UnixException;
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	return cVar0;

}
// .method public varargs move(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V
void sun::nio::fs::UnixFileSystemProvider::move(std::shared_ptr<java::nio::file::Path> source,std::shared_ptr<java::nio::file::Path> target,std::shared_ptr<std::vector<java::nio::file::CopyOption>> options)
{
	
	//    .param p1, "source"    # Ljava/nio/file/Path;
	//    .param p2, "target"    # Ljava/nio/file/Path;
	//    .param p3, "options"    # [Ljava/nio/file/CopyOption;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1337        value = {
	// 1338            Ljava/io/IOException;
	// 1339        }
	// 1340    .end annotation
	sun::nio::fs::UnixCopyFile::move(sun::nio::fs::UnixPath::toUnixPath(source), sun::nio::fs::UnixPath::toUnixPath(target), options);
	return;

}
// .method public varargs newAsynchronousFileChannel(Ljava/nio/file/Path;Ljava/util/Set;Ljava/util/concurrent/ExecutorService;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/AsynchronousFileChannel;
std::shared_ptr<java::nio::channels::AsynchronousFileChannel> sun::nio::fs::UnixFileSystemProvider::newAsynchronousFileChannel(std::shared_ptr<java::nio::file::Path> obj,std::shared_ptr<java::util::Set<java::nio::file::OpenOption>> options,std::shared_ptr<java::util::concurrent::ExecutorService> executor,std::shared_ptr<std::vector<java::nio::file::attribute::FileAttribute<java::lang::Object>>> attrs)
{
	
	std::shared_ptr<sun::nio::fs::UnixPath> file;
	std::shared_ptr<sun::nio::ch::ThreadPool> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	//    .param p3, "executor"    # Ljava/util/concurrent/ExecutorService;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1365        value = {
	// 1366            "(",
	// 1367            "Ljava/nio/file/Path;",
	// 1368            "Ljava/util/Set",
	// 1369            "<+",
	// 1370            "Ljava/nio/file/OpenOption;",
	// 1371            ">;",
	// 1372            "Ljava/util/concurrent/ExecutorService;",
	// 1373            "[",
	// 1374            "Ljava/nio/file/attribute/FileAttribute",
	// 1375            "<*>;)",
	// 1376            "Ljava/nio/channels/AsynchronousFileChannel;"
	// 1377        }
	// 1378    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1381        value = {
	// 1382            Ljava/io/IOException;
	// 1383        }
	// 1384    .end annotation
	//    .local p2, "options":Ljava/util/Set;, "Ljava/util/Set<+Ljava/nio/file/OpenOption;>;"
	//    .local p4, "attrs":[Ljava/nio/file/attribute/FileAttribute;, "[Ljava/nio/file/attribute/FileAttribute<*>;"
	file = this->checkPath(obj);
	//    .local v0, "file":Lsun/nio/fs/UnixPath;
	//    .local v1, "mode":I
	if ( executor )     
		goto label_cond_13;
	cVar0 = 0x0;
label_goto_e:
	try {
	//label_try_start_e:
	//label_try_end_11:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_e .. :try_end_11} :catch_19
	return sun::nio::fs::UnixChannelFactory::newAsynchronousFileChannel(file, options, sun::nio::fs::UnixFileModeAttribute::toUnixMode(sun::nio::fs::UnixFileModeAttribute::ALL_READWRITE, attrs), cVar0);
	// 1422    .line 191
label_cond_13:
	cVar0 = sun::nio::ch::ThreadPool::wrap(executor, 0x0);
	//    .local v2, "pool":Lsun/nio/ch/ThreadPool;
	goto label_goto_e;
	// 1433    .line 195
	// 1434    .end local v2    # "pool":Lsun/nio/ch/ThreadPool;
label_catch_19:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "x":Lsun/nio/fs/UnixException;
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	return 0x0;

}
// .method public varargs newByteChannel(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;
std::shared_ptr<java::nio::channels::SeekableByteChannel> sun::nio::fs::UnixFileSystemProvider::newByteChannel(std::shared_ptr<java::nio::file::Path> obj,std::shared_ptr<java::util::Set<java::nio::file::OpenOption>> options,std::shared_ptr<std::vector<java::nio::file::attribute::FileAttribute<java::lang::Object>>> attrs)
{
	
	std::shared_ptr<sun::nio::fs::UnixPath> file;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1450        value = {
	// 1451            "(",
	// 1452            "Ljava/nio/file/Path;",
	// 1453            "Ljava/util/Set",
	// 1454            "<+",
	// 1455            "Ljava/nio/file/OpenOption;",
	// 1456            ">;[",
	// 1457            "Ljava/nio/file/attribute/FileAttribute",
	// 1458            "<*>;)",
	// 1459            "Ljava/nio/channels/SeekableByteChannel;"
	// 1460        }
	// 1461    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1464        value = {
	// 1465            Ljava/io/IOException;
	// 1466        }
	// 1467    .end annotation
	//    .local p2, "options":Ljava/util/Set;, "Ljava/util/Set<+Ljava/nio/file/OpenOption;>;"
	//    .local p3, "attrs":[Ljava/nio/file/attribute/FileAttribute;, "[Ljava/nio/file/attribute/FileAttribute<*>;"
	file = sun::nio::fs::UnixPath::toUnixPath(obj);
	//    .local v0, "file":Lsun/nio/fs/UnixPath;
	//    .local v1, "mode":I
	try {
	//label_try_start_a:
	//label_try_end_d:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_a .. :try_end_d} :catch_f
	return sun::nio::fs::UnixChannelFactory::newFileChannel(file, options, sun::nio::fs::UnixFileModeAttribute::toUnixMode(sun::nio::fs::UnixFileModeAttribute::ALL_READWRITE, attrs));
	// 1497    .line 213
label_catch_f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "x":Lsun/nio/fs/UnixException;
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	return 0x0;

}
// .method public newDirectoryStream(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter;)Ljava/nio/file/DirectoryStream;
std::shared_ptr<java::nio::file::DirectoryStream<java::nio::file::Path>> sun::nio::fs::UnixFileSystemProvider::newDirectoryStream(std::shared_ptr<java::nio::file::Path> obj,std::shared_ptr<java::nio::file::DirectoryStream_S_Filter<java::nio::file::Path>> filter)
{
	
	int cVar0;
	std::shared_ptr<sun::nio::fs::UnixPath> dir;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	std::shared_ptr<sun::nio::fs::UnixException> x;
	std::shared_ptr<java::nio::file::NotDirectoryException> cVar3;
	int dfd1;
	int dfd2;
	long long dp;
	std::shared_ptr<java::nio::file::NotDirectoryException> cVar5;
	std::shared_ptr<sun::nio::fs::UnixSecureDirectoryStream> cVar4;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::nio::fs::UnixDirectoryStream> cVar2;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1515        value = {
	// 1516            "(",
	// 1517            "Ljava/nio/file/Path;",
	// 1518            "Ljava/nio/file/DirectoryStream$Filter",
	// 1519            "<-",
	// 1520            "Ljava/nio/file/Path;",
	// 1521            ">;)",
	// 1522            "Ljava/nio/file/DirectoryStream",
	// 1523            "<",
	// 1524            "Ljava/nio/file/Path;",
	// 1525            ">;"
	// 1526        }
	// 1527    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1530        value = {
	// 1531            Ljava/io/IOException;
	// 1532        }
	// 1533    .end annotation
	//    .local p2, "filter":Ljava/nio/file/DirectoryStream$Filter;, "Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;"
	cVar0 = -0x1;
	dir = sun::nio::fs::UnixPath::toUnixPath(obj);
	//    .local v1, "dir":Lsun/nio/fs/UnixPath;
	dir->checkRead();
	if ( filter )     
		goto label_cond_10;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 1558    .line 404
label_cond_10:
	if ( !(sun::nio::fs::UnixNativeDispatcher::openatSupported({const[class].FS-Param})) )  
		goto label_cond_1a;
	if ( sun::nio::fs::UnixConstants::O_NOFOLLOW )     
		goto label_cond_3a;
label_cond_1a:
	try {
	//label_try_start_1a:
	//    .local v8, "ptr":J
	cVar2 = std::make_shared<sun::nio::fs::UnixDirectoryStream>(dir, sun::nio::fs::UnixNativeDispatcher::opendir(dir), filter);
	//label_try_end_23:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_1a .. :try_end_23} :catch_24
	return cVar2;
	// 1587    .line 408
	// 1588    .end local v8    # "ptr":J
label_catch_24:
	// move-exception
	x = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v7, "x":Lsun/nio/fs/UnixException;
	if ( x->errno() != sun::nio::fs::UnixConstants::ENOTDIR )
		goto label_cond_37;
	cVar3 = std::make_shared<java::nio::file::NotDirectoryException>(dir->getPathForExceptionMessage());
	// throw
	throw cVar3;
	// 1613    .line 411
label_cond_37:
	// throw
	x->rethrowAsIOException(dir);
	//    .end local v7    # "x":Lsun/nio/fs/UnixException;
label_cond_3a:
	dfd1 = -0x1;
	//    .local v6, "dfd1":I
	dfd2 = -0x1;
	//    .local v4, "dfd2":I
	dp = 0x0;
	//    .local v2, "dp":J
	try {
	//label_try_start_3e:
	dfd1 = sun::nio::fs::UnixNativeDispatcher::open(dir, sun::nio::fs::UnixConstants::O_RDONLY, 0x0);
	dfd2 = sun::nio::fs::UnixNativeDispatcher::dup(dfd1);
	//label_try_end_4c:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_54;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_3e .. :try_end_4c} :catch_54
	dp = sun::nio::fs::UnixNativeDispatcher::fdopendir(dfd1);
label_goto_4d:
	cVar4 = std::make_shared<sun::nio::fs::UnixSecureDirectoryStream>(dir, dp, dfd2, filter);
	return cVar4;
	// 1663    .line 424
label_catch_54:
	// move-exception
	x = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v7    # "x":Lsun/nio/fs/UnixException;
	if ( dfd1 == cVar0 )
		goto label_cond_5a;
	sun::nio::fs::UnixNativeDispatcher::close(dfd1);
label_cond_5a:
	if ( dfd2 == cVar0 )
		goto label_cond_5f;
	sun::nio::fs::UnixNativeDispatcher::close(dfd2);
label_cond_5f:
	if ( x->errno() != sun::nio::fs::UnixConstants::ENOTDIR )
		goto label_cond_71;
	cVar5 = std::make_shared<java::nio::file::NotDirectoryException>(dir->getPathForExceptionMessage());
	// throw
	throw cVar5;
	// 1702    .line 431
label_cond_71:
	// throw
	x->rethrowAsIOException(dir);
	goto label_goto_4d;

}
// .method public varargs newFileChannel(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;
std::shared_ptr<java::nio::channels::FileChannel> sun::nio::fs::UnixFileSystemProvider::newFileChannel(std::shared_ptr<java::nio::file::Path> obj,std::shared_ptr<java::util::Set<java::nio::file::OpenOption>> options,std::shared_ptr<std::vector<java::nio::file::attribute::FileAttribute<java::lang::Object>>> attrs)
{
	
	std::shared_ptr<sun::nio::fs::UnixPath> file;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1713        value = {
	// 1714            "(",
	// 1715            "Ljava/nio/file/Path;",
	// 1716            "Ljava/util/Set",
	// 1717            "<+",
	// 1718            "Ljava/nio/file/OpenOption;",
	// 1719            ">;[",
	// 1720            "Ljava/nio/file/attribute/FileAttribute",
	// 1721            "<*>;)",
	// 1722            "Ljava/nio/channels/FileChannel;"
	// 1723        }
	// 1724    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1727        value = {
	// 1728            Ljava/io/IOException;
	// 1729        }
	// 1730    .end annotation
	//    .local p2, "options":Ljava/util/Set;, "Ljava/util/Set<+Ljava/nio/file/OpenOption;>;"
	//    .local p3, "attrs":[Ljava/nio/file/attribute/FileAttribute;, "[Ljava/nio/file/attribute/FileAttribute<*>;"
	file = this->checkPath(obj);
	//    .local v0, "file":Lsun/nio/fs/UnixPath;
	//    .local v1, "mode":I
	try {
	//label_try_start_a:
	//label_try_end_d:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_a .. :try_end_d} :catch_f
	return sun::nio::fs::UnixChannelFactory::newFileChannel(file, options, sun::nio::fs::UnixFileModeAttribute::toUnixMode(sun::nio::fs::UnixFileModeAttribute::ALL_READWRITE, attrs));
	// 1760    .line 176
label_catch_f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "x":Lsun/nio/fs/UnixException;
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	return 0x0;

}
// .method public final newFileSystem(Ljava/net/URI;Ljava/util/Map;)Ljava/nio/file/FileSystem;
std::shared_ptr<java::nio::file::FileSystem> sun::nio::fs::UnixFileSystemProvider::newFileSystem(std::shared_ptr<java::net::URI> uri,std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> env)
{
	
	std::shared_ptr<java::nio::file::FileSystemAlreadyExistsException> cVar0;
	
	//    .param p1, "uri"    # Ljava/net/URI;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1778        value = {
	// 1779            "(",
	// 1780            "Ljava/net/URI;",
	// 1781            "Ljava/util/Map",
	// 1782            "<",
	// 1783            "Ljava/lang/String;",
	// 1784            "*>;)",
	// 1785            "Ljava/nio/file/FileSystem;"
	// 1786        }
	// 1787    .end annotation
	//    .local p2, "env":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;*>;"
	this->checkUri(uri);
	cVar0 = std::make_shared<java::nio::file::FileSystemAlreadyExistsException>();
	// throw
	throw cVar0;

}
// .method public varargs readAttributes(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/BasicFileAttributes;
std::shared_ptr<java::nio::file::attribute::BasicFileAttributes> sun::nio::fs::UnixFileSystemProvider::readAttributes(std::shared_ptr<java::nio::file::Path> file,std::shared_ptr<java::lang::Class<java::nio::file::attribute::BasicFileAttributes>> type,std::shared_ptr<std::vector<java::nio::file::LinkOption>> options)
{
	
	std::shared_ptr<java::nio::file::attribute::BasicFileAttributeView> cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar2;
	
	//    .param p1, "file"    # Ljava/nio/file/Path;
	//    .param p3, "options"    # [Ljava/nio/file/LinkOption;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1810        value = {
	// 1811            "<A::",
	// 1812            "Ljava/nio/file/attribute/BasicFileAttributes;",
	// 1813            ">(",
	// 1814            "Ljava/nio/file/Path;",
	// 1815            "Ljava/lang/Class",
	// 1816            "<TA;>;[",
	// 1817            "Ljava/nio/file/LinkOption;",
	// 1818            ")TA;"
	// 1819        }
	// 1820    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1823        value = {
	// 1824            Ljava/io/IOException;
	// 1825        }
	// 1826    .end annotation
	//    .local p2, "type":Ljava/lang/Class;, "Ljava/lang/Class<TA;>;"
	if ( type != java::nio::file::attribute::BasicFileAttributes() )
		goto label_cond_11;
	//    .local v0, "view":Ljava/lang/Class;, "Ljava/lang/Class<+Ljava/nio/file/attribute/BasicFileAttributeView;>;"
label_goto_6:
	cVar0 = this->getFileAttributeView(file, view, options);
	cVar0->checkCast("java::nio::file::attribute::BasicFileAttributeView");
	return cVar0->readAttributes();
	// 1853    .line 138
	// 1854    .end local v0    # "view":Ljava/lang/Class;, "Ljava/lang/Class<+Ljava/nio/file/attribute/BasicFileAttributeView;>;"
label_cond_11:
	if ( type != java::nio::file::attribute::PosixFileAttributes() )
		goto label_cond_18;
	//    .restart local v0    # "view":Ljava/lang/Class;, "Ljava/lang/Class<+Ljava/nio/file/attribute/BasicFileAttributeView;>;"
	goto label_goto_6;
	// 1866    .line 140
	// 1867    .end local v0    # "view":Ljava/lang/Class;, "Ljava/lang/Class<+Ljava/nio/file/attribute/BasicFileAttributeView;>;"
label_cond_18:
	if ( type )     
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 1878    .line 143
label_cond_20:
	cVar2 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar2;

}
// .method public readSymbolicLink(Ljava/nio/file/Path;)Ljava/nio/file/Path;
std::shared_ptr<java::nio::file::Path> sun::nio::fs::UnixFileSystemProvider::readSymbolicLink(std::shared_ptr<java::nio::file::Path> obj1)
{
	
	std::shared_ptr<sun::nio::fs::UnixPath> link;
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::shared_ptr<java::io::FilePermission> perm;
	std::shared_ptr<sun::nio::fs::UnixException> x;
	std::shared_ptr<java::nio::file::NotLinkException> cVar1;
	std::shared_ptr<sun::nio::fs::UnixPath> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj1"    # Ljava/nio/file/Path;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1891        value = {
	// 1892            Ljava/io/IOException;
	// 1893        }
	// 1894    .end annotation
	link = sun::nio::fs::UnixPath::toUnixPath(obj1);
	//    .local v0, "link":Lsun/nio/fs/UnixPath;
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v2, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_1a;
	perm = std::make_shared<java::io::FilePermission>(link->getPathForPermissionCheck(), std::make_shared<java::lang::String>(std::make_shared<char[]>("readlink")));
	//    .local v1, "perm":Ljava/io/FilePermission;
	sm->checkPermission(perm);
	//    .end local v1    # "perm":Ljava/io/FilePermission;
label_cond_1a:
	try {
	//label_try_start_1a:
	//    .local v3, "target":[B
	cVar0 = std::make_shared<sun::nio::fs::UnixPath>(link->getFileSystem(), sun::nio::fs::UnixNativeDispatcher::readlink(link));
	//label_try_end_27:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_28;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_1a .. :try_end_27} :catch_28
	return cVar0;
	// 1953    .line 497
	// 1954    .end local v3    # "target":[B
label_catch_28:
	// move-exception
	x = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "x":Lsun/nio/fs/UnixException;
	if ( x->errno() != sun::nio::fs::UnixConstants::EINVAL )
		goto label_cond_3b;
	cVar1 = std::make_shared<java::nio::file::NotLinkException>(link->getPathForExceptionMessage());
	// throw
	throw cVar1;
	// 1979    .line 500
label_cond_3b:
	// throw
	x->rethrowAsIOException(link);
	return 0x0;

}


