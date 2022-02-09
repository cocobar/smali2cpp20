// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NFRuleSet.smali
#include "java2ctype.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.NFRule.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.RuleBasedNumberFormat.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Double.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParsePosition.h"
#include "java.util.ArrayList.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedList.h"

static android::icu::text::NFRuleSet::_assertionsDisabled;
static android::icu::text::NFRuleSet::IMPROPER_FRACTION_RULE_INDEX = 0x1;
static android::icu::text::NFRuleSet::INFINITY_RULE_INDEX = 0x4;
static android::icu::text::NFRuleSet::MASTER_RULE_INDEX = 0x3;
static android::icu::text::NFRuleSet::NAN_RULE_INDEX = 0x5;
static android::icu::text::NFRuleSet::NEGATIVE_RULE_INDEX = 0x0;
static android::icu::text::NFRuleSet::PROPER_FRACTION_RULE_INDEX = 0x2;
static android::icu::text::NFRuleSet::RECURSION_LIMIT = 0x40;
// .method static constructor <clinit>()V
void android::icu::text::NFRuleSet::static_cinit()
{
	
	android::icu::text::NFRuleSet::_assertionsDisabled = ( android::icu::text::NFRuleSet()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(Landroid/icu/text/RuleBasedNumberFormat;[Ljava/lang/String;I)V
android::icu::text::NFRuleSet::NFRuleSet(std::shared_ptr<android::icu::text::RuleBasedNumberFormat> owner,std::shared_ptr<std::vector<java::lang::String>> descriptions,int index)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::String> description;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int pos;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	
	//    .param p1, "owner"    # Landroid/icu/text/RuleBasedNumberFormat;
	//    .param p2, "descriptions"    # [Ljava/lang/String;
	//    .param p3, "index"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 074        value = {
	// 075            Ljava/lang/IllegalArgumentException;
	// 076        }
	// 077    .end annotation
	cVar0 = 0x0;
	// 083    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->nonNumericalRules = std::make_shared<std::vector<std::vector<android::icu::text::NFRule>>>(0x6);
	this->isFractionRuleSet = cVar0;
	this->owner = owner;
	description = descriptions[index];
	//    .local v0, "description":Ljava/lang/String;
	if ( description->length() )     
		goto label_cond_1e;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Empty rule set description")));
	// throw
	throw cVar1;
	// 118    .line 117
label_cond_1e:
	if ( description->charAt(cVar0) != 0x25 )
		goto label_cond_7e;
	pos = description->indexOf(0x3a);
	//    .local v2, "pos":I
	if ( pos != -0x1 )
		goto label_cond_38;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Rule set name doesn\'t end in colon")));
	// throw
	throw cVar2;
	// 150    .line 123
label_cond_38:
	name = description->substring(cVar0, pos);
	//    .local v1, "name":Ljava/lang/String;
	this->isParseable = ( name->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("@noparse"))) ^ 0x1);
	if ( this->isParseable )     
		goto label_cond_55;
label_cond_55:
	this->name = name;
label_cond_57:
	if ( pos >= description->length() )
		goto label_cond_69;
	pos = ( pos + 0x1);
	if ( android::icu::impl::PatternProps::isWhiteSpace(description->charAt(pos)) )     
		goto label_cond_57;
label_cond_69:
	description = description->substring(pos);
	descriptions[index] = description;
	//    .end local v1    # "name":Ljava/lang/String;
	//    .end local v2    # "pos":I
label_goto_6f:
	if ( description->length() )     
		goto label_cond_87;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Empty rule set description")));
	// throw
	throw cVar3;
	// 236    .line 140
label_cond_7e:
	this->name = std::make_shared<java::lang::String>(std::make_shared<char[]>("%default"));
	this->isParseable = 0x1;
	goto label_goto_6f;
	// 249    .line 150
label_cond_87:
	return;

}
// .method private findFractionRuleSetRule(D)Landroid/icu/text/NFRule;
std::shared_ptr<android::icu::text::NFRule> android::icu::text::NFRuleSet::findFractionRuleSetRule(double number)
{
	
	long long leastCommonMultiple;
	int i;
	auto difference;
	int winner;
	long long tempDifference;
	
	//    .param p1, "number"    # D
	leastCommonMultiple = this->rules[0x0]->getBaseValue();
	//    .local v4, "leastCommonMultiple":J
	i = 0x1;
	//    .local v2, "i":I
label_goto_a:
	if ( i >= this->rules->size() )
		goto label_cond_1e;
	leastCommonMultiple = android::icu::text::NFRuleSet::lcm(leastCommonMultiple, this->rules[i]->getBaseValue());
	i = ( i + 0x1);
	goto label_goto_a;
	// 300    .line 634
label_cond_1e:
	//    .local v6, "numerator":J
	difference = 0x7fffffffffffffffL;
	//    .local v0, "difference":J
	winner = 0x0;
	//    .local v3, "winner":I
	i = 0x0;
label_goto_2c:
	if ( i >= this->rules->size() )
		goto label_cond_50;
	tempDifference = ((this->rules[i]->getBaseValue() *  java::lang::Math::round(((double)(leastCommonMultiple) *  number))) % leastCommonMultiple);
	//    .local v8, "tempDifference":J
	if ( ((leastCommonMultiple - tempDifference) > tempDifference) >= 0 )
		goto label_cond_44;
	tempDifference = (leastCommonMultiple - tempDifference);
label_cond_44:
	if ( (tempDifference > difference) >= 0 )
		goto label_cond_9e;
	difference = tempDifference;
	winner = i;
	if ( (tempDifference > 0x0) )     
		goto label_cond_9e;
	//    .end local v8    # "tempDifference":J
label_cond_50:
	if ( ( winner + 0x1) >= this->rules->size() )
		goto label_cond_99;
	if ( (this->rules[( winner + 0x1)]->getBaseValue() > this->rules[winner]->getBaseValue()) )     
		goto label_cond_99;
	if ( (java::lang::Math::round(((double)(this->rules[winner]->getBaseValue()) *  number)) > 0x1) < 0 ) 
		goto label_cond_97;
	if ( (java::lang::Math::round(((double)(this->rules[winner]->getBaseValue()) *  number)) > 0x2) < 0 ) 
		goto label_cond_99;
label_cond_97:
label_cond_99:
	return this->rules[winner];
	// 464    .line 640
	// 465    .restart local v8    # "tempDifference":J
label_cond_9e:
	i = ( i + 0x1);
	goto label_goto_2c;

}
// .method private findNormalRule(J)Landroid/icu/text/NFRule;
std::shared_ptr<android::icu::text::NFRule> android::icu::text::NFRuleSet::findNormalRule(long long number)
{
	
	int cVar0;
	long long cVar1;
	int lo;
	int hi;
	int mid;
	auto ruleBaseValue;
	std::shared_ptr<java::lang::IllegalStateException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<android::icu::text::NFRule> result;
	std::shared_ptr<java::lang::IllegalStateException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	//    .param p1, "number"    # J
	cVar0 = 0x0;
	if ( !(this->isFractionRuleSet) )  
		goto label_cond_b;
	return this->findFractionRuleSetRule((double)(number));
	// 493    .line 546
label_cond_b:
	if ( (number > 0x0) >= 0 )
		goto label_cond_1d;
	if ( !(this->nonNumericalRules[cVar0]) )  
		goto label_cond_1c;
	return this->nonNumericalRules[cVar0];
	// 515    .line 550
label_cond_1c:
	cVar1 = (0 - number);
label_cond_1d:
	lo = 0x0;
	//    .local v1, "lo":I
	hi = this->rules->size();
	//    .local v0, "hi":I
	if ( hi <= 0 )
		goto label_cond_b0;
label_goto_23:
	if ( lo >= hi )
		goto label_cond_43;
	mid = _ushri((lo + hi),0x1);
	//    .local v2, "mid":I
	ruleBaseValue = this->rules[mid]->getBaseValue();
	//    .local v4, "ruleBaseValue":J
	if ( (ruleBaseValue > cVar1) )     
		goto label_cond_3a;
	return this->rules[mid];
	// 565    .line 575
label_cond_3a:
	if ( (ruleBaseValue > cVar1) <= 0 )
		goto label_cond_40;
	hi = mid;
	goto label_goto_23;
	// 576    .line 579
label_cond_40:
	lo = ( mid + 0x1);
	goto label_goto_23;
	// 582    .line 582
	// 583    .end local v2    # "mid":I
	// 584    .end local v4    # "ruleBaseValue":J
label_cond_43:
	if ( hi )     
		goto label_cond_6c;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalStateException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("The rule set ")))->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" cannot format the value ")))->append(cVar1)->toString());
	// throw
	throw cVar2;
	// 625    .line 585
label_cond_6c:
	result = this->rules[( hi + -0x1)];
	//    .local v3, "result":Landroid/icu/text/NFRule;
	if ( !(result->shouldRollBack(cVar1)) )  
		goto label_cond_af;
	if ( hi != 0x1 )
		goto label_cond_a9;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IllegalStateException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("The rule set ")))->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" cannot roll back from the rule \'")))->append(result)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString());
	// throw
	throw cVar4;
	// 691    .line 597
label_cond_a9:
label_cond_af:
	return result;
	// 703    .line 602
	// 704    .end local v3    # "result":Landroid/icu/text/NFRule;
label_cond_b0:
	return this->nonNumericalRules[0x3];

}
// .method private static lcm(JJ)J
long long android::icu::text::NFRuleSet::lcm(long long x,long long y)
{
	
	auto x1;
	auto y1;
	int p2;
	long long x1;
	long long y1;
	long long t;
	auto t;
	
	//    .param p0, "x"    # J
	//    .param p2, "y"    # J
	x1 = x;
	//    .local v6, "x1":J
	y1 = y;
	//    .local v8, "y1":J
	p2 = 0x0;
	//    .local v2, "p2":I
label_goto_4:
	if ( ((0x1 &  x1) > 0x0) )     
		goto label_cond_1d;
	if ( ((0x1 &  y1) > 0x0) )     
		goto label_cond_1d;
	p2 = ( p2 + 0x1);
	x1 = _shrll(x1,0x1);
	y1 = _shrll(y1,0x1);
	goto label_goto_4;
	// 770    .line 704
label_cond_1d:
	if ( ((0x1 &  x1) > 0x1) )     
		goto label_cond_39;
	t = (0 - y1);
	//    .local v4, "t":J
label_goto_27:
	if ( !((t > 0x0)) )  
		goto label_cond_47;
label_goto_2d:
	if ( ((0x1 &  t) > 0x0) )     
		goto label_cond_3b;
	t = _shrll(t,0x1);
	goto label_goto_2d;
	// 813    .line 707
	// 814    .end local v4    # "t":J
label_cond_39:
	t = x1;
	//    .restart local v4    # "t":J
	goto label_goto_27;
	// 821    .line 714
label_cond_3b:
	if ( (t > 0x0) <= 0 )
		goto label_cond_45;
	x1 = t;
label_goto_42:
	t = (x1 - y1);
	goto label_goto_27;
	// 838    .line 717
label_cond_45:
	y1 = (0 - t);
	goto label_goto_42;
	// 844    .line 721
label_cond_47:
	//    .local v0, "gcd":J
	return ((x / (x1 << p2)) * y);

}
// .method private setBestFractionRule(ILandroid/icu/text/NFRule;Z)V
void android::icu::text::NFRuleSet::setBestFractionRule(int originalIndex,std::shared_ptr<android::icu::text::NFRule> newRule,bool rememberRule)
{
	
	std::shared_ptr<java::util::LinkedList> cVar0;
	
	//    .param p1, "originalIndex"    # I
	//    .param p2, "newRule"    # Landroid/icu/text/NFRule;
	//    .param p3, "rememberRule"    # Z
	if ( !(rememberRule) )  
		goto label_cond_12;
	if ( this->fractionRules )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::util::LinkedList>();
	this->fractionRules = cVar0;
label_cond_d:
	this->fractionRules->add(newRule);
label_cond_12:
	//    .local v0, "bestResult":Landroid/icu/text/NFRule;
	if ( this->nonNumericalRules[originalIndex] )     
		goto label_cond_1d;
	this->nonNumericalRules[originalIndex] = newRule;
label_cond_1c:
label_goto_1c:
	return;
	// 905    .line 278
label_cond_1d:
	//    .local v1, "decimalFormatSymbols":Landroid/icu/text/DecimalFormatSymbols;
	if ( this->owner->getDecimalFormatSymbols()->getDecimalSeparator() != newRule->getDecimalPoint() )
		goto label_cond_1c;
	this->nonNumericalRules[originalIndex] = newRule;
	goto label_goto_1c;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::NFRuleSet::equals(std::shared_ptr<java::lang::Object> that)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::text::NFRuleSet> that2;
	int i;
	
	//    .param p1, "that"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( that->instanceOf("android::icu::text::NFRuleSet") )     
		goto label_cond_6;
	return cVar0;
label_cond_6:
	that2 = that;
	that2->checkCast("android::icu::text::NFRuleSet");
	//    .local v1, "that2":Landroid/icu/text/NFRuleSet;
	if ( !(this->name->equals(that2->name)) )  
		goto label_cond_1b;
	if ( this->rules->size() == that2->rules->size() )
		goto label_cond_1c;
label_cond_1b:
	return cVar0;
	// 983    .line 317
label_cond_1c:
	if ( this->isFractionRuleSet != that2->isFractionRuleSet )
		goto label_cond_1b;
	i = 0x0;
	//    .local v0, "i":I
label_goto_23:
	if ( i >= this->nonNumericalRules->size() )
		goto label_cond_3a;
	if ( android::icu::impl::Utility::objectEquals(this->nonNumericalRules[i], that2->nonNumericalRules[i]) )     
		goto label_cond_37;
	return cVar0;
	// 1020    .line 323
label_cond_37:
	i = ( i + 0x1);
	goto label_goto_23;
	// 1026    .line 330
label_cond_3a:
	i = 0x0;
label_goto_3b:
	if ( i >= this->rules->size() )
		goto label_cond_52;
	if ( this->rules[i]->equals(that2->rules[i]) )     
		goto label_cond_4f;
	return cVar0;
	// 1055    .line 330
label_cond_4f:
	i = ( i + 0x1);
	goto label_goto_3b;
	// 1061    .line 337
label_cond_52:
	return 0x1;

}
// .method findRule(D)Landroid/icu/text/NFRule;
std::shared_ptr<android::icu::text::NFRule> android::icu::text::NFRuleSet::findRule(double cVar4)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::text::NFRule> rule;
	double cVar4;
	
	//    .param p1, "number"    # D
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	if ( !(this->isFractionRuleSet) )  
		goto label_cond_d;
	return this->findFractionRuleSetRule(cVar4);
	// 1093    .line 469
label_cond_d:
	if ( !(java::lang::Double::isNaN(cVar4)) )  
		goto label_cond_21;
	rule = this->nonNumericalRules[0x5];
	//    .local v0, "rule":Landroid/icu/text/NFRule;
	if ( rule )     
		goto label_cond_20;
label_cond_20:
	return rule;
	// 1123    .line 480
	// 1124    .end local v0    # "rule":Landroid/icu/text/NFRule;
label_cond_21:
	if ( (cVar4 > 0x0) >= 0 )
		goto label_cond_33;
	if ( !(this->nonNumericalRules[cVar3]) )  
		goto label_cond_32;
	return this->nonNumericalRules[cVar3];
	// 1146    .line 484
label_cond_32:
	cVar4 = (0.0 - cVar4);
label_cond_33:
	if ( !(java::lang::Double::isInfinite(cVar4)) )  
		goto label_cond_47;
	rule = this->nonNumericalRules[0x4];
	//    .restart local v0    # "rule":Landroid/icu/text/NFRule;
	if ( rule )     
		goto label_cond_46;
label_cond_46:
	return rule;
	// 1180    .line 497
	// 1181    .end local v0    # "rule":Landroid/icu/text/NFRule;
label_cond_47:
	if ( !((cVar4 < java::lang::Math::floor(cVar4))) )  
		goto label_cond_6b;
	if ( (cVar4 > 0x3ff0000000000000L) >= 0 )
		goto label_cond_60;
	if ( !(this->nonNumericalRules[cVar1]) )  
		goto label_cond_60;
	return this->nonNumericalRules[cVar1];
	// 1211    .line 503
label_cond_60:
	if ( !(this->nonNumericalRules[cVar2]) )  
		goto label_cond_6b;
	return this->nonNumericalRules[cVar2];
	// 1226    .line 510
label_cond_6b:
	if ( !(this->nonNumericalRules[cVar0]) )  
		goto label_cond_76;
	return this->nonNumericalRules[cVar0];
	// 1241    .line 516
label_cond_76:
	return this->findNormalRule(java::lang::Math::round(cVar4));

}
// .method public format(DLjava/lang/StringBuilder;II)V
void android::icu::text::NFRuleSet::format(double number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int pos,int recursionCount)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "number"    # D
	//    .param p3, "toInsertInto"    # Ljava/lang/StringBuilder;
	//    .param p4, "pos"    # I
	//    .param p5, "recursionCount"    # I
	if ( recursionCount <  0x40 )
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalStateException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Recursion limit exceeded when applying ruleSet ")))->append(this->name)->toString());
	// throw
	throw cVar0;
	// 1294    .line 454
label_cond_20:
	//    .local v1, "applicableRule":Landroid/icu/text/NFRule;
	this->findRule(number)->doFormat(number, toInsertInto, pos, ( recursionCount + 0x1));
	return;

}
// .method public format(JLjava/lang/StringBuilder;II)V
void android::icu::text::NFRuleSet::format(long long number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int pos,int recursionCount)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "number"    # J
	//    .param p3, "toInsertInto"    # Ljava/lang/StringBuilder;
	//    .param p4, "pos"    # I
	//    .param p5, "recursionCount"    # I
	if ( recursionCount <  0x40 )
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalStateException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Recursion limit exceeded when applying ruleSet ")))->append(this->name)->toString());
	// throw
	throw cVar0;
	// 1358    .line 438
label_cond_20:
	//    .local v1, "applicableRule":Landroid/icu/text/NFRule;
	this->findNormalRule(number)->doFormat(number, toInsertInto, pos, ( recursionCount + 0x1));
	return;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NFRuleSet::getName()
{
	
	return this->name;

}
// .method public hashCode()I
int android::icu::text::NFRuleSet::hashCode()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( android::icu::text::NFRuleSet::_assertionsDisabled )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hashCode not designed")));
	// throw
	throw cVar0;
	// 1409    .line 343
label_cond_d:
	return 0x2a;

}
// .method public isFractionSet()Z
bool android::icu::text::NFRuleSet::isFractionSet()
{
	
	return this->isFractionRuleSet;

}
// .method public isParseable()Z
bool android::icu::text::NFRuleSet::isParseable()
{
	
	return this->isParseable;

}
// .method public isPublic()Z
bool android::icu::text::NFRuleSet::isPublic()
{
	
	return ( this->name->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("%%"))) ^ 0x1);

}
// .method public makeIntoFractionRuleSet()V
void android::icu::text::NFRuleSet::makeIntoFractionRuleSet()
{
	
	this->isFractionRuleSet = 0x1;
	return;

}
// .method public parse(Ljava/lang/String;Ljava/text/ParsePosition;D)Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::text::NFRuleSet::parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,double upperBound)
{
	
	std::shared_ptr<java::text::ParsePosition> highWaterMark;
	std::shared_ptr<java::lang::Long> result;
	std::shared_ptr<std::vector<android::icu::text::NFRule>> cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::NFRule> fractionRule;
	int i;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "parsePosition"    # Ljava/text/ParsePosition;
	//    .param p3, "upperBound"    # D
	highWaterMark = std::make_shared<java::text::ParsePosition>(0x0);
	//    .local v8, "highWaterMark":Ljava/text/ParsePosition;
	result = android::icu::text::NFRule::ZERO;
	//    .local v10, "result":Ljava/lang/Number;
	if ( text->length() )     
		goto label_cond_f;
	return result;
	// 1496    .line 767
label_cond_f:
	cVar0 = this->nonNumericalRules;
	cVar1 = 0x0;
label_goto_14:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_3d;
	fractionRule = cVar0[cVar1];
	//    .local v0, "fractionRule":Landroid/icu/text/NFRule;
	if ( !(fractionRule) )  
		goto label_cond_39;
	//    .local v11, "tempResult":Ljava/lang/Number;
	if ( parsePosition->getIndex() <= highWaterMark->getIndex() )
		goto label_cond_35;
	fractionRule->doParse(text, parsePosition, 0x0, upperBound);
	highWaterMark->setIndex(parsePosition->getIndex());
label_cond_35:
	parsePosition->setIndex(0x0);
	//    .end local v11    # "tempResult":Ljava/lang/Number;
label_cond_39:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_14;
	// 1565    .line 791
	// 1566    .end local v0    # "fractionRule":Landroid/icu/text/NFRule;
label_cond_3d:
	i = ( this->rules->size() + -0x1);
	//    .local v9, "i":I
label_goto_42:
	if ( i < 0 ) 
		goto label_cond_87;
	if ( highWaterMark->getIndex() >= text->length() )
		goto label_cond_87;
	if ( this->isFractionRuleSet )     
		goto label_cond_62;
	if ( ((double)(this->rules[i]->getBaseValue()) < upperBound) < 0 ) 
		goto label_cond_62;
label_goto_5f:
	i = ( i + -0x1);
	goto label_goto_42;
	// 1613    .line 796
label_cond_62:
	//    .restart local v11    # "tempResult":Ljava/lang/Number;
	if ( parsePosition->getIndex() <= highWaterMark->getIndex() )
		goto label_cond_82;
	this->rules[i]->doParse(text, parsePosition, this->isFractionRuleSet, upperBound);
	highWaterMark->setIndex(parsePosition->getIndex());
label_cond_82:
	parsePosition->setIndex(0x0);
	goto label_goto_5f;
	// 1661    .line 811
	// 1662    .end local v11    # "tempResult":Ljava/lang/Number;
label_cond_87:
	parsePosition->setIndex(highWaterMark->getIndex());
	return result;

}
// .method public parseRules(Ljava/lang/String;)V
void android::icu::text::NFRuleSet::parseRules(std::shared_ptr<java::lang::String> description)
{
	
	std::shared_ptr<java::util::ArrayList> tempRules;
	int oldP;
	int descriptionLen;
	int p;
	std::shared_ptr<android::icu::text::NFRule> predecessor;
	long long defaultBaseValue;
	std::shared_ptr<java::util::Iterator> rule_S_iterator;
	std::shared_ptr<android::icu::text::NFRule> rule;
	long long baseValue;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	auto defaultBaseValue;
	
	//    .param p1, "description"    # Ljava/lang/String;
	tempRules = std::make_shared<java::util::ArrayList>();
	//    .local v10, "tempRules":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/NFRule;>;"
	//    .local v7, "predecessor":Landroid/icu/text/NFRule;
	oldP = 0x0;
	//    .local v5, "oldP":I
	descriptionLen = description->length();
	//    .end local v7    # "predecessor":Landroid/icu/text/NFRule;
	//    .local v4, "descriptionLen":I
label_cond_b:
	p = description->indexOf(0x3b, oldP);
	//    .local v6, "p":I
	if ( p >= 0 )
		goto label_cond_14;
	p = descriptionLen;
label_cond_14:
	android::icu::text::NFRule::makeRules(description->substring(oldP, p), this, predecessor, this->owner, tempRules);
	if ( tempRules->isEmpty() )     
		goto label_cond_2f;
	predecessor = tempRules->get(( tempRules->size() + -0x1));
	predecessor->checkCast("android::icu::text::NFRule");
label_cond_2f:
	oldP = ( p + 0x1);
	if ( oldP <  descriptionLen )
		goto label_cond_b;
	defaultBaseValue = 0x0;
	//    .local v2, "defaultBaseValue":J
	rule_S_iterator = tempRules->iterator();
	//    .local v9, "rule$iterator":Ljava/util/Iterator;
label_cond_39:
label_goto_39:
	if ( !(rule_S_iterator->hasNext()) )  
		goto label_cond_85;
	rule = rule_S_iterator->next();
	rule->checkCast("android::icu::text::NFRule");
	//    .local v8, "rule":Landroid/icu/text/NFRule;
	baseValue = rule->getBaseValue();
	//    .local v0, "baseValue":J
	if ( (baseValue > 0x0) )     
		goto label_cond_5a;
	rule->setBaseValue(defaultBaseValue);
label_goto_52:
	if ( this->isFractionRuleSet )     
		goto label_cond_39;
	defaultBaseValue = (defaultBaseValue +  0x1);
	goto label_goto_39;
	// 1808    .line 215
label_cond_5a:
	if ( (baseValue > defaultBaseValue) >= 0 )
		goto label_cond_83;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Rules are not in order, base: ")))->append(baseValue)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" < ")))->append(defaultBaseValue)->toString());
	// throw
	throw cVar0;
	// 1851    .line 219
label_cond_83:
	defaultBaseValue = baseValue;
	goto label_goto_52;
	// 1857    .line 228
	// 1858    .end local v0    # "baseValue":J
	// 1859    .end local v8    # "rule":Landroid/icu/text/NFRule;
label_cond_85:
	this->rules = std::make_shared<std::vector<std::vector<android::icu::text::NFRule>>>(tempRules->size());
	tempRules->toArray(this->rules);
	return;

}
// .method public setDecimalFormatSymbols(Landroid/icu/text/DecimalFormatSymbols;)V
void android::icu::text::NFRuleSet::setDecimalFormatSymbols(std::shared_ptr<android::icu::text::DecimalFormatSymbols> newSymbols)
{
	
	bool cVar0;
	std::shared_ptr<std::vector<android::icu::text::NFRule>> cVar1;
	int cVar2;
	int nonNumericalIdx;
	std::shared_ptr<java::util::Iterator> rule_S_iterator;
	std::shared_ptr<android::icu::text::NFRule> rule;
	std::shared_ptr<std::vector<android::icu::text::NFRule>> cVar4;
	
	//    .param p1, "newSymbols"    # Landroid/icu/text/DecimalFormatSymbols;
	cVar0 = 0x0;
	cVar1 = this->rules;
	cVar2 = cVar0;
label_goto_5:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_f;
	//    .local v1, "rule":Landroid/icu/text/NFRule;
	cVar1[cVar2]->setDecimalFormatSymbols(newSymbols);
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_5;
	// 1906    .line 825
	// 1907    .end local v1    # "rule":Landroid/icu/text/NFRule;
label_cond_f:
	if ( !(this->fractionRules) )  
		goto label_cond_46;
	nonNumericalIdx = 0x1;
	//    .local v0, "nonNumericalIdx":I
label_goto_14:
	if ( nonNumericalIdx >  0x3 )
		goto label_cond_46;
	if ( !(this->nonNumericalRules[nonNumericalIdx]) )  
		goto label_cond_43;
	rule_S_iterator = this->fractionRules->iterator();
	//    .local v2, "rule$iterator":Ljava/util/Iterator;
label_cond_23:
label_goto_23:
	if ( !(rule_S_iterator->hasNext()) )  
		goto label_cond_43;
	rule = rule_S_iterator->next();
	rule->checkCast("android::icu::text::NFRule");
	//    .restart local v1    # "rule":Landroid/icu/text/NFRule;
	if ( (this->nonNumericalRules[nonNumericalIdx]->getBaseValue() > rule->getBaseValue()) )     
		goto label_cond_23;
	this->setBestFractionRule(nonNumericalIdx, rule, cVar0);
	goto label_goto_23;
	// 1974    .line 826
	// 1975    .end local v1    # "rule":Landroid/icu/text/NFRule;
	// 1976    .end local v2    # "rule$iterator":Ljava/util/Iterator;
label_cond_43:
	nonNumericalIdx = ( nonNumericalIdx + 0x1);
	goto label_goto_14;
	// 1982    .line 837
	// 1983    .end local v0    # "nonNumericalIdx":I
label_cond_46:
	cVar4 = this->nonNumericalRules;
label_goto_49:
	if ( cVar0 >= cVar4->size() )
		goto label_cond_55;
	rule = cVar4[cVar0];
	//    .restart local v1    # "rule":Landroid/icu/text/NFRule;
	if ( !(rule) )  
		goto label_cond_52;
	rule->setDecimalFormatSymbols(newSymbols);
label_cond_52:
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_49;
	// 2007    .line 842
	// 2008    .end local v1    # "rule":Landroid/icu/text/NFRule;
label_cond_55:
	return;

}
// .method setNonNumericalRule(Landroid/icu/text/NFRule;)V
void android::icu::text::NFRuleSet::setNonNumericalRule(std::shared_ptr<android::icu::text::NFRule> rule)
{
	
	int cVar0;
	auto baseValue;
	
	//    .param p1, "rule"    # Landroid/icu/text/NFRule;
	cVar0 = 0x1;
	baseValue = rule->getBaseValue();
	//    .local v0, "baseValue":J
	if ( (baseValue > -0x1) )     
		goto label_cond_11;
	this->nonNumericalRules[0x0] = rule;
label_cond_10:
label_goto_10:
	return;
	// 2045    .line 241
label_cond_11:
	if ( (baseValue > -0x2) )     
		goto label_cond_1b;
	this->setBestFractionRule(cVar0, rule, cVar0);
	goto label_goto_10;
	// 2058    .line 244
label_cond_1b:
	if ( (baseValue > -0x3) )     
		goto label_cond_26;
	this->setBestFractionRule(0x2, rule, cVar0);
	goto label_goto_10;
	// 2073    .line 247
label_cond_26:
	if ( (baseValue > -0x4) )     
		goto label_cond_31;
	this->setBestFractionRule(0x3, rule, cVar0);
	goto label_goto_10;
	// 2088    .line 250
label_cond_31:
	if ( (baseValue > -0x5) )     
		goto label_cond_3d;
	this->nonNumericalRules[0x4] = rule;
	goto label_goto_10;
	// 2105    .line 253
label_cond_3d:
	if ( (baseValue > -0x6) )     
		goto label_cond_10;
	this->nonNumericalRules[0x5] = rule;
	goto label_goto_10;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NFRuleSet::toString()
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<std::vector<android::icu::text::NFRule>> cVar1;
	int cVar2;
	std::shared_ptr<std::vector<android::icu::text::NFRule>> cVar4;
	std::shared_ptr<android::icu::text::NFRule> rule;
	std::shared_ptr<java::util::Iterator> fractionRule_S_iterator;
	std::shared_ptr<android::icu::text::NFRule> fractionRule;
	
	cVar0 = 0x0;
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "result":Ljava/lang/StringBuilder;
	result->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(":\n")));
	cVar1 = this->rules;
	cVar2 = cVar0;
label_goto_16:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_2b;
	//    .local v3, "rule":Landroid/icu/text/NFRule;
	result->append(cVar1[cVar2]->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_16;
	// 2177    .line 365
	// 2178    .end local v3    # "rule":Landroid/icu/text/NFRule;
label_cond_2b:
	cVar4 = this->nonNumericalRules;
label_goto_2e:
	if ( cVar0 >= cVar4->size() )
		goto label_cond_90;
	rule = cVar4[cVar0];
	//    .restart local v3    # "rule":Landroid/icu/text/NFRule;
	if ( !(rule) )  
		goto label_cond_8d;
	if ( !((rule->getBaseValue() > -0x2)) )  
		goto label_cond_48;
	if ( (rule->getBaseValue() > -0x3) )     
		goto label_cond_75;
label_cond_48:
	fractionRule_S_iterator = this->fractionRules->iterator();
	//    .local v1, "fractionRule$iterator":Ljava/util/Iterator;
label_cond_4e:
label_goto_4e:
	if ( !(fractionRule_S_iterator->hasNext()) )  
		goto label_cond_8d;
	fractionRule = fractionRule_S_iterator->next();
	fractionRule->checkCast("android::icu::text::NFRule");
	//    .local v0, "fractionRule":Landroid/icu/text/NFRule;
	if ( (fractionRule->getBaseValue() > rule->getBaseValue()) )     
		goto label_cond_4e;
	result->append(fractionRule->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	goto label_goto_4e;
	// 2267    .line 369
	// 2268    .end local v0    # "fractionRule":Landroid/icu/text/NFRule;
	// 2269    .end local v1    # "fractionRule$iterator":Ljava/util/Iterator;
label_cond_75:
	if ( !((rule->getBaseValue() > -0x4)) )  
		goto label_cond_48;
	result->append(rule->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
label_cond_8d:
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_2e;
	// 2300    .line 383
	// 2301    .end local v3    # "rule":Landroid/icu/text/NFRule;
label_cond_90:
	return result->toString();

}


