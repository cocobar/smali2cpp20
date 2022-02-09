// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\DerIndefLenConverter.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.ArrayList.h"
#include "sun.security.util.DerIndefLenConverter.h"

static sun::security::util::DerIndefLenConverter::CLASS_MASK = 0xc0;
static sun::security::util::DerIndefLenConverter::FORM_MASK = 0x20;
static sun::security::util::DerIndefLenConverter::LEN_LONG = 0x80;
static sun::security::util::DerIndefLenConverter::LEN_MASK = 0x7f;
static sun::security::util::DerIndefLenConverter::SKIP_EOC_BYTES = 0x2;
static sun::security::util::DerIndefLenConverter::TAG_MASK = 0x1f;
// .method constructor <init>()V
sun::security::util::DerIndefLenConverter::DerIndefLenConverter()
{
	
	int cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	
	cVar0 = 0x0;
	// 057    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->unresolved = cVar0;
	cVar1 = std::make_shared<java::util::ArrayList>();
	this->ndefsList = cVar1;
	this->numOfTotalLenBytes = cVar0;
	return;

}
// .method private getLengthBytes(I)[B
unsigned char sun::security::util::DerIndefLenConverter::getLengthBytes(int curLen)
{
	
	int cVar0;
	std::shared<std::vector<unsigned char[]>> lenBytes;
	int index;
	
	//    .param p1, "curLen"    # I
	cVar0 = 0x0;
	0x0;
	//    .local v0, "index":I
	if ( curLen >= 0x80 )
		goto label_cond_e;
	lenBytes = std::make_shared<std::vector<unsigned char[]>>(0x1);
	//    .local v2, "lenBytes":[B
	0x1;
	lenBytes[cVar0] = (unsigned char)(curLen);
label_goto_d:
	return lenBytes;
	// 109    .line 246
	// 110    .end local v2    # "lenBytes":[B
label_cond_e:
	if ( curLen >= 0x100 )
		goto label_cond_21;
	lenBytes = std::make_shared<std::vector<unsigned char[]>>(0x2);
	//    .restart local v2    # "lenBytes":[B
	index = 0x1;
	lenBytes[cVar0] = -0x7f;
	//    .end local v0    # "index":I
	//    .local v1, "index":I
	lenBytes[index] = (unsigned char)(curLen);
	( index + 0x1);
	//    .end local v1    # "index":I
	//    .restart local v0    # "index":I
	goto label_goto_d;
	// 144    .line 251
	// 145    .end local v2    # "lenBytes":[B
label_cond_21:
	if ( curLen >= 0x10000 )
		goto label_cond_3a;
	lenBytes = std::make_shared<std::vector<unsigned char[]>>(0x3);
	//    .restart local v2    # "lenBytes":[B
	index = 0x1;
	lenBytes[cVar0] = -0x7e;
	index = ( index + 0x1);
	//    .end local v0    # "index":I
	//    .restart local v1    # "index":I
	lenBytes[index] = (unsigned char)(_shri(curLen,0x8));
	( index + 0x1);
	//    .end local v1    # "index":I
	//    .restart local v0    # "index":I
	lenBytes[index] = (unsigned char)(curLen);
	goto label_goto_d;
	// 186    .line 257
	// 187    .end local v2    # "lenBytes":[B
label_cond_3a:
	if ( curLen >= 0x1000000 )
		goto label_cond_5b;
	lenBytes = std::make_shared<std::vector<unsigned char[]>>(0x4);
	//    .restart local v2    # "lenBytes":[B
	index = 0x1;
	lenBytes[cVar0] = -0x7d;
	index = ( index + 0x1);
	//    .end local v0    # "index":I
	//    .restart local v1    # "index":I
	lenBytes[index] = (unsigned char)(_shri(curLen,0x10));
	index = ( index + 0x1);
	//    .end local v1    # "index":I
	//    .restart local v0    # "index":I
	lenBytes[index] = (unsigned char)(_shri(curLen,0x8));
	//    .end local v0    # "index":I
	//    .restart local v1    # "index":I
	lenBytes[index] = (unsigned char)(curLen);
	( index + 0x1);
	//    .end local v1    # "index":I
	//    .restart local v0    # "index":I
	goto label_goto_d;
	// 243    .line 265
	// 244    .end local v2    # "lenBytes":[B
label_cond_5b:
	lenBytes = std::make_shared<std::vector<unsigned char[]>>(0x5);
	//    .restart local v2    # "lenBytes":[B
	index = 0x1;
	lenBytes[cVar0] = -0x7c;
	index = ( index + 0x1);
	//    .end local v0    # "index":I
	//    .restart local v1    # "index":I
	lenBytes[index] = (unsigned char)(_shri(curLen,0x18));
	index = ( index + 0x1);
	//    .end local v1    # "index":I
	//    .restart local v0    # "index":I
	lenBytes[index] = (unsigned char)(_shri(curLen,0x10));
	index = ( index + 0x1);
	//    .end local v0    # "index":I
	//    .restart local v1    # "index":I
	lenBytes[index] = (unsigned char)(_shri(curLen,0x8));
	( index + 0x1);
	//    .end local v1    # "index":I
	//    .restart local v0    # "index":I
	lenBytes[index] = (unsigned char)(curLen);
	goto label_goto_d;

}
// .method private getNumOfLenBytes(I)I
int sun::security::util::DerIndefLenConverter::getNumOfLenBytes(int len)
{
	
	int numOfLenBytes;
	
	//    .param p1, "len"    # I
	numOfLenBytes = 0x0;
	//    .local v0, "numOfLenBytes":I
	if ( len >= 0x80 )
		goto label_cond_7;
	numOfLenBytes = 0x1;
label_goto_6:
	return numOfLenBytes;
	// 324    .line 283
label_cond_7:
	if ( len >= 0x100 )
		goto label_cond_d;
	numOfLenBytes = 0x2;
	goto label_goto_6;
	// 335    .line 285
label_cond_d:
	if ( len >= 0x10000 )
		goto label_cond_13;
	numOfLenBytes = 0x3;
	goto label_goto_6;
	// 346    .line 287
label_cond_13:
	if ( len >= 0x1000000 )
		goto label_cond_19;
	numOfLenBytes = 0x4;
	goto label_goto_6;
	// 357    .line 290
label_cond_19:
	numOfLenBytes = 0x5;
	goto label_goto_6;

}
// .method private isEOC(I)Z
bool sun::security::util::DerIndefLenConverter::isEOC(int tag)
{
	
	bool cVar1;
	
	//    .param p1, "tag"    # I
	cVar1 = 0x0;
	if ( ( tag & 0x1f) )     
		goto label_cond_e;
	if ( ( tag & 0x20) )     
		goto label_cond_e;
	if ( ( tag & 0xc0) )     
		goto label_cond_e;
	cVar1 = 0x1;
label_cond_e:
	return cVar1;

}
// .method static isIndefinite(I)Z
bool sun::security::util::DerIndefLenConverter::isIndefinite(int lengthByte)
{
	
	bool cVar1;
	
	//    .param p0, "lengthByte"    # I
	cVar1 = 0x0;
	if ( !(sun::security::util::DerIndefLenConverter::isLongForm(lengthByte)) )  
		goto label_cond_c;
	if ( ( lengthByte & 0x7f) )     
		goto label_cond_c;
	cVar1 = 0x1;
label_cond_c:
	return cVar1;

}
// .method static isLongForm(I)Z
bool sun::security::util::DerIndefLenConverter::isLongForm(int lengthByte)
{
	
	bool cVar0;
	
	//    .param p0, "lengthByte"    # I
	if ( ( lengthByte & 0x80) != 0x80 )
		goto label_cond_8;
	cVar0 = 0x1;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method private parseLength()I
int sun::security::util::DerIndefLenConverter::parseLength()
{
	
	int curLen;
	int cVar0;
	int lenByte;
	std::shared_ptr<java::lang::Integer> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	int i;
	int cVar4;
	std::shared_ptr<java::io::IOException> cVar5;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 443        value = {
	// 444            Ljava/io/IOException;
	// 445        }
	// 446    .end annotation
	curLen = 0x0;
	//    .local v0, "curLen":I
	if ( this->dataPos != this->dataSize )
		goto label_cond_8;
	return curLen;
	// 463    .line 151
label_cond_8:
	cVar0 = this->dataPos;
	this->dataPos = ( cVar0 + 0x1);
	lenByte = ( this->data[cVar0] & 0xff);
	//    .local v2, "lenByte":I
	if ( !(sun::security::util::DerIndefLenConverter::isIndefinite(lenByte)) )  
		goto label_cond_2d;
	cVar1 = std::make_shared<java::lang::Integer>(this->dataPos);
	this->ndefsList->add(cVar1);
	this->unresolved = ( this->unresolved + 0x1);
	return curLen;
	// 506    .line 157
label_cond_2d:
	if ( !(sun::security::util::DerIndefLenConverter::isLongForm(lenByte)) )  
		goto label_cond_74;
	lenByte = ( lenByte & 0x7f);
	if ( lenByte <= 0x4 )
		goto label_cond_41;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Too much data")));
	// throw
	throw cVar2;
	// 531    .line 162
label_cond_41:
	if ( (this->dataSize -  this->dataPos) >= ( lenByte + 0x1) )
		goto label_cond_53;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Too little data")));
	// throw
	throw cVar3;
	// 552    .line 165
label_cond_53:
	i = 0x0;
	//    .local v1, "i":I
label_goto_54:
	if ( i >= lenByte )
		goto label_cond_69;
	cVar4 = this->dataPos;
	this->dataPos = ( cVar4 + 0x1);
	curLen = (( curLen << 0x8) + ( this->data[cVar4] & 0xff));
	i = ( i + 0x1);
	goto label_goto_54;
	// 582    .line 168
label_cond_69:
	if ( curLen >= 0 )
		goto label_cond_76;
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid length bytes")));
	// throw
	throw cVar5;
	// 595    .line 172
	// 596    .end local v1    # "i":I
label_cond_74:
	curLen = ( lenByte & 0x7f);
label_cond_76:
	return curLen;

}
// .method private parseTag()V
void sun::security::util::DerIndefLenConverter::parseTag()
{
	
	int numOfEncapsulatedLenBytes;
	std::shared_ptr<java::lang::Integer> elem;
	int index;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::Object> sectionLenBytes;
	std::shared_ptr<unsigned char[]> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 608        value = {
	// 609            Ljava/io/IOException;
	// 610        }
	// 611    .end annotation
	if ( this->dataPos != this->dataSize )
		goto label_cond_7;
	return;
	// 624    .line 95
label_cond_7:
	if ( !(this->isEOC(this->data[this->dataPos])) )  
		goto label_cond_6a;
	if ( this->data[( this->dataPos + 0x1)] )     
		goto label_cond_6a;
	numOfEncapsulatedLenBytes = 0x0;
	//    .local v2, "numOfEncapsulatedLenBytes":I
	elem = 0x0;
	//    .local v0, "elem":Ljava/lang/Object;
	index = ( this->ndefsList->size() + -0x1);
	//    .end local v0    # "elem":Ljava/lang/Object;
	//    .local v1, "index":I
label_goto_27:
	if ( index < 0 ) 
		goto label_cond_33;
	elem = this->ndefsList->get(index);
	//    .restart local v0    # "elem":Ljava/lang/Object;
	if ( !(elem->instanceOf("java::lang::Integer")) )  
		goto label_cond_3e;
	//    .end local v0    # "elem":Ljava/lang/Object;
label_cond_33:
	if ( index >= 0 )
		goto label_cond_48;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("EOC does not have matching indefinite-length tag")));
	// throw
	throw cVar0;
	// 697    .restart local v0    # "elem":Ljava/lang/Object;
label_cond_3e:
	cVar1 = elem;
	cVar1->checkCast("unsigned char[]");
	numOfEncapsulatedLenBytes = (numOfEncapsulatedLenBytes +  ( cVar1->size() + -0x3));
	index = ( index + -0x1);
	goto label_goto_27;
	// 715    .line 113
	// 716    .end local v0    # "elem":Ljava/lang/Object;
label_cond_48:
	elem->checkCast("java::lang::Integer");
	//    .local v3, "sectionLen":I
	sectionLenBytes = this->getLengthBytes(((this->dataPos -  elem->intValue()) + numOfEncapsulatedLenBytes));
	//    .local v4, "sectionLenBytes":[B
	this->ndefsList->set(index, sectionLenBytes);
	this->unresolved = ( this->unresolved + -0x1);
	this->numOfTotalLenBytes = (this->numOfTotalLenBytes +  ( sectionLenBytes->size() + -0x3));
	//    .end local v1    # "index":I
	//    .end local v2    # "numOfEncapsulatedLenBytes":I
	//    .end local v3    # "sectionLen":I
	//    .end local v4    # "sectionLenBytes":[B
label_cond_6a:
	this->dataPos = ( this->dataPos + 0x1);
	return;

}
// .method private parseValue(I)V
void sun::security::util::DerIndefLenConverter::parseValue(int curLen)
{
	
	//    .param p1, "curLen"    # I
	this->dataPos = (this->dataPos +  curLen);
	return;

}
// .method private writeLength(I)V
void sun::security::util::DerIndefLenConverter::writeLength(int curLen)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	int cVar5;
	int cVar6;
	int cVar7;
	int cVar8;
	int cVar9;
	int cVar10;
	int cVar11;
	int cVar12;
	int cVar13;
	int cVar14;
	
	//    .param p1, "curLen"    # I
	if ( curLen >= 0x80 )
		goto label_cond_10;
	cVar0 = this->newDataPos;
	this->newDataPos = ( cVar0 + 0x1);
	this->newData[cVar0] = (unsigned char)(curLen);
label_goto_f:
	return;
	// 819    .line 214
label_cond_10:
	if ( curLen >= 0x100 )
		goto label_cond_2c;
	cVar1 = this->newDataPos;
	this->newDataPos = ( cVar1 + 0x1);
	this->newData[cVar1] = -0x7f;
	cVar2 = this->newDataPos;
	this->newDataPos = ( cVar2 + 0x1);
	this->newData[cVar2] = (unsigned char)(curLen);
	goto label_goto_f;
	// 853    .line 218
label_cond_2c:
	if ( curLen >= 0x10000 )
		goto label_cond_55;
	cVar3 = this->newDataPos;
	this->newDataPos = ( cVar3 + 0x1);
	this->newData[cVar3] = -0x7e;
	cVar4 = this->newDataPos;
	this->newDataPos = ( cVar4 + 0x1);
	this->newData[cVar4] = (unsigned char)(_shri(curLen,0x8));
	cVar5 = this->newDataPos;
	this->newDataPos = ( cVar5 + 0x1);
	this->newData[cVar5] = (unsigned char)(curLen);
	goto label_goto_f;
	// 902    .line 223
label_cond_55:
	if ( curLen >= 0x1000000 )
		goto label_cond_8b;
	cVar6 = this->newDataPos;
	this->newDataPos = ( cVar6 + 0x1);
	this->newData[cVar6] = -0x7d;
	cVar7 = this->newDataPos;
	this->newDataPos = ( cVar7 + 0x1);
	this->newData[cVar7] = (unsigned char)(_shri(curLen,0x10));
	cVar8 = this->newDataPos;
	this->newDataPos = ( cVar8 + 0x1);
	this->newData[cVar8] = (unsigned char)(_shri(curLen,0x8));
	cVar9 = this->newDataPos;
	this->newDataPos = ( cVar9 + 0x1);
	this->newData[cVar9] = (unsigned char)(curLen);
	goto label_goto_f;
	// 966    .line 230
label_cond_8b:
	cVar10 = this->newDataPos;
	this->newDataPos = ( cVar10 + 0x1);
	this->newData[cVar10] = -0x7c;
	cVar11 = this->newDataPos;
	this->newDataPos = ( cVar11 + 0x1);
	this->newData[cVar11] = (unsigned char)(_shri(curLen,0x18));
	cVar12 = this->newDataPos;
	this->newDataPos = ( cVar12 + 0x1);
	this->newData[cVar12] = (unsigned char)(_shri(curLen,0x10));
	cVar13 = this->newDataPos;
	this->newDataPos = ( cVar13 + 0x1);
	this->newData[cVar13] = (unsigned char)(_shri(curLen,0x8));
	cVar14 = this->newDataPos;
	this->newDataPos = ( cVar14 + 0x1);
	this->newData[cVar14] = (unsigned char)(curLen);
	goto label_goto_f;

}
// .method private writeLengthAndValue()V
void sun::security::util::DerIndefLenConverter::writeLengthAndValue()
{
	
	int curLen;
	int cVar0;
	int lenByte;
	int cVar1;
	std::shared_ptr<unsigned char[]> lenBytes;
	int i;
	int cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1044        value = {
	// 1045            Ljava/io/IOException;
	// 1046        }
	// 1047    .end annotation
	if ( this->dataPos != this->dataSize )
		goto label_cond_8;
	return;
	// 1062    .line 186
label_cond_8:
	curLen = 0x0;
	//    .local v0, "curLen":I
	cVar0 = this->dataPos;
	this->dataPos = ( cVar0 + 0x1);
	lenByte = ( this->data[cVar0] & 0xff);
	//    .local v2, "lenByte":I
	if ( !(sun::security::util::DerIndefLenConverter::isIndefinite(lenByte)) )  
		goto label_cond_38;
	cVar1 = this->index;
	this->index = ( cVar1 + 0x1);
	lenBytes = this->ndefsList->get(cVar1);
	lenBytes->checkCast("unsigned char[]");
	//    .local v3, "lenBytes":[B
	java::lang::System::arraycopy(lenBytes, 0x0, this->newData, this->newDataPos, lenBytes->size());
	this->newDataPos = (this->newDataPos +  lenBytes->size());
	return;
	// 1127    .line 195
	// 1128    .end local v3    # "lenBytes":[B
label_cond_38:
	if ( !(sun::security::util::DerIndefLenConverter::isLongForm(lenByte)) )  
		goto label_cond_61;
	i = 0x0;
	//    .local v1, "i":I
label_goto_41:
	if ( i >= ( lenByte & 0x7f) )
		goto label_cond_56;
	cVar2 = this->dataPos;
	this->dataPos = ( cVar2 + 0x1);
	curLen = (( curLen << 0x8) + ( this->data[cVar2] & 0xff));
	i = ( i + 0x1);
	goto label_goto_41;
	// 1168    .line 200
label_cond_56:
	if ( curLen >= 0 )
		goto label_cond_63;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid length bytes")));
	// throw
	throw cVar3;
	// 1181    .line 204
	// 1182    .end local v1    # "i":I
label_cond_61:
	curLen = ( lenByte & 0x7f);
label_cond_63:
	this->writeLength(curLen);
	this->writeValue(curLen);
	return;

}
// .method private writeTag()V
void sun::security::util::DerIndefLenConverter::writeTag()
{
	
	int cVar0;
	int tag;
	int cVar1;
	
	if ( this->dataPos != this->dataSize )
		goto label_cond_7;
	return;
	// 1211    .line 135
label_cond_7:
	cVar0 = this->dataPos;
	this->dataPos = ( cVar0 + 0x1);
	tag = this->data[cVar0];
	//    .local v0, "tag":I
	if ( !(this->isEOC(tag)) )  
		goto label_cond_29;
	if ( this->data[this->dataPos] )     
		goto label_cond_29;
	this->dataPos = ( this->dataPos + 0x1);
	this->writeTag();
label_goto_28:
	return;
	// 1253    .line 140
label_cond_29:
	cVar1 = this->newDataPos;
	this->newDataPos = ( cVar1 + 0x1);
	this->newData[cVar1] = (unsigned char)(tag);
	goto label_goto_28;

}
// .method private writeValue(I)V
void sun::security::util::DerIndefLenConverter::writeValue(int curLen)
{
	
	int i;
	int cVar0;
	int cVar1;
	
	//    .param p1, "curLen"    # I
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= curLen )
		goto label_cond_1a;
	cVar0 = this->newDataPos;
	this->newDataPos = ( cVar0 + 0x1);
	cVar1 = this->dataPos;
	this->dataPos = ( cVar1 + 0x1);
	this->newData[cVar0] = this->data[cVar1];
	i = ( i + 0x1);
	goto label_goto_1;
	// 1308    .line 308
label_cond_1a:
	return;

}
// .method convert([B)[B
unsigned char sun::security::util::DerIndefLenConverter::convert(std::shared_ptr<unsigned char[]> indefData)
{
	
	int cVar0;
	int unused;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "indefData"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 1319        value = {
	// 1320            Ljava/io/IOException;
	// 1321        }
	// 1322    .end annotation
	cVar0 = 0x0;
	this->data = indefData;
	this->dataPos = cVar0;
	this->index = cVar0;
	this->dataSize = this->data->size();
	0x0;
	//    .local v0, "len":I
	unused = 0x0;
	//    .local v1, "unused":I
label_cond_e:
	if ( this->dataPos >= this->dataSize )
		goto label_cond_2c;
	this->parseTag();
	this->parseValue(this->parseLength());
	if ( this->unresolved )     
		goto label_cond_e;
	unused = (this->dataSize - this->dataPos);
	this->dataSize = this->dataPos;
label_cond_2c:
	if ( !(this->unresolved) )  
		goto label_cond_39;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("not all indef len BER resolved")));
	// throw
	throw cVar1;
	// 1401    .line 343
label_cond_39:
	this->newData = std::make_shared<std::vector<unsigned char[]>>(((this->dataSize +  this->numOfTotalLenBytes) +  unused));
	this->dataPos = cVar0;
	this->newDataPos = cVar0;
	this->index = cVar0;
label_goto_49:
	if ( this->dataPos >= this->dataSize )
		goto label_cond_56;
	this->writeTag();
	this->writeLengthAndValue();
	goto label_goto_49;
	// 1438    .line 352
label_cond_56:
	java::lang::System::arraycopy(indefData, this->dataSize, this->newData, (this->dataSize +  this->numOfTotalLenBytes), unused);
	return this->newData;

}


