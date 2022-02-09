// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$RuleList.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_FixedDecimalSamples.h"
#include "android.icu.text.PluralRules_S_Rule.h"
#include "android.icu.text.PluralRules_S_RuleList.h"
#include "android.icu.text.PluralRules_S_SampleType.h"
#include "android.icu.text.PluralRules.h"
#include "java.lang.Double.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedHashSet.h"
#include "java.util.List.h"
#include "java.util.Set.h"

static android::icu::text::PluralRules_S_RuleList::serialVersionUID = 0x1L;
// .method static synthetic -get0(Landroid/icu/text/PluralRules$RuleList;)Z
bool android::icu::text::PluralRules_S_RuleList::_get0(std::shared_ptr<android::icu::text::PluralRules_S_RuleList> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/PluralRules$RuleList;
	return _this->hasExplicitBoundingInfo;

}
// .method static synthetic -set0(Landroid/icu/text/PluralRules$RuleList;Z)Z
bool android::icu::text::PluralRules_S_RuleList::_set0(std::shared_ptr<android::icu::text::PluralRules_S_RuleList> _this,bool _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/PluralRules$RuleList;
	//    .param p1, "-value"    # Z
	_this->hasExplicitBoundingInfo = _value;
	return _value;

}
// .method private constructor <init>()V
android::icu::text::PluralRules_S_RuleList::PluralRules_S_RuleList()
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	// 066    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->hasExplicitBoundingInfo = 0x0;
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->rules = cVar0;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/PluralRules$RuleList;)V
android::icu::text::PluralRules_S_RuleList::PluralRules_S_RuleList(std::shared_ptr<android::icu::text::PluralRules_S_RuleList> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/PluralRules$RuleList;
	// 089    invoke-direct {p0}, Landroid/icu/text/PluralRules$RuleList;-><init>()V
	return;

}
// .method private selectRule(Landroid/icu/text/PluralRules$FixedDecimal;)Landroid/icu/text/PluralRules$Rule;
std::shared_ptr<android::icu::text::PluralRules_S_Rule> android::icu::text::PluralRules_S_RuleList::selectRule(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> n)
{
	
	std::shared_ptr<java::util::Iterator> rule_S_iterator;
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> rule;
	
	//    .param p1, "n"    # Landroid/icu/text/PluralRules$FixedDecimal;
	rule_S_iterator = this->rules->iterator();
	//    .local v1, "rule$iterator":Ljava/util/Iterator;
label_cond_6:
	if ( !(rule_S_iterator->hasNext()) )  
		goto label_cond_19;
	rule = rule_S_iterator->next();
	rule->checkCast("android::icu::text::PluralRules_S_Rule");
	//    .local v0, "rule":Landroid/icu/text/PluralRules$Rule;
	if ( !(rule->appliesTo(n)) )  
		goto label_cond_6;
	return rule;
	// 131    .line 1763
	// 132    .end local v0    # "rule":Landroid/icu/text/PluralRules$Rule;
label_cond_19:
	return 0x0;

}
// .method public addRule(Landroid/icu/text/PluralRules$Rule;)Landroid/icu/text/PluralRules$RuleList;
std::shared_ptr<android::icu::text::PluralRules_S_RuleList> android::icu::text::PluralRules_S_RuleList::addRule(std::shared_ptr<android::icu::text::PluralRules_S_Rule> nextRule)
{
	
	std::shared_ptr<java::lang::String> keyword;
	std::shared_ptr<java::util::Iterator> rule_S_iterator;
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> rule;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "nextRule"    # Landroid/icu/text/PluralRules$Rule;
	keyword = nextRule->getKeyword();
	//    .local v0, "keyword":Ljava/lang/String;
	rule_S_iterator = this->rules->iterator();
	//    .local v2, "rule$iterator":Ljava/util/Iterator;
label_cond_a:
	if ( !(rule_S_iterator->hasNext()) )  
		goto label_cond_3a;
	rule = rule_S_iterator->next();
	rule->checkCast("android::icu::text::PluralRules_S_Rule");
	//    .local v1, "rule":Landroid/icu/text/PluralRules$Rule;
	if ( !(keyword->equals(rule->getKeyword())) )  
		goto label_cond_a;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate keyword: ")))->append(keyword)->toString());
	// throw
	throw cVar0;
	// 210    .line 1736
	// 211    .end local v1    # "rule":Landroid/icu/text/PluralRules$Rule;
label_cond_3a:
	this->rules->add(nextRule);
	return this;

}
// .method public computeLimited(Ljava/lang/String;Landroid/icu/text/PluralRules$SampleType;)Z
bool android::icu::text::PluralRules_S_RuleList::computeLimited(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType)
{
	
	std::shared_ptr<java::util::Iterator> rule_S_iterator;
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> rule;
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "sampleType"    # Landroid/icu/text/PluralRules$SampleType;
	//    .local v0, "result":Z
	rule_S_iterator = this->rules->iterator();
	//    .local v2, "rule$iterator":Ljava/util/Iterator;
label_cond_7:
label_goto_7:
	if ( !(rule_S_iterator->hasNext()) )  
		goto label_cond_27;
	rule = rule_S_iterator->next();
	rule->checkCast("android::icu::text::PluralRules_S_Rule");
	//    .local v1, "rule":Landroid/icu/text/PluralRules$Rule;
	if ( !(keyword->equals(rule->getKeyword())) )  
		goto label_cond_7;
	if ( rule->isLimited(sampleType) )     
		goto label_cond_25;
	return 0x0;
	// 277    .line 1802
label_cond_25:
	0x1;
	goto label_goto_7;
	// 283    .line 1805
	// 284    .end local v1    # "rule":Landroid/icu/text/PluralRules$Rule;
label_cond_27:
	return 0x0;

}
// .method public finish()Landroid/icu/text/PluralRules$RuleList;
std::shared_ptr<android::icu::text::PluralRules_S_RuleList> android::icu::text::PluralRules_S_RuleList::finish()
{
	
	std::shared_ptr<java::lang::Object> otherRule;
	std::shared_ptr<java::util::Iterator> it;
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> rule;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 292        value = {
	// 293            Ljava/text/ParseException;
	// 294        }
	// 295    .end annotation
	otherRule = 0x0;
	//    .local v1, "otherRule":Landroid/icu/text/PluralRules$Rule;
	it = this->rules->iterator();
	//    .end local v1    # "otherRule":Landroid/icu/text/PluralRules$Rule;
	//    .local v0, "it":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/text/PluralRules$Rule;>;"
label_cond_7:
label_goto_7:
	if ( !(it->hasNext()) )  
		goto label_cond_25;
	rule = it->next();
	rule->checkCast("android::icu::text::PluralRules_S_Rule");
	//    .local v2, "rule":Landroid/icu/text/PluralRules$Rule;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("other"))->equals(rule->getKeyword())) )  
		goto label_cond_7;
	rule;
	//    .local v1, "otherRule":Landroid/icu/text/PluralRules$Rule;
	it->remove();
	goto label_goto_7;
	// 349    .line 1750
	// 350    .end local v1    # "otherRule":Landroid/icu/text/PluralRules$Rule;
	// 351    .end local v2    # "rule":Landroid/icu/text/PluralRules$Rule;
label_cond_25:
	if ( otherRule )     
		goto label_cond_2e;
label_cond_2e:
	this->rules->add(otherRule);
	return this;

}
// .method public getDecimalSamples(Ljava/lang/String;Landroid/icu/text/PluralRules$SampleType;)Landroid/icu/text/PluralRules$FixedDecimalSamples;
std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> android::icu::text::PluralRules_S_RuleList::getDecimalSamples(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType)
{
	
	std::shared_ptr<java::util::Iterator> rule_S_iterator;
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> rule;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> cVar0;
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "sampleType"    # Landroid/icu/text/PluralRules$SampleType;
	rule_S_iterator = this->rules->iterator();
	//    .local v1, "rule$iterator":Ljava/util/Iterator;
label_cond_6:
	if ( !(rule_S_iterator->hasNext()) )  
		goto label_cond_2a;
	rule = rule_S_iterator->next();
	rule->checkCast("android::icu::text::PluralRules_S_Rule");
	//    .local v0, "rule":Landroid/icu/text/PluralRules$Rule;
	if ( !(rule->getKeyword()->equals(keyword)) )  
		goto label_cond_6;
	if ( sampleType != android::icu::text::PluralRules_S_SampleType::INTEGER )
		goto label_cond_25;
	cVar0 = android::icu::text::PluralRules_S_Rule::-get1(rule);
label_goto_24:
	return cVar0;
label_cond_25:
	cVar0 = android::icu::text::PluralRules_S_Rule::-get0(rule);
	goto label_goto_24;
	// 430    .line 1844
	// 431    .end local v0    # "rule":Landroid/icu/text/PluralRules$Rule;
label_cond_2a:
	return 0x0;

}
// .method public getKeywords()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::text::PluralRules_S_RuleList::getKeywords()
{
	
	std::shared_ptr<java::util::LinkedHashSet> result;
	std::shared_ptr<java::util::Iterator> rule_S_iterator;
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> rule;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 441        value = {
	// 442            "()",
	// 443            "Ljava/util/Set",
	// 444            "<",
	// 445            "Ljava/lang/String;",
	// 446            ">;"
	// 447        }
	// 448    .end annotation
	result = std::make_shared<java::util::LinkedHashSet>();
	//    .local v0, "result":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	rule_S_iterator = this->rules->iterator();
	//    .local v2, "rule$iterator":Ljava/util/Iterator;
label_goto_b:
	if ( !(rule_S_iterator->hasNext()) )  
		goto label_cond_1f;
	rule = rule_S_iterator->next();
	rule->checkCast("android::icu::text::PluralRules_S_Rule");
	//    .local v1, "rule":Landroid/icu/text/PluralRules$Rule;
	result->add(rule->getKeyword());
	goto label_goto_b;
	// 488    .line 1781
	// 489    .end local v1    # "rule":Landroid/icu/text/PluralRules$Rule;
label_cond_1f:
	return result;

}
// .method public getRules(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules_S_RuleList::getRules(std::shared_ptr<java::lang::String> keyword)
{
	
	std::shared_ptr<java::util::Iterator> rule_S_iterator;
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> rule;
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	rule_S_iterator = this->rules->iterator();
	//    .local v1, "rule$iterator":Ljava/util/Iterator;
label_cond_6:
	if ( !(rule_S_iterator->hasNext()) )  
		goto label_cond_21;
	rule = rule_S_iterator->next();
	rule->checkCast("android::icu::text::PluralRules_S_Rule");
	//    .local v0, "rule":Landroid/icu/text/PluralRules$Rule;
	if ( !(rule->getKeyword()->equals(keyword)) )  
		goto label_cond_6;
	return rule->getConstraint();
	// 539    .line 1826
	// 540    .end local v0    # "rule":Landroid/icu/text/PluralRules$Rule;
label_cond_21:
	return 0x0;

}
// .method public isLimited(Ljava/lang/String;Landroid/icu/text/PluralRules$SampleType;)Z
bool android::icu::text::PluralRules_S_RuleList::isLimited(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType)
{
	
	bool mySamples;
	bool cVar0;
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "sampleType"    # Landroid/icu/text/PluralRules$SampleType;
	if ( !(this->hasExplicitBoundingInfo) )  
		goto label_cond_f;
	mySamples = this->getDecimalSamples(keyword, sampleType);
	//    .local v0, "mySamples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
	if ( mySamples )     
		goto label_cond_c;
	cVar0 = 0x1;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = mySamples->bounded;
	goto label_goto_b;
	// 577    .line 1790
	// 578    .end local v0    # "mySamples":Landroid/icu/text/PluralRules$FixedDecimalSamples;
label_cond_f:
	return this->computeLimited(keyword, sampleType);

}
// .method public select(Landroid/icu/text/PluralRules$FixedDecimal;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules_S_RuleList::select(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> n)
{
	
	//    .param p1, "n"    # Landroid/icu/text/PluralRules$FixedDecimal;
	if ( java::lang::Double::isInfinite(n->source) )     
		goto label_cond_10;
	if ( !(java::lang::Double::isNaN(n->source)) )  
		goto label_cond_14;
label_cond_10:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	// 615    .line 1770
label_cond_14:
	//    .local v0, "r":Landroid/icu/text/PluralRules$Rule;
	return this->selectRule(n)->getKeyword();

}
// .method public select(Landroid/icu/text/PluralRules$FixedDecimal;Ljava/lang/String;)Z
bool android::icu::text::PluralRules_S_RuleList::select(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> sample,std::shared_ptr<java::lang::String> keyword)
{
	
	std::shared_ptr<java::util::Iterator> rule_S_iterator;
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> rule;
	
	//    .param p1, "sample"    # Landroid/icu/text/PluralRules$FixedDecimal;
	//    .param p2, "keyword"    # Ljava/lang/String;
	rule_S_iterator = this->rules->iterator();
	//    .local v1, "rule$iterator":Ljava/util/Iterator;
label_cond_6:
	if ( !(rule_S_iterator->hasNext()) )  
		goto label_cond_24;
	rule = rule_S_iterator->next();
	rule->checkCast("android::icu::text::PluralRules_S_Rule");
	//    .local v0, "rule":Landroid/icu/text/PluralRules$Rule;
	if ( !(rule->getKeyword()->equals(keyword)) )  
		goto label_cond_6;
	if ( !(rule->appliesTo(sample)) )  
		goto label_cond_6;
	return 0x1;
	// 680    .line 1835
	// 681    .end local v0    # "rule":Landroid/icu/text/PluralRules$Rule;
label_cond_24:
	return 0x0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules_S_RuleList::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> builder;
	std::shared_ptr<java::util::Iterator> rule_S_iterator;
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> rule;
	
	builder = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "builder":Ljava/lang/StringBuilder;
	rule_S_iterator = this->rules->iterator();
	//    .local v2, "rule$iterator":Ljava/util/Iterator;
label_goto_b:
	if ( !(rule_S_iterator->hasNext()) )  
		goto label_cond_27;
	rule = rule_S_iterator->next();
	rule->checkCast("android::icu::text::PluralRules_S_Rule");
	//    .local v1, "rule":Landroid/icu/text/PluralRules$Rule;
	if ( !(builder->length()) )  
		goto label_cond_23;
	builder->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(";  ")));
label_cond_23:
	builder->append(rule);
	goto label_goto_b;
	// 738    .line 1817
	// 739    .end local v1    # "rule":Landroid/icu/text/PluralRules$Rule;
label_cond_27:
	return builder->toString();

}


