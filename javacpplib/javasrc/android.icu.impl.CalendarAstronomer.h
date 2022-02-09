#ifndef __android_icu_impl_CalendarAstronomer__
#define __android_icu_impl_CalendarAstronomer__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarAstronomer.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarAstronomer_S_AngleFunc.h"
#include "android.icu.impl.CalendarAstronomer_S_CoordFunc.h"
#include "android.icu.impl.CalendarAstronomer_S_Ecliptic.h"
#include "android.icu.impl.CalendarAstronomer_S_Equatorial.h"
#include "android.icu.impl.CalendarAstronomer_S_Horizon.h"
#include "android.icu.impl.CalendarAstronomer_S_MoonAge.h"
#include "android.icu.impl.CalendarAstronomer_S_SolarLongitude.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"

namespace android::icu::impl{
class CalendarAstronomer : public java::lang::Object {
protected:
private:
	static double DEG_RAD;
	static double INVALID;
	static double PI;
	static double PI2;
	static double RAD_DEG;
	static double RAD_HOUR;
	double eclipObliquity;
	long long fGmtOffset;
	double fLatitude;
	double fLongitude;
	double julianCentury;
	double julianDay;
	double meanAnomalySun;
	double moonEclipLong;
	double moonLongitude;
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Equatorial> moonPosition;
	double siderealT0;
	double siderealTime;
	double sunLongitude;
	long long time;
	void virtual clearCache();
	double virtual eclipticObliquity();
	double virtual getSiderealOffset();
	long long virtual lstToUT(double lst);
	static double norm2PI(double angle);
	static double normPI(double angle);
	static double normalize(double value,double range);
	static std::shared_ptr<java::lang::String> radToDms(double angle);
	static std::shared_ptr<java::lang::String> radToHms(double angle);
	long long virtual riseOrSet(std::shared_ptr<android::icu::impl::CalendarAstronomer_S_CoordFunc> func,bool rise,double diameter,double refraction,long long epsilon);
	long long virtual timeOfAngle(std::shared_ptr<android::icu::impl::CalendarAstronomer_S_AngleFunc> func,double desired,double periodDays,long long epsilon,bool next);
	double virtual trueAnomaly(double meanAnomaly,double eccentricity);
public:
	static std::shared_ptr<android::icu::impl::CalendarAstronomer_S_SolarLongitude> AUTUMN_EQUINOX;
	static long long DAY_MS;
	static long long EPOCH_2000_MS;
	static std::shared_ptr<android::icu::impl::CalendarAstronomer_S_MoonAge> FIRST_QUARTER;
	static std::shared_ptr<android::icu::impl::CalendarAstronomer_S_MoonAge> FULL_MOON;
	static int HOUR_MS;
	static double JD_EPOCH;
	static long long JULIAN_EPOCH_MS;
	static std::shared_ptr<android::icu::impl::CalendarAstronomer_S_MoonAge> LAST_QUARTER;
	static int MINUTE_MS;
	static std::shared_ptr<android::icu::impl::CalendarAstronomer_S_MoonAge> NEW_MOON;
	static int SECOND_MS;
	static double SIDEREAL_DAY;
	static double SIDEREAL_MONTH;
	static double SIDEREAL_YEAR;
	static double SOLAR_DAY;
	static std::shared_ptr<android::icu::impl::CalendarAstronomer_S_SolarLongitude> SUMMER_SOLSTICE;
	static double SUN_E;
	static double SUN_ETA_G;
	static double SUN_OMEGA_G;
	static double SYNODIC_MONTH;
	static double TROPICAL_YEAR;
	static std::shared_ptr<android::icu::impl::CalendarAstronomer_S_SolarLongitude> VERNAL_EQUINOX;
	static std::shared_ptr<android::icu::impl::CalendarAstronomer_S_SolarLongitude> WINTER_SOLSTICE;
	static double moonA;
	static double moonE;
	static double moonI;
	static double moonL0;
	static double moonN0;
	static double moonP0;
	static double moonPi;
	static double moonT0;
	static std::shared_ptr<java::lang::String> _wrap0(double angle);
	static std::shared_ptr<java::lang::String> _wrap1(double angle);
	static void static_cinit();
	CalendarAstronomer();
	CalendarAstronomer(double longitude,double latitude);
	CalendarAstronomer(long long aTime);
	CalendarAstronomer(std::shared_ptr<java::util::Date> d);
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Equatorial> virtual eclipticToEquatorial(double eclipLong);
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Equatorial> virtual eclipticToEquatorial(double eclipLong,double eclipLat);
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Equatorial> virtual eclipticToEquatorial(std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Ecliptic> ecliptic);
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Horizon> virtual eclipticToHorizon(double eclipLong);
	std::shared_ptr<java::util::Date> virtual getDate();
	double virtual getGreenwichSidereal();
	double virtual getJulianCentury();
	double virtual getJulianDay();
	double virtual getLocalSidereal();
	double virtual getMoonAge();
	double virtual getMoonPhase();
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Equatorial> virtual getMoonPosition();
	long long virtual getMoonRiseSet(bool rise);
	long long virtual getMoonTime(double desired,bool next);
	long long virtual getMoonTime(std::shared_ptr<android::icu::impl::CalendarAstronomer_S_MoonAge> desired,bool next);
	double virtual getSunLongitude();
	double virtual getSunLongitude(double julian);
	std::shared_ptr<android::icu::impl::CalendarAstronomer_S_Equatorial> virtual getSunPosition();
	long long virtual getSunRiseSet(bool rise);
	long long virtual getSunTime(double desired,bool next);
	long long virtual getSunTime(std::shared_ptr<android::icu::impl::CalendarAstronomer_S_SolarLongitude> desired,bool next);
	long long virtual getTime();
	std::shared_ptr<java::lang::String> virtual local(long long localMillis);
	void virtual setDate(std::shared_ptr<java::util::Date> date);
	void virtual setJulianDay(double jdn);
	void virtual setTime(long long aTime);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::CalendarAstronomer::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CalendarAstronomer(){
	}

}; // class CalendarAstronomer
}; // namespace android::icu::impl

#endif //__android_icu_impl_CalendarAstronomer__

