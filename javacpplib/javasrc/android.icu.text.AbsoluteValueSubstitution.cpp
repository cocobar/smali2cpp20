// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\AbsoluteValueSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.AbsoluteValueSubstitution.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"

// .method constructor <init>(ILandroid/icu/text/NFRuleSet;Ljava/lang/String;)V
android::icu::text::AbsoluteValueSubstitution::AbsoluteValueSubstitution(int pos,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> description)
{
	
	//    .param p1, "pos"    # I
	//    .param p2, "ruleSet"    # Landroid/icu/text/NFRuleSet;
	//    .param p3, "description"    # Ljava/lang/String;
	android::icu::text::NFSubstitution::(pos, ruleSet, description);
	return;

}
// .method public calcUpperBound(D)D
double android::icu::text::AbsoluteValueSubstitution::calcUpperBound(double oldUpperBound)
{
	
	//    .param p1, "oldUpperBound"    # D
	return 0x7fefffffffffffffL;

}
// .method public composeRuleValue(DD)D
double android::icu::text::AbsoluteValueSubstitution::composeRuleValue(double newRuleValue,double oldRuleValue)
{
	
	//    .param p1, "newRuleValue"    # D
	//    .param p3, "oldRuleValue"    # D
	return (0.0 - newRuleValue);

}
// .method tokenChar()C
char android::icu::text::AbsoluteValueSubstitution::tokenChar()
{
	
	return 0x3e;

}
// .method public transformNumber(D)D
double android::icu::text::AbsoluteValueSubstitution::transformNumber(double number)
{
	
	//    .param p1, "number"    # D
	return java::lang::Math::abs(number);

}
// .method public transformNumber(J)J
long long android::icu::text::AbsoluteValueSubstitution::transformNumber(long long number)
{
	
	//    .param p1, "number"    # J
	return java::lang::Math::abs(number);

}


