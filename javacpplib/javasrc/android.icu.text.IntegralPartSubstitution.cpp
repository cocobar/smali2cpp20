// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\IntegralPartSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.IntegralPartSubstitution.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"

// .method constructor <init>(ILandroid/icu/text/NFRuleSet;Ljava/lang/String;)V
android::icu::text::IntegralPartSubstitution::IntegralPartSubstitution(int pos,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> description)
{
	
	//    .param p1, "pos"    # I
	//    .param p2, "ruleSet"    # Landroid/icu/text/NFRuleSet;
	//    .param p3, "description"    # Ljava/lang/String;
	android::icu::text::NFSubstitution::(pos, ruleSet, description);
	return;

}
// .method public calcUpperBound(D)D
double android::icu::text::IntegralPartSubstitution::calcUpperBound(double oldUpperBound)
{
	
	//    .param p1, "oldUpperBound"    # D
	return 0x7fefffffffffffffL;

}
// .method public composeRuleValue(DD)D
double android::icu::text::IntegralPartSubstitution::composeRuleValue(double newRuleValue,double oldRuleValue)
{
	
	//    .param p1, "newRuleValue"    # D
	//    .param p3, "oldRuleValue"    # D
	return (newRuleValue +  oldRuleValue);

}
// .method tokenChar()C
char android::icu::text::IntegralPartSubstitution::tokenChar()
{
	
	return 0x3c;

}
// .method public transformNumber(D)D
double android::icu::text::IntegralPartSubstitution::transformNumber(double number)
{
	
	//    .param p1, "number"    # D
	return java::lang::Math::floor(number);

}
// .method public transformNumber(J)J
long long android::icu::text::IntegralPartSubstitution::transformNumber(long long number)
{
	
	//    .param p1, "number"    # J
	return number;

}


