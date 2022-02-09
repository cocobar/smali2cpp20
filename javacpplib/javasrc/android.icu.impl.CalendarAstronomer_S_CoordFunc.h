#ifndef __android_icu_impl_CalendarAstronomer_S_CoordFunc__
#define __android_icu_impl_CalendarAstronomer_S_CoordFunc__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarAstronomer$CoordFunc.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarAstronomer_S_Equatorial.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class CalendarAstronomer_S_CoordFunc : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Equatorial> eval() = 0;
	CalendarAstronomer_S_CoordFunc(){ };
	virtual ~CalendarAstronomer_S_CoordFunc(){ };

}; // class CalendarAstronomer_S_CoordFunc
}; // namespace android::icu::impl

#endif //__android_icu_impl_CalendarAstronomer_S_CoordFunc__

