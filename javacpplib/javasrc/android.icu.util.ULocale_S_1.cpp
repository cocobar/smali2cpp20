// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale$1.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleIDParser.h"
#include "android.icu.util.ULocale_S_1.h"
#include "java.lang.String.h"
#include "java.lang.Void.h"

// .method constructor <init>()V
android::icu::util::ULocale_S_1::ULocale_S_1()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/lang/String;Ljava/lang/Void;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale_S_1::createInstance(std::shared_ptr<java::lang::String> tmpLocaleID,std::shared_ptr<java::lang::Void> unused)
{
	
	std::shared_ptr<android::icu::impl::LocaleIDParser> cVar0;
	
	//    .param p1, "tmpLocaleID"    # Ljava/lang/String;
	//    .param p2, "unused"    # Ljava/lang/Void;
	cVar0 = std::make_shared<android::icu::impl::LocaleIDParser>(tmpLocaleID);
	return cVar0->getName();

}


