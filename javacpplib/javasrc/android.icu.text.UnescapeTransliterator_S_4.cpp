// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnescapeTransliterator$4.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnescapeTransliterator_S_4.h"
#include "android.icu.text.UnescapeTransliterator.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::UnescapeTransliterator_S_4::UnescapeTransliterator_S_4()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public getInstance(Ljava/lang/String;)Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::UnescapeTransliterator_S_4::getInstance(std::shared_ptr<java::lang::String> ID)
{
	
	std::shared_ptr<android::icu::text::UnescapeTransliterator> cVar0;
	std::shared<std::vector<char[]>> cVar1;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	cVar1 = std::make_shared<std::vector<char[]>>(0xa);
	?;
	cVar0 = std::make_shared<android::icu::text::UnescapeTransliterator>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Hex-Any/XML")), cVar1);
	return cVar0;
	// 054    :array_10
	// 055    .array-data 2
	// 056        0x3s
	// 057        0x1s
	// 058        0x10s
	// 059        0x1s
	// 060        0x6s
	// 061        0x26s
	// 062        0x23s
	// 063        0x78s
	// 064        0x3bs
	// 065        -0x1s
	// 066    .end array-data

}


