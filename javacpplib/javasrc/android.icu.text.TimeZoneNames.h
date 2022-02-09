#ifndef __android_icu_text_TimeZoneNames__
#define __android_icu_text_TimeZoneNames__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneNames.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneNames_S_Cache.h"
#include "android.icu.text.TimeZoneNames_S_Factory.h"
#include "android.icu.text.TimeZoneNames_S_MatchInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "android.icu.util.ULocale.h"
#include "java.io.Serializable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.EnumSet.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

namespace android::icu::text{
class TimeZoneNames : public java::io::Serializable {
protected:
	TimeZoneNames();
private:
	static std::shared_ptr<java::lang::String> DEFAULT_FACTORY_CLASS;
	static std::shared_ptr<java::lang::String> FACTORY_NAME_PROP;
	static std::shared_ptr<android::icu::text::TimeZoneNames_S_Cache> TZNAMES_CACHE;
	static std::shared_ptr<android::icu::text::TimeZoneNames_S_Factory> TZNAMES_FACTORY;
	static long long serialVersionUID;
public:
	static std::shared_ptr<android::icu::text::TimeZoneNames_S_Factory> _get0();
	static void static_cinit();
	static std::shared_ptr<android::icu::text::TimeZoneNames> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::TimeZoneNames> getInstance(std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::TimeZoneNames> getTZDBInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> virtual find(std::shared_ptr<java::lang::CharSequence> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneNames_S_NameType>> types);
	std::shared_ptr<java::util::Set<java::lang::String>> getAvailableMetaZoneIDs();
	std::shared_ptr<java::util::Set<java::lang::String>> getAvailableMetaZoneIDs(std::shared_ptr<java::lang::String> var0);
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type,long long date);
	void virtual getDisplayNames(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<std::vector<android::icu::text::TimeZoneNames_S_NameType>> types,long long date,std::shared_ptr<std::vector<java::lang::String>> dest,int destOffset);
	std::shared_ptr<java::lang::String> virtual getExemplarLocationName(std::shared_ptr<java::lang::String> tzID);
	std::shared_ptr<java::lang::String> getMetaZoneDisplayName(std::shared_ptr<java::lang::String> var0,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> var1) = 0;
	std::shared_ptr<java::lang::String> getMetaZoneID(std::shared_ptr<java::lang::String> var0,long long var1) = 0;
	std::shared_ptr<java::lang::String> getReferenceZoneID(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1) = 0;
	std::shared_ptr<java::lang::String> getTimeZoneDisplayName(std::shared_ptr<java::lang::String> var0,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> var1) = 0;
	void virtual loadAllDisplayNames();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::TimeZoneNames::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneNames(){
	}

}; // class TimeZoneNames
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneNames__

