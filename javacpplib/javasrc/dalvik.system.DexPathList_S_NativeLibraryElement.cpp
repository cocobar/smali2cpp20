// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\DexPathList$NativeLibraryElement.smali
#include "java2ctype.h"
#include "dalvik.system.DexPathList_S_NativeLibraryElement.h"
#include "java.io.File.h"
#include "java.io.IOException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "libcore.io.ClassPathURLStreamHandler.h"
#include "libcore.io.IoUtils.h"

// .method public constructor <init>(Ljava/io/File;)V
dalvik::system::DexPathList_S_NativeLibraryElement::DexPathList_S_NativeLibraryElement(std::shared_ptr<java::io::File> dir)
{
	
	//    .param p1, "dir"    # Ljava/io/File;
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->path = dir;
	this->zipDir = 0x0;
	return;

}
// .method public constructor <init>(Ljava/io/File;Ljava/lang/String;)V
dalvik::system::DexPathList_S_NativeLibraryElement::DexPathList_S_NativeLibraryElement(std::shared_ptr<java::io::File> zip,std::shared_ptr<java::lang::String> zipDir)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "zip"    # Ljava/io/File;
	//    .param p2, "zipDir"    # Ljava/lang/String;
	// 055    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->path = zip;
	this->zipDir = zipDir;
	if ( zipDir )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 073    .line 738
label_cond_f:
	return;

}
// .method public findNativeLibrary(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::DexPathList_S_NativeLibraryElement::findNativeLibrary(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::File> cVar0;
	std::shared_ptr<java::lang::String> entryPath;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> entryName;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	this->maybeInit();
	if ( this->zipDir )     
		goto label_cond_1a;
	cVar0 = std::make_shared<java::io::File>(this->path, name);
	entryPath = cVar0->getPath();
	//    .local v1, "entryPath":Ljava/lang/String;
	if ( !(libcore::io::IoUtils::canOpenReadOnly(entryPath)) )  
		goto label_cond_5e;
	return entryPath;
	// 117    .line 789
	// 118    .end local v1    # "entryPath":Ljava/lang/String;
label_cond_1a:
	if ( !(this->urlHandler) )  
		goto label_cond_5e;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	entryName = cVar1->append(this->zipDir)->append(0x2f)->append(name)->toString();
	//    .local v0, "entryName":Ljava/lang/String;
	if ( !(this->urlHandler->isEntryStored(entryName)) )  
		goto label_cond_5e;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	return cVar2->append(this->path->getPath())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("!/")))->append(entryName)->toString();
	// 190    .line 799
	// 191    .end local v0    # "entryName":Ljava/lang/String;
label_cond_5e:
	return 0x0;

}
// .method public declared-synchronized maybeInit()V
void dalvik::system::DexPathList_S_NativeLibraryElement::maybeInit()
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
		goto label_catchall_40;
	}
	//    .catchall {:try_start_1 .. :try_end_3} :catchall_40
	if ( !(this->initialized) )  
		goto label_cond_7;
	this->monitor_exit();
	return;
	// 215    .line 755
label_cond_7:
	try {
	//label_try_start_7:
	if ( this->zipDir )     
		goto label_cond_10;
	this->initialized = 0x1;
	//label_try_end_e:
	}
	catch (...){
		goto label_catchall_40;
	}
	//    .catchall {:try_start_7 .. :try_end_e} :catchall_40
	this->monitor_exit();
	return;
	// 234    .line 761
label_cond_10:
	try {
	//label_try_start_10:
	cVar0 = std::make_shared<libcore::io::ClassPathURLStreamHandler>(this->path->getPath());
	this->urlHandler = cVar0;
	//label_try_end_1d:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_22;
	}
	catch (...){
		goto label_catchall_40;
	}
	//    .catch Ljava/io/IOException; {:try_start_10 .. :try_end_1d} :catch_22
	//    .catchall {:try_start_10 .. :try_end_1d} :catchall_40
label_goto_1d:
	try {
	//label_try_start_1e:
	this->initialized = 0x1;
	//label_try_end_20:
	}
	catch (...){
		goto label_catchall_40;
	}
	//    .catchall {:try_start_1e .. :try_end_20} :catchall_40
	this->monitor_exit();
	return;
	// 266    .line 762
label_catch_22:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ioe":Ljava/io/IOException;
	try {
	//label_try_start_23:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::logE(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to open zip file: ")))->append(this->path)->toString(), getCatchExcetionFromList);
	this->urlHandler = 0x0;
	//label_try_end_3f:
	}
	catch (...){
		goto label_catchall_40;
	}
	//    .catchall {:try_start_23 .. :try_end_3f} :catchall_40
	goto label_goto_1d;
	// 304    .end local v0    # "ioe":Ljava/io/IOException;
label_catchall_40:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::DexPathList_S_NativeLibraryElement::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	
	if ( this->zipDir )     
		goto label_cond_22;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("directory \")))->append(this->path)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString();
	// 351    .line 745
label_cond_22:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	if ( this->zipDir->isEmpty() )     
		goto label_cond_69;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", dir \")))->append(this->zipDir)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString();
label_goto_60:
	return cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("zip file \")))->append(this->path)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->append(cVar3)->toString();
	// 422    .line 746
label_cond_69:
	cVar3 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_60;

}


