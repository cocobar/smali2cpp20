// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationRuleParser$Position.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationRuleParser_S_Position.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::coll::CollationRuleParser_S_Position::_S_VALUES;
static android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_IMPLICIT;
static android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_PRIMARY_IGNORABLE;
static android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_REGULAR;
static android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_SECONDARY_IGNORABLE;
static android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_TERTIARY_IGNORABLE;
static android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_TRAILING;
static android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_VARIABLE;
static android::icu::impl::coll::CollationRuleParser_S_Position::LAST_IMPLICIT;
static android::icu::impl::coll::CollationRuleParser_S_Position::LAST_PRIMARY_IGNORABLE;
static android::icu::impl::coll::CollationRuleParser_S_Position::LAST_REGULAR;
static android::icu::impl::coll::CollationRuleParser_S_Position::LAST_SECONDARY_IGNORABLE;
static android::icu::impl::coll::CollationRuleParser_S_Position::LAST_TERTIARY_IGNORABLE;
static android::icu::impl::coll::CollationRuleParser_S_Position::LAST_TRAILING;
static android::icu::impl::coll::CollationRuleParser_S_Position::LAST_VARIABLE;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationRuleParser_S_Position::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> cVar5;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> cVar6;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> cVar7;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> cVar8;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> cVar9;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> cVar10;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> cVar11;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> cVar12;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> cVar13;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> cVar14;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> cVar15;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> cVar16;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> cVar17;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> cVar18;
	std::shared<std::vector<std::vector<android::icu::impl::coll::CollationRuleParser_S_Position>>> cVar19;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::impl::coll::CollationRuleParser_S_Position>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FIRST_TERTIARY_IGNORABLE")), cVar4);
	android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_TERTIARY_IGNORABLE = cVar5;
	cVar6 = std::make_shared<android::icu::impl::coll::CollationRuleParser_S_Position>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LAST_TERTIARY_IGNORABLE")), cVar3);
	android::icu::impl::coll::CollationRuleParser_S_Position::LAST_TERTIARY_IGNORABLE = cVar6;
	cVar7 = std::make_shared<android::icu::impl::coll::CollationRuleParser_S_Position>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FIRST_SECONDARY_IGNORABLE")), cVar2);
	android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_SECONDARY_IGNORABLE = cVar7;
	cVar8 = std::make_shared<android::icu::impl::coll::CollationRuleParser_S_Position>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LAST_SECONDARY_IGNORABLE")), cVar1);
	android::icu::impl::coll::CollationRuleParser_S_Position::LAST_SECONDARY_IGNORABLE = cVar8;
	cVar9 = std::make_shared<android::icu::impl::coll::CollationRuleParser_S_Position>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FIRST_PRIMARY_IGNORABLE")), cVar0);
	android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_PRIMARY_IGNORABLE = cVar9;
	cVar10 = std::make_shared<android::icu::impl::coll::CollationRuleParser_S_Position>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LAST_PRIMARY_IGNORABLE")), 0x5);
	android::icu::impl::coll::CollationRuleParser_S_Position::LAST_PRIMARY_IGNORABLE = cVar10;
	cVar11 = std::make_shared<android::icu::impl::coll::CollationRuleParser_S_Position>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FIRST_VARIABLE")), 0x6);
	android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_VARIABLE = cVar11;
	cVar12 = std::make_shared<android::icu::impl::coll::CollationRuleParser_S_Position>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LAST_VARIABLE")), 0x7);
	android::icu::impl::coll::CollationRuleParser_S_Position::LAST_VARIABLE = cVar12;
	cVar13 = std::make_shared<android::icu::impl::coll::CollationRuleParser_S_Position>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FIRST_REGULAR")), 0x8);
	android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_REGULAR = cVar13;
	cVar14 = std::make_shared<android::icu::impl::coll::CollationRuleParser_S_Position>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LAST_REGULAR")), 0x9);
	android::icu::impl::coll::CollationRuleParser_S_Position::LAST_REGULAR = cVar14;
	cVar15 = std::make_shared<android::icu::impl::coll::CollationRuleParser_S_Position>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FIRST_IMPLICIT")), 0xa);
	android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_IMPLICIT = cVar15;
	cVar16 = std::make_shared<android::icu::impl::coll::CollationRuleParser_S_Position>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LAST_IMPLICIT")), 0xb);
	android::icu::impl::coll::CollationRuleParser_S_Position::LAST_IMPLICIT = cVar16;
	cVar17 = std::make_shared<android::icu::impl::coll::CollationRuleParser_S_Position>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FIRST_TRAILING")), 0xc);
	android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_TRAILING = cVar17;
	cVar18 = std::make_shared<android::icu::impl::coll::CollationRuleParser_S_Position>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LAST_TRAILING")), 0xd);
	android::icu::impl::coll::CollationRuleParser_S_Position::LAST_TRAILING = cVar18;
	cVar19 = std::make_shared<std::vector<std::vector<android::icu::impl::coll::CollationRuleParser_S_Position>>>(0xe);
	cVar19[cVar4] = android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_TERTIARY_IGNORABLE;
	cVar19[cVar3] = android::icu::impl::coll::CollationRuleParser_S_Position::LAST_TERTIARY_IGNORABLE;
	cVar19[cVar2] = android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_SECONDARY_IGNORABLE;
	cVar19[cVar1] = android::icu::impl::coll::CollationRuleParser_S_Position::LAST_SECONDARY_IGNORABLE;
	cVar19[cVar0] = android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_PRIMARY_IGNORABLE;
	cVar19[0x5] = android::icu::impl::coll::CollationRuleParser_S_Position::LAST_PRIMARY_IGNORABLE;
	cVar19[0x6] = android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_VARIABLE;
	cVar19[0x7] = android::icu::impl::coll::CollationRuleParser_S_Position::LAST_VARIABLE;
	cVar19[0x8] = android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_REGULAR;
	cVar19[0x9] = android::icu::impl::coll::CollationRuleParser_S_Position::LAST_REGULAR;
	cVar19[0xa] = android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_IMPLICIT;
	cVar19[0xb] = android::icu::impl::coll::CollationRuleParser_S_Position::LAST_IMPLICIT;
	cVar19[0xc] = android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_TRAILING;
	cVar19[0xd] = android::icu::impl::coll::CollationRuleParser_S_Position::LAST_TRAILING;
	android::icu::impl::coll::CollationRuleParser_S_Position::_S_VALUES = cVar19;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::coll::CollationRuleParser_S_Position::CollationRuleParser_S_Position(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/coll/CollationRuleParser$Position;
std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> android::icu::impl::coll::CollationRuleParser_S_Position::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::coll::CollationRuleParser_S_Position(), name);
	cVar0->checkCast("android::icu::impl::coll::CollationRuleParser_S_Position");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/coll/CollationRuleParser$Position;
std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> android::icu::impl::coll::CollationRuleParser_S_Position::values()
{
	
	return android::icu::impl::coll::CollationRuleParser_S_Position::_S_VALUES;

}


