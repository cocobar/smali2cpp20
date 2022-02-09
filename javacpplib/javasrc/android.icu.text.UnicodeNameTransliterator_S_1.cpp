// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeNameTransliterator$1.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeNameTransliterator_S_1.h"
#include "android.icu.text.UnicodeNameTransliterator.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::UnicodeNameTransliterator_S_1::UnicodeNameTransliterator_S_1()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public getInstance(Ljava/lang/String;)Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::UnicodeNameTransliterator_S_1::getInstance(std::shared_ptr<java::lang::String> ID)
{
	
	std::shared_ptr<android::icu::text::UnicodeNameTransliterator> cVar0;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::text::UnicodeNameTransliterator>(0x0);
	return cVar0;

}


