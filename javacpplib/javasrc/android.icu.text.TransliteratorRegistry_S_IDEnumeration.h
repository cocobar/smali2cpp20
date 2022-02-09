#ifndef __android_icu_text_TransliteratorRegistry_S_IDEnumeration__
#define __android_icu_text_TransliteratorRegistry_S_IDEnumeration__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorRegistry$IDEnumeration.smali
#include "java2ctype.h"
#include "android.icu.util.CaseInsensitiveString.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"

namespace android::icu::text{
class TransliteratorRegistry_S_IDEnumeration : public java::util::Enumeration<java::lang::String> {
protected:
private:
public:
	std::shared_ptr<java::util::Enumeration<android::icu::util::CaseInsensitiveString>> en;
	TransliteratorRegistry_S_IDEnumeration(std::shared_ptr<java::util::Enumeration<android::icu::util::CaseInsensitiveString>> e);
	bool virtual hasMoreElements();
	std::shared_ptr<java::lang::String> virtual nextElement();
public:
	virtual ~TransliteratorRegistry_S_IDEnumeration(){
	}

}; // class TransliteratorRegistry_S_IDEnumeration
}; // namespace android::icu::text

#endif //__android_icu_text_TransliteratorRegistry_S_IDEnumeration__

