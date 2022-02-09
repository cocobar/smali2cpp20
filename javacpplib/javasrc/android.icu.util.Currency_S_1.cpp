// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Currency$1.smali
#include "java2ctype.h"
#include "android.icu.util.Currency_S_1.h"
#include "android.icu.util.Currency.h"
#include "java.lang.String.h"
#include "java.lang.Void.h"

// .method constructor <init>()V
android::icu::util::Currency_S_1::Currency_S_1()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/lang/String;Ljava/lang/Void;)Landroid/icu/util/Currency;
std::shared_ptr<android::icu::util::Currency> android::icu::util::Currency_S_1::createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::Void> unused)
{
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "unused"    # Ljava/lang/Void;
	return android::icu::util::Currency::-wrap0(key);

}


