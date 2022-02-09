#ifndef __android_icu_impl_CalendarAstronomer_S_Ecliptic__
#define __android_icu_impl_CalendarAstronomer_S_Ecliptic__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarAstronomer$Ecliptic.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class CalendarAstronomer_S_Ecliptic : public java::lang::Object {
protected:
private:
public:
	double latitude;
	double longitude;
	CalendarAstronomer_S_Ecliptic(double lat,double lon);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CalendarAstronomer_S_Ecliptic(){
	}

}; // class CalendarAstronomer_S_Ecliptic
}; // namespace android::icu::impl

#endif //__android_icu_impl_CalendarAstronomer_S_Ecliptic__

