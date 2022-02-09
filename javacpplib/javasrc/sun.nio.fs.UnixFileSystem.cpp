// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileSystem.smali
#include "java2ctype.h"
#include "java.lang.Boolean.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.RuntimePermission.h"
#include "java.lang.SecurityException.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.nio.file.FileStore.h"
#include "java.nio.file.Path.h"
#include "java.nio.file.PathMatcher.h"
#include "java.nio.file.attribute.UserPrincipalLookupService.h"
#include "java.nio.file.spi.FileSystemProvider.h"
#include "java.security.AccessController.h"
#include "java.util.Arrays.h"
#include "java.util.Collections.h"
#include "java.util.List.h"
#include "java.util.regex.Pattern.h"
#include "sun.nio.fs.Globs.h"
#include "sun.nio.fs.UnixFileSystem_S_1.h"
#include "sun.nio.fs.UnixFileSystem_S_2.h"
#include "sun.nio.fs.UnixFileSystem_S_3.h"
#include "sun.nio.fs.UnixFileSystem_S_LookupService.h"
#include "sun.nio.fs.UnixFileSystem.h"
#include "sun.nio.fs.UnixFileSystemProvider.h"
#include "sun.nio.fs.UnixMountEntry.h"
#include "sun.nio.fs.UnixNativeDispatcher.h"
#include "sun.nio.fs.UnixPath.h"
#include "sun.nio.fs.Util.h"
#include "sun.security.action.GetPropertyAction.h"

static sun::nio::fs::UnixFileSystem::GLOB_SYNTAX = std::make_shared<java::lang::String>("glob");
static sun::nio::fs::UnixFileSystem::REGEX_SYNTAX = std::make_shared<java::lang::String>("regex");
// .method static synthetic -get0(Lsun/nio/fs/UnixFileSystem;)Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixFileSystem::_get0(std::shared_ptr<sun::nio::fs::UnixFileSystem> _this)
{
	
	//    .param p0, "-this"    # Lsun/nio/fs/UnixFileSystem;
	return _this->rootDirectory;

}
// .method constructor <init>(Lsun/nio/fs/UnixFileSystemProvider;Ljava/lang/String;)V
sun::nio::fs::UnixFileSystem::UnixFileSystem(std::shared_ptr<sun::nio::fs::UnixFileSystemProvider> provider,std::shared_ptr<java::lang::String> dir)
{
	
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	std::shared_ptr<sun::security::action::GetPropertyAction> cVar1;
	std::shared_ptr<java::lang::String> propValue;
	int cVar2;
	std::shared_ptr<sun::nio::fs::UnixPath> cVar3;
	auto cwd;
	int defaultIsCwd;
	int i;
	
	//    .param p1, "provider"    # Lsun/nio/fs/UnixFileSystemProvider;
	//    .param p2, "dir"    # Ljava/lang/String;
	// 051    invoke-direct {p0}, Ljava/nio/file/FileSystem;-><init>()V
	this->provider = provider;
	this->defaultDirectory = sun::nio::fs::Util::toBytes(sun::nio::fs::UnixPath::normalizeAndCheck(dir));
	if ( this->defaultDirectory[0x0] == 0x2f )
		goto label_cond_21;
	cVar0 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("default directory must be absolute")));
	// throw
	throw cVar0;
	// 085    .line 61
label_cond_21:
	cVar1 = std::make_shared<sun::security::action::GetPropertyAction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.nio.fs.chdirAllowed")), std::make_shared<java::lang::String>(std::make_shared<char[]>("false")));
	propValue = java::security::AccessController::doPrivileged(cVar1);
	propValue->checkCast("java::lang::String");
	//    .local v4, "propValue":Ljava/lang/String;
	if ( propValue->length() )     
		goto label_cond_49;
	cVar2 = 0x1;
label_goto_39:
	if ( !(cVar2) )  
		goto label_cond_52;
	this->needToResolveAgainstDefaultDirectory = 0x1;
label_goto_3e:
	cVar3 = std::make_shared<sun::nio::fs::UnixPath>(this, std::make_shared<java::lang::String>(std::make_shared<char[]>("/")));
	this->rootDirectory = cVar3;
	return;
	// 135    .line 63
label_cond_49:
	cVar2 = java::lang::Boolean::valueOf(propValue)->booleanValue();
	//    .local v0, "chdirAllowed":Z
	goto label_goto_39;
	// 148    .line 67
	// 149    .end local v0    # "chdirAllowed":Z
label_cond_52:
	cwd = sun::nio::fs::UnixNativeDispatcher::getcwd({const[class].FS-Param});
	//    .local v1, "cwd":[B
	if ( cwd->size() != this->defaultDirectory->size() )
		goto label_cond_71;
	defaultIsCwd = 0x1;
	//    .local v2, "defaultIsCwd":Z
label_goto_5d:
	if ( !(defaultIsCwd) )  
		goto label_cond_6c;
	i = 0x0;
	//    .local v3, "i":I
label_goto_60:
	if ( i >= cwd->size() )
		goto label_cond_6c;
	if ( cwd[i] == this->defaultDirectory[i] )
		goto label_cond_73;
	//    .end local v3    # "i":I
label_cond_6c:
	this->needToResolveAgainstDefaultDirectory = ( defaultIsCwd ^ 0x1);
	goto label_goto_3e;
	// 202    .line 68
	// 203    .end local v2    # "defaultIsCwd":Z
label_cond_71:
	defaultIsCwd = 0x0;
	//    .restart local v2    # "defaultIsCwd":Z
	goto label_goto_5d;
	// 210    .line 70
	// 211    .restart local v3    # "i":I
label_cond_73:
	i = ( i + 0x1);
	goto label_goto_60;

}
// .method static standardFileAttributeViews()Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> sun::nio::fs::UnixFileSystem::standardFileAttributeViews()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 221        value = {
	// 222            "()",
	// 223            "Ljava/util/List",
	// 224            "<",
	// 225            "Ljava/lang/String;",
	// 226            ">;"
	// 227        }
	// 228    .end annotation
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("basic"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("posix"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("unix"));
	cVar0[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("owner"));
	return java::util::Arrays::asList(cVar0);

}
// .method public final close()V
void sun::nio::fs::UnixFileSystem::close()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 272        value = {
	// 273            Ljava/io/IOException;
	// 274        }
	// 275    .end annotation
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}
// .method compilePathMatchPattern(Ljava/lang/String;)Ljava/util/regex/Pattern;
std::shared_ptr<java::util::regex::Pattern> sun::nio::fs::UnixFileSystem::compilePathMatchPattern(std::shared_ptr<java::lang::String> expr)
{
	
	//    .param p1, "expr"    # Ljava/lang/String;
	return java::util::regex::Pattern::compile(expr);

}
// .method copyNonPosixAttributes(II)V
void sun::nio::fs::UnixFileSystem::copyNonPosixAttributes(int sfd,int tfd)
{
	
	//    .param p1, "sfd"    # I
	//    .param p2, "tfd"    # I
	return;

}
// .method defaultDirectory()[B
unsigned char sun::nio::fs::UnixFileSystem::defaultDirectory()
{
	
	return this->defaultDirectory;

}
// .method abstract getFileStore(Lsun/nio/fs/UnixMountEntry;)Ljava/nio/file/FileStore;
std::shared_ptr<java::nio::file::FileStore> sun::nio::fs::UnixFileSystem::getFileStore(std::shared_ptr<sun::nio::fs::UnixMountEntry> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 321        value = {
	// 322            Ljava/io/IOException;
	// 323        }
	// 324    .end annotation

}
// .method public final getFileStores()Ljava/lang/Iterable;
std::shared_ptr<java::lang::Iterable<java::nio::file::FileStore>> sun::nio::fs::UnixFileSystem::getFileStores()
{
	
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::shared_ptr<java::lang::RuntimePermission> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::nio::fs::UnixFileSystem_S_2> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 330        value = {
	// 331            "()",
	// 332            "Ljava/lang/Iterable",
	// 333            "<",
	// 334            "Ljava/nio/file/FileStore;",
	// 335            ">;"
	// 336        }
	// 337    .end annotation
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v1, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_11;
	try {
	//label_try_start_6:
	cVar0 = std::make_shared<java::lang::RuntimePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("getFileStoreAttributes")));
	sm->checkPermission(cVar0);
	//label_try_end_11:
	}
	catch (java::lang::SecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_17;
	}
	//    .catch Ljava/lang/SecurityException; {:try_start_6 .. :try_end_11} :catch_17
label_cond_11:
	cVar1 = std::make_shared<sun::nio::fs::UnixFileSystem_S_2>(this);
	return cVar1;
	// 369    .line 253
label_catch_17:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "se":Ljava/lang/SecurityException;
	return java::util::Collections::emptyList({const[class].FS-Param});

}
// .method abstract getMountEntries()Ljava/lang/Iterable;
std::shared_ptr<java::lang::Iterable<sun::nio::fs::UnixMountEntry>> sun::nio::fs::UnixFileSystem::getMountEntries()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 384        value = {
	// 385            "()",
	// 386            "Ljava/lang/Iterable",
	// 387            "<",
	// 388            "Lsun/nio/fs/UnixMountEntry;",
	// 389            ">;"
	// 390        }
	// 391    .end annotation

}
// .method public final varargs getPath(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;
std::shared_ptr<java::nio::file::Path> sun::nio::fs::UnixFileSystem::getPath(std::shared_ptr<java::lang::String> first,std::shared_ptr<std::vector<java::lang::String>> more)
{
	
	int cVar0;
	std::shared_ptr<sun::nio::fs::UnixPath> cVar1;
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<java::lang::String> segment;
	
	//    .param p1, "first"    # Ljava/lang/String;
	//    .param p2, "more"    # [Ljava/lang/String;
	cVar0 = 0x0;
	if ( more->size() )     
		goto label_cond_b;
	//    .local v0, "path":Ljava/lang/String;
label_goto_5:
	cVar1 = std::make_shared<sun::nio::fs::UnixPath>(this, path);
	return cVar1;
	// 419    .line 270
	// 420    .end local v0    # "path":Ljava/lang/String;
label_cond_b:
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "sb":Ljava/lang/StringBuilder;
	sb->append(first);
label_goto_14:
	if ( cVar0 >= more->size() )
		goto label_cond_2f;
	segment = more[cVar0];
	//    .local v2, "segment":Ljava/lang/String;
	if ( segment->length() <= 0 )
		goto label_cond_2c;
	if ( sb->length() <= 0 )
		goto label_cond_29;
	sb->append(0x2f);
label_cond_29:
	sb->append(segment);
label_cond_2c:
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_14;
	// 468    .line 279
	// 469    .end local v2    # "segment":Ljava/lang/String;
label_cond_2f:
	//    .restart local v0    # "path":Ljava/lang/String;
	goto label_goto_5;

}
// .method public getPathMatcher(Ljava/lang/String;)Ljava/nio/file/PathMatcher;
std::shared_ptr<java::nio::file::PathMatcher> sun::nio::fs::UnixFileSystem::getPathMatcher(std::shared_ptr<java::lang::String> syntaxAndInput)
{
	
	int pos;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::String> syntax;
	std::shared_ptr<java::lang::String> input;
	std::shared_ptr<sun::nio::fs::UnixFileSystem_S_3> cVar1;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "syntaxAndInput"    # Ljava/lang/String;
	pos = syntaxAndInput->indexOf(0x3a);
	//    .local v3, "pos":I
	if ( pos <= 0 )
		goto label_cond_f;
	if ( pos != syntaxAndInput->length() )
		goto label_cond_15;
label_cond_f:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 511    .line 289
label_cond_15:
	syntax = syntaxAndInput->substring(0x0, pos);
	//    .local v4, "syntax":Ljava/lang/String;
	input = syntaxAndInput->substring(( pos + 0x1));
	//    .local v1, "input":Ljava/lang/String;
	if ( !(syntax->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("glob")))) )  
		goto label_cond_36;
	//    .local v0, "expr":Ljava/lang/String;
label_goto_2c:
	//    .local v2, "pattern":Ljava/util/regex/Pattern;
	cVar1 = std::make_shared<sun::nio::fs::UnixFileSystem_S_3>(this, this->compilePathMatchPattern(expr));
	return cVar1;
	// 555    .line 296
	// 556    .end local v0    # "expr":Ljava/lang/String;
	// 557    .end local v2    # "pattern":Ljava/util/regex/Pattern;
label_cond_36:
	if ( !(syntax->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("regex")))) )  
		goto label_cond_41;
	//    .restart local v0    # "expr":Ljava/lang/String;
	goto label_goto_2c;
	// 573    .line 299
	// 574    .end local v0    # "expr":Ljava/lang/String;
label_cond_41:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::UnsupportedOperationException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Syntax \'")))->append(syntax)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' not recognized")))->toString());
	// throw
	throw cVar2;

}
// .method public final getRootDirectories()Ljava/lang/Iterable;
std::shared_ptr<java::lang::Iterable<java::nio::file::Path>> sun::nio::fs::UnixFileSystem::getRootDirectories()
{
	
	std::shared<std::vector<std::vector<java::nio::file::Path>>> cVar0;
	std::shared_ptr<sun::nio::fs::UnixFileSystem_S_1> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 612        value = {
	// 613            "()",
	// 614            "Ljava/lang/Iterable",
	// 615            "<",
	// 616            "Ljava/nio/file/Path;",
	// 617            ">;"
	// 618        }
	// 619    .end annotation
	cVar0 = std::make_shared<std::vector<std::vector<java::nio::file::Path>>>(0x1);
	cVar0[0x0] = this->rootDirectory;
	//    .local v0, "allowedList":Ljava/util/List;, "Ljava/util/List<Ljava/nio/file/Path;>;"
	cVar1 = std::make_shared<sun::nio::fs::UnixFileSystem_S_1>(this, java::util::Collections::unmodifiableList(java::util::Arrays::asList(cVar0)));
	return cVar1;

}
// .method public final getSeparator()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixFileSystem::getSeparator()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("/"));

}
// .method public final getUserPrincipalLookupService()Ljava/nio/file/attribute/UserPrincipalLookupService;
std::shared_ptr<java::nio::file::attribute::UserPrincipalLookupService> sun::nio::fs::UnixFileSystem::getUserPrincipalLookupService()
{
	
	return sun::nio::fs::UnixFileSystem_S_LookupService::instance;

}
// .method public final isOpen()Z
bool sun::nio::fs::UnixFileSystem::isOpen()
{
	
	return 0x1;

}
// .method public final isReadOnly()Z
bool sun::nio::fs::UnixFileSystem::isReadOnly()
{
	
	return 0x0;

}
// .method isSolaris()Z
bool sun::nio::fs::UnixFileSystem::isSolaris()
{
	
	return 0x0;

}
// .method needToResolveAgainstDefaultDirectory()Z
bool sun::nio::fs::UnixFileSystem::needToResolveAgainstDefaultDirectory()
{
	
	return this->needToResolveAgainstDefaultDirectory;

}
// .method normalizeJavaPath(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixFileSystem::normalizeJavaPath(std::shared_ptr<java::lang::String> path)
{
	
	//    .param p1, "path"    # Ljava/lang/String;
	return path;

}
// .method normalizeNativePath([C)[C
char sun::nio::fs::UnixFileSystem::normalizeNativePath(std::shared_ptr<char[]> path)
{
	
	//    .param p1, "path"    # [C
	return path;

}
// .method public final provider()Ljava/nio/file/spi/FileSystemProvider;
std::shared_ptr<java::nio::file::spi::FileSystemProvider> sun::nio::fs::UnixFileSystem::provider()
{
	
	return this->provider;

}
// .method rootDirectory()Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixFileSystem::rootDirectory()
{
	
	return this->rootDirectory;

}


