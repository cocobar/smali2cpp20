// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SameValueSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "android.icu.text.SameValueSubstitution.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"

// .method constructor <init>(ILandroid/icu/text/NFRuleSet;Ljava/lang/String;)V
android::icu::text::SameValueSubstitution::SameValueSubstitution(int pos,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> description)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "pos"    # I
	//    .param p2, "ruleSet"    # Landroid/icu/text/NFRuleSet;
	//    .param p3, "description"    # Ljava/lang/String;
	android::icu::text::NFSubstitution::(pos, ruleSet, description);
	if ( !(description->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("==")))) )  
		goto label_cond_15;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("== is not a legal token")));
	// throw
	throw cVar0;
	// 035    .line 556
label_cond_15:
	return;

}
// .method public calcUpperBound(D)D
double android::icu::text::SameValueSubstitution::calcUpperBound(double oldUpperBound)
{
	
	//    .param p1, "oldUpperBound"    # D
	return oldUpperBound;

}
// .method public composeRuleValue(DD)D
double android::icu::text::SameValueSubstitution::composeRuleValue(double newRuleValue,double oldRuleValue)
{
	
	//    .param p1, "newRuleValue"    # D
	//    .param p3, "oldRuleValue"    # D
	return newRuleValue;

}
// .method tokenChar()C
char android::icu::text::SameValueSubstitution::tokenChar()
{
	
	return 0x3d;

}
// .method public transformNumber(D)D
double android::icu::text::SameValueSubstitution::transformNumber(double number)
{
	
	//    .param p1, "number"    # D
	return number;

}
// .method public transformNumber(J)J
long long android::icu::text::SameValueSubstitution::transformNumber(long long number)
{
	
	//    .param p1, "number"    # J
	return number;

}


