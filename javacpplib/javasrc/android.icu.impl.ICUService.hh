#ifndef __android_icu_impl_ICUService__
#define __android_icu_impl_ICUService__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUService.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUNotifier.hh"

namespace android::icu::impl{
class ICUService : public android::icu::impl::ICUNotifier {
public:
	ICUService();
	virtual ~ICUService();

}; // class ICUService
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUService__

