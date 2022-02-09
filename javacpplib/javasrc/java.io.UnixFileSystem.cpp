// CPP L:\smali2cpp20\x64\Release\out\java\io\UnixFileSystem.smali
#include "java2ctype.h"
#include "dalvik.system.BlockGuard_S_Policy.h"
#include "dalvik.system.BlockGuard.h"
#include "java.io.ExpiringCache.h"
#include "java.io.File.h"
#include "java.io.UnixFileSystem.h"
#include "java.lang.Object.h"
#include "java.lang.SecurityException.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.security.AccessController.h"
#include "sun.security.action.GetPropertyAction.h"

// .method static constructor <clinit>()V
void java::io::UnixFileSystem::static_cinit()
{
	
	java::io::UnixFileSystem::initIDs({const[class].FS-Param});
	return;

}
// .method public constructor <init>()V
java::io::UnixFileSystem::UnixFileSystem()
{
	
	int cVar0;
	std::shared_ptr<java::io::ExpiringCache> cVar1;
	std::shared_ptr<java::io::ExpiringCache> cVar2;
	std::shared_ptr<sun::security::action::GetPropertyAction> cVar3;
	std::shared_ptr<java::lang::String> cVar4;
	std::shared_ptr<sun::security::action::GetPropertyAction> cVar5;
	std::shared_ptr<java::lang::String> cVar6;
	std::shared_ptr<sun::security::action::GetPropertyAction> cVar7;
	std::shared_ptr<java::lang::String> cVar8;
	
	cVar0 = 0x0;
	// 037    invoke-direct {p0}, Ljava/io/FileSystem;-><init>()V
	cVar1 = std::make_shared<java::io::ExpiringCache>();
	this->cache = cVar1;
	cVar2 = std::make_shared<java::io::ExpiringCache>();
	this->javaHomePrefixCache = cVar2;
	cVar3 = std::make_shared<sun::security::action::GetPropertyAction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("file.separator")));
	cVar4 = java::security::AccessController::doPrivileged(cVar3);
	cVar4->checkCast("java::lang::String");
	this->slash = cVar4->charAt(cVar0);
	cVar5 = std::make_shared<sun::security::action::GetPropertyAction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("path.separator")));
	cVar6 = java::security::AccessController::doPrivileged(cVar5);
	cVar6->checkCast("java::lang::String");
	this->colon = cVar6->charAt(cVar0);
	cVar7 = std::make_shared<sun::security::action::GetPropertyAction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.home")));
	cVar8 = java::security::AccessController::doPrivileged(cVar7);
	cVar8->checkCast("java::lang::String");
	this->javaHome = cVar8;
	return;

}
// .method private native canonicalize0(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::UnixFileSystem::canonicalize0(std::shared_ptr<java::lang::String> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 115        value = {
	// 116            Ljava/io/IOException;
	// 117        }
	// 118    .end annotation

}
// .method private native createFileExclusively0(Ljava/lang/String;)Z
bool java::io::UnixFileSystem::createFileExclusively0(std::shared_ptr<java::lang::String> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 129        value = {
	// 130            Ljava/io/IOException;
	// 131        }
	// 132    .end annotation

}
// .method static parentOrNull(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::UnixFileSystem::parentOrNull(std::shared_ptr<java::lang::String> path)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	char sep;
	int last;
	int idx;
	int adjacentDots;
	int nonDotCount;
	int c;
	
	//    .param p0, "path"    # Ljava/lang/String;
	cVar0 = 0x0;
	if ( path )     
		goto label_cond_5;
	return cVar0;
	// 170    .line 201
label_cond_5:
	sep = java::io::File::separatorChar;
	//    .local v5, "sep":C
	last = ( path->length() + -0x1);
	//    .local v3, "last":I
	idx = last;
	//    .local v2, "idx":I
	adjacentDots = 0x0;
	//    .local v0, "adjacentDots":I
	nonDotCount = 0x0;
	//    .local v4, "nonDotCount":I
label_goto_10:
	if ( idx <= 0 )
		goto label_cond_42;
	c = path->charAt(idx);
	//    .local v1, "c":C
	if ( c != 0x2e )
		goto label_cond_20;
	adjacentDots = ( adjacentDots + 0x1);
	if ( adjacentDots <  0x2 )
		goto label_cond_3f;
	return cVar0;
	// 220    .line 213
label_cond_20:
	if ( c != sep )
		goto label_cond_3c;
	if ( adjacentDots != 0x1 )
		goto label_cond_28;
	if ( nonDotCount )     
		goto label_cond_28;
	return cVar0;
	// 234    .line 218
label_cond_28:
	if ( !(idx) )  
		goto label_cond_2e;
	if ( idx <  ( last + -0x1) )
		goto label_cond_2f;
label_cond_2e:
	return cVar0;
	// 247    .line 220
label_cond_2f:
	if ( path->charAt(( idx + -0x1)) == sep )
		goto label_cond_2e;
	return path->substring(0x0, idx);
	// 264    .line 227
label_cond_3c:
	nonDotCount = ( nonDotCount + 0x1);
	0x0;
label_cond_3f:
	idx = ( idx + -0x1);
	goto label_goto_10;
	// 277    .line 232
	// 278    .end local v1    # "c":C
label_cond_42:
	return cVar0;

}
// .method public canonicalize(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::UnixFileSystem::canonicalize(std::shared_ptr<java::lang::String> path)
{
	
	std::shared_ptr<java::lang::String> res;
	std::shared_ptr<java::lang::String> dir;
	std::shared_ptr<java::lang::String> resDir;
	std::shared_ptr<java::lang::String> filename;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::io::File> f;
	
	//    .param p1, "path"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 301        value = {
	// 302            Ljava/io/IOException;
	// 303        }
	// 304    .end annotation
	if ( java::io::UnixFileSystem::useCanonCaches )     
		goto label_cond_9;
	return this->canonicalize0(path);
	// 319    .line 149
label_cond_9:
	res = this->cache->get(path);
	//    .local v3, "res":Ljava/lang/String;
	if ( res )     
		goto label_cond_a6;
	0x0;
	//    .local v0, "dir":Ljava/lang/String;
	0x0;
	//    .local v4, "resDir":Ljava/lang/String;
	if ( !(java::io::UnixFileSystem::useCanonPrefixCache) )  
		goto label_cond_62;
	dir = java::io::UnixFileSystem::parentOrNull(path);
	//    .local v0, "dir":Ljava/lang/String;
	if ( !(dir) )  
		goto label_cond_62;
	resDir = this->javaHomePrefixCache->get(dir);
	//    .local v4, "resDir":Ljava/lang/String;
	if ( !(resDir) )  
		goto label_cond_62;
	filename = path->substring(( dir->length() + 0x1));
	//    .local v2, "filename":Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	res = cVar0->append(resDir)->append(this->slash)->append(filename)->toString();
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	this->cache->put(cVar1->append(dir)->append(this->slash)->append(filename)->toString(), res);
	//    .end local v0    # "dir":Ljava/lang/String;
	//    .end local v2    # "filename":Ljava/lang/String;
	//    .end local v4    # "resDir":Ljava/lang/String;
label_cond_62:
	if ( res )     
		goto label_cond_a6;
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onReadFromDisk();
	res = this->canonicalize0(path);
	this->cache->put(path, res);
	if ( !(java::io::UnixFileSystem::useCanonPrefixCache) )  
		goto label_cond_a6;
	if ( !(dir) )  
		goto label_cond_a6;
	if ( !(dir->startsWith(this->javaHome)) )  
		goto label_cond_a6;
	resDir = java::io::UnixFileSystem::parentOrNull(res);
	//    .restart local v4    # "resDir":Ljava/lang/String;
	if ( !(resDir) )  
		goto label_cond_a6;
	if ( !(resDir->equals(dir)) )  
		goto label_cond_a6;
	f = std::make_shared<java::io::File>(res);
	//    .local v1, "f":Ljava/io/File;
	if ( !(f->exists()) )  
		goto label_cond_a6;
	if ( !(( f->isDirectory() ^ 0x1)) )  
		goto label_cond_a6;
	this->javaHomePrefixCache->put(dir, resDir);
	//    .end local v1    # "f":Ljava/io/File;
	//    .end local v4    # "resDir":Ljava/lang/String;
label_cond_a6:
	return res;

}
// .method public checkAccess(Ljava/io/File;I)Z
bool java::io::UnixFileSystem::checkAccess(std::shared_ptr<java::io::File> f,int access)
{
	
	//    .param p1, "f"    # Ljava/io/File;
	//    .param p2, "access"    # I
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onReadFromDisk();
	return this->checkAccess0(f, access);

}
// .method public compare(Ljava/io/File;Ljava/io/File;)I
int java::io::UnixFileSystem::compare(std::shared_ptr<java::io::File> f1,std::shared_ptr<java::io::File> f2)
{
	
	//    .param p1, "f1"    # Ljava/io/File;
	//    .param p2, "f2"    # Ljava/io/File;
	return f1->getPath()->compareTo(f2->getPath());

}
// .method public createDirectory(Ljava/io/File;)Z
bool java::io::UnixFileSystem::createDirectory(std::shared_ptr<java::io::File> f)
{
	
	//    .param p1, "f"    # Ljava/io/File;
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onWriteToDisk();
	return this->createDirectory0(f);

}
// .method public createFileExclusively(Ljava/lang/String;)Z
bool java::io::UnixFileSystem::createFileExclusively(std::shared_ptr<java::lang::String> path)
{
	
	//    .param p1, "path"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 582        value = {
	// 583            Ljava/io/IOException;
	// 584        }
	// 585    .end annotation
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onWriteToDisk();
	return this->createFileExclusively0(path);

}
// .method public delete(Ljava/io/File;)Z
bool java::io::UnixFileSystem::_delete_(std::shared_ptr<java::io::File> f)
{
	
	//    .param p1, "f"    # Ljava/io/File;
	this->cache->clear();
	this->javaHomePrefixCache->clear();
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onWriteToDisk();
	return this->delete0(f);

}
// .method public fromURIPath(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::UnixFileSystem::fromURIPath(std::shared_ptr<java::lang::String> path)
{
	
	//    .param p1, "path"    # Ljava/lang/String;
	//    .local v0, "p":Ljava/lang/String;
	if ( !(path->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))) )  
		goto label_cond_1c;
	if ( path->length() <= 0x1 )
		goto label_cond_1c;
label_cond_1c:
	return path;

}
// .method public getBooleanAttributes(Ljava/io/File;)I
int java::io::UnixFileSystem::getBooleanAttributes(std::shared_ptr<java::io::File> f)
{
	
	int cVar1;
	std::shared_ptr<java::lang::String> name;
	
	//    .param p1, "f"    # Ljava/io/File;
	cVar1 = 0x0;
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onReadFromDisk();
	//    .local v2, "rv":I
	name = f->getName();
	//    .local v1, "name":Ljava/lang/String;
	if ( name->length() <= 0 )
		goto label_cond_29;
	if ( name->charAt(cVar1) != 0x2e )
		goto label_cond_29;
	//    .local v0, "hidden":Z
label_goto_23:
	if ( !(hidden) )  
		goto label_cond_27;
	cVar1 = 0x8;
label_cond_27:
	return (cVar1 |  this->getBooleanAttributes0(f->getPath()));
	// 736    .line 245
	// 737    .end local v0    # "hidden":Z
label_cond_29:
	//    .restart local v0    # "hidden":Z
	goto label_goto_23;

}
// .method public getDefaultParent()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::UnixFileSystem::getDefaultParent()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("/"));

}
// .method public getLastModifiedTime(Ljava/io/File;)J
long long java::io::UnixFileSystem::getLastModifiedTime(std::shared_ptr<java::io::File> f)
{
	
	//    .param p1, "f"    # Ljava/io/File;
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onReadFromDisk();
	return this->getLastModifiedTime0(f);

}
// .method public getLength(Ljava/io/File;)J
long long java::io::UnixFileSystem::getLength(std::shared_ptr<java::io::File> f)
{
	
	//    .param p1, "f"    # Ljava/io/File;
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onReadFromDisk();
	return this->getLength0(f);

}
// .method public getPathSeparator()C
char java::io::UnixFileSystem::getPathSeparator()
{
	
	return this->colon;

}
// .method public getSeparator()C
char java::io::UnixFileSystem::getSeparator()
{
	
	return this->slash;

}
// .method public getSpace(Ljava/io/File;I)J
long long java::io::UnixFileSystem::getSpace(std::shared_ptr<java::io::File> f,int t)
{
	
	//    .param p1, "f"    # Ljava/io/File;
	//    .param p2, "t"    # I
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onReadFromDisk();
	return this->getSpace0(f, t);

}
// .method public hashCode(Ljava/io/File;)I
int java::io::UnixFileSystem::hashCode(std::shared_ptr<java::io::File> f)
{
	
	//    .param p1, "f"    # Ljava/io/File;
	return (f->getPath()->hashCode() ^  0x12d591);

}
// .method public isAbsolute(Ljava/io/File;)Z
bool java::io::UnixFileSystem::isAbsolute(std::shared_ptr<java::io::File> f)
{
	
	bool cVar1;
	
	//    .param p1, "f"    # Ljava/io/File;
	cVar1 = 0x0;
	if ( !(f->getPrefixLength()) )  
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method public list(Ljava/io/File;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::UnixFileSystem::list(std::shared_ptr<java::io::File> f)
{
	
	//    .param p1, "f"    # Ljava/io/File;
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onReadFromDisk();
	return this->list0(f);

}
// .method public listRoots()[Ljava/io/File;
std::shared_ptr<java::io::File> java::io::UnixFileSystem::listRoots()
{
	
	std::shared_ptr<java::lang::SecurityManager> security;
	std::shared<std::vector<std::vector<java::io::File>>> cVar0;
	std::shared_ptr<java::io::File> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_1:
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_d;
	security->checkRead(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")));
label_cond_d:
	cVar0 = std::make_shared<std::vector<std::vector<java::io::File>>>(0x1);
	cVar1 = std::make_shared<java::io::File>(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")));
	cVar0[0x0] = cVar1;
	//label_try_end_1b:
	}
	catch (java::lang::SecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1c;
	}
	//    .catch Ljava/lang/SecurityException; {:try_start_1 .. :try_end_1b} :catch_1c
	return cVar0;
	// 938    .line 353
	// 939    .end local v0    # "security":Ljava/lang/SecurityManager;
label_catch_1c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Ljava/lang/SecurityException;
	return std::make_shared<std::vector<std::vector<java::io::File>>>(0x0);

}
// .method public normalize(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::UnixFileSystem::normalize(std::shared_ptr<java::lang::String> cVar1)
{
	
	int cVar0;
	int n;
	std::shared_ptr<char[]> normalized;
	int prevChar;
	int i;
	int index;
	char current;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .param p1, "pathname"    # Ljava/lang/String;
	cVar0 = 0x2f;
	n = cVar1->length();
	//    .local v4, "n":I
	normalized = cVar1->toCharArray();
	//    .local v5, "normalized":[C
	//    .local v2, "index":I
	prevChar = 0x0;
	//    .local v6, "prevChar":C
	i = 0x0;
	//    .local v1, "i":I
	index = 0x0;
	//    .end local v2    # "index":I
	//    .end local v6    # "prevChar":C
	//    .local v3, "index":I
label_goto_e:
	if ( i >= n )
		goto label_cond_21;
	current = normalized[i];
	//    .local v0, "current":C
	if ( current != cVar0 )
		goto label_cond_16;
	if ( prevChar == cVar0 )
		goto label_cond_1f;
label_cond_16:
	//    .end local v3    # "index":I
	//    .restart local v2    # "index":I
	normalized[index] = current;
label_goto_1a:
	//    .local v6, "prevChar":C
	i = ( i + 0x1);
	index = index;
	//    .end local v2    # "index":I
	//    .restart local v3    # "index":I
	goto label_goto_e;
	// 1020    .end local v6    # "prevChar":C
label_cond_1f:
	//    .end local v3    # "index":I
	//    .restart local v2    # "index":I
	goto label_goto_1a;
	// 1029    .line 81
	// 1030    .end local v0    # "current":C
	// 1031    .end local v2    # "index":I
	// 1032    .restart local v3    # "index":I
label_cond_21:
	if ( prevChar != cVar0 )
		goto label_cond_31;
	if ( n <= 0x1 )
		goto label_cond_31;
	index = ( index + -0x1);
	//    .end local v3    # "index":I
	//    .restart local v2    # "index":I
label_goto_28:
	if ( index == n )
		goto label_cond_30;
	//    .end local p1    # "pathname":Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::String>(normalized, 0x0, index);
label_cond_30:
	return cVar1;
	// 1059    .end local v2    # "index":I
	// 1060    .restart local v3    # "index":I
	// 1061    .restart local p1    # "pathname":Ljava/lang/String;
label_cond_31:
	//    .end local v3    # "index":I
	//    .restart local v2    # "index":I
	goto label_goto_28;

}
// .method public prefixLength(Ljava/lang/String;)I
int java::io::UnixFileSystem::prefixLength(std::shared_ptr<java::lang::String> pathname)
{
	
	int cVar1;
	
	//    .param p1, "pathname"    # Ljava/lang/String;
	cVar1 = 0x0;
	if ( pathname->length() )     
		goto label_cond_8;
	return cVar1;
	// 1087    .line 90
label_cond_8:
	if ( pathname->charAt(cVar1) != 0x2f )
		goto label_cond_11;
	cVar1 = 0x1;
label_cond_11:
	return cVar1;

}
// .method public rename(Ljava/io/File;Ljava/io/File;)Z
bool java::io::UnixFileSystem::rename(std::shared_ptr<java::io::File> f1,std::shared_ptr<java::io::File> f2)
{
	
	//    .param p1, "f1"    # Ljava/io/File;
	//    .param p2, "f2"    # Ljava/io/File;
	this->cache->clear();
	this->javaHomePrefixCache->clear();
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onWriteToDisk();
	return this->rename0(f1, f2);

}
// .method public resolve(Ljava/io/File;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::UnixFileSystem::resolve(std::shared_ptr<java::io::File> f)
{
	
	//    .param p1, "f"    # Ljava/io/File;
	if ( !(this->isAbsolute(f)) )  
		goto label_cond_b;
	return f->getPath();
	// 1152    .line 130
label_cond_b:
	return this->resolve(java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("user.dir"))), f->getPath());

}
// .method public resolve(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::UnixFileSystem::resolve(std::shared_ptr<java::lang::String> parent,std::shared_ptr<java::lang::String> child)
{
	
	char cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "parent"    # Ljava/lang/String;
	//    .param p2, "child"    # Ljava/lang/String;
	cVar0 = 0x2f;
	if ( child->isEmpty() )     
		goto label_cond_11;
	if ( !(child->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))) )  
		goto label_cond_12;
label_cond_11:
	return parent;
	// 1198    .line 99
label_cond_12:
	if ( child->charAt(0x0) != cVar0 )
		goto label_cond_35;
	if ( !(parent->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))) )  
		goto label_cond_23;
	return child;
	// 1219    .line 101
label_cond_23:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return cVar1->append(parent)->append(child)->toString();
	// 1239    .line 104
label_cond_35:
	if ( !(parent->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))) )  
		goto label_cond_50;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	return cVar2->append(parent)->append(child)->toString();
	// 1267    .line 105
label_cond_50:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	return cVar3->append(parent)->append(cVar0)->append(child)->toString();

}
// .method public setLastModifiedTime(Ljava/io/File;J)Z
bool java::io::UnixFileSystem::setLastModifiedTime(std::shared_ptr<java::io::File> f,long long time)
{
	
	//    .param p1, "f"    # Ljava/io/File;
	//    .param p2, "time"    # J
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onWriteToDisk();
	return this->setLastModifiedTime0(f, time);

}
// .method public setPermission(Ljava/io/File;IZZ)Z
bool java::io::UnixFileSystem::setPermission(std::shared_ptr<java::io::File> f,int access,bool enable,bool owneronly)
{
	
	//    .param p1, "f"    # Ljava/io/File;
	//    .param p2, "access"    # I
	//    .param p3, "enable"    # Z
	//    .param p4, "owneronly"    # Z
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onWriteToDisk();
	return this->setPermission0(f, access, enable, owneronly);

}
// .method public setReadOnly(Ljava/io/File;)Z
bool java::io::UnixFileSystem::setReadOnly(std::shared_ptr<java::io::File> f)
{
	
	//    .param p1, "f"    # Ljava/io/File;
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onWriteToDisk();
	return this->setReadOnly0(f);

}


