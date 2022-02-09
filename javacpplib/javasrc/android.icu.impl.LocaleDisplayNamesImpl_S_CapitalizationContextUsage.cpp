// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$CapitalizationContextUsage.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_CapitalizationContextUsage.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::_S_VALUES;
static android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::KEY;
static android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::KEYVALUE;
static android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::LANGUAGE;
static android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::SCRIPT;
static android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::TERRITORY;
static android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::VARIANT;
// .method static constructor <clinit>()V
void android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> cVar5;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> cVar6;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> cVar7;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> cVar8;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> cVar9;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> cVar10;
	std::shared<std::vector<std::vector<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage>>> cVar11;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LANGUAGE")), cVar4);
	android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::LANGUAGE = cVar5;
	cVar6 = std::make_shared<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SCRIPT")), cVar3);
	android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::SCRIPT = cVar6;
	cVar7 = std::make_shared<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TERRITORY")), cVar2);
	android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::TERRITORY = cVar7;
	cVar8 = std::make_shared<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("VARIANT")), cVar1);
	android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::VARIANT = cVar8;
	cVar9 = std::make_shared<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("KEY")), cVar0);
	android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::KEY = cVar9;
	cVar10 = std::make_shared<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("KEYVALUE")), 0x5);
	android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::KEYVALUE = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage>>>(0x6);
	cVar11[cVar4] = android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::LANGUAGE;
	cVar11[cVar3] = android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::SCRIPT;
	cVar11[cVar2] = android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::TERRITORY;
	cVar11[cVar1] = android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::VARIANT;
	cVar11[cVar0] = android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::KEY;
	cVar11[0x5] = android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::KEYVALUE;
	android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::_S_VALUES = cVar11;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::LocaleDisplayNamesImpl_S_CapitalizationContextUsage(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/LocaleDisplayNamesImpl$CapitalizationContextUsage;
std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage(), name);
	cVar0->checkCast("android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/LocaleDisplayNamesImpl$CapitalizationContextUsage;
std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::values()
{
	
	return android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::_S_VALUES;

}


