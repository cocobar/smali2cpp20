#ifndef __android_icu_text_PluralRules_S_SampleType__
#define __android_icu_text_PluralRules_S_SampleType__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$SampleType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class PluralRules_S_SampleType : public java::lang::Enum<android::icu::text::PluralRules_S_SampleType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::PluralRules_S_SampleType>> _S_VALUES;
	PluralRules_S_SampleType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::PluralRules_S_SampleType> DECIMAL;
	static std::shared_ptr<android::icu::text::PluralRules_S_SampleType> INTEGER;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::PluralRules_S_SampleType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::PluralRules_S_SampleType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::PluralRules_S_SampleType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PluralRules_S_SampleType(){
	}

}; // class PluralRules_S_SampleType
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_SampleType__

