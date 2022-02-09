// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalFormat.smali
#include "java2ctype.h"
#include "android.icu.math.BigDecimal.h"
#include "android.icu.text.CompactDecimalDataCache_S_Data.h"
#include "android.icu.text.CompactDecimalDataCache_S_DataBundle.h"
#include "android.icu.text.CompactDecimalDataCache.h"
#include "android.icu.text.CompactDecimalFormat_S_Amount.h"
#include "android.icu.text.CompactDecimalFormat_S_CompactStyle.h"
#include "android.icu.text.CompactDecimalFormat.h"
#include "android.icu.text.DecimalFormat_S_Unit.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.DigitList.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.CurrencyAmount.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.ULocale.h"
#include "java.io.NotSerializableException.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.Double.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Math.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.math.BigDecimal.h"
#include "java.math.BigInteger.h"
#include "java.text.AttributedCharacterIterator.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Arrays.h"
#include "java.util.Collection.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.regex.Matcher.h"
#include "java.util.regex.Pattern.h"

static android::icu::text::CompactDecimalFormat::_android_icu_text_CompactDecimalFormat_S_CompactStyleSwitchesValues = nullptr;
static android::icu::text::CompactDecimalFormat::UNESCAPE_QUOTE;
static android::icu::text::CompactDecimalFormat::cache;
static android::icu::text::CompactDecimalFormat::serialVersionUID = 0x4173a3c399851eb2L;
// .method private static synthetic -getandroid-icu-text-CompactDecimalFormat$CompactStyleSwitchesValues()[I
int android::icu::text::CompactDecimalFormat::_getandroid_icu_text_CompactDecimalFormat_S_CompactStyleSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::text::CompactDecimalFormat::_android_icu_text_CompactDecimalFormat_S_CompactStyleSwitchesValues) )  
		goto label_cond_7;
	return android::icu::text::CompactDecimalFormat::_android_icu_text_CompactDecimalFormat_S_CompactStyleSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::text::CompactDecimalFormat_S_CompactStyle::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::text::CompactDecimalFormat_S_CompactStyle::LONG->ordinal()] = 0x1;
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
	cVar0[android::icu::text::CompactDecimalFormat_S_CompactStyle::SHORT->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_23
label_goto_20:
	android::icu::text::CompactDecimalFormat::_android_icu_text_CompactDecimalFormat_S_CompactStyleSwitchesValues = cVar0;
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
// .method static constructor <clinit>()V
void android::icu::text::CompactDecimalFormat::static_cinit()
{
	
	std::shared_ptr<android::icu::text::CompactDecimalDataCache> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::CompactDecimalDataCache>();
	android::icu::text::CompactDecimalFormat::cache = cVar0;
	android::icu::text::CompactDecimalFormat::UNESCAPE_QUOTE = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("((?<!\'))\'")));
	return;

}
// .method constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/text/CompactDecimalFormat$CompactStyle;)V
android::icu::text::CompactDecimalFormat::CompactDecimalFormat(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> style)
{
	
	std::shared_ptr<android::icu::text::DecimalFormat> format;
	std::shared_ptr<java::util::Map> data;
	std::shared_ptr<java::util::Map> currencyData;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "style"    # Landroid/icu/text/CompactDecimalFormat$CompactStyle;
	// 168    invoke-direct {p0}, Landroid/icu/text/DecimalFormat;-><init>()V
	this->pluralRules = android::icu::text::PluralRules::forLocale(locale);
	format = android::icu::text::NumberFormat::getInstance(locale);
	format->checkCast("android::icu::text::DecimalFormat");
	//    .local v2, "format":Landroid/icu/text/DecimalFormat;
	data = this->getData(locale, style);
	//    .local v1, "data":Landroid/icu/text/CompactDecimalDataCache$Data;
	currencyData = this->getCurrencyData(locale);
	//    .local v0, "currencyData":Landroid/icu/text/CompactDecimalDataCache$Data;
	this->units = data->units;
	this->divisor = data->divisors;
	this->currencyUnits = currencyData->units;
	this->currencyDivisor = currencyData->divisors;
	this->style = style;
	this->pluralToCurrencyAffixes = 0x0;
	this->finishInit(style, format->toPattern(), format->getDecimalFormatSymbols());
	return;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/DecimalFormatSymbols;Landroid/icu/text/CompactDecimalFormat$CompactStyle;Landroid/icu/text/PluralRules;[JLjava/util/Map;Ljava/util/Map;Ljava/util/Collection;)V
android::icu::text::CompactDecimalFormat::CompactDecimalFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DecimalFormatSymbols> formatSymbols,std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> style,std::shared_ptr<android::icu::text::PluralRules> pluralRules,std::shared_ptr<long long[]> divisor,std::shared_ptr<java::util::Map<java::lang::String,std::vector<std::vector<java::lang::String>>>> pluralAffixes,std::shared_ptr<java::util::Map<java::lang::String,std::vector<java::lang::String>>> currencyAffixes,std::shared_ptr<java::util::Collection<java::lang::String>> debugCreationErrors)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<long long[]> cVar1;
	std::shared_ptr<long long[]> cVar2;
	std::shared_ptr<java::util::HashMap> cVar3;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> s;
	std::shared_ptr<std::vector<java::lang::String>> pair;
	std::shared_ptr<java::lang::String> cVar4;
	std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> cVar5;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "formatSymbols"    # Landroid/icu/text/DecimalFormatSymbols;
	//    .param p3, "style"    # Landroid/icu/text/CompactDecimalFormat$CompactStyle;
	//    .param p4, "pluralRules"    # Landroid/icu/text/PluralRules;
	//    .param p5, "divisor"    # [J
	//    .annotation system Ldalvik/annotation/Signature;
	// 248        value = {
	// 249            "(",
	// 250            "Ljava/lang/String;",
	// 251            "Landroid/icu/text/DecimalFormatSymbols;",
	// 252            "Landroid/icu/text/CompactDecimalFormat$CompactStyle;",
	// 253            "Landroid/icu/text/PluralRules;",
	// 254            "[J",
	// 255            "Ljava/util/Map",
	// 256            "<",
	// 257            "Ljava/lang/String;",
	// 258            "[[",
	// 259            "Ljava/lang/String;",
	// 260            ">;",
	// 261            "Ljava/util/Map",
	// 262            "<",
	// 263            "Ljava/lang/String;",
	// 264            "[",
	// 265            "Ljava/lang/String;",
	// 266            ">;",
	// 267            "Ljava/util/Collection",
	// 268            "<",
	// 269            "Ljava/lang/String;",
	// 270            ">;)V"
	// 271        }
	// 272    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 275    .end annotation
	//    .local p6, "pluralAffixes":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[[Ljava/lang/String;>;"
	//    .local p7, "currencyAffixes":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/String;>;"
	//    .local p8, "debugCreationErrors":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	// 282    invoke-direct {p0}, Landroid/icu/text/DecimalFormat;-><init>()V
	this->pluralRules = pluralRules;
	this->units = this->otherPluralVariant(pluralAffixes, divisor, debugCreationErrors);
	this->currencyUnits = this->otherPluralVariant(pluralAffixes, divisor, debugCreationErrors);
	if ( pluralRules->getKeywords()->equals(this->units->keySet()) )     
		goto label_cond_53;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	debugCreationErrors->add(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missmatch in pluralCategories, should be: ")))->append(pluralRules->getKeywords())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", was actually ")))->append(this->units->keySet())->toString());
label_cond_53:
	cVar1 = divisor->clone();
	cVar1->checkCast("long long[]");
	this->divisor = cVar1;
	cVar2 = divisor->clone();
	cVar2->checkCast("long long[]");
	this->currencyDivisor = cVar2;
	if ( currencyAffixes )     
		goto label_cond_6c;
	this->pluralToCurrencyAffixes = 0x0;
label_cond_68:
	this->finishInit(style, pattern, formatSymbols);
	return;
	// 399    .line 190
label_cond_6c:
	cVar3 = std::make_shared<java::util::HashMap>();
	this->pluralToCurrencyAffixes = cVar3;
	s_S_iterator = currencyAffixes->entrySet()->iterator();
	//    .local v3, "s$iterator":Ljava/util/Iterator;
label_goto_7b:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_68;
	s = s_S_iterator->next();
	s->checkCast("java::util::Map_S_Entry");
	//    .local v2, "s":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;[Ljava/lang/String;>;"
	pair = s->getValue();
	pair->checkCast("std::vector<java::lang::String>");
	//    .local v1, "pair":[Ljava/lang/String;
	cVar4 = s->getKey();
	cVar4->checkCast("java::lang::String");
	cVar5 = std::make_shared<android::icu::text::DecimalFormat_S_Unit>(pair[0x0], pair[0x1]);
	this->pluralToCurrencyAffixes->put(cVar4, cVar5);
	goto label_goto_7b;

}
// .method private static escape(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CompactDecimalFormat::escape(std::shared_ptr<java::lang::String> string)
{
	
	//    .param p0, "string"    # Ljava/lang/String;
	if ( string->indexOf(0x27) < 0 ) 
		goto label_cond_16;
	return android::icu::text::CompactDecimalFormat::UNESCAPE_QUOTE->matcher(string)->replaceAll(std::make_shared<java::lang::String>(std::make_shared<char[]>("$1")));
	// 494    .line 396
label_cond_16:
	return string;

}
// .method private finishInit(Landroid/icu/text/CompactDecimalFormat$CompactStyle;Ljava/lang/String;Landroid/icu/text/DecimalFormatSymbols;)V
void android::icu::text::CompactDecimalFormat::finishInit(std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> style,std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DecimalFormatSymbols> formatSymbols)
{
	
	//    .param p1, "style"    # Landroid/icu/text/CompactDecimalFormat$CompactStyle;
	//    .param p2, "pattern"    # Ljava/lang/String;
	//    .param p3, "formatSymbols"    # Landroid/icu/text/DecimalFormatSymbols;
	this->applyPattern(pattern);
	this->setDecimalFormatSymbols(formatSymbols);
	this->setMaximumSignificantDigits(0x2);
	this->setSignificantDigitsUsed(0x1);
	if ( style != android::icu::text::CompactDecimalFormat_S_CompactStyle::SHORT )
		goto label_cond_16;
	this->setGroupingUsed(0x0);
label_cond_16:
	this->setCurrency(0x0);
	return;

}
// .method private format(DLandroid/icu/util/Currency;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::CompactDecimalFormat::format(double number,std::shared_ptr<android::icu::util::Currency> curr,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<android::icu::util::Output> currencyUnit;
	std::shared_ptr<android::icu::text::CompactDecimalFormat_S_Amount> amount;
	std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> unit;
	std::shared_ptr<java::lang::StringBuffer> prefix;
	std::shared_ptr<java::lang::StringBuffer> suffix;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::lang::Object> cVar2;
	std::shared_ptr<java::lang::String> originalPattern;
	std::shared_ptr<java::lang::StringBuffer> newPattern;
	int semicolonPos;
	
	//    .param p1, "number"    # D
	//    .param p3, "curr"    # Landroid/icu/util/Currency;
	//    .param p4, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p5, "pos"    # Ljava/text/FieldPosition;
	if ( !(curr) )  
		goto label_cond_13;
	if ( this->style != android::icu::text::CompactDecimalFormat_S_CompactStyle::LONG )
		goto label_cond_13;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CompactDecimalFormat does not support LONG style for currency.")));
	// throw
	throw cVar0;
	// 570    .line 330
label_cond_13:
	currencyUnit = std::make_shared<android::icu::util::Output>();
	//    .local v5, "currencyUnit":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/text/DecimalFormat$Unit;>;"
	amount = this->toAmount(number, curr, currencyUnit);
	//    .local v4, "amount":Landroid/icu/text/CompactDecimalFormat$Amount;
	unit = amount->getUnit();
	//    .local v12, "unit":Landroid/icu/text/DecimalFormat$Unit;
	prefix = std::make_shared<java::lang::StringBuffer>();
	//    .local v9, "prefix":Ljava/lang/StringBuffer;
	suffix = std::make_shared<java::lang::StringBuffer>();
	//    .local v11, "suffix":Ljava/lang/StringBuffer;
	if ( !(currencyUnit->value) )  
		goto label_cond_3b;
	cVar1 = currencyUnit->value;
	cVar1->checkCast("android::icu::text::DecimalFormat_S_Unit");
	cVar1->writePrefix(prefix);
label_cond_3b:
	unit->writePrefix(prefix);
	unit->writeSuffix(suffix);
	if ( !(currencyUnit->value) )  
		goto label_cond_4c;
	cVar2 = currencyUnit->value;
	cVar2->checkCast("android::icu::text::DecimalFormat_S_Unit");
	cVar2->writeSuffix(suffix);
label_cond_4c:
	if ( curr )     
		goto label_cond_76;
	toAppendTo->append(android::icu::text::CompactDecimalFormat::escape(prefix->toString()));
	this->format(amount->getQty(), toAppendTo, pos);
	toAppendTo->append(android::icu::text::CompactDecimalFormat::escape(suffix->toString()));
label_goto_75:
	return toAppendTo;
	// 685    .line 356
label_cond_76:
	this->monitor_enter();
	try {
	//label_try_start_77:
	originalPattern = this->toPattern();
	//    .local v8, "originalPattern":Ljava/lang/String;
	//    .local v7, "originalCurrency":Landroid/icu/util/Currency;
	newPattern = std::make_shared<java::lang::StringBuffer>();
	//    .local v6, "newPattern":Ljava/lang/StringBuffer;
	semicolonPos = originalPattern->indexOf(0x3b);
	//    .local v10, "semicolonPos":I
	newPattern->append(prefix);
	if ( semicolonPos == -0x1 )
		goto label_cond_9f;
	newPattern->append(originalPattern, 0x0, semicolonPos);
	newPattern->append(suffix);
	newPattern->append(0x3b);
	newPattern->append(prefix);
label_cond_9f:
	newPattern->append(originalPattern, ( semicolonPos + 0x1), originalPattern->length());
	newPattern->append(suffix);
	this->setCurrency(curr);
	this->applyPattern(newPattern->toString());
	this->format(amount->getQty(), toAppendTo, pos);
	this->setCurrency(this->getCurrency());
	this->applyPattern(originalPattern);
	//label_try_end_d2:
	}
	catch (...){
		goto label_catchall_d4;
	}
	//    .catchall {:try_start_77 .. :try_end_d2} :catchall_d4
	this->monitor_exit();
	goto label_goto_75;
	// 798    .line 356
	// 799    .end local v6    # "newPattern":Ljava/lang/StringBuffer;
	// 800    .end local v7    # "originalCurrency":Landroid/icu/util/Currency;
	// 801    .end local v8    # "originalPattern":Ljava/lang/String;
	// 802    .end local v10    # "semicolonPos":I
label_catchall_d4:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private getCurrencyData(Landroid/icu/util/ULocale;)Landroid/icu/text/CompactDecimalDataCache$Data;
std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> android::icu::text::CompactDecimalFormat::getCurrencyData(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .local v0, "bundle":Landroid/icu/text/CompactDecimalDataCache$DataBundle;
	return android::icu::text::CompactDecimalFormat::cache->get(locale)->shortCurrencyData;

}
// .method private getData(Landroid/icu/util/ULocale;Landroid/icu/text/CompactDecimalFormat$CompactStyle;)Landroid/icu/text/CompactDecimalDataCache$Data;
std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> android::icu::text::CompactDecimalFormat::getData(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> style)
{
	
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> bundle;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "style"    # Landroid/icu/text/CompactDecimalFormat$CompactStyle;
	bundle = android::icu::text::CompactDecimalFormat::cache->get(locale);
	//    .local v0, "bundle":Landroid/icu/text/CompactDecimalDataCache$DataBundle;
	// switch
	{
	auto item = ( android::icu::text::CompactDecimalFormat::-getandroid-icu-text-CompactDecimalFormat$CompactStyleSwitchesValues({const[class].FS-Param})[style->ordinal()] );
	if (item == 1) goto label_pswitch_19;
	if (item == 2) goto label_pswitch_16;
	}
	return bundle->shortData;
	// 862    .line 527
label_pswitch_16:
	return bundle->shortData;
	// 868    .line 529
label_pswitch_19:
	return bundle->longData;
	// 874    .line 525
	// 875    :pswitch_data_1c
	// 876    .packed-switch 0x1
	// 877        :pswitch_19
	// 878        :pswitch_16
	// 879    .end packed-switch

}
// .method public static getInstance(Landroid/icu/util/ULocale;Landroid/icu/text/CompactDecimalFormat$CompactStyle;)Landroid/icu/text/CompactDecimalFormat;
std::shared_ptr<android::icu::text::CompactDecimalFormat> android::icu::text::CompactDecimalFormat::getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> style)
{
	
	std::shared_ptr<android::icu::text::CompactDecimalFormat> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "style"    # Landroid/icu/text/CompactDecimalFormat$CompactStyle;
	cVar0 = std::make_shared<android::icu::text::CompactDecimalFormat>(locale, style);
	return cVar0;

}
// .method public static getInstance(Ljava/util/Locale;Landroid/icu/text/CompactDecimalFormat$CompactStyle;)Landroid/icu/text/CompactDecimalFormat;
std::shared_ptr<android::icu::text::CompactDecimalFormat> android::icu::text::CompactDecimalFormat::getInstance(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> style)
{
	
	std::shared_ptr<android::icu::text::CompactDecimalFormat> cVar0;
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	//    .param p1, "style"    # Landroid/icu/text/CompactDecimalFormat$CompactStyle;
	cVar0 = std::make_shared<android::icu::text::CompactDecimalFormat>(android::icu::util::ULocale::forLocale(locale), style);
	return cVar0;

}
// .method private getPluralForm(Landroid/icu/text/PluralRules$FixedDecimal;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CompactDecimalFormat::getPluralForm(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> fixedDecimal)
{
	
	//    .param p1, "fixedDecimal"    # Landroid/icu/text/PluralRules$FixedDecimal;
	if ( this->pluralRules )     
		goto label_cond_8;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	// 929    .line 513
label_cond_8:
	return this->pluralRules->select(fixedDecimal);

}
// .method private mapsAreEqual(Ljava/util/Map;Ljava/util/Map;)Z
bool android::icu::text::CompactDecimalFormat::mapsAreEqual(std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> lhs,std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> rhs)
{
	
	bool cVar0;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<std::vector<android::icu::text::DecimalFormat_S_Unit>> value;
	std::shared_ptr<std::vector<java::lang::Object>> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 943        value = {
	// 944            "(",
	// 945            "Ljava/util/Map",
	// 946            "<",
	// 947            "Ljava/lang/String;",
	// 948            "[",
	// 949            "Landroid/icu/text/DecimalFormat$Unit;",
	// 950            ">;",
	// 951            "Ljava/util/Map",
	// 952            "<",
	// 953            "Ljava/lang/String;",
	// 954            "[",
	// 955            "Landroid/icu/text/DecimalFormat$Unit;",
	// 956            ">;)Z"
	// 957        }
	// 958    .end annotation
	//    .local p1, "lhs":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Landroid/icu/text/DecimalFormat$Unit;>;"
	//    .local p2, "rhs":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Landroid/icu/text/DecimalFormat$Unit;>;"
	cVar0 = 0x0;
	if ( lhs->size() == rhs->size() )
		goto label_cond_c;
	return cVar0;
	// 979    .line 233
label_cond_c:
	entry_S_iterator = lhs->entrySet()->iterator();
	//    .local v1, "entry$iterator":Ljava/util/Iterator;
label_cond_14:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_3b;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v0, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;[Landroid/icu/text/DecimalFormat$Unit;>;"
	value = rhs->get(entry->getKey());
	value->checkCast("std::vector<android::icu::text::DecimalFormat_S_Unit>");
	//    .local v2, "value":[Landroid/icu/text/DecimalFormat$Unit;
	if ( !(value) )  
		goto label_cond_3a;
	cVar1 = entry->getValue();
	cVar1->checkCast("std::vector<java::lang::Object>");
	if ( !(( java::util::Arrays::equals(cVar1, value) ^ 0x1)) )  
		goto label_cond_14;
label_cond_3a:
	return cVar0;
	// 1037    .line 239
	// 1038    .end local v0    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;[Landroid/icu/text/DecimalFormat$Unit;>;"
	// 1039    .end local v2    # "value":[Landroid/icu/text/DecimalFormat$Unit;
label_cond_3b:
	return 0x1;

}
// .method private otherPluralVariant(Ljava/util/Map;[JLjava/util/Collection;)Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> android::icu::text::CompactDecimalFormat::otherPluralVariant(std::shared_ptr<java::util::Map<java::lang::String,std::vector<std::vector<java::lang::String>>>> pluralCategoryToPower10ToAffix,std::shared_ptr<long long[]> divisor,std::shared_ptr<java::util::Collection<java::lang::String>> debugCreationErrors)
{
	
	long long oldDivisor;
	int i;
	int log;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::util::HashMap> result;
	std::shared_ptr<java::util::HashMap> seen;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> defaultPower10ToAffix;
	std::shared_ptr<java::util::Iterator> pluralCategoryAndPower10ToAffix_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> pluralCategoryAndPower10ToAffix;
	std::shared_ptr<java::lang::String> pluralCategory;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> power10ToAffix;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	auto units;
	std::shared_ptr<std::vector<java::lang::Object>> pair;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<java::lang::Integer> old;
	std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	
	//    .param p2, "divisor"    # [J
	//    .annotation system Ldalvik/annotation/Signature;
	// 1050        value = {
	// 1051            "(",
	// 1052            "Ljava/util/Map",
	// 1053            "<",
	// 1054            "Ljava/lang/String;",
	// 1055            "[[",
	// 1056            "Ljava/lang/String;",
	// 1057            ">;[J",
	// 1058            "Ljava/util/Collection",
	// 1059            "<",
	// 1060            "Ljava/lang/String;",
	// 1061            ">;)",
	// 1062            "Ljava/util/Map",
	// 1063            "<",
	// 1064            "Ljava/lang/String;",
	// 1065            "[",
	// 1066            "Landroid/icu/text/DecimalFormat$Unit;",
	// 1067            ">;"
	// 1068        }
	// 1069    .end annotation
	//    .local p1, "pluralCategoryToPower10ToAffix":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[[Ljava/lang/String;>;"
	//    .local p3, "debugCreationErrors":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	if ( divisor->size() >= 0xf )
		goto label_cond_19;
	this->recordError(debugCreationErrors, std::make_shared<java::lang::String>(std::make_shared<char[]>("Must have at least 15 prefix items.")));
label_cond_19:
	oldDivisor = 0x0;
	//    .local v10, "oldDivisor":J
	i = 0x0;
	//    .local v5, "i":I
label_goto_1c:
	if ( i >= divisor->size() )
		goto label_cond_10b;
	log = (int)(java::lang::Math::log10((double)(divisor[i])));
	//    .local v7, "log":I
	if ( log <= i )
		goto label_cond_6e;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->recordError(debugCreationErrors, cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Divisor[")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] must be less than or equal to 10^")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", but is: ")))->append(divisor[i])->toString());
label_cond_6e:
	//    .local v18, "roundTrip":J
	if ( !(((long long)(java::lang::Math::pow(0x4024000000000000L, (double)(log))) > divisor[i])) )  
		goto label_cond_b2;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	this->recordError(debugCreationErrors, cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Divisor[")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] must be a power of 10, but is: ")))->append(divisor[i])->toString());
label_cond_b2:
	if ( (divisor[i] > oldDivisor) >= 0 )
		goto label_cond_105;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	this->recordError(debugCreationErrors, cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad divisor, the divisor for 10E")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(")))->append(divisor[i])->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") is less than the divisor for the divisor for 10E")))->append(( i + -0x1))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(")))->append(oldDivisor)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
label_cond_105:
	oldDivisor = divisor[i];
	i = ( i + 0x1);
	goto label_goto_1c;
	// 1365    .line 465
	// 1366    .end local v7    # "log":I
	// 1367    .end local v18    # "roundTrip":J
label_cond_10b:
	result = std::make_shared<java::util::HashMap>();
	//    .local v16, "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Landroid/icu/text/DecimalFormat$Unit;>;"
	seen = std::make_shared<java::util::HashMap>();
	//    .local v17, "seen":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;"
	defaultPower10ToAffix = pluralCategoryToPower10ToAffix->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("other")));
	defaultPower10ToAffix->checkCast("std::vector<std::vector<java::lang::String>>");
	//    .local v4, "defaultPower10ToAffix":[[Ljava/lang/String;
	pluralCategoryAndPower10ToAffix_S_iterator = pluralCategoryToPower10ToAffix->entrySet()->iterator();
	//    .local v14, "pluralCategoryAndPower10ToAffix$iterator":Ljava/util/Iterator;
label_goto_12a:
	if ( !(pluralCategoryAndPower10ToAffix_S_iterator->hasNext()) )  
		goto label_cond_291;
	pluralCategoryAndPower10ToAffix = pluralCategoryAndPower10ToAffix_S_iterator->next();
	pluralCategoryAndPower10ToAffix->checkCast("java::util::Map_S_Entry");
	//    .local v13, "pluralCategoryAndPower10ToAffix":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;[[Ljava/lang/String;>;"
	pluralCategory = pluralCategoryAndPower10ToAffix->getKey();
	pluralCategory->checkCast("java::lang::String");
	//    .local v12, "pluralCategory":Ljava/lang/String;
	power10ToAffix = pluralCategoryAndPower10ToAffix->getValue();
	power10ToAffix->checkCast("std::vector<std::vector<java::lang::String>>");
	//    .local v15, "power10ToAffix":[[Ljava/lang/String;
	if ( power10ToAffix->size() == divisor->size() )
		goto label_cond_16f;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	this->recordError(debugCreationErrors, cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Prefixes & suffixes must be present for all divisors ")))->append(pluralCategory)->toString());
label_cond_16f:
	units = std::make_shared<std::vector<std::vector<android::icu::text::DecimalFormat_S_Unit>>>(power10ToAffix->size());
	//    .local v20, "units":[Landroid/icu/text/DecimalFormat$Unit;
	i = 0x0;
label_goto_179:
	if ( i >= power10ToAffix->size() )
		goto label_cond_288;
	pair = power10ToAffix[i];
	//    .local v9, "pair":[Ljava/lang/String;
	if ( pair )     
		goto label_cond_186;
	pair = defaultPower10ToAffix[i];
label_cond_186:
	if ( pair->size() != 0x2 )
		goto label_cond_197;
	if ( pair[0x0] )     
		goto label_cond_1d5;
label_cond_197:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	this->recordError(debugCreationErrors, cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Prefix or suffix is null for ")))->append(pluralCategory)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(java::util::Arrays::asList(pair))->toString());
label_goto_1d2:
	i = ( i + 0x1);
	goto label_goto_179;
	// 1597    .line 486
label_cond_1d5:
	if ( !(pair[0x1]) )  
		goto label_cond_197;
	//    .restart local v7    # "log":I
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	key = cVar5->append(pair[0x0])->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\uffff")))->append(pair[0x1])->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\uffff")))->append((i - (int)(java::lang::Math::log10((double)(divisor[i])))))->toString();
	//    .local v6, "key":Ljava/lang/String;
	old = seen->get(key);
	old->checkCast("java::lang::Integer");
	//    .local v8, "old":Ljava/lang/Integer;
	if ( old )     
		goto label_cond_23b;
	seen->put(key, java::lang::Integer::valueOf(i));
label_cond_22b:
label_goto_22b:
	cVar6 = std::make_shared<android::icu::text::DecimalFormat_S_Unit>(pair[0x0], pair[0x1]);
	units[i] = cVar6;
	goto label_goto_1d2;
	// 1710    .line 497
label_cond_23b:
	if ( old->intValue() == i )
		goto label_cond_22b;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	this->recordError(debugCreationErrors, cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Collision between values for ")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" and ")))->append(old)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" for [prefix/suffix/index-log(divisor)")))->append(key->replace(0xffff, 0x3b))->toString());
	goto label_goto_22b;
	// 1789    .line 504
	// 1790    .end local v6    # "key":Ljava/lang/String;
	// 1791    .end local v7    # "log":I
	// 1792    .end local v8    # "old":Ljava/lang/Integer;
	// 1793    .end local v9    # "pair":[Ljava/lang/String;
label_cond_288:
	result->put(pluralCategory, units);
	goto label_goto_12a;
	// 1803    .line 506
	// 1804    .end local v12    # "pluralCategory":Ljava/lang/String;
	// 1805    .end local v13    # "pluralCategoryAndPower10ToAffix":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;[[Ljava/lang/String;>;"
	// 1806    .end local v15    # "power10ToAffix":[[Ljava/lang/String;
	// 1807    .end local v20    # "units":[Landroid/icu/text/DecimalFormat$Unit;
label_cond_291:
	return result;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::text::CompactDecimalFormat::readObject(std::shared_ptr<java::io::ObjectInputStream> in)
{
	
	std::shared_ptr<java::io::NotSerializableException> cVar0;
	
	//    .param p1, "in"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1816        value = {
	// 1817            Ljava/io/IOException;
	// 1818        }
	// 1819    .end annotation
	cVar0 = std::make_shared<java::io::NotSerializableException>();
	// throw
	throw cVar0;

}
// .method private recordError(Ljava/util/Collection;Ljava/lang/String;)V
void android::icu::text::CompactDecimalFormat::recordError(std::shared_ptr<java::util::Collection<java::lang::String>> creationErrors,std::shared_ptr<java::lang::String> errorMessage)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p2, "errorMessage"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1834        value = {
	// 1835            "(",
	// 1836            "Ljava/util/Collection",
	// 1837            "<",
	// 1838            "Ljava/lang/String;",
	// 1839            ">;",
	// 1840            "Ljava/lang/String;",
	// 1841            ")V"
	// 1842        }
	// 1843    .end annotation
	//    .local p1, "creationErrors":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	if ( creationErrors )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(errorMessage);
	// throw
	throw cVar0;
	// 1857    .line 431
label_cond_8:
	creationErrors->add(errorMessage);
	return;

}
// .method private toAmount(DLandroid/icu/util/Currency;Landroid/icu/util/Output;)Landroid/icu/text/CompactDecimalFormat$Amount;
std::shared_ptr<android::icu::text::CompactDecimalFormat_S_Amount> android::icu::text::CompactDecimalFormat::toAmount(double number,std::shared_ptr<android::icu::util::Currency> curr,std::shared_ptr<android::icu::util::Output<android::icu::text::DecimalFormat_S_Unit>> currencyUnit)
{
	
	double cVar0;
	int base;
	double cVar3;
	std::shared_ptr<java::lang::Object> pluralVariant;
	std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> cVar2;
	std::shared_ptr<android::icu::text::CompactDecimalFormat_S_Amount> cVar4;
	std::shared_ptr<android::icu::text::CompactDecimalFormat_S_Amount> cVar6;
	
	//    .param p1, "number"    # D
	//    .param p3, "curr"    # Landroid/icu/util/Currency;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1870        value = {
	// 1871            "(D",
	// 1872            "Landroid/icu/util/Currency;",
	// 1873            "Landroid/icu/util/Output",
	// 1874            "<",
	// 1875            "Landroid/icu/text/DecimalFormat$Unit;",
	// 1876            ">;)",
	// 1877            "Landroid/icu/text/CompactDecimalFormat$Amount;"
	// 1878        }
	// 1879    .end annotation
	//    .local p4, "currencyUnit":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/text/DecimalFormat$Unit;>;"
	//    .local v1, "negative":Z
	cVar0 = this->adjustNumberAsInFormatting(number);
	if ( (cVar0 > 0x3ff0000000000000L) > 0 ) 
		goto label_cond_4a;
	base = 0x0;
	//    .local v0, "base":I
label_goto_f:
	if ( base <  0xf )
		goto label_cond_15;
	base = 0xe;
label_cond_15:
	if ( !(curr) )  
		goto label_cond_50;
	cVar3 = ( cVar0 / (double)(this->currencyDivisor[base]));
label_goto_1d:
	pluralVariant = this->getPluralForm(this->getFixedDecimal(cVar3, this->toDigitList(cVar3)));
	//    .local v2, "pluralVariant":Ljava/lang/String;
	if ( !(this->pluralToCurrencyAffixes) )  
		goto label_cond_39;
	if ( !(currencyUnit) )  
		goto label_cond_39;
	cVar2 = this->pluralToCurrencyAffixes->get(pluralVariant);
	cVar2->checkCast("android::icu::text::DecimalFormat_S_Unit");
	currencyUnit->value = cVar2;
label_cond_39:
	if ( !(this->isNumberNegative(number)) )  
		goto label_cond_3c;
	cVar3 = (0.0 - cVar3);
label_cond_3c:
	if ( !(curr) )  
		goto label_cond_57;
	cVar4 = std::make_shared<android::icu::text::CompactDecimalFormat_S_Amount>(cVar3, android::icu::text::CompactDecimalDataCache::getUnit(this->currencyUnits, pluralVariant, base));
	return cVar4;
	// 1983    .line 404
	// 1984    .end local v0    # "base":I
	// 1985    .end local v2    # "pluralVariant":Ljava/lang/String;
label_cond_4a:
	base = (int)(java::lang::Math::log10(cVar0));
	//    .restart local v0    # "base":I
	goto label_goto_f;
	// 1996    .line 411
label_cond_50:
	cVar3 = ( cVar0 / (double)(this->divisor[base]));
	goto label_goto_1d;
	// 2008    .line 423
	// 2009    .restart local v2    # "pluralVariant":Ljava/lang/String;
label_cond_57:
	cVar6 = std::make_shared<android::icu::text::CompactDecimalFormat_S_Amount>(cVar3, android::icu::text::CompactDecimalDataCache::getUnit(this->units, pluralVariant, base));
	return cVar6;

}
// .method private writeObject(Ljava/io/ObjectOutputStream;)V
void android::icu::text::CompactDecimalFormat::writeObject(std::shared_ptr<java::io::ObjectOutputStream> out)
{
	
	std::shared_ptr<java::io::NotSerializableException> cVar0;
	
	//    .param p1, "out"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2028        value = {
	// 2029            Ljava/io/IOException;
	// 2030        }
	// 2031    .end annotation
	cVar0 = std::make_shared<java::io::NotSerializableException>();
	// throw
	throw cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::CompactDecimalFormat::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::CompactDecimalFormat> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( obj )     
		goto label_cond_4;
	return cVar1;
	// 2057    .line 217
label_cond_4:
	if ( this->equals(obj) )     
		goto label_cond_b;
	return cVar1;
label_cond_b:
	other = obj;
	other->checkCast("android::icu::text::CompactDecimalFormat");
	//    .local v0, "other":Landroid/icu/text/CompactDecimalFormat;
	if ( !(this->mapsAreEqual(this->units, other->units)) )  
		goto label_cond_3e;
	if ( !(java::util::Arrays::equals(this->divisor, other->divisor)) )  
		goto label_cond_3e;
	if ( this->pluralToCurrencyAffixes == other->pluralToCurrencyAffixes )
		goto label_cond_36;
	if ( !(this->pluralToCurrencyAffixes) )  
		goto label_cond_3e;
	if ( !(this->pluralToCurrencyAffixes->equals(other->pluralToCurrencyAffixes)) )  
		goto label_cond_3e;
label_cond_36:
	cVar1 = this->pluralRules->equals(other->pluralRules);
label_cond_3e:
	return cVar1;

}
// .method public format(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::CompactDecimalFormat::format(double number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	//    .param p1, "number"    # D
	//    .param p3, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p4, "pos"    # Ljava/text/FieldPosition;
	return this->format(number, 0x0, toAppendTo, pos);

}
// .method public format(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::CompactDecimalFormat::format(long long number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	//    .param p1, "number"    # J
	//    .param p3, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p4, "pos"    # Ljava/text/FieldPosition;
	return this->format((double)(number), toAppendTo, pos);

}
// .method public format(Landroid/icu/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::CompactDecimalFormat::format(std::shared_ptr<android::icu::math::BigDecimal> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	//    .param p1, "number"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	return this->format(number->doubleValue(), toAppendTo, pos);

}
// .method public format(Landroid/icu/util/CurrencyAmount;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::CompactDecimalFormat::format(std::shared_ptr<android::icu::util::CurrencyAmount> currAmt,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	//    .param p1, "currAmt"    # Landroid/icu/util/CurrencyAmount;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2203    .end annotation
	return this->format(currAmt->getNumber()->doubleValue(), currAmt->getCurrency(), toAppendTo, pos);

}
// .method public format(Ljava/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::CompactDecimalFormat::format(std::shared_ptr<java::math::BigDecimal> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	//    .param p1, "number"    # Ljava/math/BigDecimal;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	return this->format(number->doubleValue(), toAppendTo, pos);

}
// .method public format(Ljava/math/BigInteger;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::CompactDecimalFormat::format(std::shared_ptr<java::math::BigInteger> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	//    .param p1, "number"    # Ljava/math/BigInteger;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	return this->format(number->doubleValue(), toAppendTo, pos);

}
// .method public formatToCharacterIterator(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;
std::shared_ptr<java::text::AttributedCharacterIterator> android::icu::text::CompactDecimalFormat::formatToCharacterIterator(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<android::icu::util::Currency> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::Number> number;
	std::shared_ptr<android::icu::text::CompactDecimalFormat_S_Amount> amount;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( obj->instanceOf("java::lang::Number") )     
		goto label_cond_b;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar1;
label_cond_b:
	number = obj;
	number->checkCast("java::lang::Number");
	//    .local v1, "number":Ljava/lang/Number;
	amount = this->toAmount(number->doubleValue(), cVar0, cVar0);
	//    .local v0, "amount":Landroid/icu/text/CompactDecimalFormat$Amount;
	return this->formatToCharacterIterator(java::lang::Double::valueOf(amount->getQty()), amount->getUnit());

}
// .method public parse(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::text::CompactDecimalFormat::parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "parsePosition"    # Ljava/text/ParsePosition;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}


