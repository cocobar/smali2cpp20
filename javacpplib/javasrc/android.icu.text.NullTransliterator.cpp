// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NullTransliterator.smali
#include "java2ctype.h"
#include "android.icu.text.NullTransliterator.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

static android::icu::text::NullTransliterator::SHORT_ID = std::make_shared<java::lang::String>("Null");
static android::icu::text::NullTransliterator::_ID = std::make_shared<java::lang::String>("Any-Null");
// .method public constructor <init>()V
android::icu::text::NullTransliterator::NullTransliterator()
{
	
	android::icu::text::Transliterator::(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Null")), 0x0);
	return;

}
// .method public addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::NullTransliterator::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	//    .param p1, "inputFilter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	return;

}
// .method protected handleTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V
void android::icu::text::NullTransliterator::handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> offsets,bool incremental)
{
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "offsets"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "incremental"    # Z
	offsets->start = offsets->limit;
	return;

}


