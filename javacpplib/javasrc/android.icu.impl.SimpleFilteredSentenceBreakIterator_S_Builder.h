#ifndef __android_icu_impl_SimpleFilteredSentenceBreakIterator_S_Builder__
#define __android_icu_impl_SimpleFilteredSentenceBreakIterator_S_Builder__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\SimpleFilteredSentenceBreakIterator$Builder.smali
#include "java2ctype.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.FilteredBreakIteratorBuilder.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.HashSet.h"

namespace android::icu::impl{
class SimpleFilteredSentenceBreakIterator_S_Builder : public android::icu::text::FilteredBreakIteratorBuilder {
protected:
private:
	std::shared_ptr<java::util::HashSet<java::lang::String>> filterSet;
public:
	static int AddToForward;
	static int MATCH;
	static int PARTIAL;
	static int SuppressInReverse;
	SimpleFilteredSentenceBreakIterator_S_Builder();
	SimpleFilteredSentenceBreakIterator_S_Builder(std::shared_ptr<android::icu::util::ULocale> loc);
	std::shared_ptr<android::icu::text::BreakIterator> virtual build(std::shared_ptr<android::icu::text::BreakIterator> adoptBreakIterator);
	bool virtual suppressBreakAfter(std::shared_ptr<java::lang::String> str);
	bool virtual unsuppressBreakAfter(std::shared_ptr<java::lang::String> str);
public:
	virtual ~SimpleFilteredSentenceBreakIterator_S_Builder(){
	}

}; // class SimpleFilteredSentenceBreakIterator_S_Builder
}; // namespace android::icu::impl

#endif //__android_icu_impl_SimpleFilteredSentenceBreakIterator_S_Builder__

