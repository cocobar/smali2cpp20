// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalDataCache.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.SimpleCache.h"
#include "android.icu.text.CompactDecimalDataCache_S_CompactDecimalDataSink.h"
#include "android.icu.text.CompactDecimalDataCache_S_Data.h"
#include "android.icu.text.CompactDecimalDataCache_S_DataBundle.h"
#include "android.icu.text.CompactDecimalDataCache.h"
#include "android.icu.text.DecimalFormat_S_Unit.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.NumberingSystem.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collection.h"
#include "java.util.Iterator.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"

static android::icu::text::CompactDecimalDataCache::CURRENCY_FORMAT = std::make_shared<java::lang::String>("currencyFormat");
static android::icu::text::CompactDecimalDataCache::DECIMAL_FORMAT = std::make_shared<java::lang::String>("decimalFormat");
static android::icu::text::CompactDecimalDataCache::LATIN_NUMBERING_SYSTEM = std::make_shared<java::lang::String>("latn");
static android::icu::text::CompactDecimalDataCache::LONG_STYLE = std::make_shared<java::lang::String>("long");
static android::icu::text::CompactDecimalDataCache::MAX_DIGITS = 0xf;
static android::icu::text::CompactDecimalDataCache::NUMBER_ELEMENTS = std::make_shared<java::lang::String>("NumberElements");
static android::icu::text::CompactDecimalDataCache::OTHER = std::make_shared<java::lang::String>("other");
static android::icu::text::CompactDecimalDataCache::PATTERNS_LONG = std::make_shared<java::lang::String>("patternsLong");
static android::icu::text::CompactDecimalDataCache::PATTERNS_SHORT = std::make_shared<java::lang::String>("patternsShort");
static android::icu::text::CompactDecimalDataCache::SHORT_CURRENCY_STYLE = std::make_shared<java::lang::String>("shortCurrency");
static android::icu::text::CompactDecimalDataCache::SHORT_STYLE = std::make_shared<java::lang::String>("short");
// .method static synthetic -wrap0(Ljava/lang/String;ILjava/lang/String;Landroid/icu/util/ULocale;Ljava/lang/String;Landroid/icu/text/CompactDecimalDataCache$Data;Z)I
int android::icu::text::CompactDecimalDataCache::_wrap0(std::shared_ptr<java::lang::String> pluralVariant,int idx,std::shared_ptr<java::lang::String> template,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> style,std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> destination,bool overwrite)
{
	
	//    .param p0, "pluralVariant"    # Ljava/lang/String;
	//    .param p1, "idx"    # I
	//    .param p2, "template"    # Ljava/lang/String;
	//    .param p3, "locale"    # Landroid/icu/util/ULocale;
	//    .param p4, "style"    # Ljava/lang/String;
	//    .param p5, "destination"    # Landroid/icu/text/CompactDecimalDataCache$Data;
	//    .param p6, "overwrite"    # Z
	return android::icu::text::CompactDecimalDataCache::populatePrefixSuffix(pluralVariant, idx, template, locale, style, destination, overwrite);

}
// .method static synthetic -wrap1(Landroid/icu/util/ULocale;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CompactDecimalDataCache::_wrap1(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> style)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "style"    # Ljava/lang/String;
	return android::icu::text::CompactDecimalDataCache::localeAndStyle(locale, style);

}
// .method static synthetic -wrap2(JI)J
long long android::icu::text::CompactDecimalDataCache::_wrap2(long long power10,int numZeros)
{
	
	//    .param p0, "power10"    # J
	//    .param p2, "numZeros"    # I
	return android::icu::text::CompactDecimalDataCache::calculateDivisor(power10, numZeros);

}
// .method constructor <init>()V
android::icu::text::CompactDecimalDataCache::CompactDecimalDataCache()
{
	
	std::shared_ptr<android::icu::impl::SimpleCache> cVar0;
	
	// 106    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::impl::SimpleCache>();
	this->cache = cVar0;
	return;

}
// .method private static calculateDivisor(JI)J
long long android::icu::text::CompactDecimalDataCache::calculateDivisor(long long power10,int numZeros)
{
	
	long long divisor;
	int i;
	
	//    .param p0, "power10"    # J
	//    .param p2, "numZeros"    # I
	divisor = power10;
	//    .local v0, "divisor":J
	i = 0x1;
	//    .local v2, "i":I
label_goto_2:
	if ( i >= numZeros )
		goto label_cond_a;
	divisor = (divisor /  0xa);
	i = ( i + 0x1);
	goto label_goto_2;
	// 147    .line 392
label_cond_a:
	return divisor;

}
// .method private static checkForOtherVariants(Landroid/icu/text/CompactDecimalDataCache$Data;Landroid/icu/util/ULocale;Ljava/lang/String;)V
void android::icu::text::CompactDecimalDataCache::checkForOtherVariants(std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> data,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> style)
{
	
	std::shared_ptr<std::vector<android::icu::text::DecimalFormat_S_Unit>> otherByBase;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<std::vector<android::icu::text::DecimalFormat_S_Unit>> variantByBase;
	int log10Value;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::String> cVar4;
	
	//    .param p0, "data"    # Landroid/icu/text/CompactDecimalDataCache$Data;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "style"    # Ljava/lang/String;
	otherByBase = data->units->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("other")));
	otherByBase->checkCast("std::vector<android::icu::text::DecimalFormat_S_Unit>");
	//    .local v3, "otherByBase":[Landroid/icu/text/DecimalFormat$Unit;
	if ( otherByBase )     
		goto label_cond_2b;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("No \'other\' plural variants defined in ")))->append(android::icu::text::CompactDecimalDataCache::localeAndStyle(locale, style))->toString());
	// throw
	throw cVar0;
	// 205    .line 423
label_cond_2b:
	entry_S_iterator = data->units->entrySet()->iterator();
	//    .local v1, "entry$iterator":Ljava/util/Iterator;
label_cond_35:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_a1;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v0, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;[Landroid/icu/text/DecimalFormat$Unit;>;"
	if ( entry->getKey() == std::make_shared<java::lang::String>(std::make_shared<char[]>("other")) )
		goto label_cond_35;
	variantByBase = entry->getValue();
	variantByBase->checkCast("std::vector<android::icu::text::DecimalFormat_S_Unit>");
	//    .local v4, "variantByBase":[Landroid/icu/text/DecimalFormat$Unit;
	log10Value = 0x0;
	//    .local v2, "log10Value":I
label_goto_51:
	if ( log10Value >= 0xf )
		goto label_cond_35;
	if ( !(variantByBase[log10Value]) )  
		goto label_cond_9e;
	if ( otherByBase[log10Value] )     
		goto label_cond_9e;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = entry->getKey();
	cVar4->checkCast("java::lang::String");
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("No \'other\' plural variant defined for 10^")))->append(log10Value)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" but a \'")))->append(cVar4)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' variant is defined")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" in ")))->append(android::icu::text::CompactDecimalDataCache::localeAndStyle(locale, style))->toString());
	// throw
	throw cVar2;
	// 340    .line 426
label_cond_9e:
	log10Value = ( log10Value + 0x1);
	goto label_goto_51;
	// 346    .line 435
	// 347    .end local v0    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;[Landroid/icu/text/DecimalFormat$Unit;>;"
	// 348    .end local v2    # "log10Value":I
	// 349    .end local v4    # "variantByBase":[Landroid/icu/text/DecimalFormat$Unit;
label_cond_a1:
	return;

}
// .method private static copyFromPreviousIndex(ILjava/util/Map;)V
void android::icu::text::CompactDecimalDataCache::copyFromPreviousIndex(int idx,std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> units)
{
	
	std::shared_ptr<java::util::Iterator> byBase_S_iterator;
	std::shared_ptr<std::vector<android::icu::text::DecimalFormat_S_Unit>> byBase;
	
	//    .param p0, "idx"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 358        value = {
	// 359            "(I",
	// 360            "Ljava/util/Map",
	// 361            "<",
	// 362            "Ljava/lang/String;",
	// 363            "[",
	// 364            "Landroid/icu/text/DecimalFormat$Unit;",
	// 365            ">;)V"
	// 366        }
	// 367    .end annotation
	//    .local p1, "units":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Landroid/icu/text/DecimalFormat$Unit;>;"
	byBase_S_iterator = units->values()->iterator();
	//    .local v1, "byBase$iterator":Ljava/util/Iterator;
label_goto_8:
	if ( !(byBase_S_iterator->hasNext()) )  
		goto label_cond_22;
	byBase = byBase_S_iterator->next();
	byBase->checkCast("std::vector<android::icu::text::DecimalFormat_S_Unit>");
	//    .local v0, "byBase":[Landroid/icu/text/DecimalFormat$Unit;
	if ( idx )     
		goto label_cond_1b;
	byBase[idx] = android::icu::text::DecimalFormat::NULL_UNIT;
	goto label_goto_8;
	// 405    .line 484
label_cond_1b:
	byBase[idx] = byBase[( idx + -0x1)];
	goto label_goto_8;
	// 415    .line 487
	// 416    .end local v0    # "byBase":[Landroid/icu/text/DecimalFormat$Unit;
label_cond_22:
	return;

}
// .method private static fillInMissing(Landroid/icu/text/CompactDecimalDataCache$Data;)V
void android::icu::text::CompactDecimalDataCache::fillInMissing(std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> result)
{
	
	int i;
	std::shared_ptr<std::vector<android::icu::text::DecimalFormat_S_Unit>> cVar0;
	
	//    .param p0, "result"    # Landroid/icu/text/CompactDecimalDataCache$Data;
	//    .local v2, "lastDivisor":J
	i = 0x0;
	//    .local v0, "i":I
label_goto_3:
	if ( i >= result->divisors->size() )
		goto label_cond_2d;
	cVar0 = result->units->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("other")));
	cVar0->checkCast("std::vector<android::icu::text::DecimalFormat_S_Unit>");
	if ( cVar0[i] )     
		goto label_cond_23;
	result->divisors[i] = 0x1;
	android::icu::text::CompactDecimalDataCache::copyFromPreviousIndex(i, result->units);
label_goto_20:
	i = ( i + 0x1);
	goto label_goto_3;
	// 472    .line 463
label_cond_23:
	result->divisors[i];
	android::icu::text::CompactDecimalDataCache::propagateOtherToMissing(i, result->units);
	goto label_goto_20;
	// 485    .line 467
label_cond_2d:
	return;

}
// .method static getUnit(Ljava/util/Map;Ljava/lang/String;I)Landroid/icu/text/DecimalFormat$Unit;
std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> android::icu::text::CompactDecimalDataCache::getUnit(std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> units,std::shared_ptr<java::lang::String> variant,int base)
{
	
	std::shared_ptr<std::vector<android::icu::text::DecimalFormat_S_Unit>> byBase;
	
	//    .param p1, "variant"    # Ljava/lang/String;
	//    .param p2, "base"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 495        value = {
	// 496            "(",
	// 497            "Ljava/util/Map",
	// 498            "<",
	// 499            "Ljava/lang/String;",
	// 500            "[",
	// 501            "Landroid/icu/text/DecimalFormat$Unit;",
	// 502            ">;",
	// 503            "Ljava/lang/String;",
	// 504            "I)",
	// 505            "Landroid/icu/text/DecimalFormat$Unit;"
	// 506        }
	// 507    .end annotation
	//    .local p0, "units":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Landroid/icu/text/DecimalFormat$Unit;>;"
	byBase = units->get(variant);
	byBase->checkCast("std::vector<android::icu::text::DecimalFormat_S_Unit>");
	//    .local v0, "byBase":[Landroid/icu/text/DecimalFormat$Unit;
	if ( byBase )     
		goto label_cond_11;
	byBase = units->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("other")));
	//    .end local v0    # "byBase":[Landroid/icu/text/DecimalFormat$Unit;
	byBase->checkCast("std::vector<android::icu::text::DecimalFormat_S_Unit>");
	//    .restart local v0    # "byBase":[Landroid/icu/text/DecimalFormat$Unit;
label_cond_11:
	return byBase[base];

}
// .method private static load(Landroid/icu/util/ULocale;)Landroid/icu/text/CompactDecimalDataCache$DataBundle;
std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_DataBundle> android::icu::text::CompactDecimalDataCache::load(std::shared_ptr<android::icu::util::ULocale> ulocale)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_DataBundle> dataBundle;
	std::shared_ptr<java::lang::String> nsName;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> r;
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_CompactDecimalDataSink> sink;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "ulocale"    # Landroid/icu/util/ULocale;
	//    .annotation system Ldalvik/annotation/Throws;
	// 544        value = {
	// 545            Ljava/util/MissingResourceException;
	// 546        }
	// 547    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	dataBundle = android::icu::text::CompactDecimalDataCache_S_DataBundle::-wrap0({const[class].FS-Param});
	//    .local v0, "dataBundle":Landroid/icu/text/CompactDecimalDataCache$DataBundle;
	nsName = android::icu::text::NumberingSystem::getInstance(ulocale)->getName();
	//    .local v2, "nsName":Ljava/lang/String;
	r = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), ulocale);
	r->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v3, "r":Landroid/icu/impl/ICUResourceBundle;
	sink = std::make_shared<android::icu::text::CompactDecimalDataCache_S_CompactDecimalDataSink>(dataBundle, ulocale);
	//    .local v4, "sink":Landroid/icu/text/CompactDecimalDataCache$CompactDecimalDataSink;
	android::icu::text::CompactDecimalDataCache_S_CompactDecimalDataSink::-set0(sink, cVar1);
	if ( nsName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("latn"))) )     
		goto label_cond_45;
	android::icu::text::CompactDecimalDataCache_S_CompactDecimalDataSink::-set1(sink, cVar1);
	try {
	//label_try_start_2b:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	r->getAllItemsWithFallback(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("NumberElements/")))->append(nsName)->toString(), sink);
	//label_try_end_42:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_82;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_2b .. :try_end_42} :catch_82
label_goto_42:
	android::icu::text::CompactDecimalDataCache_S_CompactDecimalDataSink::-set0(sink, cVar0);
label_cond_45:
	android::icu::text::CompactDecimalDataCache_S_CompactDecimalDataSink::-set1(sink, cVar0);
	r->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("NumberElements/latn")), sink);
	if ( !(dataBundle->longData->isEmpty()) )  
		goto label_cond_5a;
	dataBundle->longData = dataBundle->shortData;
label_cond_5a:
	android::icu::text::CompactDecimalDataCache::checkForOtherVariants(dataBundle->longData, ulocale, std::make_shared<java::lang::String>(std::make_shared<char[]>("long")));
	android::icu::text::CompactDecimalDataCache::checkForOtherVariants(dataBundle->shortData, ulocale, std::make_shared<java::lang::String>(std::make_shared<char[]>("short")));
	android::icu::text::CompactDecimalDataCache::checkForOtherVariants(dataBundle->shortCurrencyData, ulocale, std::make_shared<java::lang::String>(std::make_shared<char[]>("shortCurrency")));
	android::icu::text::CompactDecimalDataCache::fillInMissing(dataBundle->longData);
	android::icu::text::CompactDecimalDataCache::fillInMissing(dataBundle->shortData);
	android::icu::text::CompactDecimalDataCache::fillInMissing(dataBundle->shortCurrencyData);
	return dataBundle;
	// 692    .line 296
label_catch_82:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/util/MissingResourceException;
	goto label_goto_42;

}
// .method private static localeAndStyle(Landroid/icu/util/ULocale;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CompactDecimalDataCache::localeAndStyle(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> style)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "style"    # Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("locale \'")))->append(locale)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' style \'")))->append(style)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString();

}
// .method private static populatePrefixSuffix(Ljava/lang/String;ILjava/lang/String;Landroid/icu/util/ULocale;Ljava/lang/String;Landroid/icu/text/CompactDecimalDataCache$Data;Z)I
int android::icu::text::CompactDecimalDataCache::populatePrefixSuffix(std::shared_ptr<java::lang::String> pluralVariant,int idx,std::shared_ptr<java::lang::String> template,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> style,std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> destination,bool overwrite)
{
	
	int cVar0;
	int firstIdx;
	int lastIdx;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::String> prefix;
	std::shared_ptr<java::lang::String> suffix;
	std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> cVar3;
	int i;
	
	//    .param p0, "pluralVariant"    # Ljava/lang/String;
	//    .param p1, "idx"    # I
	//    .param p2, "template"    # Ljava/lang/String;
	//    .param p3, "locale"    # Landroid/icu/util/ULocale;
	//    .param p4, "style"    # Ljava/lang/String;
	//    .param p5, "destination"    # Landroid/icu/text/CompactDecimalDataCache$Data;
	//    .param p6, "overwrite"    # Z
	cVar0 = -0x1;
	firstIdx = template->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("0")));
	//    .local v0, "firstIdx":I
	lastIdx = template->lastIndexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("0")));
	//    .local v2, "lastIdx":I
	if ( firstIdx != cVar0 )
		goto label_cond_51;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Expect at least one zero in template \'")))->append(template)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' for variant \'")))->append(pluralVariant)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' for 10^")))->append(idx)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" in ")))->append(android::icu::text::CompactDecimalDataCache::localeAndStyle(locale, style))->toString());
	// throw
	throw cVar1;
	// 847    .line 350
label_cond_51:
	prefix = template->substring(0x0, firstIdx);
	//    .local v3, "prefix":Ljava/lang/String;
	suffix = template->substring(( lastIdx + 0x1));
	//    .local v5, "suffix":Ljava/lang/String;
	cVar3 = std::make_shared<android::icu::text::DecimalFormat_S_Unit>(prefix, suffix);
	//    .local v4, "saved":Z
	if ( android::icu::text::CompactDecimalDataCache::saveUnit(cVar3, pluralVariant, idx, destination->units, overwrite) )     
		goto label_cond_69;
	return cVar0;
	// 880    .line 362
label_cond_69:
	if ( prefix->trim()->length() )     
		goto label_cond_80;
	if ( suffix->trim()->length() )     
		goto label_cond_80;
	return ( idx + 0x1);
	// 907    .line 367
label_cond_80:
	i = ( firstIdx + 0x1);
	//    .local v1, "i":I
label_goto_82:
	if ( i >  lastIdx )
		goto label_cond_8f;
	if ( template->charAt(i) != 0x30 )
		goto label_cond_8f;
	i = ( i + 0x1);
	goto label_goto_82;
	// 929    .line 371
label_cond_8f:
	return (i - firstIdx);

}
// .method private static propagateOtherToMissing(ILjava/util/Map;)V
void android::icu::text::CompactDecimalDataCache::propagateOtherToMissing(int idx,std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> units)
{
	
	std::shared_ptr<std::vector<android::icu::text::DecimalFormat_S_Unit>> cVar0;
	std::shared_ptr<java::util::Iterator> byBase_S_iterator;
	std::shared_ptr<std::vector<android::icu::text::DecimalFormat_S_Unit>> byBase;
	
	//    .param p0, "idx"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 940        value = {
	// 941            "(I",
	// 942            "Ljava/util/Map",
	// 943            "<",
	// 944            "Ljava/lang/String;",
	// 945            "[",
	// 946            "Landroid/icu/text/DecimalFormat$Unit;",
	// 947            ">;)V"
	// 948        }
	// 949    .end annotation
	//    .local p1, "units":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Landroid/icu/text/DecimalFormat$Unit;>;"
	cVar0 = units->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("other")));
	cVar0->checkCast("std::vector<android::icu::text::DecimalFormat_S_Unit>");
	//    .local v2, "otherVariantValue":Landroid/icu/text/DecimalFormat$Unit;
	byBase_S_iterator = units->values()->iterator();
	//    .local v1, "byBase$iterator":Ljava/util/Iterator;
label_cond_13:
label_goto_13:
	if ( !(byBase_S_iterator->hasNext()) )  
		goto label_cond_26;
	byBase = byBase_S_iterator->next();
	byBase->checkCast("std::vector<android::icu::text::DecimalFormat_S_Unit>");
	//    .local v0, "byBase":[Landroid/icu/text/DecimalFormat$Unit;
	if ( byBase[idx] )     
		goto label_cond_13;
	byBase[idx] = cVar0[idx];
	goto label_goto_13;
	// 1000    .line 477
	// 1001    .end local v0    # "byBase":[Landroid/icu/text/DecimalFormat$Unit;
label_cond_26:
	return;

}
// .method private static saveUnit(Landroid/icu/text/DecimalFormat$Unit;Ljava/lang/String;ILjava/util/Map;Z)Z
bool android::icu::text::CompactDecimalDataCache::saveUnit(std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> unit,std::shared_ptr<java::lang::String> pluralVariant,int idx,std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> units,bool overwrite)
{
	
	std::shared_ptr<std::vector<android::icu::text::DecimalFormat_S_Unit>> byBase;
	std::shared<std::vector<std::vector<android::icu::text::DecimalFormat_S_Unit>>> byBase;
	
	//    .param p0, "unit"    # Landroid/icu/text/DecimalFormat$Unit;
	//    .param p1, "pluralVariant"    # Ljava/lang/String;
	//    .param p2, "idx"    # I
	//    .param p4, "overwrite"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 1013        value = {
	// 1014            "(",
	// 1015            "Landroid/icu/text/DecimalFormat$Unit;",
	// 1016            "Ljava/lang/String;",
	// 1017            "I",
	// 1018            "Ljava/util/Map",
	// 1019            "<",
	// 1020            "Ljava/lang/String;",
	// 1021            "[",
	// 1022            "Landroid/icu/text/DecimalFormat$Unit;",
	// 1023            ">;Z)Z"
	// 1024        }
	// 1025    .end annotation
	//    .local p3, "units":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Landroid/icu/text/DecimalFormat$Unit;>;"
	byBase = units->get(pluralVariant);
	byBase->checkCast("std::vector<android::icu::text::DecimalFormat_S_Unit>");
	//    .local v0, "byBase":[Landroid/icu/text/DecimalFormat$Unit;
	if ( byBase )     
		goto label_cond_f;
	byBase = std::make_shared<std::vector<std::vector<android::icu::text::DecimalFormat_S_Unit>>>(0xf);
	units->put(pluralVariant, byBase);
label_cond_f:
	if ( overwrite )     
		goto label_cond_17;
	if ( !(byBase[idx]) )  
		goto label_cond_17;
	return 0x0;
	// 1061    .line 505
label_cond_17:
	byBase[idx] = unit;
	return 0x1;

}
// .method get(Landroid/icu/util/ULocale;)Landroid/icu/text/CompactDecimalDataCache$DataBundle;
std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_DataBundle> android::icu::text::CompactDecimalDataCache::get(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_DataBundle> result;
	std::shared_ptr<java::lang::Object> result;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	result = this->cache->get(locale);
	result->checkCast("android::icu::text::CompactDecimalDataCache_S_DataBundle");
	//    .local v0, "result":Landroid/icu/text/CompactDecimalDataCache$DataBundle;
	if ( result )     
		goto label_cond_13;
	result = android::icu::text::CompactDecimalDataCache::load(locale);
	this->cache->put(locale, result);
label_cond_13:
	return result;

}


