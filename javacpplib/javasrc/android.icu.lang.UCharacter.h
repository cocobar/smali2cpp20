#ifndef __android_icu_lang_UCharacter__
#define __android_icu_lang_UCharacter__
// H L:\smali2cpp20\x64\Release\out\android\icu\lang\UCharacter.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacterEnums_S_ECharacterCategory.h"
#include "android.icu.lang.UCharacterEnums_S_ECharacterDirection.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.Edits.h"
#include "android.icu.util.RangeValueIterator.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.ValueIterator.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Locale.h"

namespace android::icu::lang{
class UCharacter : public android::icu::lang::UCharacterEnums_S_ECharacterCategory, public android::icu::lang::UCharacterEnums_S_ECharacterDirection {
protected:
private:
	static int APPLICATION_PROGRAM_COMMAND_;
	static int BREAK_MASK;
	static int CJK_IDEOGRAPH_COMPLEX_EIGHT_;
	static int CJK_IDEOGRAPH_COMPLEX_FIVE_;
	static int CJK_IDEOGRAPH_COMPLEX_FOUR_;
	static int CJK_IDEOGRAPH_COMPLEX_HUNDRED_;
	static int CJK_IDEOGRAPH_COMPLEX_NINE_;
	static int CJK_IDEOGRAPH_COMPLEX_ONE_;
	static int CJK_IDEOGRAPH_COMPLEX_SEVEN_;
	static int CJK_IDEOGRAPH_COMPLEX_SIX_;
	static int CJK_IDEOGRAPH_COMPLEX_TEN_;
	static int CJK_IDEOGRAPH_COMPLEX_THOUSAND_;
	static int CJK_IDEOGRAPH_COMPLEX_THREE_;
	static int CJK_IDEOGRAPH_COMPLEX_TWO_;
	static int CJK_IDEOGRAPH_COMPLEX_ZERO_;
	static int CJK_IDEOGRAPH_EIGHTH_;
	static int CJK_IDEOGRAPH_FIFTH_;
	static int CJK_IDEOGRAPH_FIRST_;
	static int CJK_IDEOGRAPH_FOURTH_;
	static int CJK_IDEOGRAPH_HUNDRED_;
	static int CJK_IDEOGRAPH_HUNDRED_MILLION_;
	static int CJK_IDEOGRAPH_NINETH_;
	static int CJK_IDEOGRAPH_SECOND_;
	static int CJK_IDEOGRAPH_SEVENTH_;
	static int CJK_IDEOGRAPH_SIXTH_;
	static int CJK_IDEOGRAPH_TEN_;
	static int CJK_IDEOGRAPH_TEN_THOUSAND_;
	static int CJK_IDEOGRAPH_THIRD_;
	static int CJK_IDEOGRAPH_THOUSAND_;
	static int DELETE_;
	static int FIGURE_SPACE_;
	static int IDEOGRAPHIC_NUMBER_ZERO_;
	static int LAST_CHAR_MASK_;
	static int NARROW_NO_BREAK_SPACE_;
	static int NO_BREAK_SPACE_;
	static int UNIT_SEPARATOR_;
	UCharacter();
	static std::shared_ptr<java::lang::String> applyEdits(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::StringBuilder> replacementChars,std::shared_ptr<android::icu::text::Edits> edits);
	static int getCaseLocale(std::shared_ptr<android::icu::util::ULocale> cVar0);
	static int getCaseLocale(std::shared_ptr<java::util::Locale> cVar0);
	static int getDefaultCaseLocale();
	static std::shared_ptr<java::lang::String> toLowerCase(int caseLocale,std::shared_ptr<java::lang::String> str);
	static std::shared_ptr<java::lang::String> toTitleCase(int caseLocale,int options,std::shared_ptr<android::icu::text::BreakIterator> titleIter,std::shared_ptr<java::lang::String> str);
	static std::shared_ptr<java::lang::String> toUpperCase(int caseLocale,std::shared_ptr<java::lang::String> str);
public:
	static int FOLD_CASE_DEFAULT;
	static int FOLD_CASE_EXCLUDE_SPECIAL_I;
	static int MAX_CODE_POINT;
	static char MAX_HIGH_SURROGATE;
	static char MAX_LOW_SURROGATE;
	static int MAX_RADIX;
	static char MAX_SURROGATE;
	static int MAX_VALUE;
	static int MIN_CODE_POINT;
	static char MIN_HIGH_SURROGATE;
	static char MIN_LOW_SURROGATE;
	static int MIN_RADIX;
	static int MIN_SUPPLEMENTARY_CODE_POINT;
	static char MIN_SURROGATE;
	static int MIN_VALUE;
	static double NO_NUMERIC_VALUE;
	static int REPLACEMENT_CHAR;
	static int SUPPLEMENTARY_MIN_VALUE;
	static int TITLECASE_NO_BREAK_ADJUSTMENT;
	static int TITLECASE_NO_LOWERCASE;
	static int charCount(int cp);
	static int codePointAt(std::shared_ptr<java::lang::CharSequence> seq,int index);
	static int codePointAt(std::shared_ptr<char[]> text,int index);
	static int codePointAt(std::shared_ptr<char[]> text,int index,int limit);
	static int codePointBefore(std::shared_ptr<java::lang::CharSequence> seq,int index);
	static int codePointBefore(std::shared_ptr<char[]> text,int index);
	static int codePointBefore(std::shared_ptr<char[]> text,int index,int limit);
	static int codePointCount(std::shared_ptr<java::lang::CharSequence> text,int start,int limit);
	static int codePointCount(std::shared_ptr<char[]> text,int start,int limit);
	static int digit(int ch);
	static int digit(int ch,int radix);
	static int foldCase(int ch,int options);
	static int foldCase(int ch,bool defaultmapping);
	static std::shared_ptr<java::lang::String> foldCase(std::shared_ptr<java::lang::String> str,int options);
	static std::shared_ptr<java::lang::String> foldCase(std::shared_ptr<java::lang::String> str,bool defaultmapping);
	static char forDigit(int digit,int radix);
	static std::shared_ptr<android::icu::util::VersionInfo> getAge(int ch);
	static int getBidiPairedBracket(int c);
	static int getCharFromExtendedName(std::shared_ptr<java::lang::String> name);
	static int getCharFromName(std::shared_ptr<java::lang::String> name);
	static int getCharFromName1_0(std::shared_ptr<java::lang::String> name);
	static int getCharFromNameAlias(std::shared_ptr<java::lang::String> name);
	static int getCodePoint(char char16);
	static int getCodePoint(char lead,char trail);
	static int getCombiningClass(int ch);
	static int getDirection(int ch);
	static unsigned char getDirectionality(int cp);
	static std::shared_ptr<java::lang::String> getExtendedName(int ch);
	static std::shared_ptr<android::icu::util::ValueIterator> getExtendedNameIterator();
	static int getHanNumericValue(int ch);
	static std::shared_ptr<java::lang::String> getISOComment(int ch);
	static int getIntPropertyMaxValue(int type);
	static int getIntPropertyMinValue(int type);
	static int getIntPropertyValue(int ch,int type);
	static int getMirror(int ch);
	static std::shared_ptr<java::lang::String> getName(int ch);
	static std::shared_ptr<java::lang::String> getName(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::String> separator);
	static std::shared_ptr<java::lang::String> getName1_0(int ch);
	static std::shared_ptr<android::icu::util::ValueIterator> getName1_0Iterator();
	static std::shared_ptr<java::lang::String> getNameAlias(int ch);
	static std::shared_ptr<android::icu::util::ValueIterator> getNameIterator();
	static int getNumericValue(int ch);
	static int getPropertyEnum(std::shared_ptr<java::lang::CharSequence> propertyAlias);
	static std::shared_ptr<java::lang::String> getPropertyName(int property,int nameChoice);
	static int getPropertyValueEnum(int property,std::shared_ptr<java::lang::CharSequence> valueAlias);
	static int getPropertyValueEnumNoThrow(int property,std::shared_ptr<java::lang::CharSequence> valueAlias);
	static std::shared_ptr<java::lang::String> getPropertyValueName(int property,int value,int nameChoice);
	static std::shared_ptr<java::lang::String> getStringPropertyValue(int propertyEnum,int codepoint,int nameChoice);
	static int getType(int ch);
	static std::shared_ptr<android::icu::util::RangeValueIterator> getTypeIterator();
	static double getUnicodeNumericValue(int ch);
	static std::shared_ptr<android::icu::util::VersionInfo> getUnicodeVersion();
	static bool hasBinaryProperty(int ch,int property);
	static bool isBMP(int ch);
	static bool isBaseForm(int ch);
	static bool isDefined(int ch);
	static bool isDigit(int ch);
	static bool isHighSurrogate(char ch);
	static bool isISOControl(int ch);
	static bool isIdentifierIgnorable(int ch);
	static bool isJavaIdentifierPart(int cp);
	static bool isJavaIdentifierStart(int cp);
	static bool isJavaLetter(int cp);
	static bool isJavaLetterOrDigit(int cp);
	static bool isLegal(int ch);
	static bool isLegal(std::shared_ptr<java::lang::String> str);
	static bool isLetter(int ch);
	static bool isLetterOrDigit(int ch);
	static bool isLowSurrogate(char ch);
	static bool isLowerCase(int ch);
	static bool isMirrored(int ch);
	static bool isPrintable(int ch);
	static bool isSpace(int ch);
	static bool isSpaceChar(int ch);
	static bool isSupplementary(int ch);
	static bool isSupplementaryCodePoint(int cp);
	static bool isSurrogatePair(char high,char low);
	static bool isTitleCase(int ch);
	static bool isUAlphabetic(int ch);
	static bool isULowercase(int ch);
	static bool isUUppercase(int ch);
	static bool isUWhiteSpace(int ch);
	static bool isUnicodeIdentifierPart(int ch);
	static bool isUnicodeIdentifierStart(int ch);
	static bool isUpperCase(int ch);
	static bool isValidCodePoint(int cp);
	static bool isWhitespace(int ch);
	static int offsetByCodePoints(std::shared_ptr<java::lang::CharSequence> text,int cVar7,int cVar6);
	static int offsetByCodePoints(std::shared_ptr<char[]> text,int start,int count,int cVar7,int cVar6);
	static int toChars(int cp,std::shared_ptr<char[]> dst,int dstIndex);
	static char toChars(int cp);
	static int toCodePoint(char high,char low);
	static int toLowerCase(int ch);
	static std::shared_ptr<java::lang::String> toLowerCase(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> str);
	static std::shared_ptr<java::lang::String> toLowerCase(std::shared_ptr<java::lang::String> str);
	static std::shared_ptr<java::lang::String> toLowerCase(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::String> str);
	static std::shared_ptr<java::lang::String> toString(int ch);
	static int toTitleCase(int ch);
	static std::shared_ptr<java::lang::String> toTitleCase(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::BreakIterator> titleIter);
	static std::shared_ptr<java::lang::String> toTitleCase(std::shared_ptr<android::icu::util::ULocale> cVar0,std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::BreakIterator> cVar1,int options);
	static std::shared_ptr<java::lang::String> toTitleCase(std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::BreakIterator> breakiter);
	static std::shared_ptr<java::lang::String> toTitleCase(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::BreakIterator> breakiter);
	static std::shared_ptr<java::lang::String> toTitleCase(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::BreakIterator> cVar0,int options);
	static std::shared_ptr<java::lang::String> toTitleFirst(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> str);
	static int toUpperCase(int ch);
	static std::shared_ptr<java::lang::String> toUpperCase(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> str);
	static std::shared_ptr<java::lang::String> toUpperCase(std::shared_ptr<java::lang::String> str);
	static std::shared_ptr<java::lang::String> toUpperCase(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::String> str);
public:
	virtual ~UCharacter(){
	}

}; // class UCharacter
}; // namespace android::icu::lang

#endif //__android_icu_lang_UCharacter__

