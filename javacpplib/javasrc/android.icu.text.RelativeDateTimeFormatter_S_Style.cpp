// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$Style.smali
#include "java2ctype.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Style.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::RelativeDateTimeFormatter_S_Style::_S_VALUES;
static android::icu::text::RelativeDateTimeFormatter_S_Style::INDEX_COUNT = 0x3;
static android::icu::text::RelativeDateTimeFormatter_S_Style::LONG;
static android::icu::text::RelativeDateTimeFormatter_S_Style::NARROW;
static android::icu::text::RelativeDateTimeFormatter_S_Style::SHORT;
// .method static constructor <clinit>()V
void android::icu::text::RelativeDateTimeFormatter_S_Style::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> cVar3;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> cVar4;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> cVar5;
	std::shared<std::vector<std::vector<android::icu::text::RelativeDateTimeFormatter_S_Style>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LONG")), cVar2);
	android::icu::text::RelativeDateTimeFormatter_S_Style::LONG = cVar3;
	cVar4 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHORT")), cVar1);
	android::icu::text::RelativeDateTimeFormatter_S_Style::SHORT = cVar4;
	cVar5 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NARROW")), cVar0);
	android::icu::text::RelativeDateTimeFormatter_S_Style::NARROW = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<android::icu::text::RelativeDateTimeFormatter_S_Style>>>(0x3);
	cVar6[cVar2] = android::icu::text::RelativeDateTimeFormatter_S_Style::LONG;
	cVar6[cVar1] = android::icu::text::RelativeDateTimeFormatter_S_Style::SHORT;
	cVar6[cVar0] = android::icu::text::RelativeDateTimeFormatter_S_Style::NARROW;
	android::icu::text::RelativeDateTimeFormatter_S_Style::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::RelativeDateTimeFormatter_S_Style::RelativeDateTimeFormatter_S_Style(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$Style;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> android::icu::text::RelativeDateTimeFormatter_S_Style::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::RelativeDateTimeFormatter_S_Style(), name);
	cVar0->checkCast("android::icu::text::RelativeDateTimeFormatter_S_Style");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/RelativeDateTimeFormatter$Style;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> android::icu::text::RelativeDateTimeFormatter_S_Style::values()
{
	
	return android::icu::text::RelativeDateTimeFormatter_S_Style::_S_VALUES;

}


