// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\DexPathList$Element.smali
#include "java2ctype.h"
#include "dalvik.system.DexFile.h"
#include "dalvik.system.DexPathList_S_Element.h"
#include "java.io.File.h"
#include "java.io.IOException.h"
#include "java.io.PrintStream.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.net.MalformedURLException.h"
#include "java.net.URI.h"
#include "java.net.URL.h"
#include "java.util.List.h"
#include "libcore.io.ClassPathURLStreamHandler.h"

// .method static synthetic -wrap0(Ldalvik/system/DexPathList$Element;)Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::DexPathList_S_Element::_wrap0(std::shared_ptr<dalvik::system::DexPathList_S_Element> _this)
{
	
	//    .param p0, "-this"    # Ldalvik/system/DexPathList$Element;
	return _this->getDexPath();

}
// .method public constructor <init>(Ldalvik/system/DexFile;)V
dalvik::system::DexPathList_S_Element::DexPathList_S_Element(std::shared_ptr<dalvik::system::DexFile> dexFile)
{
	
	//    .param p1, "dexFile"    # Ldalvik/system/DexFile;
	// 046    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->dexFile = dexFile;
	this->path = 0x0;
	return;

}
// .method public constructor <init>(Ldalvik/system/DexFile;Ljava/io/File;)V
dalvik::system::DexPathList_S_Element::DexPathList_S_Element(std::shared_ptr<dalvik::system::DexFile> dexFile,std::shared_ptr<java::io::File> dexZipPath)
{
	
	//    .param p1, "dexFile"    # Ldalvik/system/DexFile;
	//    .param p2, "dexZipPath"    # Ljava/io/File;
	// 067    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->dexFile = dexFile;
	this->path = dexZipPath;
	return;

}
// .method public constructor <init>(Ljava/io/File;)V
dalvik::system::DexPathList_S_Element::DexPathList_S_Element(std::shared_ptr<java::io::File> path)
{
	
	//    .param p1, "path"    # Ljava/io/File;
	// 085    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->path = path;
	this->dexFile = 0x0;
	return;

}
// .method public constructor <init>(Ljava/io/File;ZLjava/io/File;Ldalvik/system/DexFile;)V
dalvik::system::DexPathList_S_Element::DexPathList_S_Element(std::shared_ptr<java::io::File> dir,bool isDirectory,std::shared_ptr<java::io::File> zip,std::shared_ptr<dalvik::system::DexFile> dexFile)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "dir"    # Ljava/io/File;
	//    .param p2, "isDirectory"    # Z
	//    .param p3, "zip"    # Ljava/io/File;
	//    .param p4, "dexFile"    # Ldalvik/system/DexFile;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 106    .end annotation
	// 112    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	java::lang::System::err->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Warning: Using deprecated Element constructor. Do not use internal APIs, this constructor will be removed in the future.")));
	if ( !(dir) )  
		goto label_cond_1b;
	if ( zip )     
		goto label_cond_12;
	if ( !(dexFile) )  
		goto label_cond_1b;
label_cond_12:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Using dir and zip|dexFile no longer supported.")));
	// throw
	throw cVar0;
	// 138    .line 606
label_cond_1b:
	if ( !(isDirectory) )  
		goto label_cond_2a;
	if ( zip )     
		goto label_cond_21;
	if ( !(dexFile) )  
		goto label_cond_2a;
label_cond_21:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unsupported argument combination.")));
	// throw
	throw cVar1;
	// 156    .line 609
label_cond_2a:
	if ( !(dir) )  
		goto label_cond_31;
	this->path = dir;
	this->dexFile = 0x0;
label_goto_30:
	return;
	// 170    .line 613
label_cond_31:
	this->path = zip;
	this->dexFile = dexFile;
	goto label_goto_30;

}
// .method private getDexPath()Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::DexPathList_S_Element::getDexPath()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	cVar0 = 0x0;
	if ( !(this->path) )  
		goto label_cond_15;
	if ( !(this->path->isDirectory()) )  
		goto label_cond_e;
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = this->path->getAbsolutePath();
	goto label_goto_d;
	// 212    .line 624
label_cond_15:
	if ( !(this->dexFile) )  
		goto label_cond_20;
	return this->dexFile->getName();
	// 227    .line 628
label_cond_20:
	return cVar0;

}
// .method public findClass(Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/util/List;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> dalvik::system::DexPathList_S_Element::findClass(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::ClassLoader> definingContext,std::shared_ptr<java::util::List<java::lang::Throwable>> suppressed)
{
	
	std::shared_ptr<java::lang::Class> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "definingContext"    # Ljava/lang/ClassLoader;
	//    .annotation system Ldalvik/annotation/Signature;
	// 239        value = {
	// 240            "(",
	// 241            "Ljava/lang/String;",
	// 242            "Ljava/lang/ClassLoader;",
	// 243            "Ljava/util/List",
	// 244            "<",
	// 245            "Ljava/lang/Throwable;",
	// 246            ">;)",
	// 247            "Ljava/lang/Class",
	// 248            "<*>;"
	// 249        }
	// 250    .end annotation
	//    .local p3, "suppressed":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Throwable;>;"
	cVar1 = 0x0;
	if ( !(this->dexFile) )  
		goto label_cond_b;
	cVar1 = this->dexFile->loadClassBinaryName(name, definingContext, suppressed);
label_cond_b:
	return cVar1;

}
// .method public findResource(Ljava/lang/String;)Ljava/net/URL;
std::shared_ptr<java::net::URL> dalvik::system::DexPathList_S_Element::findResource(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::File> resourceFile;
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "name"    # Ljava/lang/String;
	this->maybeInit();
	if ( !(this->urlHandler) )  
		goto label_cond_f;
	return this->urlHandler->getEntryUrlOrNull(name);
	// 295    .line 690
label_cond_f:
	if ( !(this->path) )  
		goto label_cond_38;
	if ( !(this->path->isDirectory()) )  
		goto label_cond_38;
	resourceFile = std::make_shared<java::io::File>(this->path, name);
	//    .local v1, "resourceFile":Ljava/io/File;
	if ( !(resourceFile->exists()) )  
		goto label_cond_38;
	try {
	//label_try_start_28:
	//label_try_end_2f:
	}
	catch (java::net::MalformedURLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_31;
	}
	//    .catch Ljava/net/MalformedURLException; {:try_start_28 .. :try_end_2f} :catch_31
	return resourceFile->toURI()->toURL();
	// 338    .line 695
label_catch_31:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/net/MalformedURLException;
	cVar0 = std::make_shared<java::lang::RuntimeException>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 350    .line 701
	// 351    .end local v0    # "ex":Ljava/net/MalformedURLException;
	// 352    .end local v1    # "resourceFile":Ljava/io/File;
label_cond_38:
	return 0x0;

}
// .method public declared-synchronized maybeInit()V
void dalvik::system::DexPathList_S_Element::maybeInit()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<libcore::io::ClassPathURLStreamHandler> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_3:
	}
	catch (...){
		goto label_catchall_48;
	}
	//    .catchall {:try_start_1 .. :try_end_3} :catchall_48
	if ( !(this->initialized) )  
		goto label_cond_7;
	this->monitor_exit();
	return;
	// 376    .line 649
label_cond_7:
	try {
	//label_try_start_7:
	if ( !(this->path) )  
		goto label_cond_13;
	if ( !(this->path->isDirectory()) )  
		goto label_cond_18;
label_cond_13:
	this->initialized = 0x1;
	//label_try_end_16:
	}
	catch (...){
		goto label_catchall_48;
	}
	//    .catchall {:try_start_7 .. :try_end_16} :catchall_48
	this->monitor_exit();
	return;
	// 404    .line 655
label_cond_18:
	try {
	//label_try_start_18:
	cVar0 = std::make_shared<libcore::io::ClassPathURLStreamHandler>(this->path->getPath());
	this->urlHandler = cVar0;
	//label_try_end_25:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a;
	}
	catch (...){
		goto label_catchall_48;
	}
	//    .catch Ljava/io/IOException; {:try_start_18 .. :try_end_25} :catch_2a
	//    .catchall {:try_start_18 .. :try_end_25} :catchall_48
label_goto_25:
	try {
	//label_try_start_26:
	this->initialized = 0x1;
	//label_try_end_28:
	}
	catch (...){
		goto label_catchall_48;
	}
	//    .catchall {:try_start_26 .. :try_end_28} :catchall_48
	this->monitor_exit();
	return;
	// 436    .line 656
label_catch_2a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ioe":Ljava/io/IOException;
	try {
	//label_try_start_2b:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::logE(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to open zip file: ")))->append(this->path)->toString(), getCatchExcetionFromList);
	this->urlHandler = 0x0;
	//label_try_end_47:
	}
	catch (...){
		goto label_catchall_48;
	}
	//    .catchall {:try_start_2b .. :try_end_47} :catchall_48
	goto label_goto_25;
	// 474    .end local v0    # "ioe":Ljava/io/IOException;
label_catchall_48:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::DexPathList_S_Element::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	if ( this->dexFile )     
		goto label_cond_2e;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( !(this->path->isDirectory()) )  
		goto label_cond_2a;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>("directory \"));
label_goto_14:
	return cVar0->append(cVar1)->append(this->path)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString();
label_cond_2a:
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>("zip file \"));
	goto label_goto_14;
	// 535    .line 636
label_cond_2e:
	if ( this->path )     
		goto label_cond_50;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	return cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("dex file \")))->append(this->dexFile)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString();
	// 570    .line 639
label_cond_50:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	return cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("zip file \")))->append(this->path)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString();

}


