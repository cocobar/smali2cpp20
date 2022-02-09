// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormat$Field.smali
#include "java2ctype.h"
#include "android.icu.text.DateFormat_S_Field.h"
#include "android.icu.util.GregorianCalendar.h"
#include "java.io.InvalidObjectException.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.Format_S_Field.h"
#include "java.util.HashMap.h"
#include "java.util.Map.h"

static android::icu::text::DateFormat_S_Field::AM_PM;
static android::icu::text::DateFormat_S_Field::AM_PM_MIDNIGHT_NOON;
static android::icu::text::DateFormat_S_Field::CAL_FIELDS;
static android::icu::text::DateFormat_S_Field::CAL_FIELD_COUNT;
static android::icu::text::DateFormat_S_Field::DAY_OF_MONTH;
static android::icu::text::DateFormat_S_Field::DAY_OF_WEEK;
static android::icu::text::DateFormat_S_Field::DAY_OF_WEEK_IN_MONTH;
static android::icu::text::DateFormat_S_Field::DAY_OF_YEAR;
static android::icu::text::DateFormat_S_Field::DOW_LOCAL;
static android::icu::text::DateFormat_S_Field::ERA;
static android::icu::text::DateFormat_S_Field::EXTENDED_YEAR;
static android::icu::text::DateFormat_S_Field::FIELD_NAME_MAP;
static android::icu::text::DateFormat_S_Field::FLEXIBLE_DAY_PERIOD;
static android::icu::text::DateFormat_S_Field::HOUR0;
static android::icu::text::DateFormat_S_Field::HOUR1;
static android::icu::text::DateFormat_S_Field::HOUR_OF_DAY0;
static android::icu::text::DateFormat_S_Field::HOUR_OF_DAY1;
static android::icu::text::DateFormat_S_Field::JULIAN_DAY;
static android::icu::text::DateFormat_S_Field::MILLISECOND;
static android::icu::text::DateFormat_S_Field::MILLISECONDS_IN_DAY;
static android::icu::text::DateFormat_S_Field::MINUTE;
static android::icu::text::DateFormat_S_Field::MONTH;
static android::icu::text::DateFormat_S_Field::QUARTER;
static android::icu::text::DateFormat_S_Field::RELATED_YEAR;
static android::icu::text::DateFormat_S_Field::SECOND;
static android::icu::text::DateFormat_S_Field::TIME_SEPARATOR;
static android::icu::text::DateFormat_S_Field::TIME_ZONE;
static android::icu::text::DateFormat_S_Field::WEEK_OF_MONTH;
static android::icu::text::DateFormat_S_Field::WEEK_OF_YEAR;
static android::icu::text::DateFormat_S_Field::YEAR;
static android::icu::text::DateFormat_S_Field::YEAR_WOY;
static android::icu::text::DateFormat_S_Field::serialVersionUID = -0x325750c275d0f8cdL;
// .method static constructor <clinit>()V
void android::icu::text::DateFormat_S_Field::static_cinit()
{
	
	int cVar0;
	std::shared_ptr<android::icu::util::GregorianCalendar> cal;
	std::shared_ptr<java::util::HashMap> cVar1;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar2;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar3;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar4;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar5;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar6;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar7;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar8;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar9;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar10;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar11;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar12;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar13;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar14;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar15;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar16;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar17;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar18;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar19;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar20;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar21;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar22;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar23;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar24;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar25;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar26;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar27;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar28;
	std::shared_ptr<android::icu::text::DateFormat_S_Field> cVar29;
	
	cVar0 = -0x1;
	cal = std::make_shared<android::icu::util::GregorianCalendar>();
	//    .local v0, "cal":Landroid/icu/util/GregorianCalendar;
	android::icu::text::DateFormat_S_Field::CAL_FIELD_COUNT = cal->getFieldCount();
	android::icu::text::DateFormat_S_Field::CAL_FIELDS = std::make_shared<std::vector<std::vector<android::icu::text::DateFormat_S_Field>>>(android::icu::text::DateFormat_S_Field::CAL_FIELD_COUNT);
	cVar1 = std::make_shared<java::util::HashMap>(android::icu::text::DateFormat_S_Field::CAL_FIELD_COUNT);
	android::icu::text::DateFormat_S_Field::FIELD_NAME_MAP = cVar1;
	cVar2 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("am pm")), 0x9);
	android::icu::text::DateFormat_S_Field::AM_PM = cVar2;
	cVar3 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("day of month")), 0x5);
	android::icu::text::DateFormat_S_Field::DAY_OF_MONTH = cVar3;
	cVar4 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("day of week")), 0x7);
	android::icu::text::DateFormat_S_Field::DAY_OF_WEEK = cVar4;
	cVar5 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("day of week in month")), 0x8);
	android::icu::text::DateFormat_S_Field::DAY_OF_WEEK_IN_MONTH = cVar5;
	cVar6 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("day of year")), 0x6);
	android::icu::text::DateFormat_S_Field::DAY_OF_YEAR = cVar6;
	cVar7 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("era")), 0x0);
	android::icu::text::DateFormat_S_Field::ERA = cVar7;
	cVar8 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hour of day")), 0xb);
	android::icu::text::DateFormat_S_Field::HOUR_OF_DAY0 = cVar8;
	cVar9 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hour of day 1")), cVar0);
	android::icu::text::DateFormat_S_Field::HOUR_OF_DAY1 = cVar9;
	cVar10 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hour")), 0xa);
	android::icu::text::DateFormat_S_Field::HOUR0 = cVar10;
	cVar11 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hour 1")), cVar0);
	android::icu::text::DateFormat_S_Field::HOUR1 = cVar11;
	cVar12 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("millisecond")), 0xe);
	android::icu::text::DateFormat_S_Field::MILLISECOND = cVar12;
	cVar13 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("minute")), 0xc);
	android::icu::text::DateFormat_S_Field::MINUTE = cVar13;
	cVar14 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("month")), 0x2);
	android::icu::text::DateFormat_S_Field::MONTH = cVar14;
	cVar15 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("second")), 0xd);
	android::icu::text::DateFormat_S_Field::SECOND = cVar15;
	cVar16 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("time zone")), cVar0);
	android::icu::text::DateFormat_S_Field::TIME_ZONE = cVar16;
	cVar17 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("week of month")), 0x4);
	android::icu::text::DateFormat_S_Field::WEEK_OF_MONTH = cVar17;
	cVar18 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("week of year")), 0x3);
	android::icu::text::DateFormat_S_Field::WEEK_OF_YEAR = cVar18;
	cVar19 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("year")), 0x1);
	android::icu::text::DateFormat_S_Field::YEAR = cVar19;
	cVar20 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("local day of week")), 0x12);
	android::icu::text::DateFormat_S_Field::DOW_LOCAL = cVar20;
	cVar21 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("extended year")), 0x13);
	android::icu::text::DateFormat_S_Field::EXTENDED_YEAR = cVar21;
	cVar22 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Julian day")), 0x14);
	android::icu::text::DateFormat_S_Field::JULIAN_DAY = cVar22;
	cVar23 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("milliseconds in day")), 0x15);
	android::icu::text::DateFormat_S_Field::MILLISECONDS_IN_DAY = cVar23;
	cVar24 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("year for week of year")), 0x11);
	android::icu::text::DateFormat_S_Field::YEAR_WOY = cVar24;
	cVar25 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("quarter")), cVar0);
	android::icu::text::DateFormat_S_Field::QUARTER = cVar25;
	cVar26 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("related year")), cVar0);
	android::icu::text::DateFormat_S_Field::RELATED_YEAR = cVar26;
	cVar27 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("am/pm/midnight/noon")), cVar0);
	android::icu::text::DateFormat_S_Field::AM_PM_MIDNIGHT_NOON = cVar27;
	cVar28 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("flexible day period")), cVar0);
	android::icu::text::DateFormat_S_Field::FLEXIBLE_DAY_PERIOD = cVar28;
	cVar29 = std::make_shared<android::icu::text::DateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("time separator")), cVar0);
	android::icu::text::DateFormat_S_Field::TIME_SEPARATOR = cVar29;
	return;

}
// .method protected constructor <init>(Ljava/lang/String;I)V
android::icu::text::DateFormat_S_Field::DateFormat_S_Field(std::shared_ptr<java::lang::String> name,int calendarField)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "calendarField"    # I
	java::text::Format_S_Field::(name);
	this->calendarField = calendarField;
	if ( this->getClass() != android::icu::text::DateFormat_S_Field() )
		goto label_cond_1c;
	android::icu::text::DateFormat_S_Field::FIELD_NAME_MAP->put(name, this);
	if ( calendarField < 0 ) 
		goto label_cond_1c;
	if ( calendarField >= android::icu::text::DateFormat_S_Field::CAL_FIELD_COUNT )
		goto label_cond_1c;
	android::icu::text::DateFormat_S_Field::CAL_FIELDS[calendarField] = this;
label_cond_1c:
	return;

}
// .method public static ofCalendarField(I)Landroid/icu/text/DateFormat$Field;
std::shared_ptr<android::icu::text::DateFormat_S_Field> android::icu::text::DateFormat_S_Field::ofCalendarField(int calendarField)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "calendarField"    # I
	if ( calendarField < 0 ) 
		goto label_cond_6;
	if ( calendarField <  android::icu::text::DateFormat_S_Field::CAL_FIELD_COUNT )
		goto label_cond_f;
label_cond_6:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Calendar field number is out of range")));
	// throw
	throw cVar0;
	// 505    .line 2336
label_cond_f:
	return android::icu::text::DateFormat_S_Field::CAL_FIELDS[calendarField];

}
// .method public getCalendarField()I
int android::icu::text::DateFormat_S_Field::getCalendarField()
{
	
	return this->calendarField;

}
// .method protected readResolve()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::DateFormat_S_Field::readResolve()
{
	
	std::shared_ptr<java::io::InvalidObjectException> cVar0;
	std::shared_ptr<java::lang::Object> o;
	std::shared_ptr<java::io::InvalidObjectException> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 529        value = {
	// 530            Ljava/io/InvalidObjectException;
	// 531        }
	// 532    .end annotation
	if ( this->getClass() == android::icu::text::DateFormat_S_Field() )
		goto label_cond_11;
	cVar0 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("A subclass of DateFormat.Field must implement readResolve.")));
	// throw
	throw cVar0;
	// 555    .line 2363
label_cond_11:
	o = android::icu::text::DateFormat_S_Field::FIELD_NAME_MAP->get(this->getName());
	//    .local v0, "o":Ljava/lang/Object;
	if ( o )     
		goto label_cond_26;
	cVar1 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown attribute name.")));
	// throw
	throw cVar1;
	// 580    .line 2369
label_cond_26:
	return o;

}


