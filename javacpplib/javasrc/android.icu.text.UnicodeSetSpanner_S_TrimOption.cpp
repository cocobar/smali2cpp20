// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSetSpanner$TrimOption.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSetSpanner_S_TrimOption.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::UnicodeSetSpanner_S_TrimOption::_S_VALUES;
static android::icu::text::UnicodeSetSpanner_S_TrimOption::BOTH;
static android::icu::text::UnicodeSetSpanner_S_TrimOption::LEADING;
static android::icu::text::UnicodeSetSpanner_S_TrimOption::TRAILING;
// .method static constructor <clinit>()V
void android::icu::text::UnicodeSetSpanner_S_TrimOption::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_TrimOption> cVar3;
	std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_TrimOption> cVar4;
	std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_TrimOption> cVar5;
	std::shared<std::vector<std::vector<android::icu::text::UnicodeSetSpanner_S_TrimOption>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<android::icu::text::UnicodeSetSpanner_S_TrimOption>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LEADING")), cVar2);
	android::icu::text::UnicodeSetSpanner_S_TrimOption::LEADING = cVar3;
	cVar4 = std::make_shared<android::icu::text::UnicodeSetSpanner_S_TrimOption>(std::make_shared<java::lang::String>(std::make_shared<char[]>("BOTH")), cVar1);
	android::icu::text::UnicodeSetSpanner_S_TrimOption::BOTH = cVar4;
	cVar5 = std::make_shared<android::icu::text::UnicodeSetSpanner_S_TrimOption>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TRAILING")), cVar0);
	android::icu::text::UnicodeSetSpanner_S_TrimOption::TRAILING = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<android::icu::text::UnicodeSetSpanner_S_TrimOption>>>(0x3);
	cVar6[cVar2] = android::icu::text::UnicodeSetSpanner_S_TrimOption::LEADING;
	cVar6[cVar1] = android::icu::text::UnicodeSetSpanner_S_TrimOption::BOTH;
	cVar6[cVar0] = android::icu::text::UnicodeSetSpanner_S_TrimOption::TRAILING;
	android::icu::text::UnicodeSetSpanner_S_TrimOption::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::UnicodeSetSpanner_S_TrimOption::UnicodeSetSpanner_S_TrimOption(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/UnicodeSetSpanner$TrimOption;
std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_TrimOption> android::icu::text::UnicodeSetSpanner_S_TrimOption::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_TrimOption> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::UnicodeSetSpanner_S_TrimOption(), name);
	cVar0->checkCast("android::icu::text::UnicodeSetSpanner_S_TrimOption");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/UnicodeSetSpanner$TrimOption;
std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_TrimOption> android::icu::text::UnicodeSetSpanner_S_TrimOption::values()
{
	
	return android::icu::text::UnicodeSetSpanner_S_TrimOption::_S_VALUES;

}


