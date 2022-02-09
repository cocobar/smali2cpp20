// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle$OpenType.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_OpenType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::ICUResourceBundle_S_OpenType::_S_VALUES;
static android::icu::impl::ICUResourceBundle_S_OpenType::DIRECT;
static android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_DEFAULT_ROOT;
static android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_ONLY;
static android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_ROOT;
// .method static constructor <clinit>()V
void android::icu::impl::ICUResourceBundle_S_OpenType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> cVar4;
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> cVar5;
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> cVar6;
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> cVar7;
	std::shared<std::vector<std::vector<android::icu::impl::ICUResourceBundle_S_OpenType>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::impl::ICUResourceBundle_S_OpenType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LOCALE_DEFAULT_ROOT")), cVar3);
	android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_DEFAULT_ROOT = cVar4;
	cVar5 = std::make_shared<android::icu::impl::ICUResourceBundle_S_OpenType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LOCALE_ROOT")), cVar2);
	android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_ROOT = cVar5;
	cVar6 = std::make_shared<android::icu::impl::ICUResourceBundle_S_OpenType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LOCALE_ONLY")), cVar1);
	android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_ONLY = cVar6;
	cVar7 = std::make_shared<android::icu::impl::ICUResourceBundle_S_OpenType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DIRECT")), cVar0);
	android::icu::impl::ICUResourceBundle_S_OpenType::DIRECT = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<android::icu::impl::ICUResourceBundle_S_OpenType>>>(0x4);
	cVar8[cVar3] = android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_DEFAULT_ROOT;
	cVar8[cVar2] = android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_ROOT;
	cVar8[cVar1] = android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_ONLY;
	cVar8[cVar0] = android::icu::impl::ICUResourceBundle_S_OpenType::DIRECT;
	android::icu::impl::ICUResourceBundle_S_OpenType::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::ICUResourceBundle_S_OpenType::ICUResourceBundle_S_OpenType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/ICUResourceBundle$OpenType;
std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> android::icu::impl::ICUResourceBundle_S_OpenType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::ICUResourceBundle_S_OpenType(), name);
	cVar0->checkCast("android::icu::impl::ICUResourceBundle_S_OpenType");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/ICUResourceBundle$OpenType;
std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> android::icu::impl::ICUResourceBundle_S_OpenType::values()
{
	
	return android::icu::impl::ICUResourceBundle_S_OpenType::_S_VALUES;

}


