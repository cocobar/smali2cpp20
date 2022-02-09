#ifndef __android_icu_impl_TimeZoneNamesImpl_S_ZNamesLoader__
#define __android_icu_impl_TimeZoneNamesImpl_S_ZNamesLoader__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$ZNamesLoader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class TimeZoneNamesImpl_S_ZNamesLoader : public android::icu::impl::UResource_S_Sink {
protected:
private:
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader> DUMMY_LOADER;
	std::shared_ptr<std::vector<java::lang::String>> names;
	TimeZoneNamesImpl_S_ZNamesLoader();
	std::shared_ptr<java::lang::String> virtual getNames();
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex> nameTypeIndexFromKey(std::shared_ptr<android::icu::impl::UResource_S_Key> key);
	void virtual setNameIfEmpty(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader> _get0();
	static std::shared_ptr<java::lang::String> _wrap0(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader> _this);
	static void static_cinit();
	TimeZoneNamesImpl_S_ZNamesLoader(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader> _this0);
	void virtual loadMetaZone(std::shared_ptr<android::icu::impl::ICUResourceBundle> zoneStrings,std::shared_ptr<java::lang::String> mzID);
	void virtual loadNames(std::shared_ptr<android::icu::impl::ICUResourceBundle> zoneStrings,std::shared_ptr<java::lang::String> key);
	void virtual loadTimeZone(std::shared_ptr<android::icu::impl::ICUResourceBundle> zoneStrings,std::shared_ptr<java::lang::String> tzID);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneNamesImpl_S_ZNamesLoader(){
	}

}; // class TimeZoneNamesImpl_S_ZNamesLoader
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneNamesImpl_S_ZNamesLoader__

