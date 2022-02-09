// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharArrayIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharArrayIterator.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"

// .method public constructor <init>([CII)V
android::icu::impl::UCharArrayIterator::UCharArrayIterator(std::shared_ptr<char[]> text,int start,int limit)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "text"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	// 025    invoke-direct {p0}, Landroid/icu/text/UCharacterIterator;-><init>()V
	if ( start < 0 ) 
		goto label_cond_8;
	if ( limit <= text->size() )
		goto label_cond_40;
label_cond_8:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("start: ")))->append(start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" or limit: ")))->append(limit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" out of range [0, ")))->append(text->size())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
	// throw
	throw cVar0;
	// 094    .line 29
label_cond_40:
	if ( start >  limit )
		goto label_cond_8;
	this->text = text;
	this->start = start;
	this->limit = limit;
	this->pos = start;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::UCharArrayIterator::clone()
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	//label_try_end_3:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_3} :catch_5
	return this->clone();
	// 130    .line 92
label_catch_5:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	return 0x0;

}
// .method public current()I
int android::icu::impl::UCharArrayIterator::current()
{
	
	int cVar0;
	
	if ( this->pos >= this->limit )
		goto label_cond_d;
	cVar0 = this->text[this->pos];
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = -0x1;
	goto label_goto_c;

}
// .method public getIndex()I
int android::icu::impl::UCharArrayIterator::getIndex()
{
	
	return (this->pos -  this->start);

}
// .method public getLength()I
int android::icu::impl::UCharArrayIterator::getLength()
{
	
	return (this->limit -  this->start);

}
// .method public getText([CI)I
int android::icu::impl::UCharArrayIterator::getText(std::shared_ptr<char[]> fillIn,int offset)
{
	
	int len;
	
	//    .param p1, "fillIn"    # [C
	//    .param p2, "offset"    # I
	len = (this->limit - this->start);
	//    .local v0, "len":I
	java::lang::System::arraycopy(this->text, this->start, fillIn, offset, len);
	return len;

}
// .method public next()I
int android::icu::impl::UCharArrayIterator::next()
{
	
	int cVar0;
	int cVar1;
	
	if ( this->pos >= this->limit )
		goto label_cond_11;
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	cVar1 = this->text[cVar0];
label_goto_10:
	return cVar1;
label_cond_11:
	cVar1 = -0x1;
	goto label_goto_10;

}
// .method public previous()I
int android::icu::impl::UCharArrayIterator::previous()
{
	
	int cVar0;
	int cVar1;
	
	if ( this->pos <= this->start )
		goto label_cond_11;
	cVar0 = ( this->pos + -0x1);
	this->pos = cVar0;
	cVar1 = this->text[cVar0];
label_goto_10:
	return cVar1;
label_cond_11:
	cVar1 = -0x1;
	goto label_goto_10;

}
// .method public setIndex(I)V
void android::icu::impl::UCharArrayIterator::setIndex(int index)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "index"    # I
	if ( index < 0 ) 
		goto label_cond_9;
	if ( index <= (this->limit -  this->start) )
		goto label_cond_3a;
label_cond_9:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("index: ")))->append(index)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" out of range [0, ")))->append((this->limit -  this->start))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
	// throw
	throw cVar0;
	// 350    .line 73
label_cond_3a:
	this->pos = (this->start +  index);
	return;

}


