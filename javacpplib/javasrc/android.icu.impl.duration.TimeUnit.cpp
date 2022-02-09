// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\TimeUnit.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "java.lang.String.h"

static android::icu::impl::duration::TimeUnit::DAY;
static android::icu::impl::duration::TimeUnit::HOUR;
static android::icu::impl::duration::TimeUnit::MILLISECOND;
static android::icu::impl::duration::TimeUnit::MINUTE;
static android::icu::impl::duration::TimeUnit::MONTH;
static android::icu::impl::duration::TimeUnit::SECOND;
static android::icu::impl::duration::TimeUnit::WEEK;
static android::icu::impl::duration::TimeUnit::YEAR;
static android::icu::impl::duration::TimeUnit::approxDurations;
static android::icu::impl::duration::TimeUnit::units;
// .method static constructor <clinit>()V
void android::icu::impl::duration::TimeUnit::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> cVar5;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> cVar6;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> cVar7;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> cVar8;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> cVar9;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> cVar10;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> cVar11;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> cVar12;
	std::shared<std::vector<std::vector<android::icu::impl::duration::TimeUnit>>> cVar13;
	std::shared<std::vector<long long[]>> cVar14;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::impl::duration::TimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("year")), cVar4);
	android::icu::impl::duration::TimeUnit::YEAR = cVar5;
	cVar6 = std::make_shared<android::icu::impl::duration::TimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("month")), cVar3);
	android::icu::impl::duration::TimeUnit::MONTH = cVar6;
	cVar7 = std::make_shared<android::icu::impl::duration::TimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("week")), cVar2);
	android::icu::impl::duration::TimeUnit::WEEK = cVar7;
	cVar8 = std::make_shared<android::icu::impl::duration::TimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("day")), cVar1);
	android::icu::impl::duration::TimeUnit::DAY = cVar8;
	cVar9 = std::make_shared<android::icu::impl::duration::TimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hour")), cVar0);
	android::icu::impl::duration::TimeUnit::HOUR = cVar9;
	cVar10 = std::make_shared<android::icu::impl::duration::TimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("minute")), 0x5);
	android::icu::impl::duration::TimeUnit::MINUTE = cVar10;
	cVar11 = std::make_shared<android::icu::impl::duration::TimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("second")), 0x6);
	android::icu::impl::duration::TimeUnit::SECOND = cVar11;
	cVar12 = std::make_shared<android::icu::impl::duration::TimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("millisecond")), 0x7);
	android::icu::impl::duration::TimeUnit::MILLISECOND = cVar12;
	cVar13 = std::make_shared<std::vector<std::vector<android::icu::impl::duration::TimeUnit>>>(0x8);
	cVar13[cVar4] = android::icu::impl::duration::TimeUnit::YEAR;
	cVar13[cVar3] = android::icu::impl::duration::TimeUnit::MONTH;
	cVar13[cVar2] = android::icu::impl::duration::TimeUnit::WEEK;
	cVar13[cVar1] = android::icu::impl::duration::TimeUnit::DAY;
	cVar13[cVar0] = android::icu::impl::duration::TimeUnit::HOUR;
	cVar13[0x5] = android::icu::impl::duration::TimeUnit::MINUTE;
	cVar13[0x6] = android::icu::impl::duration::TimeUnit::SECOND;
	cVar13[0x7] = android::icu::impl::duration::TimeUnit::MILLISECOND;
	android::icu::impl::duration::TimeUnit::units = cVar13;
	cVar14 = std::make_shared<std::vector<long long[]>>(0x8);
	?;
	android::icu::impl::duration::TimeUnit::approxDurations = cVar14;
	return;
	// 186    .line 86
	// 187    nop
	// 189    :array_8c
	// 190    .array-data 8
	// 191        0x758fac300L
	// 192        0x9cd00b00L
	// 193        0x240c8400
	// 194        0x5265c00
	// 195        0x36ee80
	// 196        0xea60
	// 197        0x3e8
	// 198        0x1
	// 199    .end array-data

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::duration::TimeUnit::TimeUnit(std::shared_ptr<java::lang::String> name,int ordinal)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "ordinal"    # I
	// 209    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->name = name;
	this->ordinal = (unsigned char)(ordinal);
	return;

}
// .method public larger()Landroid/icu/impl/duration/TimeUnit;
std::shared_ptr<android::icu::impl::duration::TimeUnit> android::icu::impl::duration::TimeUnit::larger()
{
	
	std::shared_ptr<android::icu::impl::duration::TimeUnit> cVar0;
	
	if ( this->ordinal )     
		goto label_cond_6;
	cVar0 = 0x0;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = android::icu::impl::duration::TimeUnit::units[( this->ordinal + -0x1)];
	goto label_goto_5;

}
// .method public ordinal()I
int android::icu::impl::duration::TimeUnit::ordinal()
{
	
	return this->ordinal;

}
// .method public smaller()Landroid/icu/impl/duration/TimeUnit;
std::shared_ptr<android::icu::impl::duration::TimeUnit> android::icu::impl::duration::TimeUnit::smaller()
{
	
	std::shared_ptr<android::icu::impl::duration::TimeUnit> cVar0;
	
	if ( this->ordinal != ( android::icu::impl::duration::TimeUnit::units->size() + -0x1) )
		goto label_cond_b;
	cVar0 = 0x0;
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = android::icu::impl::duration::TimeUnit::units[( this->ordinal + 0x1)];
	goto label_goto_a;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::TimeUnit::toString()
{
	
	return this->name;

}


