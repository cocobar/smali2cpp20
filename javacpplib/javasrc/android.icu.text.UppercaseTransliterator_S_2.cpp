// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UppercaseTransliterator$2.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.UppercaseTransliterator_S_2.h"
#include "android.icu.text.UppercaseTransliterator.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

// .method constructor <init>(Landroid/icu/text/UppercaseTransliterator;)V
android::icu::text::UppercaseTransliterator_S_2::UppercaseTransliterator_S_2(std::shared_ptr<android::icu::text::UppercaseTransliterator> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/UppercaseTransliterator;
	this->this_S_0 = this_S_0;
	// 045    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public transform(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UppercaseTransliterator_S_2::transform(std::shared_ptr<java::lang::String> source)
{
	
	//    .param p1, "source"    # Ljava/lang/String;
	return android::icu::lang::UCharacter::toUpperCase(android::icu::text::UppercaseTransliterator::-get0(this->this_S_0), source);

}


