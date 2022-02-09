// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\FilteredBreakIteratorBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.SimpleFilteredSentenceBreakIterator_S_Builder.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.FilteredBreakIteratorBuilder.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

// .method protected constructor <init>()V
android::icu::text::FilteredBreakIteratorBuilder::FilteredBreakIteratorBuilder()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 015    .end annotation
	// 019    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static createInstance()Landroid/icu/text/FilteredBreakIteratorBuilder;
std::shared_ptr<android::icu::text::FilteredBreakIteratorBuilder> android::icu::text::FilteredBreakIteratorBuilder::createInstance()
{
	
	std::shared_ptr<android::icu::impl::SimpleFilteredSentenceBreakIterator_S_Builder> ret;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 027    .end annotation
	ret = std::make_shared<android::icu::impl::SimpleFilteredSentenceBreakIterator_S_Builder>();
	//    .local v0, "ret":Landroid/icu/text/FilteredBreakIteratorBuilder;
	return ret;

}
// .method public static createInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/FilteredBreakIteratorBuilder;
std::shared_ptr<android::icu::text::FilteredBreakIteratorBuilder> android::icu::text::FilteredBreakIteratorBuilder::createInstance(std::shared_ptr<android::icu::util::ULocale> where)
{
	
	std::shared_ptr<android::icu::impl::SimpleFilteredSentenceBreakIterator_S_Builder> ret;
	
	//    .param p0, "where"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 044    .end annotation
	ret = std::make_shared<android::icu::impl::SimpleFilteredSentenceBreakIterator_S_Builder>(where);
	//    .local v0, "ret":Landroid/icu/text/FilteredBreakIteratorBuilder;
	return ret;

}
// .method public abstract build(Landroid/icu/text/BreakIterator;)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::FilteredBreakIteratorBuilder::build(std::shared_ptr<android::icu::text::BreakIterator> var0)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 061    .end annotation

}
// .method public abstract suppressBreakAfter(Ljava/lang/String;)Z
bool android::icu::text::FilteredBreakIteratorBuilder::suppressBreakAfter(std::shared_ptr<java::lang::String> var0)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 066    .end annotation

}
// .method public abstract unsuppressBreakAfter(Ljava/lang/String;)Z
bool android::icu::text::FilteredBreakIteratorBuilder::unsuppressBreakAfter(std::shared_ptr<java::lang::String> var0)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 071    .end annotation

}


