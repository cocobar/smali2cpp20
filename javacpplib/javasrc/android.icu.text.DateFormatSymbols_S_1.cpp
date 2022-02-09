// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormatSymbols$1.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.text.DateFormatSymbols_S_1.h"
#include "android.icu.text.DateFormatSymbols.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::DateFormatSymbols_S_1::DateFormatSymbols_S_1()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormatSymbols;
std::shared_ptr<android::icu::text::DateFormatSymbols> android::icu::text::DateFormatSymbols_S_1::createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cVar0;
	int cVar1;
	int typeStart;
	int typeLimit;
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar2;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	cVar1 = 0x2b;
	typeStart = ( key->indexOf(cVar1) + 0x1);
	//    .local v2, "typeStart":I
	typeLimit = key->indexOf(cVar1, typeStart);
	//    .local v1, "typeLimit":I
	if ( typeLimit >= 0 )
		goto label_cond_13;
label_cond_13:
	//    .local v0, "type":Ljava/lang/String;
	cVar2 = std::make_shared<android::icu::text::DateFormatSymbols>(locale, cVar0, key->substring(typeStart, typeLimit), cVar0);
	return cVar2;

}


