// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliterationRuleSet.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.TransliterationRule.h"
#include "android.icu.text.TransliterationRuleSet.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.List.h"

// .method public constructor <init>()V
android::icu::text::TransliterationRuleSet::TransliterationRuleSet()
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->ruleVector = cVar0;
	this->maxContextLength = 0x0;
	return;

}
// .method public addRule(Landroid/icu/text/TransliterationRule;)V
void android::icu::text::TransliterationRuleSet::addRule(std::shared_ptr<android::icu::text::TransliterationRule> rule)
{
	
	int len;
	
	//    .param p1, "rule"    # Landroid/icu/text/TransliterationRule;
	this->ruleVector->add(rule);
	len = rule->getAnteContextLength();
	//    .local v0, "len":I
	if ( len <= this->maxContextLength )
		goto label_cond_f;
	this->maxContextLength = len;
label_cond_f:
	this->rules = 0x0;
	return;

}
// .method addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::TransliterationRuleSet::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> filter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> currentFilter;
	std::shared_ptr<android::icu::text::UnicodeSet> revisiting;
	int i;
	std::shared_ptr<android::icu::text::TransliterationRule> r;
	
	//    .param p1, "filter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	currentFilter = std::make_shared<android::icu::text::UnicodeSet>(filter);
	//    .local v1, "currentFilter":Landroid/icu/text/UnicodeSet;
	revisiting = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v4, "revisiting":Landroid/icu/text/UnicodeSet;
	//    .local v0, "count":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_11:
	if ( i >= this->ruleVector->size() )
		goto label_cond_28;
	r = this->ruleVector->get(i);
	r->checkCast("android::icu::text::TransliterationRule");
	//    .local v3, "r":Landroid/icu/text/TransliterationRule;
	r->addSourceTargetSet(currentFilter, sourceSet, targetSet, revisiting->clear());
	currentFilter->addAll(revisiting);
	i = ( i + 0x1);
	goto label_goto_11;
	// 143    .line 255
	// 144    .end local v3    # "r":Landroid/icu/text/TransliterationRule;
label_cond_28:
	return;

}
// .method public freeze()V
void android::icu::text::TransliterationRuleSet::freeze()
{
	
	int cVar0;
	int n;
	std::shared_ptr<java::util::ArrayList> v;
	std::shared<std::vector<int[]>> indexValue;
	int j;
	std::shared_ptr<android::icu::text::TransliterationRule> r;
	int x;
	std::shared_ptr<android::icu::text::TransliterationRule> cVar1;
	std::shared_ptr<java::lang::StringBuilder> errors;
	std::shared_ptr<android::icu::text::TransliterationRule> r1;
	int k;
	std::shared_ptr<android::icu::text::TransliterationRule> r2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	cVar0 = 0x100;
	n = this->ruleVector->size();
	//    .local v4, "n":I
	this->index = std::make_shared<std::vector<int[]>>(0x101);
	v = std::make_shared<java::util::ArrayList>(( n * 0x2));
	//    .local v8, "v":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/TransliterationRule;>;"
	indexValue = std::make_shared<std::vector<int[]>>(n);
	//    .local v1, "indexValue":[I
	j = 0x0;
	//    .local v2, "j":I
label_goto_18:
	if ( j >= n )
		goto label_cond_2b;
	r = this->ruleVector->get(j);
	r->checkCast("android::icu::text::TransliterationRule");
	//    .local v5, "r":Landroid/icu/text/TransliterationRule;
	indexValue[j] = r->getIndexValue();
	j = ( j + 0x1);
	goto label_goto_18;
	// 211    .line 121
	// 212    .end local v5    # "r":Landroid/icu/text/TransliterationRule;
label_cond_2b:
	x = 0x0;
	//    .local v9, "x":I
label_goto_2c:
	if ( x >= cVar0 )
		goto label_cond_64;
	this->index[x] = v->size();
	j = 0x0;
label_goto_37:
	if ( j >= n )
		goto label_cond_61;
	if ( indexValue[j] < 0 ) 
		goto label_cond_4f;
	if ( indexValue[j] != x )
		goto label_cond_4c;
	cVar1 = this->ruleVector->get(j);
	cVar1->checkCast("android::icu::text::TransliterationRule");
	v->add(cVar1);
label_cond_4c:
label_goto_4c:
	j = ( j + 0x1);
	goto label_goto_37;
	// 263    .line 133
label_cond_4f:
	r = this->ruleVector->get(j);
	r->checkCast("android::icu::text::TransliterationRule");
	//    .restart local v5    # "r":Landroid/icu/text/TransliterationRule;
	if ( !(r->matchesIndexValue(x)) )  
		goto label_cond_4c;
	v->add(r);
	goto label_goto_4c;
	// 286    .line 121
	// 287    .end local v5    # "r":Landroid/icu/text/TransliterationRule;
label_cond_61:
	x = ( x + 0x1);
	goto label_goto_2c;
	// 293    .line 140
label_cond_64:
	this->index[cVar0] = v->size();
	this->rules = std::make_shared<std::vector<std::vector<android::icu::text::TransliterationRule>>>(v->size());
	v->toArray(this->rules);
	errors = 0x0;
	//    .local v0, "errors":Ljava/lang/StringBuilder;
	x = 0x0;
	//    .end local v0    # "errors":Ljava/lang/StringBuilder;
label_goto_7b:
	if ( x >= cVar0 )
		goto label_cond_cf;
	j = this->index[x];
label_goto_81:
	if ( j >= ( this->index[( x + 0x1)] + -0x1) )
		goto label_cond_cc;
	r1 = this->rules[j];
	//    .local v6, "r1":Landroid/icu/text/TransliterationRule;
	k = ( j + 0x1);
	//    .local v3, "k":I
label_goto_91:
	if ( k >= this->index[( x + 0x1)] )
		goto label_cond_c9;
	r2 = this->rules[k];
	//    .local v7, "r2":Landroid/icu/text/TransliterationRule;
	if ( !(r1->masks(r2)) )  
		goto label_cond_bf;
	if ( errors )     
		goto label_cond_c2;
	errors = std::make_shared<java::lang::StringBuilder>();
label_goto_aa:
	errors->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Rule ")))->append(r1)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" masks ")))->append(r2);
label_cond_bf:
	k = ( k + 0x1);
	goto label_goto_91;
	// 410    .line 165
label_cond_c2:
	errors->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	goto label_goto_aa;
	// 418    .line 157
	// 419    .end local v7    # "r2":Landroid/icu/text/TransliterationRule;
label_cond_c9:
	j = ( j + 0x1);
	goto label_goto_81;
	// 425    .line 156
	// 426    .end local v3    # "k":I
	// 427    .end local v6    # "r1":Landroid/icu/text/TransliterationRule;
label_cond_cc:
	x = ( x + 0x1);
	goto label_goto_7b;
	// 433    .line 173
label_cond_cf:
	if ( !(errors) )  
		goto label_cond_db;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(errors->toString());
	// throw
	throw cVar2;
	// 448    .line 176
label_cond_db:
	return;

}
// .method public getMaximumContextLength()I
int android::icu::text::TransliterationRuleSet::getMaximumContextLength()
{
	
	return this->maxContextLength;

}
// .method toRules(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TransliterationRuleSet::toRules(bool escapeUnprintable)
{
	
	std::shared_ptr<java::lang::StringBuilder> ruleSource;
	int i;
	std::shared_ptr<android::icu::text::TransliterationRule> r;
	
	//    .param p1, "escapeUnprintable"    # Z
	//    .local v0, "count":I
	ruleSource = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "ruleSource":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v1, "i":I
label_goto_c:
	if ( i >= this->ruleVector->size() )
		goto label_cond_27;
	if ( !(i) )  
		goto label_cond_15;
	ruleSource->append(0xa);
label_cond_15:
	r = this->ruleVector->get(i);
	r->checkCast("android::icu::text::TransliterationRule");
	//    .local v2, "r":Landroid/icu/text/TransliterationRule;
	ruleSource->append(r->toRule(escapeUnprintable));
	i = ( i + 0x1);
	goto label_goto_c;
	// 520    .line 241
	// 521    .end local v2    # "r":Landroid/icu/text/TransliterationRule;
label_cond_27:
	return ruleSource->toString();

}
// .method public transliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)Z
bool android::icu::text::TransliterationRuleSet::transliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos,bool incremental)
{
	
	bool cVar0;
	int indexByte;
	int i;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "pos"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "incremental"    # Z
	cVar0 = 0x1;
	indexByte = ( text->char32At(pos->start) & 0xff);
	//    .local v1, "indexByte":I
	i = this->index[indexByte];
	//    .local v0, "i":I
label_goto_d:
	if ( i >= this->index[( indexByte + 0x1)] )
		goto label_cond_26;
	//    .local v2, "m":I
	// switch
	{
	auto item = ( this->rules[i]->matchAndReplace(text, pos, incremental) );
	if (item == 1) goto label_pswitch_24;
	if (item == 2) goto label_pswitch_23;
	}
	i = ( i + 0x1);
	goto label_goto_d;
	// 582    .line 204
label_pswitch_23:
	return cVar0;
	// 586    .line 211
label_pswitch_24:
	return 0x0;
	// 592    .line 219
	// 593    .end local v2    # "m":I
label_cond_26:
	pos->start = (pos->start +  android::icu::text::UTF16::getCharCount(text->char32At(pos->start)));
	return cVar0;
	// 614    .line 197
	// 615    :pswitch_data_36
	// 616    .packed-switch 0x1
	// 617        :pswitch_24
	// 618        :pswitch_23
	// 619    .end packed-switch

}


