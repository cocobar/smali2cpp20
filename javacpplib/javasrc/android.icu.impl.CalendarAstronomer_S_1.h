#ifndef __android_icu_impl_CalendarAstronomer_S_1__
#define __android_icu_impl_CalendarAstronomer_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarAstronomer$1.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarAstronomer_S_AngleFunc.h"
#include "android.icu.impl.CalendarAstronomer.h"

namespace android::icu::impl{
class CalendarAstronomer_S_1 : public android::icu::impl::CalendarAstronomer_S_AngleFunc {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::CalendarAstronomer> this_S_0;
	CalendarAstronomer_S_1(std::shared_ptr<android::icu::impl::CalendarAstronomer> this_S_0);
	double virtual eval();
public:
	virtual ~CalendarAstronomer_S_1(){
	}

}; // class CalendarAstronomer_S_1
}; // namespace android::icu::impl

#endif //__android_icu_impl_CalendarAstronomer_S_1__

