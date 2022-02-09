// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData$CurrencySpacingInfo$SpacingType.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo_S_SpacingType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::_S_VALUES;
static android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::AFTER;
static android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::BEFORE;
static android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::COUNT;
// .method static constructor <clinit>()V
void android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType> cVar3;
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType> cVar4;
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType> cVar5;
	std::shared<std::vector<std::vector<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("BEFORE")), cVar2);
	android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::BEFORE = cVar3;
	cVar4 = std::make_shared<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AFTER")), cVar1);
	android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::AFTER = cVar4;
	cVar5 = std::make_shared<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("COUNT")), cVar0);
	android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::COUNT = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType>>>(0x3);
	cVar6[cVar2] = android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::BEFORE;
	cVar6[cVar1] = android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::AFTER;
	cVar6[cVar0] = android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::COUNT;
	android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::CurrencyData_S_CurrencySpacingInfo_S_SpacingType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingType;
std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType> android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType(), name);
	cVar0->checkCast("android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingType;
std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType> android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::values()
{
	
	return android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::_S_VALUES;

}


