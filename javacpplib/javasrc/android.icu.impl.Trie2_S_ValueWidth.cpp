// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2$ValueWidth.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_S_ValueWidth.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::Trie2_S_ValueWidth::_S_VALUES;
static android::icu::impl::Trie2_S_ValueWidth::BITS_16;
static android::icu::impl::Trie2_S_ValueWidth::BITS_32;
// .method static constructor <clinit>()V
void android::icu::impl::Trie2_S_ValueWidth::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::impl::Trie2_S_ValueWidth> cVar2;
	std::shared_ptr<android::icu::impl::Trie2_S_ValueWidth> cVar3;
	std::shared<std::vector<std::vector<android::icu::impl::Trie2_S_ValueWidth>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::impl::Trie2_S_ValueWidth>(std::make_shared<java::lang::String>(std::make_shared<char[]>("BITS_16")), cVar1);
	android::icu::impl::Trie2_S_ValueWidth::BITS_16 = cVar2;
	cVar3 = std::make_shared<android::icu::impl::Trie2_S_ValueWidth>(std::make_shared<java::lang::String>(std::make_shared<char[]>("BITS_32")), cVar0);
	android::icu::impl::Trie2_S_ValueWidth::BITS_32 = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::impl::Trie2_S_ValueWidth>>>(0x2);
	cVar4[cVar1] = android::icu::impl::Trie2_S_ValueWidth::BITS_16;
	cVar4[cVar0] = android::icu::impl::Trie2_S_ValueWidth::BITS_32;
	android::icu::impl::Trie2_S_ValueWidth::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::Trie2_S_ValueWidth::Trie2_S_ValueWidth(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/Trie2$ValueWidth;
std::shared_ptr<android::icu::impl::Trie2_S_ValueWidth> android::icu::impl::Trie2_S_ValueWidth::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::Trie2_S_ValueWidth> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::Trie2_S_ValueWidth(), name);
	cVar0->checkCast("android::icu::impl::Trie2_S_ValueWidth");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/Trie2$ValueWidth;
std::shared_ptr<android::icu::impl::Trie2_S_ValueWidth> android::icu::impl::Trie2_S_ValueWidth::values()
{
	
	return android::icu::impl::Trie2_S_ValueWidth::_S_VALUES;

}


