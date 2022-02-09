#ifndef __android_icu_util_Currency_S_CurrencyUsage__
#define __android_icu_util_Currency_S_CurrencyUsage__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Currency$CurrencyUsage.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::util{
class Currency_S_CurrencyUsage : public java::lang::Enum<android::icu::util::Currency_S_CurrencyUsage> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::util::Currency_S_CurrencyUsage>> _S_VALUES;
	Currency_S_CurrencyUsage(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> CASH;
	static std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> STANDARD;
	static void static_cinit();
	static std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::Currency_S_CurrencyUsage::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Currency_S_CurrencyUsage(){
	}

}; // class Currency_S_CurrencyUsage
}; // namespace android::icu::util

#endif //__android_icu_util_Currency_S_CurrencyUsage__

