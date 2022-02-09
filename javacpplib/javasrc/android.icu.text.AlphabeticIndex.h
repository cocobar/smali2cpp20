#ifndef __android_icu_text_AlphabeticIndex__
#define __android_icu_text_AlphabeticIndex__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\AlphabeticIndex.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.AlphabeticIndex_S_1.h"
#include "android.icu.text.AlphabeticIndex_S_Bucket_S_LabelType.h"
#include "android.icu.text.AlphabeticIndex_S_Bucket.h"
#include "android.icu.text.AlphabeticIndex_S_BucketList.h"
#include "android.icu.text.AlphabeticIndex_S_ImmutableIndex.h"
#include "android.icu.text.AlphabeticIndex_S_Record.h"
#include "android.icu.text.Collator.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.RuleBasedCollator.h"
#include "android.icu.text.UTF16_S_StringComparator.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.text.UnicodeSetIterator.h"
#include "android.icu.util.LocaleData.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.Comparator.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"

namespace android::icu::text{
template <typename V>
class AlphabeticIndex : public java::lang::Iterable<android::icu::text::AlphabeticIndex_S_Bucket<V>> {
protected:
private:
	static std::shared_ptr<java::lang::String> BASE;
	static char CGJ;
	static int GC_CN_MASK;
	static int GC_LL_MASK;
	static int GC_LM_MASK;
	static int GC_LO_MASK;
	static int GC_LT_MASK;
	static int GC_LU_MASK;
	static int GC_L_MASK;
	static std::shared_ptr<java::util::Comparator<java::lang::String>> binaryCmp;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> buckets;
	std::shared_ptr<android::icu::text::RuleBasedCollator> collatorExternal;
	std::shared_ptr<android::icu::text::RuleBasedCollator> collatorOriginal;
	std::shared_ptr<android::icu::text::RuleBasedCollator> collatorPrimaryOnly;
	std::shared_ptr<java::util::List<java::lang::String>> firstCharsInScripts;
	std::shared_ptr<java::lang::String> inflowLabel;
	std::shared_ptr<android::icu::text::UnicodeSet> initialLabels;
	std::shared_ptr<java::util::List<android::icu::text::AlphabeticIndex_S_Record<V>>> inputList;
	int maxLabelCount;
	std::shared_ptr<java::lang::String> overflowLabel;
	std::shared_ptr<java::util::Comparator<android::icu::text::AlphabeticIndex_S_Record<V>>> recordComparator;
	std::shared_ptr<java::lang::String> underflowLabel;
	AlphabeticIndex(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::RuleBasedCollator> collator);
	bool addChineseIndexCharacters();
	void addIndexExemplars(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> createBucketList();
	static std::shared_ptr<java::lang::String> fixLabel(std::shared_ptr<java::lang::String> current);
	static bool hasMultiplePrimaryWeights(std::shared_ptr<android::icu::text::RuleBasedCollator> coll,long long variableTop,std::shared_ptr<java::lang::String> s);
	void initBuckets();
	std::shared_ptr<java::util::List<java::lang::String>> initLabels();
	static bool isOneLabelBetterThanOther(std::shared_ptr<android::icu::text::Normalizer2> nfkdNormalizer,std::shared_ptr<java::lang::String> one,std::shared_ptr<java::lang::String> other);
	std::shared_ptr<java::lang::String> separated(std::shared_ptr<java::lang::String> item);
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<android::icu::text::RuleBasedCollator> _get0(std::shared_ptr<android::icu::text::AlphabeticIndex<V>> _this);
	static void static_cinit();
	AlphabeticIndex(std::shared_ptr<android::icu::text::RuleBasedCollator> collator);
	AlphabeticIndex(std::shared_ptr<android::icu::util::ULocale> locale);
	AlphabeticIndex(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<android::icu::text::AlphabeticIndex<V>> addLabels(std::shared_ptr<android::icu::text::UnicodeSet> additions);
	std::shared_ptr<android::icu::text::AlphabeticIndex<V>> addLabels(std::shared_ptr<std::vector<android::icu::util::ULocale>> additions);
	std::shared_ptr<android::icu::text::AlphabeticIndex<V>> addLabels(std::shared_ptr<std::vector<java::util::Locale>> additions);
	std::shared_ptr<android::icu::text::AlphabeticIndex<V>> addRecord(std::shared_ptr<java::lang::CharSequence> name,std::shared_ptr<V> data);
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_ImmutableIndex<V>> buildImmutableIndex();
	std::shared_ptr<android::icu::text::AlphabeticIndex<V>> clearRecords();
	int getBucketCount();
	int getBucketIndex(std::shared_ptr<java::lang::CharSequence> name);
	std::shared_ptr<java::util::List<java::lang::String>> getBucketLabels();
	std::shared_ptr<android::icu::text::RuleBasedCollator> getCollator();
	std::shared_ptr<java::util::List<java::lang::String>> getFirstCharactersInScripts();
	std::shared_ptr<java::lang::String> getInflowLabel();
	int getMaxLabelCount();
	std::shared_ptr<java::lang::String> getOverflowLabel();
	int getRecordCount();
	std::shared_ptr<java::lang::String> getUnderflowLabel();
	std::shared_ptr<java::util::Iterator<android::icu::text::AlphabeticIndex_S_Bucket<V>>> iterator();
	std::shared_ptr<android::icu::text::AlphabeticIndex<V>> setInflowLabel(std::shared_ptr<java::lang::String> inflowLabel);
	std::shared_ptr<android::icu::text::AlphabeticIndex<V>> setMaxLabelCount(int maxLabelCount);
	std::shared_ptr<android::icu::text::AlphabeticIndex<V>> setOverflowLabel(std::shared_ptr<java::lang::String> overflowLabel);
	std::shared_ptr<android::icu::text::AlphabeticIndex<V>> setUnderflowLabel(std::shared_ptr<java::lang::String> underflowLabel);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::AlphabeticIndex<V>::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~AlphabeticIndex(){
	}

}; // class AlphabeticIndex
}; // namespace android::icu::text
// .method static synthetic -get0(Landroid/icu/text/AlphabeticIndex;)Landroid/icu/text/RuleBasedCollator;
template <typename V>
std::shared_ptr<android::icu::text::RuleBasedCollator> android::icu::text::AlphabeticIndex<V>::_get0(std::shared_ptr<android::icu::text::AlphabeticIndex<V>> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/AlphabeticIndex;
	return _this->collatorOriginal;

}
// .method static constructor <clinit>()V
template <typename V>
static void static_cinit()
{
	
	bool cVar0;
	std::shared_ptr<android::icu::text::UTF16_S_StringComparator> cVar1;
	
	cVar0 = 0x0;
	android::icu::text::AlphabeticIndex<V>::_assertionsDisabled = ( android::icu::text::AlphabeticIndex<V>()->desiredAssertionStatus() ^ 0x1);
	cVar1 = std::make_shared<android::icu::text::UTF16_S_StringComparator>(0x1, cVar0, cVar0);
	android::icu::text::AlphabeticIndex<V>::binaryCmp = cVar1;
	return;

}
// .method public constructor <init>(Landroid/icu/text/RuleBasedCollator;)V
template <typename V>
android::icu::text::AlphabeticIndex<V>::AlphabeticIndex(std::shared_ptr<android::icu::text::RuleBasedCollator> collator)
{
	
	//    .param p1, "collator"    # Landroid/icu/text/RuleBasedCollator;
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	android::icu::text::AlphabeticIndex<V>::(0x0, collator);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
template <typename V>
android::icu::text::AlphabeticIndex<V>::AlphabeticIndex(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	android::icu::text::AlphabeticIndex<V>::(locale, 0x0);
	return;

}
// .method private constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/text/RuleBasedCollator;)V
template <typename V>
android::icu::text::AlphabeticIndex<V>::AlphabeticIndex(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::RuleBasedCollator> collator)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_1> cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	std::shared_ptr<java::lang::IllegalStateException> cVar6;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::String> cVar7;
	std::shared_ptr<android::icu::text::RuleBasedCollator> cVar4;
	std::shared_ptr<android::icu::text::RuleBasedCollator> collator;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "collator"    # Landroid/icu/text/RuleBasedCollator;
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	cVar0 = 0x0;
	// 207    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar1 = std::make_shared<android::icu::text::AlphabeticIndex_S_1>(this);
	this->recordComparator = cVar1;
	cVar2 = std::make_shared<android::icu::text::UnicodeSet>();
	this->initialLabels = cVar2;
	this->overflowLabel = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u2026"));
	this->underflowLabel = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u2026"));
	this->inflowLabel = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u2026"));
	this->maxLabelCount = 0x63;
	if ( !(collator) )  
		goto label_cond_59;
	//    .end local p2    # "collator":Landroid/icu/text/RuleBasedCollator;
	label_goto_27:
	this->collatorOriginal = collator;
	try {
	//label_try_start_29:
	this->collatorPrimaryOnly = this->collatorOriginal->cloneAsThawed();
	//label_try_end_31:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_61;
	}
	//    .catch Ljava/lang/Exception; {:try_start_29 .. :try_end_31} :catch_61
	this->collatorPrimaryOnly->setStrength(cVar0);
	this->collatorPrimaryOnly->freeze();
	this->firstCharsInScripts = this->getFirstCharactersInScripts();
	java::util::Collections::sort(this->firstCharsInScripts, this->collatorPrimaryOnly);
	label_goto_48:
	if ( !(this->firstCharsInScripts->isEmpty()) )  
		goto label_cond_6b;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AlphabeticIndex requires some non-ignorable script boundary strings")));
	// throw
	throw cVar3;
	// 307    .line 263
	// 308    .restart local p2    # "collator":Landroid/icu/text/RuleBasedCollator;
	label_cond_59:
	cVar4 = android::icu::text::Collator::getInstance(locale);
	cVar4->checkCast("android::icu::text::RuleBasedCollator");
	collator = cVar4;
	goto label_goto_27;
	// 320    .line 266
	// 321    .end local p2    # "collator":Landroid/icu/text/RuleBasedCollator;
	label_catch_61:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	cVar6 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Collator cannot be cloned")), getCatchExcetionFromList);
	// throw
	throw cVar6;
	// 335    .line 282
	// 336    .end local v0    # "e":Ljava/lang/Exception;
	label_cond_6b:
	cVar7 = this->firstCharsInScripts->get(cVar0);
	cVar7->checkCast("java::lang::String");
	if ( this->collatorPrimaryOnly->compare(cVar7, std::make_shared<java::lang::String>(std::make_shared<char[]>(""))) )     
		goto label_cond_84;
	this->firstCharsInScripts->remove(cVar0);
	goto label_goto_48;
	// 363    .line 291
	label_cond_84:
	if ( this->addChineseIndexCharacters() )     
		goto label_cond_8f;
	if ( !(locale) )  
		goto label_cond_8f;
	this->addIndexExemplars(locale);
	label_cond_8f:
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
template <typename V>
android::icu::text::AlphabeticIndex<V>::AlphabeticIndex(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	android::icu::text::AlphabeticIndex<V>::(android::icu::util::ULocale::forLocale(locale), 0x0);
	return;

}
// .method private addChineseIndexCharacters()Z
template <typename V>
bool android::icu::text::AlphabeticIndex<V>::addChineseIndexCharacters()
{
	
	int cVar0;
	int cVar1;
	bool cVar2;
	std::shared_ptr<android::icu::text::UnicodeSet> contractions;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	int c;
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	cVar0 = 0x5a;
	cVar1 = 0x41;
	cVar2 = 0x0;
	contractions = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v1, "contractions":Landroid/icu/text/UnicodeSet;
	try {
	//label_try_start_a:
	this->collatorPrimaryOnly->internalAddContractions(std::make_shared<java::lang::String>(std::make_shared<char[]>("\ufdd0"))->charAt(0x0), contractions);
	//label_try_end_17:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1e;
	}
	//    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_17} :catch_1e
	if ( !(contractions->isEmpty()) )  
		goto label_cond_20;
	return cVar2;
	// 442    .line 556
	label_catch_1e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/Exception;
	return cVar2;
	// 450    .line 560
	// 451    .end local v2    # "e":Ljava/lang/Exception;
	label_cond_20:
	this->initialLabels->addAll(contractions);
	s_S_iterator = contractions->iterator();
	//    .local v4, "s$iterator":Ljava/util/Iterator;
	label_cond_29:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_5b;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .local v3, "s":Ljava/lang/String;
	if ( android::icu::text::AlphabeticIndex<V>::_assertionsDisabled )     
		goto label_cond_48;
	if ( s->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("\ufdd0"))) )     
		goto label_cond_48;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 496    .line 563
	label_cond_48:
	c = s->charAt(( s->length() + -0x1));
	//    .local v0, "c":C
	if ( cVar1 >  c )
		goto label_cond_29;
	if ( c >  cVar0 )
		goto label_cond_29;
	this->initialLabels->add(cVar1, cVar0);
	//    .end local v0    # "c":C
	//    .end local v3    # "s":Ljava/lang/String;
	label_cond_5b:
	return 0x1;

}
// .method private addIndexExemplars(Landroid/icu/util/ULocale;)V
template <typename V>
void android::icu::text::AlphabeticIndex<V>::addIndexExemplars(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::UnicodeSet> exemplars;
	std::shared_ptr<android::icu::text::UnicodeSet> ethiopic;
	std::shared_ptr<android::icu::text::UnicodeSetIterator> it;
	std::shared_ptr<java::util::Iterator> item_S_iterator;
	std::shared_ptr<java::lang::String> item;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	cVar0 = 0xd7a3;
	cVar1 = 0x7a;
	cVar2 = 0x61;
	cVar3 = 0xac00;
	cVar4 = 0x0;
	exemplars = android::icu::util::LocaleData::getExemplarSet(locale, cVar4, 0x2);
	//    .local v1, "exemplars":Landroid/icu/text/UnicodeSet;
	if ( !(exemplars) )  
		goto label_cond_18;
	this->initialLabels->addAll(exemplars);
	return;
	// 563    .line 514
	label_cond_18:
	exemplars = android::icu::util::LocaleData::getExemplarSet(locale, cVar4, cVar4)->cloneAsThawed();
	if ( exemplars->containsSome(cVar2, cVar1) )     
		goto label_cond_2c;
	if ( exemplars->size() )     
		goto label_cond_2f;
	label_cond_2c:
	exemplars->addAll(cVar2, cVar1);
	label_cond_2f:
	if ( !(exemplars->containsSome(cVar3, cVar0)) )  
		goto label_cond_97;
	exemplars->remove(cVar3, cVar0)->add(cVar3)->add(0xb098)->add(0xb2e4)->add(0xb77c)->add(0xb9c8)->add(0xbc14)->add(0xc0ac)->add(0xc544)->add(0xc790)->add(0xcc28)->add(0xce74)->add(0xd0c0)->add(0xd30c)->add(0xd558);
	label_cond_97:
	if ( !(exemplars->containsSome(0x1200, 0x137f)) )  
		goto label_cond_c6;
	ethiopic = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[[:Block=Ethiopic:]&[:Script=Ethiopic:]]")));
	//    .local v0, "ethiopic":Landroid/icu/text/UnicodeSet;
	it = std::make_shared<android::icu::text::UnicodeSetIterator>(ethiopic);
	//    .local v2, "it":Landroid/icu/text/UnicodeSetIterator;
	label_cond_ae:
	label_goto_ae:
	if ( !(it->next()) )  
		goto label_cond_c6;
	if ( it->codepoint == android::icu::text::UnicodeSetIterator::IS_STRING )
		goto label_cond_c6;
	if ( !(( it->codepoint & 0x7)) )  
		goto label_cond_ae;
	exemplars->remove(it->codepoint);
	goto label_goto_ae;
	// 765    .line 544
	// 766    .end local v0    # "ethiopic":Landroid/icu/text/UnicodeSet;
	// 767    .end local v2    # "it":Landroid/icu/text/UnicodeSetIterator;
	label_cond_c6:
	item_S_iterator = exemplars->iterator();
	//    .local v4, "item$iterator":Ljava/util/Iterator;
	label_goto_ca:
	if ( !(item_S_iterator->hasNext()) )  
		goto label_cond_e0;
	item = item_S_iterator->next();
	item->checkCast("java::lang::String");
	//    .local v3, "item":Ljava/lang/String;
	this->initialLabels->add(android::icu::lang::UCharacter::toUpperCase(locale, item));
	goto label_goto_ca;
	// 799    .line 547
	// 800    .end local v3    # "item":Ljava/lang/String;
	label_cond_e0:
	return;

}
// .method private createBucketList()Landroid/icu/text/AlphabeticIndex$BucketList;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> android::icu::text::AlphabeticIndex<V>::createBucketList()
{
	
	long long variableTop;
	std::shared<std::vector<std::vector<android::icu::text::AlphabeticIndex_S_Bucket>>> asciiBuckets;
	auto pinyinBuckets;
	std::shared_ptr<java::util::ArrayList> bucketList;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket> cVar0;
	std::shared_ptr<java::lang::String> scriptUpperBoundary;
	std::shared_ptr<java::util::Iterator> current_S_iterator;
	std::shared_ptr<java::lang::String> current;
	int scriptIndex;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket> cVar1;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket> bucket;
	int c;
	int i;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket> singleBucket;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList> cVar3;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket> cVar4;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket> asciiBucket;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList> cVar5;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket> nextBucket;
	std::shared_ptr<java::util::ArrayList> publicBucketList;
	std::shared_ptr<java::util::Iterator> bucket_S_iterator;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList> cVar6;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 808        value = {
	// 809            "()",
	// 810            "Landroid/icu/text/AlphabeticIndex$BucketList",
	// 811            "<TV;>;"
	// 812        }
	// 813    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	//    .local v17, "indexCharacters":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	if ( !(this->collatorPrimaryOnly->isAlternateHandlingShifted()) )  
		goto label_cond_194;
	variableTop = ((long long)(this->collatorPrimaryOnly->getVariableTop()) & 0xffffffffL);
	//    .local v26, "variableTop":J
	label_goto_26:
	//    .local v14, "hasInvisibleBuckets":Z
	asciiBuckets = std::make_shared<std::vector<std::vector<android::icu::text::AlphabeticIndex_S_Bucket>>>(0x1a);
	//    .local v7, "asciiBuckets":[Landroid/icu/text/AlphabeticIndex$Bucket;, "[Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	pinyinBuckets = std::make_shared<std::vector<std::vector<android::icu::text::AlphabeticIndex_S_Bucket>>>(0x1a);
	//    .local v20, "pinyinBuckets":[Landroid/icu/text/AlphabeticIndex$Bucket;, "[Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	//    .local v15, "hasPinyin":Z
	bucketList = std::make_shared<java::util::ArrayList>();
	//    .local v10, "bucketList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;>;"
	cVar0 = std::make_shared<android::icu::text::AlphabeticIndex_S_Bucket>(this->getUnderflowLabel(), std::make_shared<java::lang::String>(std::make_shared<char[]>("")), android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::UNDERFLOW, 0x0);
	bucketList->add(cVar0);
	//    .local v22, "scriptIndex":I
	scriptUpperBoundary = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v23, "scriptUpperBoundary":Ljava/lang/String;
	current_S_iterator = this->initLabels()->iterator();
	//    .local v13, "current$iterator":Ljava/util/Iterator;
	label_cond_59:
	label_goto_59:
	if ( !(current_S_iterator->hasNext()) )  
		goto label_cond_1de;
	current = current_S_iterator->next();
	current->checkCast("java::lang::String");
	//    .local v12, "current":Ljava/lang/String;
	if ( this->collatorPrimaryOnly->compare(current, scriptUpperBoundary) < 0 ) 
		goto label_cond_c5;
	//    .local v18, "inflowBoundary":Ljava/lang/String;
	//    .local v25, "skippedScript":Z
	label_goto_79:
	scriptIndex = ( scriptIndex + 0x1);
	scriptUpperBoundary = this->firstCharsInScripts->get(scriptIndex);
	//    .end local v23    # "scriptUpperBoundary":Ljava/lang/String;
	scriptUpperBoundary->checkCast("java::lang::String");
	//    .restart local v23    # "scriptUpperBoundary":Ljava/lang/String;
	if ( this->collatorPrimaryOnly->compare(current, scriptUpperBoundary) >= 0 )
		goto label_cond_198;
	if ( !(0x0) )  
		goto label_cond_c5;
	if ( bucketList->size() <= 0x1 )
		goto label_cond_c5;
	var79 = cVar1(this->getInflowLabel(), scriptUpperBoundary, android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::INFLOW, 0x0);
	bucketList->add(cVar1);
	//    .end local v18    # "inflowBoundary":Ljava/lang/String;
	//    .end local v25    # "skippedScript":Z
	label_cond_c5:
	bucket = std::make_shared<android::icu::text::AlphabeticIndex_S_Bucket>(android::icu::text::AlphabeticIndex<V>::fixLabel(current), current, android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::NORMAL, 0x0);
	//    .local v8, "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	bucketList->add(bucket);
	if ( current->length() != 0x1 )
		goto label_cond_19c;
	c = current->charAt(0x0);
	//    .local v11, "c":C
	if ( 0x41 >  c )
		goto label_cond_19c;
	if ( c >  0x5a )
		goto label_cond_19c;
	asciiBuckets[( c + -0x41)] = bucket;
	//    .end local v11    # "c":C
	label_cond_ff:
	label_goto_ff:
	if ( current->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("\ufdd0"))) )     
		goto label_cond_59;
	if ( !(android::icu::text::AlphabeticIndex<V>::hasMultiplePrimaryWeights(this->collatorPrimaryOnly, variableTop, current)) )  
		goto label_cond_59;
	if ( !(( current->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("\uffff"))) ^ 0x1)) )  
		goto label_cond_59;
	i = ( bucketList->size() + -0x2);
	//    .local v16, "i":I
	label_goto_12d:
	singleBucket = bucketList->get(i);
	singleBucket->checkCast("android::icu::text::AlphabeticIndex_S_Bucket");
	//    .local v24, "singleBucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	if ( android::icu::text::AlphabeticIndex_S_Bucket::-get2(singleBucket) != android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::NORMAL )
		goto label_cond_59;
	if ( android::icu::text::AlphabeticIndex_S_Bucket::-get0(singleBucket) )     
		goto label_cond_1da;
	if ( !(( android::icu::text::AlphabeticIndex<V>::hasMultiplePrimaryWeights(this->collatorPrimaryOnly, variableTop, android::icu::text::AlphabeticIndex_S_Bucket::-get3(singleBucket)) ^ 0x1)) )  
		goto label_cond_1da;
	//    .end local v8    # "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	bucket = std::make_shared<android::icu::text::AlphabeticIndex_S_Bucket>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), cVar2->append(current)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\uffff")))->toString(), android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::NORMAL, 0x0);
	//    .restart local v8    # "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	android::icu::text::AlphabeticIndex_S_Bucket::-set0(bucket, singleBucket);
	bucketList->add(bucket);
	0x1;
	goto label_goto_59;
	// 1278    .line 972
	// 1279    .end local v7    # "asciiBuckets":[Landroid/icu/text/AlphabeticIndex$Bucket;, "[Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	// 1280    .end local v8    # "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	// 1281    .end local v10    # "bucketList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;>;"
	// 1282    .end local v12    # "current":Ljava/lang/String;
	// 1283    .end local v13    # "current$iterator":Ljava/util/Iterator;
	// 1284    .end local v14    # "hasInvisibleBuckets":Z
	// 1285    .end local v15    # "hasPinyin":Z
	// 1286    .end local v16    # "i":I
	// 1287    .end local v20    # "pinyinBuckets":[Landroid/icu/text/AlphabeticIndex$Bucket;, "[Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	// 1288    .end local v22    # "scriptIndex":I
	// 1289    .end local v23    # "scriptUpperBoundary":Ljava/lang/String;
	// 1290    .end local v24    # "singleBucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	// 1291    .end local v26    # "variableTop":J
	label_cond_194:
	0x0;
	//    .restart local v26    # "variableTop":J
	goto label_goto_26;
	// 1298    .line 1002
	// 1299    .restart local v7    # "asciiBuckets":[Landroid/icu/text/AlphabeticIndex$Bucket;, "[Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	// 1300    .restart local v10    # "bucketList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;>;"
	// 1301    .restart local v12    # "current":Ljava/lang/String;
	// 1302    .restart local v13    # "current$iterator":Ljava/util/Iterator;
	// 1303    .restart local v14    # "hasInvisibleBuckets":Z
	// 1304    .restart local v15    # "hasPinyin":Z
	// 1305    .restart local v18    # "inflowBoundary":Ljava/lang/String;
	// 1306    .restart local v20    # "pinyinBuckets":[Landroid/icu/text/AlphabeticIndex$Bucket;, "[Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	// 1307    .restart local v22    # "scriptIndex":I
	// 1308    .restart local v23    # "scriptUpperBoundary":Ljava/lang/String;
	// 1309    .restart local v25    # "skippedScript":Z
	label_cond_198:
	0x1;
	goto label_goto_79;
	// 1315    .line 1018
	// 1316    .end local v18    # "inflowBoundary":Ljava/lang/String;
	// 1317    .end local v25    # "skippedScript":Z
	// 1318    .restart local v8    # "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	label_cond_19c:
	if ( current->length() != ( std::make_shared<java::lang::String>(std::make_shared<char[]>("\ufdd0"))->length() + 0x1) )
		goto label_cond_ff;
	if ( !(current->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("\ufdd0")))) )  
		goto label_cond_ff;
	c = current->charAt(std::make_shared<java::lang::String>(std::make_shared<char[]>("\ufdd0"))->length());
	//    .restart local v11    # "c":C
	if ( 0x41 >  c )
		goto label_cond_ff;
	if ( c >  0x5a )
		goto label_cond_ff;
	pinyinBuckets[( c + -0x41)] = bucket;
	0x1;
	goto label_goto_ff;
	// 1384    .line 1028
	// 1385    .end local v11    # "c":C
	// 1386    .restart local v16    # "i":I
	// 1387    .restart local v24    # "singleBucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	label_cond_1da:
	i = ( i + -0x1);
	goto label_goto_12d;
	// 1393    .line 1050
	// 1394    .end local v8    # "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	// 1395    .end local v12    # "current":Ljava/lang/String;
	// 1396    .end local v16    # "i":I
	// 1397    .end local v24    # "singleBucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	label_cond_1de:
	if ( bucketList->size() != 0x1 )
		goto label_cond_1f6;
	var208 = cVar3(bucketList, bucketList, 0x0);
	return cVar3;
	// 1424    .line 1055
	label_cond_1f6:
	var216 = cVar4(this->getOverflowLabel(), scriptUpperBoundary, android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::OVERFLOW, 0x0);
	bucketList->add(cVar4);
	if ( !(0x0) )  
		goto label_cond_236;
	0x0;
	//    .local v6, "asciiBucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	i = 0x0;
	//    .end local v6    # "asciiBucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	//    .restart local v16    # "i":I
	label_goto_217:
	if ( i >= 0x1a )
		goto label_cond_236;
	if ( !(asciiBuckets[i]) )  
		goto label_cond_225;
	asciiBucket = asciiBuckets[i];
	label_cond_225:
	if ( !(pinyinBuckets[i]) )  
		goto label_cond_233;
	if ( !(asciiBucket) )  
		goto label_cond_233;
	android::icu::text::AlphabeticIndex_S_Bucket::-set0(pinyinBuckets[i], asciiBucket);
	0x1;
	label_cond_233:
	i = ( i + 0x1);
	goto label_goto_217;
	// 1505    .line 1071
	// 1506    .end local v16    # "i":I
	label_cond_236:
	if ( 0x0 )     
		goto label_cond_244;
	var239 = cVar5(bucketList, bucketList, 0x0);
	return cVar5;
	// 1523    .line 1076
	label_cond_244:
	i = ( bucketList->size() + -0x1);
	//    .restart local v16    # "i":I
	nextBucket = bucketList->get(i);
	nextBucket->checkCast("android::icu::text::AlphabeticIndex_S_Bucket");
	//    .local v19, "nextBucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	label_cond_252:
	label_goto_252:
	i = ( i + -0x1);
	if ( i <= 0 )
		goto label_cond_285;
	bucket = bucketList->get(i);
	bucket->checkCast("android::icu::text::AlphabeticIndex_S_Bucket");
	//    .restart local v8    # "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	if ( android::icu::text::AlphabeticIndex_S_Bucket::-get0(bucket) )     
		goto label_cond_252;
	if ( android::icu::text::AlphabeticIndex_S_Bucket::-get2(bucket) != android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::INFLOW )
		goto label_cond_282;
	if ( android::icu::text::AlphabeticIndex_S_Bucket::-get2(nextBucket) == android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::NORMAL )
		goto label_cond_282;
	android::icu::text::AlphabeticIndex_S_Bucket::-set0(bucket, nextBucket);
	goto label_goto_252;
	// 1599    .line 1089
	label_cond_282:
	nextBucket = bucket;
	goto label_goto_252;
	// 1605    .line 1092
	// 1606    .end local v8    # "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	label_cond_285:
	publicBucketList = std::make_shared<java::util::ArrayList>();
	//    .local v21, "publicBucketList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;>;"
	bucket_S_iterator = bucketList->iterator();
	//    .local v9, "bucket$iterator":Ljava/util/Iterator;
	label_cond_28e:
	label_goto_28e:
	if ( !(bucket_S_iterator->hasNext()) )  
		goto label_cond_2a6;
	bucket = bucket_S_iterator->next();
	bucket->checkCast("android::icu::text::AlphabeticIndex_S_Bucket");
	//    .restart local v8    # "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	if ( android::icu::text::AlphabeticIndex_S_Bucket::-get0(bucket) )     
		goto label_cond_28e;
	publicBucketList->add(bucket);
	goto label_goto_28e;
	// 1648    .line 1098
	// 1649    .end local v8    # "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	label_cond_2a6:
	var281 = cVar6(bucketList, publicBucketList, 0x0);
	return cVar6;

}
// .method private static fixLabel(Ljava/lang/String;)Ljava/lang/String;
template <typename V>
std::shared_ptr<java::lang::String> android::icu::text::AlphabeticIndex<V>::fixLabel(std::shared_ptr<java::lang::String> current)
{
	
	int rest;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "current"    # Ljava/lang/String;
	if ( current->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("\ufdd0"))) )     
		goto label_cond_a;
	return current;
	// 1683    .line 494
	label_cond_a:
	rest = current->charAt(std::make_shared<java::lang::String>(std::make_shared<char[]>("\ufdd0"))->length());
	//    .local v0, "rest":I
	if ( 0x2800 >= rest )
		goto label_cond_34;
	if ( rest >  0x28ff )
		goto label_cond_34;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(( rest + -0x2800))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u5283")))->toString();
	// 1728    .line 498
	label_cond_34:
	return current->substring(std::make_shared<java::lang::String>(std::make_shared<char[]>("\ufdd0"))->length());

}
// .method private static hasMultiplePrimaryWeights(Landroid/icu/text/RuleBasedCollator;JLjava/lang/String;)Z
template <typename V>
bool android::icu::text::AlphabeticIndex<V>::hasMultiplePrimaryWeights(std::shared_ptr<android::icu::text::RuleBasedCollator> coll,long long variableTop,std::shared_ptr<java::lang::String> s)
{
	
	auto ces;
	int seenPrimary;
	int i;
	
	//    .param p0, "coll"    # Landroid/icu/text/RuleBasedCollator;
	//    .param p1, "variableTop"    # J
	//    .param p3, "s"    # Ljava/lang/String;
	ces = coll->internalGetCEs(s);
	//    .local v2, "ces":[J
	seenPrimary = 0x0;
	//    .local v6, "seenPrimary":Z
	i = 0x0;
	//    .local v3, "i":I
	label_goto_6:
	if ( i >= ces->size() )
		goto label_cond_1b;
	//    .local v0, "ce":J
	//    .local v4, "p":J
	if ( (_ushrll(ces[i],0x20) > variableTop) <= 0 )
		goto label_cond_18;
	if ( !(seenPrimary) )  
		goto label_cond_17;
	return 0x1;
	// 1792    .line 1168
	label_cond_17:
	seenPrimary = 0x1;
	label_cond_18:
	i = ( i + 0x1);
	goto label_goto_6;
	// 1802    .line 1171
	// 1803    .end local v0    # "ce":J
	// 1804    .end local v4    # "p":J
	label_cond_1b:
	return 0x0;

}
// .method private initBuckets()V
template <typename V>
void android::icu::text::AlphabeticIndex<V>::initBuckets()
{
	
	std::shared_ptr<java::util::Iterator> bucketIterator;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket> currentBucket;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket> nextBucket;
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::util::Iterator> r_S_iterator;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Record> r;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket> bucket;
	std::shared_ptr<java::util::ArrayList> cVar1;
	int cVar0;
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	if ( !(this->buckets) )  
		goto label_cond_5;
	return;
	// 1824    .line 740
	label_cond_5:
	this->buckets = this->createBucketList();
	if ( !(this->inputList) )  
		goto label_cond_17;
	if ( !(this->inputList->isEmpty()) )  
		goto label_cond_18;
	label_cond_17:
	return;
	// 1849    .line 747
	label_cond_18:
	java::util::Collections::sort(this->inputList, this->recordComparator);
	bucketIterator = android::icu::text::AlphabeticIndex_S_BucketList::-wrap2(this->buckets);
	//    .local v1, "bucketIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;>;"
	currentBucket = bucketIterator->next();
	currentBucket->checkCast("android::icu::text::AlphabeticIndex_S_Bucket");
	//    .local v2, "currentBucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	if ( !(bucketIterator->hasNext()) )  
		goto label_cond_6d;
	nextBucket = bucketIterator->next();
	nextBucket->checkCast("android::icu::text::AlphabeticIndex_S_Bucket");
	//    .local v3, "nextBucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	cVar0 = android::icu::text::AlphabeticIndex_S_Bucket::-get3(nextBucket);
	//    .end local v3    # "nextBucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	label_goto_3b:
	r_S_iterator = this->inputList->iterator();
	//    .local v5, "r$iterator":Ljava/util/Iterator;
	label_goto_41:
	if ( !(r_S_iterator->hasNext()) )  
		goto label_cond_93;
	r = r_S_iterator->next();
	r->checkCast("android::icu::text::AlphabeticIndex_S_Record");
	//    .local v4, "r":Landroid/icu/text/AlphabeticIndex$Record;, "Landroid/icu/text/AlphabeticIndex$Record<TV;>;"
	label_goto_4d:
	if ( !(cVar0) )  
		goto label_cond_72;
	if ( this->collatorPrimaryOnly->compare(android::icu::text::AlphabeticIndex_S_Record::-get0(r), cVar0) < 0 ) 
		goto label_cond_72;
	nextBucket;
	if ( !(bucketIterator->hasNext()) )  
		goto label_cond_70;
	nextBucket = bucketIterator->next();
	nextBucket->checkCast("android::icu::text::AlphabeticIndex_S_Bucket");
	//    .restart local v3    # "nextBucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	cVar0 = android::icu::text::AlphabeticIndex_S_Bucket::-get3(nextBucket);
	//    .local v6, "upperBoundary":Ljava/lang/String;
	goto label_goto_4d;
	// 1960    .line 763
	// 1961    .end local v3    # "nextBucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	// 1962    .end local v4    # "r":Landroid/icu/text/AlphabeticIndex$Record;, "Landroid/icu/text/AlphabeticIndex$Record<TV;>;"
	// 1963    .end local v5    # "r$iterator":Ljava/util/Iterator;
	// 1964    .end local v6    # "upperBoundary":Ljava/lang/String;
	label_cond_6d:
	0x0;
	//    .local v3, "nextBucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	cVar0 = 0x0;
	//    .local v6, "upperBoundary":Ljava/lang/String;
	goto label_goto_3b;
	// 1975    .line 777
	// 1976    .end local v3    # "nextBucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	// 1977    .end local v6    # "upperBoundary":Ljava/lang/String;
	// 1978    .restart local v4    # "r":Landroid/icu/text/AlphabeticIndex$Record;, "Landroid/icu/text/AlphabeticIndex$Record<TV;>;"
	// 1979    .restart local v5    # "r$iterator":Ljava/util/Iterator;
	label_cond_70:
	cVar0 = 0x0;
	//    .restart local v6    # "upperBoundary":Ljava/lang/String;
	goto label_goto_4d;
	// 1986    .line 781
	// 1987    .end local v6    # "upperBoundary":Ljava/lang/String;
	label_cond_72:
	bucket = currentBucket;
	//    .local v0, "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	if ( !(android::icu::text::AlphabeticIndex_S_Bucket::-get0(currentBucket)) )  
		goto label_cond_7d;
	bucket = android::icu::text::AlphabeticIndex_S_Bucket::-get0(bucket);
	label_cond_7d:
	if ( android::icu::text::AlphabeticIndex_S_Bucket::-get4(bucket) )     
		goto label_cond_8b;
	cVar1 = std::make_shared<java::util::ArrayList>();
	android::icu::text::AlphabeticIndex_S_Bucket::-set2(bucket, cVar1);
	label_cond_8b:
	android::icu::text::AlphabeticIndex_S_Bucket::-get4(bucket)->add(r);
	goto label_goto_41;
	// 2029    .line 790
	// 2030    .end local v0    # "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	// 2031    .end local v4    # "r":Landroid/icu/text/AlphabeticIndex$Record;, "Landroid/icu/text/AlphabeticIndex$Record<TV;>;"
	label_cond_93:
	return;

}
// .method private initLabels()Ljava/util/List;
template <typename V>
std::shared_ptr<java::util::List<java::lang::String>> android::icu::text::AlphabeticIndex<V>::initLabels()
{
	
	std::shared_ptr<java::util::ArrayList> indexCharacters;
	std::shared_ptr<java::lang::String> firstScriptBoundary;
	std::shared_ptr<java::lang::String> overflowBoundary;
	std::shared_ptr<java::util::Iterator> item_S_iterator;
	std::shared_ptr<java::lang::String> item;
	int insertionPoint;
	std::shared_ptr<java::lang::String> itemAlreadyIn;
	int size;
	int old;
	std::shared_ptr<java::util::Iterator> it;
	int count;
	int bump;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2039        value = {
	// 2040            "()",
	// 2041            "Ljava/util/List",
	// 2042            "<",
	// 2043            "Ljava/lang/String;",
	// 2044            ">;"
	// 2045        }
	// 2046    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	//    .local v11, "nfkdNormalizer":Landroid/icu/text/Normalizer2;
	indexCharacters = std::make_shared<java::util::ArrayList>();
	//    .local v5, "indexCharacters":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	firstScriptBoundary = this->firstCharsInScripts->get(0x0);
	firstScriptBoundary->checkCast("java::lang::String");
	//    .local v4, "firstScriptBoundary":Ljava/lang/String;
	overflowBoundary = this->firstCharsInScripts->get(( this->firstCharsInScripts->size() + -0x1));
	overflowBoundary->checkCast("java::lang::String");
	//    .local v13, "overflowBoundary":Ljava/lang/String;
	item_S_iterator = this->initialLabels->iterator();
	//    .local v9, "item$iterator":Ljava/util/Iterator;
	label_cond_33:
	label_goto_33:
	if ( !(item_S_iterator->hasNext()) )  
		goto label_cond_c1;
	item = item_S_iterator->next();
	item->checkCast("java::lang::String");
	//    .local v8, "item":Ljava/lang/String;
	if ( android::icu::text::UTF16::hasMoreCodePointsThan(item, 0x1) )     
		goto label_cond_7e;
	//    .local v2, "checkDistinct":Z
	label_goto_47:
	if ( this->collatorPrimaryOnly->compare(item, firstScriptBoundary) < 0 ) 
		goto label_cond_33;
	if ( this->collatorPrimaryOnly->compare(item, overflowBoundary) >= 0 )
		goto label_cond_33;
	if ( !(0x0) )  
		goto label_cond_6f;
	if ( !(this->collatorPrimaryOnly->compare(item, this->separated(item))) )  
		goto label_cond_33;
	label_cond_6f:
	insertionPoint = java::util::Collections::binarySearch(indexCharacters, item, this->collatorPrimaryOnly);
	//    .local v6, "insertionPoint":I
	if ( insertionPoint >= 0 )
		goto label_cond_b0;
	indexCharacters->add((~insertionPoint), item);
	goto label_goto_33;
	// 2203    .line 440
	// 2204    .end local v2    # "checkDistinct":Z
	// 2205    .end local v6    # "insertionPoint":I
	label_cond_7e:
	if ( item->charAt(( item->length() + -0x1)) != 0x2a )
		goto label_cond_ae;
	if ( item->charAt(( item->length() + -0x2)) == 0x2a )
		goto label_cond_ae;
	item = item->substring(0x0, ( item->length() + -0x1));
	0x0;
	//    .restart local v2    # "checkDistinct":Z
	goto label_goto_47;
	// 2262    .line 447
	// 2263    .end local v2    # "checkDistinct":Z
	label_cond_ae:
	0x1;
	//    .restart local v2    # "checkDistinct":Z
	goto label_goto_47;
	// 2270    .line 461
	// 2271    .restart local v6    # "insertionPoint":I
	label_cond_b0:
	itemAlreadyIn = indexCharacters->get(insertionPoint);
	itemAlreadyIn->checkCast("java::lang::String");
	//    .local v10, "itemAlreadyIn":Ljava/lang/String;
	if ( !(android::icu::text::AlphabeticIndex<V>::isOneLabelBetterThanOther(android::icu::text::Normalizer2::getNFKDInstance(android::icu::text::Normalizer2::getNFKDInstance(android::icu::text::Normalizer2::getNFKDInstance({const[class].FS-Param}), item, itemAlreadyIn), item, itemAlreadyIn), item, itemAlreadyIn)) )  
		goto label_cond_33;
	indexCharacters->set(insertionPoint, item);
	goto label_goto_33;
	// 2292    .line 471
	// 2293    .end local v2    # "checkDistinct":Z
	// 2294    .end local v6    # "insertionPoint":I
	// 2295    .end local v8    # "item":Ljava/lang/String;
	// 2296    .end local v10    # "itemAlreadyIn":Ljava/lang/String;
	label_cond_c1:
	size = ( indexCharacters->size() + -0x1);
	//    .local v14, "size":I
	if ( size <= this->maxLabelCount )
		goto label_cond_ed;
	//    .local v3, "count":I
	old = -0x1;
	//    .local v12, "old":I
	it = indexCharacters->iterator();
	//    .local v7, "it":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	label_goto_d3:
	if ( !(it->hasNext()) )  
		goto label_cond_ed;
	count = ( count + 0x1);
	it->next();
	bump = ((this->maxLabelCount *  count) / size);
	//    .local v1, "bump":I
	if ( bump != old )
		goto label_cond_eb;
	it->remove();
	goto label_goto_d3;
	// 2357    .line 482
	label_cond_eb:
	old = bump;
	goto label_goto_d3;
	// 2363    .line 487
	// 2364    .end local v1    # "bump":I
	// 2365    .end local v3    # "count":I
	// 2366    .end local v7    # "it":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	// 2367    .end local v12    # "old":I
	label_cond_ed:
	return indexCharacters;

}
// .method private static isOneLabelBetterThanOther(Landroid/icu/text/Normalizer2;Ljava/lang/String;Ljava/lang/String;)Z
template <typename V>
bool android::icu::text::AlphabeticIndex<V>::isOneLabelBetterThanOther(std::shared_ptr<android::icu::text::Normalizer2> nfkdNormalizer,std::shared_ptr<java::lang::String> one,std::shared_ptr<java::lang::String> other)
{
	
	bool cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> n1;
	std::shared_ptr<java::lang::String> n2;
	int result;
	
	//    .param p0, "nfkdNormalizer"    # Landroid/icu/text/Normalizer2;
	//    .param p1, "one"    # Ljava/lang/String;
	//    .param p2, "other"    # Ljava/lang/String;
	cVar0 = 0x1;
	cVar1 = 0x0;
	n1 = nfkdNormalizer->normalize(one);
	//    .local v0, "n1":Ljava/lang/String;
	n2 = nfkdNormalizer->normalize(other);
	//    .local v1, "n2":Ljava/lang/String;
	result = (n1->codePointCount(cVar1, n1->length()) - n2->codePointCount(cVar1, n2->length()));
	//    .local v2, "result":I
	if ( !(result) )  
		goto label_cond_23;
	if ( result >= 0 )
		goto label_cond_21;
	label_goto_20:
	return cVar0;
	label_cond_21:
	cVar0 = cVar1;
	goto label_goto_20;
	// 2429    .line 807
	label_cond_23:
	result = android::icu::text::AlphabeticIndex<V>::binaryCmp->compare(n1, n2);
	if ( !(result) )  
		goto label_cond_30;
	if ( result >= 0 )
		goto label_cond_2e;
	label_goto_2d:
	return cVar0;
	label_cond_2e:
	cVar0 = cVar1;
	goto label_goto_2d;
	// 2451    .line 811
	label_cond_30:
	if ( android::icu::text::AlphabeticIndex<V>::binaryCmp->compare(one, other) >= 0 )
		goto label_cond_39;
	label_goto_38:
	return cVar0;
	label_cond_39:
	cVar0 = cVar1;
	goto label_goto_38;

}
// .method private separated(Ljava/lang/String;)Ljava/lang/String;
template <typename V>
std::shared_ptr<java::lang::String> android::icu::text::AlphabeticIndex<V>::separated(std::shared_ptr<java::lang::String> item)
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	char last;
	int i;
	char ch;
	
	//    .param p1, "item"    # Ljava/lang/String;
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "result":Ljava/lang/StringBuilder;
	last = item->charAt(0x0);
	//    .local v2, "last":C
	result->append(last);
	i = 0x1;
	//    .local v1, "i":I
	label_goto_e:
	if ( i >= item->length() )
		goto label_cond_32;
	ch = item->charAt(i);
	//    .local v0, "ch":C
	if ( !(android::icu::lang::UCharacter::isHighSurrogate(last)) )  
		goto label_cond_26;
	if ( !(( android::icu::lang::UCharacter::isLowSurrogate(ch) ^ 0x1)) )  
		goto label_cond_2b;
	label_cond_26:
	result->append(0x34f);
	label_cond_2b:
	result->append(ch);
	last = ch;
	i = ( i + 0x1);
	goto label_goto_e;
	// 2543    .line 590
	// 2544    .end local v0    # "ch":C
	label_cond_32:
	return result->toString();

}
// .method public addLabels(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/AlphabeticIndex;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex<V>> android::icu::text::AlphabeticIndex<V>::addLabels(std::shared_ptr<android::icu::text::UnicodeSet> additions)
{
	
	//    .param p1, "additions"    # Landroid/icu/text/UnicodeSet;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2559        value = {
	// 2560            "(",
	// 2561            "Landroid/icu/text/UnicodeSet;",
	// 2562            ")",
	// 2563            "Landroid/icu/text/AlphabeticIndex",
	// 2564            "<TV;>;"
	// 2565        }
	// 2566    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	this->initialLabels->addAll(additions);
	this->buckets = 0x0;
	return this;

}
// .method public varargs addLabels([Landroid/icu/util/ULocale;)Landroid/icu/text/AlphabeticIndex;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex<V>> android::icu::text::AlphabeticIndex<V>::addLabels(std::shared_ptr<std::vector<android::icu::util::ULocale>> additions)
{
	
	int cVar0;
	
	//    .param p1, "additions"    # [Landroid/icu/util/ULocale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2588        value = {
	// 2589            "([",
	// 2590            "Landroid/icu/util/ULocale;",
	// 2591            ")",
	// 2592            "Landroid/icu/text/AlphabeticIndex",
	// 2593            "<TV;>;"
	// 2594        }
	// 2595    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	cVar0 = 0x0;
	label_goto_2:
	if ( cVar0 >= additions->size() )
		goto label_cond_c;
	//    .local v0, "addition":Landroid/icu/util/ULocale;
	this->addIndexExemplars(additions[cVar0]);
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_2;
	// 2618    .line 316
	// 2619    .end local v0    # "addition":Landroid/icu/util/ULocale;
	label_cond_c:
	this->buckets = 0x0;
	return this;

}
// .method public varargs addLabels([Ljava/util/Locale;)Landroid/icu/text/AlphabeticIndex;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex<V>> android::icu::text::AlphabeticIndex<V>::addLabels(std::shared_ptr<std::vector<java::util::Locale>> additions)
{
	
	int cVar0;
	
	//    .param p1, "additions"    # [Ljava/util/Locale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2633        value = {
	// 2634            "([",
	// 2635            "Ljava/util/Locale;",
	// 2636            ")",
	// 2637            "Landroid/icu/text/AlphabeticIndex",
	// 2638            "<TV;>;"
	// 2639        }
	// 2640    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	cVar0 = 0x0;
	label_goto_2:
	if ( cVar0 >= additions->size() )
		goto label_cond_10;
	//    .local v0, "addition":Ljava/util/Locale;
	this->addIndexExemplars(android::icu::util::ULocale::forLocale(additions[cVar0]));
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_2;
	// 2667    .line 329
	// 2668    .end local v0    # "addition":Ljava/util/Locale;
	label_cond_10:
	this->buckets = 0x0;
	return this;

}
// .method public addRecord(Ljava/lang/CharSequence;Ljava/lang/Object;)Landroid/icu/text/AlphabeticIndex;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex<V>> android::icu::text::AlphabeticIndex<V>::addRecord(std::shared_ptr<java::lang::CharSequence> name,std::shared_ptr<V> data)
{
	
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList> cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Record> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/CharSequence;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2682        value = {
	// 2683            "(",
	// 2684            "Ljava/lang/CharSequence;",
	// 2685            "TV;)",
	// 2686            "Landroid/icu/text/AlphabeticIndex",
	// 2687            "<TV;>;"
	// 2688        }
	// 2689    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	//    .local p2, "data":Ljava/lang/Object;, "TV;"
	cVar0 = 0x0;
	this->buckets = cVar0;
	if ( this->inputList )     
		goto label_cond_e;
	cVar1 = std::make_shared<java::util::ArrayList>();
	this->inputList = cVar1;
	label_cond_e:
	cVar2 = std::make_shared<android::icu::text::AlphabeticIndex_S_Record>(name, data, cVar0);
	this->inputList->add(cVar2);
	return this;

}
// .method public buildImmutableIndex()Landroid/icu/text/AlphabeticIndex$ImmutableIndex;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex_S_ImmutableIndex<V>> android::icu::text::AlphabeticIndex<V>::buildImmutableIndex()
{
	
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_ImmutableIndex> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2728        value = {
	// 2729            "()",
	// 2730            "Landroid/icu/text/AlphabeticIndex$ImmutableIndex",
	// 2731            "<TV;>;"
	// 2732        }
	// 2733    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	if ( !(this->inputList) )  
		goto label_cond_1b;
	if ( !(( this->inputList->isEmpty() ^ 0x1)) )  
		goto label_cond_1b;
	//    .local v0, "immutableBucketList":Landroid/icu/text/AlphabeticIndex$BucketList;, "Landroid/icu/text/AlphabeticIndex$BucketList<TV;>;"
	label_goto_13:
	cVar0 = std::make_shared<android::icu::text::AlphabeticIndex_S_ImmutableIndex>(immutableBucketList, this->collatorPrimaryOnly, 0x0);
	return cVar0;
	// 2770    .line 607
	// 2771    .end local v0    # "immutableBucketList":Landroid/icu/text/AlphabeticIndex$BucketList;, "Landroid/icu/text/AlphabeticIndex$BucketList<TV;>;"
	label_cond_1b:
	if ( this->buckets )     
		goto label_cond_25;
	this->buckets = this->createBucketList();
	label_cond_25:
	//    .restart local v0    # "immutableBucketList":Landroid/icu/text/AlphabeticIndex$BucketList;, "Landroid/icu/text/AlphabeticIndex$BucketList<TV;>;"
	goto label_goto_13;

}
// .method public clearRecords()Landroid/icu/text/AlphabeticIndex;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex<V>> android::icu::text::AlphabeticIndex<V>::clearRecords()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2795        value = {
	// 2796            "()",
	// 2797            "Landroid/icu/text/AlphabeticIndex",
	// 2798            "<TV;>;"
	// 2799        }
	// 2800    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	if ( !(this->inputList) )  
		goto label_cond_16;
	if ( !(( this->inputList->isEmpty() ^ 0x1)) )  
		goto label_cond_16;
	this->inputList->clear();
	this->buckets = 0x0;
	label_cond_16:
	return this;

}
// .method public getBucketCount()I
template <typename V>
int android::icu::text::AlphabeticIndex<V>::getBucketCount()
{
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	this->initBuckets();
	return android::icu::text::AlphabeticIndex_S_BucketList::-wrap0(this->buckets);

}
// .method public getBucketIndex(Ljava/lang/CharSequence;)I
template <typename V>
int android::icu::text::AlphabeticIndex<V>::getBucketIndex(std::shared_ptr<java::lang::CharSequence> name)
{
	
	//    .param p1, "name"    # Ljava/lang/CharSequence;
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	this->initBuckets();
	return android::icu::text::AlphabeticIndex_S_BucketList::-wrap1(this->buckets, name, this->collatorPrimaryOnly);

}
// .method public getBucketLabels()Ljava/util/List;
template <typename V>
std::shared_ptr<java::util::List<java::lang::String>> android::icu::text::AlphabeticIndex<V>::getBucketLabels()
{
	
	std::shared_ptr<java::util::ArrayList> result;
	std::shared_ptr<java::util::Iterator> bucket_S_iterator;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket> bucket;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2876        value = {
	// 2877            "()",
	// 2878            "Ljava/util/List",
	// 2879            "<",
	// 2880            "Ljava/lang/String;",
	// 2881            ">;"
	// 2882        }
	// 2883    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	this->initBuckets();
	result = std::make_shared<java::util::ArrayList>();
	//    .local v2, "result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
	bucket_S_iterator = this->buckets->iterator();
	//    .local v1, "bucket$iterator":Ljava/util/Iterator;
	label_goto_e:
	if ( !(bucket_S_iterator->hasNext()) )  
		goto label_cond_22;
	bucket = bucket_S_iterator->next();
	bucket->checkCast("android::icu::text::AlphabeticIndex_S_Bucket");
	//    .local v0, "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	result->add(bucket->getLabel());
	goto label_goto_e;
	// 2927    .line 626
	// 2928    .end local v0    # "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	label_cond_22:
	return result;

}
// .method public getCollator()Landroid/icu/text/RuleBasedCollator;
template <typename V>
std::shared_ptr<android::icu::text::RuleBasedCollator> android::icu::text::AlphabeticIndex<V>::getCollator()
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	std::shared_ptr<android::icu::text::RuleBasedCollator> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	if ( this->collatorExternal )     
		goto label_cond_e;
	try {
	//label_try_start_4:
	cVar0 = this->collatorOriginal->clone();
	cVar0->checkCast("android::icu::text::RuleBasedCollator");
	this->collatorExternal = cVar0;
	//label_try_end_e:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_11;
	}
	//    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_e} :catch_11
	label_cond_e:
	return this->collatorExternal;
	// 2963    .line 642
	label_catch_11:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Collator cannot be cloned")), getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method public getFirstCharactersInScripts()Ljava/util/List;
template <typename V>
std::shared_ptr<java::util::List<java::lang::String>> android::icu::text::AlphabeticIndex<V>::getFirstCharactersInScripts()
{
	
	int cVar0;
	std::shared_ptr<java::util::ArrayList> dest;
	std::shared_ptr<android::icu::text::UnicodeSet> set;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	std::shared_ptr<java::util::Iterator> boundary_S_iterator;
	std::shared_ptr<java::lang::String> boundary;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2981        value = {
	// 2982            "()",
	// 2983            "Ljava/util/List",
	// 2984            "<",
	// 2985            "Ljava/lang/String;",
	// 2986            ">;"
	// 2987        }
	// 2988    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2991    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	cVar0 = 0x1;
	dest = std::make_shared<java::util::ArrayList>(0xc8);
	//    .local v2, "dest":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	set = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v4, "set":Landroid/icu/text/UnicodeSet;
	this->collatorPrimaryOnly->internalAddContractions(0xfdd1, set);
	if ( !(set->isEmpty()) )  
		goto label_cond_24;
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AlphabeticIndex requires script-first-primary contractions")));
	// throw
	throw cVar1;
	// 3036    .line 1203
	label_cond_24:
	boundary_S_iterator = set->iterator();
	//    .local v1, "boundary$iterator":Ljava/util/Iterator;
	label_cond_28:
	label_goto_28:
	if ( !(boundary_S_iterator->hasNext()) )  
		goto label_cond_46;
	boundary = boundary_S_iterator->next();
	boundary->checkCast("java::lang::String");
	//    .local v0, "boundary":Ljava/lang/String;
	//    .local v3, "gcMask":I
	if ( !(( (cVar0 << android::icu::lang::UCharacter::getType(boundary->codePointAt(cVar0))) & 0x3f)) )  
		goto label_cond_28;
	dest->add(boundary);
	goto label_goto_28;
	// 3080    .line 1213
	// 3081    .end local v0    # "boundary":Ljava/lang/String;
	// 3082    .end local v3    # "gcMask":I
	label_cond_46:
	return dest;

}
// .method public getInflowLabel()Ljava/lang/String;
template <typename V>
std::shared_ptr<java::lang::String> android::icu::text::AlphabeticIndex<V>::getInflowLabel()
{
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	return this->inflowLabel;

}
// .method public getMaxLabelCount()I
template <typename V>
int android::icu::text::AlphabeticIndex<V>::getMaxLabelCount()
{
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	return this->maxLabelCount;

}
// .method public getOverflowLabel()Ljava/lang/String;
template <typename V>
std::shared_ptr<java::lang::String> android::icu::text::AlphabeticIndex<V>::getOverflowLabel()
{
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	return this->overflowLabel;

}
// .method public getRecordCount()I
template <typename V>
int android::icu::text::AlphabeticIndex<V>::getRecordCount()
{
	
	int cVar0;
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	if ( !(this->inputList) )  
		goto label_cond_b;
	cVar0 = this->inputList->size();
	label_goto_a:
	return cVar0;
	label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method public getUnderflowLabel()Ljava/lang/String;
template <typename V>
std::shared_ptr<java::lang::String> android::icu::text::AlphabeticIndex<V>::getUnderflowLabel()
{
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	return this->underflowLabel;

}
// .method public iterator()Ljava/util/Iterator;
template <typename V>
std::shared_ptr<java::util::Iterator<android::icu::text::AlphabeticIndex_S_Bucket<V>>> android::icu::text::AlphabeticIndex<V>::iterator()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3159        value = {
	// 3160            "()",
	// 3161            "Ljava/util/Iterator",
	// 3162            "<",
	// 3163            "Landroid/icu/text/AlphabeticIndex$Bucket",
	// 3164            "<TV;>;>;"
	// 3165        }
	// 3166    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	this->initBuckets();
	return this->buckets->iterator();

}
// .method public setInflowLabel(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex<V>> android::icu::text::AlphabeticIndex<V>::setInflowLabel(std::shared_ptr<java::lang::String> inflowLabel)
{
	
	//    .param p1, "inflowLabel"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 3187        value = {
	// 3188            "(",
	// 3189            "Ljava/lang/String;",
	// 3190            ")",
	// 3191            "Landroid/icu/text/AlphabeticIndex",
	// 3192            "<TV;>;"
	// 3193        }
	// 3194    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	this->inflowLabel = inflowLabel;
	this->buckets = 0x0;
	return this;

}
// .method public setMaxLabelCount(I)Landroid/icu/text/AlphabeticIndex;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex<V>> android::icu::text::AlphabeticIndex<V>::setMaxLabelCount(int maxLabelCount)
{
	
	//    .param p1, "maxLabelCount"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 3214        value = {
	// 3215            "(I)",
	// 3216            "Landroid/icu/text/AlphabeticIndex",
	// 3217            "<TV;>;"
	// 3218        }
	// 3219    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	this->maxLabelCount = maxLabelCount;
	this->buckets = 0x0;
	return this;

}
// .method public setOverflowLabel(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex<V>> android::icu::text::AlphabeticIndex<V>::setOverflowLabel(std::shared_ptr<java::lang::String> overflowLabel)
{
	
	//    .param p1, "overflowLabel"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 3239        value = {
	// 3240            "(",
	// 3241            "Ljava/lang/String;",
	// 3242            ")",
	// 3243            "Landroid/icu/text/AlphabeticIndex",
	// 3244            "<TV;>;"
	// 3245        }
	// 3246    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	this->overflowLabel = overflowLabel;
	this->buckets = 0x0;
	return this;

}
// .method public setUnderflowLabel(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex<V>> android::icu::text::AlphabeticIndex<V>::setUnderflowLabel(std::shared_ptr<java::lang::String> underflowLabel)
{
	
	//    .param p1, "underflowLabel"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 3266        value = {
	// 3267            "(",
	// 3268            "Ljava/lang/String;",
	// 3269            ")",
	// 3270            "Landroid/icu/text/AlphabeticIndex",
	// 3271            "<TV;>;"
	// 3272        }
	// 3273    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	this->underflowLabel = underflowLabel;
	this->buckets = 0x0;
	return this;

}

#endif //__android_icu_text_AlphabeticIndex__

