#ifndef __android_icu_text_TransliteratorRegistry_S_LocaleEntry__
#define __android_icu_text_TransliteratorRegistry_S_LocaleEntry__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorRegistry$LocaleEntry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TransliteratorRegistry_S_LocaleEntry : public java::lang::Object {
protected:
private:
public:
	int direction;
	std::shared_ptr<java::lang::String> rule;
	TransliteratorRegistry_S_LocaleEntry(std::shared_ptr<java::lang::String> r,int d);
public:
	virtual ~TransliteratorRegistry_S_LocaleEntry(){
	}

}; // class TransliteratorRegistry_S_LocaleEntry
}; // namespace android::icu::text

#endif //__android_icu_text_TransliteratorRegistry_S_LocaleEntry__

