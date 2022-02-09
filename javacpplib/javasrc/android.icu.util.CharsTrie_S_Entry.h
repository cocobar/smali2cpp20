#ifndef __android_icu_util_CharsTrie_S_Entry__
#define __android_icu_util_CharsTrie_S_Entry__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\CharsTrie$Entry.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class CharsTrie_S_Entry : public java::lang::Object {
protected:
private:
	CharsTrie_S_Entry();
public:
	std::shared_ptr<java::lang::CharSequence> chars;
	int value;
	CharsTrie_S_Entry(std::shared_ptr<android::icu::util::CharsTrie_S_Entry> _this0);
public:
	virtual ~CharsTrie_S_Entry(){
	}

}; // class CharsTrie_S_Entry
}; // namespace android::icu::util

#endif //__android_icu_util_CharsTrie_S_Entry__

