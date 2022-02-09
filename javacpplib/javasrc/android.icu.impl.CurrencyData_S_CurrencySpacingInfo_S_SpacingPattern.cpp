// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData$CurrencySpacingInfo$SpacingPattern.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::_S_VALUES;
static android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::_assertionsDisabled;
static android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::COUNT;
static android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::CURRENCY_MATCH;
static android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::INSERT_BETWEEN;
static android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::SURROUNDING_MATCH;
// .method static constructor <clinit>()V
void android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> cVar4;
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> cVar5;
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> cVar6;
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> cVar7;
	std::shared<std::vector<std::vector<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::_assertionsDisabled = ( android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern()->desiredAssertionStatus() ^ 0x1);
	cVar4 = std::make_shared<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CURRENCY_MATCH")), cVar3, cVar3);
	android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::CURRENCY_MATCH = cVar4;
	cVar5 = std::make_shared<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SURROUNDING_MATCH")), cVar2, cVar2);
	android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::SURROUNDING_MATCH = cVar5;
	cVar6 = std::make_shared<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern>(std::make_shared<java::lang::String>(std::make_shared<char[]>("INSERT_BETWEEN")), cVar1, cVar1);
	android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::INSERT_BETWEEN = cVar6;
	cVar7 = std::make_shared<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern>(std::make_shared<java::lang::String>(std::make_shared<char[]>("COUNT")), cVar0);
	android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::COUNT = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern>>>(0x4);
	cVar8[cVar3] = android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::CURRENCY_MATCH;
	cVar8[cVar2] = android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::SURROUNDING_MATCH;
	cVar8[cVar1] = android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::INSERT_BETWEEN;
	cVar8[cVar0] = android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::COUNT;
	android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method private constructor <init>(Ljava/lang/String;II)V
android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern(std::shared_ptr<java::lang::String> var0,int var1,int value)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p3, "value"    # I
	java::lang::Enum::(var0, var1);
	if ( android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::_assertionsDisabled )     
		goto label_cond_13;
	if ( value == this->ordinal() )
		goto label_cond_13;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
label_cond_13:
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingPattern;
std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern(), name);
	cVar0->checkCast("android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingPattern;
std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::values()
{
	
	return android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::_S_VALUES;

}


