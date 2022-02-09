#ifndef __android_icu_text_PluralRules_S_SimpleTokenizer__
#define __android_icu_text_PluralRules_S_SimpleTokenizer__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$SimpleTokenizer.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class PluralRules_S_SimpleTokenizer : public java::lang::Object {
protected:
private:
public:
	static std::shared_ptr<android::icu::text::UnicodeSet> BREAK_AND_IGNORE;
	static std::shared_ptr<android::icu::text::UnicodeSet> BREAK_AND_KEEP;
	static void static_cinit();
	PluralRules_S_SimpleTokenizer();
	static std::shared_ptr<java::lang::String> split(std::shared_ptr<java::lang::String> source);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::PluralRules_S_SimpleTokenizer::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PluralRules_S_SimpleTokenizer(){
	}

}; // class PluralRules_S_SimpleTokenizer
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_SimpleTokenizer__

