// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules.smali
#include "java2ctype.h"
#include "android.icu.impl.PluralRulesLoader.h"
#include "android.icu.text.PluralRules_S_1.h"
#include "android.icu.text.PluralRules_S_AndConstraint.h"
#include "android.icu.text.PluralRules_S_Constraint.h"
#include "android.icu.text.PluralRules_S_Factory.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_FixedDecimalSamples.h"
#include "android.icu.text.PluralRules_S_KeywordStatus.h"
#include "android.icu.text.PluralRules_S_Operand.h"
#include "android.icu.text.PluralRules_S_OrConstraint.h"
#include "android.icu.text.PluralRules_S_PluralType.h"
#include "android.icu.text.PluralRules_S_RangeConstraint.h"
#include "android.icu.text.PluralRules_S_Rule.h"
#include "android.icu.text.PluralRules_S_RuleList.h"
#include "android.icu.text.PluralRules_S_SampleType.h"
#include "android.icu.text.PluralRules_S_SimpleTokenizer.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.text.PluralRulesSerialProxy.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.ULocale.h"
#include "java.io.NotSerializableException.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Double.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParseException.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"
#include "java.util.TreeSet.h"
#include "java.util.regex.Pattern.h"

static android::icu::text::PluralRules::_android_icu_text_PluralRules_S_SampleTypeSwitchesValues = nullptr;
static android::icu::text::PluralRules::ALLOWED_ID;
static android::icu::text::PluralRules::AND_SEPARATED;
static android::icu::text::PluralRules::AT_SEPARATED;
static android::icu::text::PluralRules::CATEGORY_SEPARATOR = std::make_shared<java::lang::String>(";  ");
static android::icu::text::PluralRules::COMMA_SEPARATED;
static android::icu::text::PluralRules::DEFAULT;
static android::icu::text::PluralRules::DEFAULT_RULE;
static android::icu::text::PluralRules::DOTDOT_SEPARATED;
static android::icu::text::PluralRules::KEYWORD_FEW = std::make_shared<java::lang::String>("few");
static android::icu::text::PluralRules::KEYWORD_MANY = std::make_shared<java::lang::String>("many");
static android::icu::text::PluralRules::KEYWORD_ONE = std::make_shared<java::lang::String>("one");
static android::icu::text::PluralRules::KEYWORD_OTHER = std::make_shared<java::lang::String>("other");
static android::icu::text::PluralRules::KEYWORD_RULE_SEPARATOR = std::make_shared<java::lang::String>(": ");
static android::icu::text::PluralRules::KEYWORD_TWO = std::make_shared<java::lang::String>("two");
static android::icu::text::PluralRules::KEYWORD_ZERO = std::make_shared<java::lang::String>("zero");
static android::icu::text::PluralRules::NO_CONSTRAINT;
static android::icu::text::PluralRules::NO_UNIQUE_VALUE = -0.00123456777;
static android::icu::text::PluralRules::OR_SEPARATED;
static android::icu::text::PluralRules::SEMI_SEPARATED;
static android::icu::text::PluralRules::TILDE_SEPARATED;
static android::icu::text::PluralRules::serialVersionUID = 0x1L;
// .method private static synthetic -getandroid-icu-text-PluralRules$SampleTypeSwitchesValues()[I
int android::icu::text::PluralRules::_getandroid_icu_text_PluralRules_S_SampleTypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::text::PluralRules::_android_icu_text_PluralRules_S_SampleTypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::text::PluralRules::_android_icu_text_PluralRules_S_SampleTypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::text::PluralRules_S_SampleType::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::text::PluralRules_S_SampleType::DECIMAL->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_25
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::text::PluralRules_S_SampleType::INTEGER->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_23
label_goto_20:
	android::icu::text::PluralRules::_android_icu_text_PluralRules_S_SampleTypeSwitchesValues = cVar0;
	return cVar0;
label_catch_23:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_25:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static synthetic -wrap0(Ljava/lang/String;)Landroid/icu/text/PluralRules$Rule;
std::shared_ptr<android::icu::text::PluralRules_S_Rule> android::icu::text::PluralRules::_wrap0(std::shared_ptr<java::lang::String> description)
{
	
	//    .param p0, "description"    # Ljava/lang/String;
	return android::icu::text::PluralRules::parseRule(description);

}
// .method static synthetic -wrap1(Ljava/lang/StringBuilder;DDZ)V
void android::icu::text::PluralRules::_wrap1(std::shared_ptr<java::lang::StringBuilder> result,double lb,double ub,bool addSeparator)
{
	
	//    .param p0, "result"    # Ljava/lang/StringBuilder;
	//    .param p1, "lb"    # D
	//    .param p3, "ub"    # D
	//    .param p5, "addSeparator"    # Z
	android::icu::text::PluralRules::addRange(result, lb, ub, addSeparator);
	return;

}
// .method static constructor <clinit>()V
void android::icu::text::PluralRules::static_cinit()
{
	
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar1;
	std::shared_ptr<android::icu::text::PluralRules_S_1> cVar2;
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> cVar3;
	std::shared_ptr<android::icu::text::PluralRules> cVar4;
	std::shared_ptr<android::icu::text::PluralRules_S_RuleList> cVar5;
	
	cVar0 = 0x0;
	cVar1 = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[a-z]")));
	android::icu::text::PluralRules::ALLOWED_ID = cVar1->freeze();
	cVar2 = std::make_shared<android::icu::text::PluralRules_S_1>();
	android::icu::text::PluralRules::NO_CONSTRAINT = cVar2;
	cVar3 = std::make_shared<android::icu::text::PluralRules_S_Rule>(std::make_shared<java::lang::String>(std::make_shared<char[]>("other")), android::icu::text::PluralRules::NO_CONSTRAINT, cVar0, cVar0);
	android::icu::text::PluralRules::DEFAULT_RULE = cVar3;
	cVar5 = std::make_shared<android::icu::text::PluralRules_S_RuleList>(cVar0);
	cVar4 = std::make_shared<android::icu::text::PluralRules>(cVar5->addRule(android::icu::text::PluralRules::DEFAULT_RULE));
	android::icu::text::PluralRules::DEFAULT = cVar4;
	android::icu::text::PluralRules::AT_SEPARATED = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\s*\\Q\\E@\\s*")));
	android::icu::text::PluralRules::OR_SEPARATED = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\s*or\\s*")));
	android::icu::text::PluralRules::AND_SEPARATED = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\s*and\\s*")));
	android::icu::text::PluralRules::COMMA_SEPARATED = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\s*,\\s*")));
	android::icu::text::PluralRules::DOTDOT_SEPARATED = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\s*\\Q..\\E\\s*")));
	android::icu::text::PluralRules::TILDE_SEPARATED = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\s*~\\s*")));
	android::icu::text::PluralRules::SEMI_SEPARATED = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\s*;\\s*")));
	return;

}
// .method private constructor <init>(Landroid/icu/text/PluralRules$RuleList;)V
android::icu::text::PluralRules::PluralRules(std::shared_ptr<android::icu::text::PluralRules_S_RuleList> rules)
{
	
	//    .param p1, "rules"    # Landroid/icu/text/PluralRules$RuleList;
	// 316    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->rules = rules;
	this->keywords = java::util::Collections::unmodifiableSet(rules->getKeywords());
	return;

}
// .method private addConditional(Ljava/util/Set;Ljava/util/Set;D)Z
bool android::icu::text::PluralRules::addConditional(std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>> toAddTo,std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>> others,double trial)
{
	
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> toAdd;
	
	//    .param p3, "trial"    # D
	//    .annotation system Ldalvik/annotation/Signature;
	// 340        value = {
	// 341            "(",
	// 342            "Ljava/util/Set",
	// 343            "<",
	// 344            "Landroid/icu/text/PluralRules$FixedDecimal;",
	// 345            ">;",
	// 346            "Ljava/util/Set",
	// 347            "<",
	// 348            "Landroid/icu/text/PluralRules$FixedDecimal;",
	// 349            ">;D)Z"
	// 350        }
	// 351    .end annotation
	//    .local p1, "toAddTo":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;"
	//    .local p2, "others":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;"
	toAdd = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(trial);
	//    .local v1, "toAdd":Landroid/icu/text/PluralRules$FixedDecimal;
	if ( toAddTo->contains(toAdd) )     
		goto label_cond_18;
	if ( !(( others->contains(toAdd) ^ 0x1)) )  
		goto label_cond_18;
	others->add(toAdd);
	//    .local v0, "added":Z
label_goto_17:
	return added;
	// 388    .line 1856
	// 389    .end local v0    # "added":Z
label_cond_18:
	//    .restart local v0    # "added":Z
	goto label_goto_17;

}
// .method private static addRange(Ljava/lang/StringBuilder;DDZ)V
void android::icu::text::PluralRules::addRange(std::shared_ptr<java::lang::StringBuilder> result,double lb,double ub,bool addSeparator)
{
	
	//    .param p0, "result"    # Ljava/lang/StringBuilder;
	//    .param p1, "lb"    # D
	//    .param p3, "ub"    # D
	//    .param p5, "addSeparator"    # Z
	if ( !(addSeparator) )  
		goto label_cond_8;
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",")));
label_cond_8:
	if ( (lb < ub) )     
		goto label_cond_14;
	result->append(android::icu::text::PluralRules::format(lb));
label_goto_13:
	return;
	// 430    .line 1584
label_cond_14:
	result->append(android::icu::text::PluralRules::format(lb))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("..")))->append(android::icu::text::PluralRules::format(ub));
	goto label_goto_13;

}
// .method public static createRules(Ljava/lang/String;)Landroid/icu/text/PluralRules;
std::shared_ptr<android::icu::text::PluralRules> android::icu::text::PluralRules::createRules(std::shared_ptr<java::lang::String> description)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "description"    # Ljava/lang/String;
	try {
	//label_try_start_0:
	//label_try_end_3:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5;
	}
	//    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_3} :catch_5
	return android::icu::text::PluralRules::parseDescription(description);
	// 470    .line 400
label_catch_5:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	return 0x0;

}
// .method public static forLocale(Landroid/icu/util/ULocale;)Landroid/icu/text/PluralRules;
std::shared_ptr<android::icu::text::PluralRules> android::icu::text::PluralRules::forLocale(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::PluralRules_S_Factory::getDefaultFactory({const[class].FS-Param})->forLocale(locale, android::icu::text::PluralRules_S_PluralType::CARDINAL);

}
// .method public static forLocale(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;)Landroid/icu/text/PluralRules;
std::shared_ptr<android::icu::text::PluralRules> android::icu::text::PluralRules::forLocale(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "type"    # Landroid/icu/text/PluralRules$PluralType;
	return android::icu::text::PluralRules_S_Factory::getDefaultFactory({const[class].FS-Param})->forLocale(locale, type);

}
// .method public static forLocale(Ljava/util/Locale;)Landroid/icu/text/PluralRules;
std::shared_ptr<android::icu::text::PluralRules> android::icu::text::PluralRules::forLocale(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	return android::icu::text::PluralRules::forLocale(android::icu::util::ULocale::forLocale(locale));

}
// .method public static forLocale(Ljava/util/Locale;Landroid/icu/text/PluralRules$PluralType;)Landroid/icu/text/PluralRules;
std::shared_ptr<android::icu::text::PluralRules> android::icu::text::PluralRules::forLocale(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	//    .param p1, "type"    # Landroid/icu/text/PluralRules$PluralType;
	return android::icu::text::PluralRules::forLocale(android::icu::util::ULocale::forLocale(locale), type);

}
// .method private static format(D)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules::format(double lb)
{
	
	long long lbi;
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "lb"    # D
	lbi = (long long)(lb);
	//    .local v0, "lbi":J
	if ( (lb < (double)(lbi)) )     
		goto label_cond_b;
	cVar0 = java::lang::String::valueOf(lbi);
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = java::lang::String::valueOf(lb);
	goto label_goto_a;

}
// .method public static getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::PluralRules::getAvailableULocales()
{
	
	return android::icu::text::PluralRules_S_Factory::getDefaultFactory({const[class].FS-Param})->getAvailableULocales();

}
// .method public static getFunctionalEquivalent(Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::PluralRules::getFunctionalEquivalent(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<bool[]> isAvailable)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "isAvailable"    # [Z
	return android::icu::text::PluralRules_S_Factory::getDefaultFactory({const[class].FS-Param})->getFunctionalEquivalent(locale, isAvailable);

}
// .method private static isValidKeyword(Ljava/lang/String;)Z
bool android::icu::text::PluralRules::isValidKeyword(std::shared_ptr<java::lang::String> token)
{
	
	//    .param p0, "token"    # Ljava/lang/String;
	return android::icu::text::PluralRules::ALLOWED_ID->containsAll(token);

}
// .method private static nextToken([Ljava/lang/String;ILjava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules::nextToken(std::shared_ptr<std::vector<java::lang::String>> tokens,int x,std::shared_ptr<java::lang::String> context)
{
	
	std::shared_ptr<java::text::ParseException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "tokens"    # [Ljava/lang/String;
	//    .param p1, "x"    # I
	//    .param p2, "context"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 639        value = {
	// 640            Ljava/text/ParseException;
	// 641        }
	// 642    .end annotation
	if ( x >= tokens->size() )
		goto label_cond_6;
	return tokens[x];
	// 655    .line 1393
label_cond_6:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::text::ParseException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("missing token at end of \'")))->append(context)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString(), -0x1);
	// throw
	throw cVar0;

}
// .method private static parseConstraint(Ljava/lang/String;)Landroid/icu/text/PluralRules$Constraint;
std::shared_ptr<android::icu::text::PluralRules_S_Constraint> android::icu::text::PluralRules::parseConstraint(std::shared_ptr<java::lang::String> description)
{
	
	std::shared_ptr<android::icu::text::PluralRules_S_Constraint> result;
	auto or_together;
	int i;
	std::shared_ptr<android::icu::text::PluralRules_S_Constraint> andConstraint;
	auto and_together;
	int j;
	std::shared_ptr<java::lang::String> condition;
	auto tokens;
	int inRange;
	int x;
	std::shared_ptr<java::lang::String> t;
	std::vector<std::any> tryCatchExcetionList;
	auto t;
	int mod;
	int hackForCompatibility;
	bool inRange;
	std::shared_ptr<java::util::ArrayList> valueList;
	long long low;
	long long high;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	double lowBound;
	double highBound;
	std::shared_ptr<android::icu::text::PluralRules_S_RangeConstraint> newConstraint;
	std::shared_ptr<android::icu::text::PluralRules_S_AndConstraint> andConstraint;
	std::shared<std::vector<long long[]>> vals;
	int k;
	std::shared_ptr<java::lang::Long> cVar2;
	std::shared_ptr<android::icu::text::PluralRules_S_OrConstraint> result;
	auto result;
	
	//    .param p0, "description"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 694        value = {
	// 695            Ljava/text/ParseException;
	// 696        }
	// 697    .end annotation
	result = 0x0;
	//    .local v28, "result":Landroid/icu/text/PluralRules$Constraint;
	or_together = android::icu::text::PluralRules::OR_SEPARATED->split(description);
	//    .local v25, "or_together":[Ljava/lang/String;
	i = 0x0;
	//    .end local v28    # "result":Landroid/icu/text/PluralRules$Constraint;
	//    .local v22, "i":I
label_goto_e:
	if ( i >= or_together->size() )
		goto label_cond_36f;
	andConstraint = 0x0;
	//    .local v4, "andConstraint":Landroid/icu/text/PluralRules$Constraint;
	and_together = android::icu::text::PluralRules::AND_SEPARATED->split(or_together[i]);
	//    .local v16, "and_together":[Ljava/lang/String;
	j = 0x0;
	//    .end local v4    # "andConstraint":Landroid/icu/text/PluralRules$Constraint;
	//    .local v23, "j":I
label_goto_24:
	if ( j >= and_together->size() )
		goto label_cond_35b;
	//    .local v5, "newConstraint":Landroid/icu/text/PluralRules$Constraint;
	condition = and_together[j]->trim();
	//    .local v17, "condition":Ljava/lang/String;
	tokens = android::icu::text::PluralRules_S_SimpleTokenizer::split(condition);
	//    .local v31, "tokens":[Ljava/lang/String;
	//    .local v6, "mod":I
	inRange = 0x1;
	//    .local v7, "inRange":Z
	//    .local v9, "integersOnly":Z
	//    .local v10, "lowBound":D
	//    .local v12, "highBound":D
	0x0;
	//    .local v14, "vals":[J
	0x0;
	//    .local v33, "x":I
	x = 0x1;
	t = tokens[0x0];
	//    .local v30, "t":Ljava/lang/String;
	0x0;
	//    .local v19, "hackForCompatibility":Z
	try {
	//label_try_start_4d:
	//label_try_end_50:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_c1;
	}
	//    .catch Ljava/lang/Exception; {:try_start_4d .. :try_end_50} :catch_c1
	//    .local v8, "operand":Landroid/icu/text/PluralRules$Operand;
	if ( x >= tokens->size() )
		goto label_cond_34d;
	x = ( x + 0x1);
	//    .end local v33    # "x":I
	//    .local v34, "x":I
	t = tokens[x];
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("mod"))->equals(t) )     
		goto label_cond_7a;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("%"))->equals(t)) )  
		goto label_cond_370;
label_cond_7a:
	x = ( x + 0x1);
	//    .end local v34    # "x":I
	//    .restart local v33    # "x":I
	mod = java::lang::Integer::parseInt(tokens[x]);
	//    .end local v33    # "x":I
	//    .restart local v34    # "x":I
	t = android::icu::text::PluralRules::nextToken(tokens, x, condition);
	x = ( x + 0x1);
	//    .end local v34    # "x":I
	//    .restart local v33    # "x":I
label_goto_90:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("not"))->equals(t)) )  
		goto label_cond_cb;
	inRange = ( inRange ^ 0x1);
	//    .end local v33    # "x":I
	//    .restart local v34    # "x":I
	t = android::icu::text::PluralRules::nextToken(tokens, x, condition);
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("="))->equals(t)) )  
		goto label_cond_fc;
	// throw
	throw android::icu::text::PluralRules::unexpected(t, condition);
	// 965    .line 1246
	// 966    .end local v8    # "operand":Landroid/icu/text/PluralRules$Operand;
	// 967    .end local v34    # "x":I
	// 968    .restart local v33    # "x":I
label_catch_c1:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v18, "e":Ljava/lang/Exception;
	// throw
	throw android::icu::text::PluralRules::unexpected(t, condition);
	// 984    .line 1261
	// 985    .end local v18    # "e":Ljava/lang/Exception;
	// 986    .restart local v8    # "operand":Landroid/icu/text/PluralRules$Operand;
label_cond_cb:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("!"))->equals(t)) )  
		goto label_cond_fe;
	( inRange ^ 0x1);
	//    .end local v33    # "x":I
	//    .restart local v34    # "x":I
	t = android::icu::text::PluralRules::nextToken(tokens, x, condition);
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("="))->equals(t) )     
		goto label_cond_fc;
	// throw
	throw android::icu::text::PluralRules::unexpected(t, condition);
label_cond_fc:
	x = x;
	//    .end local v34    # "x":I
	//    .restart local v33    # "x":I
label_cond_fe:
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("is"))->equals(t) )     
		goto label_cond_125;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("in"))->equals(t) )     
		goto label_cond_125;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("="))->equals(t)) )  
		goto label_cond_169;
label_cond_125:
	hackForCompatibility = std::make_shared<java::lang::String>(std::make_shared<char[]>("is"))->equals(t);
	//    .local v19, "hackForCompatibility":Z
	if ( !(hackForCompatibility) )  
		goto label_cond_13f;
	if ( !(( inRange ^ 0x1)) )  
		goto label_cond_13f;
	// throw
	throw android::icu::text::PluralRules::unexpected(t, condition);
	// 1116    .line 1273
label_cond_13f:
	//    .end local v33    # "x":I
	//    .restart local v34    # "x":I
	t = android::icu::text::PluralRules::nextToken(tokens, x, condition);
	x = ( x + 0x1);
	//    .end local v19    # "hackForCompatibility":Z
	//    .end local v34    # "x":I
	//    .restart local v33    # "x":I
label_goto_14d:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("not"))->equals(t)) )  
		goto label_cond_19f;
	if ( hackForCompatibility )     
		goto label_cond_18f;
	if ( !(( inRange ^ 0x1)) )  
		goto label_cond_18f;
	// throw
	throw android::icu::text::PluralRules::unexpected(t, condition);
	// 1169    .line 1274
	// 1170    .local v19, "hackForCompatibility":Z
label_cond_169:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("within"))->equals(t)) )  
		goto label_cond_186;
	0x0;
	//    .end local v33    # "x":I
	//    .restart local v34    # "x":I
	t = android::icu::text::PluralRules::nextToken(tokens, x, condition);
	x = ( x + 0x1);
	//    .end local v34    # "x":I
	//    .restart local v33    # "x":I
	goto label_goto_14d;
	// 1208    .line 1278
label_cond_186:
	// throw
	throw android::icu::text::PluralRules::unexpected(t, condition);
	// 1220    .line 1284
	// 1221    .end local v19    # "hackForCompatibility":Z
label_cond_18f:
	inRange = ( inRange ^ 0x1);
	//    .local v7, "inRange":Z
	//    .end local v33    # "x":I
	//    .restart local v34    # "x":I
	t = android::icu::text::PluralRules::nextToken(tokens, x, condition);
	x = ( x + 0x1);
	//    .end local v7    # "inRange":Z
	//    .end local v34    # "x":I
	//    .restart local v33    # "x":I
label_cond_19f:
	valueList = std::make_shared<java::util::ArrayList>();
	//    .local v32, "valueList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Long;>;"
label_goto_1a4:
	low = java::lang::Long::parseLong(t);
	//    .local v26, "low":J
	high = low;
	//    .local v20, "high":J
	if ( x >= tokens->size() )
		goto label_cond_243;
	x = ( x + 0x1);
	//    .end local v33    # "x":I
	//    .restart local v34    # "x":I
	t = android::icu::text::PluralRules::nextToken(tokens, x, condition);
	if ( !(t->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")))) )  
		goto label_cond_22d;
	x = ( x + 0x1);
	//    .end local v34    # "x":I
	//    .restart local v33    # "x":I
	t = android::icu::text::PluralRules::nextToken(tokens, x, condition);
	if ( t->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("."))) )     
		goto label_cond_1f0;
	// throw
	throw android::icu::text::PluralRules::unexpected(t, condition);
	// 1344    .line 1301
label_cond_1f0:
	x = ( x + 0x1);
	//    .end local v33    # "x":I
	//    .restart local v34    # "x":I
	t = android::icu::text::PluralRules::nextToken(tokens, x, condition);
	high = java::lang::Long::parseLong(t);
	if ( x >= tokens->size() )
		goto label_cond_245;
	//    .end local v34    # "x":I
	//    .restart local v33    # "x":I
	t = android::icu::text::PluralRules::nextToken(tokens, x, condition);
	if ( t->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>(","))) )     
		goto label_cond_243;
	// throw
	throw android::icu::text::PluralRules::unexpected(t, condition);
	// 1417    .line 1310
	// 1418    .end local v33    # "x":I
	// 1419    .restart local v34    # "x":I
label_cond_22d:
	if ( t->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>(","))) )     
		goto label_cond_245;
	// throw
	throw android::icu::text::PluralRules::unexpected(t, condition);
	// 1444    .end local v34    # "x":I
	// 1445    .restart local v33    # "x":I
label_cond_243:
	x = x;
	//    .end local v33    # "x":I
	//    .restart local v34    # "x":I
label_cond_245:
	if ( (low > high) <= 0 )
		goto label_cond_272;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	// throw
	throw android::icu::text::PluralRules::unexpected(cVar0->append(low)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("~")))->append(high)->toString(), condition);
	// 1498    .line 1318
label_cond_272:
	if ( !(0x0) )  
		goto label_cond_2a2;
	if ( (high > (long long)(mod)) < 0 ) 
		goto label_cond_2a2;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	// throw
	throw android::icu::text::PluralRules::unexpected(cVar1->append(high)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(">mod=")))->append(mod)->toString(), condition);
	// 1549    .line 1321
label_cond_2a2:
	valueList->add(java::lang::Long::valueOf(low));
	valueList->add(java::lang::Long::valueOf(high));
	lowBound = java::lang::Math::min(lowBound, (double)(low));
	highBound = java::lang::Math::max(highBound, (double)(high));
	if ( x <  tokens->size() )
		goto label_cond_2ef;
	if ( !(t->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>(",")))) )  
		goto label_cond_2fd;
	// throw
	throw android::icu::text::PluralRules::unexpected(t, condition);
	// 1635    .line 1328
label_cond_2ef:
	x = ( x + 0x1);
	//    .end local v34    # "x":I
	//    .restart local v33    # "x":I
	t = android::icu::text::PluralRules::nextToken(tokens, x, condition);
	goto label_goto_1a4;
	// 1653    .line 1335
	// 1654    .end local v33    # "x":I
	// 1655    .restart local v34    # "x":I
label_cond_2fd:
	if ( valueList->size() != 0x2 )
		goto label_cond_320;
	//    .end local v14    # "vals":[J
label_cond_30a:
	if ( !((lowBound < highBound)) )  
		goto label_cond_346;
	if ( !(hackForCompatibility) )  
		goto label_cond_346;
	if ( !(( inRange ^ 0x1)) )  
		goto label_cond_346;
	// throw
	throw android::icu::text::PluralRules::unexpected(std::make_shared<java::lang::String>(std::make_shared<char[]>("is not <range>")), condition);
	// 1698    .line 1338
	// 1699    .restart local v14    # "vals":[J
label_cond_320:
	vals = std::make_shared<std::vector<long long[]>>(valueList->size());
	//    .local v14, "vals":[J
	k = 0x0;
	//    .local v24, "k":I
label_goto_32a:
	if ( k >= vals->size() )
		goto label_cond_30a;
	cVar2 = valueList->get(k);
	cVar2->checkCast("java::lang::Long");
	vals[k] = cVar2->longValue();
	k = ( k + 0x1);
	goto label_goto_32a;
	// 1747    .line 1350
	// 1748    .end local v14    # "vals":[J
	// 1749    .end local v24    # "k":I
label_cond_346:
	//    .end local v5    # "newConstraint":Landroid/icu/text/PluralRules$Constraint;
	newConstraint = std::make_shared<android::icu::text::PluralRules_S_RangeConstraint>(mod, inRange, android::icu::text::PluralRules_S_FixedDecimal::getOperand(t), 0x1, lowBound, highBound, vals);
	//    .restart local v5    # "newConstraint":Landroid/icu/text/PluralRules$Constraint;
	x;
	//    .end local v20    # "high":J
	//    .end local v26    # "low":J
	//    .end local v32    # "valueList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Long;>;"
	//    .end local v34    # "x":I
	//    .restart local v33    # "x":I
label_cond_34d:
	if ( andConstraint )     
		goto label_cond_354;
	//    .local v4, "andConstraint":Landroid/icu/text/PluralRules$Constraint;
label_goto_350:
	j = ( j + 0x1);
	goto label_goto_24;
	// 1778    .line 1356
	// 1779    .end local v4    # "andConstraint":Landroid/icu/text/PluralRules$Constraint;
label_cond_354:
	andConstraint = std::make_shared<android::icu::text::PluralRules_S_AndConstraint>(andConstraint, android::icu::text::PluralRules::NO_CONSTRAINT);
	//    .local v15, "andConstraint":Landroid/icu/text/PluralRules$Constraint;
	andConstraint = andConstraint;
	//    .end local v15    # "andConstraint":Landroid/icu/text/PluralRules$Constraint;
	//    .restart local v4    # "andConstraint":Landroid/icu/text/PluralRules$Constraint;
	goto label_goto_350;
	// 1792    .line 1361
	// 1793    .end local v4    # "andConstraint":Landroid/icu/text/PluralRules$Constraint;
	// 1794    .end local v5    # "newConstraint":Landroid/icu/text/PluralRules$Constraint;
	// 1795    .end local v6    # "mod":I
	// 1796    .end local v8    # "operand":Landroid/icu/text/PluralRules$Operand;
	// 1797    .end local v9    # "integersOnly":Z
	// 1798    .end local v10    # "lowBound":D
	// 1799    .end local v12    # "highBound":D
	// 1800    .end local v17    # "condition":Ljava/lang/String;
	// 1801    .end local v30    # "t":Ljava/lang/String;
	// 1802    .end local v31    # "tokens":[Ljava/lang/String;
	// 1803    .end local v33    # "x":I
label_cond_35b:
	if ( result )     
		goto label_cond_363;
	//    .local v28, "result":Landroid/icu/text/PluralRules$Constraint;
label_goto_35f:
	i = ( i + 0x1);
	goto label_goto_e;
	// 1817    .line 1364
	// 1818    .end local v28    # "result":Landroid/icu/text/PluralRules$Constraint;
label_cond_363:
	var383 = result(result, andConstraint);
	//    .local v29, "result":Landroid/icu/text/PluralRules$Constraint;
	result = result;
	//    .end local v29    # "result":Landroid/icu/text/PluralRules$Constraint;
	//    .restart local v28    # "result":Landroid/icu/text/PluralRules$Constraint;
	goto label_goto_35f;
	// 1835    .line 1367
	// 1836    .end local v16    # "and_together":[Ljava/lang/String;
	// 1837    .end local v23    # "j":I
	// 1838    .end local v28    # "result":Landroid/icu/text/PluralRules$Constraint;
label_cond_36f:
	return result;
	// 1842    .restart local v5    # "newConstraint":Landroid/icu/text/PluralRules$Constraint;
	// 1843    .restart local v6    # "mod":I
	// 1844    .local v7, "inRange":Z
	// 1845    .restart local v8    # "operand":Landroid/icu/text/PluralRules$Operand;
	// 1846    .restart local v9    # "integersOnly":Z
	// 1847    .restart local v10    # "lowBound":D
	// 1848    .restart local v12    # "highBound":D
	// 1849    .local v14, "vals":[J
	// 1850    .restart local v16    # "and_together":[Ljava/lang/String;
	// 1851    .restart local v17    # "condition":Ljava/lang/String;
	// 1852    .restart local v19    # "hackForCompatibility":Z
	// 1853    .restart local v23    # "j":I
	// 1854    .restart local v30    # "t":Ljava/lang/String;
	// 1855    .restart local v31    # "tokens":[Ljava/lang/String;
	// 1856    .restart local v34    # "x":I
label_cond_370:
	x = x;
	//    .end local v34    # "x":I
	//    .restart local v33    # "x":I
	goto label_goto_90;

}
// .method public static parseDescription(Ljava/lang/String;)Landroid/icu/text/PluralRules;
std::shared_ptr<android::icu::text::PluralRules> android::icu::text::PluralRules::parseDescription(std::shared_ptr<java::lang::String> description)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<android::icu::text::PluralRules> cVar1;
	
	//    .param p0, "description"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1869        value = {
	// 1870            Ljava/text/ParseException;
	// 1871        }
	// 1872    .end annotation
	cVar0 = description->trim();
	if ( cVar0->length() )     
		goto label_cond_d;
	cVar1 = android::icu::text::PluralRules::DEFAULT;
label_goto_c:
	return cVar1;
label_cond_d:
	cVar1 = std::make_shared<android::icu::text::PluralRules>(android::icu::text::PluralRules::parseRuleChain(cVar0));
	goto label_goto_c;

}
// .method private static parseRule(Ljava/lang/String;)Landroid/icu/text/PluralRules$Rule;
std::shared_ptr<android::icu::text::PluralRules_S_Rule> android::icu::text::PluralRules::parseRule(std::shared_ptr<java::lang::String> description)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	int x;
	std::shared_ptr<java::text::ParseException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::String> keyword;
	std::shared_ptr<java::text::ParseException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::lang::CharSequence> cVar7;
	auto constraintOrSamples;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> integerSamples;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar10;
	int isOther;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar13;
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> cVar15;
	std::shared_ptr<android::icu::text::PluralRules_S_SampleType> integerSamples;
	std::shared_ptr<android::icu::text::PluralRules_S_SampleType> decimalSamples;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar11;
	std::shared_ptr<java::lang::StringBuilder> cVar12;
	
	//    .param p0, "description"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1908        value = {
	// 1909            Ljava/text/ParseException;
	// 1910        }
	// 1911    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( description->length() )     
		goto label_cond_b;
	return android::icu::text::PluralRules::DEFAULT_RULE;
	// 1930    .line 1406
label_cond_b:
	cVar2 = description->toLowerCase(java::util::Locale::ENGLISH);
	x = cVar2->indexOf(0x3a);
	//    .local v7, "x":I
	if ( x != -0x1 )
		goto label_cond_3b;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::text::ParseException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("missing \':\' in rule description \'")))->append(cVar2)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString(), cVar1);
	// throw
	throw cVar3;
	// 1984    .line 1414
label_cond_3b:
	keyword = cVar2->substring(cVar1, x)->trim();
	//    .local v5, "keyword":Ljava/lang/String;
	if ( android::icu::text::PluralRules::isValidKeyword(keyword) )     
		goto label_cond_6a;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::text::ParseException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("keyword \'")))->append(keyword)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" is not valid")))->toString(), cVar1);
	// throw
	throw cVar5;
	// 2035    .line 1420
label_cond_6a:
	cVar7 = cVar2->substring(( x + 0x1))->trim();
	constraintOrSamples = android::icu::text::PluralRules::AT_SEPARATED->split(cVar7);
	//    .local v1, "constraintOrSamples":[Ljava/lang/String;
	//    .local v6, "sampleFailure":Z
	integerSamples = 0x0;
	//    .local v3, "integerSamples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
	//    .local v2, "decimalSamples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
	// switch
	{
	auto item = ( constraintOrSamples->size() );
	if (item == 1) goto label_pswitch_a9;
	if (item == 2) goto label_pswitch_9b;
	if (item == 3) goto label_pswitch_b4;
	}
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<java::lang::IllegalArgumentException>(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Too many samples in ")))->append(cVar7)->toString());
	// throw
	throw cVar8;
	// 2096    .line 1427
label_pswitch_9b:
	integerSamples = android::icu::text::PluralRules_S_FixedDecimalSamples::parse(constraintOrSamples[cVar0]);
	//    .local v3, "integerSamples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
	if ( integerSamples->sampleType != android::icu::text::PluralRules_S_SampleType::DECIMAL )
		goto label_cond_a9;
	//    .local v2, "decimalSamples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
	integerSamples = 0x0;
	//    .end local v2    # "decimalSamples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
	//    .end local v3    # "integerSamples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
label_cond_a9:
label_pswitch_a9:
	if ( !(0x0) )  
		goto label_cond_e7;
	cVar10 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed samples\u2014\'@\' characters.")));
	// throw
	throw cVar10;
	// 2135    .line 1434
	// 2136    .local v2, "decimalSamples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
	// 2137    .local v3, "integerSamples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
label_pswitch_b4:
	integerSamples = android::icu::text::PluralRules_S_FixedDecimalSamples::parse(constraintOrSamples[cVar0]);
	//    .local v3, "integerSamples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
	decimalSamples = android::icu::text::PluralRules_S_FixedDecimalSamples::parse(constraintOrSamples[0x2]);
	//    .local v2, "decimalSamples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
	if ( integerSamples->sampleType != android::icu::text::PluralRules_S_SampleType::INTEGER )
		goto label_cond_cd;
	if ( decimalSamples->sampleType == android::icu::text::PluralRules_S_SampleType::DECIMAL )
		goto label_cond_a9;
label_cond_cd:
	cVar12 = std::make_shared<java::lang::StringBuilder>();
	cVar11 = std::make_shared<java::lang::IllegalArgumentException>(cVar12->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Must have @integer then @decimal in ")))->append(cVar7)->toString());
	// throw
	throw cVar11;
	// 2195    .line 1448
	// 2196    .end local v2    # "decimalSamples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
	// 2197    .end local v3    # "integerSamples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
label_cond_e7:
	isOther = keyword->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("other")));
	//    .local v4, "isOther":Z
	if ( constraintOrSamples[cVar1]->length() )     
		goto label_cond_101;
label_goto_f6:
	if ( isOther == cVar0 )
		goto label_cond_103;
	cVar13 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The keyword \'other\' must have no constraints, just samples.")));
	// throw
	throw cVar13;
label_cond_101:
	cVar0 = cVar1;
	goto label_goto_f6;
	// 2233    .line 1454
label_cond_103:
	if ( !(isOther) )  
		goto label_cond_10d;
	//    .local v0, "constraint":Landroid/icu/text/PluralRules$Constraint;
label_goto_107:
	cVar15 = std::make_shared<android::icu::text::PluralRules_S_Rule>(keyword, constraint, integerSamples, decimalSamples);
	return cVar15;
	// 2249    .line 1457
	// 2250    .end local v0    # "constraint":Landroid/icu/text/PluralRules$Constraint;
label_cond_10d:
	//    .restart local v0    # "constraint":Landroid/icu/text/PluralRules$Constraint;
	goto label_goto_107;
	// 2261    .line 1424
	// 2262    :pswitch_data_114
	// 2263    .packed-switch 0x1
	// 2264        :pswitch_a9
	// 2265        :pswitch_9b
	// 2266        :pswitch_b4
	// 2267    .end packed-switch

}
// .method private static parseRuleChain(Ljava/lang/String;)Landroid/icu/text/PluralRules$RuleList;
std::shared_ptr<android::icu::text::PluralRules_S_RuleList> android::icu::text::PluralRules::parseRuleChain(std::shared_ptr<java::lang::String> cVar1)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::PluralRules_S_RuleList> result;
	std::shared_ptr<java::lang::CharSequence> cVar1;
	auto rules;
	int i;
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> rule;
	int cVar2;
	
	//    .param p0, "description"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2274        value = {
	// 2275            Ljava/text/ParseException;
	// 2276        }
	// 2277    .end annotation
	cVar0 = 0x0;
	result = std::make_shared<android::icu::text::PluralRules_S_RuleList>(0x0);
	//    .local v1, "result":Landroid/icu/text/PluralRules$RuleList;
	if ( !(cVar1->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")))) )  
		goto label_cond_1b;
	cVar1 = cVar1->substring(cVar0, ( cVar1->length() + -0x1));
label_cond_1b:
	rules = android::icu::text::PluralRules::SEMI_SEPARATED->split(cVar1);
	//    .local v3, "rules":[Ljava/lang/String;
	i = 0x0;
	//    .local v0, "i":I
label_goto_22:
	if ( i >= rules->size() )
		goto label_cond_4c;
	rule = android::icu::text::PluralRules::parseRule(rules[i]->trim());
	//    .local v2, "rule":Landroid/icu/text/PluralRules$Rule;
	if ( android::icu::text::PluralRules_S_Rule::-get1(rule) )     
		goto label_cond_3f;
	if ( !(android::icu::text::PluralRules_S_Rule::-get0(rule)) )  
		goto label_cond_4a;
label_cond_3f:
	cVar2 = 0x1;
label_goto_40:
	android::icu::text::PluralRules_S_RuleList::-set0(result, (cVar2 |  android::icu::text::PluralRules_S_RuleList::-get0(result)));
	result->addRule(rule);
	i = ( i + 0x1);
	goto label_goto_22;
label_cond_4a:
	cVar2 = cVar0;
	goto label_goto_40;
	// 2381    .line 1481
	// 2382    .end local v2    # "rule":Landroid/icu/text/PluralRules$Rule;
label_cond_4c:
	return result->finish();

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::text::PluralRules::readObject(std::shared_ptr<java::io::ObjectInputStream> in)
{
	
	std::shared_ptr<java::io::NotSerializableException> cVar0;
	
	//    .param p1, "in"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2395        value = {
	// 2396            Ljava/io/IOException;,
	// 2397            Ljava/lang/ClassNotFoundException;
	// 2398        }
	// 2399    .end annotation
	cVar0 = std::make_shared<java::io::NotSerializableException>();
	// throw
	throw cVar0;

}
// .method private static unexpected(Ljava/lang/String;Ljava/lang/String;)Ljava/text/ParseException;
std::shared_ptr<java::text::ParseException> android::icu::text::PluralRules::unexpected(std::shared_ptr<java::lang::String> token,std::shared_ptr<java::lang::String> context)
{
	
	std::shared_ptr<java::text::ParseException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "token"    # Ljava/lang/String;
	//    .param p1, "context"    # Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::text::ParseException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unexpected token \'")))->append(token)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' in \'")))->append(context)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString(), -0x1);
	return cVar0;

}
// .method private writeObject(Ljava/io/ObjectOutputStream;)V
void android::icu::text::PluralRules::writeObject(std::shared_ptr<java::io::ObjectOutputStream> out)
{
	
	std::shared_ptr<java::io::NotSerializableException> cVar0;
	
	//    .param p1, "out"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2470        value = {
	// 2471            Ljava/io/IOException;
	// 2472        }
	// 2473    .end annotation
	cVar0 = std::make_shared<java::io::NotSerializableException>();
	// throw
	throw cVar0;

}
// .method private writeReplace()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::PluralRules::writeReplace()
{
	
	std::shared_ptr<android::icu::text::PluralRulesSerialProxy> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2487        value = {
	// 2488            Ljava/io/ObjectStreamException;
	// 2489        }
	// 2490    .end annotation
	cVar0 = std::make_shared<android::icu::text::PluralRulesSerialProxy>(this->toString());
	return cVar0;

}
// .method public addSample(Ljava/lang/String;Ljava/lang/Number;ILjava/util/Set;)Z
bool android::icu::text::PluralRules::addSample(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::Number> sample,int maxCount,std::shared_ptr<java::util::Set<java::lang::Double>> result)
{
	
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar0;
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "sample"    # Ljava/lang/Number;
	//    .param p3, "maxCount"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 2513        value = {
	// 2514            "(",
	// 2515            "Ljava/lang/String;",
	// 2516            "Ljava/lang/Number;",
	// 2517            "I",
	// 2518            "Ljava/util/Set",
	// 2519            "<",
	// 2520            "Ljava/lang/Double;",
	// 2521            ">;)Z"
	// 2522        }
	// 2523    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2526    .end annotation
	//    .local p4, "result":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Double;>;"
	if ( !(sample->instanceOf("android::icu::text::PluralRules_S_FixedDecimal")) )  
		goto label_cond_22;
	cVar0 = sample;
	cVar0->checkCast("android::icu::text::PluralRules_S_FixedDecimal");
	//    .local v0, "selectedKeyword":Ljava/lang/String;
label_goto_c:
	if ( !(selectedKeyword->equals(keyword)) )  
		goto label_cond_2b;
	result->add(java::lang::Double::valueOf(sample->doubleValue()));
	if ( ( maxCount + -0x1) >= 0 )
		goto label_cond_2b;
	return 0x0;
	// 2573    .line 2165
	// 2574    .end local v0    # "selectedKeyword":Ljava/lang/String;
label_cond_22:
	//    .restart local v0    # "selectedKeyword":Ljava/lang/String;
	goto label_goto_c;
	// 2587    .line 2172
label_cond_2b:
	return 0x1;

}
// .method public compareTo(Landroid/icu/text/PluralRules;)I
int android::icu::text::PluralRules::compareTo(std::shared_ptr<android::icu::text::PluralRules> other)
{
	
	//    .param p1, "other"    # Landroid/icu/text/PluralRules;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2598    .end annotation
	return this->toString()->compareTo(other->toString());

}
// .method public computeLimited(Ljava/lang/String;Landroid/icu/text/PluralRules$SampleType;)Z
bool android::icu::text::PluralRules::computeLimited(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType)
{
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "sampleType"    # Landroid/icu/text/PluralRules$SampleType;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2622    .end annotation
	return this->rules->computeLimited(keyword, sampleType);

}
// .method public equals(Landroid/icu/text/PluralRules;)Z
bool android::icu::text::PluralRules::equals(std::shared_ptr<android::icu::text::PluralRules> rhs)
{
	
	bool cVar0;
	
	//    .param p1, "rhs"    # Landroid/icu/text/PluralRules;
	if ( !(rhs) )  
		goto label_cond_f;
	cVar0 = this->toString()->equals(rhs->toString());
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::PluralRules::equals(std::shared_ptr<java::lang::Object> rhs)
{
	
	bool cVar0;
	
	//    .param p1, "rhs"    # Ljava/lang/Object;
	if ( !(rhs->instanceOf("android::icu::text::PluralRules")) )  
		goto label_cond_b;
	rhs->checkCast("android::icu::text::PluralRules");
	//    .end local p1    # "rhs":Ljava/lang/Object;
	cVar0 = this->equals(rhs);
label_goto_a:
	return cVar0;
	// 2684    .restart local p1    # "rhs":Ljava/lang/Object;
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method public getAllKeywordValues(Ljava/lang/String;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::lang::Double>> android::icu::text::PluralRules::getAllKeywordValues(std::shared_ptr<java::lang::String> keyword)
{
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2695        value = {
	// 2696            "(",
	// 2697            "Ljava/lang/String;",
	// 2698            ")",
	// 2699            "Ljava/util/Collection",
	// 2700            "<",
	// 2701            "Ljava/lang/Double;",
	// 2702            ">;"
	// 2703        }
	// 2704    .end annotation
	return this->getAllKeywordValues(keyword, android::icu::text::PluralRules_S_SampleType::INTEGER);

}
// .method public getAllKeywordValues(Ljava/lang/String;Landroid/icu/text/PluralRules$SampleType;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::lang::Double>> android::icu::text::PluralRules::getAllKeywordValues(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> type)
{
	
	std::shared_ptr<java::util::Collection> cVar0;
	std::shared_ptr<java::util::Collection> samples;
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "type"    # Landroid/icu/text/PluralRules$SampleType;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2722        value = {
	// 2723            "(",
	// 2724            "Ljava/lang/String;",
	// 2725            "Landroid/icu/text/PluralRules$SampleType;",
	// 2726            ")",
	// 2727            "Ljava/util/Collection",
	// 2728            "<",
	// 2729            "Ljava/lang/Double;",
	// 2730            ">;"
	// 2731        }
	// 2732    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2735    .end annotation
	cVar0 = 0x0;
	if ( this->isLimited(keyword, type) )     
		goto label_cond_8;
	return cVar0;
	// 2750    .line 2089
label_cond_8:
	samples = this->getSamples(keyword, type);
	//    .local v0, "samples":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/Double;>;"
	if ( samples )     
		goto label_cond_f;
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = java::util::Collections::unmodifiableCollection(samples);
	goto label_goto_e;

}
// .method public getDecimalSamples(Ljava/lang/String;Landroid/icu/text/PluralRules$SampleType;)Landroid/icu/text/PluralRules$FixedDecimalSamples;
std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> android::icu::text::PluralRules::getDecimalSamples(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType)
{
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "sampleType"    # Landroid/icu/text/PluralRules$SampleType;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2776    .end annotation
	return this->rules->getDecimalSamples(keyword, sampleType);

}
// .method public getKeywordStatus(Ljava/lang/String;ILjava/util/Set;Landroid/icu/util/Output;)Landroid/icu/text/PluralRules$KeywordStatus;
std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> android::icu::text::PluralRules::getKeywordStatus(std::shared_ptr<java::lang::String> keyword,int offset,std::shared_ptr<java::util::Set<java::lang::Double>> explicits,std::shared_ptr<android::icu::util::Output<java::lang::Double>> uniqueValue)
{
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "offset"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 2794        value = {
	// 2795            "(",
	// 2796            "Ljava/lang/String;",
	// 2797            "I",
	// 2798            "Ljava/util/Set",
	// 2799            "<",
	// 2800            "Ljava/lang/Double;",
	// 2801            ">;",
	// 2802            "Landroid/icu/util/Output",
	// 2803            "<",
	// 2804            "Ljava/lang/Double;",
	// 2805            ">;)",
	// 2806            "Landroid/icu/text/PluralRules$KeywordStatus;"
	// 2807        }
	// 2808    .end annotation
	//    .local p3, "explicits":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Double;>;"
	//    .local p4, "uniqueValue":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Double;>;"
	return this->getKeywordStatus(keyword, offset, explicits, uniqueValue, android::icu::text::PluralRules_S_SampleType::INTEGER);

}
// .method public getKeywordStatus(Ljava/lang/String;ILjava/util/Set;Landroid/icu/util/Output;Landroid/icu/text/PluralRules$SampleType;)Landroid/icu/text/PluralRules$KeywordStatus;
std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> android::icu::text::PluralRules::getKeywordStatus(std::shared_ptr<java::lang::String> keyword,int offset,std::shared_ptr<java::util::Set<java::lang::Double>> explicits,std::shared_ptr<android::icu::util::Output<java::lang::Double>> uniqueValue,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType)
{
	
	std::shared_ptr<java::util::Collection> values;
	int originalSize;
	std::shared_ptr<java::util::Set> explicits;
	std::shared_ptr<java::lang::Double> cVar0;
	std::shared_ptr<java::util::HashSet> subtractedSet;
	std::shared_ptr<java::util::Iterator> explicit_S_iterator;
	std::shared_ptr<java::lang::Double> explicit;
	std::shared_ptr<java::lang::Double> cVar1;
	std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> cVar2;
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "offset"    # I
	//    .param p5, "sampleType"    # Landroid/icu/text/PluralRules$SampleType;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2839        value = {
	// 2840            "(",
	// 2841            "Ljava/lang/String;",
	// 2842            "I",
	// 2843            "Ljava/util/Set",
	// 2844            "<",
	// 2845            "Ljava/lang/Double;",
	// 2846            ">;",
	// 2847            "Landroid/icu/util/Output",
	// 2848            "<",
	// 2849            "Ljava/lang/Double;",
	// 2850            ">;",
	// 2851            "Landroid/icu/text/PluralRules$SampleType;",
	// 2852            ")",
	// 2853            "Landroid/icu/text/PluralRules$KeywordStatus;"
	// 2854        }
	// 2855    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2858    .end annotation
	//    .local p3, "explicits":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Double;>;"
	//    .local p4, "uniqueValue":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Double;>;"
	if ( !(uniqueValue) )  
		goto label_cond_5;
	uniqueValue->value = 0x0;
label_cond_5:
	if ( this->keywords->contains(keyword) )     
		goto label_cond_10;
	return android::icu::text::PluralRules_S_KeywordStatus::INVALID;
	// 2886    .line 2336
label_cond_10:
	if ( this->isLimited(keyword, sampleType) )     
		goto label_cond_19;
	return android::icu::text::PluralRules_S_KeywordStatus::UNBOUNDED;
	// 2899    .line 2340
label_cond_19:
	values = this->getSamples(keyword, sampleType);
	//    .local v4, "values":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/Double;>;"
	originalSize = values->size();
	//    .local v2, "originalSize":I
	if ( explicits )     
		goto label_cond_27;
	explicits = java::util::Collections::emptySet({const[class].FS-Param});
label_cond_27:
	if ( originalSize <= explicits->size() )
		goto label_cond_44;
	if ( originalSize != 0x1 )
		goto label_cond_41;
	if ( !(uniqueValue) )  
		goto label_cond_3e;
	cVar0 = values->iterator()->next();
	cVar0->checkCast("java::lang::Double");
	uniqueValue->value = cVar0;
label_cond_3e:
	return android::icu::text::PluralRules_S_KeywordStatus::UNIQUE;
	// 2955    .line 2357
label_cond_41:
	return android::icu::text::PluralRules_S_KeywordStatus::BOUNDED;
	// 2961    .line 2362
label_cond_44:
	subtractedSet = std::make_shared<java::util::HashSet>(values);
	//    .local v3, "subtractedSet":Ljava/util/HashSet;, "Ljava/util/HashSet<Ljava/lang/Double;>;"
	explicit_S_iterator = explicits->iterator();
	//    .local v1, "explicit$iterator":Ljava/util/Iterator;
label_goto_4d:
	if ( !(explicit_S_iterator->hasNext()) )  
		goto label_cond_67;
	explicit = explicit_S_iterator->next();
	explicit->checkCast("java::lang::Double");
	//    .local v0, "explicit":Ljava/lang/Double;
	subtractedSet->remove(java::lang::Double::valueOf(( explicit->doubleValue() - (double)(offset))));
	goto label_goto_4d;
	// 3005    .line 2366
	// 3006    .end local v0    # "explicit":Ljava/lang/Double;
label_cond_67:
	if ( subtractedSet->size() )     
		goto label_cond_70;
	return android::icu::text::PluralRules_S_KeywordStatus::SUPPRESSED;
	// 3019    .line 2370
label_cond_70:
	if ( !(uniqueValue) )  
		goto label_cond_85;
	if ( subtractedSet->size() != 0x1 )
		goto label_cond_85;
	cVar1 = subtractedSet->iterator()->next();
	cVar1->checkCast("java::lang::Double");
	uniqueValue->value = cVar1;
label_cond_85:
	if ( originalSize != 0x1 )
		goto label_cond_8b;
	cVar2 = android::icu::text::PluralRules_S_KeywordStatus::UNIQUE;
label_goto_8a:
	return cVar2;
label_cond_8b:
	cVar2 = android::icu::text::PluralRules_S_KeywordStatus::BOUNDED;
	goto label_goto_8a;

}
// .method public getKeywords()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::text::PluralRules::getKeywords()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3064        value = {
	// 3065            "()",
	// 3066            "Ljava/util/Set",
	// 3067            "<",
	// 3068            "Ljava/lang/String;",
	// 3069            ">;"
	// 3070        }
	// 3071    .end annotation
	return this->keywords;

}
// .method public getRules(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules::getRules(std::shared_ptr<java::lang::String> keyword)
{
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3084    .end annotation
	return this->rules->getRules(keyword);

}
// .method public getSamples(Ljava/lang/String;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::lang::Double>> android::icu::text::PluralRules::getSamples(std::shared_ptr<java::lang::String> keyword)
{
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 3101        value = {
	// 3102            "(",
	// 3103            "Ljava/lang/String;",
	// 3104            ")",
	// 3105            "Ljava/util/Collection",
	// 3106            "<",
	// 3107            "Ljava/lang/Double;",
	// 3108            ">;"
	// 3109        }
	// 3110    .end annotation
	return this->getSamples(keyword, android::icu::text::PluralRules_S_SampleType::INTEGER);

}
// .method public getSamples(Ljava/lang/String;Landroid/icu/text/PluralRules$SampleType;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::lang::Double>> android::icu::text::PluralRules::getSamples(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType)
{
	
	int cVar0;
	std::shared_ptr<java::util::Collection> cVar1;
	std::shared_ptr<java::util::TreeSet> result;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> samples;
	std::shared_ptr<java::util::Collection> cVar2;
	int maxCount;
	int i;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar4;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar5;
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "sampleType"    # Landroid/icu/text/PluralRules$SampleType;
	//    .annotation system Ldalvik/annotation/Signature;
	// 3128        value = {
	// 3129            "(",
	// 3130            "Ljava/lang/String;",
	// 3131            "Landroid/icu/text/PluralRules$SampleType;",
	// 3132            ")",
	// 3133            "Ljava/util/Collection",
	// 3134            "<",
	// 3135            "Ljava/lang/Double;",
	// 3136            ">;"
	// 3137        }
	// 3138    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3141    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this->keywords->contains(keyword) )     
		goto label_cond_b;
	return cVar1;
	// 3160    .line 2126
label_cond_b:
	result = std::make_shared<java::util::TreeSet>();
	//    .local v2, "result":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Double;>;"
	if ( !(android::icu::text::PluralRules_S_RuleList::-get0(this->rules)) )  
		goto label_cond_2e;
	samples = this->rules->getDecimalSamples(keyword, sampleType);
	//    .local v3, "samples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
	if ( samples )     
		goto label_cond_25;
	cVar2 = java::util::Collections::unmodifiableSet(result);
label_goto_24:
	return cVar2;
	// 3194    .line 2131
label_cond_25:
	cVar2 = java::util::Collections::unmodifiableSet(samples->addSamples(result));
	goto label_goto_24;
	// 3206    .line 2135
	// 3207    .end local v3    # "samples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
label_cond_2e:
	if ( !(this->isLimited(keyword, sampleType)) )  
		goto label_cond_4b;
	maxCount = 0x7fffffff;
	//    .local v1, "maxCount":I
label_goto_37:
	// switch
	{
	auto item = ( android::icu::text::PluralRules::-getandroid-icu-text-PluralRules$SampleTypeSwitchesValues({const[class].FS-Param})[sampleType->ordinal()] );
	if (item == 1) goto label_pswitch_6b;
	if (item == 2) goto label_pswitch_4e;
	}
label_goto_44:
	if ( result->size() )     
		goto label_cond_90;
label_goto_4a:
	return cVar1;
	// 3243    .line 2135
	// 3244    .end local v1    # "maxCount":I
label_cond_4b:
	0x14;
	//    .restart local v1    # "maxCount":I
	goto label_goto_37;
	// 3251    .line 2139
label_pswitch_4e:
	i = 0x0;
	//    .local v0, "i":I
label_goto_4f:
	if ( i >= 0xc8 )
		goto label_cond_5d;
	if ( this->addSample(keyword, java::lang::Integer::valueOf(i), maxCount, result) )     
		goto label_cond_68;
label_cond_5d:
	this->addSample(keyword, java::lang::Integer::valueOf(0xf4240), maxCount, result);
	goto label_goto_44;
	// 3284    .line 2139
label_cond_68:
	i = ( i + 0x1);
	goto label_goto_4f;
	// 3290    .line 2147
	// 3291    .end local v0    # "i":I
label_pswitch_6b:
	i = 0x0;
	//    .restart local v0    # "i":I
label_goto_6c:
	if ( i >= 0x7d0 )
		goto label_cond_7f;
	cVar4 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(( (double)(i) / 0x4024000000000000L), cVar0);
	if ( this->addSample(keyword, cVar4, maxCount, result) )     
		goto label_cond_8d;
label_cond_7f:
	cVar5 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(0x412e848000000000L, cVar0);
	this->addSample(keyword, cVar5, maxCount, result);
	goto label_goto_44;
	// 3330    .line 2147
label_cond_8d:
	i = ( i + 0x1);
	goto label_goto_6c;
	// 3336    .line 2155
	// 3337    .end local v0    # "i":I
label_cond_90:
	cVar1 = java::util::Collections::unmodifiableSet(result);
	goto label_goto_4a;
	// 3345    .line 2137
	// 3346    nop
	// 3348    :pswitch_data_96
	// 3349    .packed-switch 0x1
	// 3350        :pswitch_6b
	// 3351        :pswitch_4e
	// 3352    .end packed-switch

}
// .method public getUniqueKeywordValue(Ljava/lang/String;)D
double android::icu::text::PluralRules::getUniqueKeywordValue(std::shared_ptr<java::lang::String> keyword)
{
	
	std::shared_ptr<java::util::Collection> values;
	std::shared_ptr<java::lang::Double> cVar0;
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	values = this->getAllKeywordValues(keyword);
	//    .local v0, "values":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/Double;>;"
	if ( !(values) )  
		goto label_cond_1c;
	if ( values->size() != 0x1 )
		goto label_cond_1c;
	cVar0 = values->iterator()->next();
	cVar0->checkCast("java::lang::Double");
	return cVar0->doubleValue();
	// 3394    .line 2056
label_cond_1c:
	return -0x40abc5d8f366e181L;

}
// .method public hashCode()I
int android::icu::text::PluralRules::hashCode()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3404    .end annotation
	return this->rules->hashCode();

}
// .method public isLimited(Ljava/lang/String;)Ljava/lang/Boolean;
std::shared_ptr<java::lang::Boolean> android::icu::text::PluralRules::isLimited(std::shared_ptr<java::lang::String> keyword)
{
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3421    .end annotation
	return java::lang::Boolean::valueOf(this->rules->isLimited(keyword, android::icu::text::PluralRules_S_SampleType::INTEGER));

}
// .method public isLimited(Ljava/lang/String;Landroid/icu/text/PluralRules$SampleType;)Z
bool android::icu::text::PluralRules::isLimited(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType)
{
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "sampleType"    # Landroid/icu/text/PluralRules$SampleType;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3445    .end annotation
	return this->rules->isLimited(keyword, sampleType);

}
// .method public matches(Landroid/icu/text/PluralRules$FixedDecimal;Ljava/lang/String;)Z
bool android::icu::text::PluralRules::matches(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> sample,std::shared_ptr<java::lang::String> keyword)
{
	
	//    .param p1, "sample"    # Landroid/icu/text/PluralRules$FixedDecimal;
	//    .param p2, "keyword"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3463    .end annotation
	return this->rules->select(sample, keyword);

}
// .method public select(D)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules::select(double number)
{
	
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar0;
	
	//    .param p1, "number"    # D
	cVar0 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(number);
	return this->rules->select(cVar0);

}
// .method public select(DIJ)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules::select(double number,int countVisibleFractionDigits,long long fractionaldigits)
{
	
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar0;
	
	//    .param p1, "number"    # D
	//    .param p3, "countVisibleFractionDigits"    # I
	//    .param p4, "fractionaldigits"    # J
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3501    .end annotation
	cVar0 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(number, countVisibleFractionDigits, fractionaldigits);
	return this->rules->select(cVar0);

}
// .method public select(Landroid/icu/text/PluralRules$FixedDecimal;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules::select(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> number)
{
	
	//    .param p1, "number"    # Landroid/icu/text/PluralRules$FixedDecimal;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3528    .end annotation
	return this->rules->select(number);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules::toString()
{
	
	return this->rules->toString();

}


