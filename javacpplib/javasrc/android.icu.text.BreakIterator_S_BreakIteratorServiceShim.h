#ifndef __android_icu_text_BreakIterator_S_BreakIteratorServiceShim__
#define __android_icu_text_BreakIterator_S_BreakIteratorServiceShim__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BreakIterator$BreakIteratorServiceShim.smali
#include "java2ctype.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class BreakIterator_S_BreakIteratorServiceShim : public java::lang::Object {
protected:
private:
public:
	BreakIterator_S_BreakIteratorServiceShim();
	std::shared_ptr<android::icu::text::BreakIterator> createBreakIterator(std::shared_ptr<android::icu::util::ULocale> var0,int var1) = 0;
	std::shared_ptr<java::util::Locale> getAvailableLocales() = 0;
	std::shared_ptr<android::icu::util::ULocale> getAvailableULocales() = 0;
	std::shared_ptr<java::lang::Object> registerInstance(std::shared_ptr<android::icu::text::BreakIterator> var0,std::shared_ptr<android::icu::util::ULocale> var1,int var2) = 0;
	bool unregister(std::shared_ptr<java::lang::Object> var0) = 0;
public:
	virtual ~BreakIterator_S_BreakIteratorServiceShim(){
	}

}; // class BreakIterator_S_BreakIteratorServiceShim
}; // namespace android::icu::text

#endif //__android_icu_text_BreakIterator_S_BreakIteratorServiceShim__

