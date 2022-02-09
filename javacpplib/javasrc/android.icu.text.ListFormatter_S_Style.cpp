// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ListFormatter$Style.smali
#include "java2ctype.h"
#include "android.icu.text.ListFormatter_S_Style.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::ListFormatter_S_Style::_S_VALUES;
static android::icu::text::ListFormatter_S_Style::DURATION;
static android::icu::text::ListFormatter_S_Style::DURATION_NARROW;
static android::icu::text::ListFormatter_S_Style::DURATION_SHORT;
static android::icu::text::ListFormatter_S_Style::STANDARD;
// .method static constructor <clinit>()V
void android::icu::text::ListFormatter_S_Style::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::text::ListFormatter_S_Style> cVar4;
	std::shared_ptr<android::icu::text::ListFormatter_S_Style> cVar5;
	std::shared_ptr<android::icu::text::ListFormatter_S_Style> cVar6;
	std::shared_ptr<android::icu::text::ListFormatter_S_Style> cVar7;
	std::shared<std::vector<std::vector<android::icu::text::ListFormatter_S_Style>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::text::ListFormatter_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("STANDARD")), cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("standard")));
	android::icu::text::ListFormatter_S_Style::STANDARD = cVar4;
	cVar5 = std::make_shared<android::icu::text::ListFormatter_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DURATION")), cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("unit")));
	android::icu::text::ListFormatter_S_Style::DURATION = cVar5;
	cVar6 = std::make_shared<android::icu::text::ListFormatter_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DURATION_SHORT")), cVar1, std::make_shared<java::lang::String>(std::make_shared<char[]>("unit-short")));
	android::icu::text::ListFormatter_S_Style::DURATION_SHORT = cVar6;
	cVar7 = std::make_shared<android::icu::text::ListFormatter_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DURATION_NARROW")), cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("unit-narrow")));
	android::icu::text::ListFormatter_S_Style::DURATION_NARROW = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<android::icu::text::ListFormatter_S_Style>>>(0x4);
	cVar8[cVar3] = android::icu::text::ListFormatter_S_Style::STANDARD;
	cVar8[cVar2] = android::icu::text::ListFormatter_S_Style::DURATION;
	cVar8[cVar1] = android::icu::text::ListFormatter_S_Style::DURATION_SHORT;
	cVar8[cVar0] = android::icu::text::ListFormatter_S_Style::DURATION_NARROW;
	android::icu::text::ListFormatter_S_Style::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;ILjava/lang/String;)V
android::icu::text::ListFormatter_S_Style::ListFormatter_S_Style(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<java::lang::String> name)
{
	
	//    .param p3, "name"    # Ljava/lang/String;
	java::lang::Enum::(var0, var1);
	this->name = name;
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/ListFormatter$Style;
std::shared_ptr<android::icu::text::ListFormatter_S_Style> android::icu::text::ListFormatter_S_Style::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::ListFormatter_S_Style> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::ListFormatter_S_Style(), name);
	cVar0->checkCast("android::icu::text::ListFormatter_S_Style");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/ListFormatter$Style;
std::shared_ptr<android::icu::text::ListFormatter_S_Style> android::icu::text::ListFormatter_S_Style::values()
{
	
	return android::icu::text::ListFormatter_S_Style::_S_VALUES;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ListFormatter_S_Style::getName()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 199    .end annotation
	return this->name;

}


