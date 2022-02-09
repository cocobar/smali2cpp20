// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\GenderInfo$Gender.smali
#include "java2ctype.h"
#include "android.icu.util.GenderInfo_S_Gender.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::util::GenderInfo_S_Gender::_S_VALUES;
static android::icu::util::GenderInfo_S_Gender::FEMALE;
static android::icu::util::GenderInfo_S_Gender::MALE;
static android::icu::util::GenderInfo_S_Gender::OTHER;
// .method static constructor <clinit>()V
void android::icu::util::GenderInfo_S_Gender::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::util::GenderInfo_S_Gender> cVar3;
	std::shared_ptr<android::icu::util::GenderInfo_S_Gender> cVar4;
	std::shared_ptr<android::icu::util::GenderInfo_S_Gender> cVar5;
	std::shared<std::vector<std::vector<android::icu::util::GenderInfo_S_Gender>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<android::icu::util::GenderInfo_S_Gender>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MALE")), cVar2);
	android::icu::util::GenderInfo_S_Gender::MALE = cVar3;
	cVar4 = std::make_shared<android::icu::util::GenderInfo_S_Gender>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FEMALE")), cVar1);
	android::icu::util::GenderInfo_S_Gender::FEMALE = cVar4;
	cVar5 = std::make_shared<android::icu::util::GenderInfo_S_Gender>(std::make_shared<java::lang::String>(std::make_shared<char[]>("OTHER")), cVar0);
	android::icu::util::GenderInfo_S_Gender::OTHER = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<android::icu::util::GenderInfo_S_Gender>>>(0x3);
	cVar6[cVar2] = android::icu::util::GenderInfo_S_Gender::MALE;
	cVar6[cVar1] = android::icu::util::GenderInfo_S_Gender::FEMALE;
	cVar6[cVar0] = android::icu::util::GenderInfo_S_Gender::OTHER;
	android::icu::util::GenderInfo_S_Gender::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::util::GenderInfo_S_Gender::GenderInfo_S_Gender(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/util/GenderInfo$Gender;
std::shared_ptr<android::icu::util::GenderInfo_S_Gender> android::icu::util::GenderInfo_S_Gender::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::GenderInfo_S_Gender> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::util::GenderInfo_S_Gender(), name);
	cVar0->checkCast("android::icu::util::GenderInfo_S_Gender");
	return cVar0;

}
// .method public static values()[Landroid/icu/util/GenderInfo$Gender;
std::shared_ptr<android::icu::util::GenderInfo_S_Gender> android::icu::util::GenderInfo_S_Gender::values()
{
	
	return android::icu::util::GenderInfo_S_Gender::_S_VALUES;

}


