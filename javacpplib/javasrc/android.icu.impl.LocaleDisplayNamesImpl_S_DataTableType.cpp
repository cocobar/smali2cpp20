// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$DataTableType.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTableType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::_S_VALUES;
static android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::LANG;
static android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::REGION;
// .method static constructor <clinit>()V
void android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType> cVar2;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType> cVar3;
	std::shared<std::vector<std::vector<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LANG")), cVar1);
	android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::LANG = cVar2;
	cVar3 = std::make_shared<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("REGION")), cVar0);
	android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::REGION = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType>>>(0x2);
	cVar4[cVar1] = android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::LANG;
	cVar4[cVar0] = android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::REGION;
	android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::LocaleDisplayNamesImpl_S_DataTableType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/LocaleDisplayNamesImpl$DataTableType;
std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType> android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType(), name);
	cVar0->checkCast("android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/LocaleDisplayNamesImpl$DataTableType;
std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType> android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::values()
{
	
	return android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::_S_VALUES;

}


