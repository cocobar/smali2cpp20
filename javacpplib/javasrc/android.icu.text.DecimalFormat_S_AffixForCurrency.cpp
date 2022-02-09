// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DecimalFormat$AffixForCurrency.smali
#include "java2ctype.h"
#include "android.icu.text.DecimalFormat_S_AffixForCurrency.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V
android::icu::text::DecimalFormat_S_AffixForCurrency::DecimalFormat_S_AffixForCurrency(std::shared_ptr<java::lang::String> negPrefix,std::shared_ptr<java::lang::String> negSuffix,std::shared_ptr<java::lang::String> posPrefix,std::shared_ptr<java::lang::String> posSuffix,int type)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "negPrefix"    # Ljava/lang/String;
	//    .param p2, "negSuffix"    # Ljava/lang/String;
	//    .param p3, "posPrefix"    # Ljava/lang/String;
	//    .param p4, "posSuffix"    # Ljava/lang/String;
	//    .param p5, "type"    # I
	cVar0 = 0x0;
	// 042    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->negPrefixPatternForCurrency = cVar0;
	this->negSuffixPatternForCurrency = cVar0;
	this->posPrefixPatternForCurrency = cVar0;
	this->posSuffixPatternForCurrency = cVar0;
	this->negPrefixPatternForCurrency = negPrefix;
	this->negSuffixPatternForCurrency = negSuffix;
	this->posPrefixPatternForCurrency = posPrefix;
	this->posSuffixPatternForCurrency = posSuffix;
	this->patternType = type;
	return;

}
// .method public getNegPrefix()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormat_S_AffixForCurrency::getNegPrefix()
{
	
	return this->negPrefixPatternForCurrency;

}
// .method public getNegSuffix()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormat_S_AffixForCurrency::getNegSuffix()
{
	
	return this->negSuffixPatternForCurrency;

}
// .method public getPatternType()I
int android::icu::text::DecimalFormat_S_AffixForCurrency::getPatternType()
{
	
	return this->patternType;

}
// .method public getPosPrefix()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormat_S_AffixForCurrency::getPosPrefix()
{
	
	return this->posPrefixPatternForCurrency;

}
// .method public getPosSuffix()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormat_S_AffixForCurrency::getPosSuffix()
{
	
	return this->posSuffixPatternForCurrency;

}


