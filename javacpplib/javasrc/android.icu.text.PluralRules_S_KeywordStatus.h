#ifndef __android_icu_text_PluralRules_S_KeywordStatus__
#define __android_icu_text_PluralRules_S_KeywordStatus__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$KeywordStatus.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class PluralRules_S_KeywordStatus : public java::lang::Enum<android::icu::text::PluralRules_S_KeywordStatus> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::PluralRules_S_KeywordStatus>> _S_VALUES;
	PluralRules_S_KeywordStatus(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> BOUNDED;
	static std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> INVALID;
	static std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> SUPPRESSED;
	static std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> UNBOUNDED;
	static std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> UNIQUE;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::PluralRules_S_KeywordStatus::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PluralRules_S_KeywordStatus(){
	}

}; // class PluralRules_S_KeywordStatus
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_KeywordStatus__

