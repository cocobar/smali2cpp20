// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ClassLoaderUtil.smali
#include "java2ctype.h"
#include "android.icu.impl.ClassLoaderUtil_S_1.h"
#include "android.icu.impl.ClassLoaderUtil_S_BootstrapClassLoader.h"
#include "android.icu.impl.ClassLoaderUtil.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.System.h"
#include "java.lang.Thread.h"
#include "java.security.AccessController.h"

static android::icu::impl::ClassLoaderUtil::BOOTSTRAP_CLASSLOADER;
// .method public constructor <init>()V
android::icu::impl::ClassLoaderUtil::ClassLoaderUtil()
{
	
	// 024    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static getBootstrapClassLoader()Ljava/lang/ClassLoader;
std::shared_ptr<java::lang::ClassLoader> android::icu::impl::ClassLoaderUtil::getBootstrapClassLoader()
{
	
	std::shared_ptr<android::icu::impl::ClassLoaderUtil> cVar0;
	std::shared_ptr<android::icu::impl::ClassLoaderUtil_S_1> cVar1;
	std::shared_ptr<java::lang::ClassLoader> cl;
	std::shared_ptr<android::icu::impl::ClassLoaderUtil_S_BootstrapClassLoader> cl;
	
	if ( android::icu::impl::ClassLoaderUtil::BOOTSTRAP_CLASSLOADER )     
		goto label_cond_20;
	cVar0 = android::icu::impl::ClassLoaderUtil();
	cVar0->monitor_enter();
	try {
	//label_try_start_7:
	if ( android::icu::impl::ClassLoaderUtil::BOOTSTRAP_CLASSLOADER )     
		goto label_cond_1f;
	0x0;
	//    .local v0, "cl":Ljava/lang/ClassLoader;
	if ( !(java::lang::System::getSecurityManager({const[class].FS-Param})) )  
		goto label_cond_23;
	cVar1 = std::make_shared<android::icu::impl::ClassLoaderUtil_S_1>();
	cl = java::security::AccessController::doPrivileged(cVar1);
	//    .end local v0    # "cl":Ljava/lang/ClassLoader;
	cl->checkCast("java::lang::ClassLoader");
	//    .local v0, "cl":Ljava/lang/ClassLoader;
label_goto_1d:
	android::icu::impl::ClassLoaderUtil::BOOTSTRAP_CLASSLOADER = cl;
	//label_try_end_1f:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_7 .. :try_end_1f} :catchall_29
label_cond_1f:
	cVar0->monitor_exit();
label_cond_20:
	return android::icu::impl::ClassLoaderUtil::BOOTSTRAP_CLASSLOADER;
	// 088    .line 65
	// 089    .local v0, "cl":Ljava/lang/ClassLoader;
label_cond_23:
	try {
	//label_try_start_23:
	//    .end local v0    # "cl":Ljava/lang/ClassLoader;
	cl = std::make_shared<android::icu::impl::ClassLoaderUtil_S_BootstrapClassLoader>();
	//label_try_end_28:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_23 .. :try_end_28} :catchall_29
	//    .local v0, "cl":Ljava/lang/ClassLoader;
	goto label_goto_1d;
	// 102    .line 54
	// 103    .end local v0    # "cl":Ljava/lang/ClassLoader;
label_catchall_29:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static getClassLoader()Ljava/lang/ClassLoader;
std::shared_ptr<java::lang::ClassLoader> android::icu::impl::ClassLoaderUtil::getClassLoader()
{
	
	std::shared_ptr<java::lang::ClassLoader> cl;
	
	cl = java::lang::Thread::currentThread({const[class].FS-Param})->getContextClassLoader();
	//    .local v0, "cl":Ljava/lang/ClassLoader;
	if ( cl )     
		goto label_cond_14;
	cl = java::lang::ClassLoader::getSystemClassLoader({const[class].FS-Param});
	if ( cl )     
		goto label_cond_14;
label_cond_14:
	return cl;

}
// .method public static getClassLoader(Ljava/lang/Class;)Ljava/lang/ClassLoader;
std::shared_ptr<java::lang::ClassLoader> android::icu::impl::ClassLoaderUtil::getClassLoader(std::shared_ptr<java::lang::Class<java::lang::Object>> cls)
{
	
	std::shared_ptr<java::lang::ClassLoader> cl;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 150        value = {
	// 151            "(",
	// 152            "Ljava/lang/Class",
	// 153            "<*>;)",
	// 154            "Ljava/lang/ClassLoader;"
	// 155        }
	// 156    .end annotation
	//    .local p0, "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cl = cls->getClassLoader();
	//    .local v0, "cl":Ljava/lang/ClassLoader;
	if ( cl )     
		goto label_cond_a;
label_cond_a:
	return cl;

}


