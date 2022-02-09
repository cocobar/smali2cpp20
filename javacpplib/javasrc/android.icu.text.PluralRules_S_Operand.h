#ifndef __android_icu_text_PluralRules_S_Operand__
#define __android_icu_text_PluralRules_S_Operand__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$Operand.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class PluralRules_S_Operand : public java::lang::Enum<android::icu::text::PluralRules_S_Operand> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::PluralRules_S_Operand>> _S_VALUES;
	PluralRules_S_Operand(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::PluralRules_S_Operand> f;
	static std::shared_ptr<android::icu::text::PluralRules_S_Operand> i;
	static std::shared_ptr<android::icu::text::PluralRules_S_Operand> j;
	static std::shared_ptr<android::icu::text::PluralRules_S_Operand> n;
	static std::shared_ptr<android::icu::text::PluralRules_S_Operand> t;
	static std::shared_ptr<android::icu::text::PluralRules_S_Operand> v;
	static std::shared_ptr<android::icu::text::PluralRules_S_Operand> w;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::PluralRules_S_Operand> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::PluralRules_S_Operand> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::PluralRules_S_Operand::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PluralRules_S_Operand(){
	}

}; // class PluralRules_S_Operand
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_Operand__

