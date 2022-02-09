// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$ValueType.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.KeyTypeData_S_ValueType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::locale::KeyTypeData_S_ValueType::_S_VALUES;
static android::icu::impl::locale::KeyTypeData_S_ValueType::any;
static android::icu::impl::locale::KeyTypeData_S_ValueType::incremental;
static android::icu::impl::locale::KeyTypeData_S_ValueType::multiple;
static android::icu::impl::locale::KeyTypeData_S_ValueType::single;
// .method static constructor <clinit>()V
void android::icu::impl::locale::KeyTypeData_S_ValueType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> cVar4;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> cVar5;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> cVar6;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> cVar7;
	std::shared<std::vector<std::vector<android::icu::impl::locale::KeyTypeData_S_ValueType>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_ValueType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("single")), cVar3);
	android::icu::impl::locale::KeyTypeData_S_ValueType::single = cVar4;
	cVar5 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_ValueType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("multiple")), cVar2);
	android::icu::impl::locale::KeyTypeData_S_ValueType::multiple = cVar5;
	cVar6 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_ValueType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("incremental")), cVar1);
	android::icu::impl::locale::KeyTypeData_S_ValueType::incremental = cVar6;
	cVar7 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_ValueType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("any")), cVar0);
	android::icu::impl::locale::KeyTypeData_S_ValueType::any = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<android::icu::impl::locale::KeyTypeData_S_ValueType>>>(0x4);
	cVar8[cVar3] = android::icu::impl::locale::KeyTypeData_S_ValueType::single;
	cVar8[cVar2] = android::icu::impl::locale::KeyTypeData_S_ValueType::multiple;
	cVar8[cVar1] = android::icu::impl::locale::KeyTypeData_S_ValueType::incremental;
	cVar8[cVar0] = android::icu::impl::locale::KeyTypeData_S_ValueType::any;
	android::icu::impl::locale::KeyTypeData_S_ValueType::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::locale::KeyTypeData_S_ValueType::KeyTypeData_S_ValueType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/locale/KeyTypeData$ValueType;
std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> android::icu::impl::locale::KeyTypeData_S_ValueType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::locale::KeyTypeData_S_ValueType(), name);
	cVar0->checkCast("android::icu::impl::locale::KeyTypeData_S_ValueType");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/locale/KeyTypeData$ValueType;
std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> android::icu::impl::locale::KeyTypeData_S_ValueType::values()
{
	
	return android::icu::impl::locale::KeyTypeData_S_ValueType::_S_VALUES;

}


