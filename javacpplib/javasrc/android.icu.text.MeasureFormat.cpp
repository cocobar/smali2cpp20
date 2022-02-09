// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.DontCareFieldPosition.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.PluralRulesLoader.h"
#include "android.icu.impl.SimpleCache.h"
#include "android.icu.impl.SimpleFormatterImpl.h"
#include "android.icu.impl.StandardPlural.h"
#include "android.icu.text.CurrencyFormat.h"
#include "android.icu.text.DateFormat_S_Field.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.ListFormatter_S_FormattedListBuilder.h"
#include "android.icu.text.ListFormatter_S_Style.h"
#include "android.icu.text.ListFormatter.h"
#include "android.icu.text.MeasureFormat_S_FormatWidth.h"
#include "android.icu.text.MeasureFormat_S_ImmutableNumberFormat.h"
#include "android.icu.text.MeasureFormat_S_MeasureFormatData.h"
#include "android.icu.text.MeasureFormat_S_MeasureProxy.h"
#include "android.icu.text.MeasureFormat_S_NumericFormatters.h"
#include "android.icu.text.MeasureFormat_S_UnitDataSink.h"
#include "android.icu.text.MeasureFormat.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.NumberingSystem.h"
#include "android.icu.text.PluralRanges.h"
#include "android.icu.text.PluralRules_S_Factory.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.text.QuantityFormatter.h"
#include "android.icu.text.SimpleDateFormat.h"
#include "android.icu.text.UFieldPosition.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.CurrencyAmount.h"
#include "android.icu.util.Measure.h"
#include "android.icu.util.MeasureUnit.h"
#include "android.icu.util.TimeUnit.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Double.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Integer.h"
#include "java.lang.Math.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.text.FieldPosition.h"
#include "java.text.Format_S_Field.h"
#include "java.text.ParsePosition.h"
#include "java.util.Arrays.h"
#include "java.util.Collection.h"
#include "java.util.Date.h"
#include "java.util.EnumMap.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

static android::icu::text::MeasureFormat::CURRENCY_FORMAT = 0x2;
static android::icu::text::MeasureFormat::MEASURE_FORMAT = 0x0;
static android::icu::text::MeasureFormat::TIME_UNIT_FORMAT = 0x1;
static android::icu::text::MeasureFormat::hmsTo012;
static android::icu::text::MeasureFormat::localeIdToRangeFormat;
static android::icu::text::MeasureFormat::localeMeasureFormatData;
static android::icu::text::MeasureFormat::localeToNumericDurationFormatters;
static android::icu::text::MeasureFormat::serialVersionUID = -0x63abaa69b1b00340L;
// .method static synthetic -wrap0(I)Landroid/icu/text/MeasureFormat$FormatWidth;
std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> android::icu::text::MeasureFormat::_wrap0(int ordinal)
{
	
	//    .param p0, "ordinal"    # I
	return android::icu::text::MeasureFormat::fromFormatWidthOrdinal(ordinal);

}
// .method static constructor <clinit>()V
void android::icu::text::MeasureFormat::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::SimpleCache> cVar0;
	std::shared_ptr<android::icu::impl::SimpleCache> cVar1;
	std::shared_ptr<java::util::HashMap> cVar2;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar3;
	
	cVar0 = std::make_shared<android::icu::impl::SimpleCache>();
	android::icu::text::MeasureFormat::localeMeasureFormatData = cVar0;
	cVar1 = std::make_shared<android::icu::impl::SimpleCache>();
	android::icu::text::MeasureFormat::localeToNumericDurationFormatters = cVar1;
	cVar2 = std::make_shared<java::util::HashMap>();
	android::icu::text::MeasureFormat::hmsTo012 = cVar2;
	android::icu::text::MeasureFormat::hmsTo012->put(android::icu::util::MeasureUnit::HOUR, java::lang::Integer::valueOf(0x0));
	android::icu::text::MeasureFormat::hmsTo012->put(android::icu::util::MeasureUnit::MINUTE, java::lang::Integer::valueOf(0x1));
	android::icu::text::MeasureFormat::hmsTo012->put(android::icu::util::MeasureUnit::SECOND, java::lang::Integer::valueOf(0x2));
	cVar3 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	android::icu::text::MeasureFormat::localeIdToRangeFormat = cVar3;
	return;

}
// .method constructor <init>()V
android::icu::text::MeasureFormat::MeasureFormat()
{
	
	std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureFormatData> cVar0;
	
	cVar0 = 0x0;
	// 193    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->cache = cVar0;
	this->formatWidth = cVar0;
	this->numberFormat = cVar0;
	this->rules = cVar0;
	this->numericFormatters = cVar0;
	this->currencyFormat = cVar0;
	this->integerFormat = cVar0;
	return;

}
// .method private constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/text/MeasureFormat$MeasureFormatData;Landroid/icu/text/MeasureFormat$FormatWidth;Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;Landroid/icu/text/PluralRules;Landroid/icu/text/MeasureFormat$NumericFormatters;Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;)V
android::icu::text::MeasureFormat::MeasureFormat(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureFormatData> data,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> formatWidth,std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> format,std::shared_ptr<android::icu::text::PluralRules> rules,std::shared_ptr<android::icu::text::MeasureFormat_S_NumericFormatters> formatters,std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> currencyFormat,std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> integerFormat)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "data"    # Landroid/icu/text/MeasureFormat$MeasureFormatData;
	//    .param p3, "formatWidth"    # Landroid/icu/text/MeasureFormat$FormatWidth;
	//    .param p4, "format"    # Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;
	//    .param p5, "rules"    # Landroid/icu/text/PluralRules;
	//    .param p6, "formatters"    # Landroid/icu/text/MeasureFormat$NumericFormatters;
	//    .param p7, "currencyFormat"    # Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;
	//    .param p8, "integerFormat"    # Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;
	// 233    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->setLocale(locale, locale);
	this->cache = data;
	this->formatWidth = formatWidth;
	this->numberFormat = format;
	this->rules = rules;
	this->numericFormatters = formatters;
	this->currencyFormat = currencyFormat;
	this->integerFormat = integerFormat;
	return;

}
// .method private appendReplacingCurrency(Ljava/lang/String;Landroid/icu/util/Currency;Landroid/icu/impl/StandardPlural;Ljava/lang/StringBuilder;)V
void android::icu::text::MeasureFormat::appendReplacingCurrency(std::shared_ptr<java::lang::String> affix,std::shared_ptr<android::icu::util::Currency> unit,std::shared_ptr<android::icu::impl::StandardPlural> resolvedPlural,std::shared_ptr<java::lang::StringBuilder> result)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> replacement;
	int pos;
	int currentStyle;
	
	//    .param p1, "affix"    # Ljava/lang/String;
	//    .param p2, "unit"    # Landroid/icu/util/Currency;
	//    .param p3, "resolvedPlural"    # Landroid/icu/impl/StandardPlural;
	//    .param p4, "result"    # Ljava/lang/StringBuilder;
	cVar0 = 0x0;
	replacement = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u00a4"));
	//    .local v2, "replacement":Ljava/lang/String;
	pos = affix->indexOf(replacement);
	//    .local v1, "pos":I
	if ( pos >= 0 )
		goto label_cond_11;
	replacement = std::make_shared<java::lang::String>(std::make_shared<char[]>("XXX"));
	pos = affix->indexOf(replacement);
label_cond_11:
	if ( pos >= 0 )
		goto label_cond_17;
	result->append(affix);
label_goto_16:
	return;
	// 305    .line 455
label_cond_17:
	result->append(affix->substring(cVar0, pos));
	currentStyle = this->formatWidth->getCurrencyStyle();
	//    .local v0, "currentStyle":I
	if ( currentStyle != 0x5 )
		goto label_cond_3b;
	result->append(unit->getCurrencyCode());
label_goto_2e:
	result->append(affix->substring((replacement->length() +  pos)));
	goto label_goto_16;
	// 349    .line 461
label_cond_3b:
	if ( currentStyle != 0x1 )
		goto label_cond_57;
label_goto_4a:
	result->append(unit->getName(android::icu::text::MeasureFormat_S_ImmutableNumberFormat::-get0(this->currencyFormat)->getLocale(android::icu::util::ULocale::ACTUAL_LOCALE), cVar0, resolvedPlural->getKeyword(), 0x0));
	goto label_goto_2e;
	// 385    .line 462
label_cond_57:
	cVar0 = 0x2;
	goto label_goto_4a;

}
// .method private formatMeasure(Landroid/icu/util/Measure;Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MeasureFormat::formatMeasure(std::shared_ptr<android::icu::util::Measure> measure,std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> nf)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "measure"    # Landroid/icu/util/Measure;
	//    .param p2, "nf"    # Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return this->formatMeasure(measure, nf, cVar0, android::icu::impl::DontCareFieldPosition::INSTANCE)->toString();

}
// .method private formatMeasure(Landroid/icu/util/Measure;Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;Ljava/lang/StringBuilder;Ljava/text/FieldPosition;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::MeasureFormat::formatMeasure(std::shared_ptr<android::icu::util::Measure> measure,std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> nf,std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition)
{
	
	std::shared_ptr<java::lang::Number> n;
	std::shared_ptr<android::icu::util::Currency> unit;
	std::shared_ptr<android::icu::util::CurrencyAmount> cVar0;
	std::shared_ptr<java::lang::StringBuffer> cVar1;
	std::shared_ptr<java::lang::StringBuffer> formattedNumber;
	
	//    .param p1, "measure"    # Landroid/icu/util/Measure;
	//    .param p2, "nf"    # Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;
	//    .param p3, "appendTo"    # Ljava/lang/StringBuilder;
	//    .param p4, "fieldPosition"    # Ljava/text/FieldPosition;
	n = measure->getNumber();
	//    .local v2, "n":Ljava/lang/Number;
	unit = measure->getUnit();
	//    .local v4, "unit":Landroid/icu/util/MeasureUnit;
	if ( !(unit->instanceOf("android::icu::util::Currency")) )  
		goto label_cond_23;
	unit->checkCast("android::icu::util::Currency");
	//    .end local v4    # "unit":Landroid/icu/util/MeasureUnit;
	cVar0 = std::make_shared<android::icu::util::CurrencyAmount>(n, unit);
	cVar1 = std::make_shared<java::lang::StringBuffer>();
	return appendTo->append(this->currencyFormat->format(cVar0, cVar1, fieldPosition));
	// 471    .line 1059
	// 472    .restart local v4    # "unit":Landroid/icu/util/MeasureUnit;
label_cond_23:
	formattedNumber = std::make_shared<java::lang::StringBuffer>();
	//    .local v0, "formattedNumber":Ljava/lang/StringBuffer;
	//    .local v3, "pluralForm":Landroid/icu/impl/StandardPlural;
	//    .local v1, "formatter":Ljava/lang/String;
	return android::icu::text::QuantityFormatter::format(this->getPluralFormatter(unit, this->formatWidth, android::icu::text::QuantityFormatter::selectPlural(n, android::icu::text::MeasureFormat_S_ImmutableNumberFormat::-get0(nf), this->rules, formattedNumber, fieldPosition)->ordinal()), formattedNumber, appendTo, fieldPosition);

}
// .method private varargs formatMeasuresSlowTrack(Landroid/icu/text/ListFormatter;Ljava/lang/StringBuilder;Ljava/text/FieldPosition;[Landroid/icu/util/Measure;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::MeasureFormat::formatMeasuresSlowTrack(std::shared_ptr<android::icu::text::ListFormatter> listFormatter,std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition,std::shared_ptr<std::vector<android::icu::util::Measure>> measures)
{
	
	int cVar0;
	std::shared<std::vector<std::vector<java::lang::String>>> results;
	std::shared_ptr<java::text::FieldPosition> fpos;
	int fieldPositionFoundIndex;
	int i;
	std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> nf;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::text::ListFormatter_S_FormattedListBuilder> builder;
	
	//    .param p1, "listFormatter"    # Landroid/icu/text/ListFormatter;
	//    .param p2, "appendTo"    # Ljava/lang/StringBuilder;
	//    .param p3, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p4, "measures"    # [Landroid/icu/util/Measure;
	cVar0 = -0x1;
	results = std::make_shared<std::vector<std::vector<java::lang::String>>>(measures->size());
	//    .local v5, "results":[Ljava/lang/String;
	fpos = std::make_shared<java::text::FieldPosition>(fieldPosition->getFieldAttribute(), fieldPosition->getField());
	//    .local v2, "fpos":Ljava/text/FieldPosition;
	fieldPositionFoundIndex = -0x1;
	//    .local v1, "fieldPositionFoundIndex":I
	i = 0x0;
	//    .local v3, "i":I
label_goto_13:
	if ( i >= measures->size() )
		goto label_cond_4c;
	if ( i != ( measures->size() + -0x1) )
		goto label_cond_40;
	nf = this->numberFormat;
	//    .local v4, "nf":Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;
label_goto_1d:
	if ( fieldPositionFoundIndex != cVar0 )
		goto label_cond_43;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	results[i] = this->formatMeasure(measures[i], nf, cVar1, fpos)->toString();
	if ( fpos->getBeginIndex() )     
		goto label_cond_3c;
	if ( !(fpos->getEndIndex()) )  
		goto label_cond_3d;
label_cond_3c:
	fieldPositionFoundIndex = i;
label_cond_3d:
label_goto_3d:
	i = ( i + 0x1);
	goto label_goto_13;
	// 612    .line 1173
	// 613    .end local v4    # "nf":Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;
label_cond_40:
	//    .restart local v4    # "nf":Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;
	goto label_goto_1d;
	// 620    .line 1180
label_cond_43:
	results[i] = this->formatMeasure(measures[i], nf);
	goto label_goto_3d;
	// 632    .line 1184
	// 633    .end local v4    # "nf":Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;
label_cond_4c:
	builder = listFormatter->format(java::util::Arrays::asList(results), fieldPositionFoundIndex);
	//    .local v0, "builder":Landroid/icu/text/ListFormatter$FormattedListBuilder;
	if ( builder->getOffset() == cVar0 )
		goto label_cond_7c;
	fieldPosition->setBeginIndex(((fpos->getBeginIndex() +  builder->getOffset()) +  appendTo->length()));
	fieldPosition->setEndIndex(((fpos->getEndIndex() +  builder->getOffset()) +  appendTo->length()));
label_cond_7c:
	return appendTo->append(builder->toString());

}
// .method private formatNumeric(Ljava/util/Date;Landroid/icu/text/DateFormat;Landroid/icu/text/DateFormat$Field;Ljava/lang/Number;Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::MeasureFormat::formatNumeric(std::shared_ptr<java::util::Date> duration,std::shared_ptr<android::icu::text::DateFormat> formatter,std::shared_ptr<android::icu::text::DateFormat_S_Field> smallestField,std::shared_ptr<java::lang::Number> smallestAmount,std::shared_ptr<java::lang::StringBuilder> appendTo)
{
	
	int cVar0;
	std::shared_ptr<java::text::FieldPosition> intFieldPosition;
	std::shared_ptr<java::lang::StringBuffer> cVar1;
	std::shared_ptr<java::lang::CharSequence> smallestAmountFormatted;
	std::shared_ptr<java::lang::IllegalStateException> cVar2;
	std::shared_ptr<java::text::FieldPosition> smallestFieldPosition;
	std::shared_ptr<java::lang::StringBuffer> cVar3;
	std::shared_ptr<java::lang::CharSequence> draft;
	
	//    .param p1, "duration"    # Ljava/util/Date;
	//    .param p2, "formatter"    # Landroid/icu/text/DateFormat;
	//    .param p3, "smallestField"    # Landroid/icu/text/DateFormat$Field;
	//    .param p4, "smallestAmount"    # Ljava/lang/Number;
	//    .param p5, "appendTo"    # Ljava/lang/StringBuilder;
	cVar0 = 0x0;
	intFieldPosition = std::make_shared<java::text::FieldPosition>(cVar0);
	//    .local v1, "intFieldPosition":Ljava/text/FieldPosition;
	cVar1 = std::make_shared<java::lang::StringBuffer>();
	smallestAmountFormatted = this->numberFormat->format(smallestAmount, cVar1, intFieldPosition)->toString();
	//    .local v2, "smallestAmountFormatted":Ljava/lang/String;
	if ( intFieldPosition->getBeginIndex() )     
		goto label_cond_27;
	if ( intFieldPosition->getEndIndex() )     
		goto label_cond_27;
	cVar2 = std::make_shared<java::lang::IllegalStateException>();
	// throw
	throw cVar2;
	// 757    .line 1316
label_cond_27:
	smallestFieldPosition = std::make_shared<java::text::FieldPosition>(smallestField);
	//    .local v3, "smallestFieldPosition":Ljava/text/FieldPosition;
	cVar3 = std::make_shared<java::lang::StringBuffer>();
	draft = formatter->format(duration, cVar3, smallestFieldPosition)->toString();
	//    .local v0, "draft":Ljava/lang/String;
	if ( smallestFieldPosition->getBeginIndex() )     
		goto label_cond_45;
	if ( !(smallestFieldPosition->getEndIndex()) )  
		goto label_cond_75;
label_cond_45:
	appendTo->append(draft, cVar0, smallestFieldPosition->getBeginIndex());
	appendTo->append(smallestAmountFormatted, cVar0, intFieldPosition->getBeginIndex());
	appendTo->append(draft, smallestFieldPosition->getBeginIndex(), smallestFieldPosition->getEndIndex());
	appendTo->append(smallestAmountFormatted, intFieldPosition->getEndIndex(), smallestAmountFormatted->length());
	appendTo->append(draft, smallestFieldPosition->getEndIndex(), draft->length());
label_goto_74:
	return appendTo;
	// 849    .line 1344
label_cond_75:
	appendTo->append(draft);
	goto label_goto_74;

}
// .method private formatNumeric([Ljava/lang/Number;Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::MeasureFormat::formatNumeric(std::shared_ptr<std::vector<java::lang::Number>> hms,std::shared_ptr<java::lang::StringBuilder> appendable)
{
	
	int startIndex;
	int endIndex;
	int i;
	std::shared_ptr<java::util::Date> d;
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .param p1, "hms"    # [Ljava/lang/Number;
	//    .param p2, "appendable"    # Ljava/lang/StringBuilder;
	startIndex = -0x1;
	//    .local v10, "startIndex":I
	endIndex = -0x1;
	//    .local v6, "endIndex":I
	i = 0x0;
	//    .local v7, "i":I
label_goto_3:
	if ( i >= hms->size() )
		goto label_cond_1a;
	if ( !(hms[i]) )  
		goto label_cond_12;
	if ( startIndex != -0x1 )
		goto label_cond_f;
	startIndex = i;
label_cond_f:
label_goto_f:
	i = ( i + 0x1);
	goto label_goto_3;
	// 902    .line 1247
label_cond_12:
	hms[i] = java::lang::Integer::valueOf(0x0);
	goto label_goto_f;
	// 914    .line 1251
label_cond_1a:
	//    .local v8, "millis":J
	d = std::make_shared<java::util::Date>((long long)(( ( ( ( ( java::lang::Math::floor(hms[0x0]->doubleValue()) * 0x404e000000000000L) + java::lang::Math::floor(hms[0x1]->doubleValue())) * 0x404e000000000000L) + java::lang::Math::floor(hms[0x2]->doubleValue())) * 0x408f400000000000L)));
	//    .local v1, "d":Ljava/util/Date;
	if ( startIndex )     
		goto label_cond_65;
	if ( endIndex != 0x2 )
		goto label_cond_65;
	return this->formatNumeric(d, this->numericFormatters->getHourMinuteSecond(), android::icu::text::DateFormat_S_Field::SECOND, hms[endIndex], appendable);
	// 1016    .line 1265
label_cond_65:
	if ( startIndex != 0x1 )
		goto label_cond_7c;
	if ( endIndex != 0x2 )
		goto label_cond_7c;
	return this->formatNumeric(d, this->numericFormatters->getMinuteSecond(), android::icu::text::DateFormat_S_Field::SECOND, hms[endIndex], appendable);
	// 1050    .line 1274
label_cond_7c:
	if ( startIndex )     
		goto label_cond_92;
	if ( endIndex != 0x1 )
		goto label_cond_92;
	return this->formatNumeric(d, this->numericFormatters->getHourMinute(), android::icu::text::DateFormat_S_Field::MINUTE, hms[endIndex], appendable);
	// 1082    .line 1282
label_cond_92:
	cVar0 = std::make_shared<java::lang::IllegalStateException>();
	// throw
	throw cVar0;

}
// .method private static fromFormatWidthOrdinal(I)Landroid/icu/text/MeasureFormat$FormatWidth;
std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> android::icu::text::MeasureFormat::fromFormatWidthOrdinal(int ordinal)
{
	
	auto values;
	
	//    .param p0, "ordinal"    # I
	values = android::icu::text::MeasureFormat_S_FormatWidth::values({const[class].FS-Param});
	//    .local v0, "values":[Landroid/icu/text/MeasureFormat$FormatWidth;
	if ( ordinal < 0 ) 
		goto label_cond_9;
	if ( ordinal <  values->size() )
		goto label_cond_c;
label_cond_9:
	return android::icu::text::MeasureFormat_S_FormatWidth::SHORT;
	// 1115    .line 1440
label_cond_c:
	return values[ordinal];

}
// .method public static getCurrencyFormat()Landroid/icu/text/MeasureFormat;
std::shared_ptr<android::icu::text::MeasureFormat> android::icu::text::MeasureFormat::getCurrencyFormat()
{
	
	return android::icu::text::MeasureFormat::getCurrencyFormat(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));

}
// .method public static getCurrencyFormat(Landroid/icu/util/ULocale;)Landroid/icu/text/MeasureFormat;
std::shared_ptr<android::icu::text::MeasureFormat> android::icu::text::MeasureFormat::getCurrencyFormat(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::CurrencyFormat> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::text::CurrencyFormat>(locale);
	return cVar0;

}
// .method public static getCurrencyFormat(Ljava/util/Locale;)Landroid/icu/text/MeasureFormat;
std::shared_ptr<android::icu::text::MeasureFormat> android::icu::text::MeasureFormat::getCurrencyFormat(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	return android::icu::text::MeasureFormat::getCurrencyFormat(android::icu::util::ULocale::forLocale(locale));

}
// .method private getFormatter(Landroid/icu/util/MeasureUnit;Landroid/icu/text/MeasureFormat$FormatWidth;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MeasureFormat::getFormatter(std::shared_ptr<android::icu::util::MeasureUnit> unit,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width,int index)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::String> pattern;
	std::shared_ptr<java::util::MissingResourceException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "unit"    # Landroid/icu/util/MeasureUnit;
	//    .param p2, "width"    # Landroid/icu/text/MeasureFormat$FormatWidth;
	//    .param p3, "index"    # I
	cVar0 = 0x0;
	pattern = this->getFormatterOrNull(unit, width, index);
	//    .local v0, "pattern":Ljava/lang/String;
	if ( pattern )     
		goto label_cond_37;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::util::MissingResourceException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("no formatting pattern for ")))->append(unit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", width ")))->append(width)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", index ")))->append(index)->toString(), cVar0, cVar0);
	// throw
	throw cVar1;
	// 1235    .line 992
label_cond_37:
	return pattern;

}
// .method private getFormatterOrNull(Landroid/icu/util/MeasureUnit;Landroid/icu/text/MeasureFormat$FormatWidth;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MeasureFormat::getFormatterOrNull(std::shared_ptr<android::icu::util::MeasureUnit> unit,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width,int index)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::util::Map> styleToPatterns;
	std::shared_ptr<std::vector<java::lang::String>> patterns;
	std::shared_ptr<java::lang::Object> fallbackWidth;
	
	//    .param p1, "unit"    # Landroid/icu/util/MeasureUnit;
	//    .param p2, "width"    # Landroid/icu/text/MeasureFormat$FormatWidth;
	//    .param p3, "index"    # I
	cVar0 = android::icu::text::MeasureFormat::getRegularWidth(width);
	styleToPatterns = this->cache->unitToStyleToPatterns->get(unit);
	styleToPatterns->checkCast("java::util::Map");
	//    .local v2, "styleToPatterns":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/text/MeasureFormat$FormatWidth;[Ljava/lang/String;>;"
	patterns = styleToPatterns->get(cVar0);
	patterns->checkCast("std::vector<java::lang::String>");
	//    .local v1, "patterns":[Ljava/lang/String;
	if ( !(patterns) )  
		goto label_cond_1e;
	if ( !(patterns[index]) )  
		goto label_cond_1e;
	return patterns[index];
	// 1286    .line 975
label_cond_1e:
	fallbackWidth = this->cache->widthFallback[cVar0->ordinal()];
	//    .local v0, "fallbackWidth":Landroid/icu/text/MeasureFormat$FormatWidth;
	if ( !(fallbackWidth) )  
		goto label_cond_39;
	patterns = styleToPatterns->get(fallbackWidth);
	//    .end local v1    # "patterns":[Ljava/lang/String;
	patterns->checkCast("std::vector<java::lang::String>");
	//    .restart local v1    # "patterns":[Ljava/lang/String;
	if ( !(patterns) )  
		goto label_cond_39;
	if ( !(patterns[index]) )  
		goto label_cond_39;
	return patterns[index];
	// 1323    .line 982
label_cond_39:
	return 0x0;

}
// .method public static getInstance(Landroid/icu/util/ULocale;Landroid/icu/text/MeasureFormat$FormatWidth;)Landroid/icu/text/MeasureFormat;
std::shared_ptr<android::icu::text::MeasureFormat> android::icu::text::MeasureFormat::getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> formatWidth)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "formatWidth"    # Landroid/icu/text/MeasureFormat$FormatWidth;
	return android::icu::text::MeasureFormat::getInstance(locale, formatWidth, android::icu::text::NumberFormat::getInstance(locale));

}
// .method public static getInstance(Landroid/icu/util/ULocale;Landroid/icu/text/MeasureFormat$FormatWidth;Landroid/icu/text/NumberFormat;)Landroid/icu/text/MeasureFormat;
std::shared_ptr<android::icu::text::MeasureFormat> android::icu::text::MeasureFormat::getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> formatWidth,std::shared_ptr<android::icu::text::NumberFormat> format)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureFormatData> data;
	std::shared_ptr<java::lang::Object> data;
	std::shared_ptr<android::icu::text::MeasureFormat_S_NumericFormatters> formatters;
	std::shared_ptr<java::lang::Object> formatters;
	std::shared_ptr<android::icu::text::NumberFormat> intFormat;
	std::shared_ptr<android::icu::text::MeasureFormat> cVar1;
	std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> cVar2;
	std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> cVar3;
	std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> cVar4;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "formatWidth"    # Landroid/icu/text/MeasureFormat$FormatWidth;
	//    .param p2, "format"    # Landroid/icu/text/NumberFormat;
	cVar0 = 0x0;
	//    .local v5, "rules":Landroid/icu/text/PluralRules;
	//    .local v6, "formatters":Landroid/icu/text/MeasureFormat$NumericFormatters;
	data = android::icu::text::MeasureFormat::localeMeasureFormatData->get(locale);
	data->checkCast("android::icu::text::MeasureFormat_S_MeasureFormatData");
	//    .local v2, "data":Landroid/icu/text/MeasureFormat$MeasureFormatData;
	if ( data )     
		goto label_cond_19;
	data = android::icu::text::MeasureFormat::loadLocaleData(locale);
	android::icu::text::MeasureFormat::localeMeasureFormatData->put(locale, data);
label_cond_19:
	if ( formatWidth != android::icu::text::MeasureFormat_S_FormatWidth::NUMERIC )
		goto label_cond_30;
	formatters = android::icu::text::MeasureFormat::localeToNumericDurationFormatters->get(locale);
	//    .end local v6    # "formatters":Landroid/icu/text/MeasureFormat$NumericFormatters;
	formatters->checkCast("android::icu::text::MeasureFormat_S_NumericFormatters");
	//    .local v6, "formatters":Landroid/icu/text/MeasureFormat$NumericFormatters;
	if ( formatters )     
		goto label_cond_30;
	formatters = android::icu::text::MeasureFormat::loadNumericFormatters(locale);
	android::icu::text::MeasureFormat::localeToNumericDurationFormatters->put(locale, formatters);
	//    .end local v6    # "formatters":Landroid/icu/text/MeasureFormat$NumericFormatters;
label_cond_30:
	intFormat = android::icu::text::NumberFormat::getInstance(locale);
	//    .local v9, "intFormat":Landroid/icu/text/NumberFormat;
	intFormat->setMaximumFractionDigits(cVar0);
	intFormat->setMinimumFractionDigits(cVar0);
	intFormat->setRoundingMode(0x1);
	cVar2 = std::make_shared<android::icu::text::MeasureFormat_S_ImmutableNumberFormat>(format);
	cVar3 = std::make_shared<android::icu::text::MeasureFormat_S_ImmutableNumberFormat>(android::icu::text::NumberFormat::getInstance(locale, formatWidth->getCurrencyStyle()));
	cVar4 = std::make_shared<android::icu::text::MeasureFormat_S_ImmutableNumberFormat>(intFormat);
	cVar1 = std::make_shared<android::icu::text::MeasureFormat>(locale, data, formatWidth, cVar2, android::icu::text::PluralRules::forLocale(locale), 0x0, cVar3, cVar4);
	return cVar1;

}
// .method public static getInstance(Ljava/util/Locale;Landroid/icu/text/MeasureFormat$FormatWidth;)Landroid/icu/text/MeasureFormat;
std::shared_ptr<android::icu::text::MeasureFormat> android::icu::text::MeasureFormat::getInstance(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> formatWidth)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	//    .param p1, "formatWidth"    # Landroid/icu/text/MeasureFormat$FormatWidth;
	return android::icu::text::MeasureFormat::getInstance(android::icu::util::ULocale::forLocale(locale), formatWidth);

}
// .method public static getInstance(Ljava/util/Locale;Landroid/icu/text/MeasureFormat$FormatWidth;Landroid/icu/text/NumberFormat;)Landroid/icu/text/MeasureFormat;
std::shared_ptr<android::icu::text::MeasureFormat> android::icu::text::MeasureFormat::getInstance(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> formatWidth,std::shared_ptr<android::icu::text::NumberFormat> format)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	//    .param p1, "formatWidth"    # Landroid/icu/text/MeasureFormat$FormatWidth;
	//    .param p2, "format"    # Landroid/icu/text/NumberFormat;
	return android::icu::text::MeasureFormat::getInstance(android::icu::util::ULocale::forLocale(locale), formatWidth, format);

}
// .method private getPerFormatter(Landroid/icu/text/MeasureFormat$FormatWidth;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MeasureFormat::getPerFormatter(std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::lang::String> perPattern;
	std::shared_ptr<java::lang::Object> fallbackWidth;
	std::shared_ptr<java::util::MissingResourceException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "width"    # Landroid/icu/text/MeasureFormat$FormatWidth;
	cVar0 = 0x0;
	cVar1 = android::icu::text::MeasureFormat::getRegularWidth(width);
	perPattern = this->cache->styleToPerPattern->get(cVar1);
	perPattern->checkCast("java::lang::String");
	//    .local v1, "perPattern":Ljava/lang/String;
	if ( !(perPattern) )  
		goto label_cond_12;
	return perPattern;
	// 1540    .line 1011
label_cond_12:
	fallbackWidth = this->cache->widthFallback[cVar1->ordinal()];
	//    .local v0, "fallbackWidth":Landroid/icu/text/MeasureFormat$FormatWidth;
	if ( !(fallbackWidth) )  
		goto label_cond_2b;
	perPattern = this->cache->styleToPerPattern->get(fallbackWidth);
	//    .end local v1    # "perPattern":Ljava/lang/String;
	perPattern->checkCast("java::lang::String");
	//    .restart local v1    # "perPattern":Ljava/lang/String;
	if ( !(perPattern) )  
		goto label_cond_2b;
	return perPattern;
	// 1575    .line 1018
label_cond_2b:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::util::MissingResourceException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("no x-per-y pattern for width ")))->append(cVar1)->toString(), cVar0, cVar0);
	// throw
	throw cVar2;

}
// .method private getPluralFormatter(Landroid/icu/util/MeasureUnit;Landroid/icu/text/MeasureFormat$FormatWidth;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MeasureFormat::getPluralFormatter(std::shared_ptr<android::icu::util::MeasureUnit> unit,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width,int index)
{
	
	std::shared_ptr<java::lang::String> pattern;
	
	//    .param p1, "unit"    # Landroid/icu/util/MeasureUnit;
	//    .param p2, "width"    # Landroid/icu/text/MeasureFormat$FormatWidth;
	//    .param p3, "index"    # I
	if ( index == android::icu::impl::StandardPlural::OTHER_INDEX )
		goto label_cond_b;
	pattern = this->getFormatterOrNull(unit, width, index);
	//    .local v0, "pattern":Ljava/lang/String;
	if ( !(pattern) )  
		goto label_cond_b;
	return pattern;
	// 1626    .line 1002
	// 1627    .end local v0    # "pattern":Ljava/lang/String;
label_cond_b:
	return this->getFormatter(unit, width, android::icu::impl::StandardPlural::OTHER_INDEX);

}
// .method public static getRangeFormat(Landroid/icu/util/ULocale;Landroid/icu/text/MeasureFormat$FormatWidth;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MeasureFormat::getRangeFormat(std::shared_ptr<android::icu::util::ULocale> forLocale,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> result;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared_ptr<java::lang::Object> realLocale;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::Object> result;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "forLocale"    # Landroid/icu/util/ULocale;
	//    .param p1, "width"    # Landroid/icu/text/MeasureFormat$FormatWidth;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1643    .end annotation
	cVar0 = 0x2;
	if ( !(forLocale->getLanguage()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("fr")))) )  
		goto label_cond_15;
	return android::icu::text::MeasureFormat::getRangeFormat(android::icu::util::ULocale::ROOT, width);
	// 1670    .line 1461
label_cond_15:
	result = android::icu::text::MeasureFormat::localeIdToRangeFormat->get(forLocale);
	result->checkCast("java::lang::String");
	//    .local v4, "result":Ljava/lang/String;
	if ( result )     
		goto label_cond_83;
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), forLocale);
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v2, "rb":Landroid/icu/impl/ICUResourceBundle;
	realLocale = rb->getULocale();
	//    .local v3, "realLocale":Landroid/icu/util/ULocale;
	if ( forLocale->equals(realLocale) )     
		goto label_cond_42;
	result = android::icu::text::MeasureFormat::localeIdToRangeFormat->get(forLocale);
	//    .end local v4    # "result":Ljava/lang/String;
	result->checkCast("java::lang::String");
	//    .restart local v4    # "result":Ljava/lang/String;
	if ( !(result) )  
		goto label_cond_42;
	android::icu::text::MeasureFormat::localeIdToRangeFormat->put(forLocale, result);
	return result;
	// 1730    .line 1475
label_cond_42:
	//    .local v1, "ns":Landroid/icu/text/NumberingSystem;
	0x0;
	//    .local v5, "resultString":Ljava/lang/String;
	try {
	//label_try_start_47:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//label_try_end_69:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_84;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_47 .. :try_end_69} :catch_84
	//    .local v5, "resultString":Ljava/lang/String;
label_goto_6a:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	result = android::icu::impl::SimpleFormatterImpl::compileToStringMinMaxArguments(resultString, cVar2, cVar0, cVar0);
	android::icu::text::MeasureFormat::localeIdToRangeFormat->put(forLocale, result);
	if ( forLocale->equals(realLocale) )     
		goto label_cond_83;
	android::icu::text::MeasureFormat::localeIdToRangeFormat->put(realLocale, result);
	//    .end local v1    # "ns":Landroid/icu/text/NumberingSystem;
	//    .end local v2    # "rb":Landroid/icu/impl/ICUResourceBundle;
	//    .end local v3    # "realLocale":Landroid/icu/util/ULocale;
	//    .end local v5    # "resultString":Ljava/lang/String;
label_cond_83:
	return result;
	// 1814    .line 1480
	// 1815    .restart local v1    # "ns":Landroid/icu/text/NumberingSystem;
	// 1816    .restart local v2    # "rb":Landroid/icu/impl/ICUResourceBundle;
	// 1817    .restart local v3    # "realLocale":Landroid/icu/util/ULocale;
	// 1818    .local v5, "resultString":Ljava/lang/String;
label_catch_84:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/util/MissingResourceException;
	//    .local v5, "resultString":Ljava/lang/String;
	goto label_goto_6a;

}
// .method private static final getRegularWidth(Landroid/icu/text/MeasureFormat$FormatWidth;)Landroid/icu/text/MeasureFormat$FormatWidth;
std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> android::icu::text::MeasureFormat::getRegularWidth(std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width)
{
	
	//    .param p0, "width"    # Landroid/icu/text/MeasureFormat$FormatWidth;
	if ( width != android::icu::text::MeasureFormat_S_FormatWidth::NUMERIC )
		goto label_cond_7;
	return android::icu::text::MeasureFormat_S_FormatWidth::NARROW;
	// 1849    .line 965
label_cond_7:
	return width;

}
// .method private static loadLocaleData(Landroid/icu/util/ULocale;)Landroid/icu/text/MeasureFormat$MeasureFormatData;
std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureFormatData> android::icu::text::MeasureFormat::loadLocaleData(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> resource;
	std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureFormatData> cacheData;
	std::shared_ptr<android::icu::text::MeasureFormat_S_UnitDataSink> sink;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	resource = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/unit")), locale);
	resource->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v1, "resource":Landroid/icu/impl/ICUResourceBundle;
	cacheData = std::make_shared<android::icu::text::MeasureFormat_S_MeasureFormatData>(0x0);
	//    .local v0, "cacheData":Landroid/icu/text/MeasureFormat$MeasureFormatData;
	sink = std::make_shared<android::icu::text::MeasureFormat_S_UnitDataSink>(cacheData);
	//    .local v2, "sink":Landroid/icu/text/MeasureFormat$UnitDataSink;
	resource->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), sink);
	return cacheData;

}
// .method private static loadNumericDurationFormat(Landroid/icu/impl/ICUResourceBundle;Ljava/lang/String;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::MeasureFormat::loadNumericDurationFormat(std::shared_ptr<android::icu::impl::ICUResourceBundle> r,std::shared_ptr<java::lang::String> type)
{
	
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	std::shared_ptr<android::icu::text::SimpleDateFormat> result;
	
	//    .param p0, "r"    # Landroid/icu/impl/ICUResourceBundle;
	//    .param p1, "type"    # Ljava/lang/String;
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar0[0x0] = type;
	result = std::make_shared<android::icu::text::SimpleDateFormat>(r->getWithFallback(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("durationUnits/%s")), cVar0))->getString()->replace(std::make_shared<java::lang::String>(std::make_shared<char[]>("h")), std::make_shared<java::lang::String>(std::make_shared<char[]>("H"))));
	//    .local v0, "result":Landroid/icu/text/DateFormat;
	result->setTimeZone(android::icu::util::TimeZone::GMT_ZONE);
	return result;

}
// .method private static loadNumericFormatters(Landroid/icu/util/ULocale;)Landroid/icu/text/MeasureFormat$NumericFormatters;
std::shared_ptr<android::icu::text::MeasureFormat_S_NumericFormatters> android::icu::text::MeasureFormat::loadNumericFormatters(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> r;
	std::shared_ptr<android::icu::text::MeasureFormat_S_NumericFormatters> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	r = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/unit")), locale);
	r->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "r":Landroid/icu/impl/ICUResourceBundle;
	cVar0 = std::make_shared<android::icu::text::MeasureFormat_S_NumericFormatters>(android::icu::text::MeasureFormat::loadNumericDurationFormat(r, std::make_shared<java::lang::String>(std::make_shared<char[]>("hm"))), android::icu::text::MeasureFormat::loadNumericDurationFormat(r, std::make_shared<java::lang::String>(std::make_shared<char[]>("ms"))), android::icu::text::MeasureFormat::loadNumericDurationFormat(r, std::make_shared<java::lang::String>(std::make_shared<char[]>("hms"))));
	return cVar0;

}
// .method private static toHMS([Landroid/icu/util/Measure;)[Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::text::MeasureFormat::toHMS(std::shared_ptr<std::vector<android::icu::util::Measure>> measures)
{
	
	std::shared_ptr<std::vector<java::lang::Number>> cVar0;
	std::shared<std::vector<std::vector<java::lang::Number>>> result;
	int lastIdx;
	int cVar1;
	std::shared_ptr<android::icu::util::Measure> m;
	std::shared_ptr<java::lang::Integer> idxObj;
	int idx;
	
	//    .param p0, "measures"    # [Landroid/icu/util/Measure;
	cVar0 = 0x0;
	result = std::make_shared<std::vector<std::vector<java::lang::Number>>>(0x3);
	//    .local v4, "result":[Ljava/lang/Number;
	lastIdx = -0x1;
	//    .local v2, "lastIdx":I
	cVar1 = 0x0;
label_goto_7:
	if ( cVar1 >= measures->size() )
		goto label_cond_3a;
	m = measures[cVar1];
	//    .local v3, "m":Landroid/icu/util/Measure;
	if ( (m->getNumber()->doubleValue() > 0x0) >= 0 )
		goto label_cond_1a;
	return cVar0;
	// 2036    .line 1216
label_cond_1a:
	idxObj = android::icu::text::MeasureFormat::hmsTo012->get(m->getUnit());
	idxObj->checkCast("java::lang::Integer");
	//    .local v1, "idxObj":Ljava/lang/Integer;
	if ( idxObj )     
		goto label_cond_29;
	return cVar0;
	// 2057    .line 1220
label_cond_29:
	idx = idxObj->intValue();
	//    .local v0, "idx":I
	if ( idx >  lastIdx )
		goto label_cond_30;
	return cVar0;
	// 2070    .line 1225
label_cond_30:
	lastIdx = idx;
	result[idx] = m->getNumber();
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_7;
	// 2086    .line 1228
	// 2087    .end local v0    # "idx":I
	// 2088    .end local v1    # "idxObj":Ljava/lang/Integer;
	// 2089    .end local v3    # "m":Landroid/icu/util/Measure;
label_cond_3a:
	return result;

}
// .method private withPerUnitAndAppend(Ljava/lang/CharSequence;Landroid/icu/util/MeasureUnit;Ljava/lang/StringBuilder;)I
int android::icu::text::MeasureFormat::withPerUnitAndAppend(std::shared_ptr<java::lang::CharSequence> formatted,std::shared_ptr<android::icu::util::MeasureUnit> perUnit,std::shared_ptr<java::lang::StringBuilder> appendTo)
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<int[]>> offsets;
	std::shared_ptr<java::lang::String> perUnitPattern;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar2;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar3;
	
	//    .param p1, "formatted"    # Ljava/lang/CharSequence;
	//    .param p2, "perUnit"    # Landroid/icu/util/MeasureUnit;
	//    .param p3, "appendTo"    # Ljava/lang/StringBuilder;
	cVar0 = 0x1;
	cVar1 = 0x0;
	offsets = std::make_shared<std::vector<int[]>>(cVar0);
	//    .local v0, "offsets":[I
	perUnitPattern = this->getFormatterOrNull(perUnit, this->formatWidth, android::icu::text::MeasureFormat_S_MeasureFormatData::PER_UNIT_INDEX);
	//    .local v3, "perUnitPattern":Ljava/lang/String;
	if ( !(perUnitPattern) )  
		goto label_cond_18;
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(cVar0);
	cVar2[cVar1] = formatted;
	android::icu::impl::SimpleFormatterImpl::formatAndAppend(perUnitPattern, appendTo, offsets, cVar2);
	return offsets[cVar1];
	// 2134    .line 1030
label_cond_18:
	//    .local v2, "perPattern":Ljava/lang/String;
	//    .local v1, "pattern":Ljava/lang/String;
	//    .local v4, "perUnitString":Ljava/lang/String;
	cVar3 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(0x2);
	cVar3[cVar1] = formatted;
	cVar3[cVar0] = android::icu::impl::SimpleFormatterImpl::getTextWithNoArguments(this->getPluralFormatter(perUnit, this->formatWidth, android::icu::impl::StandardPlural::ONE->ordinal()))->trim();
	android::icu::impl::SimpleFormatterImpl::formatAndAppend(this->getPerFormatter(this->formatWidth), appendTo, offsets, cVar3);
	return offsets[cVar1];

}
// .method private writeReplace()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::MeasureFormat::writeReplace()
{
	
	std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureProxy> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2189        value = {
	// 2190            Ljava/io/ObjectStreamException;
	// 2191        }
	// 2192    .end annotation
	cVar0 = std::make_shared<android::icu::text::MeasureFormat_S_MeasureProxy>(this->getLocale(), this->formatWidth, this->numberFormat->get(), 0x0);
	return cVar0;

}
// .method public final equals(Ljava/lang/Object;)Z
bool android::icu::text::MeasureFormat::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::MeasureFormat> rhs;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return 0x1;
	// 2236    .line 589
label_cond_5:
	if ( other->instanceOf("android::icu::text::MeasureFormat") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	rhs = other;
	rhs->checkCast("android::icu::text::MeasureFormat");
	//    .local v0, "rhs":Landroid/icu/text/MeasureFormat;
	if ( this->getWidth() != rhs->getWidth() )
		goto label_cond_31;
	if ( !(this->getLocale()->equals(rhs->getLocale())) )  
		goto label_cond_31;
	cVar1 = this->getNumberFormat()->equals(rhs->getNumberFormat());
label_cond_31:
	return cVar1;

}
// .method public format(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::MeasureFormat::format(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	int prevLength;
	std::shared_ptr<java::text::FieldPosition> fpos;
	std::shared_ptr<java::util::Collection> coll;
	std::shared<std::vector<std::vector<android::icu::util::Measure>>> measures;
	int idx;
	std::shared_ptr<java::util::Iterator> o_S_iterator;
	std::shared_ptr<android::icu::util::Measure> o;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	prevLength = toAppendTo->length();
	//    .local v7, "prevLength":I
	fpos = std::make_shared<java::text::FieldPosition>(pos->getFieldAttribute(), pos->getField());
	//    .local v1, "fpos":Ljava/text/FieldPosition;
	if ( !(obj->instanceOf("java::util::Collection")) )  
		goto label_cond_6c;
	coll = obj;
	coll->checkCast("java::util::Collection");
	//    .local v0, "coll":Ljava/util/Collection;, "Ljava/util/Collection<*>;"
	measures = std::make_shared<std::vector<std::vector<android::icu::util::Measure>>>(coll->size());
	//    .local v4, "measures":[Landroid/icu/util/Measure;
	idx = 0x0;
	//    .local v2, "idx":I
	o_S_iterator = coll->iterator();
	//    .local v6, "o$iterator":Ljava/util/Iterator;
label_goto_23:
	if ( !(o_S_iterator->hasNext()) )  
		goto label_cond_43;
	o = o_S_iterator->next();
	//    .local v5, "o":Ljava/lang/Object;
	if ( o->instanceOf("android::icu::util::Measure") )     
		goto label_cond_3b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(obj->toString());
	// throw
	throw cVar0;
	// 2381    .line 306
label_cond_3b:
	//    .end local v2    # "idx":I
	//    .local v3, "idx":I
	o->checkCast("android::icu::util::Measure");
	//    .end local v5    # "o":Ljava/lang/Object;
	measures[idx] = o;
	idx = ( idx + 0x1);
	//    .end local v3    # "idx":I
	//    .restart local v2    # "idx":I
	goto label_goto_23;
	// 2398    .line 308
label_cond_43:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	toAppendTo->append(this->formatMeasures(cVar1, fpos, measures));
	//    .end local v0    # "coll":Ljava/util/Collection;, "Ljava/util/Collection<*>;"
	//    .end local v2    # "idx":I
	//    .end local v4    # "measures":[Landroid/icu/util/Measure;
	//    .end local v6    # "o$iterator":Ljava/util/Iterator;
	//    .end local p1    # "obj":Ljava/lang/Object;
label_goto_4f:
	if ( fpos->getBeginIndex() )     
		goto label_cond_5b;
	if ( !(fpos->getEndIndex()) )  
		goto label_cond_6b;
label_cond_5b:
	pos->setBeginIndex((fpos->getBeginIndex() +  prevLength));
	pos->setEndIndex((fpos->getEndIndex() +  prevLength));
label_cond_6b:
	return toAppendTo;
	// 2452    .line 309
	// 2453    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_6c:
	if ( !(obj->instanceOf("std::vector<android::icu::util::Measure>")) )  
		goto label_cond_7f;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	obj->checkCast("std::vector<android::icu::util::Measure>");
	//    .end local p1    # "obj":Ljava/lang/Object;
	toAppendTo->append(this->formatMeasures(cVar2, fpos, obj));
	goto label_goto_4f;
	// 2475    .line 311
	// 2476    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_7f:
	if ( !(obj->instanceOf("android::icu::util::Measure")) )  
		goto label_cond_94;
	obj->checkCast("android::icu::util::Measure");
	//    .end local p1    # "obj":Ljava/lang/Object;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	toAppendTo->append(this->formatMeasure(obj, this->numberFormat, cVar3, fpos));
	goto label_goto_4f;
	// 2500    .line 314
	// 2501    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_94:
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(obj->toString());
	// throw
	throw cVar4;

}
// .method public formatMeasurePerUnit(Landroid/icu/util/Measure;Landroid/icu/util/MeasureUnit;Ljava/lang/StringBuilder;Ljava/text/FieldPosition;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::MeasureFormat::formatMeasurePerUnit(std::shared_ptr<android::icu::util::Measure> measure,std::shared_ptr<android::icu::util::MeasureUnit> perUnit,std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<android::icu::util::MeasureUnit> resolvedUnit;
	std::shared_ptr<android::icu::util::Measure> newMeasure;
	std::shared_ptr<java::text::FieldPosition> fpos;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	int offset;
	
	//    .param p1, "measure"    # Landroid/icu/util/Measure;
	//    .param p2, "perUnit"    # Landroid/icu/util/MeasureUnit;
	//    .param p3, "appendTo"    # Ljava/lang/StringBuilder;
	//    .param p4, "pos"    # Ljava/text/FieldPosition;
	resolvedUnit = android::icu::util::MeasureUnit::resolveUnitPerUnit(measure->getUnit(), perUnit);
	//    .local v3, "resolvedUnit":Landroid/icu/util/MeasureUnit;
	if ( !(resolvedUnit) )  
		goto label_cond_1a;
	newMeasure = std::make_shared<android::icu::util::Measure>(measure->getNumber(), resolvedUnit);
	//    .local v1, "newMeasure":Landroid/icu/util/Measure;
	return this->formatMeasure(newMeasure, this->numberFormat, appendTo, pos);
	// 2555    .line 491
	// 2556    .end local v1    # "newMeasure":Landroid/icu/util/Measure;
label_cond_1a:
	fpos = std::make_shared<java::text::FieldPosition>(pos->getFieldAttribute(), pos->getField());
	//    .local v0, "fpos":Ljava/text/FieldPosition;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	offset = this->withPerUnitAndAppend(this->formatMeasure(measure, this->numberFormat, cVar0, fpos), perUnit, appendTo);
	//    .local v2, "offset":I
	if ( fpos->getBeginIndex() )     
		goto label_cond_42;
	if ( !(fpos->getEndIndex()) )  
		goto label_cond_52;
label_cond_42:
	pos->setBeginIndex((fpos->getBeginIndex() +  offset));
	pos->setEndIndex((fpos->getEndIndex() +  offset));
label_cond_52:
	return appendTo;

}
// .method public final formatMeasureRange(Landroid/icu/util/Measure;Landroid/icu/util/Measure;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MeasureFormat::formatMeasureRange(std::shared_ptr<android::icu::util::Measure> lowValue,std::shared_ptr<android::icu::util::Measure> highValue)
{
	
	auto unit;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::Number> lowNumber;
	std::shared_ptr<java::lang::Number> highNumber;
	int isCurrency;
	std::shared_ptr<android::icu::text::UFieldPosition> lowFpos;
	std::shared_ptr<android::icu::text::UFieldPosition> highFpos;
	int lowFormatted;
	int highFormatted;
	std::shared_ptr<android::icu::util::Currency> currency;
	int fracDigits;
	std::shared_ptr<android::icu::text::DecimalFormat> currentNumberFormat;
	std::shared_ptr<java::lang::StringBuffer> cVar2;
	auto lowFormatted;
	std::shared_ptr<java::lang::StringBuffer> cVar3;
	auto highFormatted;
	std::shared_ptr<java::lang::StringBuffer> cVar4;
	std::shared_ptr<java::lang::StringBuffer> cVar5;
	double lowDouble;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar6;
	double highDouble;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar7;
	std::shared_ptr<android::icu::impl::StandardPlural> resolvedPlural;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar8;
	auto formattedNumber;
	std::shared_ptr<android::icu::util::Currency> currencyUnit;
	std::shared_ptr<java::lang::StringBuilder> result;
	bool cVar9;
	bool cVar10;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar13;
	
	//    .param p1, "lowValue"    # Landroid/icu/util/Measure;
	//    .param p2, "highValue"    # Landroid/icu/util/Measure;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2632    .end annotation
	unit = lowValue->getUnit();
	//    .local v35, "unit":Landroid/icu/util/MeasureUnit;
	if ( unit->equals(highValue->getUnit()) )     
		goto label_cond_3b;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Units must match: ")))->append(unit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" \u2260 ")))->append(highValue->getUnit())->toString());
	// throw
	throw cVar0;
	// 2695    .line 374
label_cond_3b:
	lowNumber = lowValue->getNumber();
	//    .local v28, "lowNumber":Ljava/lang/Number;
	highNumber = highValue->getNumber();
	//    .local v22, "highNumber":Ljava/lang/Number;
	isCurrency = unit->instanceOf("android::icu::util::Currency");
	//    .local v23, "isCurrency":Z
	lowFpos = std::make_shared<android::icu::text::UFieldPosition>();
	//    .local v27, "lowFpos":Landroid/icu/text/UFieldPosition;
	highFpos = std::make_shared<android::icu::text::UFieldPosition>();
	//    .local v21, "highFpos":Landroid/icu/text/UFieldPosition;
	lowFormatted = 0x0;
	//    .local v26, "lowFormatted":Ljava/lang/StringBuffer;
	highFormatted = 0x0;
	//    .local v20, "highFormatted":Ljava/lang/StringBuffer;
	if ( !(isCurrency) )  
		goto label_cond_bb;
	currency = unit;
	currency->checkCast("android::icu::util::Currency");
	//    .local v14, "currency":Landroid/icu/util/Currency;
	fracDigits = currency->getDefaultFractionDigits();
	//    .local v19, "fracDigits":I
	//    .local v29, "maxFrac":I
	//    .local v30, "minFrac":I
	if ( fracDigits != android::icu::text::MeasureFormat_S_ImmutableNumberFormat::-get0(this->numberFormat)->getMaximumFractionDigits() )
		goto label_cond_85;
	if ( fracDigits == android::icu::text::MeasureFormat_S_ImmutableNumberFormat::-get0(this->numberFormat)->getMinimumFractionDigits() )
		goto label_cond_bb;
label_cond_85:
	currentNumberFormat = this->numberFormat->get();
	currentNumberFormat->checkCast("android::icu::text::DecimalFormat");
	//    .local v16, "currentNumberFormat":Landroid/icu/text/DecimalFormat;
	currentNumberFormat->setMaximumFractionDigits(fracDigits);
	currentNumberFormat->setMinimumFractionDigits(fracDigits);
	cVar2 = std::make_shared<java::lang::StringBuffer>();
	lowFormatted = currentNumberFormat->format(lowNumber, cVar2, lowFpos);
	//    .local v26, "lowFormatted":Ljava/lang/StringBuffer;
	cVar3 = std::make_shared<java::lang::StringBuffer>();
	highFormatted = currentNumberFormat->format(highNumber, cVar3, highFpos);
	//    .end local v14    # "currency":Landroid/icu/util/Currency;
	//    .end local v16    # "currentNumberFormat":Landroid/icu/text/DecimalFormat;
	//    .end local v19    # "fracDigits":I
	//    .end local v20    # "highFormatted":Ljava/lang/StringBuffer;
	//    .end local v26    # "lowFormatted":Ljava/lang/StringBuffer;
	//    .end local v29    # "maxFrac":I
	//    .end local v30    # "minFrac":I
label_cond_bb:
	if ( lowFormatted )     
		goto label_cond_df;
	cVar4 = std::make_shared<java::lang::StringBuffer>();
	//    .restart local v26    # "lowFormatted":Ljava/lang/StringBuffer;
	cVar5 = std::make_shared<java::lang::StringBuffer>();
	highFormatted = this->numberFormat->format(highNumber, cVar5, highFpos);
	//    .end local v26    # "lowFormatted":Ljava/lang/StringBuffer;
label_cond_df:
	lowDouble = lowNumber->doubleValue();
	//    .local v5, "lowDouble":D
	cVar6 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(lowDouble, lowFpos->getCountVisibleFractionDigits(), lowFpos->getFractionDigits());
	//    .local v25, "keywordLow":Ljava/lang/String;
	highDouble = highNumber->doubleValue();
	//    .local v9, "highDouble":D
	cVar7 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(highDouble, highFpos->getCountVisibleFractionDigits(), highFpos->getFractionDigits());
	//    .local v24, "keywordHigh":Ljava/lang/String;
	//    .local v31, "pluralRanges":Landroid/icu/text/PluralRanges;
	resolvedPlural = android::icu::text::PluralRules_S_Factory::getDefaultFactory({const[class].FS-Param})->getPluralRanges(this->getLocale())->get(android::icu::impl::StandardPlural::fromString(this->rules->select(cVar6)), android::icu::impl::StandardPlural::fromString(this->rules->select(cVar7)));
	//    .local v33, "resolvedPlural":Landroid/icu/impl/StandardPlural;
	//    .local v32, "rangeFormatter":Ljava/lang/String;
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(0x2);
	cVar8[0x0] = lowFormatted;
	cVar8[0x1] = highFormatted;
	formattedNumber = android::icu::impl::SimpleFormatterImpl::formatCompiledPattern(android::icu::text::MeasureFormat::getRangeFormat(this->getLocale(), this->formatWidth), cVar8);
	//    .local v17, "formattedNumber":Ljava/lang/String;
	if ( !(isCurrency) )  
		goto label_cond_19e;
	this->currencyFormat->format(java::lang::Double::valueOf(0x3ff0000000000000L));
	currencyUnit = unit;
	currencyUnit->checkCast("android::icu::util::Currency");
	//    .local v15, "currencyUnit":Landroid/icu/util/Currency;
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v34, "result":Ljava/lang/StringBuilder;
	if ( (lowDouble < 0x0) < 0 ) 
		goto label_cond_19a;
	cVar9 = 0x1;
label_goto_169:
	this->appendReplacingCurrency(this->currencyFormat->getPrefix(cVar9), currencyUnit, resolvedPlural, result);
	result->append(formattedNumber);
	if ( (highDouble < 0x0) < 0 ) 
		goto label_cond_19c;
	cVar10 = 0x1;
label_goto_188:
	this->appendReplacingCurrency(this->currencyFormat->getSuffix(cVar10), currencyUnit, resolvedPlural, result);
	return result->toString();
	// 3120    .line 424
label_cond_19a:
	cVar9 = 0x0;
	goto label_goto_169;
	// 3126    .line 426
label_cond_19c:
	cVar10 = 0x0;
	goto label_goto_188;
	// 3132    .line 439
	// 3133    .end local v15    # "currencyUnit":Landroid/icu/util/Currency;
	// 3134    .end local v34    # "result":Ljava/lang/StringBuilder;
label_cond_19e:
	//    .local v18, "formatter":Ljava/lang/String;
	cVar13 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(0x1);
	cVar13[0x0] = formattedNumber;
	return android::icu::impl::SimpleFormatterImpl::formatCompiledPattern(this->getPluralFormatter(lowValue->getUnit(), this->formatWidth, resolvedPlural->ordinal()), cVar13);

}
// .method public final varargs formatMeasures([Landroid/icu/util/Measure;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MeasureFormat::formatMeasures(std::shared_ptr<std::vector<android::icu::util::Measure>> measures)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "measures"    # [Landroid/icu/util/Measure;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return this->formatMeasures(cVar0, android::icu::impl::DontCareFieldPosition::INSTANCE, measures)->toString();

}
// .method public varargs formatMeasures(Ljava/lang/StringBuilder;Ljava/text/FieldPosition;[Landroid/icu/util/Measure;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::MeasureFormat::formatMeasures(std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition,std::shared_ptr<std::vector<android::icu::util::Measure>> measures)
{
	
	std::shared_ptr<std::vector<java::lang::Number>> hms;
	std::shared_ptr<android::icu::text::ListFormatter> listFormatter;
	std::shared<std::vector<std::vector<java::lang::String>>> results;
	int i;
	std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> cVar0;
	
	//    .param p1, "appendTo"    # Ljava/lang/StringBuilder;
	//    .param p2, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p3, "measures"    # [Landroid/icu/util/Measure;
	if ( measures->size() )     
		goto label_cond_5;
	return appendTo;
	// 3215    .line 523
label_cond_5:
	if ( measures->size() != 0x1 )
		goto label_cond_12;
	return this->formatMeasure(measures[0x0], this->numberFormat, appendTo, fieldPosition);
	// 3234    .line 527
label_cond_12:
	if ( this->formatWidth != android::icu::text::MeasureFormat_S_FormatWidth::NUMERIC )
		goto label_cond_23;
	hms = android::icu::text::MeasureFormat::toHMS(measures);
	//    .local v0, "hms":[Ljava/lang/Number;
	if ( !(hms) )  
		goto label_cond_23;
	return this->formatNumeric(hms, appendTo);
	// 3258    .line 537
	// 3259    .end local v0    # "hms":[Ljava/lang/Number;
label_cond_23:
	listFormatter = android::icu::text::ListFormatter::getInstance(this->getLocale(), this->formatWidth->getListFormatterStyle());
	//    .local v2, "listFormatter":Landroid/icu/text/ListFormatter;
	if ( fieldPosition == android::icu::impl::DontCareFieldPosition::INSTANCE )
		goto label_cond_3a;
	return this->formatMeasuresSlowTrack(listFormatter, appendTo, fieldPosition, measures);
	// 3289    .line 542
label_cond_3a:
	results = std::make_shared<std::vector<std::vector<java::lang::String>>>(measures->size());
	//    .local v3, "results":[Ljava/lang/String;
	i = 0x0;
	//    .local v1, "i":I
label_goto_3e:
	if ( i >= measures->size() )
		goto label_cond_56;
	if ( i != ( measures->size() + -0x1) )
		goto label_cond_53;
	cVar0 = this->numberFormat;
label_goto_4a:
	results[i] = this->formatMeasure(measures[i], cVar0);
	i = ( i + 0x1);
	goto label_goto_3e;
	// 3330    .line 546
label_cond_53:
	cVar0 = this->integerFormat;
	goto label_goto_4a;
	// 3336    .line 548
label_cond_56:
	return appendTo->append(listFormatter->format(results));

}
// .method public final getLocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::MeasureFormat::getLocale()
{
	
	return this->getLocale(android::icu::util::ULocale::VALID_LOCALE);

}
// .method public getNumberFormat()Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::MeasureFormat::getNumberFormat()
{
	
	return this->numberFormat->get();

}
// .method public getUnitDisplayName(Landroid/icu/util/MeasureUnit;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MeasureFormat::getUnitDisplayName(std::shared_ptr<android::icu::util::MeasureUnit> unit)
{
	
	std::shared_ptr<java::lang::Object> width;
	std::shared_ptr<java::util::Map> styleToDnam;
	std::shared_ptr<java::lang::String> dnam;
	std::shared_ptr<java::lang::Object> fallbackWidth;
	
	//    .param p1, "unit"    # Landroid/icu/util/MeasureUnit;
	width = android::icu::text::MeasureFormat::getRegularWidth(this->formatWidth);
	//    .local v3, "width":Landroid/icu/text/MeasureFormat$FormatWidth;
	styleToDnam = this->cache->unitToStyleToDnam->get(unit);
	styleToDnam->checkCast("java::util::Map");
	//    .local v2, "styleToDnam":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/text/MeasureFormat$FormatWidth;Ljava/lang/String;>;"
	if ( styleToDnam )     
		goto label_cond_14;
	return 0x0;
	// 3410    .line 569
label_cond_14:
	dnam = styleToDnam->get(width);
	dnam->checkCast("java::lang::String");
	//    .local v0, "dnam":Ljava/lang/String;
	if ( !(dnam) )  
		goto label_cond_1d;
	return dnam;
	// 3425    .line 573
label_cond_1d:
	fallbackWidth = this->cache->widthFallback[width->ordinal()];
	//    .local v1, "fallbackWidth":Landroid/icu/text/MeasureFormat$FormatWidth;
	if ( !(fallbackWidth) )  
		goto label_cond_2f;
	dnam = styleToDnam->get(fallbackWidth);
	//    .end local v0    # "dnam":Ljava/lang/String;
	dnam->checkCast("java::lang::String");
	//    .restart local v0    # "dnam":Ljava/lang/String;
label_cond_2f:
	return dnam;

}
// .method public getWidth()Landroid/icu/text/MeasureFormat$FormatWidth;
std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> android::icu::text::MeasureFormat::getWidth()
{
	
	return this->formatWidth;

}
// .method public final hashCode()I
int android::icu::text::MeasureFormat::hashCode()
{
	
	return (( (( this->getLocale()->hashCode() * 0x1f) +  this->getNumberFormat()->hashCode()) * 0x1f) +  this->getWidth()->hashCode());

}
// .method public parseObject(Ljava/lang/String;Ljava/text/ParsePosition;)Landroid/icu/util/Measure;
std::shared_ptr<android::icu::util::Measure> android::icu::text::MeasureFormat::parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}
// .method toCurrencyProxy()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::MeasureFormat::toCurrencyProxy()
{
	
	std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureProxy> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::MeasureFormat_S_MeasureProxy>(this->getLocale(), this->formatWidth, this->numberFormat->get(), 0x2);
	return cVar0;

}
// .method toTimeUnitProxy()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::MeasureFormat::toTimeUnitProxy()
{
	
	std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureProxy> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::MeasureFormat_S_MeasureProxy>(this->getLocale(), this->formatWidth, this->numberFormat->get(), 0x1);
	return cVar0;

}
// .method withLocale(Landroid/icu/util/ULocale;)Landroid/icu/text/MeasureFormat;
std::shared_ptr<android::icu::text::MeasureFormat> android::icu::text::MeasureFormat::withLocale(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::MeasureFormat::getInstance(locale, this->getWidth());

}
// .method withNumberFormat(Landroid/icu/text/NumberFormat;)Landroid/icu/text/MeasureFormat;
std::shared_ptr<android::icu::text::MeasureFormat> android::icu::text::MeasureFormat::withNumberFormat(std::shared_ptr<android::icu::text::NumberFormat> format)
{
	
	std::shared_ptr<android::icu::text::MeasureFormat> cVar0;
	std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> cVar1;
	
	//    .param p1, "format"    # Landroid/icu/text/NumberFormat;
	cVar1 = std::make_shared<android::icu::text::MeasureFormat_S_ImmutableNumberFormat>(format);
	cVar0 = std::make_shared<android::icu::text::MeasureFormat>(this->getLocale(), this->cache, this->formatWidth, cVar1, this->rules, this->numericFormatters, this->currencyFormat, this->integerFormat);
	return cVar0;

}


