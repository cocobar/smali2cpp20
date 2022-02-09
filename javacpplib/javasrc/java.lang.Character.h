#ifndef __java_lang_Character__
#define __java_lang_Character__
// H L:\smali2cpp20\x64\Release\out\java\lang\Character.smali
#include "java2ctype.h"
#include "java.io.Serializable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Class.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::lang{
class Character : public java::io::Serializable, public java::lang::Comparable<java::lang::Character> {
protected:
private:
	static std::shared_ptr<unsigned char[]> DIRECTIONALITY;
	static long long serialVersionUID;
	char value;
	static std::shared_ptr<java::lang::String> getNameImpl(int var0) = 0;
public:
	static int BYTES;
	static unsigned char COMBINING_SPACING_MARK;
	static unsigned char CONNECTOR_PUNCTUATION;
	static unsigned char CONTROL;
	static unsigned char CURRENCY_SYMBOL;
	static unsigned char DASH_PUNCTUATION;
	static unsigned char DECIMAL_DIGIT_NUMBER;
	static unsigned char DIRECTIONALITY_ARABIC_NUMBER;
	static unsigned char DIRECTIONALITY_BOUNDARY_NEUTRAL;
	static unsigned char DIRECTIONALITY_COMMON_NUMBER_SEPARATOR;
	static unsigned char DIRECTIONALITY_EUROPEAN_NUMBER;
	static unsigned char DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR;
	static unsigned char DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR;
	static unsigned char DIRECTIONALITY_LEFT_TO_RIGHT;
	static unsigned char DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING;
	static unsigned char DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE;
	static unsigned char DIRECTIONALITY_NONSPACING_MARK;
	static unsigned char DIRECTIONALITY_OTHER_NEUTRALS;
	static unsigned char DIRECTIONALITY_PARAGRAPH_SEPARATOR;
	static unsigned char DIRECTIONALITY_POP_DIRECTIONAL_FORMAT;
	static unsigned char DIRECTIONALITY_RIGHT_TO_LEFT;
	static unsigned char DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC;
	static unsigned char DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING;
	static unsigned char DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE;
	static unsigned char DIRECTIONALITY_SEGMENT_SEPARATOR;
	static unsigned char DIRECTIONALITY_UNDEFINED;
	static unsigned char DIRECTIONALITY_WHITESPACE;
	static unsigned char ENCLOSING_MARK;
	static unsigned char END_PUNCTUATION;
	static int ERROR;
	static unsigned char FINAL_QUOTE_PUNCTUATION;
	static unsigned char FORMAT;
	static unsigned char INITIAL_QUOTE_PUNCTUATION;
	static unsigned char LETTER_NUMBER;
	static unsigned char LINE_SEPARATOR;
	static unsigned char LOWERCASE_LETTER;
	static unsigned char MATH_SYMBOL;
	static int MAX_CODE_POINT;
	static char MAX_HIGH_SURROGATE;
	static char MAX_LOW_SURROGATE;
	static int MAX_RADIX;
	static char MAX_SURROGATE;
	static char MAX_VALUE;
	static int MIN_CODE_POINT;
	static char MIN_HIGH_SURROGATE;
	static char MIN_LOW_SURROGATE;
	static int MIN_RADIX;
	static int MIN_SUPPLEMENTARY_CODE_POINT;
	static char MIN_SURROGATE;
	static char MIN_VALUE;
	static unsigned char MODIFIER_LETTER;
	static unsigned char MODIFIER_SYMBOL;
	static unsigned char NON_SPACING_MARK;
	static unsigned char OTHER_LETTER;
	static unsigned char OTHER_NUMBER;
	static unsigned char OTHER_PUNCTUATION;
	static unsigned char OTHER_SYMBOL;
	static unsigned char PARAGRAPH_SEPARATOR;
	static unsigned char PRIVATE_USE;
	static int SIZE;
	static unsigned char SPACE_SEPARATOR;
	static unsigned char START_PUNCTUATION;
	static unsigned char SURROGATE;
	static unsigned char TITLECASE_LETTER;
	static std::shared_ptr<java::lang::Class<java::lang::Character>> TYPE;
	static unsigned char UNASSIGNED;
	static unsigned char UPPERCASE_LETTER;
	static void static_cinit();
	Character(char value);
	static int charCount(int codePoint);
	static int codePointAt(std::shared_ptr<java::lang::CharSequence> seq,int index);
	static int codePointAt(std::shared_ptr<char[]> a,int index);
	static int codePointAt(std::shared_ptr<char[]> a,int index,int limit);
	static int codePointAtImpl(std::shared_ptr<char[]> a,int index,int limit);
	static int codePointBefore(std::shared_ptr<java::lang::CharSequence> seq,int index);
	static int codePointBefore(std::shared_ptr<char[]> a,int index);
	static int codePointBefore(std::shared_ptr<char[]> a,int index,int start);
	static int codePointBeforeImpl(std::shared_ptr<char[]> a,int index,int start);
	static int codePointCount(std::shared_ptr<java::lang::CharSequence> seq,int beginIndex,int endIndex);
	static int codePointCount(std::shared_ptr<char[]> a,int offset,int count);
	static int codePointCountImpl(std::shared_ptr<char[]> a,int offset,int count);
	static int compare(char x,char y);
	static int digit(char ch,int radix);
	static int digit(int codePoint,int radix);
	static int digitImpl(int var0,int var1);
	static char forDigit(int digit,int radix);
	static unsigned char getDirectionality(char ch);
	static unsigned char getDirectionality(int codePoint);
	static unsigned char getDirectionalityImpl(int var0);
	static std::shared_ptr<java::lang::String> getName(int codePoint);
	static int getNumericValue(char ch);
	static int getNumericValue(int codePoint);
	static int getNumericValueImpl(int var0);
	static int getType(char ch);
	static int getType(int codePoint);
	static int getTypeImpl(int var0);
	static int hashCode(char value);
	static char highSurrogate(int codePoint);
	static bool isAlphabetic(int codePoint);
	static bool isAlphabeticImpl(int var0);
	static bool isBmpCodePoint(int codePoint);
	static bool isDefined(char ch);
	static bool isDefined(int codePoint);
	static bool isDefinedImpl(int var0);
	static bool isDigit(char ch);
	static bool isDigit(int codePoint);
	static bool isDigitImpl(int var0);
	static bool isHighSurrogate(char ch);
	static bool isISOControl(char ch);
	static bool isISOControl(int codePoint);
	static bool isIdentifierIgnorable(char ch);
	static bool isIdentifierIgnorable(int codePoint);
	static bool isIdentifierIgnorableImpl(int var0);
	static bool isIdeographic(int codePoint);
	static bool isIdeographicImpl(int var0);
	static bool isJavaIdentifierPart(char ch);
	static bool isJavaIdentifierPart(int codePoint);
	static bool isJavaIdentifierStart(char ch);
	static bool isJavaIdentifierStart(int codePoint);
	static bool isJavaLetter(char ch);
	static bool isJavaLetterOrDigit(char ch);
	static bool isLetter(char ch);
	static bool isLetter(int codePoint);
	static bool isLetterImpl(int var0);
	static bool isLetterOrDigit(char ch);
	static bool isLetterOrDigit(int codePoint);
	static bool isLetterOrDigitImpl(int var0);
	static bool isLowSurrogate(char ch);
	static bool isLowerCase(char ch);
	static bool isLowerCase(int codePoint);
	static bool isLowerCaseImpl(int var0);
	static bool isMirrored(char ch);
	static bool isMirrored(int codePoint);
	static bool isMirroredImpl(int var0);
	static bool isSpace(char ch);
	static bool isSpaceChar(char ch);
	static bool isSpaceChar(int codePoint);
	static bool isSpaceCharImpl(int var0);
	static bool isSupplementaryCodePoint(int codePoint);
	static bool isSurrogate(char ch);
	static bool isSurrogatePair(char high,char low);
	static bool isTitleCase(char ch);
	static bool isTitleCase(int codePoint);
	static bool isTitleCaseImpl(int var0);
	static bool isUnicodeIdentifierPart(char ch);
	static bool isUnicodeIdentifierPart(int codePoint);
	static bool isUnicodeIdentifierPartImpl(int var0);
	static bool isUnicodeIdentifierStart(char ch);
	static bool isUnicodeIdentifierStart(int codePoint);
	static bool isUnicodeIdentifierStartImpl(int var0);
	static bool isUpperCase(char ch);
	static bool isUpperCase(int codePoint);
	static bool isUpperCaseImpl(int var0);
	static bool isValidCodePoint(int codePoint);
	static bool isWhitespace(char ch);
	static bool isWhitespace(int codePoint);
	static bool isWhitespaceImpl(int var0);
	static char lowSurrogate(int codePoint);
	static int offsetByCodePoints(std::shared_ptr<java::lang::CharSequence> seq,int index,int codePointOffset);
	static int offsetByCodePoints(std::shared_ptr<char[]> a,int start,int count,int index,int codePointOffset);
	static int offsetByCodePointsImpl(std::shared_ptr<char[]> a,int start,int count,int index,int codePointOffset);
	static char reverseBytes(char ch);
	static int toChars(int codePoint,std::shared_ptr<char[]> dst,int dstIndex);
	static char toChars(int codePoint);
	static int toCodePoint(char high,char low);
	static char toLowerCase(char ch);
	static int toLowerCase(int codePoint);
	static int toLowerCaseImpl(int var0);
	static std::shared_ptr<java::lang::String> toString(char c);
	static void toSurrogates(int codePoint,std::shared_ptr<char[]> dst,int index);
	static char toTitleCase(char ch);
	static int toTitleCase(int codePoint);
	static int toTitleCaseImpl(int var0);
	static char toUpperCase(char ch);
	static int toUpperCase(int codePoint);
	static int toUpperCaseImpl(int var0);
	static std::shared_ptr<java::lang::Character> valueOf(char c);
	char virtual charValue();
	int virtual compareTo(std::shared_ptr<java::lang::Character> anotherCharacter);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Character::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Character(){
	}

}; // class Character
}; // namespace java::lang

#endif //__java_lang_Character__

