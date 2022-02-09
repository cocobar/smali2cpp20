#ifndef __android_icu_impl_TimeZoneGenericNames__
#define __android_icu_impl_TimeZoneGenericNames__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames.smali
#include "java2ctype.h"
#include "android.icu.impl.TextTrieMap.h"
#include "android.icu.impl.TimeZoneGenericNames_S_Cache.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericMatchInfo.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericNameType.h"
#include "android.icu.impl.TimeZoneGenericNames_S_NameInfo.h"
#include "android.icu.impl.TimeZoneGenericNames_S_Pattern.h"
#include "android.icu.text.LocaleDisplayNames.h"
#include "android.icu.text.TimeZoneNames_S_MatchInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.util.Freezable.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.Serializable.h"
#include "java.lang.String.h"
#include "java.lang.ref.WeakReference.h"
#include "java.text.MessageFormat.h"
#include "java.util.Collection.h"
#include "java.util.EnumSet.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

namespace android::icu::impl{
class TimeZoneGenericNames : public java::io::Serializable, public android::icu::util::Freezable<android::icu::impl::TimeZoneGenericNames> {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_impl_TimeZoneGenericNames_S_GenericNameTypeSwitchesValues;
	static std::shared_ptr<int[]> _android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues;
	static long long DST_CHECK_RANGE;
	static std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Cache> GENERIC_NAMES_CACHE;
	static std::shared_ptr<std::vector<android::icu::text::TimeZoneNames_S_NameType>> GENERIC_NON_LOCATION_TYPES;
	static long long serialVersionUID;
	bool _frozen;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap<java::lang::String,java::lang::String>> _genericLocationNamesMap;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap<java::lang::String,java::lang::String>> _genericPartialLocationNamesMap;
	std::shared_ptr<android::icu::impl::TextTrieMap<android::icu::impl::TimeZoneGenericNames_S_NameInfo>> _gnamesTrie;
	bool _gnamesTrieFullyLoaded;
	std::shared_ptr<android::icu::util::ULocale> _locale;
	std::shared_ptr<java::lang::ref::WeakReference<android::icu::text::LocaleDisplayNames>> _localeDisplayNamesRef;
	std::shared_ptr<std::vector<java::text::MessageFormat>> _patternFormatters;
	std::shared_ptr<java::lang::String> _region;
	std::shared_ptr<android::icu::text::TimeZoneNames> _tznames;
	static int _getandroid_icu_impl_TimeZoneGenericNames_S_GenericNameTypeSwitchesValues();
	static int _getandroid_icu_text_TimeZoneNames_S_NameTypeSwitchesValues();
	TimeZoneGenericNames(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo> virtual createGenericMatchInfo(std::shared_ptr<android::icu::text::TimeZoneNames_S_MatchInfo> matchInfo);
	std::shared_ptr<java::util::Collection<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo>> virtual findLocal(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>> types);
	std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> virtual findTimeZoneNames(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>> types);
	std::shared_ptr<java::lang::String> virtual formatGenericNonLocationName(std::shared_ptr<android::icu::util::TimeZone> tz,std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> type,long long date);
	std::shared_ptr<java::lang::String> virtual formatPattern(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Pattern> pat,std::shared_ptr<std::vector<java::lang::String>> args);
	std::shared_ptr<android::icu::text::LocaleDisplayNames> virtual getLocaleDisplayNames();
	std::shared_ptr<java::lang::String> virtual getPartialLocationName(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<java::lang::String> mzID,bool isLong,std::shared_ptr<java::lang::String> mzDisplayName);
	std::shared_ptr<java::lang::String> virtual getTargetRegion();
	void virtual init();
	void virtual loadStrings(std::shared_ptr<java::lang::String> tzCanonicalID);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> in);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	TimeZoneGenericNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::impl::TimeZoneGenericNames> _this1);
	TimeZoneGenericNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::TimeZoneNames> tznames);
	static std::shared_ptr<android::icu::impl::TimeZoneGenericNames> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames> virtual cloneAsThawed();
	std::shared_ptr<java::util::Collection<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo>> virtual find(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>> genericTypes);
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo> virtual findBestMatch(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>> genericTypes);
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames> virtual freeze();
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<android::icu::util::TimeZone> tz,std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> type,long long date);
	std::shared_ptr<java::lang::String> virtual getGenericLocationName(std::shared_ptr<java::lang::String> canonicalTzID);
	bool virtual isFrozen();
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames> virtual setFormatPattern(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Pattern> patType,std::shared_ptr<java::lang::String> patStr);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::TimeZoneGenericNames::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneGenericNames(){
	}

}; // class TimeZoneGenericNames
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneGenericNames__

