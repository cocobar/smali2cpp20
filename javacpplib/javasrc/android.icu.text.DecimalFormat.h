#ifndef __android_icu_text_DecimalFormat__
#define __android_icu_text_DecimalFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DecimalFormat.smali
#include "java2ctype.h"
#include "android.icu.math.BigDecimal.h"
#include "android.icu.math.MathContext.h"
#include "android.icu.text.CurrencyPluralInfo.h"
#include "android.icu.text.DecimalFormat_S_AffixForCurrency.h"
#include "android.icu.text.DecimalFormat_S_Unit.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.DigitList.h"
#include "android.icu.text.NumberFormat_S_Field.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.Currency_S_CurrencyUsage.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.CurrencyAmount.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.math.BigDecimal.h"
#include "java.math.BigInteger.h"
#include "java.math.MathContext.h"
#include "java.text.AttributedCharacterIterator.h"
#include "java.text.ChoiceFormat.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.ArrayList.h"
#include "java.util.Set.h"

namespace android::icu::text{
class DecimalFormat : public android::icu::text::NumberFormat {
protected:
	std::shared_ptr<android::icu::util::Currency> virtual getEffectiveCurrency();
private:
	static char CURRENCY_SIGN;
	static int CURRENCY_SIGN_COUNT_IN_ISO_FORMAT;
	static int CURRENCY_SIGN_COUNT_IN_PLURAL_FORMAT;
	static int CURRENCY_SIGN_COUNT_IN_SYMBOL_FORMAT;
	static int CURRENCY_SIGN_COUNT_ZERO;
	static char PATTERN_PERCENT;
	static char PATTERN_PER_MILLE;
	static char PATTERN_SEPARATOR;
	static char QUOTE;
	static int STATUS_INFINITE;
	static int STATUS_LENGTH;
	static int STATUS_POSITIVE;
	static int STATUS_UNDERFLOW;
	static std::shared_ptr<android::icu::text::UnicodeSet> commaEquivalents;
	static std::shared_ptr<android::icu::text::UnicodeSet> defaultGroupingSeparators;
	static std::shared_ptr<android::icu::text::UnicodeSet> dotEquivalents;
	static double epsilon;
	static long long serialVersionUID;
	static std::shared_ptr<android::icu::text::UnicodeSet> strictCommaEquivalents;
	static std::shared_ptr<android::icu::text::UnicodeSet> strictDefaultGroupingSeparators;
	static std::shared_ptr<android::icu::text::UnicodeSet> strictDotEquivalents;
	int PARSE_MAX_EXPONENT;
	std::shared_ptr<java::math::BigDecimal> actualRoundingIncrement;
	std::shared_ptr<android::icu::math::BigDecimal> actualRoundingIncrementICU;
	std::shared_ptr<java::util::Set<android::icu::text::DecimalFormat_S_AffixForCurrency>> affixPatternsForCurrency;
	std::shared_ptr<java::util::ArrayList<java::text::FieldPosition>> attributes;
	std::shared_ptr<java::text::ChoiceFormat> currencyChoice;
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> currencyPluralInfo;
	int currencySignCount;
	std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> currencyUsage;
	bool decimalSeparatorAlwaysShown;
	std::shared_ptr<android::icu::text::DigitList> digitList;
	bool exponentSignAlwaysShown;
	std::shared_ptr<java::lang::String> formatPattern;
	int formatWidth;
	unsigned char groupingSize;
	unsigned char groupingSize2;
	bool isReadyForParsing;
	std::shared_ptr<android::icu::math::MathContext> mathContext;
	int maxSignificantDigits;
	unsigned char minExponentDigits;
	int minSignificantDigits;
	int multiplier;
	std::shared_ptr<java::lang::String> negPrefixPattern;
	std::shared_ptr<java::lang::String> negSuffixPattern;
	std::shared_ptr<java::lang::String> negativePrefix;
	std::shared_ptr<java::lang::String> negativeSuffix;
	char pad;
	int padPosition;
	bool parseBigDecimal;
	std::shared_ptr<java::lang::String> posPrefixPattern;
	std::shared_ptr<java::lang::String> posSuffixPattern;
	std::shared_ptr<java::lang::String> positivePrefix;
	std::shared_ptr<java::lang::String> positiveSuffix;
	double roundingDouble;
	double roundingDoubleReciprocal;
	std::shared_ptr<java::math::BigDecimal> roundingIncrement;
	std::shared_ptr<android::icu::math::BigDecimal> roundingIncrementICU;
	int roundingMode;
	int serialVersionOnStream;
	int style;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> symbols;
	bool useExponentialNotation;
	bool useSignificantDigits;
	void virtual _setMaximumFractionDigits(int newValue);
	void virtual addAttribute(std::shared_ptr<android::icu::text::NumberFormat_S_Field> field,int begin,int end);
	void virtual addPadding(std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,int prefixLen,int suffixLen);
	int virtual appendAffix(std::shared_ptr<java::lang::StringBuffer> buf,bool isNegative,bool isPrefix,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool parseAttr);
	void virtual appendAffixPattern(std::shared_ptr<java::lang::StringBuffer> buffer,bool isNegative,bool isPrefix,bool localized);
	void virtual applyPattern(std::shared_ptr<java::lang::String> pattern,bool localized);
	void virtual applyPatternWithoutExpandAffix(std::shared_ptr<java::lang::String> pattern,bool localized);
	int virtual compareAffix(std::shared_ptr<java::lang::String> text,int pos,bool isNegative,bool isPrefix,std::shared_ptr<java::lang::String> affixPat,bool complexCurrencyParsing,int type,std::shared_ptr<std::vector<android::icu::util::Currency>> currency);
	int virtual compareComplexAffix(std::shared_ptr<java::lang::String> affixPat,std::shared_ptr<java::lang::String> text,int pos,int type,std::shared_ptr<std::vector<android::icu::util::Currency>> currency);
	static int compareSimpleAffix(std::shared_ptr<java::lang::String> affix,std::shared_ptr<java::lang::String> input,int pos);
	void virtual create(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DecimalFormatSymbols> inputSymbols,std::shared_ptr<android::icu::text::CurrencyPluralInfo> info,int inputStyle);
	void virtual createFromPatternAndSymbols(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DecimalFormatSymbols> inputSymbols);
	static bool equalWithSignCompatibility(int lhs,int rhs);
	bool virtual equals(std::shared_ptr<java::lang::String> pat1,std::shared_ptr<java::lang::String> pat2);
	void virtual expandAffix(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> pluralCount,std::shared_ptr<java::lang::StringBuffer> buffer);
	void virtual expandAffixAdjustWidth(std::shared_ptr<java::lang::String> pluralCount);
	void virtual expandAffixes(std::shared_ptr<java::lang::String> pluralCount);
	std::shared_ptr<java::lang::StringBuffer> virtual format(double number,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool parseAttr);
	std::shared_ptr<java::lang::StringBuffer> virtual format(long long cVar1,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool parseAttr);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::math::BigDecimal> cVar3,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool parseAttr);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::math::BigInteger> cVar2,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool parseAttr);
	void virtual formatAffix2Attribute(bool isPrefix,std::shared_ptr<android::icu::text::NumberFormat_S_Field> fieldType,std::shared_ptr<java::lang::StringBuffer> buf,int offset,int symbolSize);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual getEquivalentDecimals(std::shared_ptr<java::lang::String> decimal,bool strictParse);
	static bool isBidiMark(int c);
	bool virtual isGroupingPosition(int pos);
	bool virtual isNegative(double number);
	int virtual matchesDigit(std::shared_ptr<java::lang::String> str,int start,std::shared_ptr<int[]> decVal);
	double virtual multiply(double number);
	std::shared_ptr<java::lang::Object> virtual parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,std::shared_ptr<std::vector<android::icu::util::Currency>> currency);
	bool virtual parseForCurrency(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,std::shared_ptr<std::vector<android::icu::util::Currency>> currency,std::shared_ptr<bool[]> status);
	void virtual patternError(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::String> pattern);
	int virtual precision(bool isIntegral);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> stream);
	void virtual resetActualRounding();
	double virtual round(double cVar0);
	static double round(double number,double roundingInc,double roundingIncReciprocal,int mode,bool isNegative);
	void virtual setCurrencyForSymbols();
	void virtual setInternalRoundingIncrement(std::shared_ptr<android::icu::math::BigDecimal> value);
	void virtual setRoundingDouble(double newValue);
	void virtual setupCurrencyAffixForAllPatterns();
	static int skipBidiMarks(std::shared_ptr<java::lang::String> text,int pos);
	int virtual skipPadding(std::shared_ptr<java::lang::String> text,int position);
	static int skipPatternWhiteSpace(std::shared_ptr<java::lang::String> text,int pos);
	static int skipUWhiteSpace(std::shared_ptr<java::lang::String> text,int pos);
	std::shared_ptr<java::lang::StringBuffer> virtual subformat(double number,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool isNegative,bool isInteger,bool parseAttr);
	std::shared_ptr<java::lang::StringBuffer> virtual subformat(int number,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool isNegative,bool isInteger,bool parseAttr);
	std::shared_ptr<java::lang::StringBuffer> virtual subformat(std::shared_ptr<java::lang::String> pluralCount,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool isNegative,bool isInteger,bool parseAttr);
	std::shared_ptr<java::lang::StringBuffer> virtual subformat(std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool isNegative,bool isInteger,bool parseAttr);
	void virtual subformatExponential(std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool parseAttr);
	void virtual subformatFixed(std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool isInteger,bool parseAttr);
	bool virtual subparse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,std::shared_ptr<android::icu::text::DigitList> digits,std::shared_ptr<bool[]> status,std::shared_ptr<std::vector<android::icu::util::Currency>> currency,std::shared_ptr<java::lang::String> negPrefix,std::shared_ptr<java::lang::String> negSuffix,std::shared_ptr<java::lang::String> posPrefix,std::shared_ptr<java::lang::String> posSuffix,bool parseComplexCurrency,int type);
	std::shared_ptr<java::lang::String> virtual toPattern(bool localized);
	static std::shared_ptr<java::lang::String> trimMarksFromAffix(std::shared_ptr<java::lang::String> affix);
	std::shared_ptr<java::lang::String> virtual unquote(std::shared_ptr<java::lang::String> pat);
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> stream);
public:
	static int DOUBLE_FRACTION_DIGITS;
	static int DOUBLE_INTEGER_DIGITS;
	static int MAX_INTEGER_DIGITS;
	static int MAX_SCIENTIFIC_INTEGER_DIGITS;
	static std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> NULL_UNIT;
	static int PAD_AFTER_PREFIX;
	static int PAD_AFTER_SUFFIX;
	static int PAD_BEFORE_PREFIX;
	static int PAD_BEFORE_SUFFIX;
	static char PATTERN_DECIMAL_SEPARATOR;
	static char PATTERN_DIGIT;
	static char PATTERN_EIGHT_DIGIT;
	static char PATTERN_EXPONENT;
	static char PATTERN_FIVE_DIGIT;
	static char PATTERN_FOUR_DIGIT;
	static char PATTERN_GROUPING_SEPARATOR;
	static char PATTERN_MINUS_SIGN;
	static char PATTERN_NINE_DIGIT;
	static char PATTERN_ONE_DIGIT;
	static char PATTERN_PAD_ESCAPE;
	static char PATTERN_PLUS_SIGN;
	static char PATTERN_SEVEN_DIGIT;
	static char PATTERN_SIGNIFICANT_DIGIT;
	static char PATTERN_SIX_DIGIT;
	static char PATTERN_THREE_DIGIT;
	static char PATTERN_TWO_DIGIT;
	static char PATTERN_ZERO_DIGIT;
	static int currentSerialVersion;
	static std::shared_ptr<android::icu::text::UnicodeSet> minusSigns;
	static std::shared_ptr<android::icu::text::UnicodeSet> plusSigns;
	static double roundingIncrementEpsilon;
	static bool skipExtendedSeparatorParsing;
	bool parseRequireDecimalPoint;
	static void static_cinit();
	DecimalFormat();
	DecimalFormat(std::shared_ptr<java::lang::String> pattern);
	DecimalFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DecimalFormatSymbols> symbols);
	DecimalFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DecimalFormatSymbols> inputSymbols,int style);
	DecimalFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DecimalFormatSymbols> symbols,std::shared_ptr<android::icu::text::CurrencyPluralInfo> infoInput,int style);
	static int match(std::shared_ptr<java::lang::String> text,int pos,int ch);
	static int match(std::shared_ptr<java::lang::String> text,int pos,std::shared_ptr<java::lang::String> str);
	double virtual adjustNumberAsInFormatting(double number);
	void virtual applyLocalizedPattern(std::shared_ptr<java::lang::String> pattern);
	void virtual applyPattern(std::shared_ptr<java::lang::String> pattern);
	bool virtual areSignificantDigitsUsed();
	std::shared_ptr<java::lang::Object> virtual clone();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::StringBuffer> virtual format(double number,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition);
	std::shared_ptr<java::lang::StringBuffer> virtual format(long long number,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<android::icu::math::BigDecimal> cVar3,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::math::BigDecimal> number,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::math::BigInteger> number,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition);
	std::shared_ptr<java::text::AttributedCharacterIterator> virtual formatToCharacterIterator(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::text::AttributedCharacterIterator> virtual formatToCharacterIterator(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> unit);
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> virtual getCurrencyPluralInfo();
	std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> virtual getCurrencyUsage();
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> virtual getDecimalFormatSymbols();
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> virtual getFixedDecimal(double number);
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> virtual getFixedDecimal(double number,std::shared_ptr<android::icu::text::DigitList> dl);
	int virtual getFormatWidth();
	int virtual getGroupingSize();
	std::shared_ptr<java::math::MathContext> virtual getMathContext();
	std::shared_ptr<android::icu::math::MathContext> virtual getMathContextICU();
	int virtual getMaximumSignificantDigits();
	unsigned char virtual getMinimumExponentDigits();
	int virtual getMinimumSignificantDigits();
	int virtual getMultiplier();
	std::shared_ptr<java::lang::String> virtual getNegativePrefix();
	std::shared_ptr<java::lang::String> virtual getNegativeSuffix();
	char virtual getPadCharacter();
	int virtual getPadPosition();
	int virtual getParseMaxDigits();
	std::shared_ptr<java::lang::String> virtual getPositivePrefix();
	std::shared_ptr<java::lang::String> virtual getPositiveSuffix();
	std::shared_ptr<java::math::BigDecimal> virtual getRoundingIncrement();
	int virtual getRoundingMode();
	int virtual getSecondaryGroupingSize();
	int virtual hashCode();
	bool virtual isDecimalPatternMatchRequired();
	bool virtual isDecimalSeparatorAlwaysShown();
	bool virtual isExponentSignAlwaysShown();
	bool virtual isNumberNegative(double number);
	bool virtual isParseBigDecimal();
	bool virtual isScientificNotation();
	std::shared_ptr<java::lang::Number> virtual parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition);
	std::shared_ptr<android::icu::util::CurrencyAmount> virtual parseCurrency(std::shared_ptr<java::lang::CharSequence> text,std::shared_ptr<java::text::ParsePosition> pos);
	void virtual setCurrency(std::shared_ptr<android::icu::util::Currency> theCurrency);
	void virtual setCurrencyPluralInfo(std::shared_ptr<android::icu::text::CurrencyPluralInfo> newInfo);
	void virtual setCurrencyUsage(std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> newUsage);
	void virtual setDecimalFormatSymbols(std::shared_ptr<android::icu::text::DecimalFormatSymbols> newSymbols);
	void virtual setDecimalPatternMatchRequired(bool value);
	void virtual setDecimalSeparatorAlwaysShown(bool newValue);
	void virtual setExponentSignAlwaysShown(bool expSignAlways);
	void virtual setFormatWidth(int width);
	void virtual setGroupingSize(int newValue);
	void virtual setMathContext(std::shared_ptr<java::math::MathContext> newValue);
	void virtual setMathContextICU(std::shared_ptr<android::icu::math::MathContext> newValue);
	void virtual setMaximumFractionDigits(int newValue);
	void virtual setMaximumIntegerDigits(int newValue);
	void virtual setMaximumSignificantDigits(int cVar1);
	void virtual setMinimumExponentDigits(unsigned char minExpDig);
	void virtual setMinimumFractionDigits(int newValue);
	void virtual setMinimumIntegerDigits(int newValue);
	void virtual setMinimumSignificantDigits(int cVar1);
	void virtual setMultiplier(int newValue);
	void virtual setNegativePrefix(std::shared_ptr<java::lang::String> newValue);
	void virtual setNegativeSuffix(std::shared_ptr<java::lang::String> newValue);
	void virtual setPadCharacter(char padChar);
	void virtual setPadPosition(int padPos);
	void virtual setParseBigDecimal(bool value);
	void virtual setParseMaxDigits(int newValue);
	void virtual setPositivePrefix(std::shared_ptr<java::lang::String> newValue);
	void virtual setPositiveSuffix(std::shared_ptr<java::lang::String> newValue);
	void virtual setRoundingIncrement(double newValue);
	void virtual setRoundingIncrement(std::shared_ptr<android::icu::math::BigDecimal> newValue);
	void virtual setRoundingIncrement(std::shared_ptr<java::math::BigDecimal> newValue);
	void virtual setRoundingMode(int roundingMode);
	void virtual setScientificNotation(bool useScientific);
	void virtual setSecondaryGroupingSize(int newValue);
	void virtual setSignificantDigitsUsed(bool useSignificantDigits);
	std::shared_ptr<android::icu::text::DigitList> virtual toDigitList(double number);
	std::shared_ptr<java::lang::String> virtual toLocalizedPattern();
	std::shared_ptr<java::lang::String> virtual toPattern();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DecimalFormat::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DecimalFormat(){
	}

}; // class DecimalFormat
}; // namespace android::icu::text

#endif //__android_icu_text_DecimalFormat__

