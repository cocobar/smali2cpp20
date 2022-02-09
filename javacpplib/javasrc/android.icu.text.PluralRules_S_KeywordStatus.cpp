// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$KeywordStatus.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_KeywordStatus.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::PluralRules_S_KeywordStatus::_S_VALUES;
static android::icu::text::PluralRules_S_KeywordStatus::BOUNDED;
static android::icu::text::PluralRules_S_KeywordStatus::INVALID;
static android::icu::text::PluralRules_S_KeywordStatus::SUPPRESSED;
static android::icu::text::PluralRules_S_KeywordStatus::UNBOUNDED;
static android::icu::text::PluralRules_S_KeywordStatus::UNIQUE;
// .method static constructor <clinit>()V
void android::icu::text::PluralRules_S_KeywordStatus::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> cVar5;
	std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> cVar6;
	std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> cVar7;
	std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> cVar8;
	std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> cVar9;
	std::shared<std::vector<std::vector<android::icu::text::PluralRules_S_KeywordStatus>>> cVar10;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::PluralRules_S_KeywordStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("INVALID")), cVar4);
	android::icu::text::PluralRules_S_KeywordStatus::INVALID = cVar5;
	cVar6 = std::make_shared<android::icu::text::PluralRules_S_KeywordStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SUPPRESSED")), cVar3);
	android::icu::text::PluralRules_S_KeywordStatus::SUPPRESSED = cVar6;
	cVar7 = std::make_shared<android::icu::text::PluralRules_S_KeywordStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UNIQUE")), cVar2);
	android::icu::text::PluralRules_S_KeywordStatus::UNIQUE = cVar7;
	cVar8 = std::make_shared<android::icu::text::PluralRules_S_KeywordStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("BOUNDED")), cVar1);
	android::icu::text::PluralRules_S_KeywordStatus::BOUNDED = cVar8;
	cVar9 = std::make_shared<android::icu::text::PluralRules_S_KeywordStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UNBOUNDED")), cVar0);
	android::icu::text::PluralRules_S_KeywordStatus::UNBOUNDED = cVar9;
	cVar10 = std::make_shared<std::vector<std::vector<android::icu::text::PluralRules_S_KeywordStatus>>>(0x5);
	cVar10[cVar4] = android::icu::text::PluralRules_S_KeywordStatus::INVALID;
	cVar10[cVar3] = android::icu::text::PluralRules_S_KeywordStatus::SUPPRESSED;
	cVar10[cVar2] = android::icu::text::PluralRules_S_KeywordStatus::UNIQUE;
	cVar10[cVar1] = android::icu::text::PluralRules_S_KeywordStatus::BOUNDED;
	cVar10[cVar0] = android::icu::text::PluralRules_S_KeywordStatus::UNBOUNDED;
	android::icu::text::PluralRules_S_KeywordStatus::_S_VALUES = cVar10;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::PluralRules_S_KeywordStatus::PluralRules_S_KeywordStatus(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/PluralRules$KeywordStatus;
std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> android::icu::text::PluralRules_S_KeywordStatus::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::PluralRules_S_KeywordStatus(), name);
	cVar0->checkCast("android::icu::text::PluralRules_S_KeywordStatus");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/PluralRules$KeywordStatus;
std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> android::icu::text::PluralRules_S_KeywordStatus::values()
{
	
	return android::icu::text::PluralRules_S_KeywordStatus::_S_VALUES;

}


