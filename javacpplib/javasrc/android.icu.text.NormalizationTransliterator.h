#ifndef __android_icu_text_NormalizationTransliterator__
#define __android_icu_text_NormalizationTransliterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NormalizationTransliterator.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.SourceTargetUtility.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::text{
class NormalizationTransliterator : public android::icu::text::Transliterator {
protected:
	void virtual handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> offsets,bool isIncremental);
private:
	std::shared_ptr<android::icu::text::Normalizer2> norm2;
	NormalizationTransliterator(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::text::Normalizer2> n2);
public:
	static std::shared_ptr<java::util::Map<android::icu::text::Normalizer2,android::icu::text::SourceTargetUtility>> SOURCE_CACHE;
	static void static_cinit();
	NormalizationTransliterator(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::text::Normalizer2> n2,std::shared_ptr<android::icu::text::NormalizationTransliterator> _this2);
	static void register();
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::NormalizationTransliterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~NormalizationTransliterator(){
	}

}; // class NormalizationTransliterator
}; // namespace android::icu::text

#endif //__android_icu_text_NormalizationTransliterator__

