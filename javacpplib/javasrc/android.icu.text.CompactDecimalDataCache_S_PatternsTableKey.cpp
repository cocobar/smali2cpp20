// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalDataCache$PatternsTableKey.smali
#include "java2ctype.h"
#include "android.icu.text.CompactDecimalDataCache_S_PatternsTableKey.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::_S_VALUES;
static android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::PATTERNS_LONG;
static android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::PATTERNS_SHORT;
// .method static constructor <clinit>()V
void android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey> cVar2;
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey> cVar3;
	std::shared<std::vector<std::vector<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PATTERNS_LONG")), cVar1);
	android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::PATTERNS_LONG = cVar2;
	cVar3 = std::make_shared<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PATTERNS_SHORT")), cVar0);
	android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::PATTERNS_SHORT = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey>>>(0x2);
	cVar4[cVar1] = android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::PATTERNS_LONG;
	cVar4[cVar0] = android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::PATTERNS_SHORT;
	android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::CompactDecimalDataCache_S_PatternsTableKey(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/CompactDecimalDataCache$PatternsTableKey;
std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey> android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::CompactDecimalDataCache_S_PatternsTableKey(), name);
	cVar0->checkCast("android::icu::text::CompactDecimalDataCache_S_PatternsTableKey");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/CompactDecimalDataCache$PatternsTableKey;
std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey> android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::values()
{
	
	return android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::_S_VALUES;

}


