#ifndef __android_icu_impl_TimeZoneNamesImpl_S_NameSearchHandler__
#define __android_icu_impl_TimeZoneNamesImpl_S_NameSearchHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$NameSearchHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.TextTrieMap_S_ResultHandler.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_NameInfo.h"

namespace android::icu::impl{
class TimeZoneNamesImpl_S_NameSearchHandler : public android::icu::impl::TextTrieMap_S_ResultHandler<android::icu::impl::TimeZoneNamesImpl_S_NameInfo> {
public:
	TimeZoneNamesImpl_S_NameSearchHandler();
	virtual ~TimeZoneNamesImpl_S_NameSearchHandler();

}; // class TimeZoneNamesImpl_S_NameSearchHandler
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneNamesImpl_S_NameSearchHandler__

