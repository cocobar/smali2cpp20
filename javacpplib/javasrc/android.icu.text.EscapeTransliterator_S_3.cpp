// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\EscapeTransliterator$3.smali
#include "java2ctype.h"
#include "android.icu.text.EscapeTransliterator_S_3.h"
#include "android.icu.text.EscapeTransliterator.h"
#include "android.icu.text.Transliterator.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::EscapeTransliterator_S_3::EscapeTransliterator_S_3()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public getInstance(Ljava/lang/String;)Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::EscapeTransliterator_S_3::getInstance(std::shared_ptr<java::lang::String> ID)
{
	
	std::shared_ptr<android::icu::text::EscapeTransliterator> cVar0;
	std::shared_ptr<android::icu::text::EscapeTransliterator> cVar1;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	cVar1 = std::make_shared<android::icu::text::EscapeTransliterator>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("\\U")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")), 0x10, 0x8, 0x1, 0x0);
	var17 = cVar0(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Hex/C")), std::make_shared<java::lang::String>(std::make_shared<char[]>("\\u")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")), 0x10, 0x4, 0x1, cVar1);
	return cVar0;

}

