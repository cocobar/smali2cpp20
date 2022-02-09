// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Currency.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.impl.ICUDebug.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.SimpleCache.h"
#include "android.icu.impl.TextTrieMap.h"
#include "android.icu.text.CurrencyDisplayNames.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyDigits.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyFilter.h"
#include "android.icu.text.CurrencyMetaInfo.h"
#include "android.icu.util.Currency_S_1.h"
#include "android.icu.util.Currency_S_CurrencyNameResultHandler.h"
#include "android.icu.util.Currency_S_CurrencyStringInfo.h"
#include "android.icu.util.Currency_S_CurrencyUsage.h"
#include "android.icu.util.Currency_S_EquivalenceRelation.h"
#include "android.icu.util.Currency_S_ServiceShim.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.MeasureUnit_S_MeasureUnitProxy.h"
#include "android.icu.util.MeasureUnit.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.ref.SoftReference.h"
#include "java.text.ParsePosition.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Date.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"

static android::icu::util::Currency::ALL_CODES_AS_SET = nullptr;
static android::icu::util::Currency::ALL_TENDER_CODES = nullptr;
static android::icu::util::Currency::CURRENCY_NAME_CACHE = nullptr;
static android::icu::util::Currency::DEBUG;
static android::icu::util::Currency::EMPTY_STRING_ARRAY;
static android::icu::util::Currency::EQUIVALENT_CURRENCY_SYMBOLS;
static android::icu::util::Currency::EUR_STR = std::make_shared<java::lang::String>("EUR");
static android::icu::util::Currency::LONG_NAME = 0x1;
static android::icu::util::Currency::PLURAL_LONG_NAME = 0x2;
static android::icu::util::Currency::POW10;
static android::icu::util::Currency::SYMBOL_NAME = 0x0;
static android::icu::util::Currency::UND;
static android::icu::util::Currency::regionCurrencyCache;
static android::icu::util::Currency::serialVersionUID = -0x510bc147b5e8c814L;
static android::icu::util::Currency::shim;
// .method static synthetic -wrap0(Ljava/lang/String;)Landroid/icu/util/Currency;
std::shared_ptr<android::icu::util::Currency> android::icu::util::Currency::_wrap0(std::shared_ptr<java::lang::String> key)
{
	
	//    .param p0, "key"    # Ljava/lang/String;
	return android::icu::util::Currency::loadCurrency(key);

}
// .method static constructor <clinit>()V
void android::icu::util::Currency::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::impl::SimpleCache> cVar3;
	std::shared_ptr<android::icu::util::Currency_S_EquivalenceRelation> cVar4;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar5;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar6;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar7;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar8;
	std::shared_ptr<android::icu::util::Currency_S_1> cVar9;
	std::shared_ptr<android::icu::util::ULocale> cVar10;
	std::shared<std::vector<int[]>> cVar11;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	android::icu::util::Currency::DEBUG = android::icu::impl::ICUDebug::enabled(std::make_shared<java::lang::String>(std::make_shared<char[]>("currency")));
	cVar3 = std::make_shared<android::icu::impl::SimpleCache>();
	android::icu::util::Currency::CURRENCY_NAME_CACHE = cVar3;
	cVar4 = std::make_shared<android::icu::util::Currency_S_EquivalenceRelation>(0x0);
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u00a5"));
	cVar5[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\uffe5"));
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x3);
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("$"));
	cVar6[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\ufe69"));
	cVar6[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\uff04"));
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar7[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u20a8"));
	cVar7[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u20b9"));
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar8[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u00a3"));
	cVar8[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u20a4"));
	android::icu::util::Currency::EQUIVALENT_CURRENCY_SYMBOLS = cVar4->add(cVar5)->add(cVar6)->add(cVar7)->add(cVar8);
	cVar9 = std::make_shared<android::icu::util::Currency_S_1>();
	android::icu::util::Currency::regionCurrencyCache = cVar9;
	cVar10 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("und")));
	android::icu::util::Currency::UND = cVar10;
	android::icu::util::Currency::EMPTY_STRING_ARRAY = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar2);
	cVar11 = std::make_shared<std::vector<int[]>>(0xa);
	?;
	android::icu::util::Currency::POW10 = cVar11;
	return;
	// 265    .line 847
	// 266    :array_80
	// 267    .array-data 4
	// 268        0x1
	// 269        0xa
	// 270        0x64
	// 271        0x3e8
	// 272        0x2710
	// 273        0x186a0
	// 274        0xf4240
	// 275        0x989680
	// 276        0x5f5e100
	// 277        0x3b9aca00
	// 278    .end array-data

}
// .method protected constructor <init>(Ljava/lang/String;)V
android::icu::util::Currency::Currency(std::shared_ptr<java::lang::String> theISOCode)
{
	
	//    .param p1, "theISOCode"    # Ljava/lang/String;
	android::icu::util::MeasureUnit::(std::make_shared<java::lang::String>(std::make_shared<char[]>("currency")), theISOCode);
	this->isoCode = theISOCode;
	return;

}
// .method static createCurrency(Landroid/icu/util/ULocale;)Landroid/icu/util/Currency;
std::shared_ptr<android::icu::util::Currency> android::icu::util::Currency::createCurrency(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	std::shared_ptr<java::lang::Object> variant;
	std::shared_ptr<java::lang::String> key;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<android::icu::util::Currency> cVar1;
	
	//    .param p0, "loc"    # Landroid/icu/util/ULocale;
	variant = loc->getVariant();
	//    .local v1, "variant":Ljava/lang/String;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("EURO"))->equals(variant)) )  
		goto label_cond_15;
	return android::icu::util::Currency::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("EUR")));
	// 327    .line 242
label_cond_15:
	key = android::icu::util::ULocale::getRegionForSupplementalData(loc, 0x0);
	//    .local v0, "key":Ljava/lang/String;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("PREEURO"))->equals(variant)) )  
		goto label_cond_36;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
label_cond_36:
	cVar1 = android::icu::util::Currency::regionCurrencyCache->getInstance(key, 0x0);
	cVar1->checkCast("android::icu::util::Currency");
	return cVar1;

}
// .method private static declared-synchronized getAllCurrenciesAsSet()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::util::Currency::getAllCurrenciesAsSet()
{
	
	std::shared_ptr<android::icu::util::Currency> cVar0;
	std::shared_ptr<java::util::Set> all;
	std::shared_ptr<java::util::HashSet> cVar2;
	std::shared_ptr<java::lang::Object> all;
	std::shared_ptr<java::lang::ref::SoftReference> cVar3;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 382        value = {
	// 383            "()",
	// 384            "Ljava/util/Set",
	// 385            "<",
	// 386            "Ljava/lang/String;",
	// 387            ">;"
	// 388        }
	// 389    .end annotation
	cVar0 = android::icu::util::Currency();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	if ( android::icu::util::Currency::ALL_CODES_AS_SET )     
		goto label_cond_28;
	all = 0x0;
label_goto_8:
	if ( all )     
		goto label_cond_26;
	//    .local v1, "info":Landroid/icu/text/CurrencyMetaInfo;
	cVar2 = std::make_shared<java::util::HashSet>(android::icu::text::CurrencyMetaInfo::getInstance({const[class].FS-Param})->currencies(android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::all({const[class].FS-Param})));
	all = java::util::Collections::unmodifiableSet(cVar2);
	//    .local v0, "all":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	cVar3 = std::make_shared<java::lang::ref::SoftReference>(all);
	android::icu::util::Currency::ALL_CODES_AS_SET = cVar3;
	//label_try_end_26:
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catchall {:try_start_3 .. :try_end_26} :catchall_31
label_cond_26:
	cVar0->monitor_exit();
	return all;
	// 448    .line 871
	// 449    .end local v0    # "all":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 450    .end local v1    # "info":Landroid/icu/text/CurrencyMetaInfo;
label_cond_28:
	try {
	//label_try_start_28:
	all = android::icu::util::Currency::ALL_CODES_AS_SET->get();
	all->checkCast("java::util::Set");
	//label_try_end_30:
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catchall {:try_start_28 .. :try_end_30} :catchall_31
	//    .restart local v0    # "all":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	goto label_goto_8;
	// 466    .end local v0    # "all":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 467    .restart local v1    # "info":Landroid/icu/text/CurrencyMetaInfo;
label_catchall_31:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method private static declared-synchronized getAllTenderCurrencies()Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> android::icu::util::Currency::getAllTenderCurrencies()
{
	
	std::shared_ptr<android::icu::util::Currency> cVar0;
	std::shared_ptr<java::util::List> all;
	std::shared_ptr<java::lang::Object> all;
	std::shared_ptr<java::lang::ref::SoftReference> cVar2;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 479        value = {
	// 480            "()",
	// 481            "Ljava/util/List",
	// 482            "<",
	// 483            "Ljava/lang/String;",
	// 484            ">;"
	// 485        }
	// 486    .end annotation
	cVar0 = android::icu::util::Currency();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	if ( android::icu::util::Currency::ALL_TENDER_CODES )     
		goto label_cond_1f;
	all = 0x0;
label_goto_8:
	if ( all )     
		goto label_cond_1d;
	//    .local v1, "filter":Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
	all = java::util::Collections::unmodifiableList(android::icu::util::Currency::getTenderCurrencies(android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::all({const[class].FS-Param})));
	//    .local v0, "all":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	cVar2 = std::make_shared<java::lang::ref::SoftReference>(all);
	android::icu::util::Currency::ALL_TENDER_CODES = cVar2;
	//label_try_end_1d:
	}
	catch (...){
		goto label_catchall_28;
	}
	//    .catchall {:try_start_3 .. :try_end_1d} :catchall_28
label_cond_1d:
	cVar0->monitor_exit();
	return all;
	// 536    .line 858
	// 537    .end local v0    # "all":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 538    .end local v1    # "filter":Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
label_cond_1f:
	try {
	//label_try_start_1f:
	all = android::icu::util::Currency::ALL_TENDER_CODES->get();
	all->checkCast("java::util::List");
	//label_try_end_27:
	}
	catch (...){
		goto label_catchall_28;
	}
	//    .catchall {:try_start_1f .. :try_end_27} :catchall_28
	//    .restart local v0    # "all":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	goto label_goto_8;
	// 554    .end local v0    # "all":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 555    .restart local v1    # "filter":Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
label_catchall_28:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static getAvailableCurrencies()Ljava/util/Set;
std::shared_ptr<java::util::Set<android::icu::util::Currency>> android::icu::util::Currency::getAvailableCurrencies()
{
	
	std::shared_ptr<java::util::List> list;
	std::shared_ptr<java::util::HashSet> resultSet;
	std::shared_ptr<java::util::Iterator> code_S_iterator;
	std::shared_ptr<java::lang::String> code;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 567        value = {
	// 568            "()",
	// 569            "Ljava/util/Set",
	// 570            "<",
	// 571            "Landroid/icu/util/Currency;",
	// 572            ">;"
	// 573        }
	// 574    .end annotation
	//    .local v2, "info":Landroid/icu/text/CurrencyMetaInfo;
	list = android::icu::text::CurrencyMetaInfo::getInstance({const[class].FS-Param})->currencies(android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::all({const[class].FS-Param}));
	//    .local v3, "list":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	resultSet = std::make_shared<java::util::HashSet>(list->size());
	//    .local v4, "resultSet":Ljava/util/HashSet;, "Ljava/util/HashSet<Landroid/icu/util/Currency;>;"
	code_S_iterator = list->iterator();
	//    .local v1, "code$iterator":Ljava/util/Iterator;
label_goto_19:
	if ( !(code_S_iterator->hasNext()) )  
		goto label_cond_2d;
	code = code_S_iterator->next();
	code->checkCast("java::lang::String");
	//    .local v0, "code":Ljava/lang/String;
	resultSet->add(android::icu::util::Currency::getInstance(code));
	goto label_goto_19;
	// 632    .line 219
	// 633    .end local v0    # "code":Ljava/lang/String;
label_cond_2d:
	return resultSet;

}
// .method public static getAvailableCurrencyCodes(Landroid/icu/util/ULocale;Ljava/util/Date;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency::getAvailableCurrencyCodes(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::util::Date> d)
{
	
	std::shared_ptr<java::util::List> list;
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p0, "loc"    # Landroid/icu/util/ULocale;
	//    .param p1, "d"    # Ljava/util/Date;
	//    .local v2, "region":Ljava/lang/String;
	//    .local v0, "filter":Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
	list = android::icu::util::Currency::getTenderCurrencies(android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::onDate(d)->withRegion(android::icu::util::ULocale::getRegionForSupplementalData(loc, 0x0)));
	//    .local v1, "list":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	if ( !(list->isEmpty()) )  
		goto label_cond_19;
	return 0x0;
	// 680    .line 188
label_cond_19:
	cVar0 = list->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(list->size()));
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;

}
// .method public static getAvailableCurrencyCodes(Ljava/util/Locale;Ljava/util/Date;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency::getAvailableCurrencyCodes(std::shared_ptr<java::util::Locale> loc,std::shared_ptr<java::util::Date> d)
{
	
	//    .param p0, "loc"    # Ljava/util/Locale;
	//    .param p1, "d"    # Ljava/util/Date;
	return android::icu::util::Currency::getAvailableCurrencyCodes(android::icu::util::ULocale::forLocale(loc), d);

}
// .method public static getAvailableLocales()[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::util::Currency::getAvailableLocales()
{
	
	if ( android::icu::util::Currency::shim )     
		goto label_cond_9;
	return android::icu::impl::ICUResourceBundle::getAvailableLocales({const[class].FS-Param});
	// 731    .line 352
label_cond_9:
	return android::icu::util::Currency::shim->getAvailableLocales();

}
// .method public static getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::Currency::getAvailableULocales()
{
	
	if ( android::icu::util::Currency::shim )     
		goto label_cond_9;
	return android::icu::impl::ICUResourceBundle::getAvailableULocales({const[class].FS-Param});
	// 758    .line 365
label_cond_9:
	return android::icu::util::Currency::shim->getAvailableULocales();

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/util/Currency;
std::shared_ptr<android::icu::util::Currency> android::icu::util::Currency::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::lang::String> currency;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	currency = locale->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("currency")));
	//    .local v0, "currency":Ljava/lang/String;
	if ( !(currency) )  
		goto label_cond_e;
	return android::icu::util::Currency::getInstance(currency);
	// 792    .line 163
label_cond_e:
	if ( android::icu::util::Currency::shim )     
		goto label_cond_17;
	return android::icu::util::Currency::createCurrency(locale);
	// 805    .line 167
label_cond_17:
	return android::icu::util::Currency::shim->createInstance(locale);

}
// .method public static getInstance(Ljava/lang/String;)Landroid/icu/util/Currency;
std::shared_ptr<android::icu::util::Currency> android::icu::util::Currency::getInstance(std::shared_ptr<java::lang::String> theISOCode)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<android::icu::util::Currency> cVar2;
	
	//    .param p0, "theISOCode"    # Ljava/lang/String;
	if ( theISOCode )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input currency code is null.")));
	// throw
	throw cVar0;
	// 833    .line 286
label_cond_b:
	if ( android::icu::util::Currency::isAlpha3Code(theISOCode) )     
		goto label_cond_1a;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input currency code is not 3-letter alphabetic code.")));
	// throw
	throw cVar1;
	// 852    .line 290
label_cond_1a:
	cVar2 = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("currency")), theISOCode->toUpperCase(java::util::Locale::ENGLISH));
	cVar2->checkCast("android::icu::util::Currency");
	return cVar2;

}
// .method public static getInstance(Ljava/util/Locale;)Landroid/icu/util/Currency;
std::shared_ptr<android::icu::util::Currency> android::icu::util::Currency::getInstance(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	return android::icu::util::Currency::getInstance(android::icu::util::ULocale::forLocale(locale));

}
// .method public static final getKeywordValuesForLocale(Ljava/lang/String;Landroid/icu/util/ULocale;Z)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency::getKeywordValuesForLocale(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::util::ULocale> locale,bool commonlyUsed)
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	std::shared_ptr<java::util::List> result;
	std::shared_ptr<std::vector<java::lang::String>> cVar1;
	
	//    .param p0, "key"    # Ljava/lang/String;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "commonlyUsed"    # Z
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"))->equals(key) )     
		goto label_cond_d;
	return android::icu::util::Currency::EMPTY_STRING_ARRAY;
	// 911    .line 406
label_cond_d:
	if ( commonlyUsed )     
		goto label_cond_1c;
	cVar0 = android::icu::util::Currency::getAllTenderCurrencies({const[class].FS-Param})->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(0x0));
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;
	// 930    .line 413
label_cond_1c:
	if ( !(android::icu::util::Currency::UND->equals(locale)) )  
		goto label_cond_27;
	return android::icu::util::Currency::EMPTY_STRING_ARRAY;
	// 945    .line 416
label_cond_27:
	//    .local v1, "prefRegion":Ljava/lang/String;
	//    .local v0, "filter":Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
	result = android::icu::util::Currency::getTenderCurrencies(android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::now({const[class].FS-Param})->withRegion(android::icu::util::ULocale::getRegionForSupplementalData(locale, 0x1)));
	//    .local v2, "result":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	if ( result->size() )     
		goto label_cond_41;
	return android::icu::util::Currency::EMPTY_STRING_ARRAY;
	// 982    .line 429
label_cond_41:
	cVar1 = result->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(result->size()));
	cVar1->checkCast("std::vector<java::lang::String>");
	return cVar1;

}
// .method private static getShim()Landroid/icu/util/Currency$ServiceShim;
std::shared_ptr<android::icu::util::Currency_S_ServiceShim> android::icu::util::Currency::getShim()
{
	
	std::shared_ptr<java::lang::Exception> e;
	std::shared_ptr<java::lang::RuntimeException> cVar1;
	std::shared_ptr<android::icu::util::Currency_S_ServiceShim> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( android::icu::util::Currency::shim )     
		goto label_cond_13;
	try {
	//label_try_start_4:
	//    .local v0, "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.util.CurrencyServiceShim")))->newInstance();
	cVar0->checkCast("android::icu::util::Currency_S_ServiceShim");
	android::icu::util::Currency::shim = cVar0;
	//label_try_end_13:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	//    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_13} :catch_16
label_cond_13:
	return android::icu::util::Currency::shim;
	// 1034    .line 133
label_catch_16:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	if ( !(android::icu::util::Currency::DEBUG) )  
		goto label_cond_1e;
	e->printStackTrace();
label_cond_1e:
	cVar1 = std::make_shared<java::lang::RuntimeException>(e->getMessage());
	// throw
	throw cVar1;

}
// .method private static getTenderCurrencies(Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;)Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> android::icu::util::Currency::getTenderCurrencies(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter)
{
	
	//    .param p0, "filter"    # Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1064        value = {
	// 1065            "(",
	// 1066            "Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;",
	// 1067            ")",
	// 1068            "Ljava/util/List",
	// 1069            "<",
	// 1070            "Ljava/lang/String;",
	// 1071            ">;"
	// 1072        }
	// 1073    .end annotation
	//    .local v0, "info":Landroid/icu/text/CurrencyMetaInfo;
	return android::icu::text::CurrencyMetaInfo::getInstance({const[class].FS-Param})->currencies(filter->withTender());

}
// .method private static isAlpha3Code(Ljava/lang/String;)Z
bool android::icu::util::Currency::isAlpha3Code(std::shared_ptr<java::lang::String> code)
{
	
	int cVar0;
	bool cVar1;
	int i;
	int ch;
	
	//    .param p0, "code"    # Ljava/lang/String;
	cVar0 = 0x3;
	cVar1 = 0x0;
	if ( code->length() == cVar0 )
		goto label_cond_9;
	return cVar1;
	// 1113    .line 298
label_cond_9:
	i = 0x0;
	//    .local v1, "i":I
label_goto_a:
	if ( i >= cVar0 )
		goto label_cond_24;
	ch = code->charAt(i);
	//    .local v0, "ch":C
	if ( ch <  0x41 )
		goto label_cond_1c;
	if ( ch <= 0x5a )
		goto label_cond_1d;
	if ( ch >= 0x61 )
		goto label_cond_1d;
label_cond_1c:
	return cVar1;
	// 1144    .line 300
label_cond_1d:
	if ( ch >  0x7a )
		goto label_cond_1c;
	i = ( i + 0x1);
	goto label_goto_a;
	// 1155    .line 305
	// 1156    .end local v0    # "ch":C
label_cond_24:
	return 0x1;

}
// .method public static isAvailable(Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;)Z
bool android::icu::util::Currency::isAvailable(std::shared_ptr<java::lang::String> code,std::shared_ptr<java::util::Date> from,std::shared_ptr<java::util::Date> to)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::Object> cVar2;
	
	//    .param p0, "code"    # Ljava/lang/String;
	//    .param p1, "from"    # Ljava/util/Date;
	//    .param p2, "to"    # Ljava/util/Date;
	cVar0 = 0x0;
	if ( android::icu::util::Currency::isAlpha3Code(code) )     
		goto label_cond_8;
	return cVar0;
	// 1182    .line 904
label_cond_8:
	if ( !(from) )  
		goto label_cond_1b;
	if ( !(to) )  
		goto label_cond_1b;
	if ( !(from->after(to)) )  
		goto label_cond_1b;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("To is before from")));
	// throw
	throw cVar1;
	// 1203    .line 908
label_cond_1b:
	cVar2 = code->toUpperCase(java::util::Locale::ENGLISH);
	//    .local v2, "isKnown":Z
	if ( android::icu::util::Currency::getAllCurrenciesAsSet({const[class].FS-Param})->contains(cVar2) )     
		goto label_cond_2c;
	return cVar0;
	// 1227    .line 912
label_cond_2c:
	if ( from )     
		goto label_cond_32;
	if ( to )     
		goto label_cond_32;
	return 0x1;
	// 1238    .line 917
label_cond_32:
	//    .local v1, "info":Landroid/icu/text/CurrencyMetaInfo;
	//    .local v0, "allActive":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	return android::icu::text::CurrencyMetaInfo::getInstance({const[class].FS-Param})->currencies(android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::onDateRange(from, to)->withCurrency(cVar2))->contains(cVar2);

}
// .method private static loadCurrency(Ljava/lang/String;)Landroid/icu/util/Currency;
std::shared_ptr<android::icu::util::Currency> android::icu::util::Currency::loadCurrency(std::shared_ptr<java::lang::String> key)
{
	
	std::shared_ptr<android::icu::util::Currency> cVar0;
	int cVar1;
	std::shared_ptr<java::util::List> list;
	std::shared_ptr<java::lang::String> code;
	
	//    .param p0, "key"    # Ljava/lang/String;
	cVar0 = 0x0;
	cVar1 = 0x0;
	if ( !(key->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))) )  
		goto label_cond_41;
	//    .local v4, "region":Ljava/lang/String;
	//    .local v2, "isPreEuro":Z
label_goto_16:
	//    .local v1, "info":Landroid/icu/text/CurrencyMetaInfo;
	list = android::icu::text::CurrencyMetaInfo::getInstance({const[class].FS-Param})->currencies(android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::onRegion(region));
	//    .local v3, "list":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	if ( list->isEmpty() )     
		goto label_cond_50;
	code = list->get(cVar1);
	code->checkCast("java::lang::String");
	//    .local v0, "code":Ljava/lang/String;
	if ( !(0x1) )  
		goto label_cond_4b;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("EUR"))->equals(code)) )  
		goto label_cond_4b;
	if ( list->size() >= 0x2 )
		goto label_cond_44;
	return cVar0;
	// 1357    .line 256
	// 1358    .end local v0    # "code":Ljava/lang/String;
	// 1359    .end local v1    # "info":Landroid/icu/text/CurrencyMetaInfo;
	// 1360    .end local v2    # "isPreEuro":Z
	// 1361    .end local v3    # "list":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 1362    .end local v4    # "region":Ljava/lang/String;
label_cond_41:
	//    .restart local v4    # "region":Ljava/lang/String;
	0x0;
	//    .restart local v2    # "isPreEuro":Z
	goto label_goto_16;
	// 1373    .line 267
	// 1374    .restart local v0    # "code":Ljava/lang/String;
	// 1375    .restart local v1    # "info":Landroid/icu/text/CurrencyMetaInfo;
	// 1376    .restart local v3    # "list":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
label_cond_44:
	code = list->get(0x1);
	//    .end local v0    # "code":Ljava/lang/String;
	code->checkCast("java::lang::String");
	//    .restart local v0    # "code":Ljava/lang/String;
label_cond_4b:
	return android::icu::util::Currency::getInstance(code);
	// 1396    .line 271
	// 1397    .end local v0    # "code":Ljava/lang/String;
label_cond_50:
	return cVar0;

}
// .method public static parse(Landroid/icu/util/ULocale;Ljava/lang/String;ILjava/text/ParsePosition;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency::parse(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> text,int type,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::util::Currency_S_CurrencyNameResultHandler> cVar1;
	bool cVar2;
	std::shared_ptr<java::util::List> currencyTrieVec;
	std::shared_ptr<android::icu::impl::TextTrieMap> currencyNameTrie;
	std::shared_ptr<android::icu::impl::TextTrieMap> currencySymbolTrie;
	std::shared_ptr<java::util::ArrayList> currencyTrieVec;
	std::shared_ptr<android::icu::util::Currency_S_CurrencyNameResultHandler> handler;
	int maxLength;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "type"    # I
	//    .param p3, "pos"    # Ljava/text/ParsePosition;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1409    .end annotation
	cVar0 = 0x0;
	cVar1 = 0x0;
	cVar2 = 0x1;
	currencyTrieVec = android::icu::util::Currency::CURRENCY_NAME_CACHE->get(locale);
	currencyTrieVec->checkCast("java::util::List");
	//    .local v2, "currencyTrieVec":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TextTrieMap<Landroid/icu/util/Currency$CurrencyStringInfo;>;>;"
	if ( currencyTrieVec )     
		goto label_cond_2a;
	currencyNameTrie = std::make_shared<android::icu::impl::TextTrieMap>(cVar2);
	//    .local v0, "currencyNameTrie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Landroid/icu/util/Currency$CurrencyStringInfo;>;"
	currencySymbolTrie = std::make_shared<android::icu::impl::TextTrieMap>(cVar0);
	//    .local v1, "currencySymbolTrie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Landroid/icu/util/Currency$CurrencyStringInfo;>;"
	//    .end local v2    # "currencyTrieVec":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TextTrieMap<Landroid/icu/util/Currency$CurrencyStringInfo;>;>;"
	currencyTrieVec = std::make_shared<java::util::ArrayList>();
	//    .restart local v2    # "currencyTrieVec":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TextTrieMap<Landroid/icu/util/Currency$CurrencyStringInfo;>;>;"
	currencyTrieVec->add(currencySymbolTrie);
	currencyTrieVec->add(currencyNameTrie);
	android::icu::util::Currency::setupCurrencyTrieVec(locale, currencyTrieVec);
	android::icu::util::Currency::CURRENCY_NAME_CACHE->put(locale, currencyTrieVec);
	//    .end local v0    # "currencyNameTrie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Landroid/icu/util/Currency$CurrencyStringInfo;>;"
	//    .end local v1    # "currencySymbolTrie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Landroid/icu/util/Currency$CurrencyStringInfo;>;"
label_cond_2a:
	0x0;
	//    .local v5, "maxLength":I
	0x0;
	//    .local v4, "isoResult":Ljava/lang/String;
	currencyNameTrie = currencyTrieVec->get(cVar2);
	currencyNameTrie->checkCast("android::icu::impl::TextTrieMap");
	//    .restart local v0    # "currencyNameTrie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Landroid/icu/util/Currency$CurrencyStringInfo;>;"
	handler = std::make_shared<android::icu::util::Currency_S_CurrencyNameResultHandler>(cVar1);
	//    .local v3, "handler":Landroid/icu/util/Currency$CurrencyNameResultHandler;
	currencyNameTrie->find(text, pos->getIndex(), handler);
	//    .local v4, "isoResult":Ljava/lang/String;
	maxLength = handler->getBestMatchLength();
	if ( type == cVar2 )
		goto label_cond_68;
	currencySymbolTrie = currencyTrieVec->get(cVar0);
	currencySymbolTrie->checkCast("android::icu::impl::TextTrieMap");
	//    .restart local v1    # "currencySymbolTrie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Landroid/icu/util/Currency$CurrencyStringInfo;>;"
	//    .end local v3    # "handler":Landroid/icu/util/Currency$CurrencyNameResultHandler;
	handler = std::make_shared<android::icu::util::Currency_S_CurrencyNameResultHandler>(cVar1);
	//    .restart local v3    # "handler":Landroid/icu/util/Currency$CurrencyNameResultHandler;
	currencySymbolTrie->find(text, pos->getIndex(), handler);
	if ( handler->getBestMatchLength() <= maxLength )
		goto label_cond_68;
	//    .end local v1    # "currencySymbolTrie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Landroid/icu/util/Currency$CurrencyStringInfo;>;"
label_cond_68:
	//    .local v6, "start":I
	pos->setIndex((pos->getIndex() + maxLength));
	return handler->getBestCurrencyISOCode();

}
// .method private readResolve()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::Currency::readResolve()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1569        value = {
	// 1570            Ljava/io/ObjectStreamException;
	// 1571        }
	// 1572    .end annotation
	return android::icu::util::Currency::getInstance(this->isoCode);

}
// .method public static registerInstance(Landroid/icu/util/Currency;Landroid/icu/util/ULocale;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::Currency::registerInstance(std::shared_ptr<android::icu::util::Currency> currency,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "currency"    # Landroid/icu/util/Currency;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::util::Currency::getShim({const[class].FS-Param})->registerInstance(currency, locale);

}
// .method private static setupCurrencyTrieVec(Landroid/icu/util/ULocale;Ljava/util/List;)V
void android::icu::util::Currency::setupCurrencyTrieVec(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::util::List<android::icu::impl::TextTrieMap<android::icu::util::Currency_S_CurrencyStringInfo>>> trieVec)
{
	
	std::shared_ptr<android::icu::impl::TextTrieMap> symTrie;
	std::shared_ptr<android::icu::impl::TextTrieMap> trie;
	std::shared_ptr<android::icu::text::CurrencyDisplayNames> names;
	std::shared_ptr<java::util::Iterator> e_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> e;
	std::shared_ptr<java::lang::String> symbol;
	std::shared_ptr<java::lang::String> isoCode;
	std::shared_ptr<java::util::Iterator> equivalentSymbol_S_iterator;
	std::shared_ptr<java::lang::String> equivalentSymbol;
	std::shared_ptr<android::icu::util::Currency_S_CurrencyStringInfo> cVar0;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<android::icu::util::Currency_S_CurrencyStringInfo> cVar1;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1607        value = {
	// 1608            "(",
	// 1609            "Landroid/icu/util/ULocale;",
	// 1610            "Ljava/util/List",
	// 1611            "<",
	// 1612            "Landroid/icu/impl/TextTrieMap",
	// 1613            "<",
	// 1614            "Landroid/icu/util/Currency$CurrencyStringInfo;",
	// 1615            ">;>;)V"
	// 1616        }
	// 1617    .end annotation
	//    .local p1, "trieVec":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TextTrieMap<Landroid/icu/util/Currency$CurrencyStringInfo;>;>;"
	symTrie = trieVec->get(0x0);
	symTrie->checkCast("android::icu::impl::TextTrieMap");
	//    .local v7, "symTrie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Landroid/icu/util/Currency$CurrencyStringInfo;>;"
	trie = trieVec->get(0x1);
	trie->checkCast("android::icu::impl::TextTrieMap");
	//    .local v9, "trie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Landroid/icu/util/Currency$CurrencyStringInfo;>;"
	names = android::icu::text::CurrencyDisplayNames::getInstance(locale);
	//    .local v6, "names":Landroid/icu/text/CurrencyDisplayNames;
	e_S_iterator = names->symbolMap()->entrySet()->iterator();
	//    .local v1, "e$iterator":Ljava/util/Iterator;
label_cond_1e:
	if ( !(e_S_iterator->hasNext()) )  
		goto label_cond_55;
	e = e_S_iterator->next();
	e->checkCast("java::util::Map_S_Entry");
	//    .local v0, "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	symbol = e->getKey();
	symbol->checkCast("java::lang::String");
	//    .local v8, "symbol":Ljava/lang/String;
	isoCode = e->getValue();
	isoCode->checkCast("java::lang::String");
	//    .local v4, "isoCode":Ljava/lang/String;
	equivalentSymbol_S_iterator = android::icu::util::Currency::EQUIVALENT_CURRENCY_SYMBOLS->get(symbol)->iterator();
	//    .local v3, "equivalentSymbol$iterator":Ljava/util/Iterator;
label_goto_40:
	if ( !(equivalentSymbol_S_iterator->hasNext()) )  
		goto label_cond_1e;
	equivalentSymbol = equivalentSymbol_S_iterator->next();
	equivalentSymbol->checkCast("java::lang::String");
	//    .local v2, "equivalentSymbol":Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::Currency_S_CurrencyStringInfo>(isoCode, symbol);
	symTrie->put(equivalentSymbol, cVar0);
	goto label_goto_40;
	// 1726    .line 704
	// 1727    .end local v0    # "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	// 1728    .end local v2    # "equivalentSymbol":Ljava/lang/String;
	// 1729    .end local v3    # "equivalentSymbol$iterator":Ljava/util/Iterator;
	// 1730    .end local v4    # "isoCode":Ljava/lang/String;
	// 1731    .end local v8    # "symbol":Ljava/lang/String;
label_cond_55:
	e_S_iterator = names->nameMap()->entrySet()->iterator();
label_goto_61:
	if ( !(e_S_iterator->hasNext()) )  
		goto label_cond_82;
	e = e_S_iterator->next();
	e->checkCast("java::util::Map_S_Entry");
	//    .restart local v0    # "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	name = e->getKey();
	name->checkCast("java::lang::String");
	//    .local v5, "name":Ljava/lang/String;
	isoCode = e->getValue();
	isoCode->checkCast("java::lang::String");
	//    .restart local v4    # "isoCode":Ljava/lang/String;
	cVar1 = std::make_shared<android::icu::util::Currency_S_CurrencyStringInfo>(isoCode, name);
	trie->put(name, cVar1);
	goto label_goto_61;
	// 1784    .line 709
	// 1785    .end local v0    # "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	// 1786    .end local v4    # "isoCode":Ljava/lang/String;
	// 1787    .end local v5    # "name":Ljava/lang/String;
label_cond_82:
	return;

}
// .method public static unregister(Ljava/lang/Object;)Z
bool android::icu::util::Currency::unregister(std::shared_ptr<java::lang::Object> registryKey)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "registryKey"    # Ljava/lang/Object;
	if ( registryKey )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("registryKey must not be null")));
	// throw
	throw cVar0;
	// 1809    .line 337
label_cond_b:
	if ( android::icu::util::Currency::shim )     
		goto label_cond_11;
	return 0x0;
	// 1820    .line 340
label_cond_11:
	return android::icu::util::Currency::shim->unregister(registryKey);

}
// .method private writeReplace()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::Currency::writeReplace()
{
	
	std::shared_ptr<android::icu::util::MeasureUnit_S_MeasureUnitProxy> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1834        value = {
	// 1835            Ljava/io/ObjectStreamException;
	// 1836        }
	// 1837    .end annotation
	cVar0 = std::make_shared<android::icu::util::MeasureUnit_S_MeasureUnitProxy>(this->type, this->subType);
	return cVar0;

}
// .method public getCurrencyCode()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency::getCurrencyCode()
{
	
	return this->subType;

}
// .method public getDefaultFractionDigits()I
int android::icu::util::Currency::getDefaultFractionDigits()
{
	
	return this->getDefaultFractionDigits(android::icu::util::Currency_S_CurrencyUsage::STANDARD);

}
// .method public getDefaultFractionDigits(Landroid/icu/util/Currency$CurrencyUsage;)I
int android::icu::util::Currency::getDefaultFractionDigits(std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> Usage)
{
	
	//    .param p1, "Usage"    # Landroid/icu/util/Currency$CurrencyUsage;
	//    .local v1, "info":Landroid/icu/text/CurrencyMetaInfo;
	//    .local v0, "digits":Landroid/icu/text/CurrencyMetaInfo$CurrencyDigits;
	return android::icu::text::CurrencyMetaInfo::getInstance({const[class].FS-Param})->currencyDigits(this->subType, Usage)->fractionDigits;

}
// .method public getDisplayName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency::getDisplayName()
{
	
	return this->getName(java::util::Locale::getDefault({const[class].FS-Param}), 0x1, 0x0);

}
// .method public getDisplayName(Ljava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency::getDisplayName(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	return this->getName(locale, 0x1, 0x0);

}
// .method public getName(Landroid/icu/util/ULocale;ILjava/lang/String;[Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency::getName(std::shared_ptr<android::icu::util::ULocale> locale,int nameStyle,std::shared_ptr<java::lang::String> pluralCount,std::shared_ptr<bool[]> isChoiceFormat)
{
	
	bool cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "nameStyle"    # I
	//    .param p3, "pluralCount"    # Ljava/lang/String;
	//    .param p4, "isChoiceFormat"    # [Z
	cVar0 = 0x0;
	if ( nameStyle == 0x2 )
		goto label_cond_9;
	return this->getName(locale, nameStyle, isChoiceFormat);
	// 1962    .line 582
label_cond_9:
	if ( !(isChoiceFormat) )  
		goto label_cond_d;
	isChoiceFormat[cVar0] = cVar0;
label_cond_d:
	//    .local v0, "names":Landroid/icu/text/CurrencyDisplayNames;
	return android::icu::text::CurrencyDisplayNames::getInstance(locale)->getPluralName(this->subType, pluralCount);

}
// .method public getName(Landroid/icu/util/ULocale;I[Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency::getName(std::shared_ptr<android::icu::util::ULocale> locale,int nameStyle,std::shared_ptr<bool[]> isChoiceFormat)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<android::icu::text::CurrencyDisplayNames> names;
	std::shared_ptr<java::lang::String> cVar3;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "nameStyle"    # I
	//    .param p3, "isChoiceFormat"    # [Z
	cVar0 = 0x0;
	if ( !(nameStyle) )  
		goto label_cond_20;
	if ( nameStyle == 0x1 )
		goto label_cond_20;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("bad name style: ")))->append(nameStyle)->toString());
	// throw
	throw cVar1;
	// 2027    .line 535
label_cond_20:
	if ( !(isChoiceFormat) )  
		goto label_cond_24;
	isChoiceFormat[cVar0] = cVar0;
label_cond_24:
	names = android::icu::text::CurrencyDisplayNames::getInstance(locale);
	//    .local v0, "names":Landroid/icu/text/CurrencyDisplayNames;
	if ( nameStyle )     
		goto label_cond_31;
	cVar3 = names->getSymbol(this->subType);
label_goto_30:
	return cVar3;
label_cond_31:
	cVar3 = names->getName(this->subType);
	goto label_goto_30;

}
// .method public getName(Ljava/util/Locale;ILjava/lang/String;[Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency::getName(std::shared_ptr<java::util::Locale> locale,int nameStyle,std::shared_ptr<java::lang::String> pluralCount,std::shared_ptr<bool[]> isChoiceFormat)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .param p2, "nameStyle"    # I
	//    .param p3, "pluralCount"    # Ljava/lang/String;
	//    .param p4, "isChoiceFormat"    # [Z
	return this->getName(android::icu::util::ULocale::forLocale(locale), nameStyle, pluralCount, isChoiceFormat);

}
// .method public getName(Ljava/util/Locale;I[Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency::getName(std::shared_ptr<java::util::Locale> locale,int nameStyle,std::shared_ptr<bool[]> isChoiceFormat)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .param p2, "nameStyle"    # I
	//    .param p3, "isChoiceFormat"    # [Z
	return this->getName(android::icu::util::ULocale::forLocale(locale), nameStyle, isChoiceFormat);

}
// .method public getNumericCode()I
int android::icu::util::Currency::getNumericCode()
{
	
	int result;
	std::vector<std::any> tryCatchExcetionList;
	
	result = 0x0;
	//    .local v4, "result":I
	try {
	//label_try_start_1:
	//    .local v0, "bundle":Landroid/icu/util/UResourceBundle;
	//    .local v1, "codeMap":Landroid/icu/util/UResourceBundle;
	//    .local v3, "numCode":Landroid/icu/util/UResourceBundle;
	//label_try_end_1d:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1f;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_1 .. :try_end_1d} :catch_1f
	result = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("currencyNumericCodes")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("codeMap")))->get(this->subType)->getInt();
	//    .end local v0    # "bundle":Landroid/icu/util/UResourceBundle;
	//    .end local v1    # "codeMap":Landroid/icu/util/UResourceBundle;
	//    .end local v3    # "numCode":Landroid/icu/util/UResourceBundle;
label_goto_1e:
	return result;
	// 2156    .line 458
label_catch_1f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/util/MissingResourceException;
	goto label_goto_1e;

}
// .method public getRoundingIncrement()D
double android::icu::util::Currency::getRoundingIncrement()
{
	
	return this->getRoundingIncrement(android::icu::util::Currency_S_CurrencyUsage::STANDARD);

}
// .method public getRoundingIncrement(Landroid/icu/util/Currency$CurrencyUsage;)D
double android::icu::util::Currency::getRoundingIncrement(std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> Usage)
{
	
	double cVar0;
	int digits;
	int data1;
	int data0;
	
	//    .param p1, "Usage"    # Landroid/icu/util/Currency$CurrencyUsage;
	cVar0 = 0x0;
	//    .local v3, "info":Landroid/icu/text/CurrencyMetaInfo;
	digits = android::icu::text::CurrencyMetaInfo::getInstance({const[class].FS-Param})->currencyDigits(this->subType, Usage);
	//    .local v2, "digits":Landroid/icu/text/CurrencyMetaInfo$CurrencyDigits;
	data1 = digits->roundingIncrement;
	//    .local v1, "data1":I
	if ( data1 )     
		goto label_cond_11;
	return cVar0;
	// 2209    .line 812
label_cond_11:
	data0 = digits->fractionDigits;
	//    .local v0, "data0":I
	if ( data0 < 0 ) 
		goto label_cond_1a;
	if ( data0 <  android::icu::util::Currency::POW10->size() )
		goto label_cond_1b;
label_cond_1a:
	return cVar0;
	// 2227    .line 821
label_cond_1b:
	return ( (double)(data1) / (double)(android::icu::util::Currency::POW10[data0]));

}
// .method public getSymbol()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency::getSymbol()
{
	
	return this->getSymbol(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public getSymbol(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency::getSymbol(std::shared_ptr<android::icu::util::ULocale> uloc)
{
	
	//    .param p1, "uloc"    # Landroid/icu/util/ULocale;
	return this->getName(uloc, 0x0, std::make_shared<std::vector<bool[]>>(0x1));

}
// .method public getSymbol(Ljava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency::getSymbol(std::shared_ptr<java::util::Locale> loc)
{
	
	//    .param p1, "loc"    # Ljava/util/Locale;
	return this->getSymbol(android::icu::util::ULocale::forLocale(loc));

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency::toString()
{
	
	return this->subType;

}


