#ifndef __android_icu_text_DecimalFormat_S_AffixForCurrency__
#define __android_icu_text_DecimalFormat_S_AffixForCurrency__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DecimalFormat$AffixForCurrency.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DecimalFormat_S_AffixForCurrency : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::String> negPrefixPatternForCurrency;
	std::shared_ptr<java::lang::String> negSuffixPatternForCurrency;
	int patternType;
	std::shared_ptr<java::lang::String> posPrefixPatternForCurrency;
	std::shared_ptr<java::lang::String> posSuffixPatternForCurrency;
public:
	DecimalFormat_S_AffixForCurrency(std::shared_ptr<java::lang::String> negPrefix,std::shared_ptr<java::lang::String> negSuffix,std::shared_ptr<java::lang::String> posPrefix,std::shared_ptr<java::lang::String> posSuffix,int type);
	std::shared_ptr<java::lang::String> virtual getNegPrefix();
	std::shared_ptr<java::lang::String> virtual getNegSuffix();
	int virtual getPatternType();
	std::shared_ptr<java::lang::String> virtual getPosPrefix();
	std::shared_ptr<java::lang::String> virtual getPosSuffix();
public:
	virtual ~DecimalFormat_S_AffixForCurrency(){
	}

}; // class DecimalFormat_S_AffixForCurrency
}; // namespace android::icu::text

#endif //__android_icu_text_DecimalFormat_S_AffixForCurrency__

