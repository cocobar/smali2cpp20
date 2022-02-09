// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ValidIdentifiers$Datasubtype.smali
#include "java2ctype.h"
#include "android.icu.impl.ValidIdentifiers_S_Datasubtype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::ValidIdentifiers_S_Datasubtype::_S_VALUES;
static android::icu::impl::ValidIdentifiers_S_Datasubtype::deprecated;
static android::icu::impl::ValidIdentifiers_S_Datasubtype::macroregion;
static android::icu::impl::ValidIdentifiers_S_Datasubtype::private_use;
static android::icu::impl::ValidIdentifiers_S_Datasubtype::regular;
static android::icu::impl::ValidIdentifiers_S_Datasubtype::special;
static android::icu::impl::ValidIdentifiers_S_Datasubtype::unknown;
// .method static constructor <clinit>()V
void android::icu::impl::ValidIdentifiers_S_Datasubtype::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> cVar5;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> cVar6;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> cVar7;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> cVar8;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> cVar9;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> cVar10;
	std::shared<std::vector<std::vector<android::icu::impl::ValidIdentifiers_S_Datasubtype>>> cVar11;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datasubtype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("deprecated")), cVar4);
	android::icu::impl::ValidIdentifiers_S_Datasubtype::deprecated = cVar5;
	cVar6 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datasubtype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("private_use")), cVar3);
	android::icu::impl::ValidIdentifiers_S_Datasubtype::private_use = cVar6;
	cVar7 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datasubtype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("regular")), cVar2);
	android::icu::impl::ValidIdentifiers_S_Datasubtype::regular = cVar7;
	cVar8 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datasubtype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("special")), cVar1);
	android::icu::impl::ValidIdentifiers_S_Datasubtype::special = cVar8;
	cVar9 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datasubtype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unknown")), cVar0);
	android::icu::impl::ValidIdentifiers_S_Datasubtype::unknown = cVar9;
	cVar10 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datasubtype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("macroregion")), 0x5);
	android::icu::impl::ValidIdentifiers_S_Datasubtype::macroregion = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<android::icu::impl::ValidIdentifiers_S_Datasubtype>>>(0x6);
	cVar11[cVar4] = android::icu::impl::ValidIdentifiers_S_Datasubtype::deprecated;
	cVar11[cVar3] = android::icu::impl::ValidIdentifiers_S_Datasubtype::private_use;
	cVar11[cVar2] = android::icu::impl::ValidIdentifiers_S_Datasubtype::regular;
	cVar11[cVar1] = android::icu::impl::ValidIdentifiers_S_Datasubtype::special;
	cVar11[cVar0] = android::icu::impl::ValidIdentifiers_S_Datasubtype::unknown;
	cVar11[0x5] = android::icu::impl::ValidIdentifiers_S_Datasubtype::macroregion;
	android::icu::impl::ValidIdentifiers_S_Datasubtype::_S_VALUES = cVar11;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::ValidIdentifiers_S_Datasubtype::ValidIdentifiers_S_Datasubtype(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/ValidIdentifiers$Datasubtype;
std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> android::icu::impl::ValidIdentifiers_S_Datasubtype::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::ValidIdentifiers_S_Datasubtype(), name);
	cVar0->checkCast("android::icu::impl::ValidIdentifiers_S_Datasubtype");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/ValidIdentifiers$Datasubtype;
std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> android::icu::impl::ValidIdentifiers_S_Datasubtype::values()
{
	
	return android::icu::impl::ValidIdentifiers_S_Datasubtype::_S_VALUES;

}


