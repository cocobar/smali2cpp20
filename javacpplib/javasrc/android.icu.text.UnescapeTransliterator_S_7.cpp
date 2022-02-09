// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnescapeTransliterator$7.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnescapeTransliterator_S_7.h"
#include "android.icu.text.UnescapeTransliterator.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::UnescapeTransliterator_S_7::UnescapeTransliterator_S_7()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public getInstance(Ljava/lang/String;)Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::UnescapeTransliterator_S_7::getInstance(std::shared_ptr<java::lang::String> ID)
{
	
	std::shared_ptr<android::icu::text::UnescapeTransliterator> cVar0;
	std::shared<std::vector<char[]>> cVar1;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	cVar1 = std::make_shared<std::vector<char[]>>(0x30);
	?;
	cVar0 = std::make_shared<android::icu::text::UnescapeTransliterator>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Hex-Any")), cVar1);
	return cVar0;
	// 054    :array_10
	// 055    .array-data 2
	// 056        0x2s
	// 057        0x0s
	// 058        0x10s
	// 059        0x4s
	// 060        0x6s
	// 061        0x55s
	// 062        0x2bs
	// 063        0x2s
	// 064        0x0s
	// 065        0x10s
	// 066        0x4s
	// 067        0x4s
	// 068        0x5cs
	// 069        0x75s
	// 070        0x2s
	// 071        0x0s
	// 072        0x10s
	// 073        0x8s
	// 074        0x8s
	// 075        0x5cs
	// 076        0x55s
	// 077        0x3s
	// 078        0x1s
	// 079        0x10s
	// 080        0x1s
	// 081        0x6s
	// 082        0x26s
	// 083        0x23s
	// 084        0x78s
	// 085        0x3bs
	// 086        0x2s
	// 087        0x1s
	// 088        0xas
	// 089        0x1s
	// 090        0x7s
	// 091        0x26s
	// 092        0x23s
	// 093        0x3bs
	// 094        0x3s
	// 095        0x1s
	// 096        0x10s
	// 097        0x1s
	// 098        0x6s
	// 099        0x5cs
	// 100        0x78s
	// 101        0x7bs
	// 102        0x7ds
	// 103        -0x1s
	// 104    .end array-data

}


