// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale$1ULocaleAcceptLanguageQ.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale_S_1ULocaleAcceptLanguageQ.h"

// .method public constructor <init>(DI)V
android::icu::util::ULocale_S_1ULocaleAcceptLanguageQ::ULocale_S_1ULocaleAcceptLanguageQ(double theq,int theserial)
{
	
	//    .param p1, "theq"    # D
	//    .param p3, "theserial"    # I
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->q = theq;
	this->serial = (double)(theserial);
	return;

}
// .method public compareTo(Landroid/icu/util/ULocale$1ULocaleAcceptLanguageQ;)I
int android::icu::util::ULocale_S_1ULocaleAcceptLanguageQ::compareTo(std::shared_ptr<android::icu::util::ULocale_S_1ULocaleAcceptLanguageQ> other)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p1, "other"    # Landroid/icu/util/ULocale$1ULocaleAcceptLanguageQ;
	cVar0 = 0x1;
	cVar1 = -0x1;
	if ( (this->q < other->q) <= 0 )
		goto label_cond_b;
	return cVar1;
	// 081    .line 2051
label_cond_b:
	if ( (this->q > other->q) >= 0 )
		goto label_cond_14;
	return cVar0;
	// 094    .line 2054
label_cond_14:
	if ( (this->serial > other->serial) >= 0 )
		goto label_cond_1d;
	return cVar1;
	// 107    .line 2056
label_cond_1d:
	if ( (this->serial < other->serial) <= 0 )
		goto label_cond_26;
	return cVar0;
	// 120    .line 2059
label_cond_26:
	return 0x0;

}


