// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SearchIterator$Search.smali
#include "java2ctype.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.SearchIterator_S_Search.h"
#include "android.icu.text.SearchIterator.h"
#include "java.text.CharacterIterator.h"

// .method constructor <init>(Landroid/icu/text/SearchIterator;)V
android::icu::text::SearchIterator_S_Search::SearchIterator_S_Search(std::shared_ptr<android::icu::text::SearchIterator> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/SearchIterator;
	this->this_S_0 = this_S_0;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method beginIndex()I
int android::icu::text::SearchIterator_S_Search::beginIndex()
{
	
	if ( this->this_S_0->targetText )     
		goto label_cond_8;
	return 0x0;
	// 067    .line 146
label_cond_8:
	return this->this_S_0->targetText->getBeginIndex();

}
// .method breakIter()Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::SearchIterator_S_Search::breakIter()
{
	
	return this->this_S_0->breakIterator;

}
// .method endIndex()I
int android::icu::text::SearchIterator_S_Search::endIndex()
{
	
	if ( this->this_S_0->targetText )     
		goto label_cond_8;
	return 0x0;
	// 108    .line 153
label_cond_8:
	return this->this_S_0->targetText->getEndIndex();

}
// .method matchedLength()I
int android::icu::text::SearchIterator_S_Search::matchedLength()
{
	
	return this->this_S_0->matchLength;

}
// .method setBreakIter(Landroid/icu/text/BreakIterator;)V
void android::icu::text::SearchIterator_S_Search::setBreakIter(std::shared_ptr<android::icu::text::BreakIterator> breakIter)
{
	
	//    .param p1, "breakIter"    # Landroid/icu/text/BreakIterator;
	this->this_S_0->breakIterator = breakIter;
	return;

}
// .method setMatchedLength(I)V
void android::icu::text::SearchIterator_S_Search::setMatchedLength(int matchedLength)
{
	
	//    .param p1, "matchedLength"    # I
	this->this_S_0->matchLength = matchedLength;
	return;

}
// .method setTarget(Ljava/text/CharacterIterator;)V
void android::icu::text::SearchIterator_S_Search::setTarget(std::shared_ptr<java::text::CharacterIterator> text)
{
	
	//    .param p1, "text"    # Ljava/text/CharacterIterator;
	this->this_S_0->targetText = text;
	return;

}
// .method text()Ljava/text/CharacterIterator;
std::shared_ptr<java::text::CharacterIterator> android::icu::text::SearchIterator_S_Search::text()
{
	
	return this->this_S_0->targetText;

}


