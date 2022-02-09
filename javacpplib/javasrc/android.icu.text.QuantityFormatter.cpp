// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\QuantityFormatter.smali
#include "java2ctype.h"
#include "android.icu.impl.SimpleFormatterImpl.h"
#include "android.icu.impl.StandardPlural.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.text.QuantityFormatter.h"
#include "android.icu.text.SimpleFormatter.h"
#include "android.icu.text.UFieldPosition.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Number.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.FieldPosition.h"
#include "java.text.Format_S_Field.h"

static android::icu::text::QuantityFormatter::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::text::QuantityFormatter::static_cinit()
{
	
	android::icu::text::QuantityFormatter::_assertionsDisabled = ( android::icu::text::QuantityFormatter()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>()V
android::icu::text::QuantityFormatter::QuantityFormatter()
{
	
	// 038    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->templates = std::make_shared<std::vector<std::vector<android::icu::text::SimpleFormatter>>>(android::icu::impl::StandardPlural::COUNT);
	return;

}
// .method public static format(Ljava/lang/String;Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Ljava/text/FieldPosition;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::QuantityFormatter::format(std::shared_ptr<java::lang::String> compiledPattern,std::shared_ptr<java::lang::CharSequence> value,std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<int[]>> offsets;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar2;
	
	//    .param p0, "compiledPattern"    # Ljava/lang/String;
	//    .param p1, "value"    # Ljava/lang/CharSequence;
	//    .param p2, "appendTo"    # Ljava/lang/StringBuilder;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	cVar0 = 0x1;
	cVar1 = 0x0;
	offsets = std::make_shared<std::vector<int[]>>(cVar0);
	//    .local v0, "offsets":[I
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(cVar0);
	cVar2[cVar1] = value;
	android::icu::impl::SimpleFormatterImpl::formatAndAppend(compiledPattern, appendTo, offsets, cVar2);
	if ( pos->getBeginIndex() )     
		goto label_cond_17;
	if ( !(pos->getEndIndex()) )  
		goto label_cond_2f;
label_cond_17:
	if ( offsets[cVar1] < 0 ) 
		goto label_cond_30;
	pos->setBeginIndex((pos->getBeginIndex() +  offsets[cVar1]));
	pos->setEndIndex((pos->getEndIndex() +  offsets[cVar1]));
label_cond_2f:
label_goto_2f:
	return appendTo;
	// 121    .line 135
label_cond_30:
	pos->setBeginIndex(cVar1);
	pos->setEndIndex(cVar1);
	goto label_goto_2f;

}
// .method public static selectPlural(DLandroid/icu/text/NumberFormat;Landroid/icu/text/PluralRules;)Landroid/icu/impl/StandardPlural;
std::shared_ptr<android::icu::impl::StandardPlural> android::icu::text::QuantityFormatter::selectPlural(double number,std::shared_ptr<android::icu::text::NumberFormat> numberFormat,std::shared_ptr<android::icu::text::PluralRules> rules)
{
	
	//    .param p0, "number"    # D
	//    .param p2, "numberFormat"    # Landroid/icu/text/NumberFormat;
	//    .param p3, "rules"    # Landroid/icu/text/PluralRules;
	if ( !(numberFormat->instanceOf("android::icu::text::DecimalFormat")) )  
		goto label_cond_13;
	numberFormat->checkCast("android::icu::text::DecimalFormat");
	//    .end local p2    # "numberFormat":Landroid/icu/text/NumberFormat;
	//    .local v0, "pluralKeyword":Ljava/lang/String;
label_goto_e:
	return android::icu::impl::StandardPlural::orOtherFromString(pluralKeyword);
	// 164    .line 100
	// 165    .end local v0    # "pluralKeyword":Ljava/lang/String;
	// 166    .restart local p2    # "numberFormat":Landroid/icu/text/NumberFormat;
label_cond_13:
	//    .restart local v0    # "pluralKeyword":Ljava/lang/String;
	goto label_goto_e;

}
// .method public static selectPlural(Ljava/lang/Number;Landroid/icu/text/NumberFormat;Landroid/icu/text/PluralRules;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Landroid/icu/impl/StandardPlural;
std::shared_ptr<android::icu::impl::StandardPlural> android::icu::text::QuantityFormatter::selectPlural(std::shared_ptr<java::lang::Number> number,std::shared_ptr<android::icu::text::NumberFormat> fmt,std::shared_ptr<android::icu::text::PluralRules> rules,std::shared_ptr<java::lang::StringBuffer> formattedNumber,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<android::icu::text::UFieldPosition> fpos;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> fd;
	
	//    .param p0, "number"    # Ljava/lang/Number;
	//    .param p1, "fmt"    # Landroid/icu/text/NumberFormat;
	//    .param p2, "rules"    # Landroid/icu/text/PluralRules;
	//    .param p3, "formattedNumber"    # Ljava/lang/StringBuffer;
	//    .param p4, "pos"    # Ljava/text/FieldPosition;
	fpos = std::make_shared<android::icu::text::UFieldPosition>(pos->getFieldAttribute(), pos->getField());
	//    .local v6, "fpos":Landroid/icu/text/UFieldPosition;
	fmt->format(number, formattedNumber, fpos);
	fd = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(number->doubleValue(), fpos->getCountVisibleFractionDigits(), fpos->getFractionDigits());
	//    .local v0, "fd":Landroid/icu/text/PluralRules$FixedDecimal;
	//    .local v7, "pluralKeyword":Ljava/lang/String;
	pos->setBeginIndex(fpos->getBeginIndex());
	pos->setEndIndex(fpos->getEndIndex());
	return android::icu::impl::StandardPlural::orOtherFromString(rules->select(fd));

}
// .method public addIfAbsent(Ljava/lang/CharSequence;Ljava/lang/String;)V
void android::icu::text::QuantityFormatter::addIfAbsent(std::shared_ptr<java::lang::CharSequence> variant,std::shared_ptr<java::lang::String> template)
{
	
	int idx;
	
	//    .param p1, "variant"    # Ljava/lang/CharSequence;
	//    .param p2, "template"    # Ljava/lang/String;
	idx = android::icu::impl::StandardPlural::indexFromString(variant);
	//    .local v0, "idx":I
	if ( !(this->templates[idx]) )  
		goto label_cond_b;
	return;
	// 275    .line 47
label_cond_b:
	this->templates[idx] = android::icu::text::SimpleFormatter::compileMinMaxArguments(template, 0x0, 0x1);
	return;

}
// .method public format(DLandroid/icu/text/NumberFormat;Landroid/icu/text/PluralRules;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::QuantityFormatter::format(double number,std::shared_ptr<android::icu::text::NumberFormat> numberFormat,std::shared_ptr<android::icu::text::PluralRules> pluralRules)
{
	
	std::shared_ptr<android::icu::text::SimpleFormatter> formatter;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar1;
	
	//    .param p1, "number"    # D
	//    .param p3, "numberFormat"    # Landroid/icu/text/NumberFormat;
	//    .param p4, "pluralRules"    # Landroid/icu/text/PluralRules;
	//    .local v0, "formatStr":Ljava/lang/String;
	//    .local v2, "p":Landroid/icu/impl/StandardPlural;
	formatter = this->templates[android::icu::text::QuantityFormatter::selectPlural(number, numberFormat, pluralRules)->ordinal()];
	//    .local v1, "formatter":Landroid/icu/text/SimpleFormatter;
	if ( formatter )     
		goto label_cond_24;
	formatter = this->templates[android::icu::impl::StandardPlural::OTHER_INDEX];
	if ( android::icu::text::QuantityFormatter::_assertionsDisabled )     
		goto label_cond_24;
	if ( formatter )     
		goto label_cond_24;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 345    .line 73
label_cond_24:
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(0x1);
	cVar1[0x0] = numberFormat->format(number);
	return formatter->format(cVar1);

}
// .method public getByVariant(Ljava/lang/CharSequence;)Landroid/icu/text/SimpleFormatter;
std::shared_ptr<android::icu::text::SimpleFormatter> android::icu::text::QuantityFormatter::getByVariant(std::shared_ptr<java::lang::CharSequence> variant)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int idx;
	std::shared_ptr<android::icu::text::SimpleFormatter> template;
	
	//    .param p1, "variant"    # Ljava/lang/CharSequence;
	if ( android::icu::text::QuantityFormatter::_assertionsDisabled )     
		goto label_cond_10;
	if ( this->isValid() )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 384    .line 83
label_cond_10:
	idx = android::icu::impl::StandardPlural::indexOrOtherIndexFromString(variant);
	//    .local v0, "idx":I
	template = this->templates[idx];
	//    .local v1, "template":Landroid/icu/text/SimpleFormatter;
	if ( template )     
		goto label_cond_24;
	if ( idx == android::icu::impl::StandardPlural::OTHER_INDEX )
		goto label_cond_24;
	//    .end local v1    # "template":Landroid/icu/text/SimpleFormatter;
label_cond_24:
	return template;

}
// .method public isValid()Z
bool android::icu::text::QuantityFormatter::isValid()
{
	
	bool cVar0;
	
	if ( !(this->templates[android::icu::impl::StandardPlural::OTHER_INDEX]) )  
		goto label_cond_a;
	cVar0 = 0x1;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}


