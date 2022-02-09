// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$Operand.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_Operand.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::PluralRules_S_Operand::_S_VALUES;
static android::icu::text::PluralRules_S_Operand::f;
static android::icu::text::PluralRules_S_Operand::i;
static android::icu::text::PluralRules_S_Operand::j;
static android::icu::text::PluralRules_S_Operand::n;
static android::icu::text::PluralRules_S_Operand::t;
static android::icu::text::PluralRules_S_Operand::v;
static android::icu::text::PluralRules_S_Operand::w;
// .method static constructor <clinit>()V
void android::icu::text::PluralRules_S_Operand::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::PluralRules_S_Operand> cVar5;
	std::shared_ptr<android::icu::text::PluralRules_S_Operand> cVar6;
	std::shared_ptr<android::icu::text::PluralRules_S_Operand> cVar7;
	std::shared_ptr<android::icu::text::PluralRules_S_Operand> cVar8;
	std::shared_ptr<android::icu::text::PluralRules_S_Operand> cVar9;
	std::shared_ptr<android::icu::text::PluralRules_S_Operand> cVar10;
	std::shared_ptr<android::icu::text::PluralRules_S_Operand> cVar11;
	std::shared<std::vector<std::vector<android::icu::text::PluralRules_S_Operand>>> cVar12;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::PluralRules_S_Operand>(std::make_shared<java::lang::String>(std::make_shared<char[]>("n")), cVar4);
	android::icu::text::PluralRules_S_Operand::n = cVar5;
	cVar6 = std::make_shared<android::icu::text::PluralRules_S_Operand>(std::make_shared<java::lang::String>(std::make_shared<char[]>("i")), cVar3);
	android::icu::text::PluralRules_S_Operand::i = cVar6;
	cVar7 = std::make_shared<android::icu::text::PluralRules_S_Operand>(std::make_shared<java::lang::String>(std::make_shared<char[]>("f")), cVar2);
	android::icu::text::PluralRules_S_Operand::f = cVar7;
	cVar8 = std::make_shared<android::icu::text::PluralRules_S_Operand>(std::make_shared<java::lang::String>(std::make_shared<char[]>("t")), cVar1);
	android::icu::text::PluralRules_S_Operand::t = cVar8;
	cVar9 = std::make_shared<android::icu::text::PluralRules_S_Operand>(std::make_shared<java::lang::String>(std::make_shared<char[]>("v")), cVar0);
	android::icu::text::PluralRules_S_Operand::v = cVar9;
	cVar10 = std::make_shared<android::icu::text::PluralRules_S_Operand>(std::make_shared<java::lang::String>(std::make_shared<char[]>("w")), 0x5);
	android::icu::text::PluralRules_S_Operand::w = cVar10;
	cVar11 = std::make_shared<android::icu::text::PluralRules_S_Operand>(std::make_shared<java::lang::String>(std::make_shared<char[]>("j")), 0x6);
	android::icu::text::PluralRules_S_Operand::j = cVar11;
	cVar12 = std::make_shared<std::vector<std::vector<android::icu::text::PluralRules_S_Operand>>>(0x7);
	cVar12[cVar4] = android::icu::text::PluralRules_S_Operand::n;
	cVar12[cVar3] = android::icu::text::PluralRules_S_Operand::i;
	cVar12[cVar2] = android::icu::text::PluralRules_S_Operand::f;
	cVar12[cVar1] = android::icu::text::PluralRules_S_Operand::t;
	cVar12[cVar0] = android::icu::text::PluralRules_S_Operand::v;
	cVar12[0x5] = android::icu::text::PluralRules_S_Operand::w;
	cVar12[0x6] = android::icu::text::PluralRules_S_Operand::j;
	android::icu::text::PluralRules_S_Operand::_S_VALUES = cVar12;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::PluralRules_S_Operand::PluralRules_S_Operand(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/PluralRules$Operand;
std::shared_ptr<android::icu::text::PluralRules_S_Operand> android::icu::text::PluralRules_S_Operand::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::PluralRules_S_Operand> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::PluralRules_S_Operand(), name);
	cVar0->checkCast("android::icu::text::PluralRules_S_Operand");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/PluralRules$Operand;
std::shared_ptr<android::icu::text::PluralRules_S_Operand> android::icu::text::PluralRules_S_Operand::values()
{
	
	return android::icu::text::PluralRules_S_Operand::_S_VALUES;

}


