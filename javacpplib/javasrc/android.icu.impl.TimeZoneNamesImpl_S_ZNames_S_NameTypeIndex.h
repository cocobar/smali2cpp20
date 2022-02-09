#ifndef __android_icu_impl_TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex__
#define __android_icu_impl_TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$ZNames$NameTypeIndex.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex : public java::lang::Enum<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex>> _S_VALUES;
	TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex> EXEMPLAR_LOCATION;
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex> LONG_DAYLIGHT;
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex> LONG_GENERIC;
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex> LONG_STANDARD;
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex> SHORT_DAYLIGHT;
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex> SHORT_GENERIC;
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex> SHORT_STANDARD;
	static std::shared_ptr<std::vector<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex>> values;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex(){
	}

}; // class TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex__

