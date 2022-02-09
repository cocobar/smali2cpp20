// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\LocaleDisplayNames$DialectHandling.smali
#include "java2ctype.h"
#include "android.icu.text.LocaleDisplayNames_S_DialectHandling.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::LocaleDisplayNames_S_DialectHandling::_S_VALUES;
static android::icu::text::LocaleDisplayNames_S_DialectHandling::DIALECT_NAMES;
static android::icu::text::LocaleDisplayNames_S_DialectHandling::STANDARD_NAMES;
// .method static constructor <clinit>()V
void android::icu::text::LocaleDisplayNames_S_DialectHandling::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> cVar2;
	std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> cVar3;
	std::shared<std::vector<std::vector<android::icu::text::LocaleDisplayNames_S_DialectHandling>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::text::LocaleDisplayNames_S_DialectHandling>(std::make_shared<java::lang::String>(std::make_shared<char[]>("STANDARD_NAMES")), cVar1);
	android::icu::text::LocaleDisplayNames_S_DialectHandling::STANDARD_NAMES = cVar2;
	cVar3 = std::make_shared<android::icu::text::LocaleDisplayNames_S_DialectHandling>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DIALECT_NAMES")), cVar0);
	android::icu::text::LocaleDisplayNames_S_DialectHandling::DIALECT_NAMES = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::text::LocaleDisplayNames_S_DialectHandling>>>(0x2);
	cVar4[cVar1] = android::icu::text::LocaleDisplayNames_S_DialectHandling::STANDARD_NAMES;
	cVar4[cVar0] = android::icu::text::LocaleDisplayNames_S_DialectHandling::DIALECT_NAMES;
	android::icu::text::LocaleDisplayNames_S_DialectHandling::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::LocaleDisplayNames_S_DialectHandling::LocaleDisplayNames_S_DialectHandling(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/LocaleDisplayNames$DialectHandling;
std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> android::icu::text::LocaleDisplayNames_S_DialectHandling::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::LocaleDisplayNames_S_DialectHandling(), name);
	cVar0->checkCast("android::icu::text::LocaleDisplayNames_S_DialectHandling");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/LocaleDisplayNames$DialectHandling;
std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> android::icu::text::LocaleDisplayNames_S_DialectHandling::values()
{
	
	return android::icu::text::LocaleDisplayNames_S_DialectHandling::_S_VALUES;

}


