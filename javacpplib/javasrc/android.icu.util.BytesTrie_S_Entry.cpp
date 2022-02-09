// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrie$Entry.smali
#include "java2ctype.h"
#include "android.icu.util.BytesTrie_S_Entry.h"
#include "java.lang.Math.h"
#include "java.lang.System.h"
#include "java.nio.ByteBuffer.h"

// .method static synthetic -get0(Landroid/icu/util/BytesTrie$Entry;)I
int android::icu::util::BytesTrie_S_Entry::_get0(std::shared_ptr<android::icu::util::BytesTrie_S_Entry> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/BytesTrie$Entry;
	return _this->length;

}
// .method static synthetic -wrap0(Landroid/icu/util/BytesTrie$Entry;[BII)V
void android::icu::util::BytesTrie_S_Entry::_wrap0(std::shared_ptr<android::icu::util::BytesTrie_S_Entry> _this,std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/BytesTrie$Entry;
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	_this->append(b, off, len);
	return;

}
// .method static synthetic -wrap1(Landroid/icu/util/BytesTrie$Entry;B)V
void android::icu::util::BytesTrie_S_Entry::_wrap1(std::shared_ptr<android::icu::util::BytesTrie_S_Entry> _this,unsigned char b)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/BytesTrie$Entry;
	//    .param p1, "b"    # B
	_this->append(b);
	return;

}
// .method static synthetic -wrap2(Landroid/icu/util/BytesTrie$Entry;I)V
void android::icu::util::BytesTrie_S_Entry::_wrap2(std::shared_ptr<android::icu::util::BytesTrie_S_Entry> _this,int newLength)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/BytesTrie$Entry;
	//    .param p1, "newLength"    # I
	_this->truncateString(newLength);
	return;

}
// .method private constructor <init>(I)V
android::icu::util::BytesTrie_S_Entry::BytesTrie_S_Entry(int capacity)
{
	
	//    .param p1, "capacity"    # I
	// 077    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->bytes = std::make_shared<std::vector<unsigned char[]>>(capacity);
	return;

}
// .method synthetic constructor <init>(ILandroid/icu/util/BytesTrie$Entry;)V
android::icu::util::BytesTrie_S_Entry::BytesTrie_S_Entry(int capacity,std::shared_ptr<android::icu::util::BytesTrie_S_Entry> _this1)
{
	
	//    .param p1, "capacity"    # I
	//    .param p2, "-this1"    # Landroid/icu/util/BytesTrie$Entry;
	android::icu::util::BytesTrie_S_Entry::(capacity);
	return;

}
// .method private append(B)V
void android::icu::util::BytesTrie_S_Entry::append(unsigned char b)
{
	
	int cVar0;
	
	//    .param p1, "b"    # B
	this->ensureCapacity(( this->length + 0x1));
	cVar0 = this->length;
	this->length = ( cVar0 + 0x1);
	this->bytes[cVar0] = b;
	return;

}
// .method private append([BII)V
void android::icu::util::BytesTrie_S_Entry::append(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	this->ensureCapacity((this->length +  len));
	java::lang::System::arraycopy(b, off, this->bytes, this->length, len);
	this->length = (this->length +  len);
	return;

}
// .method private ensureCapacity(I)V
void android::icu::util::BytesTrie_S_Entry::ensureCapacity(int len)
{
	
	int cVar0;
	std::shared<std::vector<unsigned char[]>> newBytes;
	
	//    .param p1, "len"    # I
	cVar0 = 0x0;
	if ( this->bytes->size() >= len )
		goto label_cond_1c;
	newBytes = std::make_shared<std::vector<unsigned char[]>>(java::lang::Math::min(( this->bytes->size() * 0x2), ( len * 0x2)));
	//    .local v0, "newBytes":[B
	java::lang::System::arraycopy(this->bytes, cVar0, newBytes, cVar0, this->length);
	this->bytes = newBytes;
	//    .end local v0    # "newBytes":[B
label_cond_1c:
	return;

}
// .method private truncateString(I)V
void android::icu::util::BytesTrie_S_Entry::truncateString(int newLength)
{
	
	//    .param p1, "newLength"    # I
	this->length = newLength;
	return;

}
// .method public byteAt(I)B
unsigned char android::icu::util::BytesTrie_S_Entry::byteAt(int index)
{
	
	//    .param p1, "index"    # I
	return this->bytes[index];

}
// .method public bytesAsByteBuffer()Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::util::BytesTrie_S_Entry::bytesAsByteBuffer()
{
	
	return java::nio::ByteBuffer::wrap(this->bytes, 0x0, this->length)->asReadOnlyBuffer();

}
// .method public bytesLength()I
int android::icu::util::BytesTrie_S_Entry::bytesLength()
{
	
	return this->length;

}
// .method public copyBytesTo([BI)V
void android::icu::util::BytesTrie_S_Entry::copyBytesTo(std::shared_ptr<unsigned char[]> dest,int destOffset)
{
	
	//    .param p1, "dest"    # [B
	//    .param p2, "destOffset"    # I
	java::lang::System::arraycopy(this->bytes, 0x0, dest, destOffset, this->length);
	return;

}


