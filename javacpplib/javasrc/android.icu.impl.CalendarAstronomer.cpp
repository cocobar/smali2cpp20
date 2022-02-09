// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarAstronomer.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarAstronomer_S_1.h"
#include "android.icu.impl.CalendarAstronomer_S_2.h"
#include "android.icu.impl.CalendarAstronomer_S_3.h"
#include "android.icu.impl.CalendarAstronomer_S_4.h"
#include "android.icu.impl.CalendarAstronomer_S_AngleFunc.h"
#include "android.icu.impl.CalendarAstronomer_S_CoordFunc.h"
#include "android.icu.impl.CalendarAstronomer_S_Ecliptic.h"
#include "android.icu.impl.CalendarAstronomer_S_Equatorial.h"
#include "android.icu.impl.CalendarAstronomer_S_Horizon.h"
#include "android.icu.impl.CalendarAstronomer_S_MoonAge.h"
#include "android.icu.impl.CalendarAstronomer_S_SolarLongitude.h"
#include "android.icu.impl.CalendarAstronomer.h"
#include "java.lang.Integer.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.Date.h"
#include "java.util.TimeZone.h"

static android::icu::impl::CalendarAstronomer::AUTUMN_EQUINOX;
static android::icu::impl::CalendarAstronomer::DAY_MS = 0x5265c00L;
static android::icu::impl::CalendarAstronomer::DEG_RAD = 0.017453292519943295;
static android::icu::impl::CalendarAstronomer::EPOCH_2000_MS = 0xdc65a95000L;
static android::icu::impl::CalendarAstronomer::FIRST_QUARTER;
static android::icu::impl::CalendarAstronomer::FULL_MOON;
static android::icu::impl::CalendarAstronomer::HOUR_MS = 0x36ee80;
static android::icu::impl::CalendarAstronomer::INVALID = 4.9E-324;
static android::icu::impl::CalendarAstronomer::JD_EPOCH = 2447891.5;
static android::icu::impl::CalendarAstronomer::JULIAN_EPOCH_MS = -0xbfc83e532200L;
static android::icu::impl::CalendarAstronomer::LAST_QUARTER;
static android::icu::impl::CalendarAstronomer::MINUTE_MS = 0xea60;
static android::icu::impl::CalendarAstronomer::NEW_MOON;
static android::icu::impl::CalendarAstronomer::PI = 3.141592653589793;
static android::icu::impl::CalendarAstronomer::PI2 = 6.283185307179586;
static android::icu::impl::CalendarAstronomer::RAD_DEG = 57.29577951308232;
static android::icu::impl::CalendarAstronomer::RAD_HOUR = 3.819718634205488;
static android::icu::impl::CalendarAstronomer::SECOND_MS = 0x3e8;
static android::icu::impl::CalendarAstronomer::SIDEREAL_DAY = 23.93446960027;
static android::icu::impl::CalendarAstronomer::SIDEREAL_MONTH = 27.32166;
static android::icu::impl::CalendarAstronomer::SIDEREAL_YEAR = 365.25636;
static android::icu::impl::CalendarAstronomer::SOLAR_DAY = 24.065709816;
static android::icu::impl::CalendarAstronomer::SUMMER_SOLSTICE;
static android::icu::impl::CalendarAstronomer::SUN_E = 0.016713;
static android::icu::impl::CalendarAstronomer::SUN_ETA_G = 4.87650757829735;
static android::icu::impl::CalendarAstronomer::SUN_OMEGA_G = 4.935239984568769;
static android::icu::impl::CalendarAstronomer::SYNODIC_MONTH = 29.530588853;
static android::icu::impl::CalendarAstronomer::TROPICAL_YEAR = 365.242191;
static android::icu::impl::CalendarAstronomer::VERNAL_EQUINOX;
static android::icu::impl::CalendarAstronomer::WINTER_SOLSTICE;
static android::icu::impl::CalendarAstronomer::moonA = 384401.0;
static android::icu::impl::CalendarAstronomer::moonE = 0.0549;
static android::icu::impl::CalendarAstronomer::moonI = 0.08980357792017056;
static android::icu::impl::CalendarAstronomer::moonL0 = 5.556284436750021;
static android::icu::impl::CalendarAstronomer::moonN0 = 5.559050068029439;
static android::icu::impl::CalendarAstronomer::moonP0 = 0.6342598060246725;
static android::icu::impl::CalendarAstronomer::moonPi = 0.016592845198710092;
static android::icu::impl::CalendarAstronomer::moonT0 = 0.009042550854582622;
// .method static synthetic -wrap0(D)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::CalendarAstronomer::_wrap0(double angle)
{
	
	//    .param p0, "angle"    # D
	return android::icu::impl::CalendarAstronomer::radToDms(angle);

}
// .method static synthetic -wrap1(D)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::CalendarAstronomer::_wrap1(double angle)
{
	
	//    .param p0, "angle"    # D
	return android::icu::impl::CalendarAstronomer::radToHms(angle);

}
// .method static constructor <clinit>()V
void android::icu::impl::CalendarAstronomer::static_cinit()
{
	
	double cVar0;
	double cVar1;
	double cVar2;
	double cVar3;
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_SolarLongitude> cVar4;
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_SolarLongitude> cVar5;
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_SolarLongitude> cVar6;
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_SolarLongitude> cVar7;
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_MoonAge> cVar8;
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_MoonAge> cVar9;
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_MoonAge> cVar10;
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_MoonAge> cVar11;
	
	cVar0 = 0x4012d97c7f3321d2L;
	cVar1 = 0x400921fb54442d18L;
	cVar2 = 0x3ff921fb54442d18L;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::impl::CalendarAstronomer_S_SolarLongitude>(cVar3);
	android::icu::impl::CalendarAstronomer::VERNAL_EQUINOX = cVar4;
	cVar5 = std::make_shared<android::icu::impl::CalendarAstronomer_S_SolarLongitude>(cVar2);
	android::icu::impl::CalendarAstronomer::SUMMER_SOLSTICE = cVar5;
	cVar6 = std::make_shared<android::icu::impl::CalendarAstronomer_S_SolarLongitude>(cVar1);
	android::icu::impl::CalendarAstronomer::AUTUMN_EQUINOX = cVar6;
	cVar7 = std::make_shared<android::icu::impl::CalendarAstronomer_S_SolarLongitude>(cVar0);
	android::icu::impl::CalendarAstronomer::WINTER_SOLSTICE = cVar7;
	cVar8 = std::make_shared<android::icu::impl::CalendarAstronomer_S_MoonAge>(cVar3);
	android::icu::impl::CalendarAstronomer::NEW_MOON = cVar8;
	cVar9 = std::make_shared<android::icu::impl::CalendarAstronomer_S_MoonAge>(cVar2);
	android::icu::impl::CalendarAstronomer::FIRST_QUARTER = cVar9;
	cVar10 = std::make_shared<android::icu::impl::CalendarAstronomer_S_MoonAge>(cVar1);
	android::icu::impl::CalendarAstronomer::FULL_MOON = cVar10;
	cVar11 = std::make_shared<android::icu::impl::CalendarAstronomer_S_MoonAge>(cVar0);
	android::icu::impl::CalendarAstronomer::LAST_QUARTER = cVar11;
	return;

}
// .method public constructor <init>()V
android::icu::impl::CalendarAstronomer::CalendarAstronomer()
{
	
	android::icu::impl::CalendarAstronomer::(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return;

}
// .method public constructor <init>(DD)V
android::icu::impl::CalendarAstronomer::CalendarAstronomer(double longitude,double latitude)
{
	
	double cVar0;
	
	//    .param p1, "longitude"    # D
	//    .param p3, "latitude"    # D
	cVar0 = 0x3f91df46a2529d39L;
	// 249    invoke-direct {p0}, Landroid/icu/impl/CalendarAstronomer;-><init>()V
	this->fLongitude = android::icu::impl::CalendarAstronomer::normPI((longitude *  cVar0));
	this->fLatitude = android::icu::impl::CalendarAstronomer::normPI((latitude *  cVar0));
	this->fGmtOffset = (long long)(( ( ( this->fLongitude * 0x4038000000000000L) * 0x414b774000000000L) / 0x401921fb54442d18L));
	return;

}
// .method public constructor <init>(J)V
android::icu::impl::CalendarAstronomer::CalendarAstronomer(long long aTime)
{
	
	double cVar0;
	double cVar1;
	
	//    .param p1, "aTime"    # J
	cVar0 = 0x0;
	cVar1 = 0x1;
	// 302    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fLongitude = cVar0;
	this->fLatitude = cVar0;
	this->fGmtOffset = 0x0;
	this->julianDay = cVar1;
	this->julianCentury = cVar1;
	this->sunLongitude = cVar1;
	this->meanAnomalySun = cVar1;
	this->moonLongitude = cVar1;
	this->moonEclipLong = cVar1;
	this->eclipObliquity = cVar1;
	this->siderealT0 = cVar1;
	this->siderealTime = cVar1;
	this->moonPosition = 0x0;
	this->time = aTime;
	return;

}
// .method public constructor <init>(Ljava/util/Date;)V
android::icu::impl::CalendarAstronomer::CalendarAstronomer(std::shared_ptr<java::util::Date> d)
{
	
	//    .param p1, "d"    # Ljava/util/Date;
	android::icu::impl::CalendarAstronomer::(d->getTime());
	return;

}
// .method private clearCache()V
void android::icu::impl::CalendarAstronomer::clearCache()
{
	
	double cVar0;
	
	cVar0 = 0x1;
	this->julianDay = cVar0;
	this->julianCentury = cVar0;
	this->sunLongitude = cVar0;
	this->meanAnomalySun = cVar0;
	this->moonLongitude = cVar0;
	this->moonEclipLong = cVar0;
	this->eclipObliquity = cVar0;
	this->siderealTime = cVar0;
	this->siderealT0 = cVar0;
	this->moonPosition = 0x0;
	return;

}
// .method private eclipticObliquity()D
double android::icu::impl::CalendarAstronomer::eclipticObliquity()
{
	
	double T;
	
	if ( (this->eclipObliquity < 0x1) )     
		goto label_cond_48;
	0x4142b42c80000000L;
	//    .local v2, "epoch":D
	T = (( this->getJulianDay() - 0x4142b42c80000000L) /  0x40e1d5a000000000L);
	//    .local v0, "T":D
	this->eclipObliquity = ( ( (0x4037707570c564f9L -  ( 0x3f8aa1edb45c4be9L * T)) - ( ( 0x3e865e9f80f29211L * T) * T)) + ( ( ( 0x3ea0ded40694ce29L * T) * T) * T));
	this->eclipObliquity = ( this->eclipObliquity * 0x3f91df46a2529d39L);
	//    .end local v0    # "T":D
	//    .end local v2    # "epoch":D
label_cond_48:
	return this->eclipObliquity;

}
// .method private getSiderealOffset()D
double android::icu::impl::CalendarAstronomer::getSiderealOffset()
{
	
	double cVar0;
	double T;
	
	cVar0 = 0x3fe0000000000000L;
	if ( (this->siderealT0 < 0x1) )     
		goto label_cond_3f;
	//    .local v0, "JD":D
	//    .local v2, "S":D
	T = (((java::lang::Math::floor(( this->getJulianDay() - cVar0)) +  cVar0) -  0x4142b42c80000000L) /  0x40e1d5a000000000L);
	//    .local v4, "T":D
	this->siderealT0 = android::icu::impl::CalendarAstronomer::normalize(( ( ( 0x40a2c01a48b65237L * T) + 0x401aca1c8e5eb098L) + ( ( 0x3efb1e471b7b0e47L * T) * T)), 0x4038000000000000L);
	//    .end local v0    # "JD":D
	//    .end local v2    # "S":D
	//    .end local v4    # "T":D
label_cond_3f:
	return this->siderealT0;

}
// .method private lstToUT(D)J
long long android::icu::impl::CalendarAstronomer::lstToUT(double lst)
{
	
	long long cVar0;
	
	//    .param p1, "lst"    # D
	cVar0 = 0x5265c00;
	//    .local v2, "lt":D
	//    .local v0, "base":J
	return ((long long)(( 0x414b774000000000L * android::icu::impl::CalendarAstronomer::normalize(( (lst -  this->getSiderealOffset()) * 0x3fefe9a1dd91bf50L), 0x4038000000000000L))) +  ((((this->time +  this->fGmtOffset) /  cVar0) *  cVar0) - this->fGmtOffset));

}
// .method private static final norm2PI(D)D
double android::icu::impl::CalendarAstronomer::norm2PI(double angle)
{
	
	//    .param p0, "angle"    # D
	return android::icu::impl::CalendarAstronomer::normalize(angle, 0x401921fb54442d18L);

}
// .method private static final normPI(D)D
double android::icu::impl::CalendarAstronomer::normPI(double angle)
{
	
	double cVar0;
	
	//    .param p0, "angle"    # D
	cVar0 = 0x400921fb54442d18L;
	return ( android::icu::impl::CalendarAstronomer::normalize((angle +  cVar0), 0x401921fb54442d18L) - cVar0);

}
// .method private static final normalize(DD)D
double android::icu::impl::CalendarAstronomer::normalize(double value,double range)
{
	
	//    .param p0, "value"    # D
	//    .param p2, "range"    # D
	return (value -  ( java::lang::Math::floor((value /  range)) * range));

}
// .method private static radToDms(D)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::CalendarAstronomer::radToDms(double angle)
{
	
	double cVar0;
	double cVar1;
	int deg;
	int min;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "angle"    # D
	cVar0 = 0x404e000000000000L;
	cVar1 = 0x404ca5dc1a63c1f8L;
	deg = (int)((angle *  cVar1));
	//    .local v0, "deg":I
	min = (int)(( ( (angle *  cVar1) - (double)(deg)) * cVar0));
	//    .local v1, "min":I
	//    .local v2, "sec":I
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	return cVar2->append(java::lang::Integer::toString(deg))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u00b0")))->append(min)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->append((int)(( ( ( (angle *  cVar1) - (double)(deg)) - ( (double)(min) / cVar0)) * 0x40ac200000000000L)))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString();

}
// .method private static radToHms(D)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::CalendarAstronomer::radToHms(double angle)
{
	
	double cVar0;
	double cVar1;
	int hrs;
	int min;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "angle"    # D
	cVar0 = 0x404e000000000000L;
	cVar1 = 0x400e8ec8a4aeacc4L;
	hrs = (int)((angle *  cVar1));
	//    .local v0, "hrs":I
	min = (int)(( ( (angle *  cVar1) - (double)(hrs)) * cVar0));
	//    .local v1, "min":I
	//    .local v2, "sec":I
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	return cVar2->append(java::lang::Integer::toString(hrs))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("h")))->append(min)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("m")))->append((int)(( ( ( (angle *  cVar1) - (double)(hrs)) - ( (double)(min) / cVar0)) * 0x40ac200000000000L)))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("s")))->toString();

}
// .method private riseOrSet(Landroid/icu/impl/CalendarAstronomer$CoordFunc;ZDDJ)J
long long android::icu::impl::CalendarAstronomer::riseOrSet(std::shared_ptr<android::icu::impl::CalendarAstronomer_S_CoordFunc> func,bool rise,double diameter,double refraction,long long epsilon)
{
	
	double pos;
	auto angle;
	long long newTime;
	int count;
	auto cosD;
	long long delta;
	
	//    .param p1, "func"    # Landroid/icu/impl/CalendarAstronomer$CoordFunc;
	//    .param p2, "rise"    # Z
	//    .param p3, "diameter"    # D
	//    .param p5, "refraction"    # D
	//    .param p7, "epsilon"    # J
	0x0;
	//    .local v7, "pos":Landroid/icu/impl/CalendarAstronomer$Equatorial;
	//    .local v18, "tanL":D
	0x7fffffffffffffffL;
	//    .local v10, "deltaT":J
	//    .end local v7    # "pos":Landroid/icu/impl/CalendarAstronomer$Equatorial;
	//    .local v6, "count":I
label_cond_11:
	pos = func->eval();
	//    .local v7, "pos":Landroid/icu/impl/CalendarAstronomer$Equatorial;
	angle = java::lang::Math::acos(((0.0 - java::lang::Math::tan(this->fLatitude)) *  java::lang::Math::tan(pos->declination)));
	//    .local v2, "angle":D
	if ( !(rise) )  
		goto label_cond_31;
	//    .end local v2    # "angle":D
label_cond_31:
	//    .local v12, "lst":D
	newTime = this->lstToUT((((pos->ascension +  angle) *  0x4038000000000000L) /  0x401921fb54442d18L));
	//    .local v14, "newTime":J
	this->setTime(newTime);
	count = ( count + 0x1);
	if ( count >= 0x5 )
		goto label_cond_65;
	if ( (java::lang::Math::abs((newTime - this->time)) > epsilon) > 0 ) 
		goto label_cond_11;
label_cond_65:
	cosD = java::lang::Math::cos(pos->declination);
	//    .local v4, "cosD":D
	//    .local v16, "psi":D
	//    .local v20, "x":D
	//    .local v22, "y":D
	delta = (long long)(((((0x406e000000000000L *  java::lang::Math::asin((java::lang::Math::sin(((diameter /  0x4000000000000000L) +  refraction)) /  java::lang::Math::sin(java::lang::Math::acos((java::lang::Math::sin(this->fLatitude) /  cosD)))))) *  0x404ca5dc1a63c1f8L) /  cosD) *  0x408f400000000000L));
	//    .local v8, "delta":J
	if ( !(rise) )  
		goto label_cond_b1;
	//    .end local v8    # "delta":J
label_cond_b1:
	return (this->time + delta);

}
// .method private timeOfAngle(Landroid/icu/impl/CalendarAstronomer$AngleFunc;DDJZ)J
long long android::icu::impl::CalendarAstronomer::timeOfAngle(std::shared_ptr<android::icu::impl::CalendarAstronomer_S_AngleFunc> func,double desired,double periodDays,long long epsilon,bool next)
{
	
	auto lastAngle;
	double cVar0;
	double deltaT;
	double lastDeltaT;
	auto angle;
	long long delta;
	
	//    .param p1, "func"    # Landroid/icu/impl/CalendarAstronomer$AngleFunc;
	//    .param p2, "desired"    # D
	//    .param p4, "periodDays"    # D
	//    .param p6, "epsilon"    # J
	//    .param p8, "next"    # Z
	lastAngle = func->eval();
	//    .local v14, "lastAngle":D
	//    .local v8, "deltaAngle":D
	if ( !(next) )  
		goto label_cond_7c;
	cVar0 = 0x0;
label_goto_e:
	deltaT = (((cVar0 +  android::icu::impl::CalendarAstronomer::norm2PI((desired -  lastAngle))) *  (0x4194997000000000L *  periodDays)) /  0x401921fb54442d18L);
	//    .local v10, "deltaT":D
	lastDeltaT = deltaT;
	//    .local v16, "lastDeltaT":D
	//    .local v18, "startTime":J
	this->setTime((this->time + (long long)(deltaT)));
label_cond_3a:
	angle = func->eval();
	//    .local v4, "angle":D
	//    .local v12, "factor":D
	deltaT = (android::icu::impl::CalendarAstronomer::normPI((desired -  angle)) *  java::lang::Math::abs((deltaT /  android::icu::impl::CalendarAstronomer::normPI((angle -  lastAngle)))));
	if ( (java::lang::Math::abs(deltaT) < java::lang::Math::abs(lastDeltaT)) <= 0 )
		goto label_cond_84;
	delta = (long long)(((0x4194997000000000L *  periodDays) /  0x4020000000000000L));
	//    .local v6, "delta":J
	if ( !(next) )  
		goto label_cond_82;
	//    .end local v6    # "delta":J
label_goto_6e:
	this->setTime((this->time + delta));
	return this->timeOfAngle(func, desired, periodDays, epsilon, next);
	// 1233    .line 1229
	// 1234    .end local v4    # "angle":D
	// 1235    .end local v10    # "deltaT":D
	// 1236    .end local v12    # "factor":D
	// 1237    .end local v16    # "lastDeltaT":D
	// 1238    .end local v18    # "startTime":J
label_cond_7c:
	cVar0 = -0x3fe6de04abbbd2e8L;
	goto label_goto_e;
	// 1244    .line 1272
	// 1245    .restart local v4    # "angle":D
	// 1246    .restart local v6    # "delta":J
	// 1247    .restart local v10    # "deltaT":D
	// 1248    .restart local v12    # "factor":D
	// 1249    .restart local v16    # "lastDeltaT":D
	// 1250    .restart local v18    # "startTime":J
label_cond_82:
	delta = (0 - delta);
	goto label_goto_6e;
	// 1256    .line 1276
	// 1257    .end local v6    # "delta":J
label_cond_84:
	lastDeltaT = deltaT;
	lastAngle = angle;
	this->setTime((this->time + (long long)(deltaT)));
	if ( (java::lang::Math::abs(deltaT) < (double)(epsilon)) > 0 ) 
		goto label_cond_3a;
	return this->time;

}
// .method private trueAnomaly(DD)D
double android::icu::impl::CalendarAstronomer::trueAnomaly(double meanAnomaly,double eccentricity)
{
	
	double E;
	double delta;
	
	//    .param p1, "meanAnomaly"    # D
	//    .param p3, "eccentricity"    # D
	E = meanAnomaly;
	//    .local v0, "E":D
label_cond_1:
	delta = ((E -  ( java::lang::Math::sin(E) * eccentricity)) -  meanAnomaly);
	//    .local v2, "delta":D
	E = ( E - (delta /  (0x3ff0000000000000L -  ( java::lang::Math::cos(E) * eccentricity))));
	if ( (java::lang::Math::abs(delta) < 0x3ee4f8b588e368f1L) > 0 ) 
		goto label_cond_1;
	return ( java::lang::Math::atan(( java::lang::Math::tan((E /  0x4000000000000000L)) * java::lang::Math::sqrt(( ( 0x3ff0000000000000L + eccentricity) / ( 0x3ff0000000000000L - eccentricity))))) * 0x4000000000000000L);

}
// .method public final eclipticToEquatorial(D)Landroid/icu/impl/CalendarAstronomer$Equatorial;
std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Equatorial> android::icu::impl::CalendarAstronomer::eclipticToEquatorial(double eclipLong)
{
	
	//    .param p1, "eclipLong"    # D
	return this->eclipticToEquatorial(eclipLong, 0x0);

}
// .method public final eclipticToEquatorial(DD)Landroid/icu/impl/CalendarAstronomer$Equatorial;
std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Equatorial> android::icu::impl::CalendarAstronomer::eclipticToEquatorial(double eclipLong,double eclipLat)
{
	
	double obliq;
	auto sinE;
	auto cosE;
	auto sinL;
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Equatorial> cVar0;
	
	//    .param p1, "eclipLong"    # D
	//    .param p3, "eclipLat"    # D
	obliq = this->eclipticObliquity();
	//    .local v12, "obliq":D
	sinE = java::lang::Math::sin(obliq);
	//    .local v16, "sinE":D
	cosE = java::lang::Math::cos(obliq);
	//    .local v8, "cosE":D
	sinL = java::lang::Math::sin(eclipLong);
	//    .local v18, "sinL":D
	//    .local v10, "cosL":D
	//    .local v14, "sinB":D
	//    .local v6, "cosB":D
	//    .local v20, "tanB":D
	var31 = cVar0(java::lang::Math::atan2(((sinL *  cosE) -  (java::lang::Math::tan(eclipLat) *  sinE)), java::lang::Math::cos(eclipLong)), java::lang::Math::asin(((java::lang::Math::sin(eclipLat) *  cosE) +  ((java::lang::Math::cos(eclipLat) *  sinE) *  sinL))));
	return cVar0;

}
// .method public final eclipticToEquatorial(Landroid/icu/impl/CalendarAstronomer$Ecliptic;)Landroid/icu/impl/CalendarAstronomer$Equatorial;
std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Equatorial> android::icu::impl::CalendarAstronomer::eclipticToEquatorial(std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Ecliptic> ecliptic)
{
	
	//    .param p1, "ecliptic"    # Landroid/icu/impl/CalendarAstronomer$Ecliptic;
	return this->eclipticToEquatorial(ecliptic->longitude, ecliptic->latitude);

}
// .method public eclipticToHorizon(D)Landroid/icu/impl/CalendarAstronomer$Horizon;
std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Horizon> android::icu::impl::CalendarAstronomer::eclipticToHorizon(double eclipLong)
{
	
	double equatorial;
	double H;
	auto sinD;
	auto cosD;
	auto sinL;
	auto cosL;
	double altitude;
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Horizon> cVar0;
	
	//    .param p1, "eclipLong"    # D
	equatorial = this->eclipticToEquatorial(eclipLong);
	//    .local v14, "equatorial":Landroid/icu/impl/CalendarAstronomer$Equatorial;
	H = (((this->getLocalSidereal() *  0x400921fb54442d18L) /  0x4028000000000000L) -  equatorial->ascension);
	//    .local v2, "H":D
	//    .local v18, "sinH":D
	//    .local v10, "cosH":D
	sinD = java::lang::Math::sin(equatorial->declination);
	//    .local v16, "sinD":D
	cosD = java::lang::Math::cos(equatorial->declination);
	//    .local v8, "cosD":D
	sinL = java::lang::Math::sin(this->fLatitude);
	//    .local v20, "sinL":D
	cosL = java::lang::Math::cos(this->fLatitude);
	//    .local v12, "cosL":D
	altitude = java::lang::Math::asin(((sinD *  sinL) +  ((cosD *  cosL) *  java::lang::Math::cos(H))));
	//    .local v4, "altitude":D
	//    .local v6, "azimuth":D
	cVar0 = std::make_shared<android::icu::impl::CalendarAstronomer_S_Horizon>(java::lang::Math::atan2((((0.0 - cosD) *  cosL) *  java::lang::Math::sin(H)), (sinD -  (java::lang::Math::sin(altitude) *  sinL))), altitude);
	return cVar0;

}
// .method public getDate()Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::impl::CalendarAstronomer::getDate()
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	cVar0 = std::make_shared<java::util::Date>(this->time);
	return cVar0;

}
// .method public getGreenwichSidereal()D
double android::icu::impl::CalendarAstronomer::getGreenwichSidereal()
{
	
	double cVar0;
	
	cVar0 = 0x4038000000000000L;
	if ( (this->siderealTime < 0x1) )     
		goto label_cond_28;
	//    .local v0, "UT":D
	this->siderealTime = android::icu::impl::CalendarAstronomer::normalize(( this->getSiderealOffset() + ( 0x3ff00b36e7d9d4aeL * android::icu::impl::CalendarAstronomer::normalize(( (double)(this->time) / 0x414b774000000000L), cVar0))), cVar0);
	//    .end local v0    # "UT":D
label_cond_28:
	return this->siderealTime;

}
// .method public getJulianCentury()D
double android::icu::impl::CalendarAstronomer::getJulianCentury()
{
	
	if ( (this->julianCentury < 0x1) )     
		goto label_cond_1a;
	this->julianCentury = ( ( this->getJulianDay() - 0x41426cd600000000L) / 0x40e1d5a000000000L);
label_cond_1a:
	return this->julianCentury;

}
// .method public getJulianDay()D
double android::icu::impl::CalendarAstronomer::getJulianDay()
{
	
	if ( (this->julianDay < 0x1) )     
		goto label_cond_19;
	this->julianDay = ( (double)((this->time -  -0xbfc83e532200L)) / 0x4194997000000000L);
label_cond_19:
	return this->julianDay;

}
// .method public getLocalSidereal()D
double android::icu::impl::CalendarAstronomer::getLocalSidereal()
{
	
	return android::icu::impl::CalendarAstronomer::normalize(( this->getGreenwichSidereal() + ( (double)(this->fGmtOffset) / 0x414b774000000000L)), 0x4038000000000000L);

}
// .method public getMoonAge()D
double android::icu::impl::CalendarAstronomer::getMoonAge()
{
	
	this->getMoonPosition();
	return android::icu::impl::CalendarAstronomer::norm2PI(( this->moonEclipLong - this->sunLongitude));

}
// .method public getMoonPhase()D
double android::icu::impl::CalendarAstronomer::getMoonPhase()
{
	
	return ( (0x3ff0000000000000L -  java::lang::Math::cos(this->getMoonAge())) * 0x3fe0000000000000L);

}
// .method public getMoonPosition()Landroid/icu/impl/CalendarAstronomer$Equatorial;
std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Equatorial> android::icu::impl::CalendarAstronomer::getMoonPosition()
{
	
	auto sunLong;
	double day;
	auto meanLongitude;
	auto meanAnomalyMoon;
	double evection;
	double annual;
	double meanAnomalyMoon;
	double nodeLongitude;
	auto y;
	
	if ( this->moonPosition )     
		goto label_cond_142;
	sunLong = this->getSunLongitude();
	//    .local v26, "sunLong":D
	day = (this->getJulianDay() -  0x4142ad09c0000000L);
	//    .local v14, "day":D
	meanLongitude = android::icu::impl::CalendarAstronomer::norm2PI(((0x3fcd6fb4ccd0bc8dL *  day) +  0x401639a2a09c75e2L));
	//    .local v20, "meanLongitude":D
	meanAnomalyMoon = android::icu::impl::CalendarAstronomer::norm2PI(((meanLongitude -  (0x3f5fdb459d100168L *  day)) -  0x3fe44bdb3881627cL));
	//    .local v18, "meanAnomalyMoon":D
	evection = (0x3f96c471a926a187L *  java::lang::Math::sin((((meanLongitude -  sunLong) *  0x4000000000000000L) -  meanAnomalyMoon)));
	//    .local v16, "evection":D
	annual = (0x3f6a90b0aba4fc89L *  java::lang::Math::sin(this->meanAnomalySun));
	//    .local v10, "annual":D
	//    .local v6, "a3":D
	meanAnomalyMoon = (meanAnomalyMoon +  ((evection -  annual) -  (0x3f7a736889d66dd0L *  java::lang::Math::sin(this->meanAnomalySun))));
	//    .local v12, "center":D
	//    .local v8, "a4":D
	this->moonLongitude = ((((meanLongitude +  evection) +  (0x3fbc1905209a88deL *  java::lang::Math::sin(meanAnomalyMoon))) -  annual) +  (0x3f6e98df535623b2L *  java::lang::Math::sin((0x4000000000000000L *  meanAnomalyMoon))));
	//    .local v28, "variation":D
	this->moonLongitude = (this->moonLongitude +  (0x3f8787ceeab4c1caL *  java::lang::Math::sin(((this->moonLongitude -  sunLong) *  0x4000000000000000L))));
	//    .local v24, "nodeLongitude":D
	nodeLongitude = (android::icu::impl::CalendarAstronomer::norm2PI((0x40163c779efc0d54L -  (0x3f4e48eb230f0fe5L *  day))) -  (java::lang::Math::sin(this->meanAnomalySun) *  0x3f66e05a695f8191L));
	y = java::lang::Math::sin((this->moonLongitude -  nodeLongitude));
	//    .local v32, "y":D
	//    .local v30, "x":D
	this->moonEclipLong = (java::lang::Math::atan2((java::lang::Math::cos(0x3fb6fd5e063b1d97L) *  y), java::lang::Math::cos((this->moonLongitude -  nodeLongitude))) +  nodeLongitude);
	//    .local v22, "moonEclipLat":D
	this->moonPosition = this->eclipticToEquatorial(this->moonEclipLong, java::lang::Math::asin((java::lang::Math::sin(0x3fb6fd5e063b1d97L) *  y)));
	//    .end local v6    # "a3":D
	//    .end local v8    # "a4":D
	//    .end local v10    # "annual":D
	//    .end local v12    # "center":D
	//    .end local v14    # "day":D
	//    .end local v16    # "evection":D
	//    .end local v18    # "meanAnomalyMoon":D
	//    .end local v20    # "meanLongitude":D
	//    .end local v22    # "moonEclipLat":D
	//    .end local v24    # "nodeLongitude":D
	//    .end local v26    # "sunLong":D
	//    .end local v28    # "variation":D
	//    .end local v30    # "x":D
	//    .end local v32    # "y":D
label_cond_142:
	return this->moonPosition;

}
// .method public getMoonRiseSet(Z)J
long long android::icu::impl::CalendarAstronomer::getMoonRiseSet(bool rise)
{
	
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_4> cVar0;
	
	//    .param p1, "rise"    # Z
	cVar0 = std::make_shared<android::icu::impl::CalendarAstronomer_S_4>(this);
	return this->riseOrSet(cVar0, rise, 0x3f830d3e7ef4bd1bL, 0x3f8441500d4c900dL, 0xea60);

}
// .method public getMoonTime(DZ)J
long long android::icu::impl::CalendarAstronomer::getMoonTime(double desired,bool next)
{
	
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_3> cVar0;
	
	//    .param p1, "desired"    # D
	//    .param p3, "next"    # Z
	cVar0 = std::make_shared<android::icu::impl::CalendarAstronomer_S_3>(this);
	return this->timeOfAngle(cVar0, desired, 0x403d87d4abcb41d5L, 0xea60, next);

}
// .method public getMoonTime(Landroid/icu/impl/CalendarAstronomer$MoonAge;Z)J
long long android::icu::impl::CalendarAstronomer::getMoonTime(std::shared_ptr<android::icu::impl::CalendarAstronomer_S_MoonAge> desired,bool next)
{
	
	//    .param p1, "desired"    # Landroid/icu/impl/CalendarAstronomer$MoonAge;
	//    .param p2, "next"    # Z
	return this->getMoonTime(desired->value, next);

}
// .method public getSunLongitude()D
double android::icu::impl::CalendarAstronomer::getSunLongitude()
{
	
	auto result;
	
	if ( (this->sunLongitude < 0x1) )     
		goto label_cond_1a;
	result = this->getSunLongitude(this->getJulianDay());
	//    .local v0, "result":[D
	this->sunLongitude = result[0x0];
	this->meanAnomalySun = result[0x1];
	//    .end local v0    # "result":[D
label_cond_1a:
	return this->sunLongitude;

}
// .method getSunLongitude(D)[D
double android::icu::impl::CalendarAstronomer::getSunLongitude(double julian)
{
	
	double cVar0;
	double meanAnomaly;
	std::shared<std::vector<double[]>> cVar1;
	
	//    .param p1, "julian"    # D
	cVar0 = 0x4013bdaf8cee89a2L;
	//    .local v0, "day":D
	//    .local v2, "epochAngle":D
	meanAnomaly = android::icu::impl::CalendarAstronomer::norm2PI(( ( 0x4013818b33ddeee0L + android::icu::impl::CalendarAstronomer::norm2PI(( 0x3f919d9bcdd8ac02L * (julian -  0x4142ad09c0000000L)))) - cVar0));
	//    .local v4, "meanAnomaly":D
	cVar1 = std::make_shared<std::vector<double[]>>(0x2);
	cVar1[0x0] = android::icu::impl::CalendarAstronomer::norm2PI(( this->trueAnomaly(meanAnomaly, 0x3f911d3671ac14c6L) + cVar0));
	cVar1[0x1] = meanAnomaly;
	return cVar1;

}
// .method public getSunPosition()Landroid/icu/impl/CalendarAstronomer$Equatorial;
std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Equatorial> android::icu::impl::CalendarAstronomer::getSunPosition()
{
	
	return this->eclipticToEquatorial(this->getSunLongitude(), 0x0);

}
// .method public getSunRiseSet(Z)J
long long android::icu::impl::CalendarAstronomer::getSunRiseSet(bool rise)
{
	
	long long cVar0;
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_2> cVar1;
	
	//    .param p1, "rise"    # Z
	//    .local v18, "t0":J
	//    .local v14, "noon":J
	if ( !(rise) )  
		goto label_cond_52;
	cVar0 = -0x6;
label_goto_25:
	this->setTime(((cVar0 *  0x36ee80) +  (((((this->time +  this->fGmtOffset) /  0x5265c00) *  0x5265c00) -  this->fGmtOffset) + 0x2932e00)));
	cVar1 = std::make_shared<android::icu::impl::CalendarAstronomer_S_2>(this);
	//    .local v16, "t":J
	this->setTime(this->time);
	return this->riseOrSet(cVar1, rise, 0x3f830d3e7ef4bd1bL, 0x3f8441500d4c900dL, 0x1388);
	// 2505    .line 699
	// 2506    .end local v16    # "t":J
label_cond_52:
	cVar0 = 0x6;
	goto label_goto_25;

}
// .method public getSunTime(DZ)J
long long android::icu::impl::CalendarAstronomer::getSunTime(double desired,bool next)
{
	
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_1> cVar0;
	
	//    .param p1, "desired"    # D
	//    .param p3, "next"    # Z
	cVar0 = std::make_shared<android::icu::impl::CalendarAstronomer_S_1>(this);
	return this->timeOfAngle(cVar0, desired, 0x4076d3e003ab862bL, 0xea60, next);

}
// .method public getSunTime(Landroid/icu/impl/CalendarAstronomer$SolarLongitude;Z)J
long long android::icu::impl::CalendarAstronomer::getSunTime(std::shared_ptr<android::icu::impl::CalendarAstronomer_S_SolarLongitude> desired,bool next)
{
	
	//    .param p1, "desired"    # Landroid/icu/impl/CalendarAstronomer$SolarLongitude;
	//    .param p2, "next"    # Z
	return this->getSunTime(desired->value, next);

}
// .method public getTime()J
long long android::icu::impl::CalendarAstronomer::getTime()
{
	
	return this->time;

}
// .method public local(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::CalendarAstronomer::local(long long localMillis)
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	//    .param p1, "localMillis"    # J
	cVar0 = std::make_shared<java::util::Date>((localMillis - (long long)(java::util::TimeZone::getDefault({const[class].FS-Param})->getRawOffset())));
	return cVar0->toString();

}
// .method public setDate(Ljava/util/Date;)V
void android::icu::impl::CalendarAstronomer::setDate(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	this->setTime(date->getTime());
	return;

}
// .method public setJulianDay(D)V
void android::icu::impl::CalendarAstronomer::setJulianDay(double jdn)
{
	
	//    .param p1, "jdn"    # D
	this->time = ((long long)(( 0x4194997000000000L * jdn)) +  -0xbfc83e532200L);
	this->clearCache();
	this->julianDay = jdn;
	return;

}
// .method public setTime(J)V
void android::icu::impl::CalendarAstronomer::setTime(long long aTime)
{
	
	//    .param p1, "aTime"    # J
	this->time = aTime;
	this->clearCache();
	return;

}


