// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RemoveTransliterator.smali
#include "java2ctype.h"
#include "android.icu.text.RemoveTransliterator_S_1.h"
#include "android.icu.text.RemoveTransliterator.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

static android::icu::text::RemoveTransliterator::_ID = std::make_shared<java::lang::String>("Any-Remove");
// .method public constructor <init>()V
android::icu::text::RemoveTransliterator::RemoveTransliterator()
{
	
	android::icu::text::Transliterator::(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Remove")), 0x0);
	return;

}
// .method static register()V
void android::icu::text::RemoveTransliterator::register()
{
	
	std::shared_ptr<android::icu::text::RemoveTransliterator_S_1> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::RemoveTransliterator_S_1>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Remove")), cVar0);
	android::icu::text::Transliterator::registerSpecialInverse(std::make_shared<java::lang::String>(std::make_shared<char[]>("Remove")), std::make_shared<java::lang::String>(std::make_shared<char[]>("Null")), 0x0);
	return;

}
// .method public addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::RemoveTransliterator::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	//    .param p1, "inputFilter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	//    .local v0, "myFilter":Landroid/icu/text/UnicodeSet;
	sourceSet->addAll(this->getFilterAsUnicodeSet(inputFilter));
	return;

}
// .method protected handleTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V
void android::icu::text::RemoveTransliterator::handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index,bool incremental)
{
	
	int len;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "index"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "incremental"    # Z
	text->replace(index->start, index->limit, std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	len = (index->limit - index->start);
	//    .local v0, "len":I
	index->contextLimit = (index->contextLimit -  len);
	index->limit = (index->limit -  len);
	return;

}


