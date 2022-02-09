// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\UVector32.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.UVector32.h"
#include "java.lang.System.h"

// .method public constructor <init>()V
android::icu::impl::coll::UVector32::UVector32()
{
	
	// 018    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->buffer = std::make_shared<std::vector<int[]>>(0x20);
	this->length = 0x0;
	return;

}
// .method private ensureAppendCapacity()V
void android::icu::impl::coll::UVector32::ensureAppendCapacity()
{
	
	int cVar0;
	std::shared<std::vector<int[]>> newBuffer;
	
	cVar0 = 0x0;
	if ( this->length <  this->buffer->size() )
		goto label_cond_20;
	if ( this->buffer->size() >  0xffff )
		goto label_cond_21;
	//    .local v1, "newCapacity":I
label_goto_15:
	newBuffer = std::make_shared<std::vector<int[]>>(newCapacity);
	//    .local v0, "newBuffer":[I
	java::lang::System::arraycopy(this->buffer, cVar0, newBuffer, cVar0, this->length);
	this->buffer = newBuffer;
	//    .end local v0    # "newBuffer":[I
	//    .end local v1    # "newCapacity":I
label_cond_20:
	return;
	// 088    .line 44
label_cond_21:
	//    .restart local v1    # "newCapacity":I
	goto label_goto_15;

}
// .method public addElement(I)V
void android::icu::impl::coll::UVector32::addElement(int e)
{
	
	int cVar0;
	
	//    .param p1, "e"    # I
	this->ensureAppendCapacity();
	cVar0 = this->length;
	this->length = ( cVar0 + 0x1);
	this->buffer[cVar0] = e;
	return;

}
// .method public elementAti(I)I
int android::icu::impl::coll::UVector32::elementAti(int i)
{
	
	//    .param p1, "i"    # I
	return this->buffer[i];

}
// .method public getBuffer()[I
int android::icu::impl::coll::UVector32::getBuffer()
{
	
	return this->buffer;

}
// .method public insertElementAt(II)V
void android::icu::impl::coll::UVector32::insertElementAt(int elem,int index)
{
	
	//    .param p1, "elem"    # I
	//    .param p2, "index"    # I
	this->ensureAppendCapacity();
	java::lang::System::arraycopy(this->buffer, index, this->buffer, ( index + 0x1), (this->length -  index));
	this->buffer[index] = elem;
	this->length = ( this->length + 0x1);
	return;

}
// .method public isEmpty()Z
bool android::icu::impl::coll::UVector32::isEmpty()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->length )     
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method public removeAllElements()V
void android::icu::impl::coll::UVector32::removeAllElements()
{
	
	this->length = 0x0;
	return;

}
// .method public setElementAt(II)V
void android::icu::impl::coll::UVector32::setElementAt(int elem,int index)
{
	
	//    .param p1, "elem"    # I
	//    .param p2, "index"    # I
	this->buffer[index] = elem;
	return;

}
// .method public size()I
int android::icu::impl::coll::UVector32::size()
{
	
	return this->length;

}


