// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrieBuilder.smali
#include "java2ctype.h"
#include "android.icu.util.BytesTrie.h"
#include "android.icu.util.BytesTrieBuilder_S_BytesAsCharSequence.h"
#include "android.icu.util.BytesTrieBuilder.h"
#include "android.icu.util.StringTrieBuilder_S_Option.h"
#include "java.lang.AssertionError.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.nio.ByteBuffer.h"

static android::icu::util::BytesTrieBuilder::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::util::BytesTrieBuilder::static_cinit()
{
	
	android::icu::util::BytesTrieBuilder::_assertionsDisabled = ( android::icu::util::BytesTrieBuilder()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>()V
android::icu::util::BytesTrieBuilder::BytesTrieBuilder()
{
	
	// 050    invoke-direct {p0}, Landroid/icu/util/StringTrieBuilder;-><init>()V
	this->intBytes = std::make_shared<std::vector<unsigned char[]>>(0x5);
	return;

}
// .method private buildBytes(Landroid/icu/util/StringTrieBuilder$Option;)V
void android::icu::util::BytesTrieBuilder::buildBytes(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> buildOption)
{
	
	//    .param p1, "buildOption"    # Landroid/icu/util/StringTrieBuilder$Option;
	if ( this->bytes )     
		goto label_cond_a;
	this->bytes = std::make_shared<std::vector<unsigned char[]>>(0x400);
label_cond_a:
	this->buildImpl(buildOption);
	return;

}
// .method private ensureCapacity(I)V
void android::icu::util::BytesTrieBuilder::ensureCapacity(int length)
{
	
	int newCapacity;
	std::shared<std::vector<unsigned char[]>> newBytes;
	
	//    .param p1, "length"    # I
	if ( length <= this->bytes->size() )
		goto label_cond_21;
	//    .local v1, "newCapacity":I
label_cond_8:
	newCapacity = ( newCapacity * 0x2);
	if ( newCapacity <= length )
		goto label_cond_8;
	newBytes = std::make_shared<std::vector<unsigned char[]>>(newCapacity);
	//    .local v0, "newBytes":[B
	java::lang::System::arraycopy(this->bytes, (this->bytes->size() -  this->bytesLength), newBytes, (newBytes->size() -  this->bytesLength), this->bytesLength);
	this->bytes = newBytes;
	//    .end local v0    # "newBytes":[B
	//    .end local v1    # "newCapacity":I
label_cond_21:
	return;

}
// .method private write([BI)I
int android::icu::util::BytesTrieBuilder::write(std::shared_ptr<unsigned char[]> b,int length)
{
	
	int newLength;
	
	//    .param p1, "b"    # [B
	//    .param p2, "length"    # I
	newLength = (this->bytesLength + length);
	//    .local v0, "newLength":I
	this->ensureCapacity(newLength);
	this->bytesLength = newLength;
	java::lang::System::arraycopy(b, 0x0, this->bytes, (this->bytes->size() -  this->bytesLength), length);
	return this->bytesLength;

}
// .method public add([BII)Landroid/icu/util/BytesTrieBuilder;
std::shared_ptr<android::icu::util::BytesTrieBuilder> android::icu::util::BytesTrieBuilder::add(std::shared_ptr<unsigned char[]> sequence,int length,int value)
{
	
	std::shared_ptr<android::icu::util::BytesTrieBuilder_S_BytesAsCharSequence> cVar0;
	
	//    .param p1, "sequence"    # [B
	//    .param p2, "length"    # I
	//    .param p3, "value"    # I
	cVar0 = std::make_shared<android::icu::util::BytesTrieBuilder_S_BytesAsCharSequence>(sequence, length);
	this->addImpl(cVar0, value);
	return this;

}
// .method public build(Landroid/icu/util/StringTrieBuilder$Option;)Landroid/icu/util/BytesTrie;
std::shared_ptr<android::icu::util::BytesTrie> android::icu::util::BytesTrieBuilder::build(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> buildOption)
{
	
	std::shared_ptr<android::icu::util::BytesTrie> cVar0;
	
	//    .param p1, "buildOption"    # Landroid/icu/util/StringTrieBuilder$Option;
	this->buildBytes(buildOption);
	cVar0 = std::make_shared<android::icu::util::BytesTrie>(this->bytes, (this->bytes->size() -  this->bytesLength));
	return cVar0;

}
// .method public buildByteBuffer(Landroid/icu/util/StringTrieBuilder$Option;)Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::util::BytesTrieBuilder::buildByteBuffer(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> buildOption)
{
	
	//    .param p1, "buildOption"    # Landroid/icu/util/StringTrieBuilder$Option;
	this->buildBytes(buildOption);
	return java::nio::ByteBuffer::wrap(this->bytes, (this->bytes->size() -  this->bytesLength), this->bytesLength);

}
// .method public clear()Landroid/icu/util/BytesTrieBuilder;
std::shared_ptr<android::icu::util::BytesTrieBuilder> android::icu::util::BytesTrieBuilder::clear()
{
	
	this->clearImpl();
	this->bytes = 0x0;
	this->bytesLength = 0x0;
	return this;

}
// .method protected getMaxBranchLinearSubNodeLength()I
int android::icu::util::BytesTrieBuilder::getMaxBranchLinearSubNodeLength()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 287    .end annotation
	return 0x5;

}
// .method protected getMaxLinearMatchLength()I
int android::icu::util::BytesTrieBuilder::getMaxLinearMatchLength()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 299    .end annotation
	return 0x10;

}
// .method protected getMinLinearMatch()I
int android::icu::util::BytesTrieBuilder::getMinLinearMatch()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 311    .end annotation
	return 0x10;

}
// .method protected matchNodesCanHaveValues()Z
bool android::icu::util::BytesTrieBuilder::matchNodesCanHaveValues()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 323    .end annotation
	return 0x0;

}
// .method protected write(I)I
int android::icu::util::BytesTrieBuilder::write(int b)
{
	
	int newLength;
	
	//    .param p1, "b"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 336    .end annotation
	newLength = ( this->bytesLength + 0x1);
	//    .local v0, "newLength":I
	this->ensureCapacity(newLength);
	this->bytesLength = newLength;
	this->bytes[(this->bytes->size() -  this->bytesLength)] = (unsigned char)(b);
	return this->bytesLength;

}
// .method protected write(II)I
int android::icu::util::BytesTrieBuilder::write(int offset,int length)
{
	
	int newLength;
	int bytesOffset;
	int offset;
	int length;
	
	//    .param p1, "offset"    # I
	//    .param p2, "length"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 377    .end annotation
	newLength = (this->bytesLength + length);
	//    .local v2, "newLength":I
	this->ensureCapacity(newLength);
	this->bytesLength = newLength;
	//    .local v0, "bytesOffset":I
	bytesOffset = (this->bytes->size() - this->bytesLength);
	//    .end local v0    # "bytesOffset":I
	//    .local v1, "bytesOffset":I
	offset = offset;
	//    .end local p1    # "offset":I
	//    .local v3, "offset":I
label_goto_12:
	if ( length <= 0 )
		goto label_cond_28;
	//    .end local v1    # "bytesOffset":I
	//    .restart local v0    # "bytesOffset":I
	//    .end local v3    # "offset":I
	//    .restart local p1    # "offset":I
	this->bytes[bytesOffset] = (unsigned char)(this->strings->charAt(offset));
	length = ( length + -0x1);
	bytesOffset = ( bytesOffset + 0x1);
	//    .end local v0    # "bytesOffset":I
	//    .restart local v1    # "bytesOffset":I
	offset = ( offset + 0x1);
	//    .end local p1    # "offset":I
	//    .restart local v3    # "offset":I
	goto label_goto_12;
	// 448    .line 199
label_cond_28:
	return this->bytesLength;

}
// .method protected writeDeltaTo(I)I
int android::icu::util::BytesTrieBuilder::writeDeltaTo(int jumpTarget)
{
	
	int cVar0;
	int cVar1;
	int i;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int length;
	
	//    .param p1, "jumpTarget"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 459    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	i = (this->bytesLength - jumpTarget);
	//    .local v0, "i":I
	if ( android::icu::util::BytesTrieBuilder::_assertionsDisabled )     
		goto label_cond_12;
	if ( i >= 0 )
		goto label_cond_12;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 485    .line 275
label_cond_12:
	if ( i >  0xbf )
		goto label_cond_1b;
	return this->write(i);
	// 498    .line 279
label_cond_1b:
	if ( i >  0x2fff )
		goto label_cond_37;
	this->intBytes[cVar1] = (unsigned char)(( _shri(i,0x8) + 0xc0));
	length = 0x1;
	//    .local v1, "length":I
label_goto_29:
	//    .end local v1    # "length":I
	//    .local v2, "length":I
	this->intBytes[length] = (unsigned char)(i);
	return this->write(this->intBytes, ( length + 0x1));
	// 540    .line 283
	// 541    .end local v2    # "length":I
label_cond_37:
	if ( i >  0xdffff )
		goto label_cond_4e;
	this->intBytes[cVar1] = (unsigned char)(( _shri(i,0x10) + 0xf0));
	length = 0x2;
	//    .restart local v1    # "length":I
label_goto_46:
	this->intBytes[cVar0] = (unsigned char)(_shri(i,0x8));
	goto label_goto_29;
	// 574    .line 287
	// 575    .end local v1    # "length":I
label_cond_4e:
	if ( i >  0xffffff )
		goto label_cond_61;
	this->intBytes[cVar1] = -0x2;
	length = 0x3;
	//    .restart local v1    # "length":I
label_goto_59:
	this->intBytes[cVar0] = (unsigned char)(_shri(i,0x10));
	goto label_goto_46;
	// 604    .line 291
	// 605    .end local v1    # "length":I
label_cond_61:
	this->intBytes[cVar1] = -0x1;
	this->intBytes[cVar0] = (unsigned char)(_shri(i,0x18));
	length = 0x4;
	//    .restart local v1    # "length":I
	goto label_goto_59;

}
// .method protected writeValueAndFinal(IZ)I
int android::icu::util::BytesTrieBuilder::writeValueAndFinal(int i,bool isFinal)
{
	
	int cVar0;
	int cVar1;
	int length;
	
	//    .param p1, "i"    # I
	//    .param p2, "isFinal"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 634    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( i < 0 ) 
		goto label_cond_16;
	if ( i >  0x40 )
		goto label_cond_16;
	if ( !(isFinal) )  
		goto label_cond_14;
label_goto_e:
	return this->write((cVar0 |  ( ( i + 0x10) << 0x1)));
label_cond_14:
	cVar0 = cVar1;
	goto label_goto_e;
	// 669    .line 223
label_cond_16:
	length = 0x1;
	//    .local v0, "length":I
	if ( i < 0 ) 
		goto label_cond_1e;
	if ( i <= 0xffffff )
		goto label_cond_57;
label_cond_1e:
	this->intBytes[cVar1] = 0x7f;
	this->intBytes[cVar0] = (unsigned char)(_shri(i,0x18));
	this->intBytes[0x2] = (unsigned char)(_shri(i,0x10));
	this->intBytes[0x3] = (unsigned char)(_shri(i,0x8));
	this->intBytes[0x4] = (unsigned char)(i);
	length = 0x5;
label_goto_42:
	if ( !(isFinal) )  
		goto label_cond_95;
label_goto_4c:
	this->intBytes[cVar1] = (unsigned char)((cVar0 |  ( this->intBytes[cVar1] << 0x1)));
	return this->write(this->intBytes, length);
	// 760    .line 234
label_cond_57:
	if ( i >  0x1aff )
		goto label_cond_6d;
	this->intBytes[cVar1] = (unsigned char)(( _shri(i,0x8) + 0x51));
label_goto_64:
	length = ( length + 0x1);
	//    .end local v0    # "length":I
	//    .local v1, "length":I
	this->intBytes[length] = (unsigned char)(i);
	length = length;
	//    .end local v1    # "length":I
	//    .restart local v0    # "length":I
	goto label_goto_42;
	// 795    .line 237
label_cond_6d:
	if ( i >  0x11ffff )
		goto label_cond_86;
	this->intBytes[cVar1] = (unsigned char)(( _shri(i,0x10) + 0x6c));
label_goto_7b:
	length = ( length + 0x1);
	//    .end local v0    # "length":I
	//    .restart local v1    # "length":I
	this->intBytes[length] = (unsigned char)(_shri(i,0x8));
	length = length;
	//    .end local v1    # "length":I
	//    .restart local v0    # "length":I
	goto label_goto_64;
	// 832    .line 240
label_cond_86:
	this->intBytes[cVar1] = 0x7e;
	this->intBytes[cVar0] = (unsigned char)(_shri(i,0x10));
	length = 0x2;
	goto label_goto_7b;
label_cond_95:
	cVar0 = cVar1;
	goto label_goto_4c;

}
// .method protected writeValueAndType(ZII)I
int android::icu::util::BytesTrieBuilder::writeValueAndType(bool hasValue,int value,int node)
{
	
	//    .param p1, "hasValue"    # Z
	//    .param p2, "value"    # I
	//    .param p3, "node"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 867    .end annotation
	//    .local v0, "offset":I
	if ( !(hasValue) )  
		goto label_cond_b;
label_cond_b:
	return this->write(node);

}


