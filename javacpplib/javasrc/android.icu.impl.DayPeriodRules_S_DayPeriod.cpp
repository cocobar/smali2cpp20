// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\DayPeriodRules$DayPeriod.smali
#include "java2ctype.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriod.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::DayPeriodRules_S_DayPeriod::_S_VALUES;
static android::icu::impl::DayPeriodRules_S_DayPeriod::AFTERNOON1;
static android::icu::impl::DayPeriodRules_S_DayPeriod::AFTERNOON2;
static android::icu::impl::DayPeriodRules_S_DayPeriod::AM;
static android::icu::impl::DayPeriodRules_S_DayPeriod::EVENING1;
static android::icu::impl::DayPeriodRules_S_DayPeriod::EVENING2;
static android::icu::impl::DayPeriodRules_S_DayPeriod::MIDNIGHT;
static android::icu::impl::DayPeriodRules_S_DayPeriod::MORNING1;
static android::icu::impl::DayPeriodRules_S_DayPeriod::MORNING2;
static android::icu::impl::DayPeriodRules_S_DayPeriod::NIGHT1;
static android::icu::impl::DayPeriodRules_S_DayPeriod::NIGHT2;
static android::icu::impl::DayPeriodRules_S_DayPeriod::NOON;
static android::icu::impl::DayPeriodRules_S_DayPeriod::PM;
static android::icu::impl::DayPeriodRules_S_DayPeriod::VALUES;
// .method static synthetic -wrap0(Ljava/lang/CharSequence;)Landroid/icu/impl/DayPeriodRules$DayPeriod;
std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> android::icu::impl::DayPeriodRules_S_DayPeriod::_wrap0(std::shared_ptr<java::lang::CharSequence> str)
{
	
	//    .param p0, "str"    # Ljava/lang/CharSequence;
	return android::icu::impl::DayPeriodRules_S_DayPeriod::fromStringOrNull(str);

}
// .method static constructor <clinit>()V
void android::icu::impl::DayPeriodRules_S_DayPeriod::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> cVar5;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> cVar6;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> cVar7;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> cVar8;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> cVar9;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> cVar10;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> cVar11;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> cVar12;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> cVar13;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> cVar14;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> cVar15;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> cVar16;
	std::shared<std::vector<std::vector<android::icu::impl::DayPeriodRules_S_DayPeriod>>> cVar17;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::impl::DayPeriodRules_S_DayPeriod>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MIDNIGHT")), cVar4);
	android::icu::impl::DayPeriodRules_S_DayPeriod::MIDNIGHT = cVar5;
	cVar6 = std::make_shared<android::icu::impl::DayPeriodRules_S_DayPeriod>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NOON")), cVar3);
	android::icu::impl::DayPeriodRules_S_DayPeriod::NOON = cVar6;
	cVar7 = std::make_shared<android::icu::impl::DayPeriodRules_S_DayPeriod>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MORNING1")), cVar2);
	android::icu::impl::DayPeriodRules_S_DayPeriod::MORNING1 = cVar7;
	cVar8 = std::make_shared<android::icu::impl::DayPeriodRules_S_DayPeriod>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AFTERNOON1")), cVar1);
	android::icu::impl::DayPeriodRules_S_DayPeriod::AFTERNOON1 = cVar8;
	cVar9 = std::make_shared<android::icu::impl::DayPeriodRules_S_DayPeriod>(std::make_shared<java::lang::String>(std::make_shared<char[]>("EVENING1")), cVar0);
	android::icu::impl::DayPeriodRules_S_DayPeriod::EVENING1 = cVar9;
	cVar10 = std::make_shared<android::icu::impl::DayPeriodRules_S_DayPeriod>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NIGHT1")), 0x5);
	android::icu::impl::DayPeriodRules_S_DayPeriod::NIGHT1 = cVar10;
	cVar11 = std::make_shared<android::icu::impl::DayPeriodRules_S_DayPeriod>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MORNING2")), 0x6);
	android::icu::impl::DayPeriodRules_S_DayPeriod::MORNING2 = cVar11;
	cVar12 = std::make_shared<android::icu::impl::DayPeriodRules_S_DayPeriod>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AFTERNOON2")), 0x7);
	android::icu::impl::DayPeriodRules_S_DayPeriod::AFTERNOON2 = cVar12;
	cVar13 = std::make_shared<android::icu::impl::DayPeriodRules_S_DayPeriod>(std::make_shared<java::lang::String>(std::make_shared<char[]>("EVENING2")), 0x8);
	android::icu::impl::DayPeriodRules_S_DayPeriod::EVENING2 = cVar13;
	cVar14 = std::make_shared<android::icu::impl::DayPeriodRules_S_DayPeriod>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NIGHT2")), 0x9);
	android::icu::impl::DayPeriodRules_S_DayPeriod::NIGHT2 = cVar14;
	cVar15 = std::make_shared<android::icu::impl::DayPeriodRules_S_DayPeriod>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AM")), 0xa);
	android::icu::impl::DayPeriodRules_S_DayPeriod::AM = cVar15;
	cVar16 = std::make_shared<android::icu::impl::DayPeriodRules_S_DayPeriod>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PM")), 0xb);
	android::icu::impl::DayPeriodRules_S_DayPeriod::PM = cVar16;
	cVar17 = std::make_shared<std::vector<std::vector<android::icu::impl::DayPeriodRules_S_DayPeriod>>>(0xc);
	cVar17[cVar4] = android::icu::impl::DayPeriodRules_S_DayPeriod::MIDNIGHT;
	cVar17[cVar3] = android::icu::impl::DayPeriodRules_S_DayPeriod::NOON;
	cVar17[cVar2] = android::icu::impl::DayPeriodRules_S_DayPeriod::MORNING1;
	cVar17[cVar1] = android::icu::impl::DayPeriodRules_S_DayPeriod::AFTERNOON1;
	cVar17[cVar0] = android::icu::impl::DayPeriodRules_S_DayPeriod::EVENING1;
	cVar17[0x5] = android::icu::impl::DayPeriodRules_S_DayPeriod::NIGHT1;
	cVar17[0x6] = android::icu::impl::DayPeriodRules_S_DayPeriod::MORNING2;
	cVar17[0x7] = android::icu::impl::DayPeriodRules_S_DayPeriod::AFTERNOON2;
	cVar17[0x8] = android::icu::impl::DayPeriodRules_S_DayPeriod::EVENING2;
	cVar17[0x9] = android::icu::impl::DayPeriodRules_S_DayPeriod::NIGHT2;
	cVar17[0xa] = android::icu::impl::DayPeriodRules_S_DayPeriod::AM;
	cVar17[0xb] = android::icu::impl::DayPeriodRules_S_DayPeriod::PM;
	android::icu::impl::DayPeriodRules_S_DayPeriod::_S_VALUES = cVar17;
	android::icu::impl::DayPeriodRules_S_DayPeriod::VALUES = android::icu::impl::DayPeriodRules_S_DayPeriod::values({const[class].FS-Param});
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::DayPeriodRules_S_DayPeriod::DayPeriodRules_S_DayPeriod(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method private static fromStringOrNull(Ljava/lang/CharSequence;)Landroid/icu/impl/DayPeriodRules$DayPeriod;
std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> android::icu::impl::DayPeriodRules_S_DayPeriod::fromStringOrNull(std::shared_ptr<java::lang::CharSequence> str)
{
	
	//    .param p0, "str"    # Ljava/lang/CharSequence;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("midnight"))->contentEquals(str)) )  
		goto label_cond_c;
	return android::icu::impl::DayPeriodRules_S_DayPeriod::MIDNIGHT;
	// 313    .line 41
label_cond_c:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("noon"))->contentEquals(str)) )  
		goto label_cond_18;
	return android::icu::impl::DayPeriodRules_S_DayPeriod::NOON;
	// 327    .line 42
label_cond_18:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("morning1"))->contentEquals(str)) )  
		goto label_cond_24;
	return android::icu::impl::DayPeriodRules_S_DayPeriod::MORNING1;
	// 341    .line 43
label_cond_24:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("afternoon1"))->contentEquals(str)) )  
		goto label_cond_30;
	return android::icu::impl::DayPeriodRules_S_DayPeriod::AFTERNOON1;
	// 355    .line 44
label_cond_30:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("evening1"))->contentEquals(str)) )  
		goto label_cond_3c;
	return android::icu::impl::DayPeriodRules_S_DayPeriod::EVENING1;
	// 369    .line 45
label_cond_3c:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("night1"))->contentEquals(str)) )  
		goto label_cond_48;
	return android::icu::impl::DayPeriodRules_S_DayPeriod::NIGHT1;
	// 383    .line 46
label_cond_48:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("morning2"))->contentEquals(str)) )  
		goto label_cond_54;
	return android::icu::impl::DayPeriodRules_S_DayPeriod::MORNING2;
	// 397    .line 47
label_cond_54:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("afternoon2"))->contentEquals(str)) )  
		goto label_cond_60;
	return android::icu::impl::DayPeriodRules_S_DayPeriod::AFTERNOON2;
	// 411    .line 48
label_cond_60:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("evening2"))->contentEquals(str)) )  
		goto label_cond_6c;
	return android::icu::impl::DayPeriodRules_S_DayPeriod::EVENING2;
	// 425    .line 49
label_cond_6c:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("night2"))->contentEquals(str)) )  
		goto label_cond_78;
	return android::icu::impl::DayPeriodRules_S_DayPeriod::NIGHT2;
	// 439    .line 50
label_cond_78:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("am"))->contentEquals(str)) )  
		goto label_cond_84;
	return android::icu::impl::DayPeriodRules_S_DayPeriod::AM;
	// 453    .line 51
label_cond_84:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("pm"))->contentEquals(str)) )  
		goto label_cond_90;
	return android::icu::impl::DayPeriodRules_S_DayPeriod::PM;
	// 467    .line 52
label_cond_90:
	return 0x0;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/DayPeriodRules$DayPeriod;
std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> android::icu::impl::DayPeriodRules_S_DayPeriod::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::DayPeriodRules_S_DayPeriod(), name);
	cVar0->checkCast("android::icu::impl::DayPeriodRules_S_DayPeriod");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/DayPeriodRules$DayPeriod;
std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> android::icu::impl::DayPeriodRules_S_DayPeriod::values()
{
	
	return android::icu::impl::DayPeriodRules_S_DayPeriod::_S_VALUES;

}


