#ifndef __android_icu_impl_CalendarAstronomer_S_Equatorial__
#define __android_icu_impl_CalendarAstronomer_S_Equatorial__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarAstronomer$Equatorial.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class CalendarAstronomer_S_Equatorial : public java::lang::Object {
protected:
private:
public:
	double ascension;
	double declination;
	CalendarAstronomer_S_Equatorial(double asc,double dec);
	std::shared_ptr<java::lang::String> virtual toHmsString();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CalendarAstronomer_S_Equatorial(){
	}

}; // class CalendarAstronomer_S_Equatorial
}; // namespace android::icu::impl

#endif //__android_icu_impl_CalendarAstronomer_S_Equatorial__

