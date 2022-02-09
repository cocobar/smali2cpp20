// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\GenderInfo$ListGenderStyle.smali
#include "java2ctype.h"
#include "android.icu.util.GenderInfo_S_ListGenderStyle.h"
#include "java.lang.Enum.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.HashMap.h"
#include "java.util.Map.h"

static android::icu::util::GenderInfo_S_ListGenderStyle::_S_VALUES;
static android::icu::util::GenderInfo_S_ListGenderStyle::MALE_TAINTS;
static android::icu::util::GenderInfo_S_ListGenderStyle::MIXED_NEUTRAL;
static android::icu::util::GenderInfo_S_ListGenderStyle::NEUTRAL;
static android::icu::util::GenderInfo_S_ListGenderStyle::fromNameMap;
// .method static constructor <clinit>()V
void android::icu::util::GenderInfo_S_ListGenderStyle::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> cVar4;
	std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> cVar5;
	std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> cVar6;
	std::shared<std::vector<std::vector<android::icu::util::GenderInfo_S_ListGenderStyle>>> cVar7;
	std::shared_ptr<java::util::HashMap> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::util::GenderInfo_S_ListGenderStyle>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NEUTRAL")), cVar3);
	android::icu::util::GenderInfo_S_ListGenderStyle::NEUTRAL = cVar4;
	cVar5 = std::make_shared<android::icu::util::GenderInfo_S_ListGenderStyle>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MIXED_NEUTRAL")), cVar2);
	android::icu::util::GenderInfo_S_ListGenderStyle::MIXED_NEUTRAL = cVar5;
	cVar6 = std::make_shared<android::icu::util::GenderInfo_S_ListGenderStyle>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MALE_TAINTS")), cVar1);
	android::icu::util::GenderInfo_S_ListGenderStyle::MALE_TAINTS = cVar6;
	cVar7 = std::make_shared<std::vector<std::vector<android::icu::util::GenderInfo_S_ListGenderStyle>>>(cVar0);
	cVar7[cVar3] = android::icu::util::GenderInfo_S_ListGenderStyle::NEUTRAL;
	cVar7[cVar2] = android::icu::util::GenderInfo_S_ListGenderStyle::MIXED_NEUTRAL;
	cVar7[cVar1] = android::icu::util::GenderInfo_S_ListGenderStyle::MALE_TAINTS;
	android::icu::util::GenderInfo_S_ListGenderStyle::_S_VALUES = cVar7;
	cVar8 = std::make_shared<java::util::HashMap>(cVar0);
	android::icu::util::GenderInfo_S_ListGenderStyle::fromNameMap = cVar8;
	android::icu::util::GenderInfo_S_ListGenderStyle::fromNameMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("neutral")), android::icu::util::GenderInfo_S_ListGenderStyle::NEUTRAL);
	android::icu::util::GenderInfo_S_ListGenderStyle::fromNameMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("maleTaints")), android::icu::util::GenderInfo_S_ListGenderStyle::MALE_TAINTS);
	android::icu::util::GenderInfo_S_ListGenderStyle::fromNameMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("mixedNeutral")), android::icu::util::GenderInfo_S_ListGenderStyle::MIXED_NEUTRAL);
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::util::GenderInfo_S_ListGenderStyle::GenderInfo_S_ListGenderStyle(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static fromName(Ljava/lang/String;)Landroid/icu/util/GenderInfo$ListGenderStyle;
std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> android::icu::util::GenderInfo_S_ListGenderStyle::fromName(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> result;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 173    .end annotation
	result = android::icu::util::GenderInfo_S_ListGenderStyle::fromNameMap->get(name);
	result->checkCast("android::icu::util::GenderInfo_S_ListGenderStyle");
	//    .local v0, "result":Landroid/icu/util/GenderInfo$ListGenderStyle;
	if ( result )     
		goto label_cond_24;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown gender style name: ")))->append(name)->toString());
	// throw
	throw cVar0;
	// 214    .line 143
label_cond_24:
	return result;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/util/GenderInfo$ListGenderStyle;
std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> android::icu::util::GenderInfo_S_ListGenderStyle::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::util::GenderInfo_S_ListGenderStyle(), name);
	cVar0->checkCast("android::icu::util::GenderInfo_S_ListGenderStyle");
	return cVar0;

}
// .method public static values()[Landroid/icu/util/GenderInfo$ListGenderStyle;
std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> android::icu::util::GenderInfo_S_ListGenderStyle::values()
{
	
	return android::icu::util::GenderInfo_S_ListGenderStyle::_S_VALUES;

}


