// CPP L:\smali2cpp20\x64\Release\out\java\io\File.smali
#include "java2ctype.h"
#include "java.io.DefaultFileSystem.h"
#include "java.io.DeleteOnExitHook.h"
#include "java.io.File_S_PathStatus.h"
#include "java.io.File_S_TempDirectory.h"
#include "java.io.File.h"
#include "java.io.FileFilter.h"
#include "java.io.FileSystem.h"
#include "java.io.FilenameFilter.h"
#include "java.io.IOException.h"
#include "java.io.ObjectInputStream_S_GetField.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Error.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.ReflectiveOperationException.h"
#include "java.lang.RuntimePermission.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.lang.reflect.Field.h"
#include "java.net.MalformedURLException.h"
#include "java.net.URI.h"
#include "java.net.URISyntaxException.h"
#include "java.net.URL.h"
#include "java.nio.file.FileSystem.h"
#include "java.nio.file.FileSystems.h"
#include "java.nio.file.Path.h"
#include "java.util.ArrayList.h"
#include "sun.misc.Unsafe.h"

static java::io::File::_assertionsDisabled;
static java::io::File::PATH_OFFSET;
static java::io::File::PREFIX_LENGTH_OFFSET;
static java::io::File::UNSAFE;
static java::io::File::fs;
static java::io::File::pathSeparator;
static java::io::File::pathSeparatorChar;
static java::io::File::separator;
static java::io::File::separatorChar;
static java::io::File::serialVersionUID = 0x42da4450e0de4ffL;
// .method static constructor <clinit>()V
void java::io::File::static_cinit()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::Error> cVar2;
	std::shared_ptr<sun::misc::Unsafe> unsafe;
	std::vector<std::any> tryCatchExcetionList;
	
	java::io::File::_assertionsDisabled = ( java::io::File()->desiredAssertionStatus() ^ 0x1);
	java::io::File::fs = java::io::DefaultFileSystem::getFileSystem({const[class].FS-Param});
	java::io::File::separatorChar = java::io::File::fs->getSeparator();
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::io::File::separator = cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("")))->append(java::io::File::separatorChar)->toString();
	java::io::File::pathSeparatorChar = java::io::File::fs->getPathSeparator();
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::io::File::pathSeparator = cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("")))->append(java::io::File::pathSeparatorChar)->toString();
	try {
	//label_try_start_50:
	unsafe = sun::misc::Unsafe::getUnsafe({const[class].FS-Param});
	//    .local v1, "unsafe":Lsun/misc/Unsafe;
	java::io::File::PATH_OFFSET = unsafe->objectFieldOffset(java::io::File()->getDeclaredField(std::make_shared<java::lang::String>(std::make_shared<char[]>("path"))));
	java::io::File::PREFIX_LENGTH_OFFSET = unsafe->objectFieldOffset(java::io::File()->getDeclaredField(std::make_shared<java::lang::String>(std::make_shared<char[]>("prefixLength"))));
	java::io::File::UNSAFE = unsafe;
	//label_try_end_74:
	}
	catch (java::lang::ReflectiveOperationException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_75;
	}
	//    .catch Ljava/lang/ReflectiveOperationException; {:try_start_50 .. :try_end_74} :catch_75
	return;
	// 195    .line 2166
label_catch_75:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/ReflectiveOperationException;
	cVar2 = std::make_shared<java::lang::Error>(getCatchExcetionFromList);
	// throw
	throw cVar2;

}
// .method public constructor <init>(Ljava/io/File;Ljava/lang/String;)V
java::io::File::File(std::shared_ptr<java::io::File> parent,std::shared_ptr<java::lang::String> child)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "parent"    # Ljava/io/File;
	//    .param p2, "child"    # Ljava/lang/String;
	// 217    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->status = 0x0;
	if ( child )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 232    .line 362
label_cond_e:
	if ( !(parent) )  
		goto label_cond_4b;
	if ( !(parent->path->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("")))) )  
		goto label_cond_3a;
	this->path = java::io::File::fs->resolve(java::io::File::fs->getDefaultParent(), java::io::File::fs->normalize(child));
label_goto_2f:
	this->prefixLength = java::io::File::fs->prefixLength(this->path);
	return;
	// 285    .line 367
label_cond_3a:
	this->path = java::io::File::fs->resolve(parent->path, java::io::File::fs->normalize(child));
	goto label_goto_2f;
	// 307    .line 371
label_cond_4b:
	this->path = java::io::File::fs->normalize(child);
	goto label_goto_2f;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::File::File(std::shared_ptr<java::lang::String> pathname)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "pathname"    # Ljava/lang/String;
	// 328    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->status = 0x0;
	if ( pathname )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 343    .line 284
label_cond_e:
	this->path = java::io::File::fs->normalize(pathname);
	this->prefixLength = java::io::File::fs->prefixLength(this->path);
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
java::io::File::File(std::shared_ptr<java::lang::String> pathname,int prefixLength)
{
	
	//    .param p1, "pathname"    # Ljava/lang/String;
	//    .param p2, "prefixLength"    # I
	// 375    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->status = 0x0;
	this->path = pathname;
	this->prefixLength = prefixLength;
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/io/File;)V
java::io::File::File(std::shared_ptr<java::lang::String> child,std::shared_ptr<java::io::File> parent)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	//    .param p1, "child"    # Ljava/lang/String;
	//    .param p2, "parent"    # Ljava/io/File;
	// 401    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->status = 0x0;
	if ( java::io::File::_assertionsDisabled )     
		goto label_cond_14;
	if ( parent->path )     
		goto label_cond_14;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 421    .line 266
label_cond_14:
	if ( java::io::File::_assertionsDisabled )     
		goto label_cond_29;
	if ( !(parent->path->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("")))) )  
		goto label_cond_29;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 443    .line 267
label_cond_29:
	this->path = java::io::File::fs->resolve(parent->path, child);
	this->prefixLength = parent->prefixLength;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
java::io::File::File(std::shared_ptr<java::lang::String> parent,std::shared_ptr<java::lang::String> child)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "parent"    # Ljava/lang/String;
	//    .param p2, "child"    # Ljava/lang/String;
	// 473    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->status = 0x0;
	if ( child )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 488    .line 324
label_cond_e:
	if ( !(parent) )  
		goto label_cond_37;
	if ( !(( parent->isEmpty() ^ 0x1)) )  
		goto label_cond_37;
	this->path = java::io::File::fs->resolve(java::io::File::fs->normalize(parent), java::io::File::fs->normalize(child));
label_goto_2c:
	this->prefixLength = java::io::File::fs->prefixLength(this->path);
	return;
	// 538    .line 328
label_cond_37:
	this->path = java::io::File::fs->normalize(child);
	goto label_goto_2c;

}
// .method public constructor <init>(Ljava/net/URI;)V
java::io::File::File(std::shared_ptr<java::net::URI> uri)
{
	
	char cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::String> scheme;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	std::shared_ptr<java::lang::String> p;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar7;
	
	//    .param p1, "uri"    # Ljava/net/URI;
	cVar0 = 0x2f;
	// 561    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->status = 0x0;
	if ( uri->isAbsolute() )     
		goto label_cond_17;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI is not absolute")));
	// throw
	throw cVar1;
	// 582    .line 417
label_cond_17:
	if ( !(uri->isOpaque()) )  
		goto label_cond_26;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI is not hierarchical")));
	// throw
	throw cVar2;
	// 599    .line 419
label_cond_26:
	scheme = uri->getScheme();
	//    .local v1, "scheme":Ljava/lang/String;
	if ( !(scheme) )  
		goto label_cond_37;
	if ( !(( scheme->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("file"))) ^ 0x1)) )  
		goto label_cond_40;
label_cond_37:
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI scheme is not \")));
	// throw
	throw cVar3;
	// 629    .line 422
label_cond_40:
	if ( !(uri->getAuthority()) )  
		goto label_cond_4f;
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI has an authority component")));
	// throw
	throw cVar4;
	// 646    .line 424
label_cond_4f:
	if ( !(uri->getFragment()) )  
		goto label_cond_5e;
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI has a fragment component")));
	// throw
	throw cVar5;
	// 663    .line 426
label_cond_5e:
	if ( !(uri->getQuery()) )  
		goto label_cond_6d;
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI has a query component")));
	// throw
	throw cVar6;
	// 680    .line 428
label_cond_6d:
	p = uri->getPath();
	//    .local v0, "p":Ljava/lang/String;
	if ( !(p->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("")))) )  
		goto label_cond_83;
	cVar7 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI path component is empty")));
	// throw
	throw cVar7;
	// 705    .line 433
label_cond_83:
	p = java::io::File::fs->fromURIPath(p);
	if ( java::io::File::separatorChar == cVar0 )
		goto label_cond_93;
label_cond_93:
	this->path = java::io::File::fs->normalize(p);
	this->prefixLength = java::io::File::fs->prefixLength(this->path);
	return;

}
// .method public static createTempFile(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;
std::shared_ptr<java::io::File> java::io::File::createTempFile(std::shared_ptr<java::lang::String> prefix,std::shared_ptr<java::lang::String> suffix)
{
	
	//    .param p0, "prefix"    # Ljava/lang/String;
	//    .param p1, "suffix"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 755        value = {
	// 756            Ljava/io/IOException;
	// 757        }
	// 758    .end annotation
	return java::io::File::createTempFile(prefix, suffix, 0x0);

}
// .method public static createTempFile(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;
std::shared_ptr<java::io::File> java::io::File::createTempFile(std::shared_ptr<java::lang::String> prefix,std::shared_ptr<java::lang::String> cVar1,std::shared_ptr<java::io::File> directory)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::io::File> f;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::io::File> tmpdir;
	
	//    .param p0, "prefix"    # Ljava/lang/String;
	//    .param p1, "suffix"    # Ljava/lang/String;
	//    .param p2, "directory"    # Ljava/io/File;
	//    .annotation system Ldalvik/annotation/Throws;
	// 777        value = {
	// 778            Ljava/io/IOException;
	// 779        }
	// 780    .end annotation
	if ( prefix->length() >= 0x3 )
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Prefix string too short")));
	// throw
	throw cVar0;
	// 801    .line 1977
label_cond_10:
	if ( cVar1 )     
		goto label_cond_15;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(".tmp"));
label_cond_15:
	if ( !(directory) )  
		goto label_cond_3b;
	//    .local v1, "tmpdir":Ljava/io/File;
label_cond_18:
label_goto_18:
	f = java::io::File_S_TempDirectory::generateFile(prefix, cVar1, tmpdir);
	//    .local v0, "f":Ljava/io/File;
	if ( ( java::io::File::fs->getBooleanAttributes(f) & 0x1) )     
		goto label_cond_18;
	if ( java::io::File::fs->createFileExclusively(f->getPath()) )     
		goto label_cond_4b;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to create temporary file")));
	// throw
	throw cVar2;
	// 856    .line 1982
	// 857    .end local v0    # "f":Ljava/io/File;
	// 858    .end local v1    # "tmpdir":Ljava/io/File;
label_cond_3b:
	tmpdir = std::make_shared<java::io::File>(java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.io.tmpdir")), std::make_shared<java::lang::String>(std::make_shared<char[]>("."))));
	//    .restart local v1    # "tmpdir":Ljava/io/File;
	goto label_goto_18;
	// 875    .line 2004
	// 876    .restart local v0    # "f":Ljava/io/File;
label_cond_4b:
	return f;

}
// .method public static listRoots()[Ljava/io/File;
std::shared_ptr<java::io::File> java::io::File::listRoots()
{
	
	return java::io::File::fs->listRoots();

}
// .method private declared-synchronized readObject(Ljava/io/ObjectInputStream;)V
void java::io::File::readObject(std::shared_ptr<java::io::ObjectInputStream> s)
{
	
	std::shared_ptr<java::lang::String> pathField;
	char sep;
	std::shared_ptr<java::lang::Object> path;
	
	//    .param p1, "s"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 899        value = {
	// 900            Ljava/io/IOException;,
	// 901            Ljava/lang/ClassNotFoundException;
	// 902        }
	// 903    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	//    .local v0, "fields":Ljava/io/ObjectInputStream$GetField;
	pathField = s->readFields()->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("path")), 0x0);
	pathField->checkCast("java::lang::String");
	//    .local v2, "pathField":Ljava/lang/String;
	sep = s->readChar();
	//    .local v3, "sep":C
	if ( sep == java::io::File::separatorChar )
		goto label_cond_1d;
label_cond_1d:
	path = java::io::File::fs->normalize(pathField);
	//    .local v1, "path":Ljava/lang/String;
	java::io::File::UNSAFE->putObject(this, java::io::File::PATH_OFFSET, path);
	java::io::File::UNSAFE->putIntVolatile(this, java::io::File::PREFIX_LENGTH_OFFSET, java::io::File::fs->prefixLength(path));
	//label_try_end_37:
	}
	catch (...){
		goto label_catchall_39;
	}
	//    .catchall {:try_start_1 .. :try_end_37} :catchall_39
	this->monitor_exit();
	return;
	// 981    .end local v0    # "fields":Ljava/io/ObjectInputStream$GetField;
	// 982    .end local v1    # "path":Ljava/lang/String;
	// 983    .end local v2    # "pathField":Ljava/lang/String;
	// 984    .end local v3    # "sep":C
label_catchall_39:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private static slashify(Ljava/lang/String;Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::File::slashify(std::shared_ptr<java::lang::String> path,bool isDirectory)
{
	
	char cVar0;
	std::shared_ptr<java::lang::String> p;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .param p1, "isDirectory"    # Z
	cVar0 = 0x2f;
	p = path;
	//    .local v0, "p":Ljava/lang/String;
	if ( java::io::File::separatorChar == cVar0 )
		goto label_cond_d;
	p = path->replace(java::io::File::separatorChar, cVar0);
label_cond_d:
	if ( p->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("/"))) )     
		goto label_cond_2a;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	p = cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(p)->toString();
label_cond_2a:
	if ( p->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("/"))) )     
		goto label_cond_49;
	if ( !(isDirectory) )  
		goto label_cond_49;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
label_cond_49:
	return p;

}
// .method private declared-synchronized writeObject(Ljava/io/ObjectOutputStream;)V
void java::io::File::writeObject(std::shared_ptr<java::io::ObjectOutputStream> s)
{
	
	//    .param p1, "s"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1086        value = {
	// 1087            Ljava/io/IOException;
	// 1088        }
	// 1089    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	s->defaultWriteObject();
	s->writeChar(java::io::File::separatorChar);
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_1 .. :try_end_9} :catchall_b
	this->monitor_exit();
	return;
label_catchall_b:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public canExecute()Z
bool java::io::File::canExecute()
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_b;
	security->checkExec(this->path);
label_cond_b:
	if ( !(this->isInvalid()) )  
		goto label_cond_13;
	return 0x0;
	// 1151    .line 1731
label_cond_13:
	return java::io::File::fs->checkAccess(this, 0x1);

}
// .method public canRead()Z
bool java::io::File::canRead()
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_b;
	security->checkRead(this->path);
label_cond_b:
	if ( !(this->isInvalid()) )  
		goto label_cond_13;
	return 0x0;
	// 1195    .line 756
label_cond_13:
	return java::io::File::fs->checkAccess(this, 0x4);

}
// .method public canWrite()Z
bool java::io::File::canWrite()
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_b;
	security->checkWrite(this->path);
label_cond_b:
	if ( !(this->isInvalid()) )  
		goto label_cond_13;
	return 0x0;
	// 1239    .line 783
label_cond_13:
	return java::io::File::fs->checkAccess(this, 0x2);

}
// .method public compareTo(Ljava/io/File;)I
int java::io::File::compareTo(std::shared_ptr<java::io::File> pathname)
{
	
	//    .param p1, "pathname"    # Ljava/io/File;
	return java::io::File::fs->compare(this, pathname);

}
// .method public createNewFile()Z
bool java::io::File::createNewFile()
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1284        value = {
	// 1285            Ljava/io/IOException;
	// 1286        }
	// 1287    .end annotation
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_b;
	security->checkWrite(this->path);
label_cond_b:
	if ( !(this->isInvalid()) )  
		goto label_cond_1a;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid file path")));
	// throw
	throw cVar0;
	// 1320    .line 1000
label_cond_1a:
	return java::io::File::fs->createFileExclusively(this->path);

}
// .method public delete()Z
bool java::io::File::_delete_()
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_b;
	security->checkDelete(this->path);
label_cond_b:
	if ( !(this->isInvalid()) )  
		goto label_cond_13;
	return 0x0;
	// 1364    .line 1029
label_cond_13:
	return java::io::File::fs->delete(this);

}
// .method public deleteOnExit()V
void java::io::File::deleteOnExit()
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_b;
	security->checkDelete(this->path);
label_cond_b:
	if ( !(this->isInvalid()) )  
		goto label_cond_12;
	return;
	// 1404    .line 1079
label_cond_12:
	java::io::DeleteOnExitHook::add(this->path);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool java::io::File::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(obj) )  
		goto label_cond_11;
	if ( !(obj->instanceOf("java::io::File")) )  
		goto label_cond_11;
	obj->checkCast("java::io::File");
	//    .end local p1    # "obj":Ljava/lang/Object;
	if ( this->compareTo(obj) )     
		goto label_cond_10;
	cVar1 = 0x1;
label_cond_10:
	return cVar1;
	// 1443    .line 2091
	// 1444    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_11:
	return cVar1;

}
// .method public exists()Z
bool java::io::File::exists()
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_b;
	security->checkRead(this->path);
label_cond_b:
	if ( !(this->isInvalid()) )  
		goto label_cond_13;
	return 0x0;
	// 1480    .line 807
label_cond_13:
	return java::io::File::fs->checkAccess(this, 0x8);

}
// .method public getAbsoluteFile()Ljava/io/File;
std::shared_ptr<java::io::File> java::io::File::getAbsoluteFile()
{
	
	std::shared_ptr<java::lang::String> absPath;
	std::shared_ptr<java::io::File> cVar0;
	
	absPath = this->getAbsolutePath();
	//    .local v0, "absPath":Ljava/lang/String;
	cVar0 = std::make_shared<java::io::File>(absPath, java::io::File::fs->prefixLength(absPath));
	return cVar0;

}
// .method public getAbsolutePath()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::File::getAbsolutePath()
{
	
	return java::io::File::fs->resolve(this);

}
// .method public getCanonicalFile()Ljava/io/File;
std::shared_ptr<java::io::File> java::io::File::getCanonicalFile()
{
	
	std::shared_ptr<java::lang::String> canonPath;
	std::shared_ptr<java::io::File> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1534        value = {
	// 1535            Ljava/io/IOException;
	// 1536        }
	// 1537    .end annotation
	canonPath = this->getCanonicalPath();
	//    .local v0, "canonPath":Ljava/lang/String;
	cVar0 = std::make_shared<java::io::File>(canonPath, java::io::File::fs->prefixLength(canonPath));
	return cVar0;

}
// .method public getCanonicalPath()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::File::getCanonicalPath()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1563        value = {
	// 1564            Ljava/io/IOException;
	// 1565        }
	// 1566    .end annotation
	if ( !(this->isInvalid()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid file path")));
	// throw
	throw cVar0;
	// 1585    .line 606
label_cond_f:
	return java::io::File::fs->canonicalize(java::io::File::fs->resolve(this));

}
// .method public getFreeSpace()J
long long java::io::File::getFreeSpace()
{
	
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::shared_ptr<java::lang::RuntimePermission> cVar0;
	
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_16;
	cVar0 = std::make_shared<java::lang::RuntimePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("getFileSystemAttributes")));
	sm->checkPermission(cVar0);
	sm->checkRead(this->path);
label_cond_16:
	if ( !(this->isInvalid()) )  
		goto label_cond_1f;
	return 0x0;
	// 1642    .line 1811
label_cond_1f:
	return java::io::File::fs->getSpace(this, 0x1);

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::File::getName()
{
	
	int index;
	
	index = this->path->lastIndexOf(java::io::File::separatorChar);
	//    .local v0, "index":I
	if ( index >= this->prefixLength )
		goto label_cond_15;
	return this->path->substring(this->prefixLength);
	// 1684    .line 456
label_cond_15:
	return this->path->substring(( index + 0x1));

}
// .method public getParent()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::File::getParent()
{
	
	int cVar0;
	int index;
	
	cVar0 = 0x0;
	index = this->path->lastIndexOf(java::io::File::separatorChar);
	//    .local v0, "index":I
	if ( index >= this->prefixLength )
		goto label_cond_26;
	if ( this->prefixLength <= 0 )
		goto label_cond_24;
	if ( this->path->length() <= this->prefixLength )
		goto label_cond_24;
	return this->path->substring(cVar0, this->prefixLength);
	// 1744    .line 477
label_cond_24:
	return 0x0;
	// 1750    .line 479
label_cond_26:
	return this->path->substring(cVar0, index);

}
// .method public getParentFile()Ljava/io/File;
std::shared_ptr<java::io::File> java::io::File::getParentFile()
{
	
	std::shared_ptr<java::lang::String> p;
	std::shared_ptr<java::io::File> cVar0;
	
	p = this->getParent();
	//    .local v0, "p":Ljava/lang/String;
	if ( p )     
		goto label_cond_8;
	return 0x0;
	// 1778    .line 501
label_cond_8:
	cVar0 = std::make_shared<java::io::File>(p, this->prefixLength);
	return cVar0;

}
// .method public getPath()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::File::getPath()
{
	
	return this->path;

}
// .method getPrefixLength()I
int java::io::File::getPrefixLength()
{
	
	return this->prefixLength;

}
// .method public getTotalSpace()J
long long java::io::File::getTotalSpace()
{
	
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::shared_ptr<java::lang::RuntimePermission> cVar0;
	
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_16;
	cVar0 = std::make_shared<java::lang::RuntimePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("getFileSystemAttributes")));
	sm->checkPermission(cVar0);
	sm->checkRead(this->path);
label_cond_16:
	if ( !(this->isInvalid()) )  
		goto label_cond_1f;
	return 0x0;
	// 1849    .line 1773
label_cond_1f:
	return java::io::File::fs->getSpace(this, 0x0);

}
// .method public getUsableSpace()J
long long java::io::File::getUsableSpace()
{
	
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::shared_ptr<java::lang::RuntimePermission> cVar0;
	
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_16;
	cVar0 = std::make_shared<java::lang::RuntimePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("getFileSystemAttributes")));
	sm->checkPermission(cVar0);
	sm->checkRead(this->path);
label_cond_16:
	if ( !(this->isInvalid()) )  
		goto label_cond_1f;
	return 0x0;
	// 1902    .line 1857
label_cond_1f:
	return java::io::File::fs->getSpace(this, 0x2);

}
// .method public hashCode()I
int java::io::File::hashCode()
{
	
	return java::io::File::fs->hashCode(this);

}
// .method public isAbsolute()Z
bool java::io::File::isAbsolute()
{
	
	return java::io::File::fs->isAbsolute(this);

}
// .method public isDirectory()Z
bool java::io::File::isDirectory()
{
	
	bool cVar1;
	std::shared_ptr<java::lang::SecurityManager> security;
	
	cVar1 = 0x0;
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_c;
	security->checkRead(this->path);
label_cond_c:
	if ( !(this->isInvalid()) )  
		goto label_cond_13;
	return cVar1;
	// 1974    .line 837
label_cond_13:
	if ( !(( java::io::File::fs->getBooleanAttributes(this) & 0x4)) )  
		goto label_cond_1e;
	cVar1 = 0x1;
label_cond_1e:
	return cVar1;

}
// .method public isFile()Z
bool java::io::File::isFile()
{
	
	bool cVar1;
	std::shared_ptr<java::lang::SecurityManager> security;
	
	cVar1 = 0x0;
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_c;
	security->checkRead(this->path);
label_cond_c:
	if ( !(this->isInvalid()) )  
		goto label_cond_13;
	return cVar1;
	// 2023    .line 870
label_cond_13:
	if ( !(( java::io::File::fs->getBooleanAttributes(this) & 0x2)) )  
		goto label_cond_1e;
	cVar1 = 0x1;
label_cond_1e:
	return cVar1;

}
// .method public isHidden()Z
bool java::io::File::isHidden()
{
	
	bool cVar1;
	std::shared_ptr<java::lang::SecurityManager> security;
	
	cVar1 = 0x0;
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_c;
	security->checkRead(this->path);
label_cond_c:
	if ( !(this->isInvalid()) )  
		goto label_cond_13;
	return cVar1;
	// 2072    .line 899
label_cond_13:
	if ( !(( java::io::File::fs->getBooleanAttributes(this) & 0x8)) )  
		goto label_cond_1e;
	cVar1 = 0x1;
label_cond_1e:
	return cVar1;

}
// .method final isInvalid()Z
bool java::io::File::isInvalid()
{
	
	int cVar0;
	std::shared_ptr<java::io::File_S_PathStatus> cVar1;
	bool cVar2;
	
	cVar0 = 0x0;
	if ( this->status )     
		goto label_cond_11;
	if ( this->path->indexOf(cVar0) >= 0 )
		goto label_cond_19;
	cVar1 = java::io::File_S_PathStatus::CHECKED;
label_goto_f:
	this->status = cVar1;
label_cond_11:
	if ( this->status != java::io::File_S_PathStatus::INVALID )
		goto label_cond_1c;
	cVar2 = 0x1;
label_goto_18:
	return cVar2;
	// 2128    .line 193
label_cond_19:
	cVar1 = java::io::File_S_PathStatus::INVALID;
	goto label_goto_f;
label_cond_1c:
	cVar2 = cVar0;
	goto label_goto_18;

}
// .method public lastModified()J
long long java::io::File::lastModified()
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_b;
	security->checkRead(this->path);
label_cond_b:
	if ( !(this->isInvalid()) )  
		goto label_cond_14;
	return 0x0;
	// 2172    .line 931
label_cond_14:
	return java::io::File::fs->getLastModifiedTime(this);

}
// .method public length()J
long long java::io::File::length()
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_b;
	security->checkRead(this->path);
label_cond_b:
	if ( !(this->isInvalid()) )  
		goto label_cond_14;
	return 0x0;
	// 2214    .line 962
label_cond_14:
	return java::io::File::fs->getLength(this);

}
// .method public list()[Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::File::list()
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_c;
	security->checkRead(this->path);
label_cond_c:
	if ( !(this->isInvalid()) )  
		goto label_cond_13;
	return 0x0;
	// 2256    .line 1122
label_cond_13:
	return java::io::File::fs->list(this);

}
// .method public list(Ljava/io/FilenameFilter;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::File::list(std::shared_ptr<java::io::FilenameFilter> filter)
{
	
	std::shared_ptr<std::vector<java::lang::String>> names;
	std::shared_ptr<java::util::ArrayList> v;
	int i;
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p1, "filter"    # Ljava/io/FilenameFilter;
	names = this->list();
	//    .local v1, "names":[Ljava/lang/String;
	if ( !(names) )  
		goto label_cond_8;
	if ( filter )     
		goto label_cond_9;
label_cond_8:
	return names;
	// 2287    .line 1159
label_cond_9:
	v = std::make_shared<java::util::ArrayList>();
	//    .local v2, "v":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	i = 0x0;
	//    .local v0, "i":I
label_goto_f:
	if ( i >= names->size() )
		goto label_cond_22;
	if ( !(filter->accept(this, names[i])) )  
		goto label_cond_1f;
	v->add(names[i]);
label_cond_1f:
	i = ( i + 0x1);
	goto label_goto_f;
	// 2323    .line 1165
label_cond_22:
	cVar0 = v->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(v->size()));
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;

}
// .method public listFiles()[Ljava/io/File;
std::shared_ptr<java::io::File> java::io::File::listFiles()
{
	
	auto ss;
	int n;
	std::shared<std::vector<std::vector<java::io::File>>> fs;
	int i;
	std::shared_ptr<java::io::File> cVar0;
	
	ss = this->list();
	//    .local v3, "ss":[Ljava/lang/String;
	if ( ss )     
		goto label_cond_8;
	return 0x0;
	// 2357    .line 1209
label_cond_8:
	n = ss->size();
	//    .local v2, "n":I
	fs = std::make_shared<std::vector<std::vector<java::io::File>>>(n);
	//    .local v0, "fs":[Ljava/io/File;
	i = 0x0;
	//    .local v1, "i":I
label_goto_c:
	if ( i >= n )
		goto label_cond_1a;
	cVar0 = std::make_shared<java::io::File>(ss[i], this);
	fs[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_c;
	// 2387    .line 1214
label_cond_1a:
	return fs;

}
// .method public listFiles(Ljava/io/FileFilter;)[Ljava/io/File;
std::shared_ptr<java::io::File> java::io::File::listFiles(std::shared_ptr<java::io::FileFilter> filter)
{
	
	auto ss;
	std::shared_ptr<java::util::ArrayList> files;
	int cVar0;
	std::shared_ptr<java::io::File> f;
	std::shared_ptr<std::vector<java::io::File>> cVar2;
	
	//    .param p1, "filter"    # Ljava/io/FileFilter;
	ss = this->list();
	//    .local v3, "ss":[Ljava/lang/String;
	if ( ss )     
		goto label_cond_8;
	return 0x0;
	// 2410    .line 1288
label_cond_8:
	files = std::make_shared<java::util::ArrayList>();
	//    .local v1, "files":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/io/File;>;"
	cVar0 = 0x0;
label_goto_f:
	if ( cVar0 >= ss->size() )
		goto label_cond_26;
	//    .local v2, "s":Ljava/lang/String;
	f = std::make_shared<java::io::File>(ss[cVar0], this);
	//    .local v0, "f":Ljava/io/File;
	if ( !(filter) )  
		goto label_cond_20;
	if ( !(filter->accept(f)) )  
		goto label_cond_23;
label_cond_20:
	files->add(f);
label_cond_23:
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_f;
	// 2453    .line 1294
	// 2454    .end local v0    # "f":Ljava/io/File;
	// 2455    .end local v2    # "s":Ljava/lang/String;
label_cond_26:
	cVar2 = files->toArray(std::make_shared<std::vector<std::vector<java::io::File>>>(files->size()));
	cVar2->checkCast("std::vector<java::io::File>");
	return cVar2;

}
// .method public listFiles(Ljava/io/FilenameFilter;)[Ljava/io/File;
std::shared_ptr<java::io::File> java::io::File::listFiles(std::shared_ptr<java::io::FilenameFilter> filter)
{
	
	auto ss;
	std::shared_ptr<java::util::ArrayList> files;
	int cVar0;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::io::File> cVar1;
	std::shared_ptr<std::vector<java::io::File>> cVar3;
	
	//    .param p1, "filter"    # Ljava/io/FilenameFilter;
	ss = this->list();
	//    .local v2, "ss":[Ljava/lang/String;
	if ( ss )     
		goto label_cond_8;
	return 0x0;
	// 2490    .line 1250
label_cond_8:
	files = std::make_shared<java::util::ArrayList>();
	//    .local v0, "files":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/io/File;>;"
	cVar0 = 0x0;
label_goto_f:
	if ( cVar0 >= ss->size() )
		goto label_cond_26;
	s = ss[cVar0];
	//    .local v1, "s":Ljava/lang/String;
	if ( !(filter) )  
		goto label_cond_1b;
	if ( !(filter->accept(this, s)) )  
		goto label_cond_23;
label_cond_1b:
	cVar1 = std::make_shared<java::io::File>(s, this);
	files->add(cVar1);
label_cond_23:
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_f;
	// 2531    .line 1254
	// 2532    .end local v1    # "s":Ljava/lang/String;
label_cond_26:
	cVar3 = files->toArray(std::make_shared<std::vector<std::vector<java::io::File>>>(files->size()));
	cVar3->checkCast("std::vector<java::io::File>");
	return cVar3;

}
// .method public mkdir()Z
bool java::io::File::mkdir()
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_b;
	security->checkWrite(this->path);
label_cond_b:
	if ( !(this->isInvalid()) )  
		goto label_cond_13;
	return 0x0;
	// 2580    .line 1316
label_cond_13:
	return java::io::File::fs->createDirectory(this);

}
// .method public mkdirs()Z
bool java::io::File::mkdirs()
{
	
	bool cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::File> canonFile;
	std::shared_ptr<java::io::File> parent;
	
	cVar1 = 0x0;
	if ( !(this->exists()) )  
		goto label_cond_8;
	return cVar1;
	// 2607    .line 1343
label_cond_8:
	if ( !(this->mkdir()) )  
		goto label_cond_10;
	return 0x1;
	// 2620    .line 1346
label_cond_10:
	0x0;
	//    .local v0, "canonFile":Ljava/io/File;
	try {
	//label_try_start_11:
	//label_try_end_14:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	//    .catch Ljava/io/IOException; {:try_start_11 .. :try_end_14} :catch_2c
	canonFile = this->getCanonicalFile();
	//    .local v0, "canonFile":Ljava/io/File;
	parent = canonFile->getParentFile();
	//    .local v2, "parent":Ljava/io/File;
	if ( !(parent) )  
		goto label_cond_2b;
	if ( parent->mkdirs() )     
		goto label_cond_27;
	if ( !(parent->exists()) )  
		goto label_cond_2b;
label_cond_27:
	cVar1 = canonFile->mkdir();
label_cond_2b:
	return cVar1;
	// 2665    .line 1349
	// 2666    .end local v2    # "parent":Ljava/io/File;
	// 2667    .local v0, "canonFile":Ljava/io/File;
label_catch_2c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	return cVar1;

}
// .method public renameTo(Ljava/io/File;)Z
bool java::io::File::renameTo(std::shared_ptr<java::io::File> dest)
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "dest"    # Ljava/io/File;
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_10;
	security->checkWrite(this->path);
	security->checkWrite(dest->path);
label_cond_10:
	if ( dest )     
		goto label_cond_18;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 2711    .line 1399
label_cond_18:
	if ( this->isInvalid() )     
		goto label_cond_24;
	if ( !(dest->isInvalid()) )  
		goto label_cond_26;
label_cond_24:
	return 0x0;
	// 2731    .line 1402
label_cond_26:
	return java::io::File::fs->rename(this, dest);

}
// .method public setExecutable(Z)Z
bool java::io::File::setExecutable(bool executable)
{
	
	//    .param p1, "executable"    # Z
	return this->setExecutable(executable, 0x1);

}
// .method public setExecutable(ZZ)Z
bool java::io::File::setExecutable(bool executable,bool ownerOnly)
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	
	//    .param p1, "executable"    # Z
	//    .param p2, "ownerOnly"    # Z
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_b;
	security->checkWrite(this->path);
label_cond_b:
	if ( !(this->isInvalid()) )  
		goto label_cond_13;
	return 0x0;
	// 2790    .line 1670
label_cond_13:
	return java::io::File::fs->setPermission(this, 0x1, executable, ownerOnly);

}
// .method public setLastModified(J)Z
bool java::io::File::setLastModified(long long time)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::SecurityManager> security;
	
	//    .param p1, "time"    # J
	if ( (time > 0x0) >= 0 )
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Negative time")));
	// throw
	throw cVar0;
	// 2823    .line 1433
label_cond_f:
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_1a;
	security->checkWrite(this->path);
label_cond_1a:
	if ( !(this->isInvalid()) )  
		goto label_cond_22;
	return 0x0;
	// 2851    .line 1440
label_cond_22:
	return java::io::File::fs->setLastModifiedTime(this, time);

}
// .method public setReadOnly()Z
bool java::io::File::setReadOnly()
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_b;
	security->checkWrite(this->path);
label_cond_b:
	if ( !(this->isInvalid()) )  
		goto label_cond_13;
	return 0x0;
	// 2893    .line 1470
label_cond_13:
	return java::io::File::fs->setReadOnly(this);

}
// .method public setReadable(Z)Z
bool java::io::File::setReadable(bool readable)
{
	
	//    .param p1, "readable"    # Z
	return this->setReadable(readable, 0x1);

}
// .method public setReadable(ZZ)Z
bool java::io::File::setReadable(bool readable,bool ownerOnly)
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	
	//    .param p1, "readable"    # Z
	//    .param p2, "ownerOnly"    # Z
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_b;
	security->checkWrite(this->path);
label_cond_b:
	if ( !(this->isInvalid()) )  
		goto label_cond_13;
	return 0x0;
	// 2952    .line 1590
label_cond_13:
	return java::io::File::fs->setPermission(this, 0x4, readable, ownerOnly);

}
// .method public setWritable(Z)Z
bool java::io::File::setWritable(bool writable)
{
	
	//    .param p1, "writable"    # Z
	return this->setWritable(writable, 0x1);

}
// .method public setWritable(ZZ)Z
bool java::io::File::setWritable(bool writable,bool ownerOnly)
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	
	//    .param p1, "writable"    # Z
	//    .param p2, "ownerOnly"    # Z
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_b;
	security->checkWrite(this->path);
label_cond_b:
	if ( !(this->isInvalid()) )  
		goto label_cond_13;
	return 0x0;
	// 3013    .line 1513
label_cond_13:
	return java::io::File::fs->setPermission(this, 0x2, writable, ownerOnly);

}
// .method public toPath()Ljava/nio/file/Path;
std::shared_ptr<java::nio::file::Path> java::io::File::toPath()
{
	
	std::shared_ptr<java::nio::file::Path> result;
	
	result = this->filePath;
	//    .local v0, "result":Ljava/nio/file/Path;
	if ( result )     
		goto label_cond_19;
	this->monitor_enter();
	try {
	//label_try_start_5:
	result = this->filePath;
	if ( result )     
		goto label_cond_18;
	result = java::nio::file::FileSystems::getDefault({const[class].FS-Param})->getPath(this->path, std::make_shared<std::vector<std::vector<java::lang::String>>>(0x0));
	this->filePath = result;
	//label_try_end_18:
	}
	catch (...){
		goto label_catchall_1a;
	}
	//    .catchall {:try_start_5 .. :try_end_18} :catchall_1a
label_cond_18:
	this->monitor_exit();
label_cond_19:
	return result;
	// 3074    .line 2208
label_catchall_1a:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::File::toString()
{
	
	return this->getPath();

}
// .method public toURI()Ljava/net/URI;
std::shared_ptr<java::net::URI> java::io::File::toURI()
{
	
	std::shared_ptr<java::lang::Error> cVar2;
	std::shared_ptr<java::io::File> f;
	std::shared_ptr<java::lang::String> sp;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::net::URI> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	f = this->getAbsoluteFile();
	//    .local v0, "f":Ljava/io/File;
	sp = java::io::File::slashify(f->getPath(), f->isDirectory());
	//    .local v1, "sp":Ljava/lang/String;
	if ( !(sp->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("//")))) )  
		goto label_cond_2d;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
label_cond_2d:
	cVar1 = std::make_shared<java::net::URI>(std::make_shared<java::lang::String>(std::make_shared<char[]>("file")), 0x0, sp, 0x0);
	//label_try_end_37:
	}
	catch (java::net::URISyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_38;
	}
	//    .catch Ljava/net/URISyntaxException; {:try_start_0 .. :try_end_37} :catch_38
	return cVar1;
	// 3164    .line 725
	// 3165    .end local v0    # "f":Ljava/io/File;
	// 3166    .end local v1    # "sp":Ljava/lang/String;
label_catch_38:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "x":Ljava/net/URISyntaxException;
	cVar2 = std::make_shared<java::lang::Error>(getCatchExcetionFromList);
	// throw
	throw cVar2;

}
// .method public toURL()Ljava/net/URL;
std::shared_ptr<java::net::URL> java::io::File::toURL()
{
	
	std::shared_ptr<java::net::MalformedURLException> cVar0;
	std::shared_ptr<java::net::URL> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3182        value = {
	// 3183            Ljava/net/MalformedURLException;
	// 3184        }
	// 3185    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3188    .end annotation
	if ( !(this->isInvalid()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::net::MalformedURLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid file path")));
	// throw
	throw cVar0;
	// 3207    .line 674
label_cond_f:
	cVar1 = std::make_shared<java::net::URL>(std::make_shared<java::lang::String>(std::make_shared<char[]>("file")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")), java::io::File::slashify(this->getAbsolutePath(), this->getAbsoluteFile()->isDirectory()));
	return cVar1;

}


