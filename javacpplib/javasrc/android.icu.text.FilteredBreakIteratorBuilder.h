#ifndef __android_icu_text_FilteredBreakIteratorBuilder__
#define __android_icu_text_FilteredBreakIteratorBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\FilteredBreakIteratorBuilder.smali
#include "java2ctype.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class FilteredBreakIteratorBuilder : public java::lang::Object {
protected:
	FilteredBreakIteratorBuilder();
private:
public:
	static std::shared_ptr<android::icu::text::FilteredBreakIteratorBuilder> createInstance();
	static std::shared_ptr<android::icu::text::FilteredBreakIteratorBuilder> createInstance(std::shared_ptr<android::icu::util::ULocale> where);
	std::shared_ptr<android::icu::text::BreakIterator> build(std::shared_ptr<android::icu::text::BreakIterator> var0);
	bool suppressBreakAfter(std::shared_ptr<java::lang::String> var0);
	bool unsuppressBreakAfter(std::shared_ptr<java::lang::String> var0);
public:
	virtual ~FilteredBreakIteratorBuilder(){
	}

}; // class FilteredBreakIteratorBuilder
}; // namespace android::icu::text

#endif //__android_icu_text_FilteredBreakIteratorBuilder__

