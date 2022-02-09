// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$AndConstraint.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_AndConstraint.h"
#include "android.icu.text.PluralRules_S_BinaryConstraint.h"
#include "android.icu.text.PluralRules_S_Constraint.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_SampleType.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::PluralRules_S_AndConstraint::serialVersionUID = 0x6bc9ed26013a36e3L;
// .method constructor <init>(Landroid/icu/text/PluralRules$Constraint;Landroid/icu/text/PluralRules$Constraint;)V
android::icu::text::PluralRules_S_AndConstraint::PluralRules_S_AndConstraint(std::shared_ptr<android::icu::text::PluralRules_S_Constraint> a,std::shared_ptr<android::icu::text::PluralRules_S_Constraint> b)
{
	
	//    .param p1, "a"    # Landroid/icu/text/PluralRules$Constraint;
	//    .param p2, "b"    # Landroid/icu/text/PluralRules$Constraint;
	android::icu::text::PluralRules_S_BinaryConstraint::(a, b);
	return;

}
// .method public isFulfilled(Landroid/icu/text/PluralRules$FixedDecimal;)Z
bool android::icu::text::PluralRules_S_AndConstraint::isFulfilled(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> n)
{
	
	bool cVar0;
	
	//    .param p1, "n"    # Landroid/icu/text/PluralRules$FixedDecimal;
	if ( !(this->a->isFulfilled(n)) )  
		goto label_cond_f;
	cVar0 = this->b->isFulfilled(n);
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method public isLimited(Landroid/icu/text/PluralRules$SampleType;)Z
bool android::icu::text::PluralRules_S_AndConstraint::isLimited(std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType)
{
	
	bool cVar0;
	
	//    .param p1, "sampleType"    # Landroid/icu/text/PluralRules$SampleType;
	if ( this->a->isLimited(sampleType) )     
		goto label_cond_f;
	cVar0 = this->b->isLimited(sampleType);
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x1;
	goto label_goto_e;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules_S_AndConstraint::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->a->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" and ")))->append(this->b->toString())->toString();

}


