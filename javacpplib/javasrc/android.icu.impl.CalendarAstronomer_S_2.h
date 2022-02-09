#ifndef __android_icu_impl_CalendarAstronomer_S_2__
#define __android_icu_impl_CalendarAstronomer_S_2__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarAstronomer$2.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarAstronomer_S_CoordFunc.h"
#include "android.icu.impl.CalendarAstronomer_S_Equatorial.h"
#include "android.icu.impl.CalendarAstronomer.h"

namespace android::icu::impl{
class CalendarAstronomer_S_2 : public android::icu::impl::CalendarAstronomer_S_CoordFunc {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::CalendarAstronomer> this_S_0;
	CalendarAstronomer_S_2(std::shared_ptr<android::icu::impl::CalendarAstronomer> this_S_0);
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Equatorial> virtual eval();
public:
	virtual ~CalendarAstronomer_S_2(){
	}

}; // class CalendarAstronomer_S_2
}; // namespace android::icu::impl

#endif //__android_icu_impl_CalendarAstronomer_S_2__

