// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$Rule.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_AndConstraint.h"
#include "android.icu.text.PluralRules_S_Constraint.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_FixedDecimalSamples.h"
#include "android.icu.text.PluralRules_S_OrConstraint.h"
#include "android.icu.text.PluralRules_S_Rule.h"
#include "android.icu.text.PluralRules_S_SampleType.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::PluralRules_S_Rule::serialVersionUID = 0x1L;
// .method static synthetic -get0(Landroid/icu/text/PluralRules$Rule;)Landroid/icu/text/PluralRules$FixedDecimalSamples;
std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> android::icu::text::PluralRules_S_Rule::_get0(std::shared_ptr<android::icu::text::PluralRules_S_Rule> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/PluralRules$Rule;
	return _this->decimalSamples;

}
// .method static synthetic -get1(Landroid/icu/text/PluralRules$Rule;)Landroid/icu/text/PluralRules$FixedDecimalSamples;
std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> android::icu::text::PluralRules_S_Rule::_get1(std::shared_ptr<android::icu::text::PluralRules_S_Rule> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/PluralRules$Rule;
	return _this->integerSamples;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/PluralRules$Constraint;Landroid/icu/text/PluralRules$FixedDecimalSamples;Landroid/icu/text/PluralRules$FixedDecimalSamples;)V
android::icu::text::PluralRules_S_Rule::PluralRules_S_Rule(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_Constraint> constraint,std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> integerSamples,std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> decimalSamples)
{
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "constraint"    # Landroid/icu/text/PluralRules$Constraint;
	//    .param p3, "integerSamples"    # Landroid/icu/text/PluralRules$FixedDecimalSamples;
	//    .param p4, "decimalSamples"    # Landroid/icu/text/PluralRules$FixedDecimalSamples;
	// 064    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->keyword = keyword;
	this->constraint = constraint;
	this->integerSamples = integerSamples;
	this->decimalSamples = decimalSamples;
	return;

}
// .method public and(Landroid/icu/text/PluralRules$Constraint;)Landroid/icu/text/PluralRules$Rule;
std::shared_ptr<android::icu::text::PluralRules_S_Rule> android::icu::text::PluralRules_S_Rule::and(std::shared_ptr<android::icu::text::PluralRules_S_Constraint> c)
{
	
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> cVar0;
	std::shared_ptr<android::icu::text::PluralRules_S_AndConstraint> cVar1;
	
	//    .param p1, "c"    # Landroid/icu/text/PluralRules$Constraint;
	cVar1 = std::make_shared<android::icu::text::PluralRules_S_AndConstraint>(this->constraint, c);
	cVar0 = std::make_shared<android::icu::text::PluralRules_S_Rule>(this->keyword, cVar1, this->integerSamples, this->decimalSamples);
	return cVar0;

}
// .method public appliesTo(Landroid/icu/text/PluralRules$FixedDecimal;)Z
bool android::icu::text::PluralRules_S_Rule::appliesTo(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> n)
{
	
	//    .param p1, "n"    # Landroid/icu/text/PluralRules$FixedDecimal;
	return this->constraint->isFulfilled(n);

}
// .method public getConstraint()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules_S_Rule::getConstraint()
{
	
	return this->constraint->toString();

}
// .method public getKeyword()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules_S_Rule::getKeyword()
{
	
	return this->keyword;

}
// .method public hashCode()I
int android::icu::text::PluralRules_S_Rule::hashCode()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 151    .end annotation
	return (this->keyword->hashCode() ^  this->constraint->hashCode());

}
// .method public isLimited(Landroid/icu/text/PluralRules$SampleType;)Z
bool android::icu::text::PluralRules_S_Rule::isLimited(std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType)
{
	
	//    .param p1, "sampleType"    # Landroid/icu/text/PluralRules$SampleType;
	return this->constraint->isLimited(sampleType);

}
// .method public or(Landroid/icu/text/PluralRules$Constraint;)Landroid/icu/text/PluralRules$Rule;
std::shared_ptr<android::icu::text::PluralRules_S_Rule> android::icu::text::PluralRules_S_Rule::or(std::shared_ptr<android::icu::text::PluralRules_S_Constraint> c)
{
	
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> cVar0;
	std::shared_ptr<android::icu::text::PluralRules_S_OrConstraint> cVar1;
	
	//    .param p1, "c"    # Landroid/icu/text/PluralRules$Constraint;
	cVar1 = std::make_shared<android::icu::text::PluralRules_S_OrConstraint>(this->constraint, c);
	cVar0 = std::make_shared<android::icu::text::PluralRules_S_Rule>(this->keyword, cVar1, this->integerSamples, this->decimalSamples);
	return cVar0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules_S_Rule::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( this->integerSamples )     
		goto label_cond_37;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_23:
	if ( this->decimalSamples )     
		goto label_cond_52;
	cVar2 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_2e:
	return cVar0->append(this->keyword)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(": ")))->append(this->constraint->toString())->append(cVar1)->append(cVar2)->toString();
	// 275    .line 1705
label_cond_37:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(this->integerSamples->toString())->toString();
	goto label_goto_23;
	// 303    .line 1706
label_cond_52:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(this->decimalSamples->toString())->toString();
	goto label_goto_2e;

}


