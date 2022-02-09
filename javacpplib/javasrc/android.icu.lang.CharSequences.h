#ifndef __android_icu_lang_CharSequences__
#define __android_icu_lang_CharSequences__
// H L:\smali2cpp20\x64\Release\out\android\icu\lang\CharSequences.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::lang{
class CharSequences : public java::lang::Object {
protected:
private:
	CharSequences();
public:
	static int codePoints(std::shared_ptr<java::lang::CharSequence> s);
	static int compare(int codepoint,std::shared_ptr<java::lang::CharSequence> a);
	static int compare(std::shared_ptr<java::lang::CharSequence> string,int codePoint);
	static int compare(std::shared_ptr<java::lang::CharSequence> a,std::shared_ptr<java::lang::CharSequence> b);
	static bool equals(int codepoint,std::shared_ptr<java::lang::CharSequence> other);
	static bool equals(std::shared_ptr<java::lang::CharSequence> other,int codepoint);
	static bool equals(std::shared_ptr<T> a,std::shared_ptr<T> b);
	static bool equalsChars(std::shared_ptr<java::lang::CharSequence> a,std::shared_ptr<java::lang::CharSequence> b);
	static int getSingleCodePoint(std::shared_ptr<java::lang::CharSequence> s);
	static int indexOf(std::shared_ptr<java::lang::CharSequence> s,int codePoint);
	static int matchAfter(std::shared_ptr<java::lang::CharSequence> a,std::shared_ptr<java::lang::CharSequence> b,int aIndex,int bIndex);
	static bool onCharacterBoundary(std::shared_ptr<java::lang::CharSequence> s,int i);
	int virtual codePointLength(std::shared_ptr<java::lang::CharSequence> s);
public:
	virtual ~CharSequences(){
	}

}; // class CharSequences
}; // namespace android::icu::lang

#endif //__android_icu_lang_CharSequences__

