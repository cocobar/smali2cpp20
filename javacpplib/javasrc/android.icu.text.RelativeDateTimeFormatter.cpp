// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter.smali
#include "java2ctype.h"
#include "android.icu.impl.DontCareFieldPosition.h"
#include "android.icu.impl.SimpleFormatterImpl.h"
#include "android.icu.impl.StandardPlural.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.DateFormatSymbols.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.text.QuantityFormatter.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_AbsoluteUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Cache.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Direction.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeDateTimeUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Style.h"
#include "android.icu.text.RelativeDateTimeFormatter.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Double.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.EnumMap.h"
#include "java.util.Locale.h"

static android::icu::text::RelativeDateTimeFormatter::_android_icu_text_RelativeDateTimeFormatter_S_RelativeDateTimeUnitSwitchesValues;
static android::icu::text::RelativeDateTimeFormatter::cache;
static android::icu::text::RelativeDateTimeFormatter::fallbackCache;
// .method static synthetic -get0()[Landroid/icu/text/RelativeDateTimeFormatter$Style;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> android::icu::text::RelativeDateTimeFormatter::_get0()
{
	
	return android::icu::text::RelativeDateTimeFormatter::fallbackCache;

}
// .method private static synthetic -getandroid-icu-text-RelativeDateTimeFormatter$RelativeDateTimeUnitSwitchesValues()[I
int android::icu::text::RelativeDateTimeFormatter::_getandroid_icu_text_RelativeDateTimeFormatter_S_RelativeDateTimeUnitSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::text::RelativeDateTimeFormatter::_android_icu_text_RelativeDateTimeFormatter_S_RelativeDateTimeUnitSwitchesValues) )  
		goto label_cond_7;
	return android::icu::text::RelativeDateTimeFormatter::_android_icu_text_RelativeDateTimeFormatter_S_RelativeDateTimeUnitSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::DAY->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_bf;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_bf
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::FRIDAY->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_bc;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_bc
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::HOUR->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b9;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_b9
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::MINUTE->ordinal()] = 0x4;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b6;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_b6
label_goto_32:
	try {
	//label_try_start_32:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::MONDAY->ordinal()] = 0x5;
	//label_try_end_3b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b4;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_32 .. :try_end_3b} :catch_b4
label_goto_3b:
	try {
	//label_try_start_3b:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::MONTH->ordinal()] = 0x6;
	//label_try_end_44:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b2;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3b .. :try_end_44} :catch_b2
label_goto_44:
	try {
	//label_try_start_44:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::QUARTER->ordinal()] = 0x7;
	//label_try_end_4d:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b0;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_44 .. :try_end_4d} :catch_b0
label_goto_4d:
	try {
	//label_try_start_4d:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::SATURDAY->ordinal()] = 0x8;
	//label_try_end_57:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ae;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_4d .. :try_end_57} :catch_ae
label_goto_57:
	try {
	//label_try_start_57:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::SECOND->ordinal()] = 0x9;
	//label_try_end_61:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ac;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_57 .. :try_end_61} :catch_ac
label_goto_61:
	try {
	//label_try_start_61:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::SUNDAY->ordinal()] = 0xa;
	//label_try_end_6b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_aa;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_61 .. :try_end_6b} :catch_aa
label_goto_6b:
	try {
	//label_try_start_6b:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::THURSDAY->ordinal()] = 0xb;
	//label_try_end_75:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a8;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_6b .. :try_end_75} :catch_a8
label_goto_75:
	try {
	//label_try_start_75:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::TUESDAY->ordinal()] = 0xc;
	//label_try_end_7f:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a6;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_75 .. :try_end_7f} :catch_a6
label_goto_7f:
	try {
	//label_try_start_7f:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::WEDNESDAY->ordinal()] = 0xd;
	//label_try_end_89:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a4;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_7f .. :try_end_89} :catch_a4
label_goto_89:
	try {
	//label_try_start_89:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::WEEK->ordinal()] = 0xe;
	//label_try_end_93:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a2;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_89 .. :try_end_93} :catch_a2
label_goto_93:
	try {
	//label_try_start_93:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::YEAR->ordinal()] = 0xf;
	//label_try_end_9d:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a0;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_93 .. :try_end_9d} :catch_a0
label_goto_9d:
	android::icu::text::RelativeDateTimeFormatter::_android_icu_text_RelativeDateTimeFormatter_S_RelativeDateTimeUnitSwitchesValues = cVar0;
	return cVar0;
label_catch_a0:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_9d;
label_catch_a2:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_93;
label_catch_a4:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_89;
label_catch_a6:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_7f;
label_catch_a8:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_75;
label_catch_aa:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_6b;
label_catch_ac:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_61;
label_catch_ae:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_57;
label_catch_b0:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_4d;
label_catch_b2:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_44;
label_catch_b4:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3b;
label_catch_b6:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_b9:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_bc:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_bf:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static synthetic -wrap0(Landroid/icu/impl/UResource$Key;)Landroid/icu/text/RelativeDateTimeFormatter$Direction;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> android::icu::text::RelativeDateTimeFormatter::_wrap0(std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	//    .param p0, "key"    # Landroid/icu/impl/UResource$Key;
	return android::icu::text::RelativeDateTimeFormatter::keyToDirection(key);

}
// .method static constructor <clinit>()V
void android::icu::text::RelativeDateTimeFormatter::static_cinit()
{
	
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Cache> cVar0;
	
	android::icu::text::RelativeDateTimeFormatter::fallbackCache = std::make_shared<std::vector<std::vector<android::icu::text::RelativeDateTimeFormatter_S_Style>>>(0x3);
	cVar0 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_Cache>(0x0);
	android::icu::text::RelativeDateTimeFormatter::cache = cVar0;
	return;

}
// .method private constructor <init>(Ljava/util/EnumMap;Ljava/util/EnumMap;Ljava/lang/String;Landroid/icu/text/PluralRules;Landroid/icu/text/NumberFormat;Landroid/icu/text/RelativeDateTimeFormatter$Style;Landroid/icu/text/DisplayContext;Landroid/icu/text/BreakIterator;Landroid/icu/util/ULocale;)V
android::icu::text::RelativeDateTimeFormatter::RelativeDateTimeFormatter(std::shared_ptr<java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Style,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Direction,java::lang::String>>>> qualitativeUnitMap,std::shared_ptr<java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Style,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit,std::vector<std::vector<java::lang::String>>>>> patternMap,std::shared_ptr<java::lang::String> combinedDateAndTime,std::shared_ptr<android::icu::text::PluralRules> pluralRules,std::shared_ptr<android::icu::text::NumberFormat> numberFormat,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> style,std::shared_ptr<android::icu::text::DisplayContext> capitalizationContext,std::shared_ptr<android::icu::text::BreakIterator> breakIterator,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar1;
	
	//    .param p3, "combinedDateAndTime"    # Ljava/lang/String;
	//    .param p4, "pluralRules"    # Landroid/icu/text/PluralRules;
	//    .param p5, "numberFormat"    # Landroid/icu/text/NumberFormat;
	//    .param p6, "style"    # Landroid/icu/text/RelativeDateTimeFormatter$Style;
	//    .param p7, "capitalizationContext"    # Landroid/icu/text/DisplayContext;
	//    .param p8, "breakIterator"    # Landroid/icu/text/BreakIterator;
	//    .param p9, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 449        value = {
	// 450            "(",
	// 451            "Ljava/util/EnumMap",
	// 452            "<",
	// 453            "Landroid/icu/text/RelativeDateTimeFormatter$Style;",
	// 454            "Ljava/util/EnumMap",
	// 455            "<",
	// 456            "Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;",
	// 457            "Ljava/util/EnumMap",
	// 458            "<",
	// 459            "Landroid/icu/text/RelativeDateTimeFormatter$Direction;",
	// 460            "Ljava/lang/String;",
	// 461            ">;>;>;",
	// 462            "Ljava/util/EnumMap",
	// 463            "<",
	// 464            "Landroid/icu/text/RelativeDateTimeFormatter$Style;",
	// 465            "Ljava/util/EnumMap",
	// 466            "<",
	// 467            "Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;",
	// 468            "[[",
	// 469            "Ljava/lang/String;",
	// 470            ">;>;",
	// 471            "Ljava/lang/String;",
	// 472            "Landroid/icu/text/PluralRules;",
	// 473            "Landroid/icu/text/NumberFormat;",
	// 474            "Landroid/icu/text/RelativeDateTimeFormatter$Style;",
	// 475            "Landroid/icu/text/DisplayContext;",
	// 476            "Landroid/icu/text/BreakIterator;",
	// 477            "Landroid/icu/util/ULocale;",
	// 478            ")V"
	// 479        }
	// 480    .end annotation
	//    .local p1, "qualitativeUnitMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Style;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;>;>;"
	//    .local p2, "patternMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Style;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;[[Ljava/lang/String;>;>;"
	// 486    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	?;
	this->styleToDateFormatSymbolsWidth = ?;
	this->qualitativeUnitMap = qualitativeUnitMap;
	this->patternMap = patternMap;
	this->combinedDateAndTime = combinedDateAndTime;
	this->pluralRules = pluralRules;
	this->numberFormat = numberFormat;
	this->style = style;
	if ( capitalizationContext->type() == android::icu::text::DisplayContext_S_Type::CAPITALIZATION )
		goto label_cond_2a;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(capitalizationContext->toString());
	// throw
	throw cVar0;
	// 540    .line 734
label_cond_2a:
	this->capitalizationContext = capitalizationContext;
	this->breakIterator = breakIterator;
	this->locale = locale;
	cVar1 = std::make_shared<android::icu::text::DateFormatSymbols>(locale);
	this->dateFormatSymbols = cVar1;
	return;

}
// .method private adjustForContext(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RelativeDateTimeFormatter::adjustForContext(std::shared_ptr<java::lang::String> originalFormattedString)
{
	
	std::shared_ptr<android::icu::text::BreakIterator> cVar0;
	
	//    .param p1, "originalFormattedString"    # Ljava/lang/String;
	if ( !(this->breakIterator) )  
		goto label_cond_b;
	if ( originalFormattedString->length() )     
		goto label_cond_c;
label_cond_b:
	return originalFormattedString;
	// 583    .line 703
label_cond_c:
	if ( ( android::icu::lang::UCharacter::isLowerCase(android::icu::lang::UCharacter::codePointAt(originalFormattedString, 0x0)) ^ 0x1) )     
		goto label_cond_b;
	cVar0 = this->breakIterator;
	cVar0->monitor_enter();
	try {
	//label_try_start_1b:
	//label_try_end_24:
	}
	catch (...){
		goto label_catchall_27;
	}
	//    .catchall {:try_start_1b .. :try_end_24} :catchall_27
	cVar0->monitor_exit();
	return android::icu::lang::UCharacter::toTitleCase(this->locale, originalFormattedString, this->breakIterator, 0x300);
	// 624    .line 706
label_catchall_27:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method private getAbsoluteUnitString(Landroid/icu/text/RelativeDateTimeFormatter$Style;Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;Landroid/icu/text/RelativeDateTimeFormatter$Direction;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RelativeDateTimeFormatter::getAbsoluteUnitString(std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> style,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> unit,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> direction)
{
	
	std::shared_ptr<java::util::EnumMap> unitMap;
	std::shared_ptr<java::util::EnumMap> dirMap;
	std::shared_ptr<java::lang::String> result;
	std::shared_ptr<java::lang::Object> style;
	
	//    .param p1, "style"    # Landroid/icu/text/RelativeDateTimeFormatter$Style;
	//    .param p2, "unit"    # Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;
	//    .param p3, "direction"    # Landroid/icu/text/RelativeDateTimeFormatter$Direction;
label_cond_1:
	unitMap = this->qualitativeUnitMap->get(style);
	unitMap->checkCast("java::util::EnumMap");
	//    .local v2, "unitMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;>;"
	if ( !(unitMap) )  
		goto label_cond_1c;
	dirMap = unitMap->get(unit);
	dirMap->checkCast("java::util::EnumMap");
	//    .local v0, "dirMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;"
	if ( !(dirMap) )  
		goto label_cond_1c;
	result = dirMap->get(direction);
	result->checkCast("java::lang::String");
	//    .local v1, "result":Ljava/lang/String;
	if ( !(result) )  
		goto label_cond_1c;
	return result;
	// 681    .line 655
	// 682    .end local v0    # "dirMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;"
	// 683    .end local v1    # "result":Ljava/lang/String;
label_cond_1c:
	style = android::icu::text::RelativeDateTimeFormatter::fallbackCache[style->ordinal()];
	if ( style )     
		goto label_cond_1;
	return 0x0;

}
// .method public static getInstance()Landroid/icu/text/RelativeDateTimeFormatter;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter> android::icu::text::RelativeDateTimeFormatter::getInstance()
{
	
	return android::icu::text::RelativeDateTimeFormatter::getInstance(android::icu::util::ULocale::getDefault(android::icu::util::ULocale::getDefault(android::icu::util::ULocale::getDefault(android::icu::util::ULocale::getDefault({const[class].FS-Param}), 0x0, android::icu::text::RelativeDateTimeFormatter_S_Style::LONG, android::icu::text::DisplayContext::CAPITALIZATION_NONE), 0x0, android::icu::text::RelativeDateTimeFormatter_S_Style::LONG, android::icu::text::DisplayContext::CAPITALIZATION_NONE), 0x0, android::icu::text::RelativeDateTimeFormatter_S_Style::LONG, android::icu::text::DisplayContext::CAPITALIZATION_NONE), 0x0, android::icu::text::RelativeDateTimeFormatter_S_Style::LONG, android::icu::text::DisplayContext::CAPITALIZATION_NONE);

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/RelativeDateTimeFormatter;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter> android::icu::text::RelativeDateTimeFormatter::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::RelativeDateTimeFormatter::getInstance(locale, 0x0, android::icu::text::RelativeDateTimeFormatter_S_Style::LONG, android::icu::text::DisplayContext::CAPITALIZATION_NONE);

}
// .method public static getInstance(Landroid/icu/util/ULocale;Landroid/icu/text/NumberFormat;)Landroid/icu/text/RelativeDateTimeFormatter;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter> android::icu::text::RelativeDateTimeFormatter::getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::NumberFormat> nf)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "nf"    # Landroid/icu/text/NumberFormat;
	return android::icu::text::RelativeDateTimeFormatter::getInstance(locale, nf, android::icu::text::RelativeDateTimeFormatter_S_Style::LONG, android::icu::text::DisplayContext::CAPITALIZATION_NONE);

}
// .method public static getInstance(Landroid/icu/util/ULocale;Landroid/icu/text/NumberFormat;Landroid/icu/text/RelativeDateTimeFormatter$Style;Landroid/icu/text/DisplayContext;)Landroid/icu/text/RelativeDateTimeFormatter;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter> android::icu::text::RelativeDateTimeFormatter::getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::NumberFormat> cVar2,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> style,std::shared_ptr<android::icu::text::DisplayContext> capitalizationContext)
{
	
	std::shared_ptr<android::icu::text::BreakIterator> cVar5;
	int cVar1;
	std::shared_ptr<java::util::EnumMap> data;
	std::shared_ptr<java::lang::Object> cVar2;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "nf"    # Landroid/icu/text/NumberFormat;
	//    .param p2, "style"    # Landroid/icu/text/RelativeDateTimeFormatter$Style;
	//    .param p3, "capitalizationContext"    # Landroid/icu/text/DisplayContext;
	cVar5 = 0x0;
	cVar1 = 0x2;
	data = android::icu::text::RelativeDateTimeFormatter::cache->get(locale);
	//    .local v10, "data":Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeFormatterData;
	if ( cVar2 )     
		goto label_cond_33;
	cVar2 = android::icu::text::NumberFormat::getInstance(locale);
label_goto_e:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	if ( capitalizationContext != android::icu::text::DisplayContext::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE )
		goto label_cond_2b;
	cVar5 = android::icu::text::BreakIterator::getSentenceInstance(locale);
label_cond_2b:
	cVar3 = std::make_shared<android::icu::text::RelativeDateTimeFormatter>(data->qualitativeUnitMap, data->relUnitPatternMap, android::icu::impl::SimpleFormatterImpl::compileToStringMinMaxArguments(data->dateTimePattern, cVar4, cVar1, cVar1), android::icu::text::PluralRules::forLocale(locale), cVar2, style, capitalizationContext, cVar5, locale);
	return cVar3;
	// 837    .line 416
label_cond_33:
	cVar2 = cVar2->clone();
	//    .end local p1    # "nf":Landroid/icu/text/NumberFormat;
	cVar2->checkCast("android::icu::text::NumberFormat");
	//    .restart local p1    # "nf":Landroid/icu/text/NumberFormat;
	goto label_goto_e;

}
// .method public static getInstance(Ljava/util/Locale;)Landroid/icu/text/RelativeDateTimeFormatter;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter> android::icu::text::RelativeDateTimeFormatter::getInstance(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	return android::icu::text::RelativeDateTimeFormatter::getInstance(android::icu::util::ULocale::forLocale(locale));

}
// .method public static getInstance(Ljava/util/Locale;Landroid/icu/text/NumberFormat;)Landroid/icu/text/RelativeDateTimeFormatter;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter> android::icu::text::RelativeDateTimeFormatter::getInstance(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::NumberFormat> nf)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	//    .param p1, "nf"    # Landroid/icu/text/NumberFormat;
	return android::icu::text::RelativeDateTimeFormatter::getInstance(android::icu::util::ULocale::forLocale(locale), nf);

}
// .method private getRelativeUnitPattern(Landroid/icu/text/RelativeDateTimeFormatter$Style;Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;ILandroid/icu/impl/StandardPlural;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RelativeDateTimeFormatter::getRelativeUnitPattern(std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> style,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> unit,int pastFutureIndex,std::shared_ptr<android::icu::impl::StandardPlural> pluralForm)
{
	
	int pluralIndex;
	std::shared_ptr<java::util::EnumMap> unitMap;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> spfCompiledPatterns;
	std::shared_ptr<java::lang::Object> style;
	
	//    .param p1, "style"    # Landroid/icu/text/RelativeDateTimeFormatter$Style;
	//    .param p2, "unit"    # Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;
	//    .param p3, "pastFutureIndex"    # I
	//    .param p4, "pluralForm"    # Landroid/icu/impl/StandardPlural;
	pluralIndex = pluralForm->ordinal();
	//    .local v0, "pluralIndex":I
label_cond_5:
	unitMap = this->patternMap->get(style);
	unitMap->checkCast("java::util::EnumMap");
	//    .local v2, "unitMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;[[Ljava/lang/String;>;"
	if ( !(unitMap) )  
		goto label_cond_22;
	spfCompiledPatterns = unitMap->get(unit);
	spfCompiledPatterns->checkCast("std::vector<std::vector<java::lang::String>>");
	//    .local v1, "spfCompiledPatterns":[[Ljava/lang/String;
	if ( !(spfCompiledPatterns) )  
		goto label_cond_22;
	if ( !(spfCompiledPatterns[pastFutureIndex][pluralIndex]) )  
		goto label_cond_22;
	return spfCompiledPatterns[pastFutureIndex][pluralIndex];
	// 940    .line 768
	// 941    .end local v1    # "spfCompiledPatterns":[[Ljava/lang/String;
label_cond_22:
	style = android::icu::text::RelativeDateTimeFormatter::fallbackCache[style->ordinal()];
	if ( style )     
		goto label_cond_5;
	return 0x0;

}
// .method private getRelativeUnitPluralPattern(Landroid/icu/text/RelativeDateTimeFormatter$Style;Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;ILandroid/icu/impl/StandardPlural;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RelativeDateTimeFormatter::getRelativeUnitPluralPattern(std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> style,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> unit,int pastFutureIndex,std::shared_ptr<android::icu::impl::StandardPlural> pluralForm)
{
	
	std::shared_ptr<java::lang::String> formatter;
	
	//    .param p1, "style"    # Landroid/icu/text/RelativeDateTimeFormatter$Style;
	//    .param p2, "unit"    # Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;
	//    .param p3, "pastFutureIndex"    # I
	//    .param p4, "pluralForm"    # Landroid/icu/impl/StandardPlural;
	if ( pluralForm == android::icu::impl::StandardPlural::OTHER )
		goto label_cond_b;
	formatter = this->getRelativeUnitPattern(style, unit, pastFutureIndex, pluralForm);
	//    .local v0, "formatter":Ljava/lang/String;
	if ( !(formatter) )  
		goto label_cond_b;
	return formatter;
	// 982    .line 748
	// 983    .end local v0    # "formatter":Ljava/lang/String;
label_cond_b:
	return this->getRelativeUnitPattern(style, unit, pastFutureIndex, android::icu::impl::StandardPlural::OTHER);

}
// .method private static keyToDirection(Landroid/icu/impl/UResource$Key;)Landroid/icu/text/RelativeDateTimeFormatter$Direction;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> android::icu::text::RelativeDateTimeFormatter::keyToDirection(std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	//    .param p0, "key"    # Landroid/icu/impl/UResource$Key;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("-2")))) )  
		goto label_cond_c;
	return android::icu::text::RelativeDateTimeFormatter_S_Direction::LAST_2;
	// 1013    .line 823
label_cond_c:
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("-1")))) )  
		goto label_cond_18;
	return android::icu::text::RelativeDateTimeFormatter_S_Direction::LAST;
	// 1028    .line 826
label_cond_18:
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("0")))) )  
		goto label_cond_24;
	return android::icu::text::RelativeDateTimeFormatter_S_Direction::THIS;
	// 1043    .line 829
label_cond_24:
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("1")))) )  
		goto label_cond_30;
	return android::icu::text::RelativeDateTimeFormatter_S_Direction::NEXT;
	// 1058    .line 832
label_cond_30:
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("2")))) )  
		goto label_cond_3c;
	return android::icu::text::RelativeDateTimeFormatter_S_Direction::NEXT_2;
	// 1073    .line 835
label_cond_3c:
	return 0x0;

}
// .method public combineDateAndTime(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RelativeDateTimeFormatter::combineDateAndTime(std::shared_ptr<java::lang::String> relativeDateString,std::shared_ptr<java::lang::String> timeString)
{
	
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar0;
	
	//    .param p1, "relativeDateString"    # Ljava/lang/String;
	//    .param p2, "timeString"    # Ljava/lang/String;
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(0x2);
	cVar0[0x0] = timeString;
	cVar0[0x1] = relativeDateString;
	return android::icu::impl::SimpleFormatterImpl::formatCompiledPattern(this->combinedDateAndTime, cVar0);

}
// .method public format(DLandroid/icu/text/RelativeDateTimeFormatter$Direction;Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RelativeDateTimeFormatter::format(double quantity,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> direction,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> unit)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::text::NumberFormat> cVar1;
	std::shared_ptr<java::lang::StringBuffer> formatStr;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar2;
	
	//    .param p1, "quantity"    # D
	//    .param p3, "direction"    # Landroid/icu/text/RelativeDateTimeFormatter$Direction;
	//    .param p4, "unit"    # Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;
	if ( direction == android::icu::text::RelativeDateTimeFormatter_S_Direction::LAST )
		goto label_cond_11;
	if ( direction == android::icu::text::RelativeDateTimeFormatter_S_Direction::NEXT )
		goto label_cond_11;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("direction must be NEXT or LAST")));
	// throw
	throw cVar0;
	// 1138    .line 462
label_cond_11:
	if ( direction != android::icu::text::RelativeDateTimeFormatter_S_Direction::NEXT )
		goto label_cond_42;
	//    .local v3, "pastFutureIndex":I
label_goto_16:
	cVar1 = this->numberFormat;
	cVar1->monitor_enter();
	try {
	//label_try_start_19:
	formatStr = std::make_shared<java::lang::StringBuffer>();
	//    .local v1, "formatStr":Ljava/lang/StringBuffer;
	//    .local v0, "fieldPosition":Landroid/icu/impl/DontCareFieldPosition;
	//    .local v4, "pluralForm":Landroid/icu/impl/StandardPlural;
	//    .local v2, "formatter":Ljava/lang/String;
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(0x1);
	cVar2[0x0] = formatStr;
	//label_try_end_3b:
	}
	catch (...){
		goto label_catchall_44;
	}
	//    .catchall {:try_start_19 .. :try_end_3b} :catchall_44
	//    .local v5, "result":Ljava/lang/String;
	cVar1->monitor_exit();
	return this->adjustForContext(android::icu::impl::SimpleFormatterImpl::formatCompiledPattern(this->getRelativeUnitPluralPattern(this->style, unit, pastFutureIndex, android::icu::text::QuantityFormatter::selectPlural(java::lang::Double::valueOf(quantity), this->numberFormat, this->pluralRules, formatStr, android::icu::impl::DontCareFieldPosition::INSTANCE)), cVar2));
	// 1213    .line 462
	// 1214    .end local v0    # "fieldPosition":Landroid/icu/impl/DontCareFieldPosition;
	// 1215    .end local v1    # "formatStr":Ljava/lang/StringBuffer;
	// 1216    .end local v2    # "formatter":Ljava/lang/String;
	// 1217    .end local v3    # "pastFutureIndex":I
	// 1218    .end local v4    # "pluralForm":Landroid/icu/impl/StandardPlural;
	// 1219    .end local v5    # "result":Ljava/lang/String;
label_cond_42:
	//    .restart local v3    # "pastFutureIndex":I
	goto label_goto_16;
	// 1226    .line 466
label_catchall_44:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;

}
// .method public format(DLandroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RelativeDateTimeFormatter::format(double offset,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> unit)
{
	
	double cVar0;
	int useNumeric;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> direction;
	double offsetx100;
	std::shared_ptr<java::lang::String> result;
	
	//    .param p1, "offset"    # D
	//    .param p3, "unit"    # Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;
	cVar0 = 0x3fe0000000000000L;
	useNumeric = 0x1;
	//    .local v6, "useNumeric":Z
	direction = android::icu::text::RelativeDateTimeFormatter_S_Direction::THIS;
	//    .local v1, "direction":Landroid/icu/text/RelativeDateTimeFormatter$Direction;
	if ( (offset < -0x3fff333333333333L) <= 0 )
		goto label_cond_27;
	if ( (offset > 0x4000cccccccccccdL) >= 0 )
		goto label_cond_27;
	offsetx100 = (offset *  0x4059000000000000L);
	//    .local v4, "offsetx100":D
	if ( (offsetx100 > 0x0) >= 0 )
		goto label_cond_46;
	//    .local v2, "intoffsetx100":I
label_goto_24:
	// switch
	{
	auto item = ( intoffsetx100 );
	if (item == -0xc8) goto label_sswitch_4a;
	if (item == -0x64) goto label_sswitch_4e;
	if (item == 0x0) goto label_sswitch_52;
	if (item == 0x64) goto label_sswitch_54;
	if (item == 0xc8) goto label_sswitch_58;
	}
	//    .end local v2    # "intoffsetx100":I
	//    .end local v4    # "offsetx100":D
label_cond_27:
label_goto_27:
	//    .local v0, "absunit":Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;
	// switch
	{
	auto item = ( android::icu::text::RelativeDateTimeFormatter::-getandroid-icu-text-RelativeDateTimeFormatter$RelativeDateTimeUnitSwitchesValues({const[class].FS-Param})[unit->ordinal()] );
	if (item == 1) goto label_pswitch_68;
	if (item == 2) goto label_pswitch_7a;
	if (item == 3) goto label_pswitch_36;
	if (item == 4) goto label_pswitch_36;
	if (item == 5) goto label_pswitch_6e;
	if (item == 6) goto label_pswitch_62;
	if (item == 7) goto label_pswitch_5f;
	if (item == 8) goto label_pswitch_7d;
	if (item == 9) goto label_pswitch_80;
	if (item == 10) goto label_pswitch_6b;
	if (item == 11) goto label_pswitch_77;
	if (item == 12) goto label_pswitch_71;
	if (item == 13) goto label_pswitch_74;
	if (item == 14) goto label_pswitch_65;
	if (item == 15) goto label_pswitch_5c;
	}
label_pswitch_36:
	useNumeric = 0x1;
label_goto_37:
	if ( useNumeric )     
		goto label_cond_89;
	result = this->format(direction, android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::NOW);
	//    .local v3, "result":Ljava/lang/String;
	if ( !(result) )  
		goto label_cond_89;
	if ( result->length() <= 0 )
		goto label_cond_89;
	return result;
	// 1333    .line 585
	// 1334    .end local v0    # "absunit":Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;
	// 1335    .end local v3    # "result":Ljava/lang/String;
	// 1336    .restart local v4    # "offsetx100":D
label_cond_46:
	//    .restart local v2    # "intoffsetx100":I
	goto label_goto_24;
	// 1345    .line 587
label_sswitch_4a:
	android::icu::text::RelativeDateTimeFormatter_S_Direction::LAST_2;
	0x0;
	goto label_goto_27;
	// 1353    .line 588
label_sswitch_4e:
	android::icu::text::RelativeDateTimeFormatter_S_Direction::LAST;
	0x0;
	goto label_goto_27;
	// 1361    .line 589
label_sswitch_52:
	0x0;
	goto label_goto_27;
	// 1367    .line 590
label_sswitch_54:
	android::icu::text::RelativeDateTimeFormatter_S_Direction::NEXT;
	0x0;
	goto label_goto_27;
	// 1375    .line 591
label_sswitch_58:
	android::icu::text::RelativeDateTimeFormatter_S_Direction::NEXT_2;
	0x0;
	goto label_goto_27;
	// 1383    .line 597
	// 1384    .end local v2    # "intoffsetx100":I
	// 1385    .end local v4    # "offsetx100":D
	// 1386    .restart local v0    # "absunit":Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;
label_pswitch_5c:
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::YEAR;
	goto label_goto_37;
	// 1392    .line 598
label_pswitch_5f:
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::QUARTER;
	goto label_goto_37;
	// 1398    .line 599
label_pswitch_62:
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::MONTH;
	goto label_goto_37;
	// 1404    .line 600
label_pswitch_65:
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::WEEK;
	goto label_goto_37;
	// 1410    .line 601
label_pswitch_68:
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::DAY;
	goto label_goto_37;
	// 1416    .line 602
label_pswitch_6b:
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::SUNDAY;
	goto label_goto_37;
	// 1422    .line 603
label_pswitch_6e:
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::MONDAY;
	goto label_goto_37;
	// 1428    .line 604
label_pswitch_71:
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::TUESDAY;
	goto label_goto_37;
	// 1434    .line 605
label_pswitch_74:
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::WEDNESDAY;
	goto label_goto_37;
	// 1440    .line 606
label_pswitch_77:
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::THURSDAY;
	goto label_goto_37;
	// 1446    .line 607
label_pswitch_7a:
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::FRIDAY;
	goto label_goto_37;
	// 1452    .line 608
label_pswitch_7d:
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::SATURDAY;
	goto label_goto_37;
	// 1458    .line 610
label_pswitch_80:
	if ( direction != android::icu::text::RelativeDateTimeFormatter_S_Direction::THIS )
		goto label_cond_87;
	android::icu::text::RelativeDateTimeFormatter_S_Direction::PLAIN;
	goto label_goto_37;
	// 1469    .line 616
label_cond_87:
	useNumeric = 0x1;
	goto label_goto_37;
	// 1476    .line 630
label_cond_89:
	return this->formatNumeric(offset, unit);
	// 1484    .line 586
	// 1485    :sswitch_data_8e
	// 1486    .sparse-switch
	// 1487        -0xc8 -> :sswitch_4a
	// 1488        -0x64 -> :sswitch_4e
	// 1489        0x0 -> :sswitch_52
	// 1490        0x64 -> :sswitch_54
	// 1491        0xc8 -> :sswitch_58
	// 1492    .end sparse-switch
	// 1494    .line 596
	// 1495    :pswitch_data_a4
	// 1496    .packed-switch 0x1
	// 1497        :pswitch_68
	// 1498        :pswitch_7a
	// 1499        :pswitch_36
	// 1500        :pswitch_36
	// 1501        :pswitch_6e
	// 1502        :pswitch_62
	// 1503        :pswitch_5f
	// 1504        :pswitch_7d
	// 1505        :pswitch_80
	// 1506        :pswitch_6b
	// 1507        :pswitch_77
	// 1508        :pswitch_71
	// 1509        :pswitch_74
	// 1510        :pswitch_65
	// 1511        :pswitch_5c
	// 1512    .end packed-switch

}
// .method public format(Landroid/icu/text/RelativeDateTimeFormatter$Direction;Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RelativeDateTimeFormatter::format(std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> direction,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> unit)
{
	
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::String> result;
	
	//    .param p1, "direction"    # Landroid/icu/text/RelativeDateTimeFormatter$Direction;
	//    .param p2, "unit"    # Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;
	cVar2 = 0x0;
	if ( unit != android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::NOW )
		goto label_cond_12;
	if ( direction == android::icu::text::RelativeDateTimeFormatter_S_Direction::PLAIN )
		goto label_cond_12;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NOW can only accept direction PLAIN.")));
	// throw
	throw cVar1;
	// 1541    .line 543
label_cond_12:
	if ( direction != android::icu::text::RelativeDateTimeFormatter_S_Direction::PLAIN )
		goto label_cond_55;
	if ( android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::SUNDAY->ordinal() >  unit->ordinal() )
		goto label_cond_55;
	if ( unit->ordinal() >  android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::SATURDAY->ordinal() )
		goto label_cond_55;
	//    .local v0, "dateSymbolsDayOrdinal":I
	//    .local v1, "dayNames":[Ljava/lang/String;
	result = this->dateFormatSymbols->getWeekdays(0x1, this->styleToDateFormatSymbolsWidth[this->style->ordinal()])[( (unit->ordinal() -  android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::SUNDAY->ordinal()) + 0x1)];
	//    .end local v0    # "dateSymbolsDayOrdinal":I
	//    .end local v1    # "dayNames":[Ljava/lang/String;
	//    .local v2, "result":Ljava/lang/String;
label_goto_4e:
	if ( !(result) )  
		goto label_cond_54;
	cVar2 = this->adjustForContext(result);
label_cond_54:
	return cVar2;
	// 1627    .line 553
	// 1628    .end local v2    # "result":Ljava/lang/String;
label_cond_55:
	//    .restart local v2    # "result":Ljava/lang/String;
	goto label_goto_4e;

}
// .method public formatNumeric(DLandroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RelativeDateTimeFormatter::formatNumeric(double cVar1,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> unit)
{
	
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> relunit;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	double cVar1;
	std::shared_ptr<java::lang::String> result;
	
	//    .param p1, "offset"    # D
	//    .param p3, "unit"    # Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;
	relunit = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::SECONDS;
	//    .local v1, "relunit":Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;
	// switch
	{
	auto item = ( android::icu::text::RelativeDateTimeFormatter::-getandroid-icu-text-RelativeDateTimeFormatter$RelativeDateTimeUnitSwitchesValues({const[class].FS-Param})[unit->ordinal()] );
	if (item == 1) goto label_pswitch_35;
	if (item == 2) goto label_pswitch_f;
	if (item == 3) goto label_pswitch_38;
	if (item == 4) goto label_pswitch_3b;
	if (item == 5) goto label_pswitch_f;
	if (item == 6) goto label_pswitch_2f;
	if (item == 7) goto label_pswitch_2c;
	if (item == 8) goto label_pswitch_f;
	if (item == 9) goto label_pswitch_1a;
	if (item == 10) goto label_pswitch_f;
	if (item == 11) goto label_pswitch_f;
	if (item == 12) goto label_pswitch_f;
	if (item == 13) goto label_pswitch_f;
	if (item == 14) goto label_pswitch_32;
	if (item == 15) goto label_pswitch_18;
	}
label_pswitch_f:
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("formatNumeric does not currently support RelativeUnit.SUNDAY..SATURDAY")));
	// throw
	throw cVar0;
	// 1673    .line 503
label_pswitch_18:
	relunit = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::YEARS;
label_goto_1a:
label_pswitch_1a:
	//    .local v0, "direction":Landroid/icu/text/RelativeDateTimeFormatter$Direction;
	if ( (cVar1 > 0x0) >= 0 )
		goto label_cond_25;
	cVar1 = (0.0 - cVar1);
label_cond_25:
	result = this->format(cVar1, android::icu::text::RelativeDateTimeFormatter_S_Direction::NEXT, relunit);
	//    .local v2, "result":Ljava/lang/String;
	if ( !(result) )  
		goto label_cond_3e;
	//    .end local v2    # "result":Ljava/lang/String;
label_goto_2b:
	return result;
	// 1710    .line 504
	// 1711    .end local v0    # "direction":Landroid/icu/text/RelativeDateTimeFormatter$Direction;
label_pswitch_2c:
	relunit = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::QUARTERS;
	goto label_goto_1a;
	// 1717    .line 505
label_pswitch_2f:
	relunit = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::MONTHS;
	goto label_goto_1a;
	// 1723    .line 506
label_pswitch_32:
	relunit = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::WEEKS;
	goto label_goto_1a;
	// 1729    .line 507
label_pswitch_35:
	relunit = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::DAYS;
	goto label_goto_1a;
	// 1735    .line 508
label_pswitch_38:
	relunit = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::HOURS;
	goto label_goto_1a;
	// 1741    .line 509
label_pswitch_3b:
	relunit = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::MINUTES;
	goto label_goto_1a;
	// 1747    .line 520
	// 1748    .restart local v0    # "direction":Landroid/icu/text/RelativeDateTimeFormatter$Direction;
	// 1749    .restart local v2    # "result":Ljava/lang/String;
label_cond_3e:
	result = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_2b;
	// 1755    .line 502
	// 1756    :pswitch_data_42
	// 1757    .packed-switch 0x1
	// 1758        :pswitch_35
	// 1759        :pswitch_f
	// 1760        :pswitch_38
	// 1761        :pswitch_3b
	// 1762        :pswitch_f
	// 1763        :pswitch_2f
	// 1764        :pswitch_2c
	// 1765        :pswitch_f
	// 1766        :pswitch_1a
	// 1767        :pswitch_f
	// 1768        :pswitch_f
	// 1769        :pswitch_f
	// 1770        :pswitch_f
	// 1771        :pswitch_32
	// 1772        :pswitch_18
	// 1773    .end packed-switch

}
// .method public getCapitalizationContext()Landroid/icu/text/DisplayContext;
std::shared_ptr<android::icu::text::DisplayContext> android::icu::text::RelativeDateTimeFormatter::getCapitalizationContext()
{
	
	return this->capitalizationContext;

}
// .method public getFormatStyle()Landroid/icu/text/RelativeDateTimeFormatter$Style;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> android::icu::text::RelativeDateTimeFormatter::getFormatStyle()
{
	
	return this->style;

}
// .method public getNumberFormat()Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::RelativeDateTimeFormatter::getNumberFormat()
{
	
	std::shared_ptr<android::icu::text::NumberFormat> cVar0;
	std::shared_ptr<android::icu::text::NumberFormat> cVar1;
	
	cVar0 = this->numberFormat;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	cVar1 = this->numberFormat->clone();
	cVar1->checkCast("android::icu::text::NumberFormat");
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_3 .. :try_end_b} :catchall_d
	cVar0->monitor_exit();
	return cVar1;
	// 1821    .line 680
label_catchall_d:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}


