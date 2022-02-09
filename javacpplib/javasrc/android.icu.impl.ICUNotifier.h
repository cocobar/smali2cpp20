#ifndef __android_icu_impl_ICUNotifier__
#define __android_icu_impl_ICUNotifier__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUNotifier.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUNotifier_S_NotifyThread.h"
#include "java.lang.Object.h"
#include "java.util.EventListener.h"
#include "java.util.List.h"

namespace android::icu::impl{
class ICUNotifier : public java::lang::Object {
protected:
	bool acceptsListener(std::shared_ptr<java::util::EventListener> var0) = 0;
	void notifyListener(std::shared_ptr<java::util::EventListener> var0) = 0;
private:
	std::shared_ptr<java::util::List<java::util::EventListener>> listeners;
	std::shared_ptr<java::lang::Object> notifyLock;
	std::shared_ptr<android::icu::impl::ICUNotifier_S_NotifyThread> notifyThread;
public:
	ICUNotifier();
	void virtual addListener(std::shared_ptr<java::util::EventListener> l);
	void virtual notifyChanged();
	void virtual removeListener(std::shared_ptr<java::util::EventListener> l);
public:
	virtual ~ICUNotifier(){
	}

}; // class ICUNotifier
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUNotifier__

