// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BreakIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheValue.h"
#include "android.icu.impl.ICUDebug.h"
#include "android.icu.text.BreakIterator_S_BreakIteratorCache.h"
#include "android.icu.text.BreakIterator_S_BreakIteratorServiceShim.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.RuleBasedBreakIterator.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Class.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.text.StringCharacterIterator.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"

static android::icu::text::BreakIterator::DEBUG;
static android::icu::text::BreakIterator::DONE = -0x1;
static android::icu::text::BreakIterator::KIND_CHARACTER = 0x0;
static android::icu::text::BreakIterator::KIND_COUNT = 0x5;
static android::icu::text::BreakIterator::KIND_LINE = 0x2;
static android::icu::text::BreakIterator::KIND_SENTENCE = 0x3;
static android::icu::text::BreakIterator::KIND_TITLE = 0x4;
static android::icu::text::BreakIterator::KIND_WORD = 0x1;
static android::icu::text::BreakIterator::WORD_IDEO = 0x190;
static android::icu::text::BreakIterator::WORD_IDEO_LIMIT = 0x1f4;
static android::icu::text::BreakIterator::WORD_KANA = 0x12c;
static android::icu::text::BreakIterator::WORD_KANA_LIMIT = 0x190;
static android::icu::text::BreakIterator::WORD_LETTER = 0xc8;
static android::icu::text::BreakIterator::WORD_LETTER_LIMIT = 0x12c;
static android::icu::text::BreakIterator::WORD_NONE = 0x0;
static android::icu::text::BreakIterator::WORD_NONE_LIMIT = 0x64;
static android::icu::text::BreakIterator::WORD_NUMBER = 0x64;
static android::icu::text::BreakIterator::WORD_NUMBER_LIMIT = 0xc8;
static android::icu::text::BreakIterator::iterCache;
static android::icu::text::BreakIterator::shim;
// .method static constructor <clinit>()V
void android::icu::text::BreakIterator::static_cinit()
{
	
	android::icu::text::BreakIterator::DEBUG = android::icu::impl::ICUDebug::enabled(std::make_shared<java::lang::String>(std::make_shared<char[]>("breakiterator")));
	android::icu::text::BreakIterator::iterCache = std::make_shared<std::vector<std::vector<android::icu::impl::CacheValue>>>(0x5);
	return;

}
// .method protected constructor <init>()V
android::icu::text::BreakIterator::BreakIterator()
{
	
	// 104    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static declared-synchronized getAvailableLocales()[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::text::BreakIterator::getAvailableLocales()
{
	
	std::shared_ptr<android::icu::text::BreakIterator> cVar0;
	
	cVar0 = android::icu::text::BreakIterator();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_3 .. :try_end_a} :catchall_d
	cVar0->monitor_exit();
	return android::icu::text::BreakIterator::getShim({const[class].FS-Param})->getAvailableLocales();
label_catchall_d:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static declared-synchronized getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::BreakIterator::getAvailableULocales()
{
	
	std::shared_ptr<android::icu::text::BreakIterator> cVar0;
	
	cVar0 = android::icu::text::BreakIterator();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_3 .. :try_end_a} :catchall_d
	cVar0->monitor_exit();
	return android::icu::text::BreakIterator::getShim({const[class].FS-Param})->getAvailableULocales();
label_catchall_d:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static getBreakInstance(Landroid/icu/util/ULocale;I)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getBreakInstance(std::shared_ptr<android::icu::util::ULocale> where,int kind)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<android::icu::text::BreakIterator_S_BreakIteratorCache> cache;
	std::shared_ptr<android::icu::text::BreakIterator> result;
	std::shared_ptr<android::icu::text::RuleBasedBreakIterator> rbbi;
	
	//    .param p0, "where"    # Landroid/icu/util/ULocale;
	//    .param p1, "kind"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 179    .end annotation
	if ( where )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Specified locale is null")));
	// throw
	throw cVar0;
	// 194    .line 811
label_cond_b:
	if ( !(android::icu::text::BreakIterator::iterCache[kind]) )  
		goto label_cond_2c;
	cache = android::icu::text::BreakIterator::iterCache[kind]->get();
	cache->checkCast("android::icu::text::BreakIterator_S_BreakIteratorCache");
	//    .local v0, "cache":Landroid/icu/text/BreakIterator$BreakIteratorCache;
	if ( !(cache) )  
		goto label_cond_2c;
	if ( !(cache->getLocale()->equals(where)) )  
		goto label_cond_2c;
	return cache->createBreakInstance();
	// 235    .line 821
	// 236    .end local v0    # "cache":Landroid/icu/text/BreakIterator$BreakIteratorCache;
label_cond_2c:
	result = android::icu::text::BreakIterator::getShim({const[class].FS-Param})->createBreakIterator(where, kind);
	//    .local v2, "result":Landroid/icu/text/BreakIterator;
	cache = std::make_shared<android::icu::text::BreakIterator_S_BreakIteratorCache>(where, result);
	//    .restart local v0    # "cache":Landroid/icu/text/BreakIterator$BreakIteratorCache;
	android::icu::text::BreakIterator::iterCache[kind] = android::icu::impl::CacheValue::getInstance(cache);
	if ( !(result->instanceOf("android::icu::text::RuleBasedBreakIterator")) )  
		goto label_cond_4b;
	rbbi = result;
	rbbi->checkCast("android::icu::text::RuleBasedBreakIterator");
	//    .local v1, "rbbi":Landroid/icu/text/RuleBasedBreakIterator;
	rbbi->setBreakType(kind);
	//    .end local v1    # "rbbi":Landroid/icu/text/RuleBasedBreakIterator;
label_cond_4b:
	return result;

}
// .method public static getCharacterInstance()Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getCharacterInstance()
{
	
	return android::icu::text::BreakIterator::getCharacterInstance(android::icu::util::ULocale::getDefault({const[class].FS-Param}));

}
// .method public static getCharacterInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getCharacterInstance(std::shared_ptr<android::icu::util::ULocale> where)
{
	
	//    .param p0, "where"    # Landroid/icu/util/ULocale;
	return android::icu::text::BreakIterator::getBreakInstance(where, 0x0);

}
// .method public static getCharacterInstance(Ljava/util/Locale;)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getCharacterInstance(std::shared_ptr<java::util::Locale> where)
{
	
	//    .param p0, "where"    # Ljava/util/Locale;
	return android::icu::text::BreakIterator::getBreakInstance(android::icu::util::ULocale::forLocale(where), 0x0);

}
// .method public static getLineInstance()Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getLineInstance()
{
	
	return android::icu::text::BreakIterator::getLineInstance(android::icu::util::ULocale::getDefault({const[class].FS-Param}));

}
// .method public static getLineInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getLineInstance(std::shared_ptr<android::icu::util::ULocale> where)
{
	
	//    .param p0, "where"    # Landroid/icu/util/ULocale;
	return android::icu::text::BreakIterator::getBreakInstance(where, 0x2);

}
// .method public static getLineInstance(Ljava/util/Locale;)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getLineInstance(std::shared_ptr<java::util::Locale> where)
{
	
	//    .param p0, "where"    # Ljava/util/Locale;
	return android::icu::text::BreakIterator::getBreakInstance(android::icu::util::ULocale::forLocale(where), 0x2);

}
// .method public static getSentenceInstance()Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getSentenceInstance()
{
	
	return android::icu::text::BreakIterator::getSentenceInstance(android::icu::util::ULocale::getDefault({const[class].FS-Param}));

}
// .method public static getSentenceInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getSentenceInstance(std::shared_ptr<android::icu::util::ULocale> where)
{
	
	//    .param p0, "where"    # Landroid/icu/util/ULocale;
	return android::icu::text::BreakIterator::getBreakInstance(where, 0x3);

}
// .method public static getSentenceInstance(Ljava/util/Locale;)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getSentenceInstance(std::shared_ptr<java::util::Locale> where)
{
	
	//    .param p0, "where"    # Ljava/util/Locale;
	return android::icu::text::BreakIterator::getBreakInstance(android::icu::util::ULocale::forLocale(where), 0x3);

}
// .method private static getShim()Landroid/icu/text/BreakIterator$BreakIteratorServiceShim;
std::shared_ptr<android::icu::text::BreakIterator_S_BreakIteratorServiceShim> android::icu::text::BreakIterator::getShim()
{
	
	std::shared_ptr<java::lang::Exception> e;
	std::shared_ptr<java::lang::RuntimeException> cVar1;
	std::shared_ptr<android::icu::text::BreakIterator_S_BreakIteratorServiceShim> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( android::icu::text::BreakIterator::shim )     
		goto label_cond_13;
	try {
	//label_try_start_4:
	//    .local v0, "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.text.BreakIteratorFactory")))->newInstance();
	cVar0->checkCast("android::icu::text::BreakIterator_S_BreakIteratorServiceShim");
	android::icu::text::BreakIterator::shim = cVar0;
	//label_try_end_13:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_28;
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_4 .. :try_end_13} :catch_28
	//    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_13} :catch_16
label_cond_13:
	return android::icu::text::BreakIterator::shim;
	// 468    .line 899
label_catch_16:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	if ( !(android::icu::text::BreakIterator::DEBUG) )  
		goto label_cond_1e;
	e->printStackTrace();
label_cond_1e:
	cVar1 = std::make_shared<java::lang::RuntimeException>(e->getMessage());
	// throw
	throw cVar1;
	// 493    .line 896
	// 494    .end local v1    # "e":Ljava/lang/Exception;
label_catch_28:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/util/MissingResourceException;
	// throw
	throw;

}
// .method public static getTitleInstance()Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getTitleInstance()
{
	
	return android::icu::text::BreakIterator::getTitleInstance(android::icu::util::ULocale::getDefault({const[class].FS-Param}));

}
// .method public static getTitleInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getTitleInstance(std::shared_ptr<android::icu::util::ULocale> where)
{
	
	//    .param p0, "where"    # Landroid/icu/util/ULocale;
	return android::icu::text::BreakIterator::getBreakInstance(where, 0x4);

}
// .method public static getTitleInstance(Ljava/util/Locale;)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getTitleInstance(std::shared_ptr<java::util::Locale> where)
{
	
	//    .param p0, "where"    # Ljava/util/Locale;
	return android::icu::text::BreakIterator::getBreakInstance(android::icu::util::ULocale::forLocale(where), 0x4);

}
// .method public static getWordInstance()Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getWordInstance()
{
	
	return android::icu::text::BreakIterator::getWordInstance(android::icu::util::ULocale::getDefault({const[class].FS-Param}));

}
// .method public static getWordInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getWordInstance(std::shared_ptr<android::icu::util::ULocale> where)
{
	
	//    .param p0, "where"    # Landroid/icu/util/ULocale;
	return android::icu::text::BreakIterator::getBreakInstance(where, 0x1);

}
// .method public static getWordInstance(Ljava/util/Locale;)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator::getWordInstance(std::shared_ptr<java::util::Locale> where)
{
	
	//    .param p0, "where"    # Ljava/util/Locale;
	return android::icu::text::BreakIterator::getBreakInstance(android::icu::util::ULocale::forLocale(where), 0x1);

}
// .method public static registerInstance(Landroid/icu/text/BreakIterator;Landroid/icu/util/ULocale;I)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::BreakIterator::registerInstance(std::shared_ptr<android::icu::text::BreakIterator> iter,std::shared_ptr<android::icu::util::ULocale> locale,int kind)
{
	
	std::shared_ptr<android::icu::text::BreakIterator_S_BreakIteratorCache> cache;
	
	//    .param p0, "iter"    # Landroid/icu/text/BreakIterator;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "kind"    # I
	if ( !(android::icu::text::BreakIterator::iterCache[kind]) )  
		goto label_cond_21;
	cache = android::icu::text::BreakIterator::iterCache[kind]->get();
	cache->checkCast("android::icu::text::BreakIterator_S_BreakIteratorCache");
	//    .local v0, "cache":Landroid/icu/text/BreakIterator$BreakIteratorCache;
	if ( !(cache) )  
		goto label_cond_21;
	if ( !(cache->getLocale()->equals(locale)) )  
		goto label_cond_21;
	android::icu::text::BreakIterator::iterCache[kind] = 0x0;
	//    .end local v0    # "cache":Landroid/icu/text/BreakIterator$BreakIteratorCache;
label_cond_21:
	return android::icu::text::BreakIterator::getShim({const[class].FS-Param})->registerInstance(iter, locale, kind);

}
// .method public static registerInstance(Landroid/icu/text/BreakIterator;Ljava/util/Locale;I)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::BreakIterator::registerInstance(std::shared_ptr<android::icu::text::BreakIterator> iter,std::shared_ptr<java::util::Locale> locale,int kind)
{
	
	//    .param p0, "iter"    # Landroid/icu/text/BreakIterator;
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .param p2, "kind"    # I
	return android::icu::text::BreakIterator::registerInstance(iter, android::icu::util::ULocale::forLocale(locale), kind);

}
// .method public static unregister(Ljava/lang/Object;)Z
bool android::icu::text::BreakIterator::unregister(std::shared_ptr<java::lang::Object> key)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int kind;
	
	//    .param p0, "key"    # Ljava/lang/Object;
	if ( key )     
		goto label_cond_c;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("registry key must not be null")));
	// throw
	throw cVar0;
	// 702    .line 783
label_cond_c:
	if ( !(android::icu::text::BreakIterator::shim) )  
		goto label_cond_22;
	kind = 0x0;
	//    .local v0, "kind":I
label_goto_11:
	if ( kind >= 0x5 )
		goto label_cond_1b;
	android::icu::text::BreakIterator::iterCache[kind] = 0x0;
	kind = ( kind + 0x1);
	goto label_goto_11;
	// 727    .line 791
label_cond_1b:
	return android::icu::text::BreakIterator::shim->unregister(key);
	// 737    .line 793
	// 738    .end local v0    # "kind":I
label_cond_22:
	return 0x0;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::BreakIterator::clone()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	//label_try_end_3:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_3} :catch_5
	return this->clone();
	// 761    .line 238
label_catch_5:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar0 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public final getLocale(Landroid/icu/util/ULocale$Type;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::BreakIterator::getLocale(std::shared_ptr<android::icu::util::ULocale_S_Type> type)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p1, "type"    # Landroid/icu/util/ULocale$Type;
	if ( type != android::icu::util::ULocale::ACTUAL_LOCALE )
		goto label_cond_7;
	cVar0 = this->actualLocale;
label_goto_6:
	return cVar0;
	// 800    .line 936
label_cond_7:
	cVar0 = this->validLocale;
	goto label_goto_6;

}
// .method public getRuleStatus()I
int android::icu::text::BreakIterator::getRuleStatus()
{
	
	return 0x0;

}
// .method public getRuleStatusVec([I)I
int android::icu::text::BreakIterator::getRuleStatusVec(std::shared_ptr<int[]> fillInArray)
{
	
	int cVar0;
	
	//    .param p1, "fillInArray"    # [I
	cVar0 = 0x0;
	if ( !(fillInArray) )  
		goto label_cond_8;
	if ( fillInArray->size() <= 0 )
		goto label_cond_8;
	fillInArray[cVar0] = cVar0;
label_cond_8:
	return 0x1;

}
// .method public isBoundary(I)Z
bool android::icu::text::BreakIterator::isBoundary(int offset)
{
	
	bool cVar0;
	
	//    .param p1, "offset"    # I
	cVar0 = 0x1;
	if ( offset )     
		goto label_cond_5;
	return cVar0;
	// 859    .line 363
label_cond_5:
	if ( this->following(( offset + -0x1)) != offset )
		goto label_cond_e;
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = 0x0;
	goto label_goto_d;

}
// .method public preceding(I)I
int android::icu::text::BreakIterator::preceding(int offset)
{
	
	int pos;
	
	//    .param p1, "offset"    # I
	pos = this->following(offset);
	//    .local v0, "pos":I
label_goto_4:
	if ( pos <  offset )
		goto label_cond_e;
	if ( pos == -0x1 )
		goto label_cond_e;
	pos = this->previous();
	goto label_goto_4;
	// 913    .line 344
label_cond_e:
	return pos;

}
// .method final setLocale(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)V
void android::icu::text::BreakIterator::setLocale(std::shared_ptr<android::icu::util::ULocale> valid,std::shared_ptr<android::icu::util::ULocale> actual)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	
	//    .param p1, "valid"    # Landroid/icu/util/ULocale;
	//    .param p2, "actual"    # Landroid/icu/util/ULocale;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( valid )     
		goto label_cond_f;
	cVar2 = cVar0;
label_goto_5:
	if ( actual )     
		goto label_cond_11;
label_goto_7:
	if ( cVar2 == cVar0 )
		goto label_cond_13;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar3;
label_cond_f:
	cVar2 = cVar1;
	goto label_goto_5;
label_cond_11:
	cVar0 = cVar1;
	goto label_goto_7;
	// 960    .line 964
label_cond_13:
	this->validLocale = valid;
	this->actualLocale = actual;
	return;

}
// .method public setText(Ljava/lang/String;)V
void android::icu::text::BreakIterator::setText(std::shared_ptr<java::lang::String> newText)
{
	
	std::shared_ptr<java::text::StringCharacterIterator> cVar0;
	
	//    .param p1, "newText"    # Ljava/lang/String;
	cVar0 = std::make_shared<java::text::StringCharacterIterator>(newText);
	this->setText(cVar0);
	return;

}


