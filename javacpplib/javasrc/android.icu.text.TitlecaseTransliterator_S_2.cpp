// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TitlecaseTransliterator$2.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.TitlecaseTransliterator_S_2.h"
#include "android.icu.text.TitlecaseTransliterator.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

// .method constructor <init>(Landroid/icu/text/TitlecaseTransliterator;)V
android::icu::text::TitlecaseTransliterator_S_2::TitlecaseTransliterator_S_2(std::shared_ptr<android::icu::text::TitlecaseTransliterator> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/TitlecaseTransliterator;
	this->this_S_0 = this_S_0;
	// 045    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public transform(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TitlecaseTransliterator_S_2::transform(std::shared_ptr<java::lang::String> source)
{
	
	//    .param p1, "source"    # Ljava/lang/String;
	return android::icu::lang::UCharacter::toTitleCase(android::icu::text::TitlecaseTransliterator::-get0(this->this_S_0), source, 0x0);

}


