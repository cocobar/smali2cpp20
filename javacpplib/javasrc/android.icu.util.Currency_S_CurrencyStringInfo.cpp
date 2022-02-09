// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Currency$CurrencyStringInfo.smali
#include "java2ctype.h"
#include "android.icu.util.Currency_S_CurrencyStringInfo.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::util::Currency_S_CurrencyStringInfo::Currency_S_CurrencyStringInfo(std::shared_ptr<java::lang::String> isoCode,std::shared_ptr<java::lang::String> currencyString)
{
	
	//    .param p1, "isoCode"    # Ljava/lang/String;
	//    .param p2, "currencyString"    # Ljava/lang/String;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->isoCode = isoCode;
	this->currencyString = currencyString;
	return;

}
// .method public getCurrencyString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency_S_CurrencyStringInfo::getCurrencyString()
{
	
	return this->currencyString;

}
// .method public getISOCode()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency_S_CurrencyStringInfo::getISOCode()
{
	
	return this->isoCode;

}


