#ifndef __android_icu_impl_TimeZoneNamesImpl_S_NameSearchHandler__
#define __android_icu_impl_TimeZoneNamesImpl_S_NameSearchHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$NameSearchHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.TextTrieMap_S_ResultHandler.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_NameInfo.h"
#include "android.icu.text.TimeZoneNames_S_MatchInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "java.util.Collection.h"
#include "java.util.EnumSet.h"
#include "java.util.Iterator.h"

namespace android::icu::impl{
class TimeZoneNamesImpl_S_NameSearchHandler : public android::icu::impl::TextTrieMap_S_ResultHandler<android::icu::impl::TimeZoneNamesImpl_S_NameInfo> {
protected:
private:
	std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> _matches;
	int _maxMatchLen;
	std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneNames_S_NameType>> _nameTypes;
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	TimeZoneNamesImpl_S_NameSearchHandler(std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneNames_S_NameType>> nameTypes);
	std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> virtual getMatches();
	int virtual getMaxMatchLen();
	bool virtual handlePrefixMatch(int matchLength,std::shared_ptr<java::util::Iterator<android::icu::impl::TimeZoneNamesImpl_S_NameInfo>> values);
	void virtual resetResults();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::TimeZoneNamesImpl_S_NameSearchHandler::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneNamesImpl_S_NameSearchHandler(){
	}

}; // class TimeZoneNamesImpl_S_NameSearchHandler
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneNamesImpl_S_NameSearchHandler__

