// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$RestrictionLevel.smali
#include "java2ctype.h"
#include "android.icu.text.SpoofChecker_S_RestrictionLevel.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::SpoofChecker_S_RestrictionLevel::_S_VALUES;
static android::icu::text::SpoofChecker_S_RestrictionLevel::ASCII;
static android::icu::text::SpoofChecker_S_RestrictionLevel::HIGHLY_RESTRICTIVE;
static android::icu::text::SpoofChecker_S_RestrictionLevel::MINIMALLY_RESTRICTIVE;
static android::icu::text::SpoofChecker_S_RestrictionLevel::MODERATELY_RESTRICTIVE;
static android::icu::text::SpoofChecker_S_RestrictionLevel::SINGLE_SCRIPT_RESTRICTIVE;
static android::icu::text::SpoofChecker_S_RestrictionLevel::UNRESTRICTIVE;
// .method static constructor <clinit>()V
void android::icu::text::SpoofChecker_S_RestrictionLevel::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> cVar5;
	std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> cVar6;
	std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> cVar7;
	std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> cVar8;
	std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> cVar9;
	std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> cVar10;
	std::shared<std::vector<std::vector<android::icu::text::SpoofChecker_S_RestrictionLevel>>> cVar11;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::SpoofChecker_S_RestrictionLevel>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ASCII")), cVar4);
	android::icu::text::SpoofChecker_S_RestrictionLevel::ASCII = cVar5;
	cVar6 = std::make_shared<android::icu::text::SpoofChecker_S_RestrictionLevel>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SINGLE_SCRIPT_RESTRICTIVE")), cVar3);
	android::icu::text::SpoofChecker_S_RestrictionLevel::SINGLE_SCRIPT_RESTRICTIVE = cVar6;
	cVar7 = std::make_shared<android::icu::text::SpoofChecker_S_RestrictionLevel>(std::make_shared<java::lang::String>(std::make_shared<char[]>("HIGHLY_RESTRICTIVE")), cVar2);
	android::icu::text::SpoofChecker_S_RestrictionLevel::HIGHLY_RESTRICTIVE = cVar7;
	cVar8 = std::make_shared<android::icu::text::SpoofChecker_S_RestrictionLevel>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MODERATELY_RESTRICTIVE")), cVar1);
	android::icu::text::SpoofChecker_S_RestrictionLevel::MODERATELY_RESTRICTIVE = cVar8;
	cVar9 = std::make_shared<android::icu::text::SpoofChecker_S_RestrictionLevel>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MINIMALLY_RESTRICTIVE")), cVar0);
	android::icu::text::SpoofChecker_S_RestrictionLevel::MINIMALLY_RESTRICTIVE = cVar9;
	cVar10 = std::make_shared<android::icu::text::SpoofChecker_S_RestrictionLevel>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UNRESTRICTIVE")), 0x5);
	android::icu::text::SpoofChecker_S_RestrictionLevel::UNRESTRICTIVE = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<android::icu::text::SpoofChecker_S_RestrictionLevel>>>(0x6);
	cVar11[cVar4] = android::icu::text::SpoofChecker_S_RestrictionLevel::ASCII;
	cVar11[cVar3] = android::icu::text::SpoofChecker_S_RestrictionLevel::SINGLE_SCRIPT_RESTRICTIVE;
	cVar11[cVar2] = android::icu::text::SpoofChecker_S_RestrictionLevel::HIGHLY_RESTRICTIVE;
	cVar11[cVar1] = android::icu::text::SpoofChecker_S_RestrictionLevel::MODERATELY_RESTRICTIVE;
	cVar11[cVar0] = android::icu::text::SpoofChecker_S_RestrictionLevel::MINIMALLY_RESTRICTIVE;
	cVar11[0x5] = android::icu::text::SpoofChecker_S_RestrictionLevel::UNRESTRICTIVE;
	android::icu::text::SpoofChecker_S_RestrictionLevel::_S_VALUES = cVar11;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::SpoofChecker_S_RestrictionLevel::SpoofChecker_S_RestrictionLevel(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/SpoofChecker$RestrictionLevel;
std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> android::icu::text::SpoofChecker_S_RestrictionLevel::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::SpoofChecker_S_RestrictionLevel(), name);
	cVar0->checkCast("android::icu::text::SpoofChecker_S_RestrictionLevel");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/SpoofChecker$RestrictionLevel;
std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> android::icu::text::SpoofChecker_S_RestrictionLevel::values()
{
	
	return android::icu::text::SpoofChecker_S_RestrictionLevel::_S_VALUES;

}


