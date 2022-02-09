// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TextTrieMap$CharIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.TextTrieMap_S_CharIterator.h"
#include "android.icu.lang.UCharacter.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.String.h"
#include "java.lang.UnsupportedOperationException.h"

// .method constructor <init>(Ljava/lang/CharSequence;IZ)V
android::icu::impl::TextTrieMap_S_CharIterator::TextTrieMap_S_CharIterator(std::shared_ptr<java::lang::CharSequence> text,int offset,bool ignoreCase)
{
	
	//    .param p1, "text"    # Ljava/lang/CharSequence;
	//    .param p2, "offset"    # I
	//    .param p3, "ignoreCase"    # Z
	// 051    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_text = text;
	this->_startIdx = offset;
	this->_nextIdx = offset;
	this->_ignoreCase = ignoreCase;
	return;

}
// .method public hasNext()Z
bool android::icu::impl::TextTrieMap_S_CharIterator::hasNext()
{
	
	if ( this->_nextIdx != this->_text->length() )
		goto label_cond_10;
	if ( this->_remainingChar )     
		goto label_cond_10;
	return 0x0;
	// 094    .line 132
label_cond_10:
	return 0x1;

}
// .method public next()Ljava/lang/Character;
std::shared_ptr<java::lang::Character> android::icu::impl::TextTrieMap_S_CharIterator::next()
{
	
	bool cVar0;
	std::shared_ptr<java::lang::Character> cVar1;
	int cp;
	auto chars;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this->_nextIdx != this->_text->length() )
		goto label_cond_11;
	if ( this->_remainingChar )     
		goto label_cond_11;
	return cVar1;
	// 127    .line 144
label_cond_11:
	if ( !(this->_remainingChar) )  
		goto label_cond_1a;
	//    .local v2, "next":Ljava/lang/Character;
	this->_remainingChar = cVar1;
label_cond_19:
label_goto_19:
	return next;
	// 145    .line 148
	// 146    .end local v2    # "next":Ljava/lang/Character;
label_cond_1a:
	if ( !(this->_ignoreCase) )  
		goto label_cond_4b;
	cp = android::icu::lang::UCharacter::foldCase(java::lang::Character::codePointAt(this->_text, this->_nextIdx), cVar0);
	//    .local v1, "cp":I
	this->_nextIdx = (this->_nextIdx +  java::lang::Character::charCount(cp));
	chars = java::lang::Character::toChars(cp);
	//    .local v0, "chars":[C
	//    .restart local v2    # "next":Ljava/lang/Character;
	if ( chars->size() != 0x2 )
		goto label_cond_19;
	this->_remainingChar = java::lang::Character::valueOf(chars[cVar0]);
	goto label_goto_19;
	// 211    .line 158
	// 212    .end local v0    # "chars":[C
	// 213    .end local v1    # "cp":I
	// 214    .end local v2    # "next":Ljava/lang/Character;
label_cond_4b:
	//    .restart local v2    # "next":Ljava/lang/Character;
	this->_nextIdx = ( this->_nextIdx + 0x1);
	goto label_goto_19;

}
// .method public nextIndex()I
int android::icu::impl::TextTrieMap_S_CharIterator::nextIndex()
{
	
	return this->_nextIdx;

}
// .method public processedLength()I
int android::icu::impl::TextTrieMap_S_CharIterator::processedLength()
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	if ( !(this->_remainingChar) )  
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("In the middle of surrogate pair")));
	// throw
	throw cVar0;
	// 279    .line 181
label_cond_d:
	return (this->_nextIdx -  this->_startIdx);

}
// .method public remove()V
void android::icu::impl::TextTrieMap_S_CharIterator::remove()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("remove() not supproted")));
	// throw
	throw cVar0;

}


