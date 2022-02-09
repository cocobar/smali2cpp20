#ifndef __android_icu_impl_TimeZoneGenericNames_S_GenericNameSearchHandler__
#define __android_icu_impl_TimeZoneGenericNames_S_GenericNameSearchHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames$GenericNameSearchHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.TextTrieMap_S_ResultHandler.h"
#include "android.icu.impl.TimeZoneGenericNames_S_NameInfo.h"

namespace android::icu::impl{
class TimeZoneGenericNames_S_GenericNameSearchHandler : public android::icu::impl::TextTrieMap_S_ResultHandler<android::icu::impl::TimeZoneGenericNames_S_NameInfo> {
public:
	TimeZoneGenericNames_S_GenericNameSearchHandler();
	virtual ~TimeZoneGenericNames_S_GenericNameSearchHandler();

}; // class TimeZoneGenericNames_S_GenericNameSearchHandler
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneGenericNames_S_GenericNameSearchHandler__

