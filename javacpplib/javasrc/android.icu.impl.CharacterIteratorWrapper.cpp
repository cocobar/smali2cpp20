// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CharacterIteratorWrapper.smali
#include "java2ctype.h"
#include "android.icu.impl.CharacterIteratorWrapper.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.CharacterIterator.h"

// .method public constructor <init>(Ljava/text/CharacterIterator;)V
android::icu::impl::CharacterIteratorWrapper::CharacterIteratorWrapper(std::shared_ptr<java::text::CharacterIterator> iter)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "iter"    # Ljava/text/CharacterIterator;
	// 017    invoke-direct {p0}, Landroid/icu/text/UCharacterIterator;-><init>()V
	if ( iter )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 029    .line 32
label_cond_b:
	this->iterator = iter;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::CharacterIteratorWrapper::clone()
{
	
	std::shared_ptr<android::icu::impl::CharacterIteratorWrapper> result;
	std::shared_ptr<java::text::CharacterIterator> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	result = this->clone();
	result->checkCast("android::icu::impl::CharacterIteratorWrapper");
	//    .local v1, "result":Landroid/icu/impl/CharacterIteratorWrapper;
	cVar0 = this->iterator->clone();
	cVar0->checkCast("java::text::CharacterIterator");
	result->iterator = cVar0;
	//label_try_end_10:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_11;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_10} :catch_11
	return result;
	// 068    .line 137
	// 069    .end local v1    # "result":Landroid/icu/impl/CharacterIteratorWrapper;
label_catch_11:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	return 0x0;

}
// .method public current()I
int android::icu::impl::CharacterIteratorWrapper::current()
{
	
	int c;
	
	c = this->iterator->current();
	//    .local v0, "c":I
	if ( c != 0xffff )
		goto label_cond_d;
	return -0x1;
	// 102    .line 44
label_cond_d:
	return c;

}
// .method public getCharacterIterator()Ljava/text/CharacterIterator;
std::shared_ptr<java::text::CharacterIterator> android::icu::impl::CharacterIteratorWrapper::getCharacterIterator()
{
	
	std::shared_ptr<java::text::CharacterIterator> cVar0;
	
	cVar0 = this->iterator->clone();
	cVar0->checkCast("java::text::CharacterIterator");
	return cVar0;

}
// .method public getIndex()I
int android::icu::impl::CharacterIteratorWrapper::getIndex()
{
	
	return this->iterator->getIndex();

}
// .method public getLength()I
int android::icu::impl::CharacterIteratorWrapper::getLength()
{
	
	return (this->iterator->getEndIndex() -  this->iterator->getBeginIndex());

}
// .method public getText([CI)I
int android::icu::impl::CharacterIteratorWrapper::getText(std::shared_ptr<char[]> fillIn,int offset)
{
	
	int length;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	int ch;
	int offset;
	
	//    .param p1, "fillIn"    # [C
	//    .param p2, "offset"    # I
	length = (this->iterator->getEndIndex() - this->iterator->getBeginIndex());
	//    .local v2, "length":I
	//    .local v1, "currentIndex":I
	if ( offset < 0 ) 
		goto label_cond_1b;
	if ( (offset + length) <= fillIn->size() )
		goto label_cond_25;
label_cond_1b:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>(java::lang::Integer::toString(length));
	// throw
	throw cVar0;
	// 210    .line 119
label_cond_25:
	ch = this->iterator->first();
	//    .local v0, "ch":C
	offset = offset;
	//    .end local p2    # "offset":I
	//    .local v3, "offset":I
label_goto_2c:
	if ( ch == 0xffff )
		goto label_cond_3d;
	//    .end local v3    # "offset":I
	//    .restart local p2    # "offset":I
	fillIn[offset] = ch;
	ch = this->iterator->next();
	offset = ( offset + 0x1);
	//    .end local p2    # "offset":I
	//    .restart local v3    # "offset":I
	goto label_goto_2c;
	// 248    .line 122
label_cond_3d:
	this->iterator->setIndex(this->iterator->getIndex());
	return length;

}
// .method public moveIndex(I)I
int android::icu::impl::CharacterIteratorWrapper::moveIndex(int delta)
{
	
	int length;
	int idx;
	
	//    .param p1, "delta"    # I
	length = (this->iterator->getEndIndex() - this->iterator->getBeginIndex());
	//    .local v1, "length":I
	idx = (this->iterator->getIndex() + delta);
	//    .local v0, "idx":I
	if ( idx >= 0 )
		goto label_cond_20;
	idx = 0x0;
label_cond_19:
label_goto_19:
	return this->iterator->setIndex(idx);
	// 306    .line 150
label_cond_20:
	if ( idx <= length )
		goto label_cond_19;
	idx = length;
	goto label_goto_19;

}
// .method public next()I
int android::icu::impl::CharacterIteratorWrapper::next()
{
	
	int i;
	
	i = this->iterator->current();
	//    .local v0, "i":I
	this->iterator->next();
	if ( i != 0xffff )
		goto label_cond_12;
	return -0x1;
	// 343    .line 73
label_cond_12:
	return i;

}
// .method public previous()I
int android::icu::impl::CharacterIteratorWrapper::previous()
{
	
	int i;
	
	i = this->iterator->previous();
	//    .local v0, "i":I
	if ( i != 0xffff )
		goto label_cond_d;
	return -0x1;
	// 370    .line 85
label_cond_d:
	return i;

}
// .method public setIndex(I)V
void android::icu::impl::CharacterIteratorWrapper::setIndex(int index)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "index"    # I
	try {
	//label_try_start_0:
	this->iterator->setIndex(index);
	//label_try_end_5:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_5} :catch_6
	return;
	// 391    .line 95
label_catch_6:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/IllegalArgumentException;
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;

}
// .method public setToLimit()V
void android::icu::impl::CharacterIteratorWrapper::setToLimit()
{
	
	this->iterator->setIndex(this->iterator->getEndIndex());
	return;

}


