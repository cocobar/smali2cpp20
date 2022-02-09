// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$ComparisonStyle.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_ComparisonStyle.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::UnicodeSet_S_ComparisonStyle::_S_VALUES;
static android::icu::text::UnicodeSet_S_ComparisonStyle::LEXICOGRAPHIC;
static android::icu::text::UnicodeSet_S_ComparisonStyle::LONGER_FIRST;
static android::icu::text::UnicodeSet_S_ComparisonStyle::SHORTER_FIRST;
// .method static constructor <clinit>()V
void android::icu::text::UnicodeSet_S_ComparisonStyle::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::text::UnicodeSet_S_ComparisonStyle> cVar3;
	std::shared_ptr<android::icu::text::UnicodeSet_S_ComparisonStyle> cVar4;
	std::shared_ptr<android::icu::text::UnicodeSet_S_ComparisonStyle> cVar5;
	std::shared<std::vector<std::vector<android::icu::text::UnicodeSet_S_ComparisonStyle>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<android::icu::text::UnicodeSet_S_ComparisonStyle>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHORTER_FIRST")), cVar2);
	android::icu::text::UnicodeSet_S_ComparisonStyle::SHORTER_FIRST = cVar3;
	cVar4 = std::make_shared<android::icu::text::UnicodeSet_S_ComparisonStyle>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LEXICOGRAPHIC")), cVar1);
	android::icu::text::UnicodeSet_S_ComparisonStyle::LEXICOGRAPHIC = cVar4;
	cVar5 = std::make_shared<android::icu::text::UnicodeSet_S_ComparisonStyle>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LONGER_FIRST")), cVar0);
	android::icu::text::UnicodeSet_S_ComparisonStyle::LONGER_FIRST = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<android::icu::text::UnicodeSet_S_ComparisonStyle>>>(0x3);
	cVar6[cVar2] = android::icu::text::UnicodeSet_S_ComparisonStyle::SHORTER_FIRST;
	cVar6[cVar1] = android::icu::text::UnicodeSet_S_ComparisonStyle::LEXICOGRAPHIC;
	cVar6[cVar0] = android::icu::text::UnicodeSet_S_ComparisonStyle::LONGER_FIRST;
	android::icu::text::UnicodeSet_S_ComparisonStyle::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::UnicodeSet_S_ComparisonStyle::UnicodeSet_S_ComparisonStyle(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/UnicodeSet$ComparisonStyle;
std::shared_ptr<android::icu::text::UnicodeSet_S_ComparisonStyle> android::icu::text::UnicodeSet_S_ComparisonStyle::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet_S_ComparisonStyle> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::UnicodeSet_S_ComparisonStyle(), name);
	cVar0->checkCast("android::icu::text::UnicodeSet_S_ComparisonStyle");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/UnicodeSet$ComparisonStyle;
std::shared_ptr<android::icu::text::UnicodeSet_S_ComparisonStyle> android::icu::text::UnicodeSet_S_ComparisonStyle::values()
{
	
	return android::icu::text::UnicodeSet_S_ComparisonStyle::_S_VALUES;

}


