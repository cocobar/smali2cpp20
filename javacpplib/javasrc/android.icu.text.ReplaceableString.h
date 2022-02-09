#ifndef __android_icu_text_ReplaceableString__
#define __android_icu_text_ReplaceableString__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ReplaceableString.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

namespace android::icu::text{
class ReplaceableString : public android::icu::text::Replaceable {
protected:
private:
	std::shared_ptr<java::lang::StringBuffer> buf;
public:
	ReplaceableString();
	ReplaceableString(std::shared_ptr<java::lang::String> str);
	ReplaceableString(std::shared_ptr<java::lang::StringBuffer> buf);
	int virtual char32At(int offset);
	char virtual charAt(int offset);
	void virtual copy(int start,int limit,int dest);
	void virtual getChars(int srcStart,int srcLimit,std::shared_ptr<char[]> dst,int dstStart);
	bool virtual hasMetaData();
	int virtual length();
	void virtual replace(int start,int limit,std::shared_ptr<java::lang::String> text);
	void virtual replace(int start,int limit,std::shared_ptr<char[]> chars,int charsStart,int charsLen);
	std::shared_ptr<java::lang::String> virtual substring(int start,int limit);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~ReplaceableString(){
	}

}; // class ReplaceableString
}; // namespace android::icu::text

#endif //__android_icu_text_ReplaceableString__

