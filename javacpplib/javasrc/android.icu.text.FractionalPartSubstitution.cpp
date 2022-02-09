// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\FractionalPartSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.DigitList.h"
#include "android.icu.text.FractionalPartSubstitution.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "android.icu.text.RuleBasedNumberFormat.h"
#include "java.lang.Double.h"
#include "java.lang.Math.h"
#include "java.lang.Number.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParsePosition.h"

// .method constructor <init>(ILandroid/icu/text/NFRuleSet;Ljava/lang/String;)V
android::icu::text::FractionalPartSubstitution::FractionalPartSubstitution(int pos,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> description)
{
	
	bool cVar0;
	
	//    .param p1, "pos"    # I
	//    .param p2, "ruleSet"    # Landroid/icu/text/NFRuleSet;
	//    .param p3, "description"    # Ljava/lang/String;
	cVar0 = 0x1;
	android::icu::text::NFSubstitution::(pos, ruleSet, description);
	if ( description->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>(">>"))) )     
		goto label_cond_1a;
	if ( description->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>(">>>"))) )     
		goto label_cond_1a;
	if ( ruleSet != this->ruleSet )
		goto label_cond_28;
label_cond_1a:
	this->byDigits = cVar0;
	this->useSpaces = ( description->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>(">>>"))) ^ 0x1);
label_goto_27:
	return;
	// 065    .line 1153
label_cond_28:
	this->byDigits = 0x0;
	this->useSpaces = cVar0;
	this->ruleSet->makeIntoFractionRuleSet();
	goto label_goto_27;

}
// .method public calcUpperBound(D)D
double android::icu::text::FractionalPartSubstitution::calcUpperBound(double oldUpperBound)
{
	
	//    .param p1, "oldUpperBound"    # D
	return 0x0;

}
// .method public composeRuleValue(DD)D
double android::icu::text::FractionalPartSubstitution::composeRuleValue(double newRuleValue,double oldRuleValue)
{
	
	//    .param p1, "newRuleValue"    # D
	//    .param p3, "oldRuleValue"    # D
	return (newRuleValue +  oldRuleValue);

}
// .method public doParse(Ljava/lang/String;Ljava/text/ParsePosition;DDZ)Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::text::FractionalPartSubstitution::doParse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,double baseValue,double upperBound,bool lenientParse)
{
	
	std::shared_ptr<java::lang::String> workText;
	std::shared_ptr<java::text::ParsePosition> workPos;
	std::shared_ptr<android::icu::text::DigitList> dl;
	std::shared_ptr<java::lang::Number> n;
	std::shared_ptr<java::lang::Double> cVar0;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "parsePosition"    # Ljava/text/ParsePosition;
	//    .param p3, "baseValue"    # D
	//    .param p5, "upperBound"    # D
	//    .param p7, "lenientParse"    # Z
	if ( this->byDigits )     
		goto label_cond_17;
	return this->doParse(text, parsePosition, baseValue, 0x0, lenientParse);
	// 142    .line 1263
label_cond_17:
	workText = text;
	//    .local v20, "workText":Ljava/lang/String;
	var18 = workPos(0x1);
	//    .local v17, "workPos":Ljava/text/ParsePosition;
	dl = std::make_shared<android::icu::text::DigitList>();
	//    .local v15, "dl":Landroid/icu/text/DigitList;
label_cond_26:
	if ( workText->length() <= 0 )
		goto label_cond_b1;
	if ( !(workPos->getIndex()) )  
		goto label_cond_b1;
	workPos->setIndex(0x0);
	this->ruleSet->parse(workText, workPos, 0x4024000000000000L)->intValue();
	//    .local v6, "digit":I
	if ( !(lenientParse) )  
		goto label_cond_6a;
	if ( workPos->getIndex() )     
		goto label_cond_6a;
	n = this->ruleSet->owner->getDecimalFormat()->parse(workText, workPos);
	//    .local v16, "n":Ljava/lang/Number;
	if ( !(n) )  
		goto label_cond_6a;
	//    .end local v16    # "n":Ljava/lang/Number;
label_cond_6a:
	if ( !(workPos->getIndex()) )  
		goto label_cond_26;
	dl->append(( n->intValue() + 0x30));
	parsePosition->setIndex((parsePosition->getIndex() +  workPos->getIndex()));
	workText = workText->substring(workPos->getIndex());
label_goto_8d:
	if ( workText->length() <= 0 )
		goto label_cond_26;
	if ( workText->charAt(0x0) != 0x20 )
		goto label_cond_26;
	workText = workText->substring(0x1);
	parsePosition->setIndex(( parsePosition->getIndex() + 0x1));
	goto label_goto_8d;
	// 323    .line 1290
	// 324    .end local v6    # "digit":I
label_cond_b1:
	if ( dl->count )     
		goto label_cond_c9;
	//    .local v18, "result":D
label_goto_b7:
	cVar0 = std::make_shared<java::lang::Double>(this->composeRuleValue(result, baseValue));
	return cVar0;
	// 354    .line 1290
	// 355    .end local v18    # "result":D
label_cond_c9:
	//    .restart local v18    # "result":D
	goto label_goto_b7;

}
// .method public doSubstitution(DLjava/lang/StringBuilder;II)V
void android::icu::text::FractionalPartSubstitution::doSubstitution(double number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int position,int recursionCount)
{
	
	char cVar0;
	std::shared_ptr<android::icu::text::DigitList> dl;
	int pad;
	int cVar1;
	
	//    .param p1, "number"    # D
	//    .param p3, "toInsertInto"    # Ljava/lang/StringBuilder;
	//    .param p4, "position"    # I
	//    .param p5, "recursionCount"    # I
	cVar0 = 0x20;
	if ( this->byDigits )     
		goto label_cond_b;
	this->doSubstitution(number, toInsertInto, position, recursionCount);
label_cond_a:
	return;
	// 389    .line 1188
label_cond_b:
	dl = std::make_shared<android::icu::text::DigitList>();
	//    .local v0, "dl":Landroid/icu/text/DigitList;
	dl->set(number, 0x14, 0x1);
	pad = 0x0;
	//    .local v7, "pad":Z
label_goto_17:
	if ( dl->count <= java::lang::Math::max(0x0, dl->decimalAt) )
		goto label_cond_49;
	if ( !(pad) )  
		goto label_cond_47;
	if ( !(this->useSpaces) )  
		goto label_cond_47;
	toInsertInto->insert((this->pos +  position), cVar0);
label_goto_2d:
	cVar1 = ( dl->count + -0x1);
	dl->count = cVar1;
	this->ruleSet->format((long long)(( dl->digits[cVar1] + -0x30)), toInsertInto, (position + this->pos), recursionCount);
	goto label_goto_17;
	// 463    .line 1196
label_cond_47:
	pad = 0x1;
	goto label_goto_2d;
	// 469    .line 1200
label_cond_49:
label_goto_49:
	if ( dl->decimalAt >= 0 )
		goto label_cond_a;
	if ( !(pad) )  
		goto label_cond_6e;
	if ( !(this->useSpaces) )  
		goto label_cond_6e;
	toInsertInto->insert((this->pos +  position), cVar0);
label_goto_59:
	this->ruleSet->format(0x0, toInsertInto, (position + this->pos), recursionCount);
	dl->decimalAt = ( dl->decimalAt + 0x1);
	goto label_goto_49;
	// 515    .line 1204
label_cond_6e:
	pad = 0x1;
	goto label_goto_59;

}
// .method tokenChar()C
char android::icu::text::FractionalPartSubstitution::tokenChar()
{
	
	return 0x3e;

}
// .method public transformNumber(D)D
double android::icu::text::FractionalPartSubstitution::transformNumber(double number)
{
	
	//    .param p1, "number"    # D
	return (number -  java::lang::Math::floor(number));

}
// .method public transformNumber(J)J
long long android::icu::text::FractionalPartSubstitution::transformNumber(long long number)
{
	
	//    .param p1, "number"    # J
	return 0x0;

}


