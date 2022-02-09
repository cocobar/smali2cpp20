// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ResourceBundleWrapper$1.smali
#include "java2ctype.h"
#include "android.icu.impl.ResourceBundleWrapper_S_1.h"
#include "android.icu.impl.ResourceBundleWrapper_S_Loader.h"
#include "android.icu.impl.ResourceBundleWrapper.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::impl::ResourceBundleWrapper_S_1::ResourceBundleWrapper_S_1()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/lang/String;Landroid/icu/impl/ResourceBundleWrapper$Loader;)Landroid/icu/impl/ResourceBundleWrapper;
std::shared_ptr<android::icu::impl::ResourceBundleWrapper> android::icu::impl::ResourceBundleWrapper_S_1::createInstance(std::shared_ptr<java::lang::String> unusedKey,std::shared_ptr<android::icu::impl::ResourceBundleWrapper_S_Loader> loader)
{
	
	//    .param p1, "unusedKey"    # Ljava/lang/String;
	//    .param p2, "loader"    # Landroid/icu/impl/ResourceBundleWrapper$Loader;
	return loader->load();

}


