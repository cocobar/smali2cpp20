#ifndef __android_icu_text_UTF16__
#define __android_icu_text_UTF16__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UTF16.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

namespace android::icu::text{
class UTF16 : public java::lang::Object {
protected:
private:
	static int LEAD_SURROGATE_BITMASK;
	static int LEAD_SURROGATE_BITS;
	static int LEAD_SURROGATE_OFFSET_;
	static int LEAD_SURROGATE_SHIFT_;
	static int SURROGATE_BITMASK;
	static int SURROGATE_BITS;
	static int TRAIL_SURROGATE_BITMASK;
	static int TRAIL_SURROGATE_BITS;
	static int TRAIL_SURROGATE_MASK_;
	UTF16();
	static int _charAt(std::shared_ptr<java::lang::CharSequence> source,int offset16,char single);
	static int _charAt(std::shared_ptr<java::lang::String> source,int offset16,char single);
	static std::shared_ptr<java::lang::String> toString(int ch);
public:
	static int CODEPOINT_MAX_VALUE;
	static int CODEPOINT_MIN_VALUE;
	static int LEAD_SURROGATE_BOUNDARY;
	static int LEAD_SURROGATE_MAX_VALUE;
	static int LEAD_SURROGATE_MIN_VALUE;
	static int SINGLE_CHAR_BOUNDARY;
	static int SUPPLEMENTARY_MIN_VALUE;
	static int SURROGATE_MAX_VALUE;
	static int SURROGATE_MIN_VALUE;
	static int TRAIL_SURROGATE_BOUNDARY;
	static int TRAIL_SURROGATE_MAX_VALUE;
	static int TRAIL_SURROGATE_MIN_VALUE;
	static int append(std::shared_ptr<char[]> target,int limit,int char32);
	static std::shared_ptr<java::lang::StringBuffer> append(std::shared_ptr<java::lang::StringBuffer> target,int char32);
	static std::shared_ptr<java::lang::StringBuffer> appendCodePoint(std::shared_ptr<java::lang::StringBuffer> target,int cp);
	static int bounds(std::shared_ptr<java::lang::String> source,int offset16);
	static int bounds(std::shared_ptr<java::lang::StringBuffer> source,int offset16);
	static int bounds(std::shared_ptr<char[]> source,int start,int limit,int offset16);
	static int charAt(std::shared_ptr<android::icu::text::Replaceable> source,int offset16);
	static int charAt(std::shared_ptr<java::lang::CharSequence> source,int offset16);
	static int charAt(std::shared_ptr<java::lang::String> source,int offset16);
	static int charAt(std::shared_ptr<java::lang::StringBuffer> source,int offset16);
	static int charAt(std::shared_ptr<char[]> source,int start,int limit,int offset16);
	static int compareCodePoint(int codePoint,std::shared_ptr<java::lang::CharSequence> s);
	static int countCodePoint(std::shared_ptr<java::lang::String> source);
	static int countCodePoint(std::shared_ptr<java::lang::StringBuffer> source);
	static int countCodePoint(std::shared_ptr<char[]> source,int start,int limit);
	static int _delete_(std::shared_ptr<char[]> target,int limit,int offset16);
	static std::shared_ptr<java::lang::StringBuffer> _delete_(std::shared_ptr<java::lang::StringBuffer> target,int offset16);
	static int findCodePointOffset(std::shared_ptr<java::lang::String> source,int offset16);
	static int findCodePointOffset(std::shared_ptr<java::lang::StringBuffer> source,int offset16);
	static int findCodePointOffset(std::shared_ptr<char[]> source,int start,int limit,int offset16);
	static int findOffsetFromCodePoint(std::shared_ptr<java::lang::String> source,int offset32);
	static int findOffsetFromCodePoint(std::shared_ptr<java::lang::StringBuffer> source,int offset32);
	static int findOffsetFromCodePoint(std::shared_ptr<char[]> source,int start,int limit,int offset32);
	static int getCharCount(int char32);
	static char getLeadSurrogate(int char32);
	static int getSingleCodePoint(std::shared_ptr<java::lang::CharSequence> s);
	static char getTrailSurrogate(int char32);
	static bool hasMoreCodePointsThan(std::shared_ptr<java::lang::String> source,int number);
	static bool hasMoreCodePointsThan(std::shared_ptr<java::lang::StringBuffer> source,int number);
	static bool hasMoreCodePointsThan(std::shared_ptr<char[]> source,int start,int limit,int number);
	static int indexOf(std::shared_ptr<java::lang::String> source,int char32);
	static int indexOf(std::shared_ptr<java::lang::String> source,int char32,int fromIndex);
	static int indexOf(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> str);
	static int indexOf(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> str,int fromIndex);
	static int insert(std::shared_ptr<char[]> target,int limit,int cVar1,int char32);
	static std::shared_ptr<java::lang::StringBuffer> insert(std::shared_ptr<java::lang::StringBuffer> target,int cVar0,int char32);
	static bool isLeadSurrogate(char char16);
	static bool isSurrogate(char char16);
	static bool isTrailSurrogate(char char16);
	static int lastIndexOf(std::shared_ptr<java::lang::String> source,int char32);
	static int lastIndexOf(std::shared_ptr<java::lang::String> source,int char32,int fromIndex);
	static int lastIndexOf(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> str);
	static int lastIndexOf(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> str,int fromIndex);
	static int moveCodePointOffset(std::shared_ptr<java::lang::String> source,int offset16,int shift32);
	static int moveCodePointOffset(std::shared_ptr<java::lang::StringBuffer> source,int offset16,int shift32);
	static int moveCodePointOffset(std::shared_ptr<char[]> source,int start,int limit,int offset16,int shift32);
	static std::shared_ptr<java::lang::String> newString(std::shared_ptr<int[]> codePoints,int offset,int count);
	static std::shared_ptr<java::lang::String> replace(std::shared_ptr<java::lang::String> source,int oldChar32,int newChar32);
	static std::shared_ptr<java::lang::String> replace(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> oldStr,std::shared_ptr<java::lang::String> newStr);
	static std::shared_ptr<java::lang::StringBuffer> reverse(std::shared_ptr<java::lang::StringBuffer> source);
	static int setCharAt(std::shared_ptr<char[]> target,int limit,int offset16,int char32);
	static void setCharAt(std::shared_ptr<java::lang::StringBuffer> target,int offset16,int char32);
	static std::shared_ptr<java::lang::String> valueOf(int char32);
	static std::shared_ptr<java::lang::String> valueOf(std::shared_ptr<java::lang::String> source,int offset16);
	static std::shared_ptr<java::lang::String> valueOf(std::shared_ptr<java::lang::StringBuffer> source,int offset16);
	static std::shared_ptr<java::lang::String> valueOf(std::shared_ptr<char[]> source,int start,int limit,int offset16);
public:
	virtual ~UTF16(){
	}

}; // class UTF16
}; // namespace android::icu::text

#endif //__android_icu_text_UTF16__

