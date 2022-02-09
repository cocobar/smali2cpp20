// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BreakIterator$BreakIteratorCache.smali
#include "java2ctype.h"
#include "android.icu.text.BreakIterator_S_BreakIteratorCache.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"

// .method constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/text/BreakIterator;)V
android::icu::text::BreakIterator_S_BreakIteratorCache::BreakIterator_S_BreakIteratorCache(std::shared_ptr<android::icu::util::ULocale> where,std::shared_ptr<android::icu::text::BreakIterator> iter)
{
	
	std::shared_ptr<android::icu::text::BreakIterator> cVar0;
	
	//    .param p1, "where"    # Landroid/icu/util/ULocale;
	//    .param p2, "iter"    # Landroid/icu/text/BreakIterator;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->where = where;
	cVar0 = iter->clone();
	cVar0->checkCast("android::icu::text::BreakIterator");
	this->iter = cVar0;
	return;

}
// .method createBreakInstance()Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIterator_S_BreakIteratorCache::createBreakInstance()
{
	
	std::shared_ptr<android::icu::text::BreakIterator> cVar0;
	
	cVar0 = this->iter->clone();
	cVar0->checkCast("android::icu::text::BreakIterator");
	return cVar0;

}
// .method getLocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::BreakIterator_S_BreakIteratorCache::getLocale()
{
	
	return this->where;

}


