// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileSystem$1.smali
#include "java2ctype.h"
#include "java.lang.SecurityException.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.nio.file.Path.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.nio.fs.UnixFileSystem_S_1.h"
#include "sun.nio.fs.UnixFileSystem.h"
#include "sun.nio.fs.UnixPath.h"

// .method constructor <init>(Lsun/nio/fs/UnixFileSystem;Ljava/util/List;)V
sun::nio::fs::UnixFileSystem_S_1::UnixFileSystem_S_1(std::shared_ptr<sun::nio::fs::UnixFileSystem> this_S_0,std::shared_ptr<java::util::List> var1)
{
	
	//    .param p1, "this$0"    # Lsun/nio/fs/UnixFileSystem;
	this->this_S_0 = this_S_0;
	this->val_S_allowedList = var1;
	// 048    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public iterator()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<java::nio::file::Path>> sun::nio::fs::UnixFileSystem_S_1::iterator()
{
	
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 059        value = {
	// 060            "()",
	// 061            "Ljava/util/Iterator",
	// 062            "<",
	// 063            "Ljava/nio/file/Path;",
	// 064            ">;"
	// 065        }
	// 066    .end annotation
	try {
	//label_try_start_0:
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v1, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_13;
	sm->checkRead(sun::nio::fs::UnixFileSystem::-get0(this->this_S_0)->toString());
label_cond_13:
	//label_try_end_18:
	}
	catch (java::lang::SecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1a;
	}
	//    .catch Ljava/lang/SecurityException; {:try_start_0 .. :try_end_18} :catch_1a
	return this->val_S_allowedList->iterator();
	// 104    .line 162
	// 105    .end local v1    # "sm":Ljava/lang/SecurityManager;
label_catch_1a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "x":Ljava/lang/SecurityException;
	//    .local v0, "disallowed":Ljava/util/List;, "Ljava/util/List<Ljava/nio/file/Path;>;"
	return java::util::Collections::emptyList({const[class].FS-Param})->iterator();

}


