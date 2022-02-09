// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DecimalFormatSymbols$CacheData.smali
#include "java2ctype.h"
#include "android.icu.text.DecimalFormatSymbols_S_CacheData.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

// .method public constructor <init>(Landroid/icu/util/ULocale;[Ljava/lang/String;[Ljava/lang/String;)V
android::icu::text::DecimalFormatSymbols_S_CacheData::DecimalFormatSymbols_S_CacheData(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<std::vector<java::lang::String>> digits,std::shared_ptr<std::vector<java::lang::String>> numberElements)
{
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .param p2, "digits"    # [Ljava/lang/String;
	//    .param p3, "numberElements"    # [Ljava/lang/String;
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->validLocale = loc;
	this->digits = digits;
	this->numberElements = numberElements;
	return;

}


