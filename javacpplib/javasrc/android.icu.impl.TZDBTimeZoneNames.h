#ifndef __android_icu_impl_TZDBTimeZoneNames__
#define __android_icu_impl_TZDBTimeZoneNames__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TZDBTimeZoneNames.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.TZDBTimeZoneNames_S_TZDBNameInfo.h"
#include "android.icu.impl.TZDBTimeZoneNames_S_TZDBNames.h"
#include "android.icu.impl.TextTrieMap.h"
#include "android.icu.text.TimeZoneNames_S_MatchInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.EnumSet.h"
#include "java.util.Set.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

namespace android::icu::impl{
class TZDBTimeZoneNames : public android::icu::text::TimeZoneNames {
protected:
private:
	static std::shared_ptr<java::util::concurrent::ConcurrentHashMap<java::lang::String,android::icu::impl::TZDBTimeZoneNames_S_TZDBNames>> TZDB_NAMES_MAP;
	static std::shared_ptr<android::icu::impl::TextTrieMap<android::icu::impl::TZDBTimeZoneNames_S_TZDBNameInfo>> TZDB_NAMES_TRIE;
	static std::shared_ptr<android::icu::impl::ICUResourceBundle> ZONESTRINGS;
	static long long serialVersionUID;
	std::shared_ptr<android::icu::util::ULocale> _locale;
	std::shared_ptr<java::lang::String> _region;
	static std::shared_ptr<android::icu::impl::TZDBTimeZoneNames_S_TZDBNames> getMetaZoneNames(std::shared_ptr<java::lang::String> mzID);
	std::shared_ptr<java::lang::String> virtual getTargetRegion();
	static void prepareFind();
public:
	static void static_cinit();
	TZDBTimeZoneNames(std::shared_ptr<android::icu::util::ULocale> loc);
	std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> virtual find(std::shared_ptr<java::lang::CharSequence> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneNames_S_NameType>> nameTypes);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getAvailableMetaZoneIDs();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getAvailableMetaZoneIDs(std::shared_ptr<java::lang::String> tzID);
	std::shared_ptr<java::lang::String> virtual getMetaZoneDisplayName(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type);
	std::shared_ptr<java::lang::String> virtual getMetaZoneID(std::shared_ptr<java::lang::String> tzID,long long date);
	std::shared_ptr<java::lang::String> virtual getReferenceZoneID(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<java::lang::String> region);
	std::shared_ptr<java::lang::String> virtual getTimeZoneDisplayName(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::TZDBTimeZoneNames::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TZDBTimeZoneNames(){
	}

}; // class TZDBTimeZoneNames
}; // namespace android::icu::impl

#endif //__android_icu_impl_TZDBTimeZoneNames__

