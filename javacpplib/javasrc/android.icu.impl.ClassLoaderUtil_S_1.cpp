// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ClassLoaderUtil$1.smali
#include "java2ctype.h"
#include "android.icu.impl.ClassLoaderUtil_S_1.h"
#include "android.icu.impl.ClassLoaderUtil_S_BootstrapClassLoader.h"

// .method constructor <init>()V
android::icu::impl::ClassLoaderUtil_S_1::ClassLoaderUtil_S_1()
{
	
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Landroid/icu/impl/ClassLoaderUtil$BootstrapClassLoader;
std::shared_ptr<android::icu::impl::ClassLoaderUtil_S_BootstrapClassLoader> android::icu::impl::ClassLoaderUtil_S_1::run()
{
	
	std::shared_ptr<android::icu::impl::ClassLoaderUtil_S_BootstrapClassLoader> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::ClassLoaderUtil_S_BootstrapClassLoader>();
	return cVar0;

}


