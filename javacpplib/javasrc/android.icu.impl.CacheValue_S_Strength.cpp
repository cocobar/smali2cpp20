// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CacheValue$Strength.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheValue_S_Strength.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::CacheValue_S_Strength::_S_VALUES;
static android::icu::impl::CacheValue_S_Strength::SOFT;
static android::icu::impl::CacheValue_S_Strength::STRONG;
// .method static constructor <clinit>()V
void android::icu::impl::CacheValue_S_Strength::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::impl::CacheValue_S_Strength> cVar2;
	std::shared_ptr<android::icu::impl::CacheValue_S_Strength> cVar3;
	std::shared<std::vector<std::vector<android::icu::impl::CacheValue_S_Strength>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::impl::CacheValue_S_Strength>(std::make_shared<java::lang::String>(std::make_shared<char[]>("STRONG")), cVar1);
	android::icu::impl::CacheValue_S_Strength::STRONG = cVar2;
	cVar3 = std::make_shared<android::icu::impl::CacheValue_S_Strength>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SOFT")), cVar0);
	android::icu::impl::CacheValue_S_Strength::SOFT = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::impl::CacheValue_S_Strength>>>(0x2);
	cVar4[cVar1] = android::icu::impl::CacheValue_S_Strength::STRONG;
	cVar4[cVar0] = android::icu::impl::CacheValue_S_Strength::SOFT;
	android::icu::impl::CacheValue_S_Strength::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::CacheValue_S_Strength::CacheValue_S_Strength(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/CacheValue$Strength;
std::shared_ptr<android::icu::impl::CacheValue_S_Strength> android::icu::impl::CacheValue_S_Strength::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::CacheValue_S_Strength> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::CacheValue_S_Strength(), name);
	cVar0->checkCast("android::icu::impl::CacheValue_S_Strength");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/CacheValue$Strength;
std::shared_ptr<android::icu::impl::CacheValue_S_Strength> android::icu::impl::CacheValue_S_Strength::values()
{
	
	return android::icu::impl::CacheValue_S_Strength::_S_VALUES;

}


