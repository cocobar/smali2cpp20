// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\UResourceBundle$RootType.smali
#include "java2ctype.h"
#include "android.icu.util.UResourceBundle_S_RootType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::util::UResourceBundle_S_RootType::_S_VALUES;
static android::icu::util::UResourceBundle_S_RootType::ICU;
static android::icu::util::UResourceBundle_S_RootType::JAVA;
static android::icu::util::UResourceBundle_S_RootType::MISSING;
// .method static constructor <clinit>()V
void android::icu::util::UResourceBundle_S_RootType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> cVar3;
	std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> cVar4;
	std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> cVar5;
	std::shared<std::vector<std::vector<android::icu::util::UResourceBundle_S_RootType>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<android::icu::util::UResourceBundle_S_RootType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MISSING")), cVar2);
	android::icu::util::UResourceBundle_S_RootType::MISSING = cVar3;
	cVar4 = std::make_shared<android::icu::util::UResourceBundle_S_RootType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ICU")), cVar1);
	android::icu::util::UResourceBundle_S_RootType::ICU = cVar4;
	cVar5 = std::make_shared<android::icu::util::UResourceBundle_S_RootType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("JAVA")), cVar0);
	android::icu::util::UResourceBundle_S_RootType::JAVA = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<android::icu::util::UResourceBundle_S_RootType>>>(0x3);
	cVar6[cVar2] = android::icu::util::UResourceBundle_S_RootType::MISSING;
	cVar6[cVar1] = android::icu::util::UResourceBundle_S_RootType::ICU;
	cVar6[cVar0] = android::icu::util::UResourceBundle_S_RootType::JAVA;
	android::icu::util::UResourceBundle_S_RootType::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::util::UResourceBundle_S_RootType::UResourceBundle_S_RootType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/util/UResourceBundle$RootType;
std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> android::icu::util::UResourceBundle_S_RootType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::util::UResourceBundle_S_RootType(), name);
	cVar0->checkCast("android::icu::util::UResourceBundle_S_RootType");
	return cVar0;

}
// .method public static values()[Landroid/icu/util/UResourceBundle$RootType;
std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> android::icu::util::UResourceBundle_S_RootType::values()
{
	
	return android::icu::util::UResourceBundle_S_RootType::_S_VALUES;

}


