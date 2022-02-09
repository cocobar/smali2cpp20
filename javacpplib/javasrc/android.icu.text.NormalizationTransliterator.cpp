// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NormalizationTransliterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl_S_UTF16Plus.h"
#include "android.icu.text.NormalizationTransliterator_S_1.h"
#include "android.icu.text.NormalizationTransliterator_S_2.h"
#include "android.icu.text.NormalizationTransliterator_S_3.h"
#include "android.icu.text.NormalizationTransliterator_S_4.h"
#include "android.icu.text.NormalizationTransliterator_S_5.h"
#include "android.icu.text.NormalizationTransliterator_S_6.h"
#include "android.icu.text.NormalizationTransliterator_S_NormalizingTransform.h"
#include "android.icu.text.NormalizationTransliterator.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.SourceTargetUtility.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Character.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.HashMap.h"
#include "java.util.Map.h"

static android::icu::text::NormalizationTransliterator::SOURCE_CACHE;
// .method static constructor <clinit>()V
void android::icu::text::NormalizationTransliterator::static_cinit()
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	
	cVar0 = std::make_shared<java::util::HashMap>();
	android::icu::text::NormalizationTransliterator::SOURCE_CACHE = cVar0;
	return;

}
// .method private constructor <init>(Ljava/lang/String;Landroid/icu/text/Normalizer2;)V
android::icu::text::NormalizationTransliterator::NormalizationTransliterator(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::text::Normalizer2> n2)
{
	
	//    .param p1, "id"    # Ljava/lang/String;
	//    .param p2, "n2"    # Landroid/icu/text/Normalizer2;
	android::icu::text::Transliterator::(id, 0x0);
	this->norm2 = n2;
	return;

}
// .method synthetic constructor <init>(Ljava/lang/String;Landroid/icu/text/Normalizer2;Landroid/icu/text/NormalizationTransliterator;)V
android::icu::text::NormalizationTransliterator::NormalizationTransliterator(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::text::Normalizer2> n2,std::shared_ptr<android::icu::text::NormalizationTransliterator> _this2)
{
	
	//    .param p1, "id"    # Ljava/lang/String;
	//    .param p2, "n2"    # Landroid/icu/text/Normalizer2;
	//    .param p3, "-this2"    # Landroid/icu/text/NormalizationTransliterator;
	android::icu::text::NormalizationTransliterator::(id, n2);
	return;

}
// .method static register()V
void android::icu::text::NormalizationTransliterator::register()
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::NormalizationTransliterator_S_1> cVar2;
	std::shared_ptr<android::icu::text::NormalizationTransliterator_S_2> cVar3;
	std::shared_ptr<android::icu::text::NormalizationTransliterator_S_3> cVar4;
	std::shared_ptr<android::icu::text::NormalizationTransliterator_S_4> cVar5;
	std::shared_ptr<android::icu::text::NormalizationTransliterator_S_5> cVar6;
	std::shared_ptr<android::icu::text::NormalizationTransliterator_S_6> cVar7;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::text::NormalizationTransliterator_S_1>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-NFC")), cVar2);
	cVar3 = std::make_shared<android::icu::text::NormalizationTransliterator_S_2>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-NFD")), cVar3);
	cVar4 = std::make_shared<android::icu::text::NormalizationTransliterator_S_3>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-NFKC")), cVar4);
	cVar5 = std::make_shared<android::icu::text::NormalizationTransliterator_S_4>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-NFKD")), cVar5);
	cVar6 = std::make_shared<android::icu::text::NormalizationTransliterator_S_5>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-FCD")), cVar6);
	cVar7 = std::make_shared<android::icu::text::NormalizationTransliterator_S_6>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-FCC")), cVar7);
	android::icu::text::Transliterator::registerSpecialInverse(std::make_shared<java::lang::String>(std::make_shared<char[]>("NFC")), std::make_shared<java::lang::String>(std::make_shared<char[]>("NFD")), cVar0);
	android::icu::text::Transliterator::registerSpecialInverse(std::make_shared<java::lang::String>(std::make_shared<char[]>("NFKC")), std::make_shared<java::lang::String>(std::make_shared<char[]>("NFKD")), cVar0);
	android::icu::text::Transliterator::registerSpecialInverse(std::make_shared<java::lang::String>(std::make_shared<char[]>("FCC")), std::make_shared<java::lang::String>(std::make_shared<char[]>("NFD")), cVar1);
	android::icu::text::Transliterator::registerSpecialInverse(std::make_shared<java::lang::String>(std::make_shared<char[]>("FCD")), std::make_shared<java::lang::String>(std::make_shared<char[]>("FCD")), cVar1);
	return;

}
// .method public addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::NormalizationTransliterator::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	std::shared_ptr<java::util::Map> cVar0;
	std::shared_ptr<android::icu::text::SourceTargetUtility> cache;
	std::shared_ptr<android::icu::text::NormalizationTransliterator_S_NormalizingTransform> cVar1;
	
	//    .param p1, "inputFilter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	cVar0 = android::icu::text::NormalizationTransliterator::SOURCE_CACHE;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	cache = android::icu::text::NormalizationTransliterator::SOURCE_CACHE->get(this->norm2);
	cache->checkCast("android::icu::text::SourceTargetUtility");
	//    .local v0, "cache":Landroid/icu/text/SourceTargetUtility;
	if ( cache )     
		goto label_cond_24;
	//    .end local v0    # "cache":Landroid/icu/text/SourceTargetUtility;
	cVar1 = std::make_shared<android::icu::text::NormalizationTransliterator_S_NormalizingTransform>(this->norm2);
	cache = std::make_shared<android::icu::text::SourceTargetUtility>(cVar1, this->norm2);
	//    .restart local v0    # "cache":Landroid/icu/text/SourceTargetUtility;
	android::icu::text::NormalizationTransliterator::SOURCE_CACHE->put(this->norm2, cache);
	//label_try_end_24:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_3 .. :try_end_24} :catchall_29
label_cond_24:
	cVar0->monitor_exit();
	cache->addSourceTargetSet(this, inputFilter, sourceSet, targetSet);
	return;
	// 235    .line 160
	// 236    .end local v0    # "cache":Landroid/icu/text/SourceTargetUtility;
label_catchall_29:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method protected handleTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V
void android::icu::text::NormalizationTransliterator::handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> offsets,bool isIncremental)
{
	
	int start;
	int limit;
	std::shared_ptr<java::lang::StringBuilder> segment;
	std::shared_ptr<java::lang::StringBuilder> normalized;
	int c;
	int prev;
	int delta;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "offsets"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "isIncremental"    # Z
	start = offsets->start;
	//    .local v6, "start":I
	limit = offsets->limit;
	//    .local v2, "limit":I
	if ( start <  limit )
		goto label_cond_7;
	return;
	// 266    .line 104
label_cond_7:
	segment = std::make_shared<java::lang::StringBuilder>();
	//    .local v5, "segment":Ljava/lang/StringBuilder;
	normalized = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "normalized":Ljava/lang/StringBuilder;
	c = text->char32At(start);
	//    .local v0, "c":I
label_goto_15:
	prev = start;
	//    .local v4, "prev":I
	segment->setLength(0x0);
label_cond_1a:
	segment->appendCodePoint(c);
	start = (start +  java::lang::Character::charCount(c));
	if ( start >= limit )
		goto label_cond_32;
	c = text->char32At(start);
	if ( ( this->norm2->hasBoundaryBefore(c) ^ 0x1) )     
		goto label_cond_1a;
label_cond_32:
	if ( start != limit )
		goto label_cond_4f;
	if ( !(isIncremental) )  
		goto label_cond_4f;
	if ( !(( this->norm2->hasBoundaryAfter(c) ^ 0x1)) )  
		goto label_cond_4f;
label_cond_41:
	offsets->start = start;
	offsets->contextLimit = (offsets->contextLimit +  (limit - offsets->limit));
	offsets->limit = limit;
	return;
	// 363    .line 123
label_cond_4f:
	this->norm2->normalize(segment, normalized);
	if ( android::icu::impl::Normalizer2Impl_S_UTF16Plus::equal(segment, normalized) )     
		goto label_cond_6b;
	text->replace(prev, start, normalized->toString());
	delta = (normalized->length() - (start - prev));
	//    .local v1, "delta":I
	start = (start +  delta);
	limit = (limit +  delta);
	//    .end local v1    # "delta":I
label_cond_6b:
	if ( start >= limit )
		goto label_cond_41;
	goto label_goto_15;

}


