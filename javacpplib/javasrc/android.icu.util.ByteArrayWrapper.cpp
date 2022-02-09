// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\ByteArrayWrapper.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.util.ByteArrayWrapper.h"
#include "java.lang.ClassCastException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.nio.ByteBuffer.h"

// .method public constructor <init>()V
android::icu::util::ByteArrayWrapper::ByteArrayWrapper()
{
	
	// 033    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/nio/ByteBuffer;)V
android::icu::util::ByteArrayWrapper::ByteArrayWrapper(std::shared_ptr<java::nio::ByteBuffer> source)
{
	
	//    .param p1, "source"    # Ljava/nio/ByteBuffer;
	// 045    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->size = source->limit();
	this->bytes = std::make_shared<std::vector<unsigned char[]>>(this->size);
	source->get(this->bytes, 0x0, this->size);
	return;

}
// .method public constructor <init>([BI)V
android::icu::util::ByteArrayWrapper::ByteArrayWrapper(std::shared_ptr<unsigned char[]> bytesToAdopt,int size)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "bytesToAdopt"    # [B
	//    .param p2, "size"    # I
	// 081    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( bytesToAdopt )     
		goto label_cond_21;
	if ( !(size) )  
		goto label_cond_21;
label_cond_7:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("illegal size: ")))->append(size)->toString());
	// throw
	throw cVar0;
	// 114    .line 60
label_cond_21:
	if ( size < 0 ) 
		goto label_cond_7;
	if ( !(bytesToAdopt) )  
		goto label_cond_28;
	if ( size >  bytesToAdopt->size() )
		goto label_cond_7;
label_cond_28:
	this->bytes = bytesToAdopt;
	this->size = size;
	return;

}
// .method private static final copyBytes([BI[BII)V
void android::icu::util::ByteArrayWrapper::copyBytes(std::shared_ptr<unsigned char[]> src,int srcoff,std::shared_ptr<unsigned char[]> tgt,int tgtoff,int length)
{
	
	int i;
	int n;
	int length;
	
	//    .param p0, "src"    # [B
	//    .param p1, "srcoff"    # I
	//    .param p2, "tgt"    # [B
	//    .param p3, "tgtoff"    # I
	//    .param p4, "length"    # I
	if ( length >= 0x40 )
		goto label_cond_13;
	i = srcoff;
	//    .local v0, "i":I
	n = tgtoff;
	//    .local v1, "n":I
label_goto_6:
	length = ( length + -0x1);
	if ( length < 0 ) 
		goto label_cond_16;
	tgt[n] = src[i];
	i = ( i + 0x1);
	n = ( n + 0x1);
	goto label_goto_6;
	// 173    .line 270
	// 174    .end local v0    # "i":I
	// 175    .end local v1    # "n":I
label_cond_13:
	java::lang::System::arraycopy(src, srcoff, tgt, tgtoff, length);
label_cond_16:
	return;

}
// .method public final append([BII)Landroid/icu/util/ByteArrayWrapper;
std::shared_ptr<android::icu::util::ByteArrayWrapper> android::icu::util::ByteArrayWrapper::append(std::shared_ptr<unsigned char[]> src,int start,int limit)
{
	
	int len;
	
	//    .param p1, "src"    # [B
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	len = (limit - start);
	//    .local v0, "len":I
	this->ensureCapacity((this->size +  len));
	android::icu::util::ByteArrayWrapper::copyBytes(src, start, this->bytes, this->size, len);
	this->size = (this->size +  len);
	return this;

}
// .method public compareTo(Landroid/icu/util/ByteArrayWrapper;)I
int android::icu::util::ByteArrayWrapper::compareTo(std::shared_ptr<android::icu::util::ByteArrayWrapper> other)
{
	
	int i;
	
	//    .param p1, "other"    # Landroid/icu/util/ByteArrayWrapper;
	if ( this != other )
		goto label_cond_4;
	return 0x0;
	// 234    .line 242
label_cond_4:
	if ( this->size >= other->size )
		goto label_cond_27;
	//    .local v1, "minSize":I
label_goto_c:
	i = 0x0;
	//    .local v0, "i":I
label_goto_d:
	if ( i >= minSize )
		goto label_cond_2d;
	if ( this->bytes[i] == other->bytes[i] )
		goto label_cond_2a;
	return (( this->bytes[i] & 0xff) -  ( other->bytes[i] & 0xff));
	// 281    .line 242
	// 282    .end local v0    # "i":I
	// 283    .end local v1    # "minSize":I
label_cond_27:
	//    .restart local v1    # "minSize":I
	goto label_goto_c;
	// 290    .line 243
	// 291    .restart local v0    # "i":I
label_cond_2a:
	i = ( i + 0x1);
	goto label_goto_d;
	// 297    .line 248
label_cond_2d:
	return (this->size -  other->size);

}
// .method public ensureCapacity(I)Landroid/icu/util/ByteArrayWrapper;
std::shared_ptr<android::icu::util::ByteArrayWrapper> android::icu::util::ByteArrayWrapper::ensureCapacity(int capacity)
{
	
	int cVar0;
	std::shared<std::vector<unsigned char[]>> newbytes;
	
	//    .param p1, "capacity"    # I
	cVar0 = 0x0;
	if ( !(this->bytes) )  
		goto label_cond_a;
	if ( this->bytes->size() >= capacity )
		goto label_cond_19;
label_cond_a:
	newbytes = std::make_shared<std::vector<unsigned char[]>>(capacity);
	//    .local v0, "newbytes":[B
	if ( !(this->bytes) )  
		goto label_cond_17;
	android::icu::util::ByteArrayWrapper::copyBytes(this->bytes, cVar0, newbytes, cVar0, this->size);
label_cond_17:
	this->bytes = newbytes;
	//    .end local v0    # "newbytes":[B
label_cond_19:
	return this;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::ByteArrayWrapper::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::util::ByteArrayWrapper> cVar2;
	int that;
	int i;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 381    .line 207
label_cond_5:
	if ( other )     
		goto label_cond_8;
	return cVar1;
	// 387    .line 209
label_cond_8:
	try {
	//label_try_start_8:
	cVar2 = other;
	cVar2->checkCast("android::icu::util::ByteArrayWrapper");
	that = cVar2;
	//    .local v3, "that":Landroid/icu/util/ByteArrayWrapper;
	if ( this->size == that->size )
		goto label_cond_13;
	return cVar1;
	// 406    .line 211
label_cond_13:
	i = 0x0;
	//    .local v2, "i":I
label_goto_14:
	if ( i >= this->size )
		goto label_cond_26;
	//label_try_end_20:
	}
	catch (java::lang::ClassCastException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_27;
	}
	//    .catch Ljava/lang/ClassCastException; {:try_start_8 .. :try_end_20} :catch_27
	if ( this->bytes[i] == that->bytes[i] )
		goto label_cond_23;
	return cVar1;
	// 431    .line 211
label_cond_23:
	i = ( i + 0x1);
	goto label_goto_14;
	// 437    .line 214
label_cond_26:
	return cVar0;
	// 441    .line 216
	// 442    .end local v2    # "i":I
	// 443    .end local v3    # "that":Landroid/icu/util/ByteArrayWrapper;
label_catch_27:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/ClassCastException;
	return cVar1;

}
// .method public hashCode()I
int android::icu::util::ByteArrayWrapper::hashCode()
{
	
	int result;
	int i;
	
	result = this->bytes->size();
	//    .local v1, "result":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_4:
	if ( i >= this->size )
		goto label_cond_13;
	result = (( result * 0x25) + this->bytes[i]);
	i = ( i + 0x1);
	goto label_goto_4;
	// 485    .line 230
label_cond_13:
	return result;

}
// .method public final releaseBytes()[B
unsigned char android::icu::util::ByteArrayWrapper::releaseBytes()
{
	
	//    .local v0, "result":[B
	this->bytes = 0x0;
	this->size = 0x0;
	return this->bytes;

}
// .method public final set([BII)Landroid/icu/util/ByteArrayWrapper;
std::shared_ptr<android::icu::util::ByteArrayWrapper> android::icu::util::ByteArrayWrapper::set(std::shared_ptr<unsigned char[]> src,int start,int limit)
{
	
	//    .param p1, "src"    # [B
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	this->size = 0x0;
	this->append(src, start, limit);
	return this;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ByteArrayWrapper::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	int i;
	
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "result":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= this->size )
		goto label_cond_24;
	if ( !(i) )  
		goto label_cond_12;
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")));
label_cond_12:
	result->append(android::icu::impl::Utility::hex((long long)(( this->bytes[i] & 0xff)), 0x2));
	i = ( i + 0x1);
	goto label_goto_6;
	// 580    .line 197
label_cond_24:
	return result->toString();

}


