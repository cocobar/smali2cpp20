// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle$2.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_2.h"
#include "android.icu.impl.ICUResourceBundle_S_AvailEntry.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::impl::ICUResourceBundle_S_2::ICUResourceBundle_S_2()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/lang/String;Ljava/lang/ClassLoader;)Landroid/icu/impl/ICUResourceBundle$AvailEntry;
std::shared_ptr<android::icu::impl::ICUResourceBundle_S_AvailEntry> android::icu::impl::ICUResourceBundle_S_2::createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_AvailEntry> cVar0;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "loader"    # Ljava/lang/ClassLoader;
	cVar0 = std::make_shared<android::icu::impl::ICUResourceBundle_S_AvailEntry>(key, loader);
	return cVar0;

}


