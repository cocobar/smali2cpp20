#ifndef __android_icu_impl_TZDBTimeZoneNames_S_TZDBNameSearchHandler__
#define __android_icu_impl_TZDBTimeZoneNames_S_TZDBNameSearchHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TZDBTimeZoneNames$TZDBNameSearchHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.TZDBTimeZoneNames_S_TZDBNameInfo.h"
#include "android.icu.impl.TextTrieMap_S_ResultHandler.h"

namespace android::icu::impl{
class TZDBTimeZoneNames_S_TZDBNameSearchHandler : public android::icu::impl::TextTrieMap_S_ResultHandler<android::icu::impl::TZDBTimeZoneNames_S_TZDBNameInfo> {
public:
	TZDBTimeZoneNames_S_TZDBNameSearchHandler();
	virtual ~TZDBTimeZoneNames_S_TZDBNameSearchHandler();

}; // class TZDBTimeZoneNames_S_TZDBNameSearchHandler
}; // namespace android::icu::impl

#endif //__android_icu_impl_TZDBTimeZoneNames_S_TZDBNameSearchHandler__

