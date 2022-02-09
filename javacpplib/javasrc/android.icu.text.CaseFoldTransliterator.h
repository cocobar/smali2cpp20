#ifndef __android_icu_text_CaseFoldTransliterator__
#define __android_icu_text_CaseFoldTransliterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CaseFoldTransliterator.smali
#include "java2ctype.h"
#include "android.icu.impl.UCaseProps.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.ReplaceableContextIterator.h"
#include "android.icu.text.SourceTargetUtility.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::text{
class CaseFoldTransliterator : public android::icu::text::Transliterator {
protected:
	void virtual handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> offsets,bool isIncremental);
private:
	std::shared_ptr<android::icu::impl::UCaseProps> csp;
	std::shared_ptr<android::icu::text::ReplaceableContextIterator> iter;
	std::shared_ptr<java::lang::StringBuilder> result;
public:
	static std::shared_ptr<java::lang::String> _ID;
	static std::shared_ptr<android::icu::text::SourceTargetUtility> sourceTargetUtility;
	static void static_cinit();
	CaseFoldTransliterator();
	static void register();
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CaseFoldTransliterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CaseFoldTransliterator(){
	}

}; // class CaseFoldTransliterator
}; // namespace android::icu::text

#endif //__android_icu_text_CaseFoldTransliterator__

