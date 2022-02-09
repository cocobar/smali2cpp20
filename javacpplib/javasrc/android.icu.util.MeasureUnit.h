#ifndef __android_icu_util_MeasureUnit__
#define __android_icu_util_MeasureUnit__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\MeasureUnit.smali
#include "java2ctype.h"
#include "android.icu.impl.Pair.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.MeasureUnit_S_Factory.h"
#include "android.icu.util.TimeUnit.h"
#include "java.io.Serializable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::util{
class MeasureUnit : public java::io::Serializable {
protected:
	std::shared_ptr<java::lang::String> subType;
	std::shared_ptr<java::lang::String> type;
	MeasureUnit(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> subType);
	static std::shared_ptr<android::icu::util::MeasureUnit> addUnit(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> unitName,std::shared_ptr<android::icu::util::MeasureUnit_S_Factory> factory);
private:
	static std::shared_ptr<android::icu::util::MeasureUnit_S_Factory> UNIT_FACTORY;
	static std::shared_ptr<java::util::Map<java::lang::String,java::util::Map<java::lang::String,android::icu::util::MeasureUnit>>> cache;
	static bool cacheIsPopulated;
	static long long serialVersionUID;
	static std::shared_ptr<java::util::HashMap<android::icu::impl::Pair<android::icu::util::MeasureUnit,android::icu::util::MeasureUnit>,android::icu::util::MeasureUnit>> unitPerUnitToSingleUnit;
	static void populateCache();
	std::shared_ptr<java::lang::Object> virtual writeReplace();
public:
	static std::shared_ptr<android::icu::util::MeasureUnit> ACRE;
	static std::shared_ptr<android::icu::util::MeasureUnit> ACRE_FOOT;
	static std::shared_ptr<android::icu::util::MeasureUnit> AMPERE;
	static std::shared_ptr<android::icu::util::MeasureUnit> ARC_MINUTE;
	static std::shared_ptr<android::icu::util::MeasureUnit> ARC_SECOND;
	static std::shared_ptr<android::icu::text::UnicodeSet> ASCII;
	static std::shared_ptr<android::icu::text::UnicodeSet> ASCII_HYPHEN_DIGITS;
	static std::shared_ptr<android::icu::util::MeasureUnit> ASTRONOMICAL_UNIT;
	static std::shared_ptr<android::icu::util::MeasureUnit> BIT;
	static std::shared_ptr<android::icu::util::MeasureUnit> BUSHEL;
	static std::shared_ptr<android::icu::util::MeasureUnit> BYTE;
	static std::shared_ptr<android::icu::util::MeasureUnit> CALORIE;
	static std::shared_ptr<android::icu::util::MeasureUnit> CARAT;
	static std::shared_ptr<android::icu::util::MeasureUnit> CELSIUS;
	static std::shared_ptr<android::icu::util::MeasureUnit> CENTILITER;
	static std::shared_ptr<android::icu::util::MeasureUnit> CENTIMETER;
	static std::shared_ptr<android::icu::util::MeasureUnit> CENTURY;
	static std::shared_ptr<android::icu::util::MeasureUnit> CUBIC_CENTIMETER;
	static std::shared_ptr<android::icu::util::MeasureUnit> CUBIC_FOOT;
	static std::shared_ptr<android::icu::util::MeasureUnit> CUBIC_INCH;
	static std::shared_ptr<android::icu::util::MeasureUnit> CUBIC_KILOMETER;
	static std::shared_ptr<android::icu::util::MeasureUnit> CUBIC_METER;
	static std::shared_ptr<android::icu::util::MeasureUnit> CUBIC_MILE;
	static std::shared_ptr<android::icu::util::MeasureUnit> CUBIC_YARD;
	static std::shared_ptr<android::icu::util::MeasureUnit> CUP;
	static std::shared_ptr<android::icu::util::MeasureUnit> CUP_METRIC;
	static std::shared_ptr<android::icu::util::MeasureUnit_S_Factory> CURRENCY_FACTORY;
	static std::shared_ptr<android::icu::util::TimeUnit> DAY;
	static std::shared_ptr<android::icu::util::MeasureUnit> DECILITER;
	static std::shared_ptr<android::icu::util::MeasureUnit> DECIMETER;
	static std::shared_ptr<android::icu::util::MeasureUnit> DEGREE;
	static std::shared_ptr<android::icu::util::MeasureUnit> EAST;
	static std::shared_ptr<android::icu::util::MeasureUnit> FAHRENHEIT;
	static std::shared_ptr<android::icu::util::MeasureUnit> FATHOM;
	static std::shared_ptr<android::icu::util::MeasureUnit> FLUID_OUNCE;
	static std::shared_ptr<android::icu::util::MeasureUnit> FOODCALORIE;
	static std::shared_ptr<android::icu::util::MeasureUnit> FOOT;
	static std::shared_ptr<android::icu::util::MeasureUnit> FURLONG;
	static std::shared_ptr<android::icu::util::MeasureUnit> GALLON;
	static std::shared_ptr<android::icu::util::MeasureUnit> GALLON_IMPERIAL;
	static std::shared_ptr<android::icu::util::MeasureUnit> GENERIC_TEMPERATURE;
	static std::shared_ptr<android::icu::util::MeasureUnit> GIGABIT;
	static std::shared_ptr<android::icu::util::MeasureUnit> GIGABYTE;
	static std::shared_ptr<android::icu::util::MeasureUnit> GIGAHERTZ;
	static std::shared_ptr<android::icu::util::MeasureUnit> GIGAWATT;
	static std::shared_ptr<android::icu::util::MeasureUnit> GRAM;
	static std::shared_ptr<android::icu::util::MeasureUnit> G_FORCE;
	static std::shared_ptr<android::icu::util::MeasureUnit> HECTARE;
	static std::shared_ptr<android::icu::util::MeasureUnit> HECTOLITER;
	static std::shared_ptr<android::icu::util::MeasureUnit> HECTOPASCAL;
	static std::shared_ptr<android::icu::util::MeasureUnit> HERTZ;
	static std::shared_ptr<android::icu::util::MeasureUnit> HORSEPOWER;
	static std::shared_ptr<android::icu::util::TimeUnit> HOUR;
	static std::shared_ptr<android::icu::util::MeasureUnit> INCH;
	static std::shared_ptr<android::icu::util::MeasureUnit> INCH_HG;
	static std::shared_ptr<android::icu::util::MeasureUnit> JOULE;
	static std::shared_ptr<android::icu::util::MeasureUnit> KARAT;
	static std::shared_ptr<android::icu::util::MeasureUnit> KELVIN;
	static std::shared_ptr<android::icu::util::MeasureUnit> KILOBIT;
	static std::shared_ptr<android::icu::util::MeasureUnit> KILOBYTE;
	static std::shared_ptr<android::icu::util::MeasureUnit> KILOCALORIE;
	static std::shared_ptr<android::icu::util::MeasureUnit> KILOGRAM;
	static std::shared_ptr<android::icu::util::MeasureUnit> KILOHERTZ;
	static std::shared_ptr<android::icu::util::MeasureUnit> KILOJOULE;
	static std::shared_ptr<android::icu::util::MeasureUnit> KILOMETER;
	static std::shared_ptr<android::icu::util::MeasureUnit> KILOMETER_PER_HOUR;
	static std::shared_ptr<android::icu::util::MeasureUnit> KILOWATT;
	static std::shared_ptr<android::icu::util::MeasureUnit> KILOWATT_HOUR;
	static std::shared_ptr<android::icu::util::MeasureUnit> KNOT;
	static std::shared_ptr<android::icu::util::MeasureUnit> LIGHT_YEAR;
	static std::shared_ptr<android::icu::util::MeasureUnit> LITER;
	static std::shared_ptr<android::icu::util::MeasureUnit> LITER_PER_100KILOMETERS;
	static std::shared_ptr<android::icu::util::MeasureUnit> LITER_PER_KILOMETER;
	static std::shared_ptr<android::icu::util::MeasureUnit> LUX;
	static std::shared_ptr<android::icu::util::MeasureUnit> MEGABIT;
	static std::shared_ptr<android::icu::util::MeasureUnit> MEGABYTE;
	static std::shared_ptr<android::icu::util::MeasureUnit> MEGAHERTZ;
	static std::shared_ptr<android::icu::util::MeasureUnit> MEGALITER;
	static std::shared_ptr<android::icu::util::MeasureUnit> MEGAWATT;
	static std::shared_ptr<android::icu::util::MeasureUnit> METER;
	static std::shared_ptr<android::icu::util::MeasureUnit> METER_PER_SECOND;
	static std::shared_ptr<android::icu::util::MeasureUnit> METER_PER_SECOND_SQUARED;
	static std::shared_ptr<android::icu::util::MeasureUnit> METRIC_TON;
	static std::shared_ptr<android::icu::util::MeasureUnit> MICROGRAM;
	static std::shared_ptr<android::icu::util::MeasureUnit> MICROMETER;
	static std::shared_ptr<android::icu::util::MeasureUnit> MICROSECOND;
	static std::shared_ptr<android::icu::util::MeasureUnit> MILE;
	static std::shared_ptr<android::icu::util::MeasureUnit> MILE_PER_GALLON;
	static std::shared_ptr<android::icu::util::MeasureUnit> MILE_PER_GALLON_IMPERIAL;
	static std::shared_ptr<android::icu::util::MeasureUnit> MILE_PER_HOUR;
	static std::shared_ptr<android::icu::util::MeasureUnit> MILE_SCANDINAVIAN;
	static std::shared_ptr<android::icu::util::MeasureUnit> MILLIAMPERE;
	static std::shared_ptr<android::icu::util::MeasureUnit> MILLIBAR;
	static std::shared_ptr<android::icu::util::MeasureUnit> MILLIGRAM;
	static std::shared_ptr<android::icu::util::MeasureUnit> MILLIGRAM_PER_DECILITER;
	static std::shared_ptr<android::icu::util::MeasureUnit> MILLILITER;
	static std::shared_ptr<android::icu::util::MeasureUnit> MILLIMETER;
	static std::shared_ptr<android::icu::util::MeasureUnit> MILLIMETER_OF_MERCURY;
	static std::shared_ptr<android::icu::util::MeasureUnit> MILLIMOLE_PER_LITER;
	static std::shared_ptr<android::icu::util::MeasureUnit> MILLISECOND;
	static std::shared_ptr<android::icu::util::MeasureUnit> MILLIWATT;
	static std::shared_ptr<android::icu::util::TimeUnit> MINUTE;
	static std::shared_ptr<android::icu::util::TimeUnit> MONTH;
	static std::shared_ptr<android::icu::util::MeasureUnit> NANOMETER;
	static std::shared_ptr<android::icu::util::MeasureUnit> NANOSECOND;
	static std::shared_ptr<android::icu::util::MeasureUnit> NAUTICAL_MILE;
	static std::shared_ptr<android::icu::util::MeasureUnit> NORTH;
	static std::shared_ptr<android::icu::util::MeasureUnit> OHM;
	static std::shared_ptr<android::icu::util::MeasureUnit> OUNCE;
	static std::shared_ptr<android::icu::util::MeasureUnit> OUNCE_TROY;
	static std::shared_ptr<android::icu::util::MeasureUnit> PARSEC;
	static std::shared_ptr<android::icu::util::MeasureUnit> PART_PER_MILLION;
	static std::shared_ptr<android::icu::util::MeasureUnit> PICOMETER;
	static std::shared_ptr<android::icu::util::MeasureUnit> PINT;
	static std::shared_ptr<android::icu::util::MeasureUnit> PINT_METRIC;
	static std::shared_ptr<android::icu::util::MeasureUnit> POUND;
	static std::shared_ptr<android::icu::util::MeasureUnit> POUND_PER_SQUARE_INCH;
	static std::shared_ptr<android::icu::util::MeasureUnit> QUART;
	static std::shared_ptr<android::icu::util::MeasureUnit> RADIAN;
	static std::shared_ptr<android::icu::util::MeasureUnit> REVOLUTION_ANGLE;
	static std::shared_ptr<android::icu::util::TimeUnit> SECOND;
	static std::shared_ptr<android::icu::util::MeasureUnit> SOUTH;
	static std::shared_ptr<android::icu::util::MeasureUnit> SQUARE_CENTIMETER;
	static std::shared_ptr<android::icu::util::MeasureUnit> SQUARE_FOOT;
	static std::shared_ptr<android::icu::util::MeasureUnit> SQUARE_INCH;
	static std::shared_ptr<android::icu::util::MeasureUnit> SQUARE_KILOMETER;
	static std::shared_ptr<android::icu::util::MeasureUnit> SQUARE_METER;
	static std::shared_ptr<android::icu::util::MeasureUnit> SQUARE_MILE;
	static std::shared_ptr<android::icu::util::MeasureUnit> SQUARE_YARD;
	static std::shared_ptr<android::icu::util::MeasureUnit> STONE;
	static std::shared_ptr<android::icu::util::MeasureUnit> TABLESPOON;
	static std::shared_ptr<android::icu::util::MeasureUnit> TEASPOON;
	static std::shared_ptr<android::icu::util::MeasureUnit> TERABIT;
	static std::shared_ptr<android::icu::util::MeasureUnit> TERABYTE;
	static std::shared_ptr<android::icu::util::MeasureUnit_S_Factory> TIMEUNIT_FACTORY;
	static std::shared_ptr<android::icu::util::MeasureUnit> TON;
	static std::shared_ptr<android::icu::util::MeasureUnit> VOLT;
	static std::shared_ptr<android::icu::util::MeasureUnit> WATT;
	static std::shared_ptr<android::icu::util::TimeUnit> WEEK;
	static std::shared_ptr<android::icu::util::MeasureUnit> WEST;
	static std::shared_ptr<android::icu::util::MeasureUnit> YARD;
	static std::shared_ptr<android::icu::util::TimeUnit> YEAR;
	static void static_cinit();
	static std::shared_ptr<java::util::Set<android::icu::util::MeasureUnit>> getAvailable();
	static std::shared_ptr<java::util::Set<android::icu::util::MeasureUnit>> getAvailable(std::shared_ptr<java::lang::String> type);
	static std::shared_ptr<java::util::Set<java::lang::String>> getAvailableTypes();
	static std::shared_ptr<android::icu::util::MeasureUnit> internalGetInstance(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> subType);
	static std::shared_ptr<android::icu::util::MeasureUnit> resolveUnitPerUnit(std::shared_ptr<android::icu::util::MeasureUnit> unit,std::shared_ptr<android::icu::util::MeasureUnit> perUnit);
	bool virtual equals(std::shared_ptr<java::lang::Object> rhs);
	std::shared_ptr<java::lang::String> virtual getSubtype();
	std::shared_ptr<java::lang::String> virtual getType();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::MeasureUnit::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~MeasureUnit(){
	}

}; // class MeasureUnit
}; // namespace android::icu::util

#endif //__android_icu_util_MeasureUnit__

