#ifndef __android_icu_impl_ICUService_S_ServiceListener__
#define __android_icu_impl_ICUService_S_ServiceListener__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUService$ServiceListener.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUService.h"
#include "java.util.EventListener.h"

namespace android::icu::impl{
class ICUService_S_ServiceListener : public java::util::EventListener {
protected:
private:
public:
	void serviceChanged(std::shared_ptr<android::icu::impl::ICUService> var0) = 0;
	ICUService_S_ServiceListener(){ };
	virtual ~ICUService_S_ServiceListener(){ };

}; // class ICUService_S_ServiceListener
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUService_S_ServiceListener__

