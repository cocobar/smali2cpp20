// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\MeasureUnit.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.Pair.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.MeasureUnit_S_1.h"
#include "android.icu.util.MeasureUnit_S_2.h"
#include "android.icu.util.MeasureUnit_S_3.h"
#include "android.icu.util.MeasureUnit_S_CurrencyNumericCodeSink.h"
#include "android.icu.util.MeasureUnit_S_Factory.h"
#include "android.icu.util.MeasureUnit_S_MeasureUnitProxy.h"
#include "android.icu.util.MeasureUnit_S_MeasureUnitSink.h"
#include "android.icu.util.MeasureUnit.h"
#include "android.icu.util.TimeUnit.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

static android::icu::util::MeasureUnit::ACRE;
static android::icu::util::MeasureUnit::ACRE_FOOT;
static android::icu::util::MeasureUnit::AMPERE;
static android::icu::util::MeasureUnit::ARC_MINUTE;
static android::icu::util::MeasureUnit::ARC_SECOND;
static android::icu::util::MeasureUnit::ASCII;
static android::icu::util::MeasureUnit::ASCII_HYPHEN_DIGITS;
static android::icu::util::MeasureUnit::ASTRONOMICAL_UNIT;
static android::icu::util::MeasureUnit::BIT;
static android::icu::util::MeasureUnit::BUSHEL;
static android::icu::util::MeasureUnit::BYTE;
static android::icu::util::MeasureUnit::CALORIE;
static android::icu::util::MeasureUnit::CARAT;
static android::icu::util::MeasureUnit::CELSIUS;
static android::icu::util::MeasureUnit::CENTILITER;
static android::icu::util::MeasureUnit::CENTIMETER;
static android::icu::util::MeasureUnit::CENTURY;
static android::icu::util::MeasureUnit::CUBIC_CENTIMETER;
static android::icu::util::MeasureUnit::CUBIC_FOOT;
static android::icu::util::MeasureUnit::CUBIC_INCH;
static android::icu::util::MeasureUnit::CUBIC_KILOMETER;
static android::icu::util::MeasureUnit::CUBIC_METER;
static android::icu::util::MeasureUnit::CUBIC_MILE;
static android::icu::util::MeasureUnit::CUBIC_YARD;
static android::icu::util::MeasureUnit::CUP;
static android::icu::util::MeasureUnit::CUP_METRIC;
static android::icu::util::MeasureUnit::CURRENCY_FACTORY = nullptr;
static android::icu::util::MeasureUnit::DAY;
static android::icu::util::MeasureUnit::DECILITER;
static android::icu::util::MeasureUnit::DECIMETER;
static android::icu::util::MeasureUnit::DEGREE;
static android::icu::util::MeasureUnit::EAST;
static android::icu::util::MeasureUnit::FAHRENHEIT;
static android::icu::util::MeasureUnit::FATHOM;
static android::icu::util::MeasureUnit::FLUID_OUNCE;
static android::icu::util::MeasureUnit::FOODCALORIE;
static android::icu::util::MeasureUnit::FOOT;
static android::icu::util::MeasureUnit::FURLONG;
static android::icu::util::MeasureUnit::GALLON;
static android::icu::util::MeasureUnit::GALLON_IMPERIAL;
static android::icu::util::MeasureUnit::GENERIC_TEMPERATURE;
static android::icu::util::MeasureUnit::GIGABIT;
static android::icu::util::MeasureUnit::GIGABYTE;
static android::icu::util::MeasureUnit::GIGAHERTZ;
static android::icu::util::MeasureUnit::GIGAWATT;
static android::icu::util::MeasureUnit::GRAM;
static android::icu::util::MeasureUnit::G_FORCE;
static android::icu::util::MeasureUnit::HECTARE;
static android::icu::util::MeasureUnit::HECTOLITER;
static android::icu::util::MeasureUnit::HECTOPASCAL;
static android::icu::util::MeasureUnit::HERTZ;
static android::icu::util::MeasureUnit::HORSEPOWER;
static android::icu::util::MeasureUnit::HOUR;
static android::icu::util::MeasureUnit::INCH;
static android::icu::util::MeasureUnit::INCH_HG;
static android::icu::util::MeasureUnit::JOULE;
static android::icu::util::MeasureUnit::KARAT;
static android::icu::util::MeasureUnit::KELVIN;
static android::icu::util::MeasureUnit::KILOBIT;
static android::icu::util::MeasureUnit::KILOBYTE;
static android::icu::util::MeasureUnit::KILOCALORIE;
static android::icu::util::MeasureUnit::KILOGRAM;
static android::icu::util::MeasureUnit::KILOHERTZ;
static android::icu::util::MeasureUnit::KILOJOULE;
static android::icu::util::MeasureUnit::KILOMETER;
static android::icu::util::MeasureUnit::KILOMETER_PER_HOUR;
static android::icu::util::MeasureUnit::KILOWATT;
static android::icu::util::MeasureUnit::KILOWATT_HOUR;
static android::icu::util::MeasureUnit::KNOT;
static android::icu::util::MeasureUnit::LIGHT_YEAR;
static android::icu::util::MeasureUnit::LITER;
static android::icu::util::MeasureUnit::LITER_PER_100KILOMETERS;
static android::icu::util::MeasureUnit::LITER_PER_KILOMETER;
static android::icu::util::MeasureUnit::LUX;
static android::icu::util::MeasureUnit::MEGABIT;
static android::icu::util::MeasureUnit::MEGABYTE;
static android::icu::util::MeasureUnit::MEGAHERTZ;
static android::icu::util::MeasureUnit::MEGALITER;
static android::icu::util::MeasureUnit::MEGAWATT;
static android::icu::util::MeasureUnit::METER;
static android::icu::util::MeasureUnit::METER_PER_SECOND;
static android::icu::util::MeasureUnit::METER_PER_SECOND_SQUARED;
static android::icu::util::MeasureUnit::METRIC_TON;
static android::icu::util::MeasureUnit::MICROGRAM;
static android::icu::util::MeasureUnit::MICROMETER;
static android::icu::util::MeasureUnit::MICROSECOND;
static android::icu::util::MeasureUnit::MILE;
static android::icu::util::MeasureUnit::MILE_PER_GALLON;
static android::icu::util::MeasureUnit::MILE_PER_GALLON_IMPERIAL;
static android::icu::util::MeasureUnit::MILE_PER_HOUR;
static android::icu::util::MeasureUnit::MILE_SCANDINAVIAN;
static android::icu::util::MeasureUnit::MILLIAMPERE;
static android::icu::util::MeasureUnit::MILLIBAR;
static android::icu::util::MeasureUnit::MILLIGRAM;
static android::icu::util::MeasureUnit::MILLIGRAM_PER_DECILITER;
static android::icu::util::MeasureUnit::MILLILITER;
static android::icu::util::MeasureUnit::MILLIMETER;
static android::icu::util::MeasureUnit::MILLIMETER_OF_MERCURY;
static android::icu::util::MeasureUnit::MILLIMOLE_PER_LITER;
static android::icu::util::MeasureUnit::MILLISECOND;
static android::icu::util::MeasureUnit::MILLIWATT;
static android::icu::util::MeasureUnit::MINUTE;
static android::icu::util::MeasureUnit::MONTH;
static android::icu::util::MeasureUnit::NANOMETER;
static android::icu::util::MeasureUnit::NANOSECOND;
static android::icu::util::MeasureUnit::NAUTICAL_MILE;
static android::icu::util::MeasureUnit::NORTH;
static android::icu::util::MeasureUnit::OHM;
static android::icu::util::MeasureUnit::OUNCE;
static android::icu::util::MeasureUnit::OUNCE_TROY;
static android::icu::util::MeasureUnit::PARSEC;
static android::icu::util::MeasureUnit::PART_PER_MILLION;
static android::icu::util::MeasureUnit::PICOMETER;
static android::icu::util::MeasureUnit::PINT;
static android::icu::util::MeasureUnit::PINT_METRIC;
static android::icu::util::MeasureUnit::POUND;
static android::icu::util::MeasureUnit::POUND_PER_SQUARE_INCH;
static android::icu::util::MeasureUnit::QUART;
static android::icu::util::MeasureUnit::RADIAN;
static android::icu::util::MeasureUnit::REVOLUTION_ANGLE;
static android::icu::util::MeasureUnit::SECOND;
static android::icu::util::MeasureUnit::SOUTH;
static android::icu::util::MeasureUnit::SQUARE_CENTIMETER;
static android::icu::util::MeasureUnit::SQUARE_FOOT;
static android::icu::util::MeasureUnit::SQUARE_INCH;
static android::icu::util::MeasureUnit::SQUARE_KILOMETER;
static android::icu::util::MeasureUnit::SQUARE_METER;
static android::icu::util::MeasureUnit::SQUARE_MILE;
static android::icu::util::MeasureUnit::SQUARE_YARD;
static android::icu::util::MeasureUnit::STONE;
static android::icu::util::MeasureUnit::TABLESPOON;
static android::icu::util::MeasureUnit::TEASPOON;
static android::icu::util::MeasureUnit::TERABIT;
static android::icu::util::MeasureUnit::TERABYTE;
static android::icu::util::MeasureUnit::TIMEUNIT_FACTORY = nullptr;
static android::icu::util::MeasureUnit::TON;
static android::icu::util::MeasureUnit::UNIT_FACTORY = nullptr;
static android::icu::util::MeasureUnit::VOLT;
static android::icu::util::MeasureUnit::WATT;
static android::icu::util::MeasureUnit::WEEK;
static android::icu::util::MeasureUnit::WEST;
static android::icu::util::MeasureUnit::YARD;
static android::icu::util::MeasureUnit::YEAR;
static android::icu::util::MeasureUnit::cache;
static android::icu::util::MeasureUnit::cacheIsPopulated = false;
static android::icu::util::MeasureUnit::serialVersionUID = -0x1988e6791858c814L;
static android::icu::util::MeasureUnit::unitPerUnitToSingleUnit;
// .method static constructor <clinit>()V
void android::icu::util::MeasureUnit::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	bool cVar3;
	std::shared_ptr<java::util::HashMap> cVar4;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar5;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar6;
	std::shared<std::vector<int[]>> cVar7;
	std::shared_ptr<android::icu::util::MeasureUnit_S_1> cVar8;
	std::shared_ptr<android::icu::util::MeasureUnit_S_2> cVar9;
	std::shared_ptr<android::icu::util::MeasureUnit_S_3> cVar10;
	std::shared_ptr<android::icu::util::TimeUnit> cVar11;
	std::shared_ptr<android::icu::util::TimeUnit> cVar12;
	std::shared_ptr<android::icu::util::TimeUnit> cVar13;
	std::shared_ptr<android::icu::util::TimeUnit> cVar14;
	std::shared_ptr<android::icu::util::TimeUnit> cVar15;
	std::shared_ptr<android::icu::util::TimeUnit> cVar16;
	std::shared_ptr<android::icu::util::TimeUnit> cVar17;
	std::shared_ptr<java::util::HashMap> cVar18;
	
	cVar0 = 0x7a;
	cVar1 = 0x61;
	cVar2 = 0x2d;
	cVar3 = 0x0;
	cVar4 = std::make_shared<java::util::HashMap>();
	android::icu::util::MeasureUnit::cache = cVar4;
	android::icu::util::MeasureUnit::cacheIsPopulated = cVar3;
	cVar5 = std::make_shared<android::icu::text::UnicodeSet>(cVar1, cVar0);
	android::icu::util::MeasureUnit::ASCII = cVar5->freeze();
	cVar7 = std::make_shared<std::vector<int[]>>(0x6);
	cVar7[cVar3] = cVar2;
	cVar7[0x1] = cVar2;
	cVar7[0x2] = 0x30;
	cVar7[0x3] = 0x39;
	cVar7[0x4] = cVar1;
	cVar7[0x5] = cVar0;
	cVar6 = std::make_shared<android::icu::text::UnicodeSet>(cVar7);
	android::icu::util::MeasureUnit::ASCII_HYPHEN_DIGITS = cVar6->freeze();
	cVar8 = std::make_shared<android::icu::util::MeasureUnit_S_1>();
	android::icu::util::MeasureUnit::UNIT_FACTORY = cVar8;
	cVar9 = std::make_shared<android::icu::util::MeasureUnit_S_2>();
	android::icu::util::MeasureUnit::CURRENCY_FACTORY = cVar9;
	cVar10 = std::make_shared<android::icu::util::MeasureUnit_S_3>();
	android::icu::util::MeasureUnit::TIMEUNIT_FACTORY = cVar10;
	android::icu::util::MeasureUnit::G_FORCE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("acceleration")), std::make_shared<java::lang::String>(std::make_shared<char[]>("g-force")));
	android::icu::util::MeasureUnit::METER_PER_SECOND_SQUARED = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("acceleration")), std::make_shared<java::lang::String>(std::make_shared<char[]>("meter-per-second-squared")));
	android::icu::util::MeasureUnit::ARC_MINUTE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("angle")), std::make_shared<java::lang::String>(std::make_shared<char[]>("arc-minute")));
	android::icu::util::MeasureUnit::ARC_SECOND = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("angle")), std::make_shared<java::lang::String>(std::make_shared<char[]>("arc-second")));
	android::icu::util::MeasureUnit::DEGREE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("angle")), std::make_shared<java::lang::String>(std::make_shared<char[]>("degree")));
	android::icu::util::MeasureUnit::RADIAN = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("angle")), std::make_shared<java::lang::String>(std::make_shared<char[]>("radian")));
	android::icu::util::MeasureUnit::REVOLUTION_ANGLE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("angle")), std::make_shared<java::lang::String>(std::make_shared<char[]>("revolution")));
	android::icu::util::MeasureUnit::ACRE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("area")), std::make_shared<java::lang::String>(std::make_shared<char[]>("acre")));
	android::icu::util::MeasureUnit::HECTARE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("area")), std::make_shared<java::lang::String>(std::make_shared<char[]>("hectare")));
	android::icu::util::MeasureUnit::SQUARE_CENTIMETER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("area")), std::make_shared<java::lang::String>(std::make_shared<char[]>("square-centimeter")));
	android::icu::util::MeasureUnit::SQUARE_FOOT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("area")), std::make_shared<java::lang::String>(std::make_shared<char[]>("square-foot")));
	android::icu::util::MeasureUnit::SQUARE_INCH = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("area")), std::make_shared<java::lang::String>(std::make_shared<char[]>("square-inch")));
	android::icu::util::MeasureUnit::SQUARE_KILOMETER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("area")), std::make_shared<java::lang::String>(std::make_shared<char[]>("square-kilometer")));
	android::icu::util::MeasureUnit::SQUARE_METER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("area")), std::make_shared<java::lang::String>(std::make_shared<char[]>("square-meter")));
	android::icu::util::MeasureUnit::SQUARE_MILE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("area")), std::make_shared<java::lang::String>(std::make_shared<char[]>("square-mile")));
	android::icu::util::MeasureUnit::SQUARE_YARD = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("area")), std::make_shared<java::lang::String>(std::make_shared<char[]>("square-yard")));
	android::icu::util::MeasureUnit::KARAT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("concentr")), std::make_shared<java::lang::String>(std::make_shared<char[]>("karat")));
	android::icu::util::MeasureUnit::MILLIGRAM_PER_DECILITER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("concentr")), std::make_shared<java::lang::String>(std::make_shared<char[]>("milligram-per-deciliter")));
	android::icu::util::MeasureUnit::MILLIMOLE_PER_LITER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("concentr")), std::make_shared<java::lang::String>(std::make_shared<char[]>("millimole-per-liter")));
	android::icu::util::MeasureUnit::PART_PER_MILLION = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("concentr")), std::make_shared<java::lang::String>(std::make_shared<char[]>("part-per-million")));
	android::icu::util::MeasureUnit::LITER_PER_100KILOMETERS = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("consumption")), std::make_shared<java::lang::String>(std::make_shared<char[]>("liter-per-100kilometers")));
	android::icu::util::MeasureUnit::LITER_PER_KILOMETER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("consumption")), std::make_shared<java::lang::String>(std::make_shared<char[]>("liter-per-kilometer")));
	android::icu::util::MeasureUnit::MILE_PER_GALLON = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("consumption")), std::make_shared<java::lang::String>(std::make_shared<char[]>("mile-per-gallon")));
	android::icu::util::MeasureUnit::MILE_PER_GALLON_IMPERIAL = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("consumption")), std::make_shared<java::lang::String>(std::make_shared<char[]>("mile-per-gallon-imperial")));
	android::icu::util::MeasureUnit::EAST = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("coordinate")), std::make_shared<java::lang::String>(std::make_shared<char[]>("east")));
	android::icu::util::MeasureUnit::NORTH = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("coordinate")), std::make_shared<java::lang::String>(std::make_shared<char[]>("north")));
	android::icu::util::MeasureUnit::SOUTH = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("coordinate")), std::make_shared<java::lang::String>(std::make_shared<char[]>("south")));
	android::icu::util::MeasureUnit::WEST = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("coordinate")), std::make_shared<java::lang::String>(std::make_shared<char[]>("west")));
	android::icu::util::MeasureUnit::BIT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital")), std::make_shared<java::lang::String>(std::make_shared<char[]>("bit")));
	android::icu::util::MeasureUnit::BYTE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital")), std::make_shared<java::lang::String>(std::make_shared<char[]>("byte")));
	android::icu::util::MeasureUnit::GIGABIT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital")), std::make_shared<java::lang::String>(std::make_shared<char[]>("gigabit")));
	android::icu::util::MeasureUnit::GIGABYTE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital")), std::make_shared<java::lang::String>(std::make_shared<char[]>("gigabyte")));
	android::icu::util::MeasureUnit::KILOBIT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital")), std::make_shared<java::lang::String>(std::make_shared<char[]>("kilobit")));
	android::icu::util::MeasureUnit::KILOBYTE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital")), std::make_shared<java::lang::String>(std::make_shared<char[]>("kilobyte")));
	android::icu::util::MeasureUnit::MEGABIT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital")), std::make_shared<java::lang::String>(std::make_shared<char[]>("megabit")));
	android::icu::util::MeasureUnit::MEGABYTE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital")), std::make_shared<java::lang::String>(std::make_shared<char[]>("megabyte")));
	android::icu::util::MeasureUnit::TERABIT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital")), std::make_shared<java::lang::String>(std::make_shared<char[]>("terabit")));
	android::icu::util::MeasureUnit::TERABYTE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital")), std::make_shared<java::lang::String>(std::make_shared<char[]>("terabyte")));
	android::icu::util::MeasureUnit::CENTURY = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("duration")), std::make_shared<java::lang::String>(std::make_shared<char[]>("century")));
	cVar11 = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("duration")), std::make_shared<java::lang::String>(std::make_shared<char[]>("day")));
	cVar11->checkCast("android::icu::util::TimeUnit");
	android::icu::util::MeasureUnit::DAY = cVar11;
	cVar12 = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("duration")), std::make_shared<java::lang::String>(std::make_shared<char[]>("hour")));
	cVar12->checkCast("android::icu::util::TimeUnit");
	android::icu::util::MeasureUnit::HOUR = cVar12;
	android::icu::util::MeasureUnit::MICROSECOND = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("duration")), std::make_shared<java::lang::String>(std::make_shared<char[]>("microsecond")));
	android::icu::util::MeasureUnit::MILLISECOND = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("duration")), std::make_shared<java::lang::String>(std::make_shared<char[]>("millisecond")));
	cVar13 = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("duration")), std::make_shared<java::lang::String>(std::make_shared<char[]>("minute")));
	cVar13->checkCast("android::icu::util::TimeUnit");
	android::icu::util::MeasureUnit::MINUTE = cVar13;
	cVar14 = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("duration")), std::make_shared<java::lang::String>(std::make_shared<char[]>("month")));
	cVar14->checkCast("android::icu::util::TimeUnit");
	android::icu::util::MeasureUnit::MONTH = cVar14;
	android::icu::util::MeasureUnit::NANOSECOND = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("duration")), std::make_shared<java::lang::String>(std::make_shared<char[]>("nanosecond")));
	cVar15 = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("duration")), std::make_shared<java::lang::String>(std::make_shared<char[]>("second")));
	cVar15->checkCast("android::icu::util::TimeUnit");
	android::icu::util::MeasureUnit::SECOND = cVar15;
	cVar16 = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("duration")), std::make_shared<java::lang::String>(std::make_shared<char[]>("week")));
	cVar16->checkCast("android::icu::util::TimeUnit");
	android::icu::util::MeasureUnit::WEEK = cVar16;
	cVar17 = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("duration")), std::make_shared<java::lang::String>(std::make_shared<char[]>("year")));
	cVar17->checkCast("android::icu::util::TimeUnit");
	android::icu::util::MeasureUnit::YEAR = cVar17;
	android::icu::util::MeasureUnit::AMPERE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("electric")), std::make_shared<java::lang::String>(std::make_shared<char[]>("ampere")));
	android::icu::util::MeasureUnit::MILLIAMPERE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("electric")), std::make_shared<java::lang::String>(std::make_shared<char[]>("milliampere")));
	android::icu::util::MeasureUnit::OHM = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("electric")), std::make_shared<java::lang::String>(std::make_shared<char[]>("ohm")));
	android::icu::util::MeasureUnit::VOLT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("electric")), std::make_shared<java::lang::String>(std::make_shared<char[]>("volt")));
	android::icu::util::MeasureUnit::CALORIE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("energy")), std::make_shared<java::lang::String>(std::make_shared<char[]>("calorie")));
	android::icu::util::MeasureUnit::FOODCALORIE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("energy")), std::make_shared<java::lang::String>(std::make_shared<char[]>("foodcalorie")));
	android::icu::util::MeasureUnit::JOULE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("energy")), std::make_shared<java::lang::String>(std::make_shared<char[]>("joule")));
	android::icu::util::MeasureUnit::KILOCALORIE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("energy")), std::make_shared<java::lang::String>(std::make_shared<char[]>("kilocalorie")));
	android::icu::util::MeasureUnit::KILOJOULE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("energy")), std::make_shared<java::lang::String>(std::make_shared<char[]>("kilojoule")));
	android::icu::util::MeasureUnit::KILOWATT_HOUR = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("energy")), std::make_shared<java::lang::String>(std::make_shared<char[]>("kilowatt-hour")));
	android::icu::util::MeasureUnit::GIGAHERTZ = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("frequency")), std::make_shared<java::lang::String>(std::make_shared<char[]>("gigahertz")));
	android::icu::util::MeasureUnit::HERTZ = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("frequency")), std::make_shared<java::lang::String>(std::make_shared<char[]>("hertz")));
	android::icu::util::MeasureUnit::KILOHERTZ = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("frequency")), std::make_shared<java::lang::String>(std::make_shared<char[]>("kilohertz")));
	android::icu::util::MeasureUnit::MEGAHERTZ = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("frequency")), std::make_shared<java::lang::String>(std::make_shared<char[]>("megahertz")));
	android::icu::util::MeasureUnit::ASTRONOMICAL_UNIT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("astronomical-unit")));
	android::icu::util::MeasureUnit::CENTIMETER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("centimeter")));
	android::icu::util::MeasureUnit::DECIMETER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("decimeter")));
	android::icu::util::MeasureUnit::FATHOM = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("fathom")));
	android::icu::util::MeasureUnit::FOOT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("foot")));
	android::icu::util::MeasureUnit::FURLONG = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("furlong")));
	android::icu::util::MeasureUnit::INCH = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("inch")));
	android::icu::util::MeasureUnit::KILOMETER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("kilometer")));
	android::icu::util::MeasureUnit::LIGHT_YEAR = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("light-year")));
	android::icu::util::MeasureUnit::METER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("meter")));
	android::icu::util::MeasureUnit::MICROMETER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("micrometer")));
	android::icu::util::MeasureUnit::MILE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("mile")));
	android::icu::util::MeasureUnit::MILE_SCANDINAVIAN = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("mile-scandinavian")));
	android::icu::util::MeasureUnit::MILLIMETER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("millimeter")));
	android::icu::util::MeasureUnit::NANOMETER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("nanometer")));
	android::icu::util::MeasureUnit::NAUTICAL_MILE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("nautical-mile")));
	android::icu::util::MeasureUnit::PARSEC = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("parsec")));
	android::icu::util::MeasureUnit::PICOMETER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("picometer")));
	android::icu::util::MeasureUnit::YARD = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("length")), std::make_shared<java::lang::String>(std::make_shared<char[]>("yard")));
	android::icu::util::MeasureUnit::LUX = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("light")), std::make_shared<java::lang::String>(std::make_shared<char[]>("lux")));
	android::icu::util::MeasureUnit::CARAT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("mass")), std::make_shared<java::lang::String>(std::make_shared<char[]>("carat")));
	android::icu::util::MeasureUnit::GRAM = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("mass")), std::make_shared<java::lang::String>(std::make_shared<char[]>("gram")));
	android::icu::util::MeasureUnit::KILOGRAM = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("mass")), std::make_shared<java::lang::String>(std::make_shared<char[]>("kilogram")));
	android::icu::util::MeasureUnit::METRIC_TON = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("mass")), std::make_shared<java::lang::String>(std::make_shared<char[]>("metric-ton")));
	android::icu::util::MeasureUnit::MICROGRAM = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("mass")), std::make_shared<java::lang::String>(std::make_shared<char[]>("microgram")));
	android::icu::util::MeasureUnit::MILLIGRAM = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("mass")), std::make_shared<java::lang::String>(std::make_shared<char[]>("milligram")));
	android::icu::util::MeasureUnit::OUNCE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("mass")), std::make_shared<java::lang::String>(std::make_shared<char[]>("ounce")));
	android::icu::util::MeasureUnit::OUNCE_TROY = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("mass")), std::make_shared<java::lang::String>(std::make_shared<char[]>("ounce-troy")));
	android::icu::util::MeasureUnit::POUND = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("mass")), std::make_shared<java::lang::String>(std::make_shared<char[]>("pound")));
	android::icu::util::MeasureUnit::STONE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("mass")), std::make_shared<java::lang::String>(std::make_shared<char[]>("stone")));
	android::icu::util::MeasureUnit::TON = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("mass")), std::make_shared<java::lang::String>(std::make_shared<char[]>("ton")));
	android::icu::util::MeasureUnit::GIGAWATT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("power")), std::make_shared<java::lang::String>(std::make_shared<char[]>("gigawatt")));
	android::icu::util::MeasureUnit::HORSEPOWER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("power")), std::make_shared<java::lang::String>(std::make_shared<char[]>("horsepower")));
	android::icu::util::MeasureUnit::KILOWATT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("power")), std::make_shared<java::lang::String>(std::make_shared<char[]>("kilowatt")));
	android::icu::util::MeasureUnit::MEGAWATT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("power")), std::make_shared<java::lang::String>(std::make_shared<char[]>("megawatt")));
	android::icu::util::MeasureUnit::MILLIWATT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("power")), std::make_shared<java::lang::String>(std::make_shared<char[]>("milliwatt")));
	android::icu::util::MeasureUnit::WATT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("power")), std::make_shared<java::lang::String>(std::make_shared<char[]>("watt")));
	android::icu::util::MeasureUnit::HECTOPASCAL = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("pressure")), std::make_shared<java::lang::String>(std::make_shared<char[]>("hectopascal")));
	android::icu::util::MeasureUnit::INCH_HG = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("pressure")), std::make_shared<java::lang::String>(std::make_shared<char[]>("inch-hg")));
	android::icu::util::MeasureUnit::MILLIBAR = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("pressure")), std::make_shared<java::lang::String>(std::make_shared<char[]>("millibar")));
	android::icu::util::MeasureUnit::MILLIMETER_OF_MERCURY = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("pressure")), std::make_shared<java::lang::String>(std::make_shared<char[]>("millimeter-of-mercury")));
	android::icu::util::MeasureUnit::POUND_PER_SQUARE_INCH = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("pressure")), std::make_shared<java::lang::String>(std::make_shared<char[]>("pound-per-square-inch")));
	android::icu::util::MeasureUnit::KILOMETER_PER_HOUR = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("speed")), std::make_shared<java::lang::String>(std::make_shared<char[]>("kilometer-per-hour")));
	android::icu::util::MeasureUnit::KNOT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("speed")), std::make_shared<java::lang::String>(std::make_shared<char[]>("knot")));
	android::icu::util::MeasureUnit::METER_PER_SECOND = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("speed")), std::make_shared<java::lang::String>(std::make_shared<char[]>("meter-per-second")));
	android::icu::util::MeasureUnit::MILE_PER_HOUR = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("speed")), std::make_shared<java::lang::String>(std::make_shared<char[]>("mile-per-hour")));
	android::icu::util::MeasureUnit::CELSIUS = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("temperature")), std::make_shared<java::lang::String>(std::make_shared<char[]>("celsius")));
	android::icu::util::MeasureUnit::FAHRENHEIT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("temperature")), std::make_shared<java::lang::String>(std::make_shared<char[]>("fahrenheit")));
	android::icu::util::MeasureUnit::GENERIC_TEMPERATURE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("temperature")), std::make_shared<java::lang::String>(std::make_shared<char[]>("generic")));
	android::icu::util::MeasureUnit::KELVIN = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("temperature")), std::make_shared<java::lang::String>(std::make_shared<char[]>("kelvin")));
	android::icu::util::MeasureUnit::ACRE_FOOT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("acre-foot")));
	android::icu::util::MeasureUnit::BUSHEL = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("bushel")));
	android::icu::util::MeasureUnit::CENTILITER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("centiliter")));
	android::icu::util::MeasureUnit::CUBIC_CENTIMETER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("cubic-centimeter")));
	android::icu::util::MeasureUnit::CUBIC_FOOT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("cubic-foot")));
	android::icu::util::MeasureUnit::CUBIC_INCH = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("cubic-inch")));
	android::icu::util::MeasureUnit::CUBIC_KILOMETER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("cubic-kilometer")));
	android::icu::util::MeasureUnit::CUBIC_METER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("cubic-meter")));
	android::icu::util::MeasureUnit::CUBIC_MILE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("cubic-mile")));
	android::icu::util::MeasureUnit::CUBIC_YARD = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("cubic-yard")));
	android::icu::util::MeasureUnit::CUP = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("cup")));
	android::icu::util::MeasureUnit::CUP_METRIC = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("cup-metric")));
	android::icu::util::MeasureUnit::DECILITER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("deciliter")));
	android::icu::util::MeasureUnit::FLUID_OUNCE = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("fluid-ounce")));
	android::icu::util::MeasureUnit::GALLON = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("gallon")));
	android::icu::util::MeasureUnit::GALLON_IMPERIAL = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("gallon-imperial")));
	android::icu::util::MeasureUnit::HECTOLITER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("hectoliter")));
	android::icu::util::MeasureUnit::LITER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("liter")));
	android::icu::util::MeasureUnit::MEGALITER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("megaliter")));
	android::icu::util::MeasureUnit::MILLILITER = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("milliliter")));
	android::icu::util::MeasureUnit::PINT = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("pint")));
	android::icu::util::MeasureUnit::PINT_METRIC = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("pint-metric")));
	android::icu::util::MeasureUnit::QUART = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("quart")));
	android::icu::util::MeasureUnit::TABLESPOON = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("tablespoon")));
	android::icu::util::MeasureUnit::TEASPOON = android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("volume")), std::make_shared<java::lang::String>(std::make_shared<char[]>("teaspoon")));
	cVar18 = std::make_shared<java::util::HashMap>();
	android::icu::util::MeasureUnit::unitPerUnitToSingleUnit = cVar18;
	android::icu::util::MeasureUnit::unitPerUnitToSingleUnit->put(android::icu::impl::Pair::of(android::icu::util::MeasureUnit::LITER, android::icu::util::MeasureUnit::KILOMETER), android::icu::util::MeasureUnit::LITER_PER_KILOMETER);
	android::icu::util::MeasureUnit::unitPerUnitToSingleUnit->put(android::icu::impl::Pair::of(android::icu::util::MeasureUnit::POUND, android::icu::util::MeasureUnit::SQUARE_INCH), android::icu::util::MeasureUnit::POUND_PER_SQUARE_INCH);
	android::icu::util::MeasureUnit::unitPerUnitToSingleUnit->put(android::icu::impl::Pair::of(android::icu::util::MeasureUnit::MILE, android::icu::util::MeasureUnit::HOUR), android::icu::util::MeasureUnit::MILE_PER_HOUR);
	android::icu::util::MeasureUnit::unitPerUnitToSingleUnit->put(android::icu::impl::Pair::of(android::icu::util::MeasureUnit::MILLIGRAM, android::icu::util::MeasureUnit::DECILITER), android::icu::util::MeasureUnit::MILLIGRAM_PER_DECILITER);
	android::icu::util::MeasureUnit::unitPerUnitToSingleUnit->put(android::icu::impl::Pair::of(android::icu::util::MeasureUnit::MILE, android::icu::util::MeasureUnit::GALLON_IMPERIAL), android::icu::util::MeasureUnit::MILE_PER_GALLON_IMPERIAL);
	android::icu::util::MeasureUnit::unitPerUnitToSingleUnit->put(android::icu::impl::Pair::of(android::icu::util::MeasureUnit::KILOMETER, android::icu::util::MeasureUnit::HOUR), android::icu::util::MeasureUnit::KILOMETER_PER_HOUR);
	android::icu::util::MeasureUnit::unitPerUnitToSingleUnit->put(android::icu::impl::Pair::of(android::icu::util::MeasureUnit::MILE, android::icu::util::MeasureUnit::GALLON), android::icu::util::MeasureUnit::MILE_PER_GALLON);
	android::icu::util::MeasureUnit::unitPerUnitToSingleUnit->put(android::icu::impl::Pair::of(android::icu::util::MeasureUnit::METER, android::icu::util::MeasureUnit::SECOND), android::icu::util::MeasureUnit::METER_PER_SECOND);
	return;

}
// .method protected constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::util::MeasureUnit::MeasureUnit(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> subType)
{
	
	//    .param p1, "type"    # Ljava/lang/String;
	//    .param p2, "subType"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2124    .end annotation
	// 2128    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->type = type;
	this->subType = subType;
	return;

}
// .method protected static declared-synchronized addUnit(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/MeasureUnit$Factory;)Landroid/icu/util/MeasureUnit;
std::shared_ptr<android::icu::util::MeasureUnit> android::icu::util::MeasureUnit::addUnit(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> unitName,std::shared_ptr<android::icu::util::MeasureUnit_S_Factory> factory)
{
	
	std::shared_ptr<android::icu::util::MeasureUnit> cVar0;
	std::shared_ptr<java::util::Map> tmp;
	std::shared_ptr<java::util::HashMap> tmp;
	std::shared_ptr<android::icu::util::MeasureUnit> unit;
	std::shared_ptr<java::lang::Object> unit;
	std::shared_ptr<java::util::Map_S_Entry> cVar1;
	std::shared_ptr<android::icu::util::MeasureUnit> cVar2;
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .param p1, "unitName"    # Ljava/lang/String;
	//    .param p2, "factory"    # Landroid/icu/util/MeasureUnit$Factory;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2146    .end annotation
	cVar0 = android::icu::util::MeasureUnit();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	tmp = android::icu::util::MeasureUnit::cache->get(type);
	tmp->checkCast("java::util::Map");
	//    .local v0, "tmp":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/util/MeasureUnit;>;"
	if ( tmp )     
		goto label_cond_28;
	//    .end local v0    # "tmp":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/util/MeasureUnit;>;"
	tmp = std::make_shared<java::util::HashMap>();
	//    .restart local v0    # "tmp":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/util/MeasureUnit;>;"
	android::icu::util::MeasureUnit::cache->put(type, tmp);
label_goto_17:
	unit = tmp->get(unitName);
	unit->checkCast("android::icu::util::MeasureUnit");
	//    .local v1, "unit":Landroid/icu/util/MeasureUnit;
	if ( unit )     
		goto label_cond_26;
	unit = factory->create(type, unitName);
	tmp->put(unitName, unit);
	//label_try_end_26:
	}
	catch (...){
		goto label_catchall_3f;
	}
	//    .catchall {:try_start_3 .. :try_end_26} :catchall_3f
label_cond_26:
	cVar0->monitor_exit();
	return unit;
	// 2205    .line 336
	// 2206    .end local v1    # "unit":Landroid/icu/util/MeasureUnit;
label_cond_28:
	try {
	//label_try_start_28:
	cVar1 = tmp->entrySet()->iterator()->next();
	cVar1->checkCast("java::util::Map_S_Entry");
	cVar2 = cVar1->getValue();
	cVar2->checkCast("android::icu::util::MeasureUnit");
	cVar2->type;
	//label_try_end_3e:
	}
	catch (...){
		goto label_catchall_3f;
	}
	//    .catchall {:try_start_28 .. :try_end_3e} :catchall_3f
	goto label_goto_17;
	// 2235    .end local v0    # "tmp":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/util/MeasureUnit;>;"
label_catchall_3f:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static declared-synchronized getAvailable()Ljava/util/Set;
std::shared_ptr<java::util::Set<android::icu::util::MeasureUnit>> android::icu::util::MeasureUnit::getAvailable()
{
	
	std::shared_ptr<android::icu::util::MeasureUnit> cVar0;
	std::shared_ptr<java::util::HashSet> result;
	std::shared_ptr<java::util::HashSet> cVar1;
	std::shared_ptr<java::util::Iterator> type_S_iterator;
	std::shared_ptr<java::lang::String> type;
	std::shared_ptr<java::util::Iterator> unit_S_iterator;
	std::shared_ptr<android::icu::util::MeasureUnit> unit;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2247        value = {
	// 2248            "()",
	// 2249            "Ljava/util/Set",
	// 2250            "<",
	// 2251            "Landroid/icu/util/MeasureUnit;",
	// 2252            ">;"
	// 2253        }
	// 2254    .end annotation
	cVar0 = android::icu::util::MeasureUnit();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	result = std::make_shared<java::util::HashSet>();
	//    .local v0, "result":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/MeasureUnit;>;"
	cVar1 = std::make_shared<java::util::HashSet>(android::icu::util::MeasureUnit::getAvailableTypes({const[class].FS-Param}));
	type_S_iterator = cVar1->iterator();
	//    .local v2, "type$iterator":Ljava/util/Iterator;
label_cond_15:
	if ( !(type_S_iterator->hasNext()) )  
		goto label_cond_3c;
	type = type_S_iterator->next();
	type->checkCast("java::lang::String");
	//    .local v1, "type":Ljava/lang/String;
	unit_S_iterator = android::icu::util::MeasureUnit::getAvailable(type)->iterator();
	//    .local v4, "unit$iterator":Ljava/util/Iterator;
label_goto_29:
	if ( !(unit_S_iterator->hasNext()) )  
		goto label_cond_15;
	unit = unit_S_iterator->next();
	unit->checkCast("android::icu::util::MeasureUnit");
	//    .local v3, "unit":Landroid/icu/util/MeasureUnit;
	result->add(unit);
	//label_try_end_38:
	}
	catch (...){
		goto label_catchall_39;
	}
	//    .catchall {:try_start_3 .. :try_end_38} :catchall_39
	goto label_goto_29;
	// 2327    .end local v1    # "type":Ljava/lang/String;
	// 2328    .end local v2    # "type$iterator":Ljava/util/Iterator;
	// 2329    .end local v3    # "unit":Landroid/icu/util/MeasureUnit;
	// 2330    .end local v4    # "unit$iterator":Ljava/util/Iterator;
label_catchall_39:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 2338    .line 158
	// 2339    .restart local v2    # "type$iterator":Ljava/util/Iterator;
label_cond_3c:
	try {
	//label_try_start_3c:
	//label_try_end_3f:
	}
	catch (...){
		goto label_catchall_39;
	}
	//    .catchall {:try_start_3c .. :try_end_3f} :catchall_39
	cVar0->monitor_exit();
	return java::util::Collections::unmodifiableSet(result);

}
// .method public static declared-synchronized getAvailable(Ljava/lang/String;)Ljava/util/Set;
std::shared_ptr<java::util::Set<android::icu::util::MeasureUnit>> android::icu::util::MeasureUnit::getAvailable(std::shared_ptr<java::lang::String> type)
{
	
	std::shared_ptr<android::icu::util::MeasureUnit> cVar0;
	std::shared_ptr<java::util::Map> units;
	std::shared_ptr<java::util::Set> cVar1;
	std::shared_ptr<java::util::HashSet> cVar2;
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2357        value = {
	// 2358            "(",
	// 2359            "Ljava/lang/String;",
	// 2360            ")",
	// 2361            "Ljava/util/Set",
	// 2362            "<",
	// 2363            "Landroid/icu/util/MeasureUnit;",
	// 2364            ">;"
	// 2365        }
	// 2366    .end annotation
	cVar0 = android::icu::util::MeasureUnit();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	android::icu::util::MeasureUnit::populateCache({const[class].FS-Param});
	units = android::icu::util::MeasureUnit::cache->get(type);
	units->checkCast("java::util::Map");
	//    .local v0, "units":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/util/MeasureUnit;>;"
	if ( units )     
		goto label_cond_16;
	//label_try_end_13:
	}
	catch (...){
		goto label_catchall_24;
	}
	//    .catchall {:try_start_3 .. :try_end_13} :catchall_24
	cVar1 = java::util::Collections::emptySet({const[class].FS-Param});
label_goto_14:
	cVar0->monitor_exit();
	return cVar1;
	// 2401    .line 143
label_cond_16:
	try {
	//label_try_start_16:
	cVar2 = std::make_shared<java::util::HashSet>(units->values());
	//label_try_end_22:
	}
	catch (...){
		goto label_catchall_24;
	}
	//    .catchall {:try_start_16 .. :try_end_22} :catchall_24
	cVar1 = java::util::Collections::unmodifiableSet(cVar2);
	goto label_goto_14;
	// 2420    .end local v0    # "units":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/util/MeasureUnit;>;"
label_catchall_24:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static declared-synchronized getAvailableTypes()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::util::MeasureUnit::getAvailableTypes()
{
	
	std::shared_ptr<android::icu::util::MeasureUnit> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2432        value = {
	// 2433            "()",
	// 2434            "Ljava/util/Set",
	// 2435            "<",
	// 2436            "Ljava/lang/String;",
	// 2437            ">;"
	// 2438        }
	// 2439    .end annotation
	cVar0 = android::icu::util::MeasureUnit();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	android::icu::util::MeasureUnit::populateCache({const[class].FS-Param});
	//label_try_end_f:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_3 .. :try_end_f} :catchall_12
	cVar0->monitor_exit();
	return java::util::Collections::unmodifiableSet(android::icu::util::MeasureUnit::cache->keySet());
label_catchall_12:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static internalGetInstance(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/util/MeasureUnit;
std::shared_ptr<android::icu::util::MeasureUnit> android::icu::util::MeasureUnit::internalGetInstance(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> subType)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .param p1, "subType"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2480    .end annotation
	if ( !(type) )  
		goto label_cond_4;
	if ( subType )     
		goto label_cond_d;
label_cond_4:
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Type and subType must be non-null")));
	// throw
	throw cVar0;
	// 2498    .line 177
label_cond_d:
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"))->equals(type) )     
		goto label_cond_31;
	if ( !(android::icu::util::MeasureUnit::ASCII->containsAll(type)) )  
		goto label_cond_28;
	if ( !(( android::icu::util::MeasureUnit::ASCII_HYPHEN_DIGITS->containsAll(subType) ^ 0x1)) )  
		goto label_cond_31;
label_cond_28:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The type or subType are invalid.")));
	// throw
	throw cVar1;
	// 2537    .line 183
label_cond_31:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"))->equals(type)) )  
		goto label_cond_41;
	//    .local v0, "factory":Landroid/icu/util/MeasureUnit$Factory;
label_goto_3c:
	return android::icu::util::MeasureUnit::addUnit(type, subType, factory);
	// 2559    .line 185
	// 2560    .end local v0    # "factory":Landroid/icu/util/MeasureUnit$Factory;
label_cond_41:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("duration"))->equals(type)) )  
		goto label_cond_4d;
	//    .restart local v0    # "factory":Landroid/icu/util/MeasureUnit$Factory;
	goto label_goto_3c;
	// 2576    .line 188
	// 2577    .end local v0    # "factory":Landroid/icu/util/MeasureUnit$Factory;
label_cond_4d:
	//    .restart local v0    # "factory":Landroid/icu/util/MeasureUnit$Factory;
	goto label_goto_3c;

}
// .method private static populateCache()V
void android::icu::util::MeasureUnit::populateCache()
{
	
	std::shared_ptr<android::icu::util::MeasureUnit_S_MeasureUnitSink> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb1;
	std::shared_ptr<android::icu::util::MeasureUnit_S_MeasureUnitSink> cVar1;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb2;
	std::shared_ptr<android::icu::util::MeasureUnit_S_CurrencyNumericCodeSink> cVar2;
	
	cVar0 = 0x0;
	if ( !(android::icu::util::MeasureUnit::cacheIsPopulated) )  
		goto label_cond_6;
	return;
	// 2599    .line 298
label_cond_6:
	android::icu::util::MeasureUnit::cacheIsPopulated = 0x1;
	rb1 = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/unit")), std::make_shared<java::lang::String>(std::make_shared<char[]>("en")));
	rb1->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "rb1":Landroid/icu/impl/ICUResourceBundle;
	cVar1 = std::make_shared<android::icu::util::MeasureUnit_S_MeasureUnitSink>(cVar0);
	rb1->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("units")), cVar1);
	rb2 = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("currencyNumericCodes")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);
	rb2->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v1, "rb2":Landroid/icu/impl/ICUResourceBundle;
	cVar2 = std::make_shared<android::icu::util::MeasureUnit_S_CurrencyNumericCodeSink>(cVar0);
	rb2->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("codeMap")), cVar2);
	return;

}
// .method public static resolveUnitPerUnit(Landroid/icu/util/MeasureUnit;Landroid/icu/util/MeasureUnit;)Landroid/icu/util/MeasureUnit;
std::shared_ptr<android::icu::util::MeasureUnit> android::icu::util::MeasureUnit::resolveUnitPerUnit(std::shared_ptr<android::icu::util::MeasureUnit> unit,std::shared_ptr<android::icu::util::MeasureUnit> perUnit)
{
	
	std::shared_ptr<android::icu::util::MeasureUnit> cVar0;
	
	//    .param p0, "unit"    # Landroid/icu/util/MeasureUnit;
	//    .param p1, "perUnit"    # Landroid/icu/util/MeasureUnit;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2663    .end annotation
	cVar0 = android::icu::util::MeasureUnit::unitPerUnitToSingleUnit->get(android::icu::impl::Pair::of(unit, perUnit));
	cVar0->checkCast("android::icu::util::MeasureUnit");
	return cVar0;

}
// .method private writeReplace()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::MeasureUnit::writeReplace()
{
	
	std::shared_ptr<android::icu::util::MeasureUnit_S_MeasureUnitProxy> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2685        value = {
	// 2686            Ljava/io/ObjectStreamException;
	// 2687        }
	// 2688    .end annotation
	cVar0 = std::make_shared<android::icu::util::MeasureUnit_S_MeasureUnitProxy>(this->type, this->subType);
	return cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::MeasureUnit::equals(std::shared_ptr<java::lang::Object> rhs)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::util::MeasureUnit> c;
	
	//    .param p1, "rhs"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( rhs != this )
		goto label_cond_5;
	return 0x1;
	// 2720    .line 109
label_cond_5:
	if ( rhs->instanceOf("android::icu::util::MeasureUnit") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	c = rhs;
	c->checkCast("android::icu::util::MeasureUnit");
	//    .local v0, "c":Landroid/icu/util/MeasureUnit;
	if ( !(this->type->equals(c->type)) )  
		goto label_cond_1f;
	cVar1 = this->subType->equals(c->subType);
label_cond_1f:
	return cVar1;

}
// .method public getSubtype()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::MeasureUnit::getSubtype()
{
	
	return this->subType;

}
// .method public getType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::MeasureUnit::getType()
{
	
	return this->type;

}
// .method public hashCode()I
int android::icu::util::MeasureUnit::hashCode()
{
	
	return (( this->type->hashCode() * 0x1f) +  this->subType->hashCode());

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::MeasureUnit::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->type)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(this->subType)->toString();

}


