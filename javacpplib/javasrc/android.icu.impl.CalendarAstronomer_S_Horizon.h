#ifndef __android_icu_impl_CalendarAstronomer_S_Horizon__
#define __android_icu_impl_CalendarAstronomer_S_Horizon__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarAstronomer$Horizon.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class CalendarAstronomer_S_Horizon : public java::lang::Object {
protected:
private:
public:
	double altitude;
	double azimuth;
	CalendarAstronomer_S_Horizon(double alt,double azim);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CalendarAstronomer_S_Horizon(){
	}

}; // class CalendarAstronomer_S_Horizon
}; // namespace android::icu::impl

#endif //__android_icu_impl_CalendarAstronomer_S_Horizon__

