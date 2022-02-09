// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$FixedDecimalRange.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_FixedDecimalRange.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(Landroid/icu/text/PluralRules$FixedDecimal;Landroid/icu/text/PluralRules$FixedDecimal;)V
android::icu::text::PluralRules_S_FixedDecimalRange::PluralRules_S_FixedDecimalRange(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> start,std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> end)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "start"    # Landroid/icu/text/PluralRules$FixedDecimal;
	//    .param p2, "end"    # Landroid/icu/text/PluralRules$FixedDecimal;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 038    .end annotation
	// 042    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( start->visibleDecimalDigitCount == end->visibleDecimalDigitCount )
		goto label_cond_2e;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ranges must have the same number of visible decimals: ")))->append(start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("~")))->append(end)->toString());
	// throw
	throw cVar0;
	// 086    .line 972
label_cond_2e:
	this->start = start;
	this->end = end;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules_S_FixedDecimalRange::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 102    .end annotation
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( this->end != this->start )
		goto label_cond_1d;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_14:
	return cVar0->append(this->start)->append(cVar1)->toString();
label_cond_1d:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("~")))->append(this->end)->toString();
	goto label_goto_14;

}


