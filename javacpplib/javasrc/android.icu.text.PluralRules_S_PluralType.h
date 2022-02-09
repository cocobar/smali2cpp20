#ifndef __android_icu_text_PluralRules_S_PluralType__
#define __android_icu_text_PluralRules_S_PluralType__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$PluralType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class PluralRules_S_PluralType : public java::lang::Enum<android::icu::text::PluralRules_S_PluralType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::PluralRules_S_PluralType>> _S_VALUES;
	PluralRules_S_PluralType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::PluralRules_S_PluralType> CARDINAL;
	static std::shared_ptr<android::icu::text::PluralRules_S_PluralType> ORDINAL;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::PluralRules_S_PluralType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::PluralRules_S_PluralType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::PluralRules_S_PluralType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PluralRules_S_PluralType(){
	}

}; // class PluralRules_S_PluralType
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_PluralType__

