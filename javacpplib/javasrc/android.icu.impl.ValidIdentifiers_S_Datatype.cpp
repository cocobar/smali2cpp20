// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ValidIdentifiers$Datatype.smali
#include "java2ctype.h"
#include "android.icu.impl.ValidIdentifiers_S_Datatype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::ValidIdentifiers_S_Datatype::_S_VALUES;
static android::icu::impl::ValidIdentifiers_S_Datatype::currency;
static android::icu::impl::ValidIdentifiers_S_Datatype::illegal;
static android::icu::impl::ValidIdentifiers_S_Datatype::language;
static android::icu::impl::ValidIdentifiers_S_Datatype::region;
static android::icu::impl::ValidIdentifiers_S_Datatype::script;
static android::icu::impl::ValidIdentifiers_S_Datatype::subdivision;
static android::icu::impl::ValidIdentifiers_S_Datatype::t;
static android::icu::impl::ValidIdentifiers_S_Datatype::u;
static android::icu::impl::ValidIdentifiers_S_Datatype::unit;
static android::icu::impl::ValidIdentifiers_S_Datatype::variant;
static android::icu::impl::ValidIdentifiers_S_Datatype::x;
// .method static constructor <clinit>()V
void android::icu::impl::ValidIdentifiers_S_Datatype::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> cVar5;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> cVar6;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> cVar7;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> cVar8;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> cVar9;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> cVar10;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> cVar11;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> cVar12;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> cVar13;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> cVar14;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> cVar15;
	std::shared<std::vector<std::vector<android::icu::impl::ValidIdentifiers_S_Datatype>>> cVar16;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datatype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("currency")), cVar4);
	android::icu::impl::ValidIdentifiers_S_Datatype::currency = cVar5;
	cVar6 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datatype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("language")), cVar3);
	android::icu::impl::ValidIdentifiers_S_Datatype::language = cVar6;
	cVar7 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datatype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("region")), cVar2);
	android::icu::impl::ValidIdentifiers_S_Datatype::region = cVar7;
	cVar8 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datatype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("script")), cVar1);
	android::icu::impl::ValidIdentifiers_S_Datatype::script = cVar8;
	cVar9 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datatype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("subdivision")), cVar0);
	android::icu::impl::ValidIdentifiers_S_Datatype::subdivision = cVar9;
	cVar10 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datatype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unit")), 0x5);
	android::icu::impl::ValidIdentifiers_S_Datatype::unit = cVar10;
	cVar11 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datatype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("variant")), 0x6);
	android::icu::impl::ValidIdentifiers_S_Datatype::variant = cVar11;
	cVar12 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datatype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("u")), 0x7);
	android::icu::impl::ValidIdentifiers_S_Datatype::u = cVar12;
	cVar13 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datatype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("t")), 0x8);
	android::icu::impl::ValidIdentifiers_S_Datatype::t = cVar13;
	cVar14 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datatype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("x")), 0x9);
	android::icu::impl::ValidIdentifiers_S_Datatype::x = cVar14;
	cVar15 = std::make_shared<android::icu::impl::ValidIdentifiers_S_Datatype>(std::make_shared<java::lang::String>(std::make_shared<char[]>("illegal")), 0xa);
	android::icu::impl::ValidIdentifiers_S_Datatype::illegal = cVar15;
	cVar16 = std::make_shared<std::vector<std::vector<android::icu::impl::ValidIdentifiers_S_Datatype>>>(0xb);
	cVar16[cVar4] = android::icu::impl::ValidIdentifiers_S_Datatype::currency;
	cVar16[cVar3] = android::icu::impl::ValidIdentifiers_S_Datatype::language;
	cVar16[cVar2] = android::icu::impl::ValidIdentifiers_S_Datatype::region;
	cVar16[cVar1] = android::icu::impl::ValidIdentifiers_S_Datatype::script;
	cVar16[cVar0] = android::icu::impl::ValidIdentifiers_S_Datatype::subdivision;
	cVar16[0x5] = android::icu::impl::ValidIdentifiers_S_Datatype::unit;
	cVar16[0x6] = android::icu::impl::ValidIdentifiers_S_Datatype::variant;
	cVar16[0x7] = android::icu::impl::ValidIdentifiers_S_Datatype::u;
	cVar16[0x8] = android::icu::impl::ValidIdentifiers_S_Datatype::t;
	cVar16[0x9] = android::icu::impl::ValidIdentifiers_S_Datatype::x;
	cVar16[0xa] = android::icu::impl::ValidIdentifiers_S_Datatype::illegal;
	android::icu::impl::ValidIdentifiers_S_Datatype::_S_VALUES = cVar16;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::ValidIdentifiers_S_Datatype::ValidIdentifiers_S_Datatype(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/ValidIdentifiers$Datatype;
std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> android::icu::impl::ValidIdentifiers_S_Datatype::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::ValidIdentifiers_S_Datatype(), name);
	cVar0->checkCast("android::icu::impl::ValidIdentifiers_S_Datatype");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/ValidIdentifiers$Datatype;
std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> android::icu::impl::ValidIdentifiers_S_Datatype::values()
{
	
	return android::icu::impl::ValidIdentifiers_S_Datatype::_S_VALUES;

}


