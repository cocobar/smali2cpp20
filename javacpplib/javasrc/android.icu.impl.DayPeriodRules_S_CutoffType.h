#ifndef __android_icu_impl_DayPeriodRules_S_CutoffType__
#define __android_icu_impl_DayPeriodRules_S_CutoffType__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\DayPeriodRules$CutoffType.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class DayPeriodRules_S_CutoffType : public java::lang::Enum<android::icu::impl::DayPeriodRules_S_CutoffType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::DayPeriodRules_S_CutoffType>> _S_VALUES;
	DayPeriodRules_S_CutoffType(std::shared_ptr<java::lang::String> var0,int var1);
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> fromStringOrNull(std::shared_ptr<java::lang::CharSequence> str);
public:
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> AFTER;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> AT;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> BEFORE;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> FROM;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> _wrap0(std::shared_ptr<java::lang::CharSequence> str);
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::DayPeriodRules_S_CutoffType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DayPeriodRules_S_CutoffType(){
	}

}; // class DayPeriodRules_S_CutoffType
}; // namespace android::icu::impl

#endif //__android_icu_impl_DayPeriodRules_S_CutoffType__

