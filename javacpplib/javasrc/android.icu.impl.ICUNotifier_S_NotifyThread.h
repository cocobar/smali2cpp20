#ifndef __android_icu_impl_ICUNotifier_S_NotifyThread__
#define __android_icu_impl_ICUNotifier_S_NotifyThread__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUNotifier$NotifyThread.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUNotifier.h"
#include "java.lang.Thread.h"
#include "java.util.EventListener.h"
#include "java.util.List.h"

namespace android::icu::impl{
class ICUNotifier_S_NotifyThread : public java::lang::Thread {
protected:
private:
	std::shared_ptr<android::icu::impl::ICUNotifier> notifier;
	std::shared_ptr<java::util::List<std::vector<java::util::EventListener>>> queue;
public:
	ICUNotifier_S_NotifyThread(std::shared_ptr<android::icu::impl::ICUNotifier> notifier);
	void virtual queue(std::shared_ptr<std::vector<java::util::EventListener>> list);
	void virtual run();
public:
	virtual ~ICUNotifier_S_NotifyThread(){
	}

}; // class ICUNotifier_S_NotifyThread
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUNotifier_S_NotifyThread__

