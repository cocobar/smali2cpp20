#ifndef __android_icu_impl_TimeZoneGenericNames_S_GenericNameSearchHandler__
#define __android_icu_impl_TimeZoneGenericNames_S_GenericNameSearchHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames$GenericNameSearchHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.TextTrieMap_S_ResultHandler.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericMatchInfo.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericNameType.h"
#include "android.icu.impl.TimeZoneGenericNames_S_NameInfo.h"
#include "java.util.Collection.h"
#include "java.util.EnumSet.h"
#include "java.util.Iterator.h"

namespace android::icu::impl{
class TimeZoneGenericNames_S_GenericNameSearchHandler : public android::icu::impl::TextTrieMap_S_ResultHandler<android::icu::impl::TimeZoneGenericNames_S_NameInfo> {
protected:
private:
	std::shared_ptr<java::util::Collection<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo>> _matches;
	int _maxMatchLen;
	std::shared_ptr<java::util::EnumSet<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>> _types;
public:
	TimeZoneGenericNames_S_GenericNameSearchHandler(std::shared_ptr<java::util::EnumSet<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>> types);
	std::shared_ptr<java::util::Collection<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo>> virtual getMatches();
	int virtual getMaxMatchLen();
	bool virtual handlePrefixMatch(int matchLength,std::shared_ptr<java::util::Iterator<android::icu::impl::TimeZoneGenericNames_S_NameInfo>> values);
	void virtual resetResults();
public:
	virtual ~TimeZoneGenericNames_S_GenericNameSearchHandler(){
	}

}; // class TimeZoneGenericNames_S_GenericNameSearchHandler
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneGenericNames_S_GenericNameSearchHandler__

