// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalDataCache$FormatsTableKey.smali
#include "java2ctype.h"
#include "android.icu.text.CompactDecimalDataCache_S_FormatsTableKey.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::_S_VALUES;
static android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::CURRENCY_FORMAT;
static android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::DECIMAL_FORMAT;
// .method static constructor <clinit>()V
void android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey> cVar2;
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey> cVar3;
	std::shared<std::vector<std::vector<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DECIMAL_FORMAT")), cVar1);
	android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::DECIMAL_FORMAT = cVar2;
	cVar3 = std::make_shared<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CURRENCY_FORMAT")), cVar0);
	android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::CURRENCY_FORMAT = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey>>>(0x2);
	cVar4[cVar1] = android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::DECIMAL_FORMAT;
	cVar4[cVar0] = android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::CURRENCY_FORMAT;
	android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::CompactDecimalDataCache_S_FormatsTableKey(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/CompactDecimalDataCache$FormatsTableKey;
std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey> android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::CompactDecimalDataCache_S_FormatsTableKey(), name);
	cVar0->checkCast("android::icu::text::CompactDecimalDataCache_S_FormatsTableKey");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/CompactDecimalDataCache$FormatsTableKey;
std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey> android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::values()
{
	
	return android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::_S_VALUES;

}


