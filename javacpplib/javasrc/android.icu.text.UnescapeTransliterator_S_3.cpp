// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnescapeTransliterator$3.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnescapeTransliterator_S_3.h"
#include "android.icu.text.UnescapeTransliterator.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::UnescapeTransliterator_S_3::UnescapeTransliterator_S_3()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public getInstance(Ljava/lang/String;)Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::UnescapeTransliterator_S_3::getInstance(std::shared_ptr<java::lang::String> ID)
{
	
	std::shared_ptr<android::icu::text::UnescapeTransliterator> cVar0;
	std::shared<std::vector<char[]>> cVar1;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	cVar1 = std::make_shared<std::vector<char[]>>(0xf);
	?;
	cVar0 = std::make_shared<android::icu::text::UnescapeTransliterator>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Hex-Any/C")), cVar1);
	return cVar0;
	// 054    :array_10
	// 055    .array-data 2
	// 056        0x2s
	// 057        0x0s
	// 058        0x10s
	// 059        0x4s
	// 060        0x4s
	// 061        0x5cs
	// 062        0x75s
	// 063        0x2s
	// 064        0x0s
	// 065        0x10s
	// 066        0x8s
	// 067        0x8s
	// 068        0x5cs
	// 069        0x55s
	// 070        -0x1s
	// 071    .end array-data

}


