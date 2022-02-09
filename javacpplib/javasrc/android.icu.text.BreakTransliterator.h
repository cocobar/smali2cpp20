#ifndef __android_icu_text_BreakTransliterator__
#define __android_icu_text_BreakTransliterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BreakTransliterator.smali
#include "java2ctype.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

namespace android::icu::text{
class BreakTransliterator : public android::icu::text::Transliterator {
protected:
	void virtual handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos,bool incremental);
private:
	std::shared_ptr<android::icu::text::BreakIterator> bi;
	std::shared_ptr<int[]> boundaries;
	int boundaryCount;
	std::shared_ptr<java::lang::String> insertion;
public:
	static int LETTER_OR_MARK_MASK;
	BreakTransliterator(std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::text::UnicodeFilter> filter);
	BreakTransliterator(std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::text::UnicodeFilter> filter,std::shared_ptr<android::icu::text::BreakIterator> bi,std::shared_ptr<java::lang::String> insertion);
	static void register();
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet);
	std::shared_ptr<android::icu::text::BreakIterator> virtual getBreakIterator();
	std::shared_ptr<java::lang::String> virtual getInsertion();
	void virtual setBreakIterator(std::shared_ptr<android::icu::text::BreakIterator> bi);
	void virtual setInsertion(std::shared_ptr<java::lang::String> insertion);
public:
	virtual ~BreakTransliterator(){
	}

}; // class BreakTransliterator
}; // namespace android::icu::text

#endif //__android_icu_text_BreakTransliterator__

