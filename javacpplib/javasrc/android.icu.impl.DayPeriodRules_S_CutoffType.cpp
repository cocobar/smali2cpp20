// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\DayPeriodRules$CutoffType.smali
#include "java2ctype.h"
#include "android.icu.impl.DayPeriodRules_S_CutoffType.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::DayPeriodRules_S_CutoffType::_S_VALUES;
static android::icu::impl::DayPeriodRules_S_CutoffType::AFTER;
static android::icu::impl::DayPeriodRules_S_CutoffType::AT;
static android::icu::impl::DayPeriodRules_S_CutoffType::BEFORE;
static android::icu::impl::DayPeriodRules_S_CutoffType::FROM;
// .method static synthetic -wrap0(Ljava/lang/CharSequence;)Landroid/icu/impl/DayPeriodRules$CutoffType;
std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> android::icu::impl::DayPeriodRules_S_CutoffType::_wrap0(std::shared_ptr<java::lang::CharSequence> str)
{
	
	//    .param p0, "str"    # Ljava/lang/CharSequence;
	return android::icu::impl::DayPeriodRules_S_CutoffType::fromStringOrNull(str);

}
// .method static constructor <clinit>()V
void android::icu::impl::DayPeriodRules_S_CutoffType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> cVar4;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> cVar5;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> cVar6;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> cVar7;
	std::shared<std::vector<std::vector<android::icu::impl::DayPeriodRules_S_CutoffType>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::impl::DayPeriodRules_S_CutoffType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("BEFORE")), cVar3);
	android::icu::impl::DayPeriodRules_S_CutoffType::BEFORE = cVar4;
	cVar5 = std::make_shared<android::icu::impl::DayPeriodRules_S_CutoffType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AFTER")), cVar2);
	android::icu::impl::DayPeriodRules_S_CutoffType::AFTER = cVar5;
	cVar6 = std::make_shared<android::icu::impl::DayPeriodRules_S_CutoffType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FROM")), cVar1);
	android::icu::impl::DayPeriodRules_S_CutoffType::FROM = cVar6;
	cVar7 = std::make_shared<android::icu::impl::DayPeriodRules_S_CutoffType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AT")), cVar0);
	android::icu::impl::DayPeriodRules_S_CutoffType::AT = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<android::icu::impl::DayPeriodRules_S_CutoffType>>>(0x4);
	cVar8[cVar3] = android::icu::impl::DayPeriodRules_S_CutoffType::BEFORE;
	cVar8[cVar2] = android::icu::impl::DayPeriodRules_S_CutoffType::AFTER;
	cVar8[cVar1] = android::icu::impl::DayPeriodRules_S_CutoffType::FROM;
	cVar8[cVar0] = android::icu::impl::DayPeriodRules_S_CutoffType::AT;
	android::icu::impl::DayPeriodRules_S_CutoffType::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::DayPeriodRules_S_CutoffType::DayPeriodRules_S_CutoffType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method private static fromStringOrNull(Ljava/lang/CharSequence;)Landroid/icu/impl/DayPeriodRules$CutoffType;
std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> android::icu::impl::DayPeriodRules_S_CutoffType::fromStringOrNull(std::shared_ptr<java::lang::CharSequence> str)
{
	
	//    .param p0, "str"    # Ljava/lang/CharSequence;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("from"))->contentEquals(str)) )  
		goto label_cond_c;
	return android::icu::impl::DayPeriodRules_S_CutoffType::FROM;
	// 153    .line 64
label_cond_c:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("before"))->contentEquals(str)) )  
		goto label_cond_18;
	return android::icu::impl::DayPeriodRules_S_CutoffType::BEFORE;
	// 167    .line 65
label_cond_18:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("after"))->contentEquals(str)) )  
		goto label_cond_24;
	return android::icu::impl::DayPeriodRules_S_CutoffType::AFTER;
	// 181    .line 66
label_cond_24:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("at"))->contentEquals(str)) )  
		goto label_cond_30;
	return android::icu::impl::DayPeriodRules_S_CutoffType::AT;
	// 195    .line 67
label_cond_30:
	return 0x0;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/DayPeriodRules$CutoffType;
std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> android::icu::impl::DayPeriodRules_S_CutoffType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::DayPeriodRules_S_CutoffType(), name);
	cVar0->checkCast("android::icu::impl::DayPeriodRules_S_CutoffType");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/DayPeriodRules$CutoffType;
std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> android::icu::impl::DayPeriodRules_S_CutoffType::values()
{
	
	return android::icu::impl::DayPeriodRules_S_CutoffType::_S_VALUES;

}


