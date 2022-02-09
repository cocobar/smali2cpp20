// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CurrencyMetaInfo$CurrencyDigits.smali
#include "java2ctype.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyDigits.h"
#include "android.icu.text.CurrencyMetaInfo.h"
#include "java.lang.String.h"

// .method public constructor <init>(II)V
android::icu::text::CurrencyMetaInfo_S_CurrencyDigits::CurrencyMetaInfo_S_CurrencyDigits(int fractionDigits,int roundingIncrement)
{
	
	//    .param p1, "fractionDigits"    # I
	//    .param p2, "roundingIncrement"    # I
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fractionDigits = fractionDigits;
	this->roundingIncrement = roundingIncrement;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CurrencyMetaInfo_S_CurrencyDigits::toString()
{
	
	return android::icu::text::CurrencyMetaInfo::-wrap0(this);

}


