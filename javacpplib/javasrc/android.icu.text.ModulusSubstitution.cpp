// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ModulusSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.ModulusSubstitution.h"
#include "android.icu.text.NFRule.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "java.lang.Double.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParsePosition.h"

// .method constructor <init>(ILandroid/icu/text/NFRule;Landroid/icu/text/NFRule;Landroid/icu/text/NFRuleSet;Ljava/lang/String;)V
android::icu::text::ModulusSubstitution::ModulusSubstitution(int pos,std::shared_ptr<android::icu::text::NFRule> rule,std::shared_ptr<android::icu::text::NFRule> rulePredecessor,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> description)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "pos"    # I
	//    .param p2, "rule"    # Landroid/icu/text/NFRule;
	//    .param p3, "rulePredecessor"    # Landroid/icu/text/NFRule;
	//    .param p4, "ruleSet"    # Landroid/icu/text/NFRuleSet;
	//    .param p5, "description"    # Ljava/lang/String;
	android::icu::text::NFSubstitution::(pos, ruleSet, description);
	this->divisor = rule->getDivisor();
	if ( (this->divisor > 0x0) )     
		goto label_cond_4c;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalStateException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Substitution with bad divisor (")))->append(this->divisor)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") ")))->append(description->substring(0x0, pos))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" | ")))->append(description->substring(pos))->toString());
	// throw
	throw cVar0;
	// 102    .line 825
label_cond_4c:
	if ( !(description->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>(">>>")))) )  
		goto label_cond_58;
	this->ruleToUse = rulePredecessor;
label_goto_57:
	return;
	// 119    .line 828
label_cond_58:
	this->ruleToUse = 0x0;
	goto label_goto_57;

}
// .method public calcUpperBound(D)D
double android::icu::text::ModulusSubstitution::calcUpperBound(double oldUpperBound)
{
	
	//    .param p1, "oldUpperBound"    # D
	return (double)(this->divisor);

}
// .method public composeRuleValue(DD)D
double android::icu::text::ModulusSubstitution::composeRuleValue(double newRuleValue,double oldRuleValue)
{
	
	//    .param p1, "newRuleValue"    # D
	//    .param p3, "oldRuleValue"    # D
	return ( (oldRuleValue -  (oldRuleValue %  (double)(this->divisor))) + newRuleValue);

}
// .method public doParse(Ljava/lang/String;Ljava/text/ParsePosition;DDZ)Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::text::ModulusSubstitution::doParse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,double baseValue,double upperBound,bool lenientParse)
{
	
	std::shared_ptr<java::lang::Number> tempResult;
	double result;
	std::shared_ptr<java::lang::Double> cVar0;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "parsePosition"    # Ljava/text/ParsePosition;
	//    .param p3, "baseValue"    # D
	//    .param p5, "upperBound"    # D
	//    .param p7, "lenientParse"    # Z
	if ( this->ruleToUse )     
		goto label_cond_9;
	return this->doParse(text, parsePosition, baseValue, upperBound, lenientParse);
	// 184    .line 961
label_cond_9:
	tempResult = this->ruleToUse->doParse(text, parsePosition, 0x0, upperBound);
	//    .local v8, "tempResult":Ljava/lang/Number;
	if ( !(parsePosition->getIndex()) )  
		goto label_cond_33;
	//    .local v6, "result":D
	result = this->composeRuleValue(tempResult->doubleValue(), baseValue);
	if ( (result < (double)((long long)(result))) )     
		goto label_cond_2d;
	return java::lang::Long::valueOf((long long)(result));
	// 237    .line 970
label_cond_2d:
	cVar0 = std::make_shared<java::lang::Double>(result);
	return cVar0;
	// 245    .line 973
	// 246    .end local v6    # "result":D
label_cond_33:
	return tempResult;

}
// .method public doSubstitution(DLjava/lang/StringBuilder;II)V
void android::icu::text::ModulusSubstitution::doSubstitution(double number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int position,int recursionCount)
{
	
	//    .param p1, "number"    # D
	//    .param p3, "toInsertInto"    # Ljava/lang/StringBuilder;
	//    .param p4, "position"    # I
	//    .param p5, "recursionCount"    # I
	if ( this->ruleToUse )     
		goto label_cond_8;
	this->doSubstitution(number, toInsertInto, position, recursionCount);
label_goto_7:
	return;
	// 271    .line 911
label_cond_8:
	//    .local v2, "numberToFormat":D
	this->ruleToUse->doFormat(this->transformNumber(number), toInsertInto, (position + this->pos), recursionCount);
	goto label_goto_7;

}
// .method public doSubstitution(JLjava/lang/StringBuilder;II)V
void android::icu::text::ModulusSubstitution::doSubstitution(long long number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int position,int recursionCount)
{
	
	//    .param p1, "number"    # J
	//    .param p3, "toInsertInto"    # Ljava/lang/StringBuilder;
	//    .param p4, "position"    # I
	//    .param p5, "recursionCount"    # I
	if ( this->ruleToUse )     
		goto label_cond_8;
	this->doSubstitution(number, toInsertInto, position, recursionCount);
label_goto_7:
	return;
	// 314    .line 888
label_cond_8:
	//    .local v2, "numberToFormat":J
	this->ruleToUse->doFormat(this->transformNumber(number), toInsertInto, (position + this->pos), recursionCount);
	goto label_goto_7;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::ModulusSubstitution::equals(std::shared_ptr<java::lang::Object> that)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::ModulusSubstitution> that2;
	
	//    .param p1, "that"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(this->equals(that)) )  
		goto label_cond_14;
	that2 = that;
	that2->checkCast("android::icu::text::ModulusSubstitution");
	//    .local v0, "that2":Landroid/icu/text/ModulusSubstitution;
	if ( (this->divisor > that2->divisor) )     
		goto label_cond_13;
	cVar1 = 0x1;
label_cond_13:
	return cVar1;
	// 371    .line 862
	// 372    .end local v0    # "that2":Landroid/icu/text/ModulusSubstitution;
label_cond_14:
	return cVar1;

}
// .method public isModulusSubstitution()Z
bool android::icu::text::ModulusSubstitution::isModulusSubstitution()
{
	
	return 0x1;

}
// .method public setDivisor(IS)V
void android::icu::text::ModulusSubstitution::setDivisor(int radix,short exponent)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .param p1, "radix"    # I
	//    .param p2, "exponent"    # S
	this->divisor = android::icu::text::NFRule::power((long long)(radix), exponent);
	if ( (this->divisor > 0x0) )     
		goto label_cond_18;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Substitution with bad divisor")));
	// throw
	throw cVar0;
	// 420    .line 844
label_cond_18:
	return;

}
// .method tokenChar()C
char android::icu::text::ModulusSubstitution::tokenChar()
{
	
	return 0x3e;

}
// .method public transformNumber(D)D
double android::icu::text::ModulusSubstitution::transformNumber(double number)
{
	
	//    .param p1, "number"    # D
	return java::lang::Math::floor((number %  (double)(this->divisor)));

}
// .method public transformNumber(J)J
long long android::icu::text::ModulusSubstitution::transformNumber(long long number)
{
	
	//    .param p1, "number"    # J
	return (number % this->divisor);

}


