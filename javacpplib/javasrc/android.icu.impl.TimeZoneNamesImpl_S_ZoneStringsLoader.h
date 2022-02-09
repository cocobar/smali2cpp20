#ifndef __android_icu_impl_TimeZoneNamesImpl_S_ZoneStringsLoader__
#define __android_icu_impl_TimeZoneNamesImpl_S_ZoneStringsLoader__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$ZoneStringsLoader.smali
#include "java2ctype.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_ZNamesLoader.h"
#include "android.icu.impl.TimeZoneNamesImpl.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.HashMap.h"

namespace android::icu::impl{
class TimeZoneNamesImpl_S_ZoneStringsLoader : public android::icu::impl::UResource_S_Sink {
protected:
private:
	static int INITIAL_NUM_ZONES;
	std::shared_ptr<java::util::HashMap<android::icu::impl::UResource_S_Key,android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader>> keyToLoader;
	std::shared_ptr<java::lang::StringBuilder> sb;
	TimeZoneNamesImpl_S_ZoneStringsLoader(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl> this_S_0);
	void virtual consumeNamesTable(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
	std::shared_ptr<java::lang::String> virtual mzIDFromKey(std::shared_ptr<android::icu::impl::UResource_S_Key> key);
	std::shared_ptr<java::lang::String> virtual tzIDFromKey(std::shared_ptr<android::icu::impl::UResource_S_Key> key);
public:
	static bool _assertionsDisabled;
	bool _S_assertionsDisabled;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl> this_S_0;
	static void static_cinit();
	TimeZoneNamesImpl_S_ZoneStringsLoader(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl> this_S_0,std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader> _this1);
	std::shared_ptr<android::icu::impl::UResource_S_Key> virtual createKey(std::shared_ptr<android::icu::impl::UResource_S_Key> key);
	bool virtual isMetaZone(std::shared_ptr<android::icu::impl::UResource_S_Key> key);
	void virtual load();
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneNamesImpl_S_ZoneStringsLoader(){
	}

}; // class TimeZoneNamesImpl_S_ZoneStringsLoader
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneNamesImpl_S_ZoneStringsLoader__

