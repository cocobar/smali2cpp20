// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NFRule.smali
#include "java2ctype.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.NFRule.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "android.icu.text.PluralFormat.h"
#include "android.icu.text.PluralRules_S_PluralType.h"
#include "android.icu.text.RbnfLenientScanner.h"
#include "android.icu.text.RuleBasedNumberFormat.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Double.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.List.h"

static android::icu::text::NFRule::_assertionsDisabled;
static android::icu::text::NFRule::IMPROPER_FRACTION_RULE = -0x2;
static android::icu::text::NFRule::INFINITY_RULE = -0x5;
static android::icu::text::NFRule::MASTER_RULE = -0x4;
static android::icu::text::NFRule::NAN_RULE = -0x6;
static android::icu::text::NFRule::NEGATIVE_NUMBER_RULE = -0x1;
static android::icu::text::NFRule::PROPER_FRACTION_RULE = -0x3;
static android::icu::text::NFRule::RULE_PREFIXES;
static android::icu::text::NFRule::ZERO;
// .method static constructor <clinit>()V
void android::icu::text::NFRule::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	android::icu::text::NFRule::_assertionsDisabled = ( android::icu::text::NFRule()->desiredAssertionStatus() ^ 0x1);
	android::icu::text::NFRule::ZERO = java::lang::Long::valueOf(0x0);
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0xb);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("<<"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("<%"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("<#"));
	cVar0[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("<0"));
	cVar0[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>(">>"));
	cVar0[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>(">%"));
	cVar0[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>(">#"));
	cVar0[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>(">0"));
	cVar0[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("=%"));
	cVar0[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("=#"));
	cVar0[0xa] = std::make_shared<java::lang::String>(std::make_shared<char[]>("=0"));
	android::icu::text::NFRule::RULE_PREFIXES = cVar0;
	return;

}
// .method public constructor <init>(Landroid/icu/text/RuleBasedNumberFormat;Ljava/lang/String;)V
android::icu::text::NFRule::NFRule(std::shared_ptr<android::icu::text::RuleBasedNumberFormat> formatter,std::shared_ptr<java::lang::String> ruleText)
{
	
	short cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .param p1, "formatter"    # Landroid/icu/text/RuleBasedNumberFormat;
	//    .param p2, "ruleText"    # Ljava/lang/String;
	cVar0 = 0x0;
	cVar1 = 0x0;
	// 162    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->radix = 0xa;
	this->exponent = cVar0;
	this->decimalPoint = cVar0;
	this->ruleText = cVar1;
	this->rulePatternFormat = cVar1;
	this->sub1 = cVar1;
	this->sub2 = cVar1;
	this->formatter = formatter;
	if ( ruleText )     
		goto label_cond_1c;
label_goto_19:
	this->ruleText = cVar1;
	return;
	// 199    .line 255
label_cond_1c:
	cVar1 = this->parseRuleDescriptor(ruleText);
	goto label_goto_19;

}
// .method private allIgnorable(Ljava/lang/String;)Z
bool android::icu::text::NFRule::allIgnorable(std::shared_ptr<java::lang::String> str)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::RbnfLenientScanner> scanner;
	
	//    .param p1, "str"    # Ljava/lang/String;
	cVar1 = 0x0;
	if ( !(str) )  
		goto label_cond_9;
	if ( str->length() )     
		goto label_cond_b;
label_cond_9:
	return 0x1;
	// 230    .line 1312
label_cond_b:
	scanner = this->formatter->getLenientScanner();
	//    .local v0, "scanner":Landroid/icu/text/RbnfLenientScanner;
	if ( !(scanner) )  
		goto label_cond_17;
	cVar1 = scanner->allIgnorable(str);
label_cond_17:
	return cVar1;

}
// .method private expectedExponent()S
short android::icu::text::NFRule::expectedExponent()
{
	
	short tempResult;
	
	if ( !(this->radix) )  
		goto label_cond_d;
	if ( (this->baseValue > 0x1) >= 0 )
		goto label_cond_e;
label_cond_d:
	return 0x0;
	// 273    .line 570
label_cond_e:
	tempResult = (short)((int)(( java::lang::Math::log((double)(this->baseValue)) / java::lang::Math::log((double)(this->radix)))));
	//    .local v0, "tempResult":S
	if ( (android::icu::text::NFRule::power((long long)(this->radix), (short)(( tempResult + 0x1))) > this->baseValue) > 0 ) 
		goto label_cond_33;
	return (short)(( tempResult + 0x1));
	// 324    .line 574
label_cond_33:
	return tempResult;

}
// .method private extractSubstitution(Landroid/icu/text/NFRuleSet;Landroid/icu/text/NFRule;)Landroid/icu/text/NFSubstitution;
std::shared_ptr<android::icu::text::NFSubstitution> android::icu::text::NFRule::extractSubstitution(std::shared_ptr<android::icu::text::NFRuleSet> owner,std::shared_ptr<android::icu::text::NFRule> predecessor)
{
	
	std::shared_ptr<android::icu::text::NFSubstitution> cVar0;
	int cVar1;
	int subStart;
	int subEnd;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	int c;
	
	//    .param p1, "owner"    # Landroid/icu/text/NFRuleSet;
	//    .param p2, "predecessor"    # Landroid/icu/text/NFRule;
	cVar0 = 0x0;
	cVar1 = -0x1;
	subStart = android::icu::text::NFRule::indexOfAnyRulePrefix(this->ruleText);
	//    .local v0, "subStart":I
	if ( subStart != cVar1 )
		goto label_cond_b;
	return cVar0;
	// 353    .line 480
label_cond_b:
	if ( !(this->ruleText->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(">>>")), subStart)) )  
		goto label_cond_1b;
	subEnd = ( subStart + 0x2);
	//    .local v8, "subEnd":I
label_cond_18:
label_goto_18:
	if ( subEnd != cVar1 )
		goto label_cond_46;
	return cVar0;
	// 377    .line 486
	// 378    .end local v8    # "subEnd":I
label_cond_1b:
	c = this->ruleText->charAt(subStart);
	//    .local v6, "c":C
	subEnd = this->ruleText->indexOf(c, ( subStart + 0x1));
	//    .restart local v8    # "subEnd":I
	if ( c != 0x3c )
		goto label_cond_18;
	if ( subEnd == cVar1 )
		goto label_cond_18;
	if ( subEnd >= ( this->ruleText->length() + -0x1) )
		goto label_cond_18;
	if ( this->ruleText->charAt(( subEnd + 0x1)) != c )
		goto label_cond_18;
	subEnd = ( subEnd + 0x1);
	goto label_goto_18;
	// 429    .line 509
	// 430    .end local v6    # "c":C
label_cond_46:
	//    .local v7, "result":Landroid/icu/text/NFSubstitution;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	this->ruleText = cVar2->append(this->ruleText->substring(0x0, subStart))->append(this->ruleText->substring(( subEnd + 0x1)))->toString();
	return android::icu::text::NFSubstitution::makeSubstitution(subStart, this, predecessor, owner, this->formatter, this->ruleText->substring(subStart, ( subEnd + 0x1)));

}
// .method private extractSubstitutions(Landroid/icu/text/NFRuleSet;Ljava/lang/String;Landroid/icu/text/NFRule;)V
void android::icu::text::NFRule::extractSubstitutions(std::shared_ptr<android::icu::text::NFRuleSet> owner,std::shared_ptr<java::lang::String> ruleText,std::shared_ptr<android::icu::text::NFRule> predecessor)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	int pluralRuleStart;
	int pluralRuleEnd;
	int endType;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::Object> type;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	//    .param p1, "owner"    # Landroid/icu/text/NFRuleSet;
	//    .param p2, "ruleText"    # Ljava/lang/String;
	//    .param p3, "predecessor"    # Landroid/icu/text/NFRule;
	this->ruleText = ruleText;
	this->sub1 = this->extractSubstitution(owner, predecessor);
	if ( this->sub1 )     
		goto label_cond_4c;
	this->sub2 = 0x0;
label_goto_f:
	cVar0 = this->ruleText;
	pluralRuleStart = cVar0->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("$(")));
	//    .local v2, "pluralRuleStart":I
	if ( pluralRuleStart < 0 ) 
		goto label_cond_53;
	pluralRuleEnd = cVar0->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(")$")), pluralRuleStart);
	//    .local v1, "pluralRuleEnd":I
label_goto_21:
	if ( pluralRuleEnd < 0 ) 
		goto label_cond_76;
	endType = cVar0->indexOf(0x2c, pluralRuleStart);
	//    .local v0, "endType":I
	if ( endType >= 0 )
		goto label_cond_55;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Rule \")))->append(cVar0)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar1;
	// 588    .line 425
	// 589    .end local v0    # "endType":I
	// 590    .end local v1    # "pluralRuleEnd":I
	// 591    .end local v2    # "pluralRuleStart":I
label_cond_4c:
	this->sub2 = this->extractSubstitution(owner, predecessor);
	goto label_goto_f;
	// 601    .line 429
	// 602    .restart local v2    # "pluralRuleStart":I
label_cond_53:
	//    .restart local v1    # "pluralRuleEnd":I
	goto label_goto_21;
	// 609    .line 435
	// 610    .restart local v0    # "endType":I
label_cond_55:
	type = this->ruleText->substring(( pluralRuleStart + 0x2), endType);
	//    .local v4, "type":Ljava/lang/String;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("cardinal"))->equals(type)) )  
		goto label_cond_77;
	//    .local v3, "pluralType":Landroid/icu/text/PluralRules$PluralType;
label_goto_68:
	this->rulePatternFormat = this->formatter->createPluralFormat(pluralType, cVar0->substring(( endType + 0x1), pluralRuleEnd));
	//    .end local v0    # "endType":I
	//    .end local v3    # "pluralType":Landroid/icu/text/PluralRules$PluralType;
	//    .end local v4    # "type":Ljava/lang/String;
label_cond_76:
	return;
	// 659    .line 440
	// 660    .restart local v0    # "endType":I
	// 661    .restart local v4    # "type":Ljava/lang/String;
label_cond_77:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("ordinal"))->equals(type)) )  
		goto label_cond_83;
	//    .restart local v3    # "pluralType":Landroid/icu/text/PluralRules$PluralType;
	goto label_goto_68;
	// 677    .line 444
	// 678    .end local v3    # "pluralType":Landroid/icu/text/PluralRules$PluralType;
label_cond_83:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(cVar4->append(type)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" is an unknown type")))->toString());
	// throw
	throw cVar3;

}
// .method private findText(Ljava/lang/String;Ljava/lang/String;Landroid/icu/text/PluralFormat;I)[I
int android::icu::text::NFRule::findText(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::text::PluralFormat> pluralFormatKey,int startingAt)
{
	
	std::shared_ptr<android::icu::text::RbnfLenientScanner> scanner;
	std::shared_ptr<java::text::FieldPosition> position;
	int start;
	int pluralRuleStart;
	int matchLen;
	std::shared_ptr<java::lang::String> prefix;
	std::shared_ptr<java::lang::String> suffix;
	std::shared<std::vector<int[]>> cVar0;
	std::shared<std::vector<int[]>> cVar1;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "key"    # Ljava/lang/String;
	//    .param p3, "pluralFormatKey"    # Landroid/icu/text/PluralFormat;
	//    .param p4, "startingAt"    # I
	scanner = this->formatter->getLenientScanner();
	//    .local v5, "scanner":Landroid/icu/text/RbnfLenientScanner;
	if ( !(pluralFormatKey) )  
		goto label_cond_80;
	position = std::make_shared<java::text::FieldPosition>(0x0);
	//    .local v3, "position":Ljava/text/FieldPosition;
	position->setBeginIndex(startingAt);
	pluralFormatKey->parseType(str, scanner, position);
	start = position->getBeginIndex();
	//    .local v6, "start":I
	if ( start < 0 ) 
		goto label_cond_79;
	pluralRuleStart = this->ruleText->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("$(")));
	//    .local v1, "pluralRuleStart":I
	//    .local v2, "pluralRuleSuffix":I
	matchLen = (position->getEndIndex() - start);
	//    .local v0, "matchLen":I
	prefix = this->ruleText->substring(0x0, pluralRuleStart);
	//    .local v4, "prefix":Ljava/lang/String;
	suffix = this->ruleText->substring(( this->ruleText->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(")$")), pluralRuleStart) + 0x2));
	//    .local v7, "suffix":Ljava/lang/String;
	if ( !(str->regionMatches((start - prefix->length()), prefix, 0x0, prefix->length())) )  
		goto label_cond_79;
	if ( !(str->regionMatches((start + matchLen), suffix, 0x0, suffix->length())) )  
		goto label_cond_79;
	cVar0 = std::make_shared<std::vector<int[]>>(0x2);
	cVar0[0x0] = (start - prefix->length());
	cVar0[0x1] = ((prefix->length() +  matchLen) +  suffix->length());
	return cVar0;
	// 863    .line 1286
	// 864    .end local v0    # "matchLen":I
	// 865    .end local v1    # "pluralRuleStart":I
	// 866    .end local v2    # "pluralRuleSuffix":I
	// 867    .end local v4    # "prefix":Ljava/lang/String;
	// 868    .end local v7    # "suffix":Ljava/lang/String;
label_cond_79:
	?;
	return ?;
	// 880    .line 1289
	// 881    .end local v3    # "position":Ljava/text/FieldPosition;
	// 882    .end local v6    # "start":I
label_cond_80:
	if ( !(scanner) )  
		goto label_cond_87;
	return scanner->findText(str, key, startingAt);
	// 893    .line 1296
label_cond_87:
	cVar1 = std::make_shared<std::vector<int[]>>(0x2);
	cVar1[0x0] = str->indexOf(key, startingAt);
	cVar1[0x1] = key->length();
	return cVar1;

}
// .method private static indexOfAnyRulePrefix(Ljava/lang/String;)I
int android::icu::text::NFRule::indexOfAnyRulePrefix(std::shared_ptr<java::lang::String> ruleText)
{
	
	int cVar0;
	int cVar1;
	int result;
	std::shared_ptr<std::vector<java::lang::String>> cVar2;
	int pos;
	
	//    .param p0, "ruleText"    # Ljava/lang/String;
	cVar0 = 0x0;
	cVar1 = -0x1;
	result = -0x1;
	//    .local v1, "result":I
	if ( ruleText->length() <= 0 )
		goto label_cond_1e;
	cVar2 = android::icu::text::NFRule::RULE_PREFIXES;
label_goto_c:
	if ( cVar0 >= cVar2->size() )
		goto label_cond_1e;
	//    .local v2, "string":Ljava/lang/String;
	pos = ruleText->indexOf(cVar2[cVar0]);
	//    .local v0, "pos":I
	if ( pos == cVar1 )
		goto label_cond_1b;
	if ( result == cVar1 )
		goto label_cond_1a;
	if ( pos >= result )
		goto label_cond_1b;
label_cond_1a:
	result = pos;
label_cond_1b:
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_c;
	// 972    .line 602
	// 973    .end local v0    # "pos":I
	// 974    .end local v2    # "string":Ljava/lang/String;
label_cond_1e:
	return result;

}
// .method public static makeRules(Ljava/lang/String;Landroid/icu/text/NFRuleSet;Landroid/icu/text/NFRule;Landroid/icu/text/RuleBasedNumberFormat;Ljava/util/List;)V
void android::icu::text::NFRule::makeRules(std::shared_ptr<java::lang::String> description,std::shared_ptr<android::icu::text::NFRuleSet> owner,std::shared_ptr<android::icu::text::NFRule> predecessor,std::shared_ptr<android::icu::text::RuleBasedNumberFormat> ownersOwner,std::shared_ptr<java::util::List<android::icu::text::NFRule>> returnList)
{
	
	std::shared_ptr<android::icu::text::NFRule> rule1;
	std::shared_ptr<java::lang::String> cVar0;
	int brack1;
	int brack2;
	std::shared_ptr<java::lang::StringBuilder> sbuf;
	std::shared_ptr<android::icu::text::NFRule> rule2;
	
	//    .param p0, "description"    # Ljava/lang/String;
	//    .param p1, "owner"    # Landroid/icu/text/NFRuleSet;
	//    .param p2, "predecessor"    # Landroid/icu/text/NFRule;
	//    .param p3, "ownersOwner"    # Landroid/icu/text/RuleBasedNumberFormat;
	//    .annotation system Ldalvik/annotation/Signature;
	// 986        value = {
	// 987            "(",
	// 988            "Ljava/lang/String;",
	// 989            "Landroid/icu/text/NFRuleSet;",
	// 990            "Landroid/icu/text/NFRule;",
	// 991            "Landroid/icu/text/RuleBasedNumberFormat;",
	// 992            "Ljava/util/List",
	// 993            "<",
	// 994            "Landroid/icu/text/NFRule;",
	// 995            ">;)V"
	// 996        }
	// 997    .end annotation
	//    .local p4, "returnList":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/NFRule;>;"
	rule1 = std::make_shared<android::icu::text::NFRule>(ownersOwner, description);
	//    .local v2, "rule1":Landroid/icu/text/NFRule;
	cVar0 = rule1->ruleText;
	brack1 = cVar0->indexOf(0x5b);
	//    .local v0, "brack1":I
	if ( brack1 >= 0 )
		goto label_cond_23;
	brack2 = -0x1;
	//    .local v1, "brack2":I
label_goto_10:
	if ( brack2 < 0 ) 
		goto label_cond_14;
	if ( brack1 <= brack2 )
		goto label_cond_2a;
label_cond_14:
	rule1->extractSubstitutions(owner, cVar0, predecessor);
label_cond_17:
label_goto_17:
	if ( (rule1->baseValue > 0x0) < 0 ) 
		goto label_cond_124;
	returnList->add(rule1);
label_goto_22:
	return;
	// 1052    .line 147
	// 1053    .end local v1    # "brack2":I
label_cond_23:
	//    .restart local v1    # "brack2":I
	goto label_goto_10;
	// 1064    .line 154
label_cond_2a:
	if ( !((rule1->baseValue > -0x3)) )  
		goto label_cond_14;
	if ( !((rule1->baseValue > -0x1)) )  
		goto label_cond_14;
	if ( !((rule1->baseValue > -0x5)) )  
		goto label_cond_14;
	if ( !((rule1->baseValue > -0x6)) )  
		goto label_cond_14;
	//    .local v3, "rule2":Landroid/icu/text/NFRule;
	sbuf = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "sbuf":Ljava/lang/StringBuilder;
	if ( (rule1->baseValue > 0x0) <= 0 )
		goto label_cond_ed;
	if ( ((rule1->baseValue %  android::icu::text::NFRule::power((long long)(rule1->radix), rule1->exponent)) > 0x0) )     
		goto label_cond_ed;
label_cond_6a:
label_goto_6a:
	//    .end local v3    # "rule2":Landroid/icu/text/NFRule;
	rule2 = std::make_shared<android::icu::text::NFRule>(ownersOwner, 0x0);
	//    .local v3, "rule2":Landroid/icu/text/NFRule;
	if ( (rule1->baseValue > 0x0) < 0 ) 
		goto label_cond_ff;
	rule2->baseValue = rule1->baseValue;
	if ( owner->isFractionSet() )     
		goto label_cond_89;
	rule1->baseValue = (rule1->baseValue +  0x1);
label_cond_89:
label_goto_89:
	rule2->radix = rule1->radix;
	rule2->exponent = rule1->exponent;
	sbuf->append(cVar0->substring(0x0, brack1));
	if ( ( brack2 + 0x1) >= cVar0->length() )
		goto label_cond_aa;
	sbuf->append(cVar0->substring(( brack2 + 0x1)));
label_cond_aa:
	rule2->extractSubstitutions(owner, sbuf->toString(), predecessor);
	//    .end local v3    # "rule2":Landroid/icu/text/NFRule;
label_cond_b1:
	sbuf->setLength(0x0);
	sbuf->append(cVar0->substring(0x0, brack1));
	sbuf->append(cVar0->substring(( brack1 + 0x1), brack2));
	if ( ( brack2 + 0x1) >= cVar0->length() )
		goto label_cond_d7;
	sbuf->append(cVar0->substring(( brack2 + 0x1)));
label_cond_d7:
	rule1->extractSubstitutions(owner, sbuf->toString(), predecessor);
	if ( !(0x0) )  
		goto label_cond_17;
	if ( (rule2->baseValue > 0x0) < 0 ) 
		goto label_cond_11f;
	returnList->add(rule2);
	goto label_goto_17;
	// 1297    .line 172
	// 1298    .local v3, "rule2":Landroid/icu/text/NFRule;
label_cond_ed:
	if ( !((rule1->baseValue > -0x2)) )  
		goto label_cond_6a;
	if ( (rule1->baseValue > -0x4) )     
		goto label_cond_b1;
	goto label_goto_6a;
	// 1319    .line 188
	// 1320    .local v3, "rule2":Landroid/icu/text/NFRule;
label_cond_ff:
	if ( (rule1->baseValue > -0x2) )     
		goto label_cond_10d;
	rule2->baseValue = -0x3;
	goto label_goto_89;
	// 1337    .line 194
label_cond_10d:
	if ( (rule1->baseValue > -0x4) )     
		goto label_cond_89;
	rule2->baseValue = rule1->baseValue;
	rule1->baseValue = -0x2;
	goto label_goto_89;
	// 1359    .line 237
	// 1360    .end local v3    # "rule2":Landroid/icu/text/NFRule;
label_cond_11f:
	owner->setNonNumericalRule(rule2);
	goto label_goto_17;
	// 1366    .line 245
	// 1367    .end local v4    # "sbuf":Ljava/lang/StringBuilder;
label_cond_124:
	owner->setNonNumericalRule(rule1);
	goto label_goto_22;

}
// .method private matchToDelimiter(Ljava/lang/String;IDLjava/lang/String;Landroid/icu/text/PluralFormat;Ljava/text/ParsePosition;Landroid/icu/text/NFSubstitution;D)Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::text::NFRule::matchToDelimiter(std::shared_ptr<java::lang::String> text,int startPos,double baseVal,std::shared_ptr<java::lang::String> delimiter,std::shared_ptr<android::icu::text::PluralFormat> pluralFormatDelimiter,std::shared_ptr<java::text::ParsePosition> pp,std::shared_ptr<android::icu::text::NFSubstitution> sub,double upperBound)
{
	
	std::shared_ptr<java::text::ParsePosition> tempPP;
	auto temp;
	int dPos;
	int dLen;
	std::shared_ptr<java::lang::String> subText;
	auto tempResult;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "startPos"    # I
	//    .param p3, "baseVal"    # D
	//    .param p5, "delimiter"    # Ljava/lang/String;
	//    .param p6, "pluralFormatDelimiter"    # Landroid/icu/text/PluralFormat;
	//    .param p7, "pp"    # Ljava/text/ParsePosition;
	//    .param p8, "sub"    # Landroid/icu/text/NFSubstitution;
	//    .param p9, "upperBound"    # D
	if ( this->allIgnorable(delimiter) )     
		goto label_cond_79;
	tempPP = std::make_shared<java::text::ParsePosition>(0x0);
	//    .local v9, "tempPP":Ljava/text/ParsePosition;
	temp = this->findText(text, delimiter, pluralFormatDelimiter, startPos);
	//    .local v21, "temp":[I
	dPos = temp[0x0];
	//    .local v19, "dPos":I
	dLen = temp[0x1];
	//    .local v6, "dLen":I
label_goto_24:
	if ( dPos < 0 ) 
		goto label_cond_70;
	subText = text->substring(0x0, dPos);
	//    .local v8, "subText":Ljava/lang/String;
	if ( subText->length() <= 0 )
		goto label_cond_57;
	//    .local v22, "tempResult":Ljava/lang/Number;
	if ( tempPP->getIndex() != dPos )
		goto label_cond_57;
	pp->setIndex((dPos + dLen));
	return sub->doParse(subText, tempPP, baseVal, upperBound, this->formatter->lenientParseEnabled());
	// 1496    .line 1173
	// 1497    .end local v22    # "tempResult":Ljava/lang/Number;
label_cond_57:
	tempPP->setIndex(0x0);
	temp = this->findText(text, delimiter, pluralFormatDelimiter, (dPos + dLen));
	dPos = temp[0x0];
	dLen = temp[0x1];
	goto label_goto_24;
	// 1530    .line 1180
	// 1531    .end local v8    # "subText":Ljava/lang/String;
label_cond_70:
	pp->setIndex(0x0);
	return android::icu::text::NFRule::ZERO;
	// 1544    .line 1188
	// 1545    .end local v6    # "dLen":I
	// 1546    .end local v9    # "tempPP":Ljava/text/ParsePosition;
	// 1547    .end local v19    # "dPos":I
	// 1548    .end local v21    # "temp":[I
label_cond_79:
	if ( sub )     
		goto label_cond_80;
	return java::lang::Double::valueOf(baseVal);
	// 1559    .line 1192
label_cond_80:
	tempPP = std::make_shared<java::text::ParsePosition>(0x0);
	//    .restart local v9    # "tempPP":Ljava/text/ParsePosition;
	//    .local v20, "result":Ljava/lang/Number;
	tempResult = sub->doParse(text, tempPP, baseVal, upperBound, this->formatter->lenientParseEnabled());
	//    .restart local v22    # "tempResult":Ljava/lang/Number;
	if ( !(tempPP->getIndex()) )  
		goto label_cond_b0;
	pp->setIndex(tempPP->getIndex());
	if ( !(tempResult) )  
		goto label_cond_b0;
label_cond_b0:
	return android::icu::text::NFRule::ZERO;

}
// .method private parseRuleDescriptor(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NFRule::parseRuleDescriptor(std::shared_ptr<java::lang::String> cVar7)
{
	
	int p;
	std::shared_ptr<java::lang::String> descriptor;
	std::shared_ptr<java::lang::String> cVar7;
	int descriptorLength;
	int firstChar;
	int lastChar;
	long long tempValue;
	int c;
	auto tempValue;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "description"    # Ljava/lang/String;
	p = cVar7->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	//    .local v5, "p":I
	if ( p == -0x1 )
		goto label_cond_137;
	descriptor = cVar7->substring(0x0, p);
	//    .local v1, "descriptor":Ljava/lang/String;
	p = ( p + 0x1);
label_goto_11:
	if ( p >= cVar7->length() )
		goto label_cond_24;
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(cVar7->charAt(p))) )  
		goto label_cond_24;
	p = ( p + 0x1);
	goto label_goto_11;
	// 1676    .line 286
label_cond_24:
	cVar7 = cVar7->substring(p);
	descriptorLength = descriptor->length();
	//    .local v2, "descriptorLength":I
	firstChar = descriptor->charAt(0x0);
	//    .local v3, "firstChar":C
	lastChar = descriptor->charAt(( descriptorLength + -0x1));
	//    .local v4, "lastChar":C
	if ( firstChar <  0x30 )
		goto label_cond_129;
	if ( firstChar >  0x39 )
		goto label_cond_129;
	if ( lastChar == 0x78 )
		goto label_cond_129;
	tempValue = 0x0;
	//    .local v6, "tempValue":J
	c = 0x0;
	//    .local v0, "c":C
	p = 0x0;
	//    .end local v0    # "c":C
label_goto_47:
	if ( p >= descriptorLength )
		goto label_cond_68;
	c = descriptor->charAt(p);
	//    .local v0, "c":C
	if ( c <  0x30 )
		goto label_cond_60;
	if ( c >  0x39 )
		goto label_cond_60;
	tempValue = ((0xa *  tempValue) + (long long)(( c + -0x30)));
label_cond_5d:
	p = ( p + 0x1);
	goto label_goto_47;
	// 1765    .line 310
label_cond_60:
	if ( c == 0x2f )
		goto label_cond_68;
	if ( c != 0x3e )
		goto label_cond_8c;
	//    .end local v0    # "c":C
label_cond_68:
	this->setBaseValue(tempValue);
	if ( c != 0x2f )
		goto label_cond_104;
	tempValue = 0x0;
	p = ( p + 0x1);
label_goto_73:
	if ( p >= descriptorLength )
		goto label_cond_bf;
	c = descriptor->charAt(p);
	//    .restart local v0    # "c":C
	if ( c <  0x30 )
		goto label_cond_bb;
	if ( c >  0x39 )
		goto label_cond_bb;
	tempValue = ((0xa *  tempValue) + (long long)(( c + -0x30)));
label_cond_89:
	p = ( p + 0x1);
	goto label_goto_73;
	// 1827    .line 313
label_cond_8c:
	if ( android::icu::impl::PatternProps::isWhiteSpace(c) )     
		goto label_cond_5d;
	if ( c == 0x2c )
		goto label_cond_5d;
	if ( c == 0x2e )
		goto label_cond_5d;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal character ")))->append(c)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" in rule descriptor")))->toString());
	// throw
	throw cVar1;
	// 1874    .line 334
label_cond_bb:
	if ( c != 0x3e )
		goto label_cond_cf;
	//    .end local v0    # "c":C
label_cond_bf:
	this->radix = (int)(tempValue);
	if ( this->radix )     
		goto label_cond_fe;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Rule can\'t have radix of 0")));
	// throw
	throw cVar3;
	// 1901    .line 337
	// 1902    .restart local v0    # "c":C
label_cond_cf:
	if ( android::icu::impl::PatternProps::isWhiteSpace(c) )     
		goto label_cond_89;
	if ( c == 0x2c )
		goto label_cond_89;
	if ( c == 0x2e )
		goto label_cond_89;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal character ")))->append(c)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" in rule descriptor")))->toString());
	// throw
	throw cVar4;
	// 1949    .line 349
	// 1950    .end local v0    # "c":C
label_cond_fe:
	this->exponent = this->expectedExponent();
label_cond_104:
	if ( c != 0x3e )
		goto label_cond_137;
label_goto_108:
	if ( p >= descriptorLength )
		goto label_cond_137;
	//    .restart local v0    # "c":C
	if ( descriptor->charAt(p) != 0x3e )
		goto label_cond_120;
	if ( this->exponent <= 0 )
		goto label_cond_120;
	this->exponent = (short)(( this->exponent + -0x1));
	p = ( p + 0x1);
	goto label_goto_108;
	// 1997    .line 363
label_cond_120:
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal character in rule descriptor")));
	// throw
	throw cVar6;
	// 2007    .line 369
	// 2008    .end local v0    # "c":C
	// 2009    .end local v6    # "tempValue":J
label_cond_129:
	if ( !(descriptor->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("-x")))) )  
		goto label_cond_14c;
	this->setBaseValue(-0x1);
	//    .end local v1    # "descriptor":Ljava/lang/String;
	//    .end local v2    # "descriptorLength":I
	//    .end local v3    # "firstChar":C
	//    .end local v4    # "lastChar":C
label_cond_137:
label_goto_137:
	if ( cVar7->length() <= 0 )
		goto label_cond_14b;
	if ( cVar7->charAt(0x0) != 0x27 )
		goto label_cond_14b;
	cVar7 = cVar7->substring(0x1);
label_cond_14b:
	return cVar7;
	// 2058    .line 372
	// 2059    .restart local v1    # "descriptor":Ljava/lang/String;
	// 2060    .restart local v2    # "descriptorLength":I
	// 2061    .restart local v3    # "firstChar":C
	// 2062    .restart local v4    # "lastChar":C
label_cond_14c:
	if ( descriptorLength != 0x3 )
		goto label_cond_137;
	if ( firstChar != 0x30 )
		goto label_cond_164;
	if ( lastChar != 0x78 )
		goto label_cond_164;
	this->setBaseValue(-0x3);
	this->decimalPoint = descriptor->charAt(0x1);
	goto label_goto_137;
	// 2093    .line 377
label_cond_164:
	if ( firstChar != 0x78 )
		goto label_cond_179;
	if ( lastChar != 0x78 )
		goto label_cond_179;
	this->setBaseValue(-0x2);
	this->decimalPoint = descriptor->charAt(0x1);
	goto label_goto_137;
	// 2119    .line 381
label_cond_179:
	if ( firstChar != 0x78 )
		goto label_cond_18e;
	if ( lastChar != 0x30 )
		goto label_cond_18e;
	this->setBaseValue(-0x4);
	this->decimalPoint = descriptor->charAt(0x1);
	goto label_goto_137;
	// 2145    .line 385
label_cond_18e:
	if ( !(descriptor->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("NaN")))) )  
		goto label_cond_19d;
	this->setBaseValue(-0x6);
	goto label_goto_137;
	// 2162    .line 388
label_cond_19d:
	if ( !(descriptor->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("Inf")))) )  
		goto label_cond_137;
	this->setBaseValue(-0x5);
	goto label_goto_137;

}
// .method static power(JS)J
long long android::icu::text::NFRule::power(long long base,short exponent)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	long long result;
	long long base;
	int exponent;
	
	//    .param p0, "base"    # J
	//    .param p2, "exponent"    # S
	if ( exponent >= 0 )
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exponent can not be negative")));
	// throw
	throw cVar0;
	// 2198    .line 838
label_cond_b:
	if ( (base > 0x0) >= 0 )
		goto label_cond_1a;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Base can not be negative")));
	// throw
	throw cVar1;
	// 2215    .line 841
label_cond_1a:
	result = 0x1;
	//    .local v0, "result":J
label_goto_1c:
	if ( exponent <= 0 )
		goto label_cond_29;
	if ( ( exponent & 0x1) != 0x1 )
		goto label_cond_24;
	result = (result *  base);
label_cond_24:
	base = (base *  base);
	exponent = (short)(_shri(exponent,0x1));
	goto label_goto_1c;
	// 2245    .line 849
label_cond_29:
	return result;

}
// .method private prefixLength(Ljava/lang/String;Ljava/lang/String;)I
int android::icu::text::NFRule::prefixLength(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> prefix)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::RbnfLenientScanner> scanner;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "prefix"    # Ljava/lang/String;
	cVar0 = 0x0;
	if ( prefix->length() )     
		goto label_cond_8;
	return cVar0;
	// 2268    .line 1239
label_cond_8:
	scanner = this->formatter->getLenientScanner();
	//    .local v0, "scanner":Landroid/icu/text/RbnfLenientScanner;
	if ( !(scanner) )  
		goto label_cond_15;
	return scanner->prefixLength(str, prefix);
	// 2287    .line 1246
label_cond_15:
	if ( !(str->startsWith(prefix)) )  
		goto label_cond_20;
	return prefix->length();
	// 2302    .line 1249
label_cond_20:
	return cVar0;

}
// .method private stripPrefix(Ljava/lang/String;Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NFRule::stripPrefix(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::lang::String> prefix,std::shared_ptr<java::text::ParsePosition> pp)
{
	
	int pfl;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "prefix"    # Ljava/lang/String;
	//    .param p3, "pp"    # Ljava/text/ParsePosition;
	if ( prefix->length() )     
		goto label_cond_7;
	return text;
	// 2324    .line 1084
label_cond_7:
	pfl = this->prefixLength(text, prefix);
	//    .local v0, "pfl":I
	if ( !(pfl) )  
		goto label_cond_1a;
	pp->setIndex((pp->getIndex() +  pfl));
	return text->substring(pfl);
	// 2350    .line 1093
label_cond_1a:
	return text;

}
// .method public doFormat(DLjava/lang/StringBuilder;II)V
void android::icu::text::NFRule::doFormat(double number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int pos,int recursionCount)
{
	
	int pluralRuleStart;
	int lengthOffset;
	int cVar0;
	int pluralRuleEnd;
	auto pluralVal;
	double pluralVal;
	
	//    .param p1, "number"    # D
	//    .param p3, "toInsertInto"    # Ljava/lang/StringBuilder;
	//    .param p4, "pos"    # I
	//    .param p5, "recursionCount"    # I
	pluralRuleStart = this->ruleText->length();
	//    .local v11, "pluralRuleStart":I
	lengthOffset = 0x0;
	//    .local v9, "lengthOffset":I
	if ( this->rulePatternFormat )     
		goto label_cond_48;
	toInsertInto->insert(pos, this->ruleText);
label_goto_14:
	if ( !(this->sub2) )  
		goto label_cond_2e;
	if ( this->sub2->getPos() <= pluralRuleStart )
		goto label_cond_d1;
	cVar0 = lengthOffset;
label_goto_23:
	this->sub2->doSubstitution(number, toInsertInto, (pos - cVar0), recursionCount);
label_cond_2e:
	if ( !(this->sub1) )  
		goto label_cond_47;
	if ( this->sub1->getPos() <= pluralRuleStart )
		goto label_cond_d4;
	//    .end local v9    # "lengthOffset":I
label_goto_3c:
	this->sub1->doSubstitution(number, toInsertInto, (pos - lengthOffset), recursionCount);
label_cond_47:
	return;
	// 2454    .line 798
	// 2455    .restart local v9    # "lengthOffset":I
label_cond_48:
	pluralRuleStart = this->ruleText->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("$(")));
	pluralRuleEnd = this->ruleText->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(")$")), pluralRuleStart);
	//    .local v10, "pluralRuleEnd":I
	//    .local v2, "initialLength":I
	if ( pluralRuleEnd >= ( this->ruleText->length() + -0x1) )
		goto label_cond_77;
	toInsertInto->insert(pos, this->ruleText->substring(( pluralRuleEnd + 0x2)));
label_cond_77:
	pluralVal = number;
	//    .local v12, "pluralVal":D
	if ( (0x0 > number) > 0 ) 
		goto label_cond_c4;
	if ( (number > 0x3ff0000000000000L) >= 0 )
		goto label_cond_c4;
	pluralVal = (double)(java::lang::Math::round(((double)(android::icu::text::NFRule::power((long long)(this->radix), this->exponent)) *  number)));
label_goto_96:
	toInsertInto->insert(pos, this->rulePatternFormat->format((double)((long long)(pluralVal))));
	if ( pluralRuleStart <= 0 )
		goto label_cond_b5;
	toInsertInto->insert(pos, this->ruleText->substring(0x0, pluralRuleStart));
label_cond_b5:
	(this->ruleText->length() - (toInsertInto->length() -  toInsertInto->length()));
	goto label_goto_14;
	// 2600    .line 811
label_cond_c4:
	pluralVal = (number /  (double)(android::icu::text::NFRule::power((long long)(this->radix), this->exponent)));
	goto label_goto_96;
	// 2618    .line 820
	// 2619    .end local v2    # "initialLength":I
	// 2620    .end local v10    # "pluralRuleEnd":I
	// 2621    .end local v12    # "pluralVal":D
label_cond_d1:
	cVar0 = 0x0;
	goto label_goto_23;
	// 2627    .line 823
label_cond_d4:
	lengthOffset = 0x0;
	goto label_goto_3c;

}
// .method public doFormat(JLjava/lang/StringBuilder;II)V
void android::icu::text::NFRule::doFormat(long long number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int pos,int recursionCount)
{
	
	int pluralRuleStart;
	int lengthOffset;
	int cVar0;
	int pluralRuleEnd;
	
	//    .param p1, "number"    # J
	//    .param p3, "toInsertInto"    # Ljava/lang/StringBuilder;
	//    .param p4, "pos"    # I
	//    .param p5, "recursionCount"    # I
	pluralRuleStart = this->ruleText->length();
	//    .local v9, "pluralRuleStart":I
	lengthOffset = 0x0;
	//    .local v7, "lengthOffset":I
	if ( this->rulePatternFormat )     
		goto label_cond_40;
	toInsertInto->insert(pos, this->ruleText);
label_goto_10:
	if ( !(this->sub2) )  
		goto label_cond_28;
	if ( this->sub2->getPos() <= pluralRuleStart )
		goto label_cond_9b;
	cVar0 = lengthOffset;
label_goto_1f:
	this->sub2->doSubstitution(number, toInsertInto, (pos - cVar0), recursionCount);
label_cond_28:
	if ( !(this->sub1) )  
		goto label_cond_3f;
	if ( this->sub1->getPos() <= pluralRuleStart )
		goto label_cond_9d;
	//    .end local v7    # "lengthOffset":I
label_goto_36:
	this->sub1->doSubstitution(number, toInsertInto, (pos - lengthOffset), recursionCount);
label_cond_3f:
	return;
	// 2727    .line 756
	// 2728    .restart local v7    # "lengthOffset":I
label_cond_40:
	pluralRuleStart = this->ruleText->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("$(")));
	pluralRuleEnd = this->ruleText->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(")$")), pluralRuleStart);
	//    .local v8, "pluralRuleEnd":I
	//    .local v0, "initialLength":I
	if ( pluralRuleEnd >= ( this->ruleText->length() + -0x1) )
		goto label_cond_6b;
	toInsertInto->insert(pos, this->ruleText->substring(( pluralRuleEnd + 0x2)));
label_cond_6b:
	toInsertInto->insert(pos, this->rulePatternFormat->format((double)((number / android::icu::text::NFRule::power((long long)(this->radix), this->exponent)))));
	if ( pluralRuleStart <= 0 )
		goto label_cond_8c;
	toInsertInto->insert(pos, this->ruleText->substring(0x0, pluralRuleStart));
label_cond_8c:
	(this->ruleText->length() - (toInsertInto->length() -  toInsertInto->length()));
	goto label_goto_10;
	// 2832    .line 769
	// 2833    .end local v0    # "initialLength":I
	// 2834    .end local v8    # "pluralRuleEnd":I
label_cond_9b:
	cVar0 = 0x0;
	goto label_goto_1f;
	// 2840    .line 772
label_cond_9d:
	lengthOffset = 0x0;
	goto label_goto_36;

}
// .method public doParse(Ljava/lang/String;Ljava/text/ParsePosition;ZD)Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::text::NFRule::doParse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,bool isFractionRule,double upperBound)
{
	
	std::shared_ptr<java::text::ParsePosition> pp;
	int sub1Pos;
	int sub2Pos;
	std::shared_ptr<java::lang::String> workText;
	int prefixLength;
	int highWaterMark;
	auto result;
	int start;
	std::shared_ptr<java::text::ParsePosition> pp2;
	double result;
	std::shared_ptr<java::lang::Double> cVar0;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "parsePosition"    # Ljava/text/ParsePosition;
	//    .param p3, "isFractionRule"    # Z
	//    .param p4, "upperBound"    # D
	pp = std::make_shared<java::text::ParsePosition>(0x0);
	//    .local v10, "pp":Ljava/text/ParsePosition;
	if ( !(this->sub1) )  
		goto label_cond_4a;
	sub1Pos = this->sub1->getPos();
	//    .local v23, "sub1Pos":I
label_goto_14:
	if ( !(this->sub2) )  
		goto label_cond_53;
	sub2Pos = this->sub2->getPos();
	//    .local v26, "sub2Pos":I
label_goto_22:
	workText = this->stripPrefix(text, this->ruleText->substring(0x0, sub1Pos), pp);
	//    .local v4, "workText":Ljava/lang/String;
	prefixLength = (text->length() - workText->length());
	//    .local v22, "prefixLength":I
	if ( pp->getIndex() )     
		goto label_cond_5c;
	if ( !(sub1Pos) )  
		goto label_cond_5c;
	return android::icu::text::NFRule::ZERO;
	// 2945    .line 917
	// 2946    .end local v4    # "workText":Ljava/lang/String;
	// 2947    .end local v22    # "prefixLength":I
	// 2948    .end local v23    # "sub1Pos":I
	// 2949    .end local v26    # "sub2Pos":I
label_cond_4a:
	sub1Pos = this->ruleText->length();
	//    .restart local v23    # "sub1Pos":I
	goto label_goto_14;
	// 2962    .line 918
label_cond_53:
	sub2Pos = this->ruleText->length();
	//    .restart local v26    # "sub2Pos":I
	goto label_goto_22;
	// 2975    .line 927
	// 2976    .restart local v4    # "workText":Ljava/lang/String;
	// 2977    .restart local v22    # "prefixLength":I
label_cond_5c:
	if ( (this->baseValue > -0x5) )     
		goto label_cond_76;
	parsePosition->setIndex(pp->getIndex());
	return java::lang::Double::valueOf(0x7ff0000000000000L);
	// 3007    .line 932
label_cond_76:
	if ( (this->baseValue > -0x6) )     
		goto label_cond_90;
	parsePosition->setIndex(pp->getIndex());
	return java::lang::Double::valueOf(0x7ff8000000000000L);
	// 3037    .line 967
label_cond_90:
	highWaterMark = 0x0;
	//    .local v2, "highWaterMark":I
	result = 0x0;
	//    .local v24, "result":D
	//    .local v5, "start":I
	//    .local v6, "tempBaseValue":D
label_cond_a3:
	pp->setIndex(0x0);
	//    .local v14, "partialResult":D
	if ( pp->getIndex() )     
		goto label_cond_d3;
	if ( this->sub1 )     
		goto label_cond_131;
label_cond_d3:
	start = pp->getIndex();
	//    .local v12, "workText2":Ljava/lang/String;
	var108 = pp2(0x0);
	//    .local v18, "pp2":Ljava/text/ParsePosition;
	if ( pp2->getIndex() )     
		goto label_cond_116;
	if ( this->sub2 )     
		goto label_cond_131;
label_cond_116:
	if ( ((pp->getIndex() + prefixLength) +  pp2->getIndex()) <= highWaterMark )
		goto label_cond_131;
	highWaterMark = ((pp->getIndex() + prefixLength) + pp2->getIndex());
	result = this->matchToDelimiter(workText->substring(pp->getIndex()), 0x0, this->matchToDelimiter(workText, start, (double)(java::lang::Math::max(0x0, this->baseValue)), this->ruleText->substring(sub1Pos, sub2Pos), this->rulePatternFormat, pp, this->sub1, upperBound)->doubleValue(), this->ruleText->substring(sub2Pos), this->rulePatternFormat, pp2, this->sub2, upperBound)->doubleValue();
	//    .end local v12    # "workText2":Ljava/lang/String;
	//    .end local v18    # "pp2":Ljava/text/ParsePosition;
label_cond_131:
	if ( sub1Pos == sub2Pos )
		goto label_cond_14d;
	if ( pp->getIndex() <= 0 )
		goto label_cond_14d;
	if ( pp->getIndex() >= workText->length() )
		goto label_cond_14d;
	if ( pp->getIndex() != start )
		goto label_cond_a3;
label_cond_14d:
	parsePosition->setIndex(highWaterMark);
	if ( !(isFractionRule) )  
		goto label_cond_160;
	if ( highWaterMark <= 0 )
		goto label_cond_160;
	if ( this->sub1 )     
		goto label_cond_160;
	result = (0x3ff0000000000000L /  result);
label_cond_160:
	if ( (result < (double)((long long)(result))) )     
		goto label_cond_170;
	return java::lang::Long::valueOf((long long)(result));
	// 3312    .line 1055
label_cond_170:
	cVar0 = std::make_shared<java::lang::Double>(result);
	return cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::NFRule::equals(std::shared_ptr<java::lang::Object> that)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::NFRule> that2;
	
	//    .param p1, "that"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(that->instanceOf("android::icu::text::NFRule")) )  
		goto label_cond_39;
	that2 = that;
	that2->checkCast("android::icu::text::NFRule");
	//    .local v0, "that2":Landroid/icu/text/NFRule;
	if ( (this->baseValue > that2->baseValue) )     
		goto label_cond_38;
	if ( this->radix != that2->radix )
		goto label_cond_38;
	if ( this->exponent != that2->exponent )
		goto label_cond_38;
	if ( !(this->ruleText->equals(that2->ruleText)) )  
		goto label_cond_38;
	if ( !(android::icu::impl::Utility::objectEquals(this->sub1, that2->sub1)) )  
		goto label_cond_38;
	cVar1 = android::icu::impl::Utility::objectEquals(this->sub2, that2->sub2);
label_cond_38:
	return cVar1;
	// 3401    .line 625
	// 3402    .end local v0    # "that2":Landroid/icu/text/NFRule;
label_cond_39:
	return cVar1;

}
// .method public final getBaseValue()J
long long android::icu::text::NFRule::getBaseValue()
{
	
	return this->baseValue;

}
// .method public final getDecimalPoint()C
char android::icu::text::NFRule::getDecimalPoint()
{
	
	return this->decimalPoint;

}
// .method public getDivisor()J
long long android::icu::text::NFRule::getDivisor()
{
	
	return android::icu::text::NFRule::power((long long)(this->radix), this->exponent);

}
// .method public hashCode()I
int android::icu::text::NFRule::hashCode()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( android::icu::text::NFRule::_assertionsDisabled )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hashCode not designed")));
	// throw
	throw cVar0;
	// 3462    .line 630
label_cond_d:
	return 0x2a;

}
// .method final setBaseValue(J)V
void android::icu::text::NFRule::setBaseValue(long long newBaseValue)
{
	
	//    .param p1, "newBaseValue"    # J
	this->baseValue = newBaseValue;
	this->radix = 0xa;
	if ( (this->baseValue > 0x1) < 0 ) 
		goto label_cond_2f;
	this->exponent = this->expectedExponent();
	if ( !(this->sub1) )  
		goto label_cond_21;
	this->sub1->setDivisor(this->radix, this->exponent);
label_cond_21:
	if ( !(this->sub2) )  
		goto label_cond_2e;
	this->sub2->setDivisor(this->radix, this->exponent);
label_cond_2e:
label_goto_2e:
	return;
	// 3532    .line 550
label_cond_2f:
	this->exponent = 0x0;
	goto label_goto_2e;

}
// .method public setDecimalFormatSymbols(Landroid/icu/text/DecimalFormatSymbols;)V
void android::icu::text::NFRule::setDecimalFormatSymbols(std::shared_ptr<android::icu::text::DecimalFormatSymbols> newSymbols)
{
	
	//    .param p1, "newSymbols"    # Landroid/icu/text/DecimalFormatSymbols;
	if ( !(this->sub1) )  
		goto label_cond_9;
	this->sub1->setDecimalFormatSymbols(newSymbols);
label_cond_9:
	if ( !(this->sub2) )  
		goto label_cond_12;
	this->sub2->setDecimalFormatSymbols(newSymbols);
label_cond_12:
	return;

}
// .method public shouldRollBack(J)Z
bool android::icu::text::NFRule::shouldRollBack(long long number)
{
	
	long long cVar0;
	bool cVar1;
	bool cVar2;
	int cVar3;
	auto divisor;
	
	//    .param p1, "number"    # J
	cVar0 = 0x0;
	cVar1 = 0x1;
	cVar2 = 0x0;
	if ( !(this->sub1) )  
		goto label_cond_10;
	if ( this->sub1->isModulusSubstitution() )     
		goto label_cond_1d;
label_cond_10:
	if ( !(this->sub2) )  
		goto label_cond_1f;
	cVar3 = this->sub2->isModulusSubstitution();
label_goto_1a:
	if ( cVar3 )     
		goto label_cond_21;
	return cVar2;
label_cond_1d:
	cVar3 = cVar1;
	goto label_goto_1a;
label_cond_1f:
	cVar3 = cVar2;
	goto label_goto_1a;
	// 3624    .line 880
label_cond_21:
	divisor = android::icu::text::NFRule::power((long long)(this->radix), this->exponent);
	//    .local v0, "divisor":J
	if ( ((number % divisor) > cVar0) )     
		goto label_cond_38;
	if ( !(((this->baseValue %  divisor) > cVar0)) )  
		goto label_cond_38;
label_goto_37:
	return cVar1;
label_cond_38:
	cVar1 = cVar2;
	goto label_goto_37;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NFRule::toString()
{
	
	char cVar0;
	char cVar1;
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<java::lang::StringBuilder> ruleTextCopy;
	int i;
	
	cVar0 = 0x78;
	cVar1 = 0x2e;
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "result":Ljava/lang/StringBuilder;
	if ( (this->baseValue > -0x1) )     
		goto label_cond_71;
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-x: ")));
label_goto_17:
	if ( !(this->ruleText->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))) )  
		goto label_cond_33;
	if ( !(this->sub1) )  
		goto label_cond_2e;
	if ( !(this->sub1->getPos()) )  
		goto label_cond_33;
label_cond_2e:
	result->append(0x27);
label_cond_33:
	ruleTextCopy = std::make_shared<java::lang::StringBuilder>(this->ruleText);
	//    .local v3, "ruleTextCopy":Ljava/lang/StringBuilder;
	if ( !(this->sub2) )  
		goto label_cond_4d;
	ruleTextCopy->insert(this->sub2->getPos(), this->sub2->toString());
label_cond_4d:
	if ( !(this->sub1) )  
		goto label_cond_60;
	ruleTextCopy->insert(this->sub1->getPos(), this->sub1->toString());
label_cond_60:
	result->append(ruleTextCopy->toString());
	result->append(0x3b);
	return result->toString();
	// 3789    .line 646
	// 3790    .end local v3    # "ruleTextCopy":Ljava/lang/StringBuilder;
label_cond_71:
	if ( (this->baseValue > -0x2) )     
		goto label_cond_8f;
	if ( this->decimalPoint )     
		goto label_cond_8c;
label_goto_81:
	result->append(cVar0)->append(cVar1)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("x: ")));
	goto label_goto_17;
label_cond_8c:
	cVar1 = this->decimalPoint;
	goto label_goto_81;
	// 3825    .line 649
label_cond_8f:
	if ( (this->baseValue > -0x3) )     
		goto label_cond_b0;
	if ( this->decimalPoint )     
		goto label_cond_ad;
label_goto_a1:
	result->append(0x30)->append(cVar1)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("x: ")));
	goto label_goto_17;
label_cond_ad:
	cVar1 = this->decimalPoint;
	goto label_goto_a1;
	// 3862    .line 652
label_cond_b0:
	if ( (this->baseValue > -0x4) )     
		goto label_cond_cf;
	if ( this->decimalPoint )     
		goto label_cond_cc;
label_goto_c0:
	result->append(cVar0)->append(cVar1)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("0: ")));
	goto label_goto_17;
label_cond_cc:
	cVar1 = this->decimalPoint;
	goto label_goto_c0;
	// 3897    .line 655
label_cond_cf:
	if ( (this->baseValue > -0x5) )     
		goto label_cond_df;
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Inf: ")));
	goto label_goto_17;
	// 3914    .line 658
label_cond_df:
	if ( (this->baseValue > -0x6) )     
		goto label_cond_ef;
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("NaN: ")));
	goto label_goto_17;
	// 3931    .line 668
label_cond_ef:
	result->append(java::lang::String::valueOf(this->baseValue));
	if ( this->radix == 0xa )
		goto label_cond_109;
	result->append(0x2f)->append(this->radix);
label_cond_109:
	//    .local v1, "numCarets":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_112:
	if ( i >= (this->expectedExponent() - this->exponent) )
		goto label_cond_11c;
	result->append(0x3e);
	i = ( i + 0x1);
	goto label_goto_112;
	// 3987    .line 675
label_cond_11c:
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(": ")));
	goto label_goto_17;

}


