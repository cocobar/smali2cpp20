// CPP L:\smali2cpp20\x64\Release\out\android\icu\lang\UScript$ScriptUsage.smali
#include "java2ctype.h"
#include "android.icu.lang.UScript_S_ScriptUsage.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::lang::UScript_S_ScriptUsage::_S_VALUES;
static android::icu::lang::UScript_S_ScriptUsage::ASPIRATIONAL;
static android::icu::lang::UScript_S_ScriptUsage::EXCLUDED;
static android::icu::lang::UScript_S_ScriptUsage::LIMITED_USE;
static android::icu::lang::UScript_S_ScriptUsage::NOT_ENCODED;
static android::icu::lang::UScript_S_ScriptUsage::RECOMMENDED;
static android::icu::lang::UScript_S_ScriptUsage::UNKNOWN;
// .method static constructor <clinit>()V
void android::icu::lang::UScript_S_ScriptUsage::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> cVar5;
	std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> cVar6;
	std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> cVar7;
	std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> cVar8;
	std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> cVar9;
	std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> cVar10;
	std::shared<std::vector<std::vector<android::icu::lang::UScript_S_ScriptUsage>>> cVar11;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::lang::UScript_S_ScriptUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NOT_ENCODED")), cVar4);
	android::icu::lang::UScript_S_ScriptUsage::NOT_ENCODED = cVar5;
	cVar6 = std::make_shared<android::icu::lang::UScript_S_ScriptUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UNKNOWN")), cVar3);
	android::icu::lang::UScript_S_ScriptUsage::UNKNOWN = cVar6;
	cVar7 = std::make_shared<android::icu::lang::UScript_S_ScriptUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("EXCLUDED")), cVar2);
	android::icu::lang::UScript_S_ScriptUsage::EXCLUDED = cVar7;
	cVar8 = std::make_shared<android::icu::lang::UScript_S_ScriptUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LIMITED_USE")), cVar1);
	android::icu::lang::UScript_S_ScriptUsage::LIMITED_USE = cVar8;
	cVar9 = std::make_shared<android::icu::lang::UScript_S_ScriptUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ASPIRATIONAL")), cVar0);
	android::icu::lang::UScript_S_ScriptUsage::ASPIRATIONAL = cVar9;
	cVar10 = std::make_shared<android::icu::lang::UScript_S_ScriptUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("RECOMMENDED")), 0x5);
	android::icu::lang::UScript_S_ScriptUsage::RECOMMENDED = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<android::icu::lang::UScript_S_ScriptUsage>>>(0x6);
	cVar11[cVar4] = android::icu::lang::UScript_S_ScriptUsage::NOT_ENCODED;
	cVar11[cVar3] = android::icu::lang::UScript_S_ScriptUsage::UNKNOWN;
	cVar11[cVar2] = android::icu::lang::UScript_S_ScriptUsage::EXCLUDED;
	cVar11[cVar1] = android::icu::lang::UScript_S_ScriptUsage::LIMITED_USE;
	cVar11[cVar0] = android::icu::lang::UScript_S_ScriptUsage::ASPIRATIONAL;
	cVar11[0x5] = android::icu::lang::UScript_S_ScriptUsage::RECOMMENDED;
	android::icu::lang::UScript_S_ScriptUsage::_S_VALUES = cVar11;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::lang::UScript_S_ScriptUsage::UScript_S_ScriptUsage(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/lang/UScript$ScriptUsage;
std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> android::icu::lang::UScript_S_ScriptUsage::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::lang::UScript_S_ScriptUsage(), name);
	cVar0->checkCast("android::icu::lang::UScript_S_ScriptUsage");
	return cVar0;

}
// .method public static values()[Landroid/icu/lang/UScript$ScriptUsage;
std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> android::icu::lang::UScript_S_ScriptUsage::values()
{
	
	return android::icu::lang::UScript_S_ScriptUsage::_S_VALUES;

}


