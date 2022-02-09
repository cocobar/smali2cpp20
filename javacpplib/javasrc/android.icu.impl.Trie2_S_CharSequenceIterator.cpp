// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2$CharSequenceIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_S_CharSequenceIterator.h"
#include "android.icu.impl.Trie2_S_CharSequenceValues.h"
#include "android.icu.impl.Trie2.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.String.h"
#include "java.lang.UnsupportedOperationException.h"

// .method constructor <init>(Landroid/icu/impl/Trie2;Ljava/lang/CharSequence;I)V
android::icu::impl::Trie2_S_CharSequenceIterator::Trie2_S_CharSequenceIterator(std::shared_ptr<android::icu::impl::Trie2> this_S_0,std::shared_ptr<java::lang::CharSequence> t,int index)
{
	
	std::shared_ptr<android::icu::impl::Trie2_S_CharSequenceValues> cVar0;
	
	//    .param p1, "this$0"    # Landroid/icu/impl/Trie2;
	//    .param p2, "t"    # Ljava/lang/CharSequence;
	//    .param p3, "index"    # I
	this->this_S_0 = this_S_0;
	// 054    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::impl::Trie2_S_CharSequenceValues>();
	this->fResults = cVar0;
	this->text = t;
	this->textLength = this->text->length();
	this->set(index);
	return;

}
// .method public final hasNext()Z
bool android::icu::impl::Trie2_S_CharSequenceIterator::hasNext()
{
	
	bool cVar0;
	
	if ( this->index >= this->textLength )
		goto label_cond_8;
	cVar0 = 0x1;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method public final hasPrevious()Z
bool android::icu::impl::Trie2_S_CharSequenceIterator::hasPrevious()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->index <= 0 )
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method public next()Landroid/icu/impl/Trie2$CharSequenceValues;
std::shared_ptr<android::icu::impl::Trie2_S_CharSequenceValues> android::icu::impl::Trie2_S_CharSequenceIterator::next()
{
	
	int c;
	
	c = java::lang::Character::codePointAt(this->text, this->index);
	//    .local v0, "c":I
	//    .local v1, "val":I
	this->fResults->index = this->index;
	this->fResults->codePoint = c;
	this->fResults->value = this->this_S_0->get(c);
	this->index = ( this->index + 0x1);
	if ( c <  0x10000 )
		goto label_cond_2c;
	this->index = ( this->index + 0x1);
label_cond_2c:
	return this->fResults;

}
// .method public previous()Landroid/icu/impl/Trie2$CharSequenceValues;
std::shared_ptr<android::icu::impl::Trie2_S_CharSequenceValues> android::icu::impl::Trie2_S_CharSequenceIterator::previous()
{
	
	int c;
	
	c = java::lang::Character::codePointBefore(this->text, this->index);
	//    .local v0, "c":I
	//    .local v1, "val":I
	this->index = ( this->index + -0x1);
	if ( c <  0x10000 )
		goto label_cond_1e;
	this->index = ( this->index + -0x1);
label_cond_1e:
	this->fResults->index = this->index;
	this->fResults->codePoint = c;
	this->fResults->value = this->this_S_0->get(c);
	return this->fResults;

}
// .method public remove()V
void android::icu::impl::Trie2_S_CharSequenceIterator::remove()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Trie2.CharSequenceIterator does not support remove().")));
	// throw
	throw cVar0;

}
// .method public set(I)V
void android::icu::impl::Trie2_S_CharSequenceIterator::set(int i)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p1, "i"    # I
	if ( i < 0 ) 
		goto label_cond_6;
	if ( i <= this->textLength )
		goto label_cond_c;
label_cond_6:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 299    .line 555
label_cond_c:
	this->index = i;
	return;

}


