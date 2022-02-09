// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DictionaryMatcher.smali
#include "java2ctype.h"
#include "android.icu.text.DictionaryMatcher.h"
#include "java.text.CharacterIterator.h"

// .method constructor <init>()V
android::icu::text::DictionaryMatcher::DictionaryMatcher()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public matches(Ljava/text/CharacterIterator;I[I[II)I
int android::icu::text::DictionaryMatcher::matches(std::shared_ptr<java::text::CharacterIterator> text,int maxLength,std::shared_ptr<int[]> lengths,std::shared_ptr<int[]> count,int limit)
{
	
	//    .param p1, "text"    # Ljava/text/CharacterIterator;
	//    .param p2, "maxLength"    # I
	//    .param p3, "lengths"    # [I
	//    .param p4, "count"    # [I
	//    .param p5, "limit"    # I
	return this->matches(text, maxLength, lengths, count, limit, 0x0);

}


