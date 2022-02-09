// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeUnitFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.text.MeasureFormat_S_FormatWidth.h"
#include "android.icu.text.MeasureFormat.h"
#include "android.icu.text.MessageFormat.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.text.TimeUnitFormat_S_TimeUnitFormatSetupSink.h"
#include "android.icu.text.TimeUnitFormat.h"
#include "android.icu.util.Measure.h"
#include "android.icu.util.TimeUnit.h"
#include "android.icu.util.TimeUnitAmount.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParseException.h"
#include "java.text.ParsePosition.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.Locale.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"

static android::icu::text::TimeUnitFormat::ABBREVIATED_NAME = 0x1;
static android::icu::text::TimeUnitFormat::DEFAULT_PATTERN_FOR_DAY = std::make_shared<java::lang::String>("{0} d");
static android::icu::text::TimeUnitFormat::DEFAULT_PATTERN_FOR_HOUR = std::make_shared<java::lang::String>("{0} h");
static android::icu::text::TimeUnitFormat::DEFAULT_PATTERN_FOR_MINUTE = std::make_shared<java::lang::String>("{0} min");
static android::icu::text::TimeUnitFormat::DEFAULT_PATTERN_FOR_MONTH = std::make_shared<java::lang::String>("{0} m");
static android::icu::text::TimeUnitFormat::DEFAULT_PATTERN_FOR_SECOND = std::make_shared<java::lang::String>("{0} s");
static android::icu::text::TimeUnitFormat::DEFAULT_PATTERN_FOR_WEEK = std::make_shared<java::lang::String>("{0} w");
static android::icu::text::TimeUnitFormat::DEFAULT_PATTERN_FOR_YEAR = std::make_shared<java::lang::String>("{0} y");
static android::icu::text::TimeUnitFormat::FULL_NAME = 0x0;
static android::icu::text::TimeUnitFormat::TOTAL_STYLES = 0x2;
static android::icu::text::TimeUnitFormat::serialVersionUID = -0x3374a809c751fb09L;
// .method public constructor <init>()V
android::icu::text::TimeUnitFormat::TimeUnitFormat()
{
	
	bool cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 081    .end annotation
	cVar0 = 0x0;
	// 087    invoke-direct {p0}, Landroid/icu/text/MeasureFormat;-><init>()V
	this->mf = android::icu::text::MeasureFormat::getInstance(android::icu::util::ULocale::getDefault(android::icu::util::ULocale::getDefault({const[class].FS-Param}), android::icu::text::MeasureFormat_S_FormatWidth::WIDE), android::icu::text::MeasureFormat_S_FormatWidth::WIDE);
	this->isReady = cVar0;
	this->style = cVar0;
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::text::TimeUnitFormat::TimeUnitFormat(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 116    .end annotation
	android::icu::text::TimeUnitFormat::(locale, 0x0);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;I)V
android::icu::text::TimeUnitFormat::TimeUnitFormat(std::shared_ptr<android::icu::util::ULocale> locale,int style)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> cVar1;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "style"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 133    .end annotation
	// 139    invoke-direct {p0}, Landroid/icu/text/MeasureFormat;-><init>()V
	if ( style < 0 ) 
		goto label_cond_9;
	if ( style <  0x2 )
		goto label_cond_12;
label_cond_9:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("style should be either FULL_NAME or ABBREVIATED_NAME style")));
	// throw
	throw cVar0;
	// 158    .line 161
label_cond_12:
	if ( style )     
		goto label_cond_26;
	cVar1 = android::icu::text::MeasureFormat_S_FormatWidth::WIDE;
label_goto_16:
	this->mf = android::icu::text::MeasureFormat::getInstance(locale, cVar1);
	this->style = style;
	this->setLocale(locale, locale);
	this->locale = locale;
	this->isReady = 0x0;
	return;
	// 187    .line 161
label_cond_26:
	cVar1 = android::icu::text::MeasureFormat_S_FormatWidth::SHORT;
	goto label_goto_16;

}
// .method private constructor <init>(Landroid/icu/util/ULocale;ILandroid/icu/text/NumberFormat;)V
android::icu::text::TimeUnitFormat::TimeUnitFormat(std::shared_ptr<android::icu::util::ULocale> locale,int style,std::shared_ptr<android::icu::text::NumberFormat> numberFormat)
{
	
	std::shared_ptr<android::icu::text::NumberFormat> cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "style"    # I
	//    .param p3, "numberFormat"    # Landroid/icu/text/NumberFormat;
	android::icu::text::TimeUnitFormat::(locale, style);
	if ( !(numberFormat) )  
		goto label_cond_e;
	cVar0 = numberFormat->clone();
	cVar0->checkCast("android::icu::text::NumberFormat");
	this->setNumberFormat(cVar0);
label_cond_e:
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::text::TimeUnitFormat::TimeUnitFormat(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 225    .end annotation
	android::icu::text::TimeUnitFormat::(locale, 0x0);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;I)V
android::icu::text::TimeUnitFormat::TimeUnitFormat(std::shared_ptr<java::util::Locale> locale,int style)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .param p2, "style"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 242    .end annotation
	android::icu::text::TimeUnitFormat::(android::icu::util::ULocale::forLocale(locale), style);
	return;

}
// .method private readResolve()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::TimeUnitFormat::readResolve()
{
	
	std::shared_ptr<android::icu::text::TimeUnitFormat> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 259        value = {
	// 260            Ljava/io/ObjectStreamException;
	// 261        }
	// 262    .end annotation
	cVar0 = std::make_shared<android::icu::text::TimeUnitFormat>(this->locale, this->style, this->format);
	return cVar0;

}
// .method private searchInTree(Ljava/lang/String;ILandroid/icu/util/TimeUnit;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
void android::icu::text::TimeUnitFormat::searchInTree(std::shared_ptr<java::lang::String> resourceKey,int styl,std::shared_ptr<android::icu::util::TimeUnit> timeUnit,std::shared_ptr<java::lang::String> srcPluralCount,std::shared_ptr<java::lang::String> searchPluralCount,std::shared_ptr<java::util::Map<java::lang::String,std::vector<java::lang::Object>>> countToPatterns)
{
	
	std::shared_ptr<android::icu::util::ULocale> parentLocale;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> unitsRes;
	std::shared_ptr<android::icu::text::MessageFormat> messageFormat;
	std::shared_ptr<std::vector<java::lang::Object>> pair;
	std::shared<std::vector<std::vector<java::lang::Object>>> pair;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	
	//    .param p1, "resourceKey"    # Ljava/lang/String;
	//    .param p2, "styl"    # I
	//    .param p3, "timeUnit"    # Landroid/icu/util/TimeUnit;
	//    .param p4, "srcPluralCount"    # Ljava/lang/String;
	//    .param p5, "searchPluralCount"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 287        value = {
	// 288            "(",
	// 289            "Ljava/lang/String;",
	// 290            "I",
	// 291            "Landroid/icu/util/TimeUnit;",
	// 292            "Ljava/lang/String;",
	// 293            "Ljava/lang/String;",
	// 294            "Ljava/util/Map",
	// 295            "<",
	// 296            "Ljava/lang/String;",
	// 297            "[",
	// 298            "Ljava/lang/Object;",
	// 299            ">;)V"
	// 300        }
	// 301    .end annotation
	//    .local p6, "countToPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;"
	parentLocale = this->locale;
	//    .local v13, "parentLocale":Landroid/icu/util/ULocale;
	//    .local v15, "srcTimeUnitName":Ljava/lang/String;
label_goto_8:
	if ( !(parentLocale) )  
		goto label_cond_4f;
	try {
	//label_try_start_a:
	unitsRes = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/unit")), parentLocale);
	unitsRes->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v16, "unitsRes":Landroid/icu/impl/ICUResourceBundle;
	//    .local v11, "oneUnitRes":Landroid/icu/impl/ICUResourceBundle;
	//    .local v14, "pattern":Ljava/lang/String;
	messageFormat = std::make_shared<android::icu::text::MessageFormat>(unitsRes->getWithFallback(resourceKey)->getWithFallback(timeUnit->toString())->getStringWithFallback(searchPluralCount), this->locale);
	//    .local v10, "messageFormat":Landroid/icu/text/MessageFormat;
	pair = countToPatterns->get(srcPluralCount);
	pair->checkCast("std::vector<java::lang::Object>");
	//    .local v12, "pair":[Ljava/lang/Object;
	if ( pair )     
		goto label_cond_46;
	pair = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	countToPatterns->put(srcPluralCount, pair);
label_cond_46:
	pair[styl] = messageFormat;
	//label_try_end_48:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_49;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_a .. :try_end_48} :catch_49
	return;
	// 404    .line 526
	// 405    .end local v10    # "messageFormat":Landroid/icu/text/MessageFormat;
	// 406    .end local v11    # "oneUnitRes":Landroid/icu/impl/ICUResourceBundle;
	// 407    .end local v12    # "pair":[Ljava/lang/Object;
	// 408    .end local v14    # "pattern":Ljava/lang/String;
	// 409    .end local v16    # "unitsRes":Landroid/icu/impl/ICUResourceBundle;
label_catch_49:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v9, "e":Ljava/util/MissingResourceException;
	parentLocale = parentLocale->getFallback();
	goto label_goto_8;
	// 421    .line 532
	// 422    .end local v9    # "e":Ljava/util/MissingResourceException;
label_cond_4f:
	if ( parentLocale )     
		goto label_cond_87;
	if ( !(resourceKey->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("unitsShort")))) )  
		goto label_cond_87;
	this->searchInTree(std::make_shared<java::lang::String>(std::make_shared<char[]>("units")), styl, timeUnit, srcPluralCount, searchPluralCount, countToPatterns);
	if ( !(countToPatterns->get(srcPluralCount)) )  
		goto label_cond_87;
	cVar0 = countToPatterns->get(srcPluralCount);
	cVar0->checkCast("std::vector<java::lang::Object>");
	if ( !(cVar0[styl]) )  
		goto label_cond_87;
	return;
	// 482    .line 541
label_cond_87:
	if ( !(searchPluralCount->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("other")))) )  
		goto label_cond_131;
	//    .local v10, "messageFormat":Landroid/icu/text/MessageFormat;
	if ( timeUnit != android::icu::util::TimeUnit::SECOND )
		goto label_cond_be;
	//    .end local v10    # "messageFormat":Landroid/icu/text/MessageFormat;
	messageFormat = std::make_shared<android::icu::text::MessageFormat>(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0} s")), this->locale);
label_cond_a5:
label_goto_a5:
	pair = countToPatterns->get(srcPluralCount);
	pair->checkCast("std::vector<java::lang::Object>");
	//    .restart local v12    # "pair":[Ljava/lang/Object;
	if ( pair )     
		goto label_cond_bb;
	pair = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	countToPatterns->put(srcPluralCount, pair);
label_cond_bb:
	pair[styl] = 0x0;
	//    .end local v12    # "pair":[Ljava/lang/Object;
label_goto_bd:
	return;
	// 555    .line 546
	// 556    .restart local v10    # "messageFormat":Landroid/icu/text/MessageFormat;
label_cond_be:
	if ( timeUnit != android::icu::util::TimeUnit::MINUTE )
		goto label_cond_d1;
	//    .end local v10    # "messageFormat":Landroid/icu/text/MessageFormat;
	messageFormat = std::make_shared<android::icu::text::MessageFormat>(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0} min")), this->locale);
	//    .local v10, "messageFormat":Landroid/icu/text/MessageFormat;
	goto label_goto_a5;
	// 579    .line 548
	// 580    .local v10, "messageFormat":Landroid/icu/text/MessageFormat;
label_cond_d1:
	if ( timeUnit != android::icu::util::TimeUnit::HOUR )
		goto label_cond_e4;
	//    .end local v10    # "messageFormat":Landroid/icu/text/MessageFormat;
	messageFormat = std::make_shared<android::icu::text::MessageFormat>(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0} h")), this->locale);
	//    .local v10, "messageFormat":Landroid/icu/text/MessageFormat;
	goto label_goto_a5;
	// 603    .line 550
	// 604    .local v10, "messageFormat":Landroid/icu/text/MessageFormat;
label_cond_e4:
	if ( timeUnit != android::icu::util::TimeUnit::WEEK )
		goto label_cond_f7;
	//    .end local v10    # "messageFormat":Landroid/icu/text/MessageFormat;
	messageFormat = std::make_shared<android::icu::text::MessageFormat>(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0} w")), this->locale);
	//    .local v10, "messageFormat":Landroid/icu/text/MessageFormat;
	goto label_goto_a5;
	// 627    .line 552
	// 628    .local v10, "messageFormat":Landroid/icu/text/MessageFormat;
label_cond_f7:
	if ( timeUnit != android::icu::util::TimeUnit::DAY )
		goto label_cond_10a;
	//    .end local v10    # "messageFormat":Landroid/icu/text/MessageFormat;
	messageFormat = std::make_shared<android::icu::text::MessageFormat>(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0} d")), this->locale);
	//    .local v10, "messageFormat":Landroid/icu/text/MessageFormat;
	goto label_goto_a5;
	// 651    .line 554
	// 652    .local v10, "messageFormat":Landroid/icu/text/MessageFormat;
label_cond_10a:
	if ( timeUnit != android::icu::util::TimeUnit::MONTH )
		goto label_cond_11d;
	//    .end local v10    # "messageFormat":Landroid/icu/text/MessageFormat;
	messageFormat = std::make_shared<android::icu::text::MessageFormat>(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0} m")), this->locale);
	//    .local v10, "messageFormat":Landroid/icu/text/MessageFormat;
	goto label_goto_a5;
	// 675    .line 556
	// 676    .local v10, "messageFormat":Landroid/icu/text/MessageFormat;
label_cond_11d:
	if ( timeUnit != android::icu::util::TimeUnit::YEAR )
		goto label_cond_a5;
	//    .end local v10    # "messageFormat":Landroid/icu/text/MessageFormat;
	messageFormat = std::make_shared<android::icu::text::MessageFormat>(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0} y")), this->locale);
	//    .local v10, "messageFormat":Landroid/icu/text/MessageFormat;
	goto label_goto_a5;
	// 699    .line 567
	// 700    .end local v10    # "messageFormat":Landroid/icu/text/MessageFormat;
label_cond_131:
	this->searchInTree(resourceKey, styl, timeUnit, srcPluralCount, std::make_shared<java::lang::String>(std::make_shared<char[]>("other")), countToPatterns);
	goto label_goto_bd;

}
// .method private setup()V
void android::icu::text::TimeUnitFormat::setup()
{
	
	int cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	std::shared_ptr<java::util::Set> pluralKeywords;
	
	cVar0 = 0x1;
	if ( this->locale )     
		goto label_cond_19;
	if ( !(this->format) )  
		goto label_cond_4e;
	this->locale = this->format->getLocale(0x0);
label_goto_12:
	this->setLocale(this->locale, this->locale);
label_cond_19:
	if ( this->format )     
		goto label_cond_25;
	this->format = android::icu::text::NumberFormat::getNumberInstance(this->locale);
label_cond_25:
	this->pluralRules = android::icu::text::PluralRules::forLocale(this->locale);
	cVar1 = std::make_shared<java::util::HashMap>();
	this->timeUnitToCountToPatterns = cVar1;
	pluralKeywords = this->pluralRules->getKeywords();
	//    .local v0, "pluralKeywords":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	this->setup(std::make_shared<java::lang::String>(std::make_shared<char[]>("units/duration")), this->timeUnitToCountToPatterns, 0x0, pluralKeywords);
	this->setup(std::make_shared<java::lang::String>(std::make_shared<char[]>("unitsShort/duration")), this->timeUnitToCountToPatterns, cVar0, pluralKeywords);
	this->isReady = cVar0;
	return;
	// 818    .line 353
	// 819    .end local v0    # "pluralKeywords":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_4e:
	this->locale = android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT);
	goto label_goto_12;

}
// .method private setup(Ljava/lang/String;Ljava/util/Map;ILjava/util/Set;)V
void android::icu::text::TimeUnitFormat::setup(std::shared_ptr<java::lang::String> resourceKey,std::shared_ptr<java::util::Map<android::icu::util::TimeUnit,java::util::Map<java::lang::String,std::vector<java::lang::Object>>>> timeUnitToCountToPatterns,int style,std::shared_ptr<java::util::Set<java::lang::String>> pluralKeywords)
{
	
	auto timeUnits;
	int i;
	std::shared_ptr<java::lang::Object> timeUnit;
	std::shared_ptr<java::util::Map> countToPatterns;
	std::shared_ptr<java::util::TreeMap> countToPatterns;
	std::shared_ptr<java::util::Iterator> pluralCount_S_iterator;
	std::shared_ptr<java::lang::String> pluralCount;
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> resource;
	std::shared_ptr<android::icu::text::TimeUnitFormat_S_TimeUnitFormatSetupSink> sink;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "resourceKey"    # Ljava/lang/String;
	//    .param p3, "style"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 837        value = {
	// 838            "(",
	// 839            "Ljava/lang/String;",
	// 840            "Ljava/util/Map",
	// 841            "<",
	// 842            "Landroid/icu/util/TimeUnit;",
	// 843            "Ljava/util/Map",
	// 844            "<",
	// 845            "Ljava/lang/String;",
	// 846            "[",
	// 847            "Ljava/lang/Object;",
	// 848            ">;>;I",
	// 849            "Ljava/util/Set",
	// 850            "<",
	// 851            "Ljava/lang/String;",
	// 852            ">;)V"
	// 853        }
	// 854    .end annotation
	//    .local p2, "timeUnitToCountToPatterns":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/util/TimeUnit;Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;>;"
	//    .local p4, "pluralKeywords":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	try {
	//label_try_start_0:
	resource = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/unit")), this->locale);
	resource->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v14, "resource":Landroid/icu/impl/ICUResourceBundle;
	sink = std::make_shared<android::icu::text::TimeUnitFormat_S_TimeUnitFormatSetupSink>(timeUnitToCountToPatterns, style, pluralKeywords, this->locale);
	//    .local v15, "sink":Landroid/icu/text/TimeUnitFormat$TimeUnitFormatSetupSink;
	resource->getAllItemsWithFallback(resourceKey, sink);
	//label_try_end_21:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_78;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_0 .. :try_end_21} :catch_78
	//    .end local v14    # "resource":Landroid/icu/impl/ICUResourceBundle;
	//    .end local v15    # "sink":Landroid/icu/text/TimeUnitFormat$TimeUnitFormatSetupSink;
label_goto_21:
	timeUnits = android::icu::util::TimeUnit::values({const[class].FS-Param});
	//    .local v16, "timeUnits":[Landroid/icu/util/TimeUnit;
	//    .local v12, "keywords":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	i = 0x0;
	//    .local v11, "i":I
label_goto_2e:
	if ( i >= timeUnits->size() )
		goto label_cond_77;
	timeUnit = timeUnits[i];
	//    .local v6, "timeUnit":Landroid/icu/util/TimeUnit;
	countToPatterns = timeUnitToCountToPatterns->get(timeUnit);
	countToPatterns->checkCast("java::util::Map");
	//    .local v9, "countToPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;"
	if ( countToPatterns )     
		goto label_cond_49;
	//    .end local v9    # "countToPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;"
	countToPatterns = std::make_shared<java::util::TreeMap>();
	//    .restart local v9    # "countToPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;"
	timeUnitToCountToPatterns->put(timeUnit, countToPatterns);
label_cond_49:
	pluralCount_S_iterator = this->pluralRules->getKeywords()->iterator();
	//    .local v13, "pluralCount$iterator":Ljava/util/Iterator;
label_cond_4d:
label_goto_4d:
	if ( !(pluralCount_S_iterator->hasNext()) )  
		goto label_cond_74;
	pluralCount = pluralCount_S_iterator->next();
	pluralCount->checkCast("java::lang::String");
	//    .local v7, "pluralCount":Ljava/lang/String;
	if ( !(countToPatterns->get(pluralCount)) )  
		goto label_cond_69;
	cVar0 = countToPatterns->get(pluralCount);
	cVar0->checkCast("std::vector<java::lang::Object>");
	if ( cVar0[style] )     
		goto label_cond_4d;
label_cond_69:
	this->searchInTree(resourceKey, style, timeUnit, pluralCount, pluralCount, countToPatterns);
	goto label_goto_4d;
	// 1012    .line 480
	// 1013    .end local v7    # "pluralCount":Ljava/lang/String;
label_cond_74:
	i = ( i + 0x1);
	goto label_goto_2e;
	// 1019    .line 496
	// 1020    .end local v6    # "timeUnit":Landroid/icu/util/TimeUnit;
	// 1021    .end local v9    # "countToPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;"
	// 1022    .end local v13    # "pluralCount$iterator":Ljava/util/Iterator;
label_cond_77:
	return;
	// 1026    .line 458
	// 1027    .end local v11    # "i":I
	// 1028    .end local v12    # "keywords":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 1029    .end local v16    # "timeUnits":[Landroid/icu/util/TimeUnit;
label_catch_78:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v10, "e":Ljava/util/MissingResourceException;
	goto label_goto_21;

}
// .method private writeReplace()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::TimeUnitFormat::writeReplace()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1040        value = {
	// 1041            Ljava/io/ObjectStreamException;
	// 1042        }
	// 1043    .end annotation
	return this->mf->toTimeUnitProxy();

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::TimeUnitFormat::clone()
{
	
	std::shared_ptr<android::icu::text::TimeUnitFormat> result;
	std::shared_ptr<android::icu::text::NumberFormat> cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1061    .end annotation
	result = this->clone();
	result->checkCast("android::icu::text::TimeUnitFormat");
	//    .local v0, "result":Landroid/icu/text/TimeUnitFormat;
	cVar0 = this->format->clone();
	cVar0->checkCast("android::icu::text::NumberFormat");
	result->format = cVar0;
	return result;

}
// .method public format(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::TimeUnitFormat::format(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1093    .end annotation
	return this->mf->format(obj, toAppendTo, pos);

}
// .method public varargs formatMeasures(Ljava/lang/StringBuilder;Ljava/text/FieldPosition;[Landroid/icu/util/Measure;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::TimeUnitFormat::formatMeasures(std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition,std::shared_ptr<std::vector<android::icu::util::Measure>> measures)
{
	
	//    .param p1, "appendTo"    # Ljava/lang/StringBuilder;
	//    .param p2, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p3, "measures"    # [Landroid/icu/util/Measure;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1112    .end annotation
	return this->mf->formatMeasures(appendTo, fieldPosition, measures);

}
// .method public getNumberFormat()Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::TimeUnitFormat::getNumberFormat()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1128    .end annotation
	return this->mf->getNumberFormat();

}
// .method public getWidth()Landroid/icu/text/MeasureFormat$FormatWidth;
std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> android::icu::text::TimeUnitFormat::getWidth()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1144    .end annotation
	return this->mf->getWidth();

}
// .method public parseObject(Ljava/lang/String;Ljava/text/ParsePosition;)Landroid/icu/util/TimeUnitAmount;
std::shared_ptr<android::icu::util::TimeUnitAmount> android::icu::text::TimeUnitFormat::parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	std::shared_ptr<java::lang::Number> resultNumber;
	int oldPos;
	int longestParseDistance;
	std::shared_ptr<java::lang::String> countOfLongestMatch;
	std::shared_ptr<java::util::Iterator> timeUnit_S_iterator;
	std::shared_ptr<android::icu::util::TimeUnit> timeUnit;
	std::shared_ptr<java::util::Map> countToPattern;
	std::shared_ptr<java::util::Iterator> patternEntry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> patternEntry;
	std::shared_ptr<java::lang::String> count;
	int styl;
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	std::shared_ptr<android::icu::text::MessageFormat> pattern;
	std::shared_ptr<std::vector<java::lang::Object>> parsed;
	std::shared_ptr<std::vector<java::lang::Object>> cVar1;
	std::shared_ptr<java::lang::Object> tempObj;
	std::shared_ptr<java::lang::Number> temp;
	int parseDistance;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::util::TimeUnitAmount> cVar2;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1176    .end annotation
	if ( this->isReady )     
		goto label_cond_b;
	this->setup();
label_cond_b:
	resultNumber = 0x0;
	//    .local v14, "resultNumber":Ljava/lang/Number;
	//    .local v15, "resultTimeUnit":Landroid/icu/util/TimeUnit;
	oldPos = pos->getIndex();
	//    .local v8, "oldPos":I
	//    .local v7, "newPos":I
	longestParseDistance = 0x0;
	//    .local v6, "longestParseDistance":I
	countOfLongestMatch = 0x0;
	//    .local v3, "countOfLongestMatch":Ljava/lang/String;
	timeUnit_S_iterator = this->timeUnitToCountToPatterns->keySet()->iterator();
	//    .end local v3    # "countOfLongestMatch":Ljava/lang/String;
	//    .end local v14    # "resultNumber":Ljava/lang/Number;
	//    .end local v15    # "resultTimeUnit":Landroid/icu/util/TimeUnit;
	//    .local v20, "timeUnit$iterator":Ljava/util/Iterator;
label_cond_22:
	if ( !(timeUnit_S_iterator->hasNext()) )  
		goto label_cond_da;
	timeUnit = timeUnit_S_iterator->next();
	timeUnit->checkCast("android::icu::util::TimeUnit");
	//    .local v19, "timeUnit":Landroid/icu/util/TimeUnit;
	countToPattern = this->timeUnitToCountToPatterns->get(timeUnit);
	countToPattern->checkCast("java::util::Map");
	//    .local v4, "countToPattern":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;"
	patternEntry_S_iterator = countToPattern->entrySet()->iterator();
	//    .local v13, "patternEntry$iterator":Ljava/util/Iterator;
label_cond_46:
	if ( !(patternEntry_S_iterator->hasNext()) )  
		goto label_cond_22;
	patternEntry = patternEntry_S_iterator->next();
	patternEntry->checkCast("java::util::Map_S_Entry");
	//    .local v12, "patternEntry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;[Ljava/lang/Object;>;"
	count = patternEntry->getKey();
	count->checkCast("java::lang::String");
	//    .local v2, "count":Ljava/lang/String;
	styl = 0x0;
	//    .local v16, "styl":I
label_goto_5a:
	if ( styl >= 0x2 )
		goto label_cond_46;
	cVar0 = patternEntry->getValue();
	cVar0->checkCast("std::vector<java::lang::Object>");
	pattern = cVar0[styl];
	pattern->checkCast("android::icu::text::MessageFormat");
	//    .local v11, "pattern":Landroid/icu/text/MessageFormat;
	pos->setErrorIndex(-0x1);
	pos->setIndex(oldPos);
	parsed = pattern->parseObject(source, pos);
	//    .local v10, "parsed":Ljava/lang/Object;
	if ( pos->getErrorIndex() != -0x1 )
		goto label_cond_96;
	if ( pos->getIndex() != oldPos )
		goto label_cond_99;
	//    .end local v10    # "parsed":Ljava/lang/Object;
label_cond_96:
label_goto_96:
	styl = ( styl + 0x1);
	goto label_goto_5a;
	// 1379    .line 289
	// 1380    .restart local v10    # "parsed":Ljava/lang/Object;
label_cond_99:
	0x0;
	//    .local v17, "temp":Ljava/lang/Number;
	cVar1 = parsed;
	cVar1->checkCast("std::vector<java::lang::Object>");
	if ( !(cVar1->size()) )  
		goto label_cond_b8;
	parsed->checkCast("std::vector<java::lang::Object>");
	//    .end local v10    # "parsed":Ljava/lang/Object;
	tempObj = parsed[0x0];
	//    .local v18, "tempObj":Ljava/lang/Object;
	if ( !(tempObj->instanceOf("java::lang::Number")) )  
		goto label_cond_cb;
	temp = tempObj;
	temp->checkCast("java::lang::Number");
	//    .end local v17    # "temp":Ljava/lang/Number;
	//    .end local v18    # "tempObj":Ljava/lang/Object;
label_cond_b8:
label_goto_b8:
	parseDistance = (pos->getIndex() - oldPos);
	//    .local v9, "parseDistance":I
	if ( parseDistance <= longestParseDistance )
		goto label_cond_96;
	temp;
	//    .local v14, "resultNumber":Ljava/lang/Number;
	timeUnit;
	//    .local v15, "resultTimeUnit":Landroid/icu/util/TimeUnit;
	pos->getIndex();
	longestParseDistance = parseDistance;
	count;
	//    .local v3, "countOfLongestMatch":Ljava/lang/String;
	goto label_goto_96;
	// 1458    .line 302
	// 1459    .end local v3    # "countOfLongestMatch":Ljava/lang/String;
	// 1460    .end local v9    # "parseDistance":I
	// 1461    .end local v14    # "resultNumber":Ljava/lang/Number;
	// 1462    .end local v15    # "resultTimeUnit":Landroid/icu/util/TimeUnit;
	// 1463    .restart local v17    # "temp":Ljava/lang/Number;
	// 1464    .restart local v18    # "tempObj":Ljava/lang/Object;
label_cond_cb:
	try {
	//label_try_start_cb:
	//label_try_end_d8:
	}
	catch (java::text::ParseException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_143;
	}
	//    .catch Ljava/text/ParseException; {:try_start_cb .. :try_end_d8} :catch_143
	this->format->parse(tempObj->toString());
	//    .local v17, "temp":Ljava/lang/Number;
	goto label_goto_b8;
	// 1486    .line 323
	// 1487    .end local v2    # "count":Ljava/lang/String;
	// 1488    .end local v4    # "countToPattern":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;"
	// 1489    .end local v11    # "pattern":Landroid/icu/text/MessageFormat;
	// 1490    .end local v12    # "patternEntry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;[Ljava/lang/Object;>;"
	// 1491    .end local v13    # "patternEntry$iterator":Ljava/util/Iterator;
	// 1492    .end local v16    # "styl":I
	// 1493    .end local v17    # "temp":Ljava/lang/Number;
	// 1494    .end local v18    # "tempObj":Ljava/lang/Object;
	// 1495    .end local v19    # "timeUnit":Landroid/icu/util/TimeUnit;
label_cond_da:
	if ( resultNumber )     
		goto label_cond_ef;
	if ( !(longestParseDistance) )  
		goto label_cond_ef;
	if ( !(countOfLongestMatch->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("zero")))) )  
		goto label_cond_102;
label_cond_ef:
label_goto_ef:
	if ( longestParseDistance )     
		goto label_cond_12d;
	pos->setIndex(oldPos);
	pos->setErrorIndex(0x0);
	return 0x0;
	// 1543    .line 327
label_cond_102:
	if ( !(countOfLongestMatch->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("one")))) )  
		goto label_cond_114;
	//    .restart local v14    # "resultNumber":Ljava/lang/Number;
	goto label_goto_ef;
	// 1565    .line 329
	// 1566    .end local v14    # "resultNumber":Ljava/lang/Number;
label_cond_114:
	if ( !(countOfLongestMatch->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("two")))) )  
		goto label_cond_126;
	//    .restart local v14    # "resultNumber":Ljava/lang/Number;
	goto label_goto_ef;
	// 1588    .line 334
	// 1589    .end local v14    # "resultNumber":Ljava/lang/Number;
label_cond_126:
	//    .restart local v14    # "resultNumber":Ljava/lang/Number;
	goto label_goto_ef;
	// 1600    .line 342
	// 1601    .end local v14    # "resultNumber":Ljava/lang/Number;
label_cond_12d:
	pos->setIndex(-0x1);
	pos->setErrorIndex(-0x1);
	var132 = cVar2(resultNumber, 0x0);
	return cVar2;
	// 1625    .line 303
	// 1626    .restart local v2    # "count":Ljava/lang/String;
	// 1627    .restart local v4    # "countToPattern":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;"
	// 1628    .restart local v11    # "pattern":Landroid/icu/text/MessageFormat;
	// 1629    .restart local v12    # "patternEntry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;[Ljava/lang/Object;>;"
	// 1630    .restart local v13    # "patternEntry$iterator":Ljava/util/Iterator;
	// 1631    .restart local v16    # "styl":I
	// 1632    .local v17, "temp":Ljava/lang/Number;
	// 1633    .restart local v18    # "tempObj":Ljava/lang/Object;
	// 1634    .restart local v19    # "timeUnit":Landroid/icu/util/TimeUnit;
label_catch_143:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "e":Ljava/text/ParseException;
	goto label_goto_96;

}
// .method public setLocale(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeUnitFormat;
std::shared_ptr<android::icu::text::TimeUnitFormat> android::icu::text::TimeUnitFormat::setLocale(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1660    .end annotation
	if ( locale == this->locale )
		goto label_cond_14;
	this->mf = this->mf->withLocale(locale);
	this->setLocale(locale, locale);
	this->locale = locale;
	this->isReady = 0x0;
label_cond_14:
	return this;

}
// .method public setLocale(Ljava/util/Locale;)Landroid/icu/text/TimeUnitFormat;
std::shared_ptr<android::icu::text::TimeUnitFormat> android::icu::text::TimeUnitFormat::setLocale(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1697    .end annotation
	return this->setLocale(android::icu::util::ULocale::forLocale(locale));

}
// .method public setNumberFormat(Landroid/icu/text/NumberFormat;)Landroid/icu/text/TimeUnitFormat;
std::shared_ptr<android::icu::text::TimeUnitFormat> android::icu::text::TimeUnitFormat::setNumberFormat(std::shared_ptr<android::icu::text::NumberFormat> format)
{
	
	//    .param p1, "format"    # Landroid/icu/text/NumberFormat;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1716    .end annotation
	if ( format != this->format )
		goto label_cond_5;
	return this;
	// 1727    .line 228
label_cond_5:
	if ( format )     
		goto label_cond_2e;
	if ( this->locale )     
		goto label_cond_1b;
	this->isReady = 0x0;
	this->mf = this->mf->withLocale(android::icu::util::ULocale::getDefault({const[class].FS-Param}));
label_goto_1a:
	return this;
	// 1758    .line 233
label_cond_1b:
	this->format = android::icu::text::NumberFormat::getNumberInstance(this->locale);
	this->mf = this->mf->withNumberFormat(this->format);
	goto label_goto_1a;
	// 1781    .line 237
label_cond_2e:
	this->format = format;
	this->mf = this->mf->withNumberFormat(this->format);
	goto label_goto_1a;

}


