// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalFormat$CompactStyle.smali
#include "java2ctype.h"
#include "android.icu.text.CompactDecimalFormat_S_CompactStyle.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::CompactDecimalFormat_S_CompactStyle::_S_VALUES;
static android::icu::text::CompactDecimalFormat_S_CompactStyle::LONG;
static android::icu::text::CompactDecimalFormat_S_CompactStyle::SHORT;
// .method static constructor <clinit>()V
void android::icu::text::CompactDecimalFormat_S_CompactStyle::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> cVar2;
	std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> cVar3;
	std::shared<std::vector<std::vector<android::icu::text::CompactDecimalFormat_S_CompactStyle>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::text::CompactDecimalFormat_S_CompactStyle>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHORT")), cVar1);
	android::icu::text::CompactDecimalFormat_S_CompactStyle::SHORT = cVar2;
	cVar3 = std::make_shared<android::icu::text::CompactDecimalFormat_S_CompactStyle>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LONG")), cVar0);
	android::icu::text::CompactDecimalFormat_S_CompactStyle::LONG = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::text::CompactDecimalFormat_S_CompactStyle>>>(0x2);
	cVar4[cVar1] = android::icu::text::CompactDecimalFormat_S_CompactStyle::SHORT;
	cVar4[cVar0] = android::icu::text::CompactDecimalFormat_S_CompactStyle::LONG;
	android::icu::text::CompactDecimalFormat_S_CompactStyle::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::CompactDecimalFormat_S_CompactStyle::CompactDecimalFormat_S_CompactStyle(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/CompactDecimalFormat$CompactStyle;
std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> android::icu::text::CompactDecimalFormat_S_CompactStyle::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::CompactDecimalFormat_S_CompactStyle(), name);
	cVar0->checkCast("android::icu::text::CompactDecimalFormat_S_CompactStyle");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/CompactDecimalFormat$CompactStyle;
std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> android::icu::text::CompactDecimalFormat_S_CompactStyle::values()
{
	
	return android::icu::text::CompactDecimalFormat_S_CompactStyle::_S_VALUES;

}


