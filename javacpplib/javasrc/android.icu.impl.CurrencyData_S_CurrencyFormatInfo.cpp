// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData$CurrencyFormatInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencyFormatInfo.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
android::icu::impl::CurrencyData_S_CurrencyFormatInfo::CurrencyData_S_CurrencyFormatInfo(std::shared_ptr<java::lang::String> currencyPattern,std::shared_ptr<java::lang::String> monetarySeparator,std::shared_ptr<java::lang::String> monetaryGroupingSeparator)
{
	
	//    .param p1, "currencyPattern"    # Ljava/lang/String;
	//    .param p2, "monetarySeparator"    # Ljava/lang/String;
	//    .param p3, "monetaryGroupingSeparator"    # Ljava/lang/String;
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->currencyPattern = currencyPattern;
	this->monetarySeparator = monetarySeparator;
	this->monetaryGroupingSeparator = monetaryGroupingSeparator;
	return;

}


