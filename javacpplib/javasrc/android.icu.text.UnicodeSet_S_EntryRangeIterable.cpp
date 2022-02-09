// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$EntryRangeIterable.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_EntryRange.h"
#include "android.icu.text.UnicodeSet_S_EntryRangeIterable.h"
#include "android.icu.text.UnicodeSet_S_EntryRangeIterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.util.Iterator.h"

// .method private constructor <init>(Landroid/icu/text/UnicodeSet;)V
android::icu::text::UnicodeSet_S_EntryRangeIterable::UnicodeSet_S_EntryRangeIterable(std::shared_ptr<android::icu::text::UnicodeSet> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/UnicodeSet;
	this->this_S_0 = this_S_0;
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet$EntryRangeIterable;)V
android::icu::text::UnicodeSet_S_EntryRangeIterable::UnicodeSet_S_EntryRangeIterable(std::shared_ptr<android::icu::text::UnicodeSet> this_S_0,std::shared_ptr<android::icu::text::UnicodeSet_S_EntryRangeIterable> _this1)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "-this1"    # Landroid/icu/text/UnicodeSet$EntryRangeIterable;
	android::icu::text::UnicodeSet_S_EntryRangeIterable::(this_S_0);
	return;

}
// .method public iterator()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<android::icu::text::UnicodeSet_S_EntryRange>> android::icu::text::UnicodeSet_S_EntryRangeIterable::iterator()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet_S_EntryRangeIterator> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 064        value = {
	// 065            "()",
	// 066            "Ljava/util/Iterator",
	// 067            "<",
	// 068            "Landroid/icu/text/UnicodeSet$EntryRange;",
	// 069            ">;"
	// 070        }
	// 071    .end annotation
	cVar0 = std::make_shared<android::icu::text::UnicodeSet_S_EntryRangeIterator>(this->this_S_0, 0x0);
	return cVar0;

}


