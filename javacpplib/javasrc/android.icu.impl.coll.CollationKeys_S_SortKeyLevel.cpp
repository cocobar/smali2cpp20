// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationKeys$SortKeyLevel.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationKeys_S_SortKeyByteSink.h"
#include "android.icu.impl.coll.CollationKeys_S_SortKeyLevel.h"
#include "java.lang.AssertionError.h"
#include "java.lang.System.h"

static android::icu::impl::coll::CollationKeys_S_SortKeyLevel::_assertionsDisabled;
static android::icu::impl::coll::CollationKeys_S_SortKeyLevel::INITIAL_CAPACITY = 0x28;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationKeys_S_SortKeyLevel::static_cinit()
{
	
	android::icu::impl::coll::CollationKeys_S_SortKeyLevel::_assertionsDisabled = ( android::icu::impl::coll::CollationKeys_S_SortKeyLevel()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>()V
android::icu::impl::coll::CollationKeys_S_SortKeyLevel::CollationKeys_S_SortKeyLevel()
{
	
	// 053    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->buffer = std::make_shared<std::vector<unsigned char[]>>(0x28);
	this->len = 0x0;
	return;

}
// .method private ensureCapacity(I)Z
bool android::icu::impl::coll::CollationKeys_S_SortKeyLevel::ensureCapacity(int appendCapacity)
{
	
	int cVar0;
	int newCapacity;
	int altCapacity;
	std::shared<std::vector<unsigned char[]>> newbuf;
	
	//    .param p1, "appendCapacity"    # I
	cVar0 = 0x0;
	newCapacity = ( this->buffer->size() * 0x2);
	//    .local v1, "newCapacity":I
	altCapacity = (this->len + ( appendCapacity * 0x2));
	//    .local v0, "altCapacity":I
	if ( newCapacity >= altCapacity )
		goto label_cond_f;
	newCapacity = altCapacity;
label_cond_f:
	if ( newCapacity >= 0xc8 )
		goto label_cond_15;
label_cond_15:
	newbuf = std::make_shared<std::vector<unsigned char[]>>(newCapacity);
	//    .local v2, "newbuf":[B
	java::lang::System::arraycopy(this->buffer, cVar0, newbuf, cVar0, this->len);
	this->buffer = newbuf;
	return 0x1;

}
// .method appendByte(I)V
void android::icu::impl::coll::CollationKeys_S_SortKeyLevel::appendByte(int b)
{
	
	int cVar0;
	
	//    .param p1, "b"    # I
	if ( this->len <  this->buffer->size() )
		goto label_cond_e;
	if ( !(this->ensureCapacity(0x1)) )  
		goto label_cond_19;
label_cond_e:
	cVar0 = this->len;
	this->len = ( cVar0 + 0x1);
	this->buffer[cVar0] = (unsigned char)(b);
label_cond_19:
	return;

}
// .method appendReverseWeight16(I)V
void android::icu::impl::coll::CollationKeys_S_SortKeyLevel::appendReverseWeight16(int w)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	unsigned char b0;
	unsigned char b1;
	int appendLength;
	int cVar1;
	
	//    .param p1, "w"    # I
	if ( android::icu::impl::coll::CollationKeys_S_SortKeyLevel::_assertionsDisabled )     
		goto label_cond_10;
	if ( (0xffff &  w) )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 195    .line 221
label_cond_10:
	b0 = (unsigned char)(_ushri(w,0x8));
	//    .local v1, "b0":B
	b1 = (unsigned char)(w);
	//    .local v2, "b1":B
	if ( b1 )     
		goto label_cond_32;
	appendLength = 0x1;
	//    .local v0, "appendLength":I
label_goto_17:
	if ( (this->len +  appendLength) <= this->buffer->size() )
		goto label_cond_25;
	if ( !(this->ensureCapacity(appendLength)) )  
		goto label_cond_31;
label_cond_25:
	if ( b1 )     
		goto label_cond_34;
	cVar1 = this->len;
	this->len = ( cVar1 + 0x1);
	this->buffer[cVar1] = b0;
label_cond_31:
label_goto_31:
	return;
	// 250    .line 223
	// 251    .end local v0    # "appendLength":I
label_cond_32:
	//    .restart local v0    # "appendLength":I
	goto label_goto_17;
	// 258    .line 228
label_cond_34:
	this->buffer[this->len] = b1;
	this->buffer[( this->len + 0x1)] = b0;
	this->len = ( this->len + 0x2);
	goto label_goto_31;

}
// .method appendTo(Landroid/icu/impl/coll/CollationKeys$SortKeyByteSink;)V
void android::icu::impl::coll::CollationKeys_S_SortKeyLevel::appendTo(std::shared_ptr<android::icu::impl::coll::CollationKeys_S_SortKeyByteSink> sink)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "sink"    # Landroid/icu/impl/coll/CollationKeys$SortKeyByteSink;
	if ( android::icu::impl::coll::CollationKeys_S_SortKeyLevel::_assertionsDisabled )     
		goto label_cond_19;
	if ( this->len <= 0 )
		goto label_cond_13;
	if ( this->buffer[( this->len + -0x1)] == 0x1 )
		goto label_cond_19;
label_cond_13:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 318    .line 238
label_cond_19:
	sink->Append(this->buffer, ( this->len + -0x1));
	return;

}
// .method appendWeight16(I)V
void android::icu::impl::coll::CollationKeys_S_SortKeyLevel::appendWeight16(int w)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	unsigned char b1;
	int appendLength;
	int cVar1;
	int cVar2;
	
	//    .param p1, "w"    # I
	if ( android::icu::impl::coll::CollationKeys_S_SortKeyLevel::_assertionsDisabled )     
		goto label_cond_10;
	if ( (0xffff &  w) )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 354    .line 189
label_cond_10:
	//    .local v1, "b0":B
	b1 = (unsigned char)(w);
	//    .local v2, "b1":B
	if ( b1 )     
		goto label_cond_3c;
	appendLength = 0x1;
	//    .local v0, "appendLength":I
label_goto_17:
	if ( (this->len +  appendLength) <= this->buffer->size() )
		goto label_cond_25;
	if ( !(this->ensureCapacity(appendLength)) )  
		goto label_cond_3b;
label_cond_25:
	cVar1 = this->len;
	this->len = ( cVar1 + 0x1);
	this->buffer[cVar1] = (unsigned char)(_ushri(w,0x8));
	if ( !(b1) )  
		goto label_cond_3b;
	cVar2 = this->len;
	this->len = ( cVar2 + 0x1);
	this->buffer[cVar2] = b1;
label_cond_3b:
	return;
	// 419    .line 191
	// 420    .end local v0    # "appendLength":I
label_cond_3c:
	//    .restart local v0    # "appendLength":I
	goto label_goto_17;

}
// .method appendWeight32(J)V
void android::icu::impl::coll::CollationKeys_S_SortKeyLevel::appendWeight32(long long w)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	std::shared<std::vector<unsigned char[]>> bytes;
	int appendLength;
	int cVar5;
	int cVar6;
	int cVar7;
	int cVar8;
	
	//    .param p1, "w"    # J
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	if ( android::icu::impl::coll::CollationKeys_S_SortKeyLevel::_assertionsDisabled )     
		goto label_cond_14;
	if ( (w > 0x0) )     
		goto label_cond_14;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 458    .line 202
label_cond_14:
	bytes = std::make_shared<std::vector<unsigned char[]>>(0x4);
	bytes[cVar3] = (unsigned char)((int)(_ushrll(w,0x18)));
	bytes[cVar2] = (unsigned char)((int)(_ushrll(w,0x10)));
	bytes[cVar1] = (unsigned char)((int)(_ushrll(w,0x8)));
	bytes[cVar0] = (unsigned char)((int)(w));
	//    .local v1, "bytes":[B
	if ( bytes[cVar2] )     
		goto label_cond_83;
	appendLength = 0x1;
	//    .local v0, "appendLength":I
label_goto_38:
	if ( (this->len +  appendLength) <= this->buffer->size() )
		goto label_cond_46;
	if ( !(this->ensureCapacity(appendLength)) )  
		goto label_cond_82;
label_cond_46:
	cVar5 = this->len;
	this->len = ( cVar5 + 0x1);
	this->buffer[cVar5] = bytes[cVar3];
	if ( !(bytes[cVar2]) )  
		goto label_cond_82;
	cVar6 = this->len;
	this->len = ( cVar6 + 0x1);
	this->buffer[cVar6] = bytes[cVar2];
	if ( !(bytes[cVar1]) )  
		goto label_cond_82;
	cVar7 = this->len;
	this->len = ( cVar7 + 0x1);
	this->buffer[cVar7] = bytes[cVar1];
	if ( !(bytes[cVar0]) )  
		goto label_cond_82;
	cVar8 = this->len;
	this->len = ( cVar8 + 0x1);
	this->buffer[cVar8] = bytes[cVar0];
label_cond_82:
	return;
	// 600    .line 204
	// 601    .end local v0    # "appendLength":I
label_cond_83:
	if ( bytes[cVar1] )     
		goto label_cond_89;
	//    .restart local v0    # "appendLength":I
	goto label_goto_38;
	// 612    .end local v0    # "appendLength":I
label_cond_89:
	if ( bytes[cVar0] )     
		goto label_cond_8f;
	//    .restart local v0    # "appendLength":I
	goto label_goto_38;
	// 623    .end local v0    # "appendLength":I
label_cond_8f:
	//    .restart local v0    # "appendLength":I
	goto label_goto_38;

}
// .method data()[B
unsigned char android::icu::impl::coll::CollationKeys_S_SortKeyLevel::data()
{
	
	return this->buffer;

}
// .method getAt(I)B
unsigned char android::icu::impl::coll::CollationKeys_S_SortKeyLevel::getAt(int index)
{
	
	//    .param p1, "index"    # I
	return this->buffer[index];

}
// .method isEmpty()Z
bool android::icu::impl::coll::CollationKeys_S_SortKeyLevel::isEmpty()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->len )     
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method length()I
int android::icu::impl::coll::CollationKeys_S_SortKeyLevel::length()
{
	
	return this->len;

}


