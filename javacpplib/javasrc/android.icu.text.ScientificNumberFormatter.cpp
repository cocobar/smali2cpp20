// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ScientificNumberFormatter.smali
#include "java2ctype.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.ScientificNumberFormatter_S_MarkupStyle.h"
#include "android.icu.text.ScientificNumberFormatter_S_Style.h"
#include "android.icu.text.ScientificNumberFormatter_S_SuperscriptStyle.h"
#include "android.icu.text.ScientificNumberFormatter.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.AttributedCharacterIterator.h"

static android::icu::text::ScientificNumberFormatter::SUPER_SCRIPT;
// .method static constructor <clinit>()V
void android::icu::text::ScientificNumberFormatter::static_cinit()
{
	
	std::shared_ptr<android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle>(0x0);
	android::icu::text::ScientificNumberFormatter::SUPER_SCRIPT = cVar0;
	return;

}
// .method private constructor <init>(Landroid/icu/text/DecimalFormat;Ljava/lang/String;Landroid/icu/text/ScientificNumberFormatter$Style;)V
android::icu::text::ScientificNumberFormatter::ScientificNumberFormatter(std::shared_ptr<android::icu::text::DecimalFormat> decimalFormat,std::shared_ptr<java::lang::String> preExponent,std::shared_ptr<android::icu::text::ScientificNumberFormatter_S_Style> style)
{
	
	//    .param p1, "decimalFormat"    # Landroid/icu/text/DecimalFormat;
	//    .param p2, "preExponent"    # Ljava/lang/String;
	//    .param p3, "style"    # Landroid/icu/text/ScientificNumberFormatter$Style;
	// 054    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fmt = decimalFormat;
	this->preExponent = preExponent;
	this->style = style;
	return;

}
// .method private static getInstance(Landroid/icu/text/DecimalFormat;Landroid/icu/text/ScientificNumberFormatter$Style;)Landroid/icu/text/ScientificNumberFormatter;
std::shared_ptr<android::icu::text::ScientificNumberFormatter> android::icu::text::ScientificNumberFormatter::getInstance(std::shared_ptr<android::icu::text::DecimalFormat> decimalFormat,std::shared_ptr<android::icu::text::ScientificNumberFormatter_S_Style> style)
{
	
	std::shared_ptr<android::icu::text::ScientificNumberFormatter> cVar0;
	std::shared_ptr<android::icu::text::DecimalFormat> cVar1;
	
	//    .param p0, "decimalFormat"    # Landroid/icu/text/DecimalFormat;
	//    .param p1, "style"    # Landroid/icu/text/ScientificNumberFormatter$Style;
	//    .local v0, "dfs":Landroid/icu/text/DecimalFormatSymbols;
	cVar1 = decimalFormat->clone();
	cVar1->checkCast("android::icu::text::DecimalFormat");
	cVar0 = std::make_shared<android::icu::text::ScientificNumberFormatter>(cVar1, android::icu::text::ScientificNumberFormatter::getPreExponent(decimalFormat->getDecimalFormatSymbols()), style);
	return cVar0;

}
// .method private static getInstanceForLocale(Landroid/icu/util/ULocale;Landroid/icu/text/ScientificNumberFormatter$Style;)Landroid/icu/text/ScientificNumberFormatter;
std::shared_ptr<android::icu::text::ScientificNumberFormatter> android::icu::text::ScientificNumberFormatter::getInstanceForLocale(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::ScientificNumberFormatter_S_Style> style)
{
	
	std::shared_ptr<android::icu::text::DecimalFormat> decimalFormat;
	std::shared_ptr<android::icu::text::ScientificNumberFormatter> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "style"    # Landroid/icu/text/ScientificNumberFormatter$Style;
	decimalFormat = android::icu::text::DecimalFormat::getScientificInstance(locale);
	decimalFormat->checkCast("android::icu::text::DecimalFormat");
	//    .local v0, "decimalFormat":Landroid/icu/text/DecimalFormat;
	cVar0 = std::make_shared<android::icu::text::ScientificNumberFormatter>(decimalFormat, android::icu::text::ScientificNumberFormatter::getPreExponent(decimalFormat->getDecimalFormatSymbols()), style);
	return cVar0;

}
// .method public static getMarkupInstance(Landroid/icu/text/DecimalFormat;Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/ScientificNumberFormatter;
std::shared_ptr<android::icu::text::ScientificNumberFormatter> android::icu::text::ScientificNumberFormatter::getMarkupInstance(std::shared_ptr<android::icu::text::DecimalFormat> df,std::shared_ptr<java::lang::String> beginMarkup,std::shared_ptr<java::lang::String> endMarkup)
{
	
	std::shared_ptr<android::icu::text::ScientificNumberFormatter_S_MarkupStyle> cVar0;
	
	//    .param p0, "df"    # Landroid/icu/text/DecimalFormat;
	//    .param p1, "beginMarkup"    # Ljava/lang/String;
	//    .param p2, "endMarkup"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::text::ScientificNumberFormatter_S_MarkupStyle>(beginMarkup, endMarkup);
	return android::icu::text::ScientificNumberFormatter::getInstance(df, cVar0);

}
// .method public static getMarkupInstance(Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/ScientificNumberFormatter;
std::shared_ptr<android::icu::text::ScientificNumberFormatter> android::icu::text::ScientificNumberFormatter::getMarkupInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> beginMarkup,std::shared_ptr<java::lang::String> endMarkup)
{
	
	std::shared_ptr<android::icu::text::ScientificNumberFormatter_S_MarkupStyle> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "beginMarkup"    # Ljava/lang/String;
	//    .param p2, "endMarkup"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::text::ScientificNumberFormatter_S_MarkupStyle>(beginMarkup, endMarkup);
	return android::icu::text::ScientificNumberFormatter::getInstanceForLocale(locale, cVar0);

}
// .method private static getPreExponent(Landroid/icu/text/DecimalFormatSymbols;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ScientificNumberFormatter::getPreExponent(std::shared_ptr<android::icu::text::DecimalFormatSymbols> dfs)
{
	
	std::shared_ptr<java::lang::StringBuilder> preExponent;
	auto digits;
	
	//    .param p0, "dfs"    # Landroid/icu/text/DecimalFormatSymbols;
	preExponent = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "preExponent":Ljava/lang/StringBuilder;
	preExponent->append(dfs->getExponentMultiplicationSign());
	digits = dfs->getDigits();
	//    .local v0, "digits":[C
	preExponent->append(digits[0x1])->append(digits[0x0]);
	return preExponent->toString();

}
// .method public static getSuperscriptInstance(Landroid/icu/text/DecimalFormat;)Landroid/icu/text/ScientificNumberFormatter;
std::shared_ptr<android::icu::text::ScientificNumberFormatter> android::icu::text::ScientificNumberFormatter::getSuperscriptInstance(std::shared_ptr<android::icu::text::DecimalFormat> df)
{
	
	//    .param p0, "df"    # Landroid/icu/text/DecimalFormat;
	return android::icu::text::ScientificNumberFormatter::getInstance(df, android::icu::text::ScientificNumberFormatter::SUPER_SCRIPT);

}
// .method public static getSuperscriptInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/ScientificNumberFormatter;
std::shared_ptr<android::icu::text::ScientificNumberFormatter> android::icu::text::ScientificNumberFormatter::getSuperscriptInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::ScientificNumberFormatter::getInstanceForLocale(locale, android::icu::text::ScientificNumberFormatter::SUPER_SCRIPT);

}
// .method public format(Ljava/lang/Object;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ScientificNumberFormatter::format(std::shared_ptr<java::lang::Object> number)
{
	
	std::shared_ptr<android::icu::text::DecimalFormat> cVar0;
	
	//    .param p1, "number"    # Ljava/lang/Object;
	cVar0 = this->fmt;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	//label_try_end_10:
	}
	catch (...){
		goto label_catchall_13;
	}
	//    .catchall {:try_start_3 .. :try_end_10} :catchall_13
	cVar0->monitor_exit();
	return this->style->format(this->fmt->formatToCharacterIterator(number), this->preExponent);
	// 287    .line 107
label_catchall_13:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}


