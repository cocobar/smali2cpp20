// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Grego.smali
#include "java2ctype.h"
#include "android.icu.impl.Grego.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"

static android::icu::impl::Grego::DAYS_BEFORE;
static android::icu::impl::Grego::JULIAN_1970_CE = 0x253d8c;
static android::icu::impl::Grego::JULIAN_1_CE = 0x1a4452;
static android::icu::impl::Grego::MAX_MILLIS = 0x28d47dbbf19b000L;
static android::icu::impl::Grego::MILLIS_PER_DAY = 0x5265c00;
static android::icu::impl::Grego::MILLIS_PER_HOUR = 0x36ee80;
static android::icu::impl::Grego::MILLIS_PER_MINUTE = 0xea60;
static android::icu::impl::Grego::MILLIS_PER_SECOND = 0x3e8;
static android::icu::impl::Grego::MIN_MILLIS = -0x28ec76c40e65000L;
static android::icu::impl::Grego::MONTH_LENGTH;
// .method static constructor <clinit>()V
void android::icu::impl::Grego::static_cinit()
{
	
	int cVar0;
	std::shared<std::vector<int[]>> cVar1;
	std::shared<std::vector<int[]>> cVar2;
	
	cVar0 = 0x18;
	cVar1 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	android::icu::impl::Grego::MONTH_LENGTH = cVar1;
	cVar2 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	android::icu::impl::Grego::DAYS_BEFORE = cVar2;
	return;
	// 052    .line 50
	// 053    nop
	// 055    :array_12
	// 056    .array-data 4
	// 057        0x1f
	// 058        0x1c
	// 059        0x1f
	// 060        0x1e
	// 061        0x1f
	// 062        0x1e
	// 063        0x1f
	// 064        0x1f
	// 065        0x1e
	// 066        0x1f
	// 067        0x1e
	// 068        0x1f
	// 069        0x1f
	// 070        0x1d
	// 071        0x1f
	// 072        0x1e
	// 073        0x1f
	// 074        0x1e
	// 075        0x1f
	// 076        0x1f
	// 077        0x1e
	// 078        0x1f
	// 079        0x1e
	// 080        0x1f
	// 081    .end array-data
	// 083    .line 55
	// 084    :array_46
	// 085    .array-data 4
	// 086        0x0
	// 087        0x1f
	// 088        0x3b
	// 089        0x5a
	// 090        0x78
	// 091        0x97
	// 092        0xb5
	// 093        0xd4
	// 094        0xf3
	// 095        0x111
	// 096        0x130
	// 097        0x14e
	// 098        0x0
	// 099        0x1f
	// 100        0x3c
	// 101        0x5b
	// 102        0x79
	// 103        0x98
	// 104        0xb6
	// 105        0xd5
	// 106        0xf4
	// 107        0x112
	// 108        0x131
	// 109        0x14f
	// 110    .end array-data

}
// .method public constructor <init>()V
android::icu::impl::Grego::Grego()
{
	
	// 118    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static dayOfWeek(J)I
int android::icu::impl::Grego::dayOfWeek(long long day)
{
	
	std::shared<std::vector<long long[]>> remainder;
	int dayOfWeek;
	
	//    .param p0, "day"    # J
	remainder = std::make_shared<std::vector<long long[]>>(0x1);
	//    .local v1, "remainder":[J
	android::icu::impl::Grego::floorDivide((0x5 +  day), 0x7, remainder);
	dayOfWeek = (int)(remainder[0x0]);
	//    .local v0, "dayOfWeek":I
	if ( dayOfWeek )     
		goto label_cond_12;
label_cond_12:
	return dayOfWeek;

}
// .method public static dayToFields(J[I)[I
int android::icu::impl::Grego::dayToFields(long long day,std::shared_ptr<int[]> cVar0)
{
	
	std::shared_ptr<int[]> cVar0;
	long long cVar1;
	std::shared<std::vector<long long[]>> rem;
	auto n100;
	auto n1;
	int year;
	int dayOfYear;
	int isLeap;
	int correction;
	int month;
	int cVar2;
	int dayOfWeek;
	
	//    .param p0, "day"    # J
	//    .param p2, "fields"    # [I
	if ( !(cVar0) )  
		goto label_cond_f;
	if ( cVar0->size() >= 0x5 )
		goto label_cond_17;
label_cond_f:
	cVar0 = std::make_shared<std::vector<int[]>>(0x5);
label_cond_17:
	cVar1 = (day + 0xaf93a);
	rem = std::make_shared<std::vector<long long[]>>(0x1);
	//    .local v11, "rem":[J
	//    .local v18, "n400":J
	n100 = android::icu::impl::Grego::floorDivide(rem[0x0], 0x8eac, rem);
	//    .local v14, "n100":J
	//    .local v16, "n4":J
	n1 = android::icu::impl::Grego::floorDivide(rem[0x0], 0x16d, rem);
	//    .local v12, "n1":J
	year = (int)(((((0x190 * android::icu::impl::Grego::floorDivide(cVar1, 0x23ab1, rem)) + (0x64 * n100)) + (0x4 * android::icu::impl::Grego::floorDivide(rem[0x0], 0x5b5, rem))) + n1));
	//    .local v20, "year":I
	dayOfYear = (int)(rem[0x0]);
	//    .local v7, "dayOfYear":I
	if ( !((n100 > 0x4)) )  
		goto label_cond_82;
	if ( (n1 > 0x4) )     
		goto label_cond_d2;
label_cond_82:
	dayOfYear = 0x16d;
label_goto_84:
	isLeap = android::icu::impl::Grego::isLeapYear(year);
	//    .local v8, "isLeap":Z
	correction = 0x0;
	//    .local v4, "correction":I
	if ( !(isLeap) )  
		goto label_cond_d5;
	//    .local v9, "march1":I
label_goto_8d:
	if ( dayOfYear <  march1 )
		goto label_cond_92;
	if ( !(isLeap) )  
		goto label_cond_d8;
	correction = 0x1;
label_cond_92:
label_goto_92:
	month = ( ( ( (dayOfYear + correction) * 0xc) + 0x6) / 0x16f);
	//    .local v10, "month":I
	if ( !(isLeap) )  
		goto label_cond_da;
	cVar2 = ( month + 0xc);
label_goto_a2:
	//    .local v5, "dayOfMonth":I
	dayOfWeek = (int)(((0x2 + cVar1) % 0x7));
	//    .local v6, "dayOfWeek":I
	if ( dayOfWeek >= 0x1 )
		goto label_cond_bb;
label_cond_bb:
	cVar0[0x0] = year;
	cVar0[0x1] = month;
	cVar0[0x2] = ( (dayOfYear - android::icu::impl::Grego::DAYS_BEFORE[cVar2]) + 0x1);
	cVar0[0x3] = dayOfWeek;
	cVar0[0x4] = ( dayOfYear + 0x1);
	return cVar0;
	// 432    .line 138
	// 433    .end local v4    # "correction":I
	// 434    .end local v5    # "dayOfMonth":I
	// 435    .end local v6    # "dayOfWeek":I
	// 436    .end local v8    # "isLeap":Z
	// 437    .end local v9    # "march1":I
	// 438    .end local v10    # "month":I
label_cond_d2:
	year = ( year + 0x1);
	goto label_goto_84;
	// 444    .line 143
	// 445    .restart local v4    # "correction":I
	// 446    .restart local v8    # "isLeap":Z
label_cond_d5:
	//    .restart local v9    # "march1":I
	goto label_goto_8d;
	// 453    .line 145
label_cond_d8:
	correction = 0x2;
	goto label_goto_92;
	// 459    .restart local v10    # "month":I
label_cond_da:
	cVar2 = month;
	goto label_goto_a2;

}
// .method public static fieldsToDay(III)J
long long android::icu::impl::Grego::fieldsToDay(int year,int month,int dom)
{
	
	int y;
	int cVar0;
	
	//    .param p0, "year"    # I
	//    .param p1, "month"    # I
	//    .param p2, "dom"    # I
	y = ( year + -0x1);
	//    .local v2, "y":I
	if ( !(android::icu::impl::Grego::isLeapYear(year)) )  
		goto label_cond_3c;
	cVar0 = 0xc;
label_goto_2e:
	//    .local v0, "julian":J
	return (((((((((long long)(( y * 0x16d)) +  android::icu::impl::Grego::floorDivide((long long)(y), 0x4)) +  0x1a444f) +  android::icu::impl::Grego::floorDivide((long long)(y), 0x190)) -  android::icu::impl::Grego::floorDivide((long long)(y), 0x64)) +  0x2) +  (long long)(android::icu::impl::Grego::DAYS_BEFORE[(cVar0 +  month)])) + (long long)(dom)) - 0x253d8c);
	// 562    .line 102
	// 563    .end local v0    # "julian":J
label_cond_3c:
	cVar0 = 0x0;
	goto label_goto_2e;

}
// .method public static floorDivide(JJ)J
long long android::icu::impl::Grego::floorDivide(long long numerator,long long denominator)
{
	
	long long cVar0;
	long long cVar1;
	
	//    .param p0, "numerator"    # J
	//    .param p2, "denominator"    # J
	cVar0 = 0x1;
	if ( (numerator > 0x0) < 0 ) 
		goto label_cond_b;
	cVar1 = (numerator / denominator);
label_goto_a:
	return cVar1;
	// 592    .line 190
label_cond_b:
	cVar1 = (((numerator + cVar0) /  denominator) -  cVar0);
	goto label_goto_a;

}
// .method private static floorDivide(JJ[J)J
long long android::icu::impl::Grego::floorDivide(long long numerator,long long denominator,std::shared_ptr<long long[]> remainder)
{
	
	long long cVar0;
	int cVar1;
	long long quotient;
	
	//    .param p0, "numerator"    # J
	//    .param p2, "denominator"    # J
	//    .param p4, "remainder"    # [J
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( (numerator > 0x0) < 0 ) 
		goto label_cond_10;
	remainder[cVar1] = (numerator % denominator);
	return (numerator / denominator);
	// 631    .line 198
label_cond_10:
	quotient = (((numerator + cVar0) /  denominator) - cVar0);
	//    .local v0, "quotient":J
	remainder[cVar1] = (numerator - (quotient * denominator));
	return quotient;

}
// .method public static getDayOfWeekInMonth(III)I
int android::icu::impl::Grego::getDayOfWeekInMonth(int year,int month,int dayOfMonth)
{
	
	int weekInMonth;
	
	//    .param p0, "year"    # I
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	weekInMonth = ( ( dayOfMonth + 0x6) / 0x7);
	//    .local v0, "weekInMonth":I
	if ( weekInMonth != 0x4 )
		goto label_cond_11;
	if ( ( dayOfMonth + 0x7) <= android::icu::impl::Grego::monthLength(year, month) )
		goto label_cond_10;
	weekInMonth = -0x1;
label_cond_10:
label_goto_10:
	return weekInMonth;
	// 686    .line 213
label_cond_11:
	if ( weekInMonth != 0x5 )
		goto label_cond_10;
	weekInMonth = -0x1;
	goto label_goto_10;

}
// .method public static final isLeapYear(I)Z
bool android::icu::impl::Grego::isLeapYear(int year)
{
	
	bool cVar0;
	
	//    .param p0, "year"    # I
	cVar0 = 0x1;
	if ( ( year & 0x3) )     
		goto label_cond_f;
	if ( ( year % 0x64) )     
		goto label_cond_e;
	if ( ( year % 0x190) )     
		goto label_cond_f;
label_cond_e:
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method public static final monthLength(II)I
int android::icu::impl::Grego::monthLength(int year,int month)
{
	
	int cVar0;
	
	//    .param p0, "year"    # I
	//    .param p1, "month"    # I
	if ( !(android::icu::impl::Grego::isLeapYear(year)) )  
		goto label_cond_e;
	cVar0 = 0xc;
label_goto_a:
	return android::icu::impl::Grego::MONTH_LENGTH[(cVar0 +  month)];
label_cond_e:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method public static final previousMonthLength(II)I
int android::icu::impl::Grego::previousMonthLength(int year,int month)
{
	
	int cVar0;
	
	//    .param p0, "year"    # I
	//    .param p1, "month"    # I
	if ( month <= 0 )
		goto label_cond_9;
	cVar0 = android::icu::impl::Grego::monthLength(year, ( month + -0x1));
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x1f;
	goto label_goto_8;

}
// .method public static timeToFields(J[I)[I
int android::icu::impl::Grego::timeToFields(long long time,std::shared_ptr<int[]> cVar1)
{
	
	int cVar0;
	std::shared<std::vector<int[]>> cVar1;
	std::shared<std::vector<long long[]>> remainder;
	
	//    .param p0, "time"    # J
	//    .param p2, "fields"    # [I
	cVar0 = 0x6;
	if ( !(cVar1) )  
		goto label_cond_6;
	if ( cVar1->size() >= cVar0 )
		goto label_cond_8;
label_cond_6:
	cVar1 = std::make_shared<std::vector<int[]>>(cVar0);
label_cond_8:
	remainder = std::make_shared<std::vector<long long[]>>(0x1);
	//    .local v2, "remainder":[J
	//    .local v0, "day":J
	android::icu::impl::Grego::dayToFields(android::icu::impl::Grego::floorDivide(time, 0x5265c00, remainder), cVar1);
	cVar1[0x5] = (int)(remainder[0x0]);
	return cVar1;

}
// .method public static timeToString(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Grego::timeToString(long long time)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	auto fields;
	int millis;
	std::shared_ptr<java::util::Locale> cVar5;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar6;
	
	//    .param p0, "time"    # J
	cVar0 = 0xea60;
	cVar1 = 0x5;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	fields = android::icu::impl::Grego::timeToFields(time, 0x0);
	//    .local v0, "fields":[I
	millis = fields[cVar1];
	//    .local v2, "millis":I
	//    .local v1, "hour":I
	millis = (millis %  0x36ee80);
	//    .local v3, "min":I
	millis = (millis %  cVar0);
	//    .local v4, "sec":I
	cVar5 = 0x0;
	cVar5->checkCast("java::util::Locale");
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x7);
	cVar6[cVar4] = java::lang::Integer::valueOf(fields[cVar4]);
	cVar6[cVar3] = java::lang::Integer::valueOf(( fields[cVar3] + 0x1));
	cVar6[cVar2] = java::lang::Integer::valueOf(fields[cVar2]);
	cVar6[0x3] = java::lang::Integer::valueOf((millis / 0x36ee80));
	cVar6[0x4] = java::lang::Integer::valueOf((millis / cVar0));
	cVar6[cVar1] = java::lang::Integer::valueOf(( millis / 0x3e8));
	cVar6[0x6] = java::lang::Integer::valueOf(( millis % 0x3e8));
	return java::lang::String::format(cVar5, std::make_shared<java::lang::String>(std::make_shared<char[]>("%04d-%02d-%02dT%02d:%02d:%02d.%03dZ")), cVar6);

}


