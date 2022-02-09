// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$1.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_1.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_SampleType.h"
#include "java.lang.String.h"

static android::icu::text::PluralRules_S_1::serialVersionUID = 0x7f2b2ad155970a18L;
// .method constructor <init>()V
android::icu::text::PluralRules_S_1::PluralRules_S_1()
{
	
	// 030    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public isFulfilled(Landroid/icu/text/PluralRules$FixedDecimal;)Z
bool android::icu::text::PluralRules_S_1::isFulfilled(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> n)
{
	
	//    .param p1, "n"    # Landroid/icu/text/PluralRules$FixedDecimal;
	return 0x1;

}
// .method public isLimited(Landroid/icu/text/PluralRules$SampleType;)Z
bool android::icu::text::PluralRules_S_1::isLimited(std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType)
{
	
	//    .param p1, "sampleType"    # Landroid/icu/text/PluralRules$SampleType;
	return 0x0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules_S_1::toString()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));

}


