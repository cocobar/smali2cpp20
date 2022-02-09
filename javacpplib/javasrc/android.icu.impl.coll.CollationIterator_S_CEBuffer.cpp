// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationIterator$CEBuffer.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationIterator_S_CEBuffer.h"
#include "java.lang.System.h"

static android::icu::impl::coll::CollationIterator_S_CEBuffer::INITIAL_CAPACITY = 0x28;
// .method constructor <init>()V
android::icu::impl::coll::CollationIterator_S_CEBuffer::CollationIterator_S_CEBuffer()
{
	
	// 033    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->length = 0x0;
	this->buffer = std::make_shared<std::vector<long long[]>>(0x28);
	return;

}
// .method append(J)V
void android::icu::impl::coll::CollationIterator_S_CEBuffer::append(long long ce)
{
	
	int cVar0;
	
	//    .param p1, "ce"    # J
	if ( this->length <  0x28 )
		goto label_cond_a;
	this->ensureAppendCapacity(0x1);
label_cond_a:
	cVar0 = this->length;
	this->length = ( cVar0 + 0x1);
	this->buffer[cVar0] = ce;
	return;

}
// .method appendUnsafe(J)V
void android::icu::impl::coll::CollationIterator_S_CEBuffer::appendUnsafe(long long ce)
{
	
	int cVar0;
	
	//    .param p1, "ce"    # J
	cVar0 = this->length;
	this->length = ( cVar0 + 0x1);
	this->buffer[cVar0] = ce;
	return;

}
// .method ensureAppendCapacity(I)V
void android::icu::impl::coll::CollationIterator_S_CEBuffer::ensureAppendCapacity(int appCap)
{
	
	int cVar0;
	int capacity;
	std::shared<std::vector<long long[]>> newBuffer;
	
	//    .param p1, "appCap"    # I
	cVar0 = 0x0;
	capacity = this->buffer->size();
	//    .local v0, "capacity":I
	if ( (this->length +  appCap) >  capacity )
		goto label_cond_a;
	return;
	// 128    .line 52
label_cond_a:
	if ( capacity >= 0x3e8 )
		goto label_cond_21;
	capacity = ( capacity * 0x4);
label_goto_10:
	if ( capacity <  (this->length +  appCap) )
		goto label_cond_a;
	newBuffer = std::make_shared<std::vector<long long[]>>(capacity);
	//    .local v1, "newBuffer":[J
	java::lang::System::arraycopy(this->buffer, cVar0, newBuffer, cVar0, this->length);
	this->buffer = newBuffer;
	return;
	// 162    .line 55
	// 163    .end local v1    # "newBuffer":[J
label_cond_21:
	capacity = ( capacity * 0x2);
	goto label_goto_10;

}
// .method get(I)J
long long android::icu::impl::coll::CollationIterator_S_CEBuffer::get(int i)
{
	
	//    .param p1, "i"    # I
	return this->buffer[i];

}
// .method getCEs()[J
long long android::icu::impl::coll::CollationIterator_S_CEBuffer::getCEs()
{
	
	return this->buffer;

}
// .method incLength()V
void android::icu::impl::coll::CollationIterator_S_CEBuffer::incLength()
{
	
	if ( this->length <  0x28 )
		goto label_cond_a;
	this->ensureAppendCapacity(0x1);
label_cond_a:
	this->length = ( this->length + 0x1);
	return;

}
// .method set(IJ)J
long long android::icu::impl::coll::CollationIterator_S_CEBuffer::set(int i,long long ce)
{
	
	//    .param p1, "i"    # I
	//    .param p2, "ce"    # J
	this->buffer[i] = ce;
	return ce;

}


