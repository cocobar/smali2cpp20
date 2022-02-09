// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NumeratorSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "android.icu.text.NumeratorSubstitution.h"
#include "java.lang.Double.h"
#include "java.lang.Math.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParsePosition.h"

// .method constructor <init>(IDLandroid/icu/text/NFRuleSet;Ljava/lang/String;)V
android::icu::text::NumeratorSubstitution::NumeratorSubstitution(int pos,double denominator,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> description)
{
	
	//    .param p1, "pos"    # I
	//    .param p2, "denominator"    # D
	//    .param p4, "ruleSet"    # Landroid/icu/text/NFRuleSet;
	//    .param p5, "description"    # Ljava/lang/String;
	android::icu::text::NFSubstitution::(pos, ruleSet, android::icu::text::NumeratorSubstitution::fixdesc(description));
	this->denominator = denominator;
	this->withZeros = description->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("<<")));
	return;

}
// .method static fixdesc(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NumeratorSubstitution::fixdesc(std::shared_ptr<java::lang::String> cVar0)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "description"    # Ljava/lang/String;
	if ( !(cVar0->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("<<")))) )  
		goto label_cond_14;
	cVar0 = cVar0->substring(0x0, ( cVar0->length() + -0x1));
	//    .end local p0    # "description":Ljava/lang/String;
label_cond_14:
	return cVar0;

}
// .method public calcUpperBound(D)D
double android::icu::text::NumeratorSubstitution::calcUpperBound(double oldUpperBound)
{
	
	//    .param p1, "oldUpperBound"    # D
	return this->denominator;

}
// .method public composeRuleValue(DD)D
double android::icu::text::NumeratorSubstitution::composeRuleValue(double newRuleValue,double oldRuleValue)
{
	
	//    .param p1, "newRuleValue"    # D
	//    .param p3, "oldRuleValue"    # D
	return (newRuleValue /  oldRuleValue);

}
// .method public doParse(Ljava/lang/String;Ljava/text/ParsePosition;DDZ)Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::text::NumeratorSubstitution::doParse(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<java::text::ParsePosition> parsePosition,double baseValue,double upperBound,bool lenientParse)
{
	
	int zeroCount;
	std::shared_ptr<java::lang::String> workText;
	std::shared_ptr<java::text::ParsePosition> workPos;
	std::shared_ptr<java::lang::Object> cVar0;
	double cVar1;
	std::shared_ptr<java::lang::Number> result;
	auto n;
	auto d;
	long long d;
	std::shared_ptr<java::lang::Double> result;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "parsePosition"    # Ljava/text/ParsePosition;
	//    .param p3, "baseValue"    # D
	//    .param p5, "upperBound"    # D
	//    .param p7, "lenientParse"    # Z
	zeroCount = 0x0;
	//    .local v17, "zeroCount":I
	if ( !(this->withZeros) )  
		goto label_cond_45;
	workText = cVar0;
	//    .local v16, "workText":Ljava/lang/String;
	workPos = std::make_shared<java::text::ParsePosition>(0x1);
	//    .local v11, "workPos":Ljava/text/ParsePosition;
label_cond_10:
	if ( workText->length() <= 0 )
		goto label_cond_35;
	if ( !(workPos->getIndex()) )  
		goto label_cond_35;
	workPos->setIndex(0x0);
	this->ruleSet->parse(workText, workPos, 0x3ff0000000000000L)->intValue();
	if ( workPos->getIndex() )     
		goto label_cond_6e;
label_cond_35:
	cVar0 = cVar0->substring(parsePosition->getIndex());
	parsePosition->setIndex(0x0);
	//    .end local v11    # "workPos":Ljava/text/ParsePosition;
	//    .end local v16    # "workText":Ljava/lang/String;
label_cond_45:
	if ( !(this->withZeros) )  
		goto label_cond_ac;
	cVar1 = 0x3ff0000000000000L;
label_goto_4d:
	result = this->doParse(cVar0, parsePosition, cVar1, upperBound, 0x0);
	//    .local v2, "result":Ljava/lang/Number;
	if ( !(this->withZeros) )  
		goto label_cond_bf;
	n = result->longValue();
	//    .local v14, "n":J
	d = 0x1;
	//    .local v12, "d":J
label_goto_66:
	if ( (d > n) > 0 ) 
		goto label_cond_af;
	d = (d *  0xa);
	goto label_goto_66;
	// 252    .line 1581
	// 253    .end local v2    # "result":Ljava/lang/Number;
	// 254    .end local v12    # "d":J
	// 255    .end local v14    # "n":J
	// 256    .restart local v11    # "workPos":Ljava/text/ParsePosition;
	// 257    .restart local v16    # "workText":Ljava/lang/String;
label_cond_6e:
	zeroCount = ( zeroCount + 0x1);
	parsePosition->setIndex((parsePosition->getIndex() +  workPos->getIndex()));
	workText = workText->substring(workPos->getIndex());
label_goto_88:
	if ( workText->length() <= 0 )
		goto label_cond_10;
	if ( workText->charAt(0x0) != 0x20 )
		goto label_cond_10;
	workText = workText->substring(0x1);
	parsePosition->setIndex(( parsePosition->getIndex() + 0x1));
	goto label_goto_88;
	// 329    .end local v11    # "workPos":Ljava/text/ParsePosition;
	// 330    .end local v16    # "workText":Ljava/lang/String;
label_cond_ac:
	cVar1 = baseValue;
	goto label_goto_4d;
	// 337    .line 1608
	// 338    .restart local v2    # "result":Ljava/lang/Number;
	// 339    .restart local v12    # "d":J
	// 340    .restart local v14    # "n":J
label_cond_af:
label_goto_af:
	if ( zeroCount <= 0 )
		goto label_cond_b7;
	d = (d *  0xa);
	zeroCount = ( zeroCount + -0x1);
	goto label_goto_af;
	// 355    .line 1613
label_cond_b7:
	//    .end local v2    # "result":Ljava/lang/Number;
	result = std::make_shared<java::lang::Double>(( (double)(n) / (double)(d)));
	//    .end local v12    # "d":J
	//    .end local v14    # "n":J
	//    .restart local v2    # "result":Ljava/lang/Number;
label_cond_bf:
	return result;

}
// .method public doSubstitution(DLjava/lang/StringBuilder;II)V
void android::icu::text::NumeratorSubstitution::doSubstitution(double number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int cVar0,int recursionCount)
{
	
	double numberToFormat;
	long long nf;
	int cVar0;
	
	//    .param p1, "number"    # D
	//    .param p3, "toInsertInto"    # Ljava/lang/StringBuilder;
	//    .param p4, "position"    # I
	//    .param p5, "recursionCount"    # I
	numberToFormat = this->transformNumber(number);
	//    .local v12, "numberToFormat":D
	if ( !(this->withZeros) )  
		goto label_cond_3d;
	if ( !(this->ruleSet) )  
		goto label_cond_3d;
	//    .local v10, "nf":J
	//    .local v2, "len":I
label_goto_11:
	nf = (nf *  0xa);
	if ( ((double)(nf) > this->denominator) >= 0 )
		goto label_cond_36;
	toInsertInto->insert((this->pos + cVar0), 0x20);
	this->ruleSet->format(0x0, toInsertInto, (cVar0 + this->pos), recursionCount);
	goto label_goto_11;
	// 451    .line 1512
label_cond_36:
	cVar0 = (cVar0 + (toInsertInto->length() -  toInsertInto->length()));
	//    .end local v2    # "len":I
	//    .end local v10    # "nf":J
label_cond_3d:
	if ( (numberToFormat < java::lang::Math::floor(numberToFormat)) )     
		goto label_cond_58;
	if ( !(this->ruleSet) )  
		goto label_cond_58;
	this->ruleSet->format((long long)(numberToFormat), toInsertInto, (cVar0 + this->pos), recursionCount);
label_goto_57:
	return;
	// 496    .line 1524
label_cond_58:
	if ( !(this->ruleSet) )  
		goto label_cond_6b;
	this->ruleSet->format(numberToFormat, toInsertInto, (cVar0 + this->pos), recursionCount);
	goto label_goto_57;
	// 519    .line 1527
label_cond_6b:
	toInsertInto->insert((this->pos + cVar0), this->numberFormat->format(numberToFormat));
	goto label_goto_57;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::NumeratorSubstitution::equals(std::shared_ptr<java::lang::Object> that)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::NumeratorSubstitution> that2;
	
	//    .param p1, "that"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(this->equals(that)) )  
		goto label_cond_1a;
	that2 = that;
	that2->checkCast("android::icu::text::NumeratorSubstitution");
	//    .local v0, "that2":Landroid/icu/text/NumeratorSubstitution;
	if ( (this->denominator < that2->denominator) )     
		goto label_cond_19;
	if ( this->withZeros != that2->withZeros )
		goto label_cond_19;
	cVar1 = 0x1;
label_cond_19:
	return cVar1;
	// 578    .line 1480
	// 579    .end local v0    # "that2":Landroid/icu/text/NumeratorSubstitution;
label_cond_1a:
	return cVar1;

}
// .method tokenChar()C
char android::icu::text::NumeratorSubstitution::tokenChar()
{
	
	return 0x3c;

}
// .method public transformNumber(D)D
double android::icu::text::NumeratorSubstitution::transformNumber(double number)
{
	
	//    .param p1, "number"    # D
	return (double)(java::lang::Math::round(( this->denominator * number)));

}
// .method public transformNumber(J)J
long long android::icu::text::NumeratorSubstitution::transformNumber(long long number)
{
	
	//    .param p1, "number"    # J
	return java::lang::Math::round(( (double)(number) * this->denominator));

}


