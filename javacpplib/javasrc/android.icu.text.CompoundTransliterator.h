#ifndef __android_icu_text_CompoundTransliterator__
#define __android_icu_text_CompoundTransliterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CompoundTransliterator.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.List.h"

namespace android::icu::text{
class CompoundTransliterator : public android::icu::text::Transliterator {
protected:
	void virtual handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index,bool incremental);
private:
	int numAnonymousRBTs;
	std::shared_ptr<std::vector<android::icu::text::Transliterator>> trans;
	static void _smartAppend(std::shared_ptr<java::lang::StringBuilder> buf,char c);
	void virtual computeMaximumContextLength();
	void virtual init(std::shared_ptr<java::util::List<android::icu::text::Transliterator>> list,int direction,bool fixReverseID);
public:
	CompoundTransliterator(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::text::UnicodeFilter> filter2,std::shared_ptr<std::vector<android::icu::text::Transliterator>> trans2,int numAnonymousRBTs2);
	CompoundTransliterator(std::shared_ptr<java::util::List<android::icu::text::Transliterator>> list);
	CompoundTransliterator(std::shared_ptr<java::util::List<android::icu::text::Transliterator>> list,int numAnonymousRBTs);
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> filter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet);
	int virtual getCount();
	std::shared_ptr<android::icu::text::Transliterator> virtual getTransliterator(int index);
	std::shared_ptr<android::icu::text::Transliterator> virtual safeClone();
	std::shared_ptr<java::lang::String> virtual toRules(bool escapeUnprintable);
public:
	virtual ~CompoundTransliterator(){
	}

}; // class CompoundTransliterator
}; // namespace android::icu::text

#endif //__android_icu_text_CompoundTransliterator__

