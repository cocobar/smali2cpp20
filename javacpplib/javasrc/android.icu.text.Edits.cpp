// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Edits.smali
#include "java2ctype.h"
#include "android.icu.text.Edits_S_Iterator.h"
#include "android.icu.text.Edits.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.BufferOverflowException.h"
#include "java.util.Arrays.h"

static android::icu::text::Edits::LENGTH_IN_1TRAIL = 0x3d;
static android::icu::text::Edits::LENGTH_IN_2TRAIL = 0x3e;
static android::icu::text::Edits::MAX_SHORT_CHANGE = 0x6fff;
static android::icu::text::Edits::MAX_SHORT_CHANGE_LENGTH = 0xfff;
static android::icu::text::Edits::MAX_SHORT_WIDTH = 0x6;
static android::icu::text::Edits::MAX_UNCHANGED = 0xfff;
static android::icu::text::Edits::MAX_UNCHANGED_LENGTH = 0x1000;
static android::icu::text::Edits::STACK_CAPACITY = 0x64;
// .method public constructor <init>()V
android::icu::text::Edits::Edits()
{
	
	// 046    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->array = std::make_shared<std::vector<char[]>>(0x64);
	return;

}
// .method private append(I)V
void android::icu::text::Edits::append(int r)
{
	
	int cVar0;
	
	//    .param p1, "r"    # I
	if ( this->length <  this->array->size() )
		goto label_cond_d;
	if ( !(this->growArray()) )  
		goto label_cond_18;
label_cond_d:
	cVar0 = this->length;
	this->length = ( cVar0 + 0x1);
	this->array[cVar0] = (char)(r);
label_cond_18:
	return;

}
// .method private growArray()Z
bool android::icu::text::Edits::growArray()
{
	
	int newCapacity;
	std::shared_ptr<java::nio::BufferOverflowException> cVar0;
	std::shared_ptr<java::nio::BufferOverflowException> cVar1;
	
	if ( this->array->size() != 0x64 )
		goto label_cond_17;
	newCapacity = 0x7d0;
	//    .local v0, "newCapacity":I
label_goto_9:
	if ( (newCapacity - this->array->size()) >= 0x5 )
		goto label_cond_37;
	cVar0 = std::make_shared<java::nio::BufferOverflowException>();
	// throw
	throw cVar0;
	// 134    .line 175
	// 135    .end local v0    # "newCapacity":I
label_cond_17:
	if ( this->array->size() != 0x7fffffff )
		goto label_cond_25;
	cVar1 = std::make_shared<java::nio::BufferOverflowException>();
	// throw
	throw cVar1;
	// 152    .line 177
label_cond_25:
	if ( this->array->size() <  0x3fffffff )
		goto label_cond_31;
	newCapacity = 0x7fffffff;
	//    .restart local v0    # "newCapacity":I
	goto label_goto_9;
	// 168    .line 180
	// 169    .end local v0    # "newCapacity":I
label_cond_31:
	newCapacity = ( this->array->size() * 0x2);
	//    .restart local v0    # "newCapacity":I
	goto label_goto_9;
	// 180    .line 186
label_cond_37:
	this->array = java::util::Arrays::copyOf(this->array, newCapacity);
	return 0x1;

}
// .method private lastUnit()I
int android::icu::text::Edits::lastUnit()
{
	
	int cVar0;
	
	if ( this->length <= 0 )
		goto label_cond_d;
	cVar0 = this->array[( this->length + -0x1)];
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = 0xffff;
	goto label_goto_c;

}
// .method private setLastUnit(I)V
void android::icu::text::Edits::setLastUnit(int last)
{
	
	//    .param p1, "last"    # I
	this->array[( this->length + -0x1)] = (char)(last);
	return;

}
// .method public addReplace(II)V
void android::icu::text::Edits::addReplace(int oldLength,int newLength)
{
	
	int cVar0;
	int cVar1;
	int last;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int newDelta;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar4;
	int head;
	int limit;
	
	//    .param p1, "oldLength"    # I
	//    .param p2, "newLength"    # I
	cVar0 = 0x3d;
	cVar1 = 0x8000;
	if ( oldLength != newLength )
		goto label_cond_2e;
	if ( oldLength <= 0 )
		goto label_cond_2e;
	if ( oldLength >  0x6 )
		goto label_cond_2e;
	last = this->lastUnit();
	//    .local v1, "last":I
	if ( 0xfff >= last )
		goto label_cond_28;
	if ( last >= 0x6fff )
		goto label_cond_28;
	if ( _shri(last,0xc) != oldLength )
		goto label_cond_28;
	if ( ( last & 0xfff) >= 0xfff )
		goto label_cond_28;
	this->setLastUnit(( last + 0x1));
	return;
	// 297    .line 111
label_cond_28:
	this->append(( oldLength << 0xc));
	return;
	// 306    .line 115
	// 307    .end local v1    # "last":I
label_cond_2e:
	if ( oldLength < 0 ) 
		goto label_cond_32;
	if ( newLength >= 0 )
		goto label_cond_5e;
label_cond_32:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("addReplace(")))->append(oldLength)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(newLength)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("): both lengths must be non-negative")))->toString());
	// throw
	throw cVar2;
	// 359    .line 120
label_cond_5e:
	if ( oldLength )     
		goto label_cond_63;
	if ( newLength )     
		goto label_cond_63;
	return;
	// 368    .line 123
label_cond_63:
	newDelta = (newLength - oldLength);
	//    .local v4, "newDelta":I
	if ( !(newDelta) )  
		goto label_cond_8f;
	if ( newDelta <= 0 )
		goto label_cond_7c;
	if ( this->delta < 0 ) 
		goto label_cond_7c;
	if ( newDelta <= (0x7fffffff - this->delta) )
		goto label_cond_7c;
label_cond_76:
	cVar4 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar4;
	// 399    .line 126
label_cond_7c:
	if ( newDelta >= 0 )
		goto label_cond_8a;
	if ( this->delta >= 0 )
		goto label_cond_8a;
	if ( newDelta <  (-0x80000000 - this->delta) )
		goto label_cond_76;
label_cond_8a:
	this->delta = (this->delta +  newDelta);
label_cond_8f:
	head = 0x7000;
	//    .local v0, "head":I
	if ( oldLength >= cVar0 )
		goto label_cond_9e;
	if ( newLength >= cVar0 )
		goto label_cond_9e;
	head = ( ( oldLength << 0x6) | 0x7000);
	head = (head |  newLength);
	this->append(head);
label_cond_9d:
label_goto_9d:
	return;
	// 449    .line 138
label_cond_9e:
	if ( (this->array->size() -  this->length) >= 0x5 )
		goto label_cond_ad;
	if ( !(this->growArray()) )  
		goto label_cond_9d;
label_cond_ad:
	limit = ( this->length + 0x1);
	//    .local v2, "limit":I
	if ( oldLength >= cVar0 )
		goto label_cond_c6;
	head = ( ( oldLength << 0x6) | 0x7000);
	limit = limit;
	//    .end local v2    # "limit":I
	//    .local v3, "limit":I
label_goto_b8:
	if ( newLength >= cVar0 )
		goto label_cond_f3;
	head = (head |  newLength);
	//    .end local v3    # "limit":I
	//    .restart local v2    # "limit":I
label_goto_bc:
	this->array[this->length] = (char)(head);
	this->length = limit;
	goto label_goto_9d;
	// 514    .line 142
label_cond_c6:
	if ( oldLength >  0x7fff )
		goto label_cond_d6;
	head = 0x7f40;
	limit = ( limit + 0x1);
	//    .end local v2    # "limit":I
	//    .restart local v3    # "limit":I
	this->array[limit] = (char)((cVar1 | oldLength));
	goto label_goto_b8;
	// 538    .line 146
	// 539    .end local v3    # "limit":I
	// 540    .restart local v2    # "limit":I
label_cond_d6:
	head = ( ( ( _shri(oldLength,0x1e) + 0x3e) << 0x6) | 0x7000);
	limit = ( limit + 0x1);
	//    .end local v2    # "limit":I
	//    .restart local v3    # "limit":I
	this->array[limit] = (char)((_shri(oldLength,0xf) |  cVar1));
	//    .end local v3    # "limit":I
	//    .restart local v2    # "limit":I
	this->array[limit] = (char)((cVar1 | oldLength));
	limit = ( limit + 0x1);
	//    .end local v2    # "limit":I
	//    .restart local v3    # "limit":I
	goto label_goto_b8;
	// 584    .line 152
label_cond_f3:
	if ( newLength >  0x7fff )
		goto label_cond_103;
	head = ( head | 0x3d);
	//    .end local v3    # "limit":I
	//    .restart local v2    # "limit":I
	this->array[limit] = (char)((cVar1 | newLength));
	goto label_goto_bc;
	// 608    .line 156
	// 609    .end local v2    # "limit":I
	// 610    .restart local v3    # "limit":I
label_cond_103:
	head = (head |  ( _shri(newLength,0x1e) + 0x3e));
	limit = ( limit + 0x1);
	//    .end local v3    # "limit":I
	//    .restart local v2    # "limit":I
	this->array[limit] = (char)((_shri(newLength,0xf) |  cVar1));
	//    .end local v2    # "limit":I
	//    .restart local v3    # "limit":I
	this->array[limit] = (char)((cVar1 | newLength));
	//    .end local v3    # "limit":I
	//    .restart local v2    # "limit":I
	goto label_goto_bc;

}
// .method public addUnchanged(I)V
void android::icu::text::Edits::addUnchanged(int cVar3)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	int last;
	int remaining;
	int cVar3;
	
	//    .param p1, "unchangedLength"    # I
	cVar0 = 0xfff;
	if ( cVar3 >= 0 )
		goto label_cond_25;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("addUnchanged(")))->append(cVar3)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("): length must not be negative")))->toString());
	// throw
	throw cVar1;
	// 696    .line 75
label_cond_25:
	last = this->lastUnit();
	//    .local v0, "last":I
	if ( last >= cVar0 )
		goto label_cond_39;
	remaining = ( last - 0xfff);
	//    .local v1, "remaining":I
	if ( remaining <  cVar3 )
		goto label_cond_35;
	this->setLastUnit((last + cVar3));
	return;
	// 721    .line 82
label_cond_35:
	this->setLastUnit(cVar0);
	cVar3 = (cVar3 -  remaining);
	//    .end local v1    # "remaining":I
label_cond_39:
label_goto_39:
	if ( cVar3 <  0x1000 )
		goto label_cond_43;
	this->append(cVar0);
	cVar3 = ( cVar3 + -0x1000);
	goto label_goto_39;
	// 744    .line 91
label_cond_43:
	if ( cVar3 <= 0 )
		goto label_cond_4a;
	this->append(( cVar3 + -0x1));
label_cond_4a:
	return;

}
// .method public getCoarseChangesIterator()Landroid/icu/text/Edits$Iterator;
std::shared_ptr<android::icu::text::Edits_S_Iterator> android::icu::text::Edits::getCoarseChangesIterator()
{
	
	bool cVar0;
	std::shared_ptr<android::icu::text::Edits_S_Iterator> cVar1;
	
	cVar0 = 0x1;
	cVar1 = std::make_shared<android::icu::text::Edits_S_Iterator>(this->array, this->length, cVar0, cVar0, 0x0);
	return cVar1;

}
// .method public getCoarseIterator()Landroid/icu/text/Edits$Iterator;
std::shared_ptr<android::icu::text::Edits_S_Iterator> android::icu::text::Edits::getCoarseIterator()
{
	
	std::shared_ptr<android::icu::text::Edits_S_Iterator> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::Edits_S_Iterator>(this->array, this->length, 0x0, 0x1, 0x0);
	return cVar0;

}
// .method public getFineChangesIterator()Landroid/icu/text/Edits$Iterator;
std::shared_ptr<android::icu::text::Edits_S_Iterator> android::icu::text::Edits::getFineChangesIterator()
{
	
	std::shared_ptr<android::icu::text::Edits_S_Iterator> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::Edits_S_Iterator>(this->array, this->length, 0x1, 0x0, 0x0);
	return cVar0;

}
// .method public getFineIterator()Landroid/icu/text/Edits$Iterator;
std::shared_ptr<android::icu::text::Edits_S_Iterator> android::icu::text::Edits::getFineIterator()
{
	
	bool cVar0;
	std::shared_ptr<android::icu::text::Edits_S_Iterator> cVar1;
	
	cVar0 = 0x0;
	cVar1 = std::make_shared<android::icu::text::Edits_S_Iterator>(this->array, this->length, cVar0, cVar0, 0x0);
	return cVar1;

}
// .method public hasChanges()Z
bool android::icu::text::Edits::hasChanges()
{
	
	bool cVar0;
	int i;
	
	cVar0 = 0x1;
	if ( !(this->delta) )  
		goto label_cond_7;
	return cVar0;
	// 862    .line 204
label_cond_7:
	i = 0x0;
	//    .local v0, "i":I
label_goto_8:
	if ( i >= this->length )
		goto label_cond_18;
	if ( this->array[i] <= 0xfff )
		goto label_cond_15;
	return cVar0;
	// 884    .line 204
label_cond_15:
	i = ( i + 0x1);
	goto label_goto_8;
	// 890    .line 209
label_cond_18:
	return 0x0;

}
// .method public lengthDelta()I
int android::icu::text::Edits::lengthDelta()
{
	
	return this->delta;

}
// .method public reset()V
void android::icu::text::Edits::reset()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	this->delta = cVar0;
	this->length = cVar0;
	return;

}


