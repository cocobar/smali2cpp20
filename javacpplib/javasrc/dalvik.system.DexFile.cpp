// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\DexFile.smali
#include "java2ctype.h"
#include "android.system.StructStat.h"
#include "dalvik.system.DexFile_S_DFEnum.h"
#include "dalvik.system.DexFile.h"
#include "dalvik.system.DexPathList_S_Element.h"
#include "java.io.File.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NoClassDefFoundError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Arrays.h"
#include "java.util.Enumeration.h"
#include "java.util.List.h"
#include "libcore.io.Libcore.h"
#include "libcore.io.Os.h"

static dalvik::system::DexFile::DEX2OAT_FOR_BOOT_IMAGE = 0x2;
static dalvik::system::DexFile::DEX2OAT_FOR_FILTER = 0x3;
static dalvik::system::DexFile::DEX2OAT_FOR_RELOCATION = 0x4;
static dalvik::system::DexFile::DEX2OAT_FROM_SCRATCH = 0x1;
static dalvik::system::DexFile::NO_DEXOPT_NEEDED;
// .method static synthetic -get0(Ldalvik/system/DexFile;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> dalvik::system::DexFile::_get0(std::shared_ptr<dalvik::system::DexFile> _this)
{
	
	//    .param p0, "-this"    # Ldalvik/system/DexFile;
	return _this->mCookie;

}
// .method static synthetic -wrap0(Ljava/lang/Object;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::DexFile::_wrap0(std::shared_ptr<java::lang::Object> cookie)
{
	
	//    .param p0, "cookie"    # Ljava/lang/Object;
	return dalvik::system::DexFile::getClassNameList(cookie);

}
// .method public constructor <init>(Ljava/io/File;)V
dalvik::system::DexFile::DexFile(std::shared_ptr<java::io::File> file)
{
	
	//    .param p1, "file"    # Ljava/io/File;
	//    .annotation system Ldalvik/annotation/Throws;
	// 064        value = {
	// 065            Ljava/io/IOException;
	// 066        }
	// 067    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 070    .end annotation
	dalvik::system::DexFile::(file->getPath());
	return;

}
// .method constructor <init>(Ljava/io/File;Ljava/lang/ClassLoader;[Ldalvik/system/DexPathList$Element;)V
dalvik::system::DexFile::DexFile(std::shared_ptr<java::io::File> file,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> elements)
{
	
	//    .param p1, "file"    # Ljava/io/File;
	//    .param p2, "loader"    # Ljava/lang/ClassLoader;
	//    .param p3, "elements"    # [Ldalvik/system/DexPathList$Element;
	//    .annotation system Ldalvik/annotation/Throws;
	// 090        value = {
	// 091            Ljava/io/IOException;
	// 092        }
	// 093    .end annotation
	dalvik::system::DexFile::(file->getPath(), loader, elements);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
dalvik::system::DexFile::DexFile(std::shared_ptr<java::lang::String> fileName)
{
	
	std::shared_ptr<java::lang::ClassLoader> cVar0;
	
	//    .param p1, "fileName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 111        value = {
	// 112            Ljava/io/IOException;
	// 113        }
	// 114    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 117    .end annotation
	cVar0 = 0x0;
	dalvik::system::DexFile::(fileName, cVar0, cVar0);
	return;

}
// .method constructor <init>(Ljava/lang/String;Ljava/lang/ClassLoader;[Ldalvik/system/DexPathList$Element;)V
dalvik::system::DexFile::DexFile(std::shared_ptr<java::lang::String> fileName,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> elements)
{
	
	//    .param p1, "fileName"    # Ljava/lang/String;
	//    .param p2, "loader"    # Ljava/lang/ClassLoader;
	//    .param p3, "elements"    # [Ldalvik/system/DexPathList$Element;
	//    .annotation system Ldalvik/annotation/Throws;
	// 135        value = {
	// 136            Ljava/io/IOException;
	// 137        }
	// 138    .end annotation
	// 142    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->mCookie = dalvik::system::DexFile::openDexFile(fileName, 0x0, 0x0, loader, elements);
	this->mInternalCookie = this->mCookie;
	this->mFileName = fileName;
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/lang/String;ILjava/lang/ClassLoader;[Ldalvik/system/DexPathList$Element;)V
dalvik::system::DexFile::DexFile(std::shared_ptr<java::lang::String> sourceName,std::shared_ptr<java::lang::String> outputName,int flags,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> elements)
{
	
	std::shared_ptr<java::io::File> cVar0;
	std::shared_ptr<java::lang::String> parent;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "sourceName"    # Ljava/lang/String;
	//    .param p2, "outputName"    # Ljava/lang/String;
	//    .param p3, "flags"    # I
	//    .param p4, "loader"    # Ljava/lang/ClassLoader;
	//    .param p5, "elements"    # [Ldalvik/system/DexPathList$Element;
	//    .annotation system Ldalvik/annotation/Throws;
	// 175        value = {
	// 176            Ljava/io/IOException;
	// 177        }
	// 178    .end annotation
	// 182    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( !(outputName) )  
		goto label_cond_47;
	try {
	//label_try_start_5:
	cVar0 = std::make_shared<java::io::File>(outputName);
	parent = cVar0->getParent();
	//    .local v1, "parent":Ljava/lang/String;
	if ( libcore::io::Libcore::os->getuid() == libcore::io::Libcore::os->stat(parent)->st_uid )
		goto label_cond_47;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Optimized data directory ")))->append(parent)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" is not owned by the current user. Shared storage cannot protect")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" your application from code injection attacks.")))->toString());
	// throw
	throw cVar1;
	// 255    :try_end_46
	// 256    .catch Landroid/system/ErrnoException; {:try_start_5 .. :try_end_46} :catch_46
	// 258    .line 137
	// 259    .end local v1    # "parent":Ljava/lang/String;
label_catch_46:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_47:
	this->mCookie = dalvik::system::DexFile::openDexFile(sourceName, outputName, flags, loader, elements);
	this->mInternalCookie = this->mCookie;
	this->mFileName = sourceName;
	return;

}
// .method constructor <init>(Ljava/nio/ByteBuffer;)V
dalvik::system::DexFile::DexFile(std::shared_ptr<java::nio::ByteBuffer> buf)
{
	
	//    .param p1, "buf"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 287        value = {
	// 288            Ljava/io/IOException;
	// 289        }
	// 290    .end annotation
	// 294    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->mCookie = dalvik::system::DexFile::openInMemoryDexFile(buf);
	this->mInternalCookie = this->mCookie;
	this->mFileName = 0x0;
	return;

}
// .method private static defineClass(Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/lang/Object;Ldalvik/system/DexFile;Ljava/util/List;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class> dalvik::system::DexFile::defineClass(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<java::lang::Object> cookie,std::shared_ptr<dalvik::system::DexFile> dexFile,std::shared_ptr<java::util::List<java::lang::Throwable>> suppressed)
{
	
	std::shared_ptr<java::lang::Class> result;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .param p1, "loader"    # Ljava/lang/ClassLoader;
	//    .param p2, "cookie"    # Ljava/lang/Object;
	//    .param p3, "dexFile"    # Ldalvik/system/DexFile;
	//    .annotation system Ldalvik/annotation/Signature;
	// 333        value = {
	// 334            "(",
	// 335            "Ljava/lang/String;",
	// 336            "Ljava/lang/ClassLoader;",
	// 337            "Ljava/lang/Object;",
	// 338            "Ldalvik/system/DexFile;",
	// 339            "Ljava/util/List",
	// 340            "<",
	// 341            "Ljava/lang/Throwable;",
	// 342            ">;)",
	// 343            "Ljava/lang/Class;"
	// 344        }
	// 345    .end annotation
	//    .local p4, "suppressed":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Throwable;>;"
	result = 0x0;
	//    .local v2, "result":Ljava/lang/Class;
	try {
	//label_try_start_1:
	//label_try_end_4:
	}
	catch (java::lang::NoClassDefFoundError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d;
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Ljava/lang/NoClassDefFoundError; {:try_start_1 .. :try_end_4} :catch_d
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_1 .. :try_end_4} :catch_6
	result = dalvik::system::DexFile::defineClassNative(name, loader, cookie, dexFile);
	//    .end local v2    # "result":Ljava/lang/Class;
label_cond_5:
label_goto_5:
	return result;
	// 368    .line 287
	// 369    .restart local v2    # "result":Ljava/lang/Class;
label_catch_6:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/ClassNotFoundException;
	if ( !(suppressed) )  
		goto label_cond_5;
	suppressed->add(getCatchExcetionFromList);
	goto label_goto_5;
	// 382    .line 283
	// 383    .end local v0    # "e":Ljava/lang/ClassNotFoundException;
label_catch_d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/NoClassDefFoundError;
	if ( !(suppressed) )  
		goto label_cond_5;
	suppressed->add(getCatchExcetionFromList);
	goto label_goto_5;

}
// .method private static native defineClassNative(Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/lang/Object;Ldalvik/system/DexFile;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class> dalvik::system::DexFile::defineClassNative(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::ClassLoader> var1,std::shared_ptr<java::lang::Object> var2,std::shared_ptr<dalvik::system::DexFile> var3)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 399        value = {
	// 400            Ljava/lang/ClassNotFoundException;,
	// 401            Ljava/lang/NoClassDefFoundError;
	// 402        }
	// 403    .end annotation

}
// .method public static native getDexFileOutputPaths(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::DexFile::getDexFileOutputPaths(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 411        value = {
	// 412            Ljava/io/FileNotFoundException;
	// 413        }
	// 414    .end annotation

}
// .method public static native getDexFileStatus(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::DexFile::getDexFileStatus(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 419        value = {
	// 420            Ljava/io/FileNotFoundException;
	// 421        }
	// 422    .end annotation

}
// .method public static native getDexOptNeeded(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)I
int dalvik::system::DexFile::getDexOptNeeded(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::lang::String> var2,bool var3,bool var4)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 427        value = {
	// 428            Ljava/io/FileNotFoundException;,
	// 429            Ljava/io/IOException;
	// 430        }
	// 431    .end annotation

}
// .method public static native isDexOptNeeded(Ljava/lang/String;)Z
bool dalvik::system::DexFile::isDexOptNeeded(std::shared_ptr<java::lang::String> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 445        value = {
	// 446            Ljava/io/FileNotFoundException;,
	// 447            Ljava/io/IOException;
	// 448        }
	// 449    .end annotation

}
// .method public static loadDex(Ljava/lang/String;Ljava/lang/String;I)Ldalvik/system/DexFile;
std::shared_ptr<dalvik::system::DexFile> dalvik::system::DexFile::loadDex(std::shared_ptr<java::lang::String> sourcePathName,std::shared_ptr<java::lang::String> outputPathName,int flags)
{
	
	std::shared_ptr<java::lang::ClassLoader> cVar0;
	
	//    .param p0, "sourcePathName"    # Ljava/lang/String;
	//    .param p1, "outputPathName"    # Ljava/lang/String;
	//    .param p2, "flags"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 464        value = {
	// 465            Ljava/io/IOException;
	// 466        }
	// 467    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 470    .end annotation
	cVar0 = 0x0;
	return dalvik::system::DexFile::loadDex(sourcePathName, outputPathName, flags, cVar0, cVar0);

}
// .method static loadDex(Ljava/lang/String;Ljava/lang/String;ILjava/lang/ClassLoader;[Ldalvik/system/DexPathList$Element;)Ldalvik/system/DexFile;
std::shared_ptr<dalvik::system::DexFile> dalvik::system::DexFile::loadDex(std::shared_ptr<java::lang::String> sourcePathName,std::shared_ptr<java::lang::String> outputPathName,int flags,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> elements)
{
	
	std::shared_ptr<dalvik::system::DexFile> cVar0;
	
	//    .param p0, "sourcePathName"    # Ljava/lang/String;
	//    .param p1, "outputPathName"    # Ljava/lang/String;
	//    .param p2, "flags"    # I
	//    .param p3, "loader"    # Ljava/lang/ClassLoader;
	//    .param p4, "elements"    # [Ldalvik/system/DexPathList$Element;
	//    .annotation system Ldalvik/annotation/Throws;
	// 491        value = {
	// 492            Ljava/io/IOException;
	// 493        }
	// 494    .end annotation
	cVar0 = std::make_shared<dalvik::system::DexFile>(sourcePathName, outputPathName, flags, loader, elements);
	return cVar0;

}
// .method private static openDexFile(Ljava/lang/String;Ljava/lang/String;ILjava/lang/ClassLoader;[Ldalvik/system/DexPathList$Element;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> dalvik::system::DexFile::openDexFile(std::shared_ptr<java::lang::String> sourceName,std::shared_ptr<java::lang::String> outputName,int flags,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> elements)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::io::File> cVar1;
	std::shared_ptr<java::io::File> cVar2;
	
	//    .param p0, "sourceName"    # Ljava/lang/String;
	//    .param p1, "outputName"    # Ljava/lang/String;
	//    .param p2, "flags"    # I
	//    .param p3, "loader"    # Ljava/lang/ClassLoader;
	//    .param p4, "elements"    # [Ldalvik/system/DexPathList$Element;
	//    .annotation system Ldalvik/annotation/Throws;
	// 523        value = {
	// 524            Ljava/io/IOException;
	// 525        }
	// 526    .end annotation
	cVar0 = 0x0;
	cVar1 = std::make_shared<java::io::File>(sourceName);
	if ( outputName )     
		goto label_cond_11;
label_goto_c:
	return dalvik::system::DexFile::openDexFileNative(cVar1->getAbsolutePath(), cVar0, flags, loader, elements);
	// 551    .line 356
label_cond_11:
	cVar2 = std::make_shared<java::io::File>(outputName);
	cVar0 = cVar2->getAbsolutePath();
	goto label_goto_c;

}
// .method private static openInMemoryDexFile(Ljava/nio/ByteBuffer;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> dalvik::system::DexFile::openInMemoryDexFile(std::shared_ptr<java::nio::ByteBuffer> buf)
{
	
	//    .param p0, "buf"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 571        value = {
	// 572            Ljava/io/IOException;
	// 573        }
	// 574    .end annotation
	if ( !(buf->isDirect()) )  
		goto label_cond_13;
	return dalvik::system::DexFile::createCookieWithDirectBuffer(buf, buf->position(), buf->limit());
	// 599    .line 366
label_cond_13:
	return dalvik::system::DexFile::createCookieWithArray(buf->array(), buf->position(), buf->limit());

}
// .method public close()V
void dalvik::system::DexFile::close()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 625        value = {
	// 626            Ljava/io/IOException;
	// 627        }
	// 628    .end annotation
	cVar0 = 0x0;
	if ( !(this->mInternalCookie) )  
		goto label_cond_11;
	if ( !(dalvik::system::DexFile::closeDexFile(this->mInternalCookie)) )  
		goto label_cond_f;
	this->mInternalCookie = cVar0;
label_cond_f:
	this->mCookie = cVar0;
label_cond_11:
	return;

}
// .method public entries()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> dalvik::system::DexFile::entries()
{
	
	std::shared_ptr<dalvik::system::DexFile_S_DFEnum> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 662        value = {
	// 663            "()",
	// 664            "Ljava/util/Enumeration",
	// 665            "<",
	// 666            "Ljava/lang/String;",
	// 667            ">;"
	// 668        }
	// 669    .end annotation
	cVar0 = std::make_shared<dalvik::system::DexFile_S_DFEnum>(this);
	return cVar0;

}
// .method protected finalize()V
void dalvik::system::DexFile::finalize()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 683        value = {
	// 684            Ljava/lang/Throwable;
	// 685        }
	// 686    .end annotation
	try {
	//label_try_start_0:
	if ( !(this->mInternalCookie) )  
		goto label_cond_1c;
	if ( !(( dalvik::system::DexFile::closeDexFile(this->mInternalCookie) ^ 0x1)) )  
		goto label_cond_1c;
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Failed to close dex file in finalizer.")));
	// throw
	throw cVar0;
	// 713    :try_end_17
	// 714    .catchall {:try_start_0 .. :try_end_17} :catchall_17
	// 716    .line 340
label_catchall_17:
	// move-exception
	
	this->finalize();
	// throw
	throw;
	// 726    .line 338
label_cond_1c:
	try {
	//label_try_start_1d:
	this->mInternalCookie = 0x0;
	this->mCookie = 0x0;
	//label_try_end_22:
	}
	catch (...){
		goto label_catchall_17;
	}
	//    .catchall {:try_start_1d .. :try_end_22} :catchall_17
	this->finalize();
	return;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::DexFile::getName()
{
	
	return this->mFileName;

}
// .method isBackedByOatFile()Z
bool dalvik::system::DexFile::isBackedByOatFile()
{
	
	return dalvik::system::DexFile::isBackedByOatFile(this->mCookie);

}
// .method public loadClass(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class> dalvik::system::DexFile::loadClass(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "loader"    # Ljava/lang/ClassLoader;
	//    .local v0, "slashName":Ljava/lang/String;
	return this->loadClassBinaryName(name->replace(0x2e, 0x2f), loader, 0x0);

}
// .method public loadClassBinaryName(Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/util/List;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class> dalvik::system::DexFile::loadClassBinaryName(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<java::util::List<java::lang::Throwable>> suppressed)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "loader"    # Ljava/lang/ClassLoader;
	//    .annotation system Ldalvik/annotation/Signature;
	// 802        value = {
	// 803            "(",
	// 804            "Ljava/lang/String;",
	// 805            "Ljava/lang/ClassLoader;",
	// 806            "Ljava/util/List",
	// 807            "<",
	// 808            "Ljava/lang/Throwable;",
	// 809            ">;)",
	// 810            "Ljava/lang/Class;"
	// 811        }
	// 812    .end annotation
	//    .local p3, "suppressed":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Throwable;>;"
	return dalvik::system::DexFile::defineClass(name, loader, this->mCookie, this, suppressed);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::DexFile::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	
	if ( !(this->mFileName) )  
		goto label_cond_9;
	return this->getName();
	// 842    .line 217
label_cond_9:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = this->mCookie;
	cVar1->checkCast("long long[]");
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("InMemoryDexFile[cookie=")))->append(java::util::Arrays::toString(cVar1))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->toString();

}


