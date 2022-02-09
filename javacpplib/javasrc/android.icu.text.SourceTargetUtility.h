#ifndef __android_icu_text_SourceTargetUtility__
#define __android_icu_text_SourceTargetUtility__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SourceTargetUtility.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.Transform.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Set.h"

namespace android::icu::text{
class SourceTargetUtility : public java::lang::Object {
protected:
private:
public:
	static std::shared_ptr<android::icu::text::Normalizer2> NFC;
	static std::shared_ptr<android::icu::text::UnicodeSet> NON_STARTERS;
	std::shared_ptr<android::icu::text::UnicodeSet> sourceCache;
	std::shared_ptr<java::util::Set<java::lang::String>> sourceStrings;
	std::shared_ptr<android::icu::text::Transform<java::lang::String,java::lang::String>> transform;
	static void static_cinit();
	SourceTargetUtility(std::shared_ptr<android::icu::text::Transform<java::lang::String,java::lang::String>> transform);
	SourceTargetUtility(std::shared_ptr<android::icu::text::Transform<java::lang::String,java::lang::String>> transform,std::shared_ptr<android::icu::text::Normalizer2> normalizer);
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::Transliterator> transliterator,std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::SourceTargetUtility::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SourceTargetUtility(){
	}

}; // class SourceTargetUtility
}; // namespace android::icu::text

#endif //__android_icu_text_SourceTargetUtility__

