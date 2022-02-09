#ifndef __android_icu_text_NumberingSystem__
#define __android_icu_text_NumberingSystem__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NumberingSystem.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.text.NumberingSystem_S_LocaleLookupData.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Void.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class NumberingSystem : public java::lang::Object {
protected:
private:
	static std::shared_ptr<std::vector<java::lang::String>> OTHER_NS_KEYWORDS;
	static std::shared_ptr<android::icu::impl::CacheBase<java::lang::String,android::icu::text::NumberingSystem,android::icu::text::NumberingSystem_S_LocaleLookupData>> cachedLocaleData;
	static std::shared_ptr<android::icu::impl::CacheBase<java::lang::String,android::icu::text::NumberingSystem,java::lang::Void>> cachedStringData;
	bool algorithmic;
	std::shared_ptr<java::lang::String> desc;
	std::shared_ptr<java::lang::String> name;
	int radix;
	static std::shared_ptr<android::icu::text::NumberingSystem> getInstance(std::shared_ptr<java::lang::String> name_in,int radix_in,bool isAlgorithmic_in,std::shared_ptr<java::lang::String> desc_in);
	static std::shared_ptr<android::icu::text::NumberingSystem> lookupInstanceByName(std::shared_ptr<java::lang::String> name);
public:
	static std::shared_ptr<android::icu::text::NumberingSystem> _wrap0(std::shared_ptr<java::lang::String> name);
	static void static_cinit();
	NumberingSystem();
	static std::shared_ptr<java::lang::String> getAvailableNames();
	static std::shared_ptr<android::icu::text::NumberingSystem> getInstance();
	static std::shared_ptr<android::icu::text::NumberingSystem> getInstance(int radix_in,bool isAlgorithmic_in,std::shared_ptr<java::lang::String> desc_in);
	static std::shared_ptr<android::icu::text::NumberingSystem> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::NumberingSystem> getInstance(std::shared_ptr<java::util::Locale> inLocale);
	static std::shared_ptr<android::icu::text::NumberingSystem> getInstanceByName(std::shared_ptr<java::lang::String> name);
	static bool isValidDigitString(std::shared_ptr<java::lang::String> str);
	static std::shared_ptr<android::icu::text::NumberingSystem> lookupInstanceByLocale(std::shared_ptr<android::icu::text::NumberingSystem_S_LocaleLookupData> localeLookupData);
	std::shared_ptr<java::lang::String> virtual getDescription();
	std::shared_ptr<java::lang::String> virtual getName();
	int virtual getRadix();
	bool virtual isAlgorithmic();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::NumberingSystem::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~NumberingSystem(){
	}

}; // class NumberingSystem
}; // namespace android::icu::text

#endif //__android_icu_text_NumberingSystem__

