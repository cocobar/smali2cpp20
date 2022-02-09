// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CurrencyFormat.smali
#include "java2ctype.h"
#include "android.icu.text.CurrencyFormat.h"
#include "android.icu.text.MeasureFormat_S_FormatWidth.h"
#include "android.icu.text.MeasureFormat.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.CurrencyAmount.h"
#include "android.icu.util.Measure.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Locale.h"

static android::icu::text::CurrencyFormat::serialVersionUID = -0xcedfd71ed74263aL;
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::text::CurrencyFormat::CurrencyFormat(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	// 023    invoke-direct {p0}, Landroid/icu/text/MeasureFormat;-><init>()V
	this->setLocale(locale, locale);
	this->mf = android::icu::text::MeasureFormat::getInstance(locale, android::icu::text::MeasureFormat_S_FormatWidth::WIDE);
	this->fmt = android::icu::text::NumberFormat::getCurrencyInstance(locale->toLocale());
	return;

}
// .method private readResolve()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::CurrencyFormat::readResolve()
{
	
	std::shared_ptr<android::icu::text::CurrencyFormat> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 055        value = {
	// 056            Ljava/io/ObjectStreamException;
	// 057        }
	// 058    .end annotation
	cVar0 = std::make_shared<android::icu::text::CurrencyFormat>(this->fmt->getLocale(android::icu::util::ULocale::ACTUAL_LOCALE));
	return cVar0;

}
// .method private writeReplace()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::CurrencyFormat::writeReplace()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 080        value = {
	// 081            Ljava/io/ObjectStreamException;
	// 082        }
	// 083    .end annotation
	return this->mf->toCurrencyProxy();

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::CurrencyFormat::clone()
{
	
	std::shared_ptr<android::icu::text::CurrencyFormat> result;
	std::shared_ptr<android::icu::text::NumberFormat> cVar0;
	
	result = this->clone();
	result->checkCast("android::icu::text::CurrencyFormat");
	//    .local v0, "result":Landroid/icu/text/CurrencyFormat;
	cVar0 = this->fmt->clone();
	cVar0->checkCast("android::icu::text::NumberFormat");
	result->fmt = cVar0;
	return result;

}
// .method public format(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::CurrencyFormat::format(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::util::CurrencyAmount> currency;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	if ( obj->instanceOf("android::icu::util::CurrencyAmount") )     
		goto label_cond_26;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid type: ")))->append(obj->getClass()->getName())->toString());
	// throw
	throw cVar0;
label_cond_26:
	currency = obj;
	currency->checkCast("android::icu::util::CurrencyAmount");
	//    .local v0, "currency":Landroid/icu/util/CurrencyAmount;
	this->fmt->setCurrency(currency->getCurrency());
	return this->fmt->format(currency->getNumber(), toAppendTo, pos);

}
// .method public varargs formatMeasures(Ljava/lang/StringBuilder;Ljava/text/FieldPosition;[Landroid/icu/util/Measure;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::CurrencyFormat::formatMeasures(std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition,std::shared_ptr<std::vector<android::icu::util::Measure>> measures)
{
	
	//    .param p1, "appendTo"    # Ljava/lang/StringBuilder;
	//    .param p2, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p3, "measures"    # [Landroid/icu/util/Measure;
	return this->mf->formatMeasures(appendTo, fieldPosition, measures);

}
// .method public getNumberFormat()Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::CurrencyFormat::getNumberFormat()
{
	
	return this->mf->getNumberFormat();

}
// .method public getWidth()Landroid/icu/text/MeasureFormat$FormatWidth;
std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> android::icu::text::CurrencyFormat::getWidth()
{
	
	return this->mf->getWidth();

}
// .method public parseObject(Ljava/lang/String;Ljava/text/ParsePosition;)Landroid/icu/util/CurrencyAmount;
std::shared_ptr<android::icu::util::CurrencyAmount> android::icu::text::CurrencyFormat::parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	return this->fmt->parseCurrency(source, pos);

}


