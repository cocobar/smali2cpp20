// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarAstronomer$Ecliptic.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarAstronomer_S_Ecliptic.h"
#include "java.lang.Double.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(DD)V
android::icu::impl::CalendarAstronomer_S_Ecliptic::CalendarAstronomer_S_Ecliptic(double lat,double lon)
{
	
	//    .param p1, "lat"    # D
	//    .param p3, "lon"    # D
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->latitude = lat;
	this->longitude = lon;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::CalendarAstronomer_S_Ecliptic::toString()
{
	
	double cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	cVar0 = 0x404ca5dc1a63c1f8L;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return cVar1->append(java::lang::Double::toString(( this->longitude * cVar0)))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",")))->append(( this->latitude * cVar0))->toString();

}


