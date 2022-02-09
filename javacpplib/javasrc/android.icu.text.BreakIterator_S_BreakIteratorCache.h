#ifndef __android_icu_text_BreakIterator_S_BreakIteratorCache__
#define __android_icu_text_BreakIterator_S_BreakIteratorCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BreakIterator$BreakIteratorCache.smali
#include "java2ctype.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class BreakIterator_S_BreakIteratorCache : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::text::BreakIterator> iter;
	std::shared_ptr<android::icu::util::ULocale> where;
public:
	BreakIterator_S_BreakIteratorCache(std::shared_ptr<android::icu::util::ULocale> where,std::shared_ptr<android::icu::text::BreakIterator> iter);
	std::shared_ptr<android::icu::text::BreakIterator> virtual createBreakInstance();
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale();
public:
	virtual ~BreakIterator_S_BreakIteratorCache(){
	}

}; // class BreakIterator_S_BreakIteratorCache
}; // namespace android::icu::text

#endif //__android_icu_text_BreakIterator_S_BreakIteratorCache__

