// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BytesDictionaryMatcher.smali
#include "java2ctype.h"
#include "android.icu.impl.Assert.h"
#include "android.icu.text.BytesDictionaryMatcher.h"
#include "android.icu.text.UCharacterIterator.h"
#include "android.icu.util.BytesTrie_S_Result.h"
#include "android.icu.util.BytesTrie.h"
#include "java.text.CharacterIterator.h"

// .method public constructor <init>([BI)V
android::icu::text::BytesDictionaryMatcher::BytesDictionaryMatcher(std::shared_ptr<unsigned char[]> chars,int transform)
{
	
	bool cVar0;
	
	//    .param p1, "chars"    # [B
	//    .param p2, "transform"    # I
	// 020    invoke-direct {p0}, Landroid/icu/text/DictionaryMatcher;-><init>()V
	this->characters = chars;
	if ( (0x7f000000 &  transform) != 0x1000000 )
		goto label_cond_13;
	cVar0 = 0x1;
label_goto_d:
	android::icu::impl::Assert::assrt(cVar0);
	this->transform = transform;
	return;
	// 045    .line 24
label_cond_13:
	cVar0 = 0x0;
	goto label_goto_d;

}
// .method private transform(I)I
int android::icu::text::BytesDictionaryMatcher::transform(int c)
{
	
	int delta;
	
	//    .param p1, "c"    # I
	if ( c != 0x200d )
		goto label_cond_7;
	return 0xff;
	// 067    .line 34
label_cond_7:
	if ( c != 0x200c )
		goto label_cond_e;
	return 0xfe;
	// 078    .line 38
label_cond_e:
	delta = (c - (this->transform &  0x1fffff));
	//    .local v0, "delta":I
	if ( delta < 0 ) 
		goto label_cond_1c;
	if ( 0xfd >= delta )
		goto label_cond_1e;
label_cond_1c:
	return -0x1;
	// 102    .line 42
label_cond_1e:
	return delta;

}
// .method public getType()I
int android::icu::text::BytesDictionaryMatcher::getType()
{
	
	return 0x0;

}
// .method public matches(Ljava/text/CharacterIterator;I[I[II[I)I
int android::icu::text::BytesDictionaryMatcher::matches(std::shared_ptr<java::text::CharacterIterator> text_,int maxLength,std::shared_ptr<int[]> lengths,std::shared_ptr<int[]> count_,int limit,std::shared_ptr<int[]> values)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::UCharacterIterator> text;
	std::shared_ptr<android::icu::util::BytesTrie> bt;
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
	//    .local v5, "text":Landroid/icu/text/UCharacterIterator;
	bt = std::make_shared<android::icu::util::BytesTrie>(this->characters, cVar1);
	//    .local v0, "bt":Landroid/icu/util/BytesTrie;
	c = text->nextCodePoint();
	//    .local v1, "c":I
	if ( c != cVar0 )
		goto label_cond_14;
	return cVar1;
	// 159    .line 53
label_cond_14:
	result = bt->first(this->transform(c));
	//    .local v4, "result":Landroid/icu/util/BytesTrie$Result;
	numChars = 0x1;
	//    .local v3, "numChars":I
	count = 0x0;
	//    .local v2, "count":I
label_goto_1e:
	if ( !(result->hasValue()) )  
		goto label_cond_39;
	if ( count >= limit )
		goto label_cond_32;
	if ( !(values) )  
		goto label_cond_2e;
	values[count] = bt->getValue();
label_cond_2e:
	lengths[count] = numChars;
	count = ( count + 0x1);
label_cond_32:
	if ( result != android::icu::util::BytesTrie_S_Result::FINAL_VALUE )
		goto label_cond_3d;
label_cond_36:
	count_[cVar1] = count;
	return numChars;
	// 219    .line 69
label_cond_39:
	if ( result == android::icu::util::BytesTrie_S_Result::NO_MATCH )
		goto label_cond_36;
label_cond_3d:
	if ( numChars >= maxLength )
		goto label_cond_36;
	c = text->nextCodePoint();
	if ( c == cVar0 )
		goto label_cond_36;
	numChars = ( numChars + 0x1);
	result = bt->next(this->transform(c));
	goto label_goto_1e;

}


