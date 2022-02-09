// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$TypeInfoType.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.KeyTypeData_S_TypeInfoType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::locale::KeyTypeData_S_TypeInfoType::_S_VALUES;
static android::icu::impl::locale::KeyTypeData_S_TypeInfoType::deprecated;
// .method static constructor <clinit>()V
void android::icu::impl::locale::KeyTypeData_S_TypeInfoType::static_cinit()
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_TypeInfoType> cVar1;
	std::shared<std::vector<std::vector<android::icu::impl::locale::KeyTypeData_S_TypeInfoType>>> cVar2;
	
	cVar0 = 0x0;
	cVar1 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_TypeInfoType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("deprecated")), cVar0);
	android::icu::impl::locale::KeyTypeData_S_TypeInfoType::deprecated = cVar1;
	cVar2 = std::make_shared<std::vector<std::vector<android::icu::impl::locale::KeyTypeData_S_TypeInfoType>>>(0x1);
	cVar2[cVar0] = android::icu::impl::locale::KeyTypeData_S_TypeInfoType::deprecated;
	android::icu::impl::locale::KeyTypeData_S_TypeInfoType::_S_VALUES = cVar2;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::locale::KeyTypeData_S_TypeInfoType::KeyTypeData_S_TypeInfoType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/locale/KeyTypeData$TypeInfoType;
std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_TypeInfoType> android::icu::impl::locale::KeyTypeData_S_TypeInfoType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_TypeInfoType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::locale::KeyTypeData_S_TypeInfoType(), name);
	cVar0->checkCast("android::icu::impl::locale::KeyTypeData_S_TypeInfoType");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/locale/KeyTypeData$TypeInfoType;
std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_TypeInfoType> android::icu::impl::locale::KeyTypeData_S_TypeInfoType::values()
{
	
	return android::icu::impl::locale::KeyTypeData_S_TypeInfoType::_S_VALUES;

}


