// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$PluralType.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_PluralType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::PluralRules_S_PluralType::_S_VALUES;
static android::icu::text::PluralRules_S_PluralType::CARDINAL;
static android::icu::text::PluralRules_S_PluralType::ORDINAL;
// .method static constructor <clinit>()V
void android::icu::text::PluralRules_S_PluralType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::PluralRules_S_PluralType> cVar2;
	std::shared_ptr<android::icu::text::PluralRules_S_PluralType> cVar3;
	std::shared<std::vector<std::vector<android::icu::text::PluralRules_S_PluralType>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::text::PluralRules_S_PluralType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CARDINAL")), cVar1);
	android::icu::text::PluralRules_S_PluralType::CARDINAL = cVar2;
	cVar3 = std::make_shared<android::icu::text::PluralRules_S_PluralType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ORDINAL")), cVar0);
	android::icu::text::PluralRules_S_PluralType::ORDINAL = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::text::PluralRules_S_PluralType>>>(0x2);
	cVar4[cVar1] = android::icu::text::PluralRules_S_PluralType::CARDINAL;
	cVar4[cVar0] = android::icu::text::PluralRules_S_PluralType::ORDINAL;
	android::icu::text::PluralRules_S_PluralType::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::PluralRules_S_PluralType::PluralRules_S_PluralType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/PluralRules$PluralType;
std::shared_ptr<android::icu::text::PluralRules_S_PluralType> android::icu::text::PluralRules_S_PluralType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::PluralRules_S_PluralType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::PluralRules_S_PluralType(), name);
	cVar0->checkCast("android::icu::text::PluralRules_S_PluralType");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/PluralRules$PluralType;
std::shared_ptr<android::icu::text::PluralRules_S_PluralType> android::icu::text::PluralRules_S_PluralType::values()
{
	
	return android::icu::text::PluralRules_S_PluralType::_S_VALUES;

}


