#ifndef __android_icu_impl_TimeZoneNamesImpl__
#define __android_icu_impl_TimeZoneNamesImpl__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.TextTrieMap.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_MZ2TZsCache.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_NameInfo.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_NameSearchHandler.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_TZ2MZsCache.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_ZNames.h"
#include "android.icu.text.TimeZoneNames_S_MatchInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.EnumSet.h"
#include "java.util.Set.h"
#include "java.util.concurrent.ConcurrentHashMap.h"
#include "java.util.regex.Pattern.h"

namespace android::icu::impl{
class TimeZoneNamesImpl : public android::icu::text::TimeZoneNames {
protected:
private:
	static std::shared_ptr<java::util::regex::Pattern> LOC_EXCLUSION_PATTERN;
	static std::shared_ptr<java::util::Set<java::lang::String>> METAZONE_IDS;
	static std::shared_ptr<java::lang::String> MZ_PREFIX;
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_MZ2TZsCache> MZ_TO_TZS_CACHE;
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_TZ2MZsCache> TZ_TO_MZS_CACHE;
	static std::shared_ptr<java::lang::String> ZONE_STRINGS_BUNDLE;
	static long long serialVersionUID;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap<java::lang::String,android::icu::impl::TimeZoneNamesImpl_S_ZNames>> _mzNamesMap;
	bool _namesFullyLoaded;
	std::shared_ptr<android::icu::impl::TextTrieMap<android::icu::impl::TimeZoneNamesImpl_S_NameInfo>> _namesTrie;
	bool _namesTrieFullyLoaded;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap<java::lang::String,android::icu::impl::TimeZoneNamesImpl_S_ZNames>> _tzNamesMap;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> _zoneStrings;
	void virtual addAllNamesIntoTrie();
	std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> virtual doFind(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_NameSearchHandler> handler,std::shared_ptr<java::lang::CharSequence> text,int start);
	void virtual initialize(std::shared_ptr<android::icu::util::ULocale> locale);
	void virtual internalLoadAllDisplayNames();
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> virtual loadMetaZoneNames(std::shared_ptr<java::lang::String> mzID);
	void virtual loadStrings(std::shared_ptr<java::lang::String> tzCanonicalID);
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> virtual loadTimeZoneNames(std::shared_ptr<java::lang::String> tzID);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> in);
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> out);
public:
	static std::shared_ptr<java::util::concurrent::ConcurrentHashMap> _get0(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl> _this);
	static std::shared_ptr<java::util::concurrent::ConcurrentHashMap> _get1(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl> _this);
	static std::shared_ptr<android::icu::impl::ICUResourceBundle> _get2(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl> _this);
	static void static_cinit();
	TimeZoneNamesImpl(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<java::util::Set<java::lang::String>> _getAvailableMetaZoneIDs();
	static std::shared_ptr<java::util::Set<java::lang::String>> _getAvailableMetaZoneIDs(std::shared_ptr<java::lang::String> tzID);
	static std::shared_ptr<java::lang::String> _getMetaZoneID(std::shared_ptr<java::lang::String> tzID,long long date);
	static std::shared_ptr<java::lang::String> _getReferenceZoneID(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<java::lang::String> region);
	static std::shared_ptr<java::lang::String> getDefaultExemplarLocationName(std::shared_ptr<java::lang::String> tzID);
	std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> virtual find(std::shared_ptr<java::lang::CharSequence> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneNames_S_NameType>> nameTypes);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getAvailableMetaZoneIDs();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getAvailableMetaZoneIDs(std::shared_ptr<java::lang::String> tzID);
	void virtual getDisplayNames(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<std::vector<android::icu::text::TimeZoneNames_S_NameType>> types,long long date,std::shared_ptr<std::vector<java::lang::String>> dest,int destOffset);
	std::shared_ptr<java::lang::String> virtual getExemplarLocationName(std::shared_ptr<java::lang::String> tzID);
	std::shared_ptr<java::lang::String> virtual getMetaZoneDisplayName(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type);
	std::shared_ptr<java::lang::String> virtual getMetaZoneID(std::shared_ptr<java::lang::String> tzID,long long date);
	std::shared_ptr<java::lang::String> virtual getReferenceZoneID(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<java::lang::String> region);
	std::shared_ptr<java::lang::String> virtual getTimeZoneDisplayName(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type);
	void virtual loadAllDisplayNames();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::TimeZoneNamesImpl::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneNamesImpl(){
	}

}; // class TimeZoneNamesImpl
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneNamesImpl__

