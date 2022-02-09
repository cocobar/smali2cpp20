#ifndef __android_icu_impl_CalendarAstronomer_S_3__
#define __android_icu_impl_CalendarAstronomer_S_3__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarAstronomer$3.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarAstronomer_S_AngleFunc.h"
#include "android.icu.impl.CalendarAstronomer.h"

namespace android::icu::impl{
class CalendarAstronomer_S_3 : public android::icu::impl::CalendarAstronomer_S_AngleFunc {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::CalendarAstronomer> this_S_0;
	CalendarAstronomer_S_3(std::shared_ptr<android::icu::impl::CalendarAstronomer> this_S_0);
	double virtual eval();
public:
	virtual ~CalendarAstronomer_S_3(){
	}

}; // class CalendarAstronomer_S_3
}; // namespace android::icu::impl

#endif //__android_icu_impl_CalendarAstronomer_S_3__

