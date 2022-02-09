// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$State.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_State.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::util::StringTrieBuilder_S_State::_S_VALUES;
static android::icu::util::StringTrieBuilder_S_State::ADDING;
static android::icu::util::StringTrieBuilder_S_State::BUILDING_FAST;
static android::icu::util::StringTrieBuilder_S_State::BUILDING_SMALL;
static android::icu::util::StringTrieBuilder_S_State::BUILT;
// .method static constructor <clinit>()V
void android::icu::util::StringTrieBuilder_S_State::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_State> cVar4;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_State> cVar5;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_State> cVar6;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_State> cVar7;
	std::shared<std::vector<std::vector<android::icu::util::StringTrieBuilder_S_State>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::util::StringTrieBuilder_S_State>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ADDING")), cVar3);
	android::icu::util::StringTrieBuilder_S_State::ADDING = cVar4;
	cVar5 = std::make_shared<android::icu::util::StringTrieBuilder_S_State>(std::make_shared<java::lang::String>(std::make_shared<char[]>("BUILDING_FAST")), cVar2);
	android::icu::util::StringTrieBuilder_S_State::BUILDING_FAST = cVar5;
	cVar6 = std::make_shared<android::icu::util::StringTrieBuilder_S_State>(std::make_shared<java::lang::String>(std::make_shared<char[]>("BUILDING_SMALL")), cVar1);
	android::icu::util::StringTrieBuilder_S_State::BUILDING_SMALL = cVar6;
	cVar7 = std::make_shared<android::icu::util::StringTrieBuilder_S_State>(std::make_shared<java::lang::String>(std::make_shared<char[]>("BUILT")), cVar0);
	android::icu::util::StringTrieBuilder_S_State::BUILT = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<android::icu::util::StringTrieBuilder_S_State>>>(0x4);
	cVar8[cVar3] = android::icu::util::StringTrieBuilder_S_State::ADDING;
	cVar8[cVar2] = android::icu::util::StringTrieBuilder_S_State::BUILDING_FAST;
	cVar8[cVar1] = android::icu::util::StringTrieBuilder_S_State::BUILDING_SMALL;
	cVar8[cVar0] = android::icu::util::StringTrieBuilder_S_State::BUILT;
	android::icu::util::StringTrieBuilder_S_State::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::util::StringTrieBuilder_S_State::StringTrieBuilder_S_State(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/util/StringTrieBuilder$State;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_State> android::icu::util::StringTrieBuilder_S_State::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_State> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::util::StringTrieBuilder_S_State(), name);
	cVar0->checkCast("android::icu::util::StringTrieBuilder_S_State");
	return cVar0;

}
// .method public static values()[Landroid/icu/util/StringTrieBuilder$State;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_State> android::icu::util::StringTrieBuilder_S_State::values()
{
	
	return android::icu::util::StringTrieBuilder_S_State::_S_VALUES;

}


