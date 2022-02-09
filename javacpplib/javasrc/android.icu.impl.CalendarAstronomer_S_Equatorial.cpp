// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarAstronomer$Equatorial.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarAstronomer_S_Equatorial.h"
#include "android.icu.impl.CalendarAstronomer.h"
#include "java.lang.Double.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(DD)V
android::icu::impl::CalendarAstronomer_S_Equatorial::CalendarAstronomer_S_Equatorial(double asc,double dec)
{
	
	//    .param p1, "asc"    # D
	//    .param p3, "dec"    # D
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->ascension = asc;
	this->declination = dec;
	return;

}
// .method public toHmsString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::CalendarAstronomer_S_Equatorial::toHmsString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(android::icu::impl::CalendarAstronomer::-wrap1(this->ascension))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",")))->append(android::icu::impl::CalendarAstronomer::-wrap0(this->declination))->toString();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::CalendarAstronomer_S_Equatorial::toString()
{
	
	double cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	cVar0 = 0x404ca5dc1a63c1f8L;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return cVar1->append(java::lang::Double::toString(( this->ascension * cVar0)))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",")))->append(( this->declination * cVar0))->toString();

}


