#ifndef __android_icu_impl_TimeZoneGenericNames_S_GenericNameType__
#define __android_icu_impl_TimeZoneGenericNames_S_GenericNameType__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames$GenericNameType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class TimeZoneGenericNames_S_GenericNameType : public java::lang::Enum<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>> _S_VALUES;
	TimeZoneGenericNames_S_GenericNameType(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<std::vector<java::lang::String>> fallbackTypeOf);
public:
	static std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> LOCATION;
	static std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> LONG;
	static std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> SHORT;
	std::shared_ptr<std::vector<java::lang::String>> _fallbackTypeOf;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> values();
	bool virtual isFallbackTypeOf(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> type);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::TimeZoneGenericNames_S_GenericNameType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneGenericNames_S_GenericNameType(){
	}

}; // class TimeZoneGenericNames_S_GenericNameType
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneGenericNames_S_GenericNameType__

