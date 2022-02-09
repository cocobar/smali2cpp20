#ifndef __android_icu_text_UnicodeSet_S_EntryRange__
#define __android_icu_text_UnicodeSet_S_EntryRange__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$EntryRange.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class UnicodeSet_S_EntryRange : public java::lang::Object {
protected:
private:
public:
	int codepoint;
	int codepointEnd;
	UnicodeSet_S_EntryRange();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~UnicodeSet_S_EntryRange(){
	}

}; // class UnicodeSet_S_EntryRange
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSet_S_EntryRange__

