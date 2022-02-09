// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MultiplierSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.MultiplierSubstitution.h"
#include "android.icu.text.NFRule.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method constructor <init>(ILandroid/icu/text/NFRule;Landroid/icu/text/NFRuleSet;Ljava/lang/String;)V
android::icu::text::MultiplierSubstitution::MultiplierSubstitution(int pos,std::shared_ptr<android::icu::text::NFRule> rule,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> description)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "pos"    # I
	//    .param p2, "rule"    # Landroid/icu/text/NFRule;
	//    .param p3, "ruleSet"    # Landroid/icu/text/NFRuleSet;
	//    .param p4, "description"    # Ljava/lang/String;
	android::icu::text::NFSubstitution::(pos, ruleSet, description);
	this->divisor = rule->getDivisor();
	if ( (this->divisor > 0x0) )     
		goto label_cond_3f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalStateException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Substitution with divisor 0 ")))->append(description->substring(0x0, pos))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" | ")))->append(description->substring(pos))->toString());
	// throw
	throw cVar0;
	// 087    .line 664
label_cond_3f:
	return;

}
// .method public calcUpperBound(D)D
double android::icu::text::MultiplierSubstitution::calcUpperBound(double oldUpperBound)
{
	
	//    .param p1, "oldUpperBound"    # D
	return (double)(this->divisor);

}
// .method public composeRuleValue(DD)D
double android::icu::text::MultiplierSubstitution::composeRuleValue(double newRuleValue,double oldRuleValue)
{
	
	//    .param p1, "newRuleValue"    # D
	//    .param p3, "oldRuleValue"    # D
	return ( (double)(this->divisor) * newRuleValue);

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::MultiplierSubstitution::equals(std::shared_ptr<java::lang::Object> that)
{
	
	bool cVar1;
	
	//    .param p1, "that"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(this->equals(that)) )  
		goto label_cond_12;
	that->checkCast("android::icu::text::MultiplierSubstitution");
	//    .end local p1    # "that":Ljava/lang/Object;
	if ( (this->divisor > that->divisor) )     
		goto label_cond_12;
	cVar1 = 0x1;
label_cond_12:
	return cVar1;

}
// .method public setDivisor(IS)V
void android::icu::text::MultiplierSubstitution::setDivisor(int radix,short exponent)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .param p1, "radix"    # I
	//    .param p2, "exponent"    # S
	this->divisor = android::icu::text::NFRule::power((long long)(radix), exponent);
	if ( (this->divisor > 0x0) )     
		goto label_cond_18;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Substitution with divisor 0")));
	// throw
	throw cVar0;
	// 187    .line 677
label_cond_18:
	return;

}
// .method tokenChar()C
char android::icu::text::MultiplierSubstitution::tokenChar()
{
	
	return 0x3c;

}
// .method public transformNumber(D)D
double android::icu::text::MultiplierSubstitution::transformNumber(double number)
{
	
	//    .param p1, "number"    # D
	if ( this->ruleSet )     
		goto label_cond_a;
	return (number /  (double)(this->divisor));
	// 221    .line 718
label_cond_a:
	return java::lang::Math::floor((number /  (double)(this->divisor)));

}
// .method public transformNumber(J)J
long long android::icu::text::MultiplierSubstitution::transformNumber(long long number)
{
	
	//    .param p1, "number"    # J
	return (long long)(java::lang::Math::floor((double)((number / this->divisor))));

}


