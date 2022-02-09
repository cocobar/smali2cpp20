// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DictionaryBreakEngine$PossibleWord.smali
#include "java2ctype.h"
#include "android.icu.text.DictionaryBreakEngine_S_PossibleWord.h"
#include "android.icu.text.DictionaryMatcher.h"
#include "java.text.CharacterIterator.h"

static android::icu::text::DictionaryBreakEngine_S_PossibleWord::POSSIBLE_WORD_LIST_MAX = 0x14;
// .method public constructor <init>()V
android::icu::text::DictionaryBreakEngine_S_PossibleWord::DictionaryBreakEngine_S_PossibleWord()
{
	
	// 041    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->lengths = std::make_shared<std::vector<int[]>>(0x14);
	this->count = std::make_shared<std::vector<int[]>>(0x1);
	this->offset = -0x1;
	return;

}
// .method public acceptMarked(Ljava/text/CharacterIterator;)I
int android::icu::text::DictionaryBreakEngine_S_PossibleWord::acceptMarked(std::shared_ptr<java::text::CharacterIterator> fIter)
{
	
	//    .param p1, "fIter"    # Ljava/text/CharacterIterator;
	fIter->setIndex((this->offset +  this->lengths[this->mark]));
	return this->lengths[this->mark];

}
// .method public backUp(Ljava/text/CharacterIterator;)Z
bool android::icu::text::DictionaryBreakEngine_S_PossibleWord::backUp(std::shared_ptr<java::text::CharacterIterator> fIter)
{
	
	int cVar0;
	
	//    .param p1, "fIter"    # Ljava/text/CharacterIterator;
	if ( this->current <= 0 )
		goto label_cond_17;
	cVar0 = ( this->current + -0x1);
	this->current = cVar0;
	fIter->setIndex((this->offset +  this->lengths[cVar0]));
	return 0x1;
	// 130    .line 73
label_cond_17:
	return 0x0;

}
// .method public candidates(Ljava/text/CharacterIterator;Landroid/icu/text/DictionaryMatcher;I)I
int android::icu::text::DictionaryBreakEngine_S_PossibleWord::candidates(std::shared_ptr<java::text::CharacterIterator> fIter,std::shared_ptr<android::icu::text::DictionaryMatcher> dict,int rangeEnd)
{
	
	int cVar0;
	int start;
	
	//    .param p1, "fIter"    # Ljava/text/CharacterIterator;
	//    .param p2, "dict"    # Landroid/icu/text/DictionaryMatcher;
	//    .param p3, "rangeEnd"    # I
	cVar0 = 0x0;
	start = fIter->getIndex();
	//    .local v6, "start":I
	if ( start == this->offset )
		goto label_cond_25;
	this->offset = start;
	this->prefix = dict->matches(fIter, (rangeEnd - start), this->lengths, this->count, this->lengths->size());
	if ( this->count[cVar0] > 0 ) 
		goto label_cond_25;
	fIter->setIndex(start);
label_cond_25:
	if ( this->count[cVar0] <= 0 )
		goto label_cond_39;
	fIter->setIndex((this->lengths[( this->count[cVar0] + -0x1)] +  start));
label_cond_39:
	this->current = ( this->count[cVar0] + -0x1);
	this->mark = this->current;
	return this->count[cVar0];

}
// .method public longestPrefix()I
int android::icu::text::DictionaryBreakEngine_S_PossibleWord::longestPrefix()
{
	
	return this->prefix;

}
// .method public markCurrent()V
void android::icu::text::DictionaryBreakEngine_S_PossibleWord::markCurrent()
{
	
	this->mark = this->current;
	return;

}


