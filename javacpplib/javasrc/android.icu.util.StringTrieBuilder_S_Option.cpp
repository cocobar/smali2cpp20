// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$Option.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_Option.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::util::StringTrieBuilder_S_Option::_S_VALUES;
static android::icu::util::StringTrieBuilder_S_Option::FAST;
static android::icu::util::StringTrieBuilder_S_Option::SMALL;
// .method static constructor <clinit>()V
void android::icu::util::StringTrieBuilder_S_Option::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> cVar2;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> cVar3;
	std::shared<std::vector<std::vector<android::icu::util::StringTrieBuilder_S_Option>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::util::StringTrieBuilder_S_Option>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FAST")), cVar1);
	android::icu::util::StringTrieBuilder_S_Option::FAST = cVar2;
	cVar3 = std::make_shared<android::icu::util::StringTrieBuilder_S_Option>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SMALL")), cVar0);
	android::icu::util::StringTrieBuilder_S_Option::SMALL = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::util::StringTrieBuilder_S_Option>>>(0x2);
	cVar4[cVar1] = android::icu::util::StringTrieBuilder_S_Option::FAST;
	cVar4[cVar0] = android::icu::util::StringTrieBuilder_S_Option::SMALL;
	android::icu::util::StringTrieBuilder_S_Option::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::util::StringTrieBuilder_S_Option::StringTrieBuilder_S_Option(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/util/StringTrieBuilder$Option;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> android::icu::util::StringTrieBuilder_S_Option::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::util::StringTrieBuilder_S_Option(), name);
	cVar0->checkCast("android::icu::util::StringTrieBuilder_S_Option");
	return cVar0;

}
// .method public static values()[Landroid/icu/util/StringTrieBuilder$Option;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> android::icu::util::StringTrieBuilder_S_Option::values()
{
	
	return android::icu::util::StringTrieBuilder_S_Option::_S_VALUES;

}


