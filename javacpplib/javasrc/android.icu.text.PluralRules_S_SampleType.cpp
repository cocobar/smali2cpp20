// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$SampleType.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_SampleType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::PluralRules_S_SampleType::_S_VALUES;
static android::icu::text::PluralRules_S_SampleType::DECIMAL;
static android::icu::text::PluralRules_S_SampleType::INTEGER;
// .method static constructor <clinit>()V
void android::icu::text::PluralRules_S_SampleType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::PluralRules_S_SampleType> cVar2;
	std::shared_ptr<android::icu::text::PluralRules_S_SampleType> cVar3;
	std::shared<std::vector<std::vector<android::icu::text::PluralRules_S_SampleType>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::text::PluralRules_S_SampleType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("INTEGER")), cVar1);
	android::icu::text::PluralRules_S_SampleType::INTEGER = cVar2;
	cVar3 = std::make_shared<android::icu::text::PluralRules_S_SampleType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DECIMAL")), cVar0);
	android::icu::text::PluralRules_S_SampleType::DECIMAL = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::text::PluralRules_S_SampleType>>>(0x2);
	cVar4[cVar1] = android::icu::text::PluralRules_S_SampleType::INTEGER;
	cVar4[cVar0] = android::icu::text::PluralRules_S_SampleType::DECIMAL;
	android::icu::text::PluralRules_S_SampleType::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::PluralRules_S_SampleType::PluralRules_S_SampleType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/PluralRules$SampleType;
std::shared_ptr<android::icu::text::PluralRules_S_SampleType> android::icu::text::PluralRules_S_SampleType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::PluralRules_S_SampleType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::PluralRules_S_SampleType(), name);
	cVar0->checkCast("android::icu::text::PluralRules_S_SampleType");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/PluralRules$SampleType;
std::shared_ptr<android::icu::text::PluralRules_S_SampleType> android::icu::text::PluralRules_S_SampleType::values()
{
	
	return android::icu::text::PluralRules_S_SampleType::_S_VALUES;

}


