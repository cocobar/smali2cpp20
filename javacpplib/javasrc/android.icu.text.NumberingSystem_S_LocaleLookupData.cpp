// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NumberingSystem$LocaleLookupData.smali
#include "java2ctype.h"
#include "android.icu.text.NumberingSystem_S_LocaleLookupData.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

// .method constructor <init>(Landroid/icu/util/ULocale;Ljava/lang/String;)V
android::icu::text::NumberingSystem_S_LocaleLookupData::NumberingSystem_S_LocaleLookupData(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> numbersKeyword)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "numbersKeyword"    # Ljava/lang/String;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->locale = locale;
	this->numbersKeyword = numbersKeyword;
	return;

}


