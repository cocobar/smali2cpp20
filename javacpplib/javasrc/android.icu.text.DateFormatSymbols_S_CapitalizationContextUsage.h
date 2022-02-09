#ifndef __android_icu_text_DateFormatSymbols_S_CapitalizationContextUsage__
#define __android_icu_text_DateFormatSymbols_S_CapitalizationContextUsage__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormatSymbols$CapitalizationContextUsage.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DateFormatSymbols_S_CapitalizationContextUsage : public java::lang::Enum<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>> _S_VALUES;
	DateFormatSymbols_S_CapitalizationContextUsage(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> DAY_FORMAT;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> DAY_NARROW;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> DAY_STANDALONE;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> ERA_ABBREV;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> ERA_NARROW;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> ERA_WIDE;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> METAZONE_LONG;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> METAZONE_SHORT;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> MONTH_FORMAT;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> MONTH_NARROW;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> MONTH_STANDALONE;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> OTHER;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> ZONE_LONG;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> ZONE_SHORT;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateFormatSymbols_S_CapitalizationContextUsage(){
	}

}; // class DateFormatSymbols_S_CapitalizationContextUsage
}; // namespace android::icu::text

#endif //__android_icu_text_DateFormatSymbols_S_CapitalizationContextUsage__

