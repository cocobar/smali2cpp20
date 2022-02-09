// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\UniversalTimeScale.smali
#include "java2ctype.h"
#include "android.icu.math.BigDecimal.h"
#include "android.icu.util.UniversalTimeScale_S_TimeScaleData.h"
#include "android.icu.util.UniversalTimeScale.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::util::UniversalTimeScale::DB2_TIME = 0x8;
static android::icu::util::UniversalTimeScale::DOTNET_DATE_TIME = 0x4;
static android::icu::util::UniversalTimeScale::EPOCH_OFFSET_MINUS_1_VALUE = 0x7;
static android::icu::util::UniversalTimeScale::EPOCH_OFFSET_PLUS_1_VALUE = 0x6;
static android::icu::util::UniversalTimeScale::EPOCH_OFFSET_VALUE = 0x1;
static android::icu::util::UniversalTimeScale::EXCEL_TIME = 0x7;
static android::icu::util::UniversalTimeScale::FROM_MAX_VALUE = 0x3;
static android::icu::util::UniversalTimeScale::FROM_MIN_VALUE = 0x2;
static android::icu::util::UniversalTimeScale::ICU4C_TIME = 0x2;
static android::icu::util::UniversalTimeScale::JAVA_TIME = 0x0;
static android::icu::util::UniversalTimeScale::MAC_OLD_TIME = 0x5;
static android::icu::util::UniversalTimeScale::MAC_TIME = 0x6;
static android::icu::util::UniversalTimeScale::MAX_ROUND_VALUE = 0xa;
static android::icu::util::UniversalTimeScale::MAX_SCALE = 0xa;
static android::icu::util::UniversalTimeScale::MAX_SCALE_VALUE = 0xb;
static android::icu::util::UniversalTimeScale::MIN_ROUND_VALUE = 0x9;
static android::icu::util::UniversalTimeScale::TO_MAX_VALUE = 0x5;
static android::icu::util::UniversalTimeScale::TO_MIN_VALUE = 0x4;
static android::icu::util::UniversalTimeScale::UNITS_ROUND_VALUE = 0x8;
static android::icu::util::UniversalTimeScale::UNITS_VALUE = 0x0;
static android::icu::util::UniversalTimeScale::UNIX_MICROSECONDS_TIME = 0x9;
static android::icu::util::UniversalTimeScale::UNIX_TIME = 0x1;
static android::icu::util::UniversalTimeScale::WINDOWS_FILE_TIME = 0x3;
static android::icu::util::UniversalTimeScale::days = 0xc92a69c000L;
static android::icu::util::UniversalTimeScale::hours = 0x861c46800L;
static android::icu::util::UniversalTimeScale::microseconds = 0xaL;
static android::icu::util::UniversalTimeScale::milliseconds = 0x2710L;
static android::icu::util::UniversalTimeScale::minutes = 0x23c34600L;
static android::icu::util::UniversalTimeScale::seconds = 0x989680L;
static android::icu::util::UniversalTimeScale::ticks = 0x1L;
static android::icu::util::UniversalTimeScale::timeScaleTable;
// .method static constructor <clinit>()V
void android::icu::util::UniversalTimeScale::static_cinit()
{
	
	std::shared<std::vector<std::vector<android::icu::util::UniversalTimeScale_S_TimeScaleData>>> cVar0;
	std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> cVar1;
	std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> cVar2;
	std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> cVar3;
	std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> cVar4;
	std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> cVar5;
	std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> cVar6;
	std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> cVar7;
	std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> cVar8;
	std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> cVar9;
	std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> cVar10;
	
	cVar0 = std::make_shared<std::vector<std::vector<android::icu::util::UniversalTimeScale_S_TimeScaleData>>>(0xa);
	cVar1 = std::make_shared<android::icu::util::UniversalTimeScale_S_TimeScaleData>(0x2710, 0x89f7ff5f7b58000L, -0x7ffffffffffffcd7L, 0x7ffffffffffffcd7L, -0x37f5f6f906065L, 0x30e594b36b065L);
	cVar0[0x0] = cVar1;
	cVar2 = std::make_shared<android::icu::util::UniversalTimeScale_S_TimeScaleData>(0x989680, 0x89f7ff5f7b58000L, -0x8000000000000000L, 0x7fffffffffffffffL, -0xe53726cce5L, 0xc84802dee5L);
	cVar0[0x1] = cVar2;
	cVar3 = std::make_shared<android::icu::util::UniversalTimeScale_S_TimeScaleData>(0x2710, 0x89f7ff5f7b58000L, -0x7ffffffffffffcd7L, 0x7ffffffffffffcd7L, -0x37f5f6f906065L, 0x30e594b36b065L);
	cVar0[0x2] = cVar3;
	cVar4 = std::make_shared<android::icu::util::UniversalTimeScale_S_TimeScaleData>(0x1, 0x701ce1722770000L, -0x78fe31e8dd890000L, 0x7fffffffffffffffL, -0x8000000000000000L, 0x78fe31e8dd88ffffL);
	cVar0[0x3] = cVar4;
	cVar5 = std::make_shared<android::icu::util::UniversalTimeScale_S_TimeScaleData>(0x1, 0x0, -0x8000000000000000L, 0x7fffffffffffffffL, -0x8000000000000000L, 0x7fffffffffffffffL);
	cVar0[0x4] = cVar5;
	cVar6 = std::make_shared<android::icu::util::UniversalTimeScale_S_TimeScaleData>(0x989680, 0x855809903724000L, -0x8000000000000000L, 0x7fffffffffffffffL, -0xe4bb011c65L, 0xc8c4288f65L);
	cVar0[0x5] = cVar6;
	cVar7 = std::make_shared<android::icu::util::UniversalTimeScale_S_TimeScaleData>(0x989680, 0x8c2419ceb14c000L, -0x8000000000000000L, 0x7fffffffffffffffL, -0xe571769565L, 0xc80db31665L);
	cVar0[0x6] = cVar7;
	cVar8 = std::make_shared<android::icu::util::UniversalTimeScale_S_TimeScaleData>(0xc92a69c000L, 0x8510489f5ed8000L, -0x8000000000000000L, 0x7fffffffffffffffL, -0xad7959, 0x984ea5);
	cVar0[0x7] = cVar8;
	cVar9 = std::make_shared<android::icu::util::UniversalTimeScale_S_TimeScaleData>(0xc92a69c000L, 0x8510489f5ed8000L, -0x8000000000000000L, 0x7fffffffffffffffL, -0xad7959, 0x984ea5);
	cVar0[0x8] = cVar9;
	cVar10 = std::make_shared<android::icu::util::UniversalTimeScale_S_TimeScaleData>(0xa, 0x89f7ff5f7b58000L, -0x7ffffffffffffffcL, 0x7ffffffffffffffcL, -0xda98ccbcbf88cccL, 0xbf00ccdcda10cccL);
	cVar0[0x9] = cVar10;
	android::icu::util::UniversalTimeScale::timeScaleTable = cVar0;
	return;

}
// .method private constructor <init>()V
android::icu::util::UniversalTimeScale::UniversalTimeScale()
{
	
	// 325    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static bigDecimalFrom(DI)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::util::UniversalTimeScale::bigDecimalFrom(double otherTime,int timeScale)
{
	
	long long data;
	std::shared_ptr<android::icu::math::BigDecimal> other;
	std::shared_ptr<android::icu::math::BigDecimal> units;
	std::shared_ptr<android::icu::math::BigDecimal> epochOffset;
	
	//    .param p0, "otherTime"    # D
	//    .param p2, "timeScale"    # I
	data = android::icu::util::UniversalTimeScale::getTimeScaleData(timeScale);
	//    .local v0, "data":Landroid/icu/util/UniversalTimeScale$TimeScaleData;
	other = std::make_shared<android::icu::math::BigDecimal>(java::lang::String::valueOf(otherTime));
	//    .local v2, "other":Landroid/icu/math/BigDecimal;
	units = std::make_shared<android::icu::math::BigDecimal>(data->units);
	//    .local v3, "units":Landroid/icu/math/BigDecimal;
	epochOffset = std::make_shared<android::icu::math::BigDecimal>(data->epochOffset);
	//    .local v1, "epochOffset":Landroid/icu/math/BigDecimal;
	return other->add(epochOffset)->multiply(units);

}
// .method public static bigDecimalFrom(JI)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::util::UniversalTimeScale::bigDecimalFrom(long long otherTime,int timeScale)
{
	
	long long data;
	std::shared_ptr<android::icu::math::BigDecimal> other;
	std::shared_ptr<android::icu::math::BigDecimal> units;
	std::shared_ptr<android::icu::math::BigDecimal> epochOffset;
	
	//    .param p0, "otherTime"    # J
	//    .param p2, "timeScale"    # I
	data = android::icu::util::UniversalTimeScale::getTimeScaleData(timeScale);
	//    .local v0, "data":Landroid/icu/util/UniversalTimeScale$TimeScaleData;
	other = std::make_shared<android::icu::math::BigDecimal>(otherTime);
	//    .local v2, "other":Landroid/icu/math/BigDecimal;
	units = std::make_shared<android::icu::math::BigDecimal>(data->units);
	//    .local v3, "units":Landroid/icu/math/BigDecimal;
	epochOffset = std::make_shared<android::icu::math::BigDecimal>(data->epochOffset);
	//    .local v1, "epochOffset":Landroid/icu/math/BigDecimal;
	return other->add(epochOffset)->multiply(units);

}
// .method public static bigDecimalFrom(Landroid/icu/math/BigDecimal;I)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::util::UniversalTimeScale::bigDecimalFrom(std::shared_ptr<android::icu::math::BigDecimal> otherTime,int timeScale)
{
	
	long long data;
	std::shared_ptr<android::icu::math::BigDecimal> units;
	std::shared_ptr<android::icu::math::BigDecimal> epochOffset;
	
	//    .param p0, "otherTime"    # Landroid/icu/math/BigDecimal;
	//    .param p1, "timeScale"    # I
	data = android::icu::util::UniversalTimeScale::getTimeScaleData(timeScale);
	//    .local v0, "data":Landroid/icu/util/UniversalTimeScale$TimeScaleData;
	units = std::make_shared<android::icu::math::BigDecimal>(data->units);
	//    .local v2, "units":Landroid/icu/math/BigDecimal;
	epochOffset = std::make_shared<android::icu::math::BigDecimal>(data->epochOffset);
	//    .local v1, "epochOffset":Landroid/icu/math/BigDecimal;
	return otherTime->add(epochOffset)->multiply(units);

}
// .method public static from(JI)J
long long android::icu::util::UniversalTimeScale::from(long long otherTime,int timeScale)
{
	
	long long data;
	
	//    .param p0, "otherTime"    # J
	//    .param p2, "timeScale"    # I
	data = android::icu::util::UniversalTimeScale::fromRangeCheck(otherTime, timeScale);
	//    .local v0, "data":Landroid/icu/util/UniversalTimeScale$TimeScaleData;
	return ((data->epochOffset +  otherTime) *  data->units);

}
// .method private static fromRangeCheck(JI)Landroid/icu/util/UniversalTimeScale$TimeScaleData;
std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> android::icu::util::UniversalTimeScale::fromRangeCheck(long long otherTime,int scale)
{
	
	long long data;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "otherTime"    # J
	//    .param p2, "scale"    # I
	data = android::icu::util::UniversalTimeScale::getTimeScaleData(scale);
	//    .local v0, "data":Landroid/icu/util/UniversalTimeScale$TimeScaleData;
	if ( (otherTime > data->fromMin) < 0 ) 
		goto label_cond_11;
	if ( (otherTime > data->fromMax) > 0 ) 
		goto label_cond_11;
	return data;
	// 519    .line 581
label_cond_11:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("otherTime out of range:")))->append(otherTime)->toString());
	// throw
	throw cVar0;

}
// .method private static getTimeScaleData(I)Landroid/icu/util/UniversalTimeScale$TimeScaleData;
std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> android::icu::util::UniversalTimeScale::getTimeScaleData(int scale)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "scale"    # I
	if ( scale < 0 ) 
		goto label_cond_6;
	if ( scale <  0xa )
		goto label_cond_20;
label_cond_6:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("scale out of range: ")))->append(scale)->toString());
	// throw
	throw cVar0;
	// 584    .line 507
label_cond_20:
	return android::icu::util::UniversalTimeScale::timeScaleTable[scale];

}
// .method public static getTimeScaleValue(II)J
long long android::icu::util::UniversalTimeScale::getTimeScaleValue(int scale,int value)
{
	
	long long data;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "scale"    # I
	//    .param p1, "value"    # I
	data = android::icu::util::UniversalTimeScale::getTimeScaleData(scale);
	//    .local v0, "data":Landroid/icu/util/UniversalTimeScale$TimeScaleData;
	// switch
	{
	auto item = ( value );
	if (item == 0) goto label_pswitch_21;
	if (item == 1) goto label_pswitch_24;
	if (item == 2) goto label_pswitch_27;
	if (item == 3) goto label_pswitch_2a;
	if (item == 4) goto label_pswitch_2d;
	if (item == 5) goto label_pswitch_30;
	if (item == 6) goto label_pswitch_33;
	if (item == 7) goto label_pswitch_36;
	if (item == 8) goto label_pswitch_39;
	if (item == 9) goto label_pswitch_3c;
	if (item == 10) goto label_pswitch_3f;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("value out of range: ")))->append(value)->toString());
	// throw
	throw cVar0;
	// 633    .line 525
label_pswitch_21:
	return data->units;
	// 639    .line 528
label_pswitch_24:
	return data->epochOffset;
	// 645    .line 531
label_pswitch_27:
	return data->fromMin;
	// 651    .line 534
label_pswitch_2a:
	return data->fromMax;
	// 657    .line 537
label_pswitch_2d:
	return data->toMin;
	// 663    .line 540
label_pswitch_30:
	return data->toMax;
	// 669    .line 543
label_pswitch_33:
	return data->epochOffsetP1;
	// 675    .line 546
label_pswitch_36:
	return data->epochOffsetM1;
	// 681    .line 549
label_pswitch_39:
	return data->unitsRound;
	// 687    .line 552
label_pswitch_3c:
	return data->minRound;
	// 693    .line 555
label_pswitch_3f:
	return data->maxRound;
	// 699    .line 522
	// 700    :pswitch_data_42
	// 701    .packed-switch 0x0
	// 702        :pswitch_21
	// 703        :pswitch_24
	// 704        :pswitch_27
	// 705        :pswitch_2a
	// 706        :pswitch_2d
	// 707        :pswitch_30
	// 708        :pswitch_33
	// 709        :pswitch_36
	// 710        :pswitch_39
	// 711        :pswitch_3c
	// 712        :pswitch_3f
	// 713    .end packed-switch

}
// .method public static toBigDecimal(JI)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::util::UniversalTimeScale::toBigDecimal(long long universalTime,int timeScale)
{
	
	long long data;
	std::shared_ptr<android::icu::math::BigDecimal> universal;
	std::shared_ptr<android::icu::math::BigDecimal> units;
	std::shared_ptr<android::icu::math::BigDecimal> epochOffset;
	
	//    .param p0, "universalTime"    # J
	//    .param p2, "timeScale"    # I
	data = android::icu::util::UniversalTimeScale::getTimeScaleData(timeScale);
	//    .local v0, "data":Landroid/icu/util/UniversalTimeScale$TimeScaleData;
	universal = std::make_shared<android::icu::math::BigDecimal>(universalTime);
	//    .local v3, "universal":Landroid/icu/math/BigDecimal;
	units = std::make_shared<android::icu::math::BigDecimal>(data->units);
	//    .local v2, "units":Landroid/icu/math/BigDecimal;
	epochOffset = std::make_shared<android::icu::math::BigDecimal>(data->epochOffset);
	//    .local v1, "epochOffset":Landroid/icu/math/BigDecimal;
	return universal->divide(units, 0x4)->subtract(epochOffset);

}
// .method public static toBigDecimal(Landroid/icu/math/BigDecimal;I)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::util::UniversalTimeScale::toBigDecimal(std::shared_ptr<android::icu::math::BigDecimal> universalTime,int timeScale)
{
	
	long long data;
	std::shared_ptr<android::icu::math::BigDecimal> units;
	std::shared_ptr<android::icu::math::BigDecimal> epochOffset;
	
	//    .param p0, "universalTime"    # Landroid/icu/math/BigDecimal;
	//    .param p1, "timeScale"    # I
	data = android::icu::util::UniversalTimeScale::getTimeScaleData(timeScale);
	//    .local v0, "data":Landroid/icu/util/UniversalTimeScale$TimeScaleData;
	units = std::make_shared<android::icu::math::BigDecimal>(data->units);
	//    .local v2, "units":Landroid/icu/math/BigDecimal;
	epochOffset = std::make_shared<android::icu::math::BigDecimal>(data->epochOffset);
	//    .local v1, "epochOffset":Landroid/icu/math/BigDecimal;
	return universalTime->divide(units, 0x4)->subtract(epochOffset);

}
// .method public static toBigDecimalTrunc(Landroid/icu/math/BigDecimal;I)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::util::UniversalTimeScale::toBigDecimalTrunc(std::shared_ptr<android::icu::math::BigDecimal> universalTime,int timeScale)
{
	
	long long data;
	std::shared_ptr<android::icu::math::BigDecimal> units;
	std::shared_ptr<android::icu::math::BigDecimal> epochOffset;
	
	//    .param p0, "universalTime"    # Landroid/icu/math/BigDecimal;
	//    .param p1, "timeScale"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 811    .end annotation
	data = android::icu::util::UniversalTimeScale::getTimeScaleData(timeScale);
	//    .local v0, "data":Landroid/icu/util/UniversalTimeScale$TimeScaleData;
	units = std::make_shared<android::icu::math::BigDecimal>(data->units);
	//    .local v2, "units":Landroid/icu/math/BigDecimal;
	epochOffset = std::make_shared<android::icu::math::BigDecimal>(data->epochOffset);
	//    .local v1, "epochOffset":Landroid/icu/math/BigDecimal;
	return universalTime->divide(units, 0x1)->subtract(epochOffset);

}
// .method public static toLong(JI)J
long long android::icu::util::UniversalTimeScale::toLong(long long universalTime,int timeScale)
{
	
	long long data;
	
	//    .param p0, "universalTime"    # J
	//    .param p2, "timeScale"    # I
	data = android::icu::util::UniversalTimeScale::toRangeCheck(universalTime, timeScale);
	//    .local v0, "data":Landroid/icu/util/UniversalTimeScale$TimeScaleData;
	if ( (universalTime > 0x0) >= 0 )
		goto label_cond_25;
	if ( (universalTime > data->minRound) >= 0 )
		goto label_cond_1a;
	return (((data->unitsRound +  universalTime) /  data->units) -  data->epochOffsetP1);
	// 891    .line 449
label_cond_1a:
	return (((universalTime - data->unitsRound) /  data->units) -  data->epochOffset);
	// 907    .line 452
label_cond_25:
	if ( (universalTime > data->maxRound) <= 0 )
		goto label_cond_36;
	return (((universalTime - data->unitsRound) /  data->units) -  data->epochOffsetM1);
	// 930    .line 456
label_cond_36:
	return (((data->unitsRound +  universalTime) /  data->units) -  data->epochOffset);

}
// .method private static toRangeCheck(JI)Landroid/icu/util/UniversalTimeScale$TimeScaleData;
std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> android::icu::util::UniversalTimeScale::toRangeCheck(long long universalTime,int scale)
{
	
	long long data;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "universalTime"    # J
	//    .param p2, "scale"    # I
	data = android::icu::util::UniversalTimeScale::getTimeScaleData(scale);
	//    .local v0, "data":Landroid/icu/util/UniversalTimeScale$TimeScaleData;
	if ( (universalTime > data->toMin) < 0 ) 
		goto label_cond_11;
	if ( (universalTime > data->toMax) > 0 ) 
		goto label_cond_11;
	return data;
	// 975    .line 570
label_cond_11:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("universalTime out of range:")))->append(universalTime)->toString());
	// throw
	throw cVar0;

}


