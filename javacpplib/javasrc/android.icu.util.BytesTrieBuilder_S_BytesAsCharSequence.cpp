// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrieBuilder$BytesAsCharSequence.smali
#include "java2ctype.h"
#include "android.icu.util.BytesTrieBuilder_S_BytesAsCharSequence.h"
#include "java.lang.CharSequence.h"

// .method public constructor <init>([BI)V
android::icu::util::BytesTrieBuilder_S_BytesAsCharSequence::BytesTrieBuilder_S_BytesAsCharSequence(std::shared_ptr<unsigned char[]> sequence,int length)
{
	
	//    .param p1, "sequence"    # [B
	//    .param p2, "length"    # I
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->s = sequence;
	this->len = length;
	return;

}
// .method public charAt(I)C
char android::icu::util::BytesTrieBuilder_S_BytesAsCharSequence::charAt(int i)
{
	
	//    .param p1, "i"    # I
	return (char)(( this->s[i] & 0xff));

}
// .method public length()I
int android::icu::util::BytesTrieBuilder_S_BytesAsCharSequence::length()
{
	
	return this->len;

}
// .method public subSequence(II)Ljava/lang/CharSequence;
std::shared_ptr<java::lang::CharSequence> android::icu::util::BytesTrieBuilder_S_BytesAsCharSequence::subSequence(int start,int end)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	return 0x0;

}


