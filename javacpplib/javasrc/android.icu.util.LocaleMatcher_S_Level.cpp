// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\LocaleMatcher$Level.smali
#include "java2ctype.h"
#include "android.icu.util.LocaleMatcher_S_Level.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::util::LocaleMatcher_S_Level::_S_VALUES;
static android::icu::util::LocaleMatcher_S_Level::language;
static android::icu::util::LocaleMatcher_S_Level::region;
static android::icu::util::LocaleMatcher_S_Level::script;
// .method static constructor <clinit>()V
void android::icu::util::LocaleMatcher_S_Level::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> cVar3;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> cVar4;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> cVar5;
	std::shared<std::vector<std::vector<android::icu::util::LocaleMatcher_S_Level>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<android::icu::util::LocaleMatcher_S_Level>(std::make_shared<java::lang::String>(std::make_shared<char[]>("language")), cVar2, 0x3fefae147ae147aeL);
	android::icu::util::LocaleMatcher_S_Level::language = cVar3;
	cVar4 = std::make_shared<android::icu::util::LocaleMatcher_S_Level>(std::make_shared<java::lang::String>(std::make_shared<char[]>("script")), cVar1, 0x3fc999999999999aL);
	android::icu::util::LocaleMatcher_S_Level::script = cVar4;
	cVar5 = std::make_shared<android::icu::util::LocaleMatcher_S_Level>(std::make_shared<java::lang::String>(std::make_shared<char[]>("region")), cVar0, 0x3fa47ae147ae147bL);
	android::icu::util::LocaleMatcher_S_Level::region = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<android::icu::util::LocaleMatcher_S_Level>>>(0x3);
	cVar6[cVar2] = android::icu::util::LocaleMatcher_S_Level::language;
	cVar6[cVar1] = android::icu::util::LocaleMatcher_S_Level::script;
	cVar6[cVar0] = android::icu::util::LocaleMatcher_S_Level::region;
	android::icu::util::LocaleMatcher_S_Level::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;ID)V
android::icu::util::LocaleMatcher_S_Level::LocaleMatcher_S_Level(std::shared_ptr<java::lang::String> var0,int var1,double d)
{
	
	//    .param p3, "d"    # D
	java::lang::Enum::(var0, var1);
	this->worst = d;
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/util/LocaleMatcher$Level;
std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> android::icu::util::LocaleMatcher_S_Level::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::util::LocaleMatcher_S_Level(), name);
	cVar0->checkCast("android::icu::util::LocaleMatcher_S_Level");
	return cVar0;

}
// .method public static values()[Landroid/icu/util/LocaleMatcher$Level;
std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> android::icu::util::LocaleMatcher_S_Level::values()
{
	
	return android::icu::util::LocaleMatcher_S_Level::_S_VALUES;

}


