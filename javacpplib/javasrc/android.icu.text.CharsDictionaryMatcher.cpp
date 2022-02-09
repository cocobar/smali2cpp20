// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsDictionaryMatcher.smali
#include "java2ctype.h"
#include "android.icu.text.CharsDictionaryMatcher.h"
#include "android.icu.text.UCharacterIterator.h"
#include "android.icu.util.BytesTrie_S_Result.h"
#include "android.icu.util.CharsTrie.h"
#include "java.lang.CharSequence.h"
#include "java.text.CharacterIterator.h"

// .method public constructor <init>(Ljava/lang/CharSequence;)V
android::icu::text::CharsDictionaryMatcher::CharsDictionaryMatcher(std::shared_ptr<java::lang::CharSequence> chars)
{
	
	//    .param p1, "chars"    # Ljava/lang/CharSequence;
	// 017    invoke-direct {p0}, Landroid/icu/text/DictionaryMatcher;-><init>()V
	this->characters = chars;
	return;

}
// .method public getType()I
int android::icu::text::CharsDictionaryMatcher::getType()
{
	
	return 0x1;

}
// .method public matches(Ljava/text/CharacterIterator;I[I[II[I)I
int android::icu::text::CharsDictionaryMatcher::matches(std::shared_ptr<java::text::CharacterIterator> text_,int maxLength,std::shared_ptr<int[]> lengths,std::shared_ptr<int[]> count_,int limit,std::shared_ptr<int[]> values)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::UCharacterIterator> text;
	std::shared_ptr<android::icu::util::CharsTrie> uct;
	int c;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> result;
	int numChars;
	int count;
	
	//    .param p1, "text_"    # Ljava/text/CharacterIterator;
	//    .param p2, "maxLength"    # I
	//    .param p3, "lengths"    # [I
	//    .param p4, "count_"    # [I
	//    .param p5, "limit"    # I
	//    .param p6, "values"    # [I
	cVar0 = -0x1;
	cVar1 = 0x0;
	text = android::icu::text::UCharacterIterator::getInstance(text_);
	//    .local v4, "text":Landroid/icu/text/UCharacterIterator;
	uct = std::make_shared<android::icu::util::CharsTrie>(this->characters, cVar1);
	//    .local v5, "uct":Landroid/icu/util/CharsTrie;
	c = text->nextCodePoint();
	//    .local v0, "c":I
	if ( c != cVar0 )
		goto label_cond_14;
	return cVar1;
	// 078    .line 32
label_cond_14:
	result = uct->firstForCodePoint(c);
	//    .local v3, "result":Landroid/icu/util/BytesTrie$Result;
	numChars = 0x1;
	//    .local v2, "numChars":I
	count = 0x0;
	//    .local v1, "count":I
label_goto_1a:
	if ( !(result->hasValue()) )  
		goto label_cond_35;
	if ( count >= limit )
		goto label_cond_2e;
	if ( !(values) )  
		goto label_cond_2a;
	values[count] = uct->getValue();
label_cond_2a:
	lengths[count] = numChars;
	count = ( count + 0x1);
label_cond_2e:
	if ( result != android::icu::util::BytesTrie_S_Result::FINAL_VALUE )
		goto label_cond_39;
label_cond_32:
	count_[cVar1] = count;
	return numChars;
	// 134    .line 49
label_cond_35:
	if ( result == android::icu::util::BytesTrie_S_Result::NO_MATCH )
		goto label_cond_32;
label_cond_39:
	if ( numChars >= maxLength )
		goto label_cond_32;
	c = text->nextCodePoint();
	if ( c == cVar0 )
		goto label_cond_32;
	numChars = ( numChars + 0x1);
	result = uct->nextForCodePoint(c);
	goto label_goto_1a;

}


