#ifndef __android_icu_text_StringSearch_S_Match__
#define __android_icu_text_StringSearch_S_Match__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringSearch$Match.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class StringSearch_S_Match : public java::lang::Object {
protected:
private:
	StringSearch_S_Match();
public:
	int limit_;
	int start_;
	StringSearch_S_Match(std::shared_ptr<android::icu::text::StringSearch_S_Match> _this0);
public:
	virtual ~StringSearch_S_Match(){
	}

}; // class StringSearch_S_Match
}; // namespace android::icu::text

#endif //__android_icu_text_StringSearch_S_Match__

