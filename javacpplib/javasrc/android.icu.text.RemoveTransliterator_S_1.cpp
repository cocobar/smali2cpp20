// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RemoveTransliterator$1.smali
#include "java2ctype.h"
#include "android.icu.text.RemoveTransliterator_S_1.h"
#include "android.icu.text.RemoveTransliterator.h"
#include "android.icu.text.Transliterator.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::RemoveTransliterator_S_1::RemoveTransliterator_S_1()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public getInstance(Ljava/lang/String;)Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::RemoveTransliterator_S_1::getInstance(std::shared_ptr<java::lang::String> ID)
{
	
	std::shared_ptr<android::icu::text::RemoveTransliterator> cVar0;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::text::RemoveTransliterator>();
	return cVar0;

}


