#ifndef __android_icu_impl_ICURWLock_S_Stats__
#define __android_icu_impl_ICURWLock_S_Stats__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICURWLock$Stats.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICURWLock_S_Stats : public java::lang::Object {
protected:
private:
	ICURWLock_S_Stats();
	ICURWLock_S_Stats(int rc,int mrc,int wrc,int wc,int wwc);
	ICURWLock_S_Stats(std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> rhs);
public:
	int _mrc;
	int _rc;
	int _wc;
	int _wrc;
	int _wwc;
	ICURWLock_S_Stats(std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> rhs,std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> _this1);
	ICURWLock_S_Stats(std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> _this0,std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> _this1,std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> _this2);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~ICURWLock_S_Stats(){
	}

}; // class ICURWLock_S_Stats
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICURWLock_S_Stats__

