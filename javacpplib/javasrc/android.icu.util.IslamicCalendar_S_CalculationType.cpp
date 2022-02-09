// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\IslamicCalendar$CalculationType.smali
#include "java2ctype.h"
#include "android.icu.util.IslamicCalendar_S_CalculationType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::util::IslamicCalendar_S_CalculationType::_S_VALUES;
static android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC;
static android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL;
static android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_TBLA;
static android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_UMALQURA;
// .method static constructor <clinit>()V
void android::icu::util::IslamicCalendar_S_CalculationType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> cVar4;
	std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> cVar5;
	std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> cVar6;
	std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> cVar7;
	std::shared<std::vector<std::vector<android::icu::util::IslamicCalendar_S_CalculationType>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::util::IslamicCalendar_S_CalculationType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISLAMIC")), cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic")));
	android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC = cVar4;
	cVar5 = std::make_shared<android::icu::util::IslamicCalendar_S_CalculationType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISLAMIC_CIVIL")), cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic-civil")));
	android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL = cVar5;
	cVar6 = std::make_shared<android::icu::util::IslamicCalendar_S_CalculationType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISLAMIC_UMALQURA")), cVar1, std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic-umalqura")));
	android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_UMALQURA = cVar6;
	cVar7 = std::make_shared<android::icu::util::IslamicCalendar_S_CalculationType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISLAMIC_TBLA")), cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic-tbla")));
	android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_TBLA = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<android::icu::util::IslamicCalendar_S_CalculationType>>>(0x4);
	cVar8[cVar3] = android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC;
	cVar8[cVar2] = android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_CIVIL;
	cVar8[cVar1] = android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_UMALQURA;
	cVar8[cVar0] = android::icu::util::IslamicCalendar_S_CalculationType::ISLAMIC_TBLA;
	android::icu::util::IslamicCalendar_S_CalculationType::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;ILjava/lang/String;)V
android::icu::util::IslamicCalendar_S_CalculationType::IslamicCalendar_S_CalculationType(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<java::lang::String> bcpType)
{
	
	//    .param p3, "bcpType"    # Ljava/lang/String;
	java::lang::Enum::(var0, var1);
	this->bcpType = bcpType;
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/util/IslamicCalendar$CalculationType;
std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> android::icu::util::IslamicCalendar_S_CalculationType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::util::IslamicCalendar_S_CalculationType(), name);
	cVar0->checkCast("android::icu::util::IslamicCalendar_S_CalculationType");
	return cVar0;

}
// .method public static values()[Landroid/icu/util/IslamicCalendar$CalculationType;
std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> android::icu::util::IslamicCalendar_S_CalculationType::values()
{
	
	return android::icu::util::IslamicCalendar_S_CalculationType::_S_VALUES;

}
// .method bcpType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::IslamicCalendar_S_CalculationType::bcpType()
{
	
	return this->bcpType;

}


