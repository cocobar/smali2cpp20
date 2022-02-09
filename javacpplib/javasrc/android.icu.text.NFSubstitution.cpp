// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NFSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.AbsoluteValueSubstitution.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.FractionalPartSubstitution.h"
#include "android.icu.text.IntegralPartSubstitution.h"
#include "android.icu.text.ModulusSubstitution.h"
#include "android.icu.text.MultiplierSubstitution.h"
#include "android.icu.text.NFRule.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "android.icu.text.NumeratorSubstitution.h"
#include "android.icu.text.RuleBasedNumberFormat.h"
#include "android.icu.text.SameValueSubstitution.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Class.h"
#include "java.lang.Double.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParsePosition.h"

static android::icu::text::NFSubstitution::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::text::NFSubstitution::static_cinit()
{
	
	android::icu::text::NFSubstitution::_assertionsDisabled = ( android::icu::text::NFSubstitution()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>(ILandroid/icu/text/NFRuleSet;Ljava/lang/String;)V
android::icu::text::NFSubstitution::NFSubstitution(int pos,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> cVar2)
{
	
	std::shared_ptr<android::icu::text::DecimalFormat> cVar0;
	int cVar1;
	int descriptionLen;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<android::icu::text::DecimalFormat> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	
	//    .param p1, "pos"    # I
	//    .param p2, "ruleSet"    # Landroid/icu/text/NFRuleSet;
	//    .param p3, "description"    # Ljava/lang/String;
	cVar0 = 0x0;
	cVar1 = 0x0;
	// 049    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->pos = pos;
	descriptionLen = cVar2->length();
	//    .local v0, "descriptionLen":I
	if ( descriptionLen <  0x2 )
		goto label_cond_2c;
	if ( cVar2->charAt(cVar1) != cVar2->charAt(( descriptionLen + -0x1)) )
		goto label_cond_2c;
	cVar2 = cVar2->substring(0x1, ( descriptionLen + -0x1));
label_cond_21:
	if ( cVar2->length() )     
		goto label_cond_37;
	this->ruleSet = ruleSet;
	this->numberFormat = cVar0;
label_goto_2b:
	return;
	// 104    .line 174
label_cond_2c:
	if ( !(descriptionLen) )  
		goto label_cond_21;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal substitution syntax")));
	// throw
	throw cVar3;
	// 117    .line 185
label_cond_37:
	if ( cVar2->charAt(cVar1) != 0x25 )
		goto label_cond_4a;
	this->ruleSet = ruleSet->owner->findRuleSet(cVar2);
	this->numberFormat = cVar0;
	goto label_goto_2b;
	// 141    .line 192
label_cond_4a:
	if ( cVar2->charAt(cVar1) == 0x23 )
		goto label_cond_5a;
	if ( cVar2->charAt(cVar1) != 0x30 )
		goto label_cond_70;
label_cond_5a:
	this->ruleSet = cVar0;
	cVar4 = ruleSet->owner->getDecimalFormat()->clone();
	cVar4->checkCast("android::icu::text::DecimalFormat");
	this->numberFormat = cVar4;
	this->numberFormat->applyPattern(cVar2);
	goto label_goto_2b;
	// 185    .line 201
label_cond_70:
	if ( cVar2->charAt(cVar1) != 0x3e )
		goto label_cond_7d;
	this->ruleSet = ruleSet;
	this->numberFormat = cVar0;
	goto label_goto_2b;
	// 203    .line 212
label_cond_7d:
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal substitution syntax")));
	// throw
	throw cVar5;

}
// .method public static makeSubstitution(ILandroid/icu/text/NFRule;Landroid/icu/text/NFRule;Landroid/icu/text/NFRuleSet;Landroid/icu/text/RuleBasedNumberFormat;Ljava/lang/String;)Landroid/icu/text/NFSubstitution;
std::shared_ptr<android::icu::text::NFSubstitution> android::icu::text::NFSubstitution::makeSubstitution(int pos,std::shared_ptr<android::icu::text::NFRule> rule,std::shared_ptr<android::icu::text::NFRule> rulePredecessor,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<android::icu::text::RuleBasedNumberFormat> formatter,std::shared_ptr<java::lang::String> description)
{
	
	long long cVar0;
	long long cVar1;
	long long cVar2;
	long long cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<android::icu::text::IntegralPartSubstitution> cVar6;
	std::shared_ptr<android::icu::text::NumeratorSubstitution> cVar7;
	std::shared_ptr<android::icu::text::MultiplierSubstitution> cVar8;
	std::shared_ptr<android::icu::text::SameValueSubstitution> cVar13;
	std::shared_ptr<android::icu::text::AbsoluteValueSubstitution> cVar9;
	std::shared_ptr<android::icu::text::FractionalPartSubstitution> cVar10;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar11;
	std::shared_ptr<android::icu::text::ModulusSubstitution> cVar12;
	
	//    .param p0, "pos"    # I
	//    .param p1, "rule"    # Landroid/icu/text/NFRule;
	//    .param p2, "rulePredecessor"    # Landroid/icu/text/NFRule;
	//    .param p3, "ruleSet"    # Landroid/icu/text/NFRuleSet;
	//    .param p4, "formatter"    # Landroid/icu/text/RuleBasedNumberFormat;
	//    .param p5, "description"    # Ljava/lang/String;
	cVar0 = -0x1;
	cVar1 = -0x2;
	cVar2 = -0x3;
	cVar3 = -0x4;
	if ( description->length() )     
		goto label_cond_11;
	return 0x0;
	// 246    .line 79
label_cond_11:
	// switch
	{
	auto item = ( description->charAt(0x0) );
	if (item == 60) goto label_pswitch_21;
	if (item == 61) goto label_pswitch_b3;
	if (item == 62) goto label_pswitch_6d;
	}
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal substitution character")));
	// throw
	throw cVar4;
	// 263    .line 81
label_pswitch_21:
	if ( (rule->getBaseValue() > cVar0) )     
		goto label_cond_32;
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("<< not allowed in negative-number rule")));
	// throw
	throw cVar5;
	// 282    .line 90
label_cond_32:
	if ( !((rule->getBaseValue() > cVar1)) )  
		goto label_cond_42;
	if ( (rule->getBaseValue() > cVar2) )     
		goto label_cond_48;
label_cond_42:
	cVar6 = std::make_shared<android::icu::text::IntegralPartSubstitution>(pos, ruleSet, description);
	return cVar6;
	// 309    .line 92
label_cond_48:
	if ( !((rule->getBaseValue() > cVar3)) )  
		goto label_cond_42;
	if ( !(ruleSet->isFractionSet()) )  
		goto label_cond_67;
	cVar7 = std::make_shared<android::icu::text::NumeratorSubstitution>(pos, (double)(rule->getBaseValue()), formatter->getDefaultRuleSet(), description);
	return cVar7;
	// 349    .line 105
label_cond_67:
	cVar8 = std::make_shared<android::icu::text::MultiplierSubstitution>(pos, rule, ruleSet, description);
	return cVar8;
	// 357    .line 110
label_pswitch_6d:
	if ( (rule->getBaseValue() > cVar0) )     
		goto label_cond_7b;
	cVar9 = std::make_shared<android::icu::text::AbsoluteValueSubstitution>(pos, ruleSet, description);
	return cVar9;
	// 374    .line 115
label_cond_7b:
	if ( !((rule->getBaseValue() > cVar1)) )  
		goto label_cond_8b;
	if ( (rule->getBaseValue() > cVar2) )     
		goto label_cond_91;
label_cond_8b:
	cVar10 = std::make_shared<android::icu::text::FractionalPartSubstitution>(pos, ruleSet, description);
	return cVar10;
	// 401    .line 117
label_cond_91:
	if ( !((rule->getBaseValue() > cVar3)) )  
		goto label_cond_8b;
	if ( !(ruleSet->isFractionSet()) )  
		goto label_cond_a8;
	cVar11 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>(">> not allowed in fraction rule set")));
	// throw
	throw cVar11;
	// 427    .line 135
label_cond_a8:
	cVar12 = std::make_shared<android::icu::text::ModulusSubstitution>(pos, rule, rulePredecessor, ruleSet, description);
	return cVar12;
	// 445    .line 139
label_pswitch_b3:
	cVar13 = std::make_shared<android::icu::text::SameValueSubstitution>(pos, ruleSet, description);
	return cVar13;
	// 453    .line 79
	// 454    nop
	// 456    :pswitch_data_ba
	// 457    .packed-switch 0x3c
	// 458        :pswitch_21
	// 459        :pswitch_b3
	// 460        :pswitch_6d
	// 461    .end packed-switch

}
// .method public doParse(Ljava/lang/String;Ljava/text/ParsePosition;DDZ)Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::text::NFSubstitution::doParse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,double baseValue,double upperBound,bool lenientParse)
{
	
	std::shared_ptr<java::lang::Number> tempResult;
	double result;
	std::shared_ptr<java::lang::Double> cVar0;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "parsePosition"    # Ljava/text/ParsePosition;
	//    .param p3, "baseValue"    # D
	//    .param p5, "upperBound"    # D
	//    .param p7, "lenientParse"    # Z
	if ( !(this->ruleSet) )  
		goto label_cond_46;
	//    .local v2, "tempResult":Ljava/lang/Number;
	if ( !(lenientParse) )  
		goto label_cond_2c;
	if ( !(( this->ruleSet->isFractionSet() ^ 0x1)) )  
		goto label_cond_2c;
	if ( parsePosition->getIndex() )     
		goto label_cond_2c;
	tempResult = this->ruleSet->owner->getDecimalFormat()->parse(text, parsePosition);
label_cond_2c:
label_goto_2c:
	if ( !(parsePosition->getIndex()) )  
		goto label_cond_53;
	//    .local v0, "result":D
	result = this->composeRuleValue(tempResult->doubleValue(), baseValue);
	if ( (result < (double)((long long)(result))) )     
		goto label_cond_4d;
	return java::lang::Long::valueOf((long long)(result));
	// 569    .line 425
	// 570    .end local v0    # "result":D
	// 571    .end local v2    # "tempResult":Ljava/lang/Number;
label_cond_46:
	//    .restart local v2    # "tempResult":Ljava/lang/Number;
	goto label_goto_2c;
	// 582    .line 461
	// 583    .restart local v0    # "result":D
label_cond_4d:
	cVar0 = std::make_shared<java::lang::Double>(result);
	return cVar0;
	// 591    .line 466
	// 592    .end local v0    # "result":D
label_cond_53:
	return tempResult;

}
// .method public doSubstitution(DLjava/lang/StringBuilder;II)V
void android::icu::text::NFSubstitution::doSubstitution(double number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int position,int recursionCount)
{
	
	double numberToFormat;
	
	//    .param p1, "number"    # D
	//    .param p3, "toInsertInto"    # Ljava/lang/StringBuilder;
	//    .param p4, "position"    # I
	//    .param p5, "recursionCount"    # I
	numberToFormat = this->transformNumber(number);
	//    .local v2, "numberToFormat":D
	if ( !(java::lang::Double::isInfinite(numberToFormat)) )  
		goto label_cond_1d;
	//    .local v1, "infiniteRule":Landroid/icu/text/NFRule;
	this->ruleSet->findRule(0x7ff0000000000000L)->doFormat(numberToFormat, toInsertInto, (position + this->pos), recursionCount);
	return;
	// 642    .line 329
	// 643    .end local v1    # "infiniteRule":Landroid/icu/text/NFRule;
label_cond_1d:
	if ( (numberToFormat < java::lang::Math::floor(numberToFormat)) )     
		goto label_cond_37;
	if ( !(this->ruleSet) )  
		goto label_cond_37;
	this->ruleSet->format((long long)(numberToFormat), toInsertInto, (position + this->pos), recursionCount);
label_goto_36:
	return;
	// 676    .line 336
label_cond_37:
	if ( !(this->ruleSet) )  
		goto label_cond_49;
	this->ruleSet->format(numberToFormat, toInsertInto, (position + this->pos), recursionCount);
	goto label_goto_36;
	// 699    .line 339
label_cond_49:
	toInsertInto->insert((this->pos +  position), this->numberFormat->format(numberToFormat));
	goto label_goto_36;

}
// .method public doSubstitution(JLjava/lang/StringBuilder;II)V
void android::icu::text::NFSubstitution::doSubstitution(long long number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int position,int recursionCount)
{
	
	long long numberToFormat;
	
	//    .param p1, "number"    # J
	//    .param p3, "toInsertInto"    # Ljava/lang/StringBuilder;
	//    .param p4, "position"    # I
	//    .param p5, "recursionCount"    # I
	numberToFormat = this->transformNumber(number);
	//    .local v2, "numberToFormat":J
	if ( !(this->ruleSet) )  
		goto label_cond_14;
	this->ruleSet->format(numberToFormat, toInsertInto, (position + this->pos), recursionCount);
label_goto_13:
	return;
	// 752    .line 301
label_cond_14:
	toInsertInto->insert((this->pos +  position), this->numberFormat->format(numberToFormat));
	goto label_goto_13;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::NFSubstitution::equals(std::shared_ptr<java::lang::Object> that)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::NFSubstitution> that2;
	
	//    .param p1, "that"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( that )     
		goto label_cond_5;
	return cVar1;
	// 784    .line 242
label_cond_5:
	if ( this != that )
		goto label_cond_8;
	return cVar0;
	// 791    .line 245
label_cond_8:
	if ( this->getClass() != that->getClass() )
		goto label_cond_39;
	that2 = that;
	that2->checkCast("android::icu::text::NFSubstitution");
	//    .local v0, "that2":Landroid/icu/text/NFSubstitution;
	if ( this->pos != that2->pos )
		goto label_cond_37;
	if ( this->ruleSet )     
		goto label_cond_23;
	if ( that2->ruleSet )     
		goto label_cond_37;
label_cond_23:
	if ( this->numberFormat )     
		goto label_cond_2e;
	if ( that2->numberFormat )     
		goto label_cond_2c;
label_goto_2b:
	return cVar0;
label_cond_2c:
	cVar0 = cVar1;
	goto label_goto_2b;
label_cond_2e:
	cVar0 = this->numberFormat->equals(that2->numberFormat);
	goto label_goto_2b;
label_cond_37:
	cVar0 = cVar1;
	goto label_goto_2b;
	// 862    .line 252
	// 863    .end local v0    # "that2":Landroid/icu/text/NFSubstitution;
label_cond_39:
	return cVar1;

}
// .method public final getPos()I
int android::icu::text::NFSubstitution::getPos()
{
	
	return this->pos;

}
// .method public hashCode()I
int android::icu::text::NFSubstitution::hashCode()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( android::icu::text::NFSubstitution::_assertionsDisabled )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hashCode not designed")));
	// throw
	throw cVar0;
	// 895    .line 257
label_cond_d:
	return 0x2a;

}
// .method public isModulusSubstitution()Z
bool android::icu::text::NFSubstitution::isModulusSubstitution()
{
	
	return 0x0;

}
// .method public setDecimalFormatSymbols(Landroid/icu/text/DecimalFormatSymbols;)V
void android::icu::text::NFSubstitution::setDecimalFormatSymbols(std::shared_ptr<android::icu::text::DecimalFormatSymbols> newSymbols)
{
	
	//    .param p1, "newSymbols"    # Landroid/icu/text/DecimalFormatSymbols;
	if ( !(this->numberFormat) )  
		goto label_cond_9;
	this->numberFormat->setDecimalFormatSymbols(newSymbols);
label_cond_9:
	return;

}
// .method public setDivisor(IS)V
void android::icu::text::NFSubstitution::setDivisor(int radix,short exponent)
{
	
	//    .param p1, "radix"    # I
	//    .param p2, "exponent"    # S
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NFSubstitution::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	if ( !(this->ruleSet) )  
		goto label_cond_28;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->tokenChar())->append(this->ruleSet->getName())->append(this->tokenChar())->toString();
	// 988    .line 274
label_cond_28:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return cVar1->append(this->tokenChar())->append(this->numberFormat->toPattern())->append(this->tokenChar())->toString();

}


