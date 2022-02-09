// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$EntryRangeIterator.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_EntryRange.h"
#include "android.icu.text.UnicodeSet_S_EntryRangeIterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.NoSuchElementException.h"

// .method private constructor <init>(Landroid/icu/text/UnicodeSet;)V
android::icu::text::UnicodeSet_S_EntryRangeIterator::UnicodeSet_S_EntryRangeIterator(std::shared_ptr<android::icu::text::UnicodeSet> this_S_0)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet_S_EntryRange> cVar0;
	
	//    .param p1, "this$0"    # Landroid/icu/text/UnicodeSet;
	this->this_S_0 = this_S_0;
	// 047    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::text::UnicodeSet_S_EntryRange>();
	this->result = cVar0;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet$EntryRangeIterator;)V
android::icu::text::UnicodeSet_S_EntryRangeIterator::UnicodeSet_S_EntryRangeIterator(std::shared_ptr<android::icu::text::UnicodeSet> this_S_0,std::shared_ptr<android::icu::text::UnicodeSet_S_EntryRangeIterator> _this1)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "-this1"    # Landroid/icu/text/UnicodeSet$EntryRangeIterator;
	android::icu::text::UnicodeSet_S_EntryRangeIterator::(this_S_0);
	return;

}
// .method public hasNext()Z
bool android::icu::text::UnicodeSet_S_EntryRangeIterator::hasNext()
{
	
	bool cVar0;
	
	if ( this->pos >= ( android::icu::text::UnicodeSet::-get1(this->this_S_0) + -0x1) )
		goto label_cond_e;
	cVar0 = 0x1;
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = 0x0;
	goto label_goto_d;

}
// .method public next()Landroid/icu/text/UnicodeSet$EntryRange;
std::shared_ptr<android::icu::text::UnicodeSet_S_EntryRange> android::icu::text::UnicodeSet_S_EntryRangeIterator::next()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::util::NoSuchElementException> cVar2;
	
	if ( this->pos >= ( android::icu::text::UnicodeSet::-get1(this->this_S_0) + -0x1) )
		goto label_cond_35;
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	this->result->codepoint = android::icu::text::UnicodeSet::-get2(this->this_S_0)[cVar0];
	cVar1 = this->pos;
	this->pos = ( cVar1 + 0x1);
	this->result->codepointEnd = ( android::icu::text::UnicodeSet::-get2(this->this_S_0)[cVar1] + -0x1);
	return this->result;
	// 163    .line 4210
label_cond_35:
	cVar2 = std::make_shared<java::util::NoSuchElementException>();
	// throw
	throw cVar2;

}
// .method public remove()V
void android::icu::text::UnicodeSet_S_EntryRangeIterator::remove()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}


