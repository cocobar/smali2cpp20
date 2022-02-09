#ifndef __android_icu_impl_TimeZoneGenericNames_S_Pattern__
#define __android_icu_impl_TimeZoneGenericNames_S_Pattern__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames$Pattern.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class TimeZoneGenericNames_S_Pattern : public java::lang::Enum<android::icu::impl::TimeZoneGenericNames_S_Pattern> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::TimeZoneGenericNames_S_Pattern>> _S_VALUES;
	TimeZoneGenericNames_S_Pattern(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> defaultVal);
public:
	static std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Pattern> FALLBACK_FORMAT;
	static std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Pattern> REGION_FORMAT;
	std::shared_ptr<java::lang::String> _defaultVal;
	std::shared_ptr<java::lang::String> _key;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Pattern> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Pattern> values();
	std::shared_ptr<java::lang::String> virtual defaultValue();
	std::shared_ptr<java::lang::String> virtual key();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::TimeZoneGenericNames_S_Pattern::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneGenericNames_S_Pattern(){
	}

}; // class TimeZoneGenericNames_S_Pattern
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneGenericNames_S_Pattern__

