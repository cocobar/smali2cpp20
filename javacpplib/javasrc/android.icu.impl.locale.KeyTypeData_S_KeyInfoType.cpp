// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$KeyInfoType.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.KeyTypeData_S_KeyInfoType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::locale::KeyTypeData_S_KeyInfoType::_S_VALUES;
static android::icu::impl::locale::KeyTypeData_S_KeyInfoType::deprecated;
static android::icu::impl::locale::KeyTypeData_S_KeyInfoType::valueType;
// .method static constructor <clinit>()V
void android::icu::impl::locale::KeyTypeData_S_KeyInfoType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_KeyInfoType> cVar2;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_KeyInfoType> cVar3;
	std::shared<std::vector<std::vector<android::icu::impl::locale::KeyTypeData_S_KeyInfoType>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_KeyInfoType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("deprecated")), cVar1);
	android::icu::impl::locale::KeyTypeData_S_KeyInfoType::deprecated = cVar2;
	cVar3 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_KeyInfoType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("valueType")), cVar0);
	android::icu::impl::locale::KeyTypeData_S_KeyInfoType::valueType = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::impl::locale::KeyTypeData_S_KeyInfoType>>>(0x2);
	cVar4[cVar1] = android::icu::impl::locale::KeyTypeData_S_KeyInfoType::deprecated;
	cVar4[cVar0] = android::icu::impl::locale::KeyTypeData_S_KeyInfoType::valueType;
	android::icu::impl::locale::KeyTypeData_S_KeyInfoType::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::locale::KeyTypeData_S_KeyInfoType::KeyTypeData_S_KeyInfoType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/locale/KeyTypeData$KeyInfoType;
std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_KeyInfoType> android::icu::impl::locale::KeyTypeData_S_KeyInfoType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_KeyInfoType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::locale::KeyTypeData_S_KeyInfoType(), name);
	cVar0->checkCast("android::icu::impl::locale::KeyTypeData_S_KeyInfoType");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/locale/KeyTypeData$KeyInfoType;
std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_KeyInfoType> android::icu::impl::locale::KeyTypeData_S_KeyInfoType::values()
{
	
	return android::icu::impl::locale::KeyTypeData_S_KeyInfoType::_S_VALUES;

}


