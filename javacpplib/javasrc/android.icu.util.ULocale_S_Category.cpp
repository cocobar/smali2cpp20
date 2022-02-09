// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale$Category.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::util::ULocale_S_Category::_S_VALUES;
static android::icu::util::ULocale_S_Category::DISPLAY;
static android::icu::util::ULocale_S_Category::FORMAT;
// .method static constructor <clinit>()V
void android::icu::util::ULocale_S_Category::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::util::ULocale_S_Category> cVar2;
	std::shared_ptr<android::icu::util::ULocale_S_Category> cVar3;
	std::shared<std::vector<std::vector<android::icu::util::ULocale_S_Category>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::util::ULocale_S_Category>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DISPLAY")), cVar1);
	android::icu::util::ULocale_S_Category::DISPLAY = cVar2;
	cVar3 = std::make_shared<android::icu::util::ULocale_S_Category>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FORMAT")), cVar0);
	android::icu::util::ULocale_S_Category::FORMAT = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::util::ULocale_S_Category>>>(0x2);
	cVar4[cVar1] = android::icu::util::ULocale_S_Category::DISPLAY;
	cVar4[cVar0] = android::icu::util::ULocale_S_Category::FORMAT;
	android::icu::util::ULocale_S_Category::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::util::ULocale_S_Category::ULocale_S_Category(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/util/ULocale$Category;
std::shared_ptr<android::icu::util::ULocale_S_Category> android::icu::util::ULocale_S_Category::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::ULocale_S_Category> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::util::ULocale_S_Category(), name);
	cVar0->checkCast("android::icu::util::ULocale_S_Category");
	return cVar0;

}
// .method public static values()[Landroid/icu/util/ULocale$Category;
std::shared_ptr<android::icu::util::ULocale_S_Category> android::icu::util::ULocale_S_Category::values()
{
	
	return android::icu::util::ULocale_S_Category::_S_VALUES;

}


