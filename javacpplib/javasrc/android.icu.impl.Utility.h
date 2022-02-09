#ifndef __android_icu_impl_Utility__
#define __android_icu_impl_Utility__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Utility.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.util.regex.Pattern.h"

namespace android::icu::impl{
class Utility : public java::lang::Object {
protected:
private:
	static char APOSTROPHE;
	static char BACKSLASH;
	static char ESCAPE;
	static int MAGIC_UNSIGNED;
	static std::shared_ptr<char[]> UNESCAPE_MAP;
	static void appendEncodedByte(std::shared_ptr<java::lang::Appendable> buffer,unsigned char value,std::shared_ptr<unsigned char[]> state);
	static void appendInt(std::shared_ptr<java::lang::Appendable> buffer,int value);
	static void encodeRun(std::shared_ptr<java::lang::Appendable> buffer,unsigned char value,int cVar1,std::shared_ptr<unsigned char[]> state);
	static void encodeRun(std::shared_ptr<java::lang::Appendable> buffer,int value,int cVar1);
	static void encodeRun(std::shared_ptr<java::lang::Appendable> buffer,short value,int cVar1);
	static void recursiveAppendNumber(std::shared_ptr<java::lang::Appendable> result,int n,int radix,int minDigits);
public:
	static std::shared_ptr<char[]> DIGITS;
	static unsigned char ESCAPE_BYTE;
	static std::shared_ptr<char[]> HEX_DIGIT;
	static std::shared_ptr<java::lang::String> LINE_SEPARATOR;
	static void static_cinit();
	Utility();
	static unsigned char RLEStringToByteArray(std::shared_ptr<java::lang::String> s);
	static char RLEStringToCharArray(std::shared_ptr<java::lang::String> s);
	static int RLEStringToIntArray(std::shared_ptr<java::lang::String> s);
	static short RLEStringToShortArray(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::Appendable> appendNumber(std::shared_ptr<java::lang::Appendable> result,int n,int radix,int minDigits);
	static void appendToRule(std::shared_ptr<java::lang::StringBuffer> rule,int c,bool isLiteral,bool escapeUnprintable,std::shared_ptr<java::lang::StringBuffer> quoteBuf);
	static void appendToRule(std::shared_ptr<java::lang::StringBuffer> rule,std::shared_ptr<android::icu::text::UnicodeMatcher> matcher,bool escapeUnprintable,std::shared_ptr<java::lang::StringBuffer> quoteBuf);
	static void appendToRule(std::shared_ptr<java::lang::StringBuffer> rule,std::shared_ptr<java::lang::String> text,bool isLiteral,bool escapeUnprintable,std::shared_ptr<java::lang::StringBuffer> quoteBuf);
	static bool arrayEquals(std::shared_ptr<java::lang::Object> source,std::shared_ptr<java::lang::Object> target);
	static bool arrayEquals(std::shared_ptr<unsigned char[]> source,std::shared_ptr<java::lang::Object> target);
	static bool arrayEquals(std::shared_ptr<double[]> source,std::shared_ptr<java::lang::Object> target);
	static bool arrayEquals(std::shared_ptr<int[]> source,std::shared_ptr<java::lang::Object> target);
	static bool arrayEquals(std::shared_ptr<std::vector<java::lang::Object>> source,std::shared_ptr<java::lang::Object> target);
	static bool arrayRegionMatches(std::shared_ptr<unsigned char[]> source,int sourceStart,std::shared_ptr<unsigned char[]> target,int targetStart,int len);
	static bool arrayRegionMatches(std::shared_ptr<char[]> source,int sourceStart,std::shared_ptr<char[]> target,int targetStart,int len);
	static bool arrayRegionMatches(std::shared_ptr<double[]> source,int sourceStart,std::shared_ptr<double[]> target,int targetStart,int len);
	static bool arrayRegionMatches(std::shared_ptr<int[]> source,int sourceStart,std::shared_ptr<int[]> target,int targetStart,int len);
	static bool arrayRegionMatches(std::shared_ptr<std::vector<java::lang::Object>> source,int sourceStart,std::shared_ptr<std::vector<java::lang::Object>> target,int targetStart,int len);
	static std::shared_ptr<java::lang::String> arrayToRLEString(std::shared_ptr<unsigned char[]> a);
	static std::shared_ptr<java::lang::String> arrayToRLEString(std::shared_ptr<char[]> a);
	static std::shared_ptr<java::lang::String> arrayToRLEString(std::shared_ptr<int[]> a);
	static std::shared_ptr<java::lang::String> arrayToRLEString(std::shared_ptr<short[]> a);
	static int checkCompare(std::shared_ptr<java::lang::Comparable<T>> a,std::shared_ptr<java::lang::Comparable<T>> b);
	static int checkHash(std::shared_ptr<java::lang::Object> a);
	static int compareUnsigned(int source,int target);
	static std::shared_ptr<java::lang::String> escape(std::shared_ptr<java::lang::String> s);
	static bool escapeUnprintable(std::shared_ptr<java::lang::Appendable> result,int c);
	static std::shared_ptr<java::lang::String> format1ForSource(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> formatForSource(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> fromHex(std::shared_ptr<java::lang::String> string,int minLength,std::shared_ptr<java::lang::String> separator);
	static std::shared_ptr<java::lang::String> fromHex(std::shared_ptr<java::lang::String> string,int minLength,std::shared_ptr<java::util::regex::Pattern> separator);
	static int getInt(std::shared_ptr<java::lang::String> s,int i);
	static std::shared_ptr<java::lang::Appendable> hex(std::shared_ptr<java::lang::CharSequence> s,int width,std::shared_ptr<java::lang::CharSequence> separator,bool useCodePoints,std::shared_ptr<java::lang::Appendable> result);
	static std::shared_ptr<java::lang::String> hex(long long ch);
	static std::shared_ptr<java::lang::String> hex(long long cVar0,int places);
	static std::shared_ptr<java::lang::String> hex(std::shared_ptr<java::lang::CharSequence> s);
	static std::shared_ptr<java::lang::String> hex(std::shared_ptr<java::lang::CharSequence> s,int width,std::shared_ptr<java::lang::CharSequence> separator);
	static std::shared_ptr<java::lang::String> hex(std::shared_ptr<unsigned char[]> o,int start,int end,std::shared_ptr<java::lang::String> separator);
	static unsigned char highBit(int cVar4);
	static bool isUnprintable(int c);
	static int lookup(std::shared_ptr<java::lang::String> source,std::shared_ptr<std::vector<java::lang::String>> target);
	static bool objectEquals(std::shared_ptr<java::lang::Object> a,std::shared_ptr<java::lang::Object> b);
	static bool parseChar(std::shared_ptr<java::lang::String> id,std::shared_ptr<int[]> pos,char ch);
	static int parseInteger(std::shared_ptr<java::lang::String> rule,std::shared_ptr<int[]> pos,int limit);
	static int parseNumber(std::shared_ptr<java::lang::String> text,std::shared_ptr<int[]> pos,int radix);
	static int parsePattern(std::shared_ptr<java::lang::String> rule,int pos,int limit,std::shared_ptr<java::lang::String> pattern,std::shared_ptr<int[]> parsedInts);
	static int parsePattern(std::shared_ptr<java::lang::String> pat,std::shared_ptr<android::icu::text::Replaceable> text,int index,int limit);
	static std::shared_ptr<java::lang::String> parseUnicodeIdentifier(std::shared_ptr<java::lang::String> str,std::shared_ptr<int[]> pos);
	static int quotedIndexOf(std::shared_ptr<java::lang::String> text,int start,int limit,std::shared_ptr<java::lang::String> setOfChars);
	static std::shared_ptr<java::lang::String> repeat(std::shared_ptr<java::lang::String> s,int count);
	static bool sameObjects(std::shared_ptr<java::lang::Object> a,std::shared_ptr<java::lang::Object> b);
	static void split(std::shared_ptr<java::lang::String> s,char divider,std::shared_ptr<std::vector<java::lang::String>> output);
	static std::shared_ptr<java::lang::String> split(std::shared_ptr<java::lang::String> s,char divider);
	static std::shared_ptr<java::lang::String> splitString(std::shared_ptr<java::lang::String> src,std::shared_ptr<java::lang::String> target);
	static std::shared_ptr<java::lang::String> splitWhitespace(std::shared_ptr<java::lang::String> src);
	static std::shared_ptr<java::lang::String> unescape(std::shared_ptr<java::lang::String> s);
	static int unescapeAt(std::shared_ptr<java::lang::String> s,std::shared_ptr<int[]> offset16);
	static std::shared_ptr<java::lang::String> unescapeLeniently(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> valueOf(std::shared_ptr<int[]> source);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::Utility::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Utility(){
	}

}; // class Utility
}; // namespace android::icu::impl

#endif //__android_icu_impl_Utility__

