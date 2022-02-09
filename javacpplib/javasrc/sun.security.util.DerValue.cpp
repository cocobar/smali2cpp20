// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\DerValue.smali
#include "java2ctype.h"
#include "java.io.ByteArrayInputStream.h"
#include "java.io.DataInputStream.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.math.BigInteger.h"
#include "java.util.Date.h"
#include "sun.misc.IOUtils.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerIndefLenConverter.h"
#include "sun.security.util.DerInputBuffer.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"

static sun::security::util::DerValue::TAG_APPLICATION = 0x40t;
static sun::security::util::DerValue::TAG_CONTEXT = -0x80t;
static sun::security::util::DerValue::TAG_PRIVATE = -0x40t;
static sun::security::util::DerValue::TAG_UNIVERSAL = 0x0t;
static sun::security::util::DerValue::tag_BMPString = 0x1et;
static sun::security::util::DerValue::tag_BitString = 0x3t;
static sun::security::util::DerValue::tag_Boolean = 0x1t;
static sun::security::util::DerValue::tag_Enumerated = 0xat;
static sun::security::util::DerValue::tag_GeneralString = 0x1bt;
static sun::security::util::DerValue::tag_GeneralizedTime = 0x18t;
static sun::security::util::DerValue::tag_IA5String = 0x16t;
static sun::security::util::DerValue::tag_Integer = 0x2t;
static sun::security::util::DerValue::tag_Null = 0x5t;
static sun::security::util::DerValue::tag_ObjectId = 0x6t;
static sun::security::util::DerValue::tag_OctetString = 0x4t;
static sun::security::util::DerValue::tag_PrintableString = 0x13t;
static sun::security::util::DerValue::tag_Sequence = 0x30t;
static sun::security::util::DerValue::tag_SequenceOf = 0x30t;
static sun::security::util::DerValue::tag_Set = 0x31t;
static sun::security::util::DerValue::tag_SetOf = 0x31t;
static sun::security::util::DerValue::tag_T61String = 0x14t;
static sun::security::util::DerValue::tag_UTF8String = 0xct;
static sun::security::util::DerValue::tag_UniversalString = 0x1ct;
static sun::security::util::DerValue::tag_UtcTime = 0x17t;
// .method public constructor <init>(BLjava/lang/String;)V
sun::security::util::DerValue::DerValue(unsigned char stringTag,std::shared_ptr<java::lang::String> value)
{
	
	//    .param p1, "stringTag"    # B
	//    .param p2, "value"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 074        value = {
	// 075            Ljava/io/IOException;
	// 076        }
	// 077    .end annotation
	// 081    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->data = this->init(stringTag, value);
	return;

}
// .method public constructor <init>(B[B)V
sun::security::util::DerValue::DerValue(unsigned char tag,std::shared_ptr<unsigned char[]> data)
{
	
	std::shared_ptr<sun::security::util::DerInputBuffer> cVar0;
	std::shared_ptr<unsigned char[]> cVar1;
	std::shared_ptr<sun::security::util::DerInputStream> cVar2;
	
	//    .param p1, "tag"    # B
	//    .param p2, "data"    # [B
	// 101    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->tag = tag;
	cVar1 = data->clone();
	cVar1->checkCast("unsigned char[]");
	cVar0 = std::make_shared<sun::security::util::DerInputBuffer>(cVar1);
	this->buffer = cVar0;
	this->length = data->size();
	cVar2 = std::make_shared<sun::security::util::DerInputStream>(this->buffer);
	this->data = cVar2;
	this->data->mark(0x7fffffff);
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;)V
sun::security::util::DerValue::DerValue(std::shared_ptr<java::io::InputStream> in)
{
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 148        value = {
	// 149            Ljava/io/IOException;
	// 150        }
	// 151    .end annotation
	// 155    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->data = this->init(0x0, in);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
sun::security::util::DerValue::DerValue(std::shared_ptr<java::lang::String> value)
{
	
	int i;
	unsigned char cVar0;
	
	//    .param p1, "value"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 174        value = {
	// 175            Ljava/io/IOException;
	// 176        }
	// 177    .end annotation
	// 181    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	//    .local v1, "isPrintableString":Z
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( i >= value->length() )
		goto label_cond_16;
	if ( sun::security::util::DerValue::isPrintableStringChar(value->charAt(i)) )     
		goto label_cond_21;
label_cond_16:
	if ( !(0x1) )  
		goto label_cond_24;
	cVar0 = 0x13;
label_goto_1a:
	this->data = this->init(cVar0, value);
	return;
	// 228    .line 218
label_cond_21:
	i = ( i + 0x1);
	goto label_goto_5;
	// 234    .line 225
label_cond_24:
	cVar0 = 0xc;
	goto label_goto_1a;

}
// .method constructor <init>(Lsun/security/util/DerInputBuffer;Z)V
sun::security::util::DerValue::DerValue(std::shared_ptr<sun::security::util::DerInputBuffer> in,bool originalEncodedFormRetained)
{
	
	int startPosInInput;
	int lenByte;
	std::shared_ptr<sun::security::util::DerInputBuffer> inbuf;
	int readLen;
	std::shared<std::vector<unsigned char[]>> indefData;
	std::shared_ptr<java::io::DataInputStream> dis;
	std::shared_ptr<sun::security::util::DerIndefLenConverter> derIn;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<sun::security::util::DerInputStream> cVar1;
	std::shared_ptr<sun::security::util::DerInputStream> cVar2;
	
	//    .param p1, "in"    # Lsun/security/util/DerInputBuffer;
	//    .param p2, "originalEncodedFormRetained"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 246        value = {
	// 247            Ljava/io/IOException;
	// 248        }
	// 249    .end annotation
	// 253    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	startPosInInput = in->getPos();
	//    .local v8, "startPosInInput":I
	this->tag = (unsigned char)(in->read());
	lenByte = (unsigned char)(in->read());
	//    .local v5, "lenByte":B
	this->length = sun::security::util::DerInputStream::getLength(lenByte, in);
	if ( this->length != -0x1 )
		goto label_cond_90;
	inbuf = in->dup();
	//    .local v3, "inbuf":Lsun/security/util/DerInputBuffer;
	readLen = inbuf->available();
	//    .local v7, "readLen":I
	//    .local v6, "offset":I
	indefData = std::make_shared<std::vector<unsigned char[]>>(( readLen + 0x2));
	//    .local v4, "indefData":[B
	indefData[0x0] = this->tag;
	indefData[0x1] = lenByte;
	dis = std::make_shared<java::io::DataInputStream>(inbuf);
	//    .local v2, "dis":Ljava/io/DataInputStream;
	dis->readFully(indefData, 0x2, readLen);
	dis->close();
	derIn = std::make_shared<sun::security::util::DerIndefLenConverter>();
	//    .local v1, "derIn":Lsun/security/util/DerIndefLenConverter;
	//    .end local v3    # "inbuf":Lsun/security/util/DerInputBuffer;
	inbuf = std::make_shared<sun::security::util::DerInputBuffer>(derIn->convert(indefData));
	//    .restart local v3    # "inbuf":Lsun/security/util/DerInputBuffer;
	if ( this->tag == inbuf->read() )
		goto label_cond_5d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Indefinite length encoding not supported")));
	// throw
	throw cVar0;
	// 375    .line 279
label_cond_5d:
	this->length = sun::security::util::DerInputStream::getLength(inbuf);
	this->buffer = inbuf->dup();
	this->buffer->truncate(this->length);
	cVar1 = std::make_shared<sun::security::util::DerInputStream>(this->buffer);
	this->data = cVar1;
	in->skip((long long)(( this->length + 0x2)));
	//    .end local v1    # "derIn":Lsun/security/util/DerIndefLenConverter;
	//    .end local v2    # "dis":Ljava/io/DataInputStream;
	//    .end local v3    # "inbuf":Lsun/security/util/DerInputBuffer;
	//    .end local v4    # "indefData":[B
	//    .end local v6    # "offset":I
	//    .end local v7    # "readLen":I
label_goto_81:
	if ( !(originalEncodedFormRetained) )  
		goto label_cond_8f;
	//    .local v0, "consumed":I
	this->originalEncodedForm = in->getSlice(startPosInInput, (in->getPos() - startPosInInput));
	//    .end local v0    # "consumed":I
label_cond_8f:
	return;
	// 445    .line 289
label_cond_90:
	this->buffer = in->dup();
	this->buffer->truncate(this->length);
	cVar2 = std::make_shared<sun::security::util::DerInputStream>(this->buffer);
	this->data = cVar2;
	in->skip((long long)(this->length));
	goto label_goto_81;

}
// .method public constructor <init>([B)V
sun::security::util::DerValue::DerValue(std::shared_ptr<unsigned char[]> buf)
{
	
	std::shared_ptr<java::io::ByteArrayInputStream> cVar0;
	
	//    .param p1, "buf"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 483        value = {
	// 484            Ljava/io/IOException;
	// 485        }
	// 486    .end annotation
	// 490    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::io::ByteArrayInputStream>(buf);
	this->data = this->init(0x1, cVar0);
	return;

}
// .method public constructor <init>([BII)V
sun::security::util::DerValue::DerValue(std::shared_ptr<unsigned char[]> buf,int offset,int len)
{
	
	std::shared_ptr<java::io::ByteArrayInputStream> cVar0;
	
	//    .param p1, "buf"    # [B
	//    .param p2, "offset"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 515        value = {
	// 516            Ljava/io/IOException;
	// 517        }
	// 518    .end annotation
	// 522    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::io::ByteArrayInputStream>(buf, offset, len);
	this->data = this->init(0x1, cVar0);
	return;

}
// .method private append([B[B)[B
unsigned char sun::security::util::DerValue::append(std::shared_ptr<unsigned char[]> a,std::shared_ptr<unsigned char[]> b)
{
	
	int cVar0;
	std::shared<std::vector<unsigned char[]>> ret;
	
	//    .param p1, "a"    # [B
	//    .param p2, "b"    # [B
	cVar0 = 0x0;
	if ( a )     
		goto label_cond_4;
	return b;
	// 555    .line 472
label_cond_4:
	ret = std::make_shared<std::vector<unsigned char[]>>((a->size() +  b->size()));
	//    .local v0, "ret":[B
	java::lang::System::arraycopy(a, cVar0, ret, cVar0, a->size());
	java::lang::System::arraycopy(b, cVar0, ret, a->size(), b->size());
	return ret;

}
// .method public static createTag(BZB)B
unsigned char sun::security::util::DerValue::createTag(unsigned char tagClass,bool form,unsigned char val)
{
	
	unsigned char tag;
	
	//    .param p0, "tagClass"    # B
	//    .param p1, "form"    # Z
	//    .param p2, "val"    # B
	tag = (unsigned char)((tagClass | val));
	//    .local v0, "tag":B
	if ( !(form) )  
		goto label_cond_8;
label_cond_8:
	return tag;

}
// .method private static doEquals(Lsun/security/util/DerValue;Lsun/security/util/DerValue;)Z
bool sun::security::util::DerValue::doEquals(std::shared_ptr<sun::security::util::DerValue> d1,std::shared_ptr<sun::security::util::DerValue> d2)
{
	
	std::shared_ptr<sun::security::util::DerInputStream> cVar0;
	std::shared_ptr<sun::security::util::DerInputStream> cVar1;
	
	//    .param p0, "d1"    # Lsun/security/util/DerValue;
	//    .param p1, "d2"    # Lsun/security/util/DerValue;
	cVar0 = d1->data;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	cVar1 = d2->data;
	cVar1->monitor_enter();
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_1e;
	}
	//    .catchall {:try_start_3 .. :try_end_6} :catchall_1e
	try {
	//label_try_start_6:
	d1->data->reset();
	d2->data->reset();
	//label_try_end_17:
	}
	catch (...){
		goto label_catchall_1b;
	}
	//    .catchall {:try_start_6 .. :try_end_17} :catchall_1b
	try {
	//label_try_start_18:
	cVar1->monitor_exit();
	//label_try_end_19:
	}
	catch (...){
		goto label_catchall_1e;
	}
	//    .catchall {:try_start_18 .. :try_end_19} :catchall_1e
	cVar0->monitor_exit();
	return d1->buffer->equals(d2->buffer);
	// 658    .line 808
label_catchall_1b:
	// move-exception
	
	try {
	//label_try_start_1c:
	cVar1->monitor_exit();
	// throw
	throw;
	// 666    :try_end_1e
	// 667    .catchall {:try_start_1c .. :try_end_1e} :catchall_1e
	// 669    .line 807
label_catchall_1e:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method private init(BLjava/lang/String;)Lsun/security/util/DerInputStream;
std::shared_ptr<sun::security::util::DerInputStream> sun::security::util::DerValue::init(unsigned char stringTag,std::shared_ptr<java::lang::String> value)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<unsigned char[]> buf;
	std::shared_ptr<sun::security::util::DerInputBuffer> cVar1;
	std::shared_ptr<sun::security::util::DerInputStream> result;
	
	//    .param p1, "stringTag"    # B
	//    .param p2, "value"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 683        value = {
	// 684            Ljava/io/IOException;
	// 685        }
	// 686    .end annotation
	0x0;
	//    .local v1, "enc":Ljava/lang/String;
	this->tag = stringTag;
	// switch
	{
	auto item = ( stringTag );
	if (item == 0xc) goto label_sswitch_36;
	if (item == 0x13) goto label_sswitch_f;
	if (item == 0x14) goto label_sswitch_2e;
	if (item == 0x16) goto label_sswitch_f;
	if (item == 0x1b) goto label_sswitch_f;
	if (item == 0x1e) goto label_sswitch_32;
	}
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unsupported DER string type")));
	// throw
	throw cVar0;
	// 708    .line 349
label_sswitch_f:
	//    .local v1, "enc":Ljava/lang/String;
label_goto_12:
	buf = value->getBytes(enc);
	//    .local v0, "buf":[B
	this->length = buf->size();
	cVar1 = std::make_shared<sun::security::util::DerInputBuffer>(buf);
	this->buffer = cVar1;
	result = std::make_shared<sun::security::util::DerInputStream>(this->buffer);
	//    .local v2, "result":Lsun/security/util/DerInputStream;
	result->mark(0x7fffffff);
	return result;
	// 748    .line 352
	// 749    .end local v0    # "buf":[B
	// 750    .end local v2    # "result":Lsun/security/util/DerInputStream;
	// 751    .local v1, "enc":Ljava/lang/String;
label_sswitch_2e:
	//    .local v1, "enc":Ljava/lang/String;
	goto label_goto_12;
	// 758    .line 355
	// 759    .local v1, "enc":Ljava/lang/String;
label_sswitch_32:
	//    .local v1, "enc":Ljava/lang/String;
	goto label_goto_12;
	// 766    .line 358
	// 767    .local v1, "enc":Ljava/lang/String;
label_sswitch_36:
	//    .local v1, "enc":Ljava/lang/String;
	goto label_goto_12;
	// 774    .line 345
	// 775    :sswitch_data_3a
	// 776    .sparse-switch
	// 777        0xc -> :sswitch_36
	// 778        0x13 -> :sswitch_f
	// 779        0x14 -> :sswitch_2e
	// 780        0x16 -> :sswitch_f
	// 781        0x1b -> :sswitch_f
	// 782        0x1e -> :sswitch_32
	// 783    .end sparse-switch

}
// .method private init(ZLjava/io/InputStream;)Lsun/security/util/DerInputStream;
std::shared_ptr<sun::security::util::DerInputStream> sun::security::util::DerValue::init(bool fullyBuffered,std::shared_ptr<java::io::InputStream> in)
{
	
	bool cVar0;
	int lenByte;
	int readLen;
	std::shared<std::vector<unsigned char[]>> indefData;
	std::shared_ptr<java::io::DataInputStream> dis;
	std::shared_ptr<sun::security::util::DerIndefLenConverter> derIn;
	std::shared_ptr<java::io::ByteArrayInputStream> in;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<sun::security::util::DerInputBuffer> cVar3;
	std::shared_ptr<sun::security::util::DerInputStream> cVar4;
	
	//    .param p1, "fullyBuffered"    # Z
	//    .param p2, "in"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 791        value = {
	// 792            Ljava/io/IOException;
	// 793        }
	// 794    .end annotation
	cVar0 = 0x1;
	this->tag = (unsigned char)(in->read());
	lenByte = (unsigned char)(in->read());
	//    .local v4, "lenByte":B
	this->length = sun::security::util::DerInputStream::getLength(lenByte, in);
	if ( this->length != -0x1 )
		goto label_cond_58;
	readLen = in->available();
	//    .local v6, "readLen":I
	//    .local v5, "offset":I
	indefData = std::make_shared<std::vector<unsigned char[]>>(( readLen + 0x2));
	//    .local v3, "indefData":[B
	indefData[0x0] = this->tag;
	indefData[cVar0] = lenByte;
	dis = std::make_shared<java::io::DataInputStream>(in);
	//    .local v2, "dis":Ljava/io/DataInputStream;
	dis->readFully(indefData, 0x2, readLen);
	dis->close();
	derIn = std::make_shared<sun::security::util::DerIndefLenConverter>();
	//    .local v1, "derIn":Lsun/security/util/DerIndefLenConverter;
	//    .end local p2    # "in":Ljava/io/InputStream;
	in = std::make_shared<java::io::ByteArrayInputStream>(derIn->convert(indefData));
	//    .restart local p2    # "in":Ljava/io/InputStream;
	if ( this->tag == in->read() )
		goto label_cond_52;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Indefinite length encoding not supported")));
	// throw
	throw cVar1;
	// 905    .line 397
label_cond_52:
	this->length = sun::security::util::DerInputStream::getLength(in);
	//    .end local v1    # "derIn":Lsun/security/util/DerIndefLenConverter;
	//    .end local v2    # "dis":Ljava/io/DataInputStream;
	//    .end local v3    # "indefData":[B
	//    .end local v5    # "offset":I
	//    .end local v6    # "readLen":I
label_cond_58:
	if ( !(fullyBuffered) )  
		goto label_cond_6b;
	if ( in->available() == this->length )
		goto label_cond_6b;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("extra data given to DerValue constructor")));
	// throw
	throw cVar2;
	// 939    .line 403
label_cond_6b:
	//    .local v0, "bytes":[B
	cVar3 = std::make_shared<sun::security::util::DerInputBuffer>(sun::misc::IOUtils::readFully(in, this->length, cVar0));
	this->buffer = cVar3;
	cVar4 = std::make_shared<sun::security::util::DerInputStream>(this->buffer);
	return cVar4;

}
// .method public static isPrintableStringChar(C)Z
bool sun::security::util::DerValue::isPrintableStringChar(char ch)
{
	
	bool cVar0;
	
	//    .param p0, "ch"    # C
	cVar0 = 0x1;
	if ( ch <  0x61 )
		goto label_cond_a;
	if ( ch >  0x7a )
		goto label_cond_a;
label_cond_9:
	return cVar0;
	// 985    .line 903
label_cond_a:
	if ( ch <  0x41 )
		goto label_cond_12;
	if ( ch <= 0x5a )
		goto label_cond_9;
label_cond_12:
	if ( ch <  0x30 )
		goto label_cond_1a;
	if ( ch <= 0x39 )
		goto label_cond_9;
label_cond_1a:
	// switch
	{
	auto item = ( ch );
	if (item == 0x20) goto label_sswitch_1f;
	if (item == 0x27) goto label_sswitch_1f;
	if (item == 0x28) goto label_sswitch_1f;
	if (item == 0x29) goto label_sswitch_1f;
	if (item == 0x2b) goto label_sswitch_1f;
	if (item == 0x2c) goto label_sswitch_1f;
	if (item == 0x2d) goto label_sswitch_1f;
	if (item == 0x2e) goto label_sswitch_1f;
	if (item == 0x2f) goto label_sswitch_1f;
	if (item == 0x3a) goto label_sswitch_1f;
	if (item == 0x3d) goto label_sswitch_1f;
	if (item == 0x3f) goto label_sswitch_1f;
	}
	return 0x0;
	// 1014    .line 920
label_sswitch_1f:
	return cVar0;
	// 1018    .line 907
	// 1019    :sswitch_data_20
	// 1020    .sparse-switch
	// 1021        0x20 -> :sswitch_1f
	// 1022        0x27 -> :sswitch_1f
	// 1023        0x28 -> :sswitch_1f
	// 1024        0x29 -> :sswitch_1f
	// 1025        0x2b -> :sswitch_1f
	// 1026        0x2c -> :sswitch_1f
	// 1027        0x2d -> :sswitch_1f
	// 1028        0x2e -> :sswitch_1f
	// 1029        0x2f -> :sswitch_1f
	// 1030        0x3a -> :sswitch_1f
	// 1031        0x3d -> :sswitch_1f
	// 1032        0x3f -> :sswitch_1f
	// 1033    .end sparse-switch

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::util::DerValue::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	std::shared<std::vector<unsigned char[]>> value;
	std::shared_ptr<sun::security::util::DerInputStream> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1042        value = {
	// 1043            Ljava/io/IOException;
	// 1044        }
	// 1045    .end annotation
	out->write(this->tag);
	out->putLength(this->length);
	if ( this->length <= 0 )
		goto label_cond_34;
	value = std::make_shared<std::vector<unsigned char[]>>(this->length);
	//    .local v0, "value":[B
	cVar0 = this->data;
	cVar0->monitor_enter();
	try {
	//label_try_start_15:
	this->buffer->reset();
	if ( this->buffer->read(value) == this->length )
		goto label_cond_30;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("short DER value read (encode)")));
	// throw
	throw cVar1;
	// 1099    :try_end_2d
	// 1100    .catchall {:try_start_15 .. :try_end_2d} :catchall_2d
	// 1102    .line 420
label_catchall_2d:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 1110    .line 425
label_cond_30:
	try {
	//label_try_start_30:
	out->write(value);
	//label_try_end_33:
	}
	catch (...){
		goto label_catchall_2d;
	}
	//    .catchall {:try_start_30 .. :try_end_33} :catchall_2d
	cVar0->monitor_exit();
	//    .end local v0    # "value":[B
label_cond_34:
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::util::DerValue::equals(std::shared_ptr<java::lang::Object> other)
{
	
	//    .param p1, "other"    # Ljava/lang/Object;
	if ( !(other->instanceOf("sun::security::util::DerValue")) )  
		goto label_cond_b;
	other->checkCast("sun::security::util::DerValue");
	//    .end local p1    # "other":Ljava/lang/Object;
	return this->equals(other);
	// 1145    .line 775
	// 1146    .restart local p1    # "other":Ljava/lang/Object;
label_cond_b:
	return 0x0;

}
// .method public equals(Lsun/security/util/DerValue;)Z
bool sun::security::util::DerValue::equals(std::shared_ptr<sun::security::util::DerValue> other)
{
	
	bool cVar0;
	bool cVar1;
	
	//    .param p1, "other"    # Lsun/security/util/DerValue;
	cVar0 = 0x1;
	if ( this != other )
		goto label_cond_4;
	return cVar0;
	// 1166    .line 789
label_cond_4:
	if ( this->tag == other->tag )
		goto label_cond_c;
	return 0x0;
	// 1179    .line 792
label_cond_c:
	if ( this->data != other->data )
		goto label_cond_13;
	return cVar0;
	// 1190    .line 797
label_cond_13:
	if ( java::lang::System::identityHashCode(this->data) <= java::lang::System::identityHashCode(other->data) )
		goto label_cond_26;
	cVar1 = sun::security::util::DerValue::doEquals(this, other);
label_goto_25:
	return cVar1;
	// 1217    .line 800
label_cond_26:
	cVar1 = sun::security::util::DerValue::doEquals(other, this);
	goto label_goto_25;

}
// .method public getAsString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::DerValue::getAsString()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1229        value = {
	// 1230            Ljava/io/IOException;
	// 1231        }
	// 1232    .end annotation
	if ( this->tag != 0xc )
		goto label_cond_b;
	return this->getUTF8String();
	// 1249    .line 592
label_cond_b:
	if ( this->tag != 0x13 )
		goto label_cond_16;
	return this->getPrintableString();
	// 1264    .line 594
label_cond_16:
	if ( this->tag != 0x14 )
		goto label_cond_21;
	return this->getT61String();
	// 1279    .line 596
label_cond_21:
	if ( this->tag != 0x16 )
		goto label_cond_2c;
	return this->getIA5String();
	// 1294    .line 602
label_cond_2c:
	if ( this->tag != 0x1e )
		goto label_cond_37;
	return this->getBMPString();
	// 1309    .line 604
label_cond_37:
	if ( this->tag != 0x1b )
		goto label_cond_42;
	return this->getGeneralString();
	// 1324    .line 607
label_cond_42:
	return 0x0;

}
// .method public getBMPString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::DerValue::getBMPString()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1334        value = {
	// 1335            Ljava/io/IOException;
	// 1336        }
	// 1337    .end annotation
	if ( this->tag == 0x1e )
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getBMPString, not BMP ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 1376    .line 709
label_cond_22:
	cVar2 = std::make_shared<java::lang::String>(this->getDataBytes(), std::make_shared<java::lang::String>(std::make_shared<char[]>("UnicodeBigUnmarked")));
	return cVar2;

}
// .method public getBigInteger()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::util::DerValue::getBigInteger()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1394        value = {
	// 1395            Ljava/io/IOException;
	// 1396        }
	// 1397    .end annotation
	if ( this->tag == 0x2 )
		goto label_cond_21;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getBigInteger, not an int ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 1434    .line 529
label_cond_21:
	return this->buffer->getBigInteger(this->data->available(), 0x0);

}
// .method public getBitString()[B
unsigned char sun::security::util::DerValue::getBitString()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1456        value = {
	// 1457            Ljava/io/IOException;
	// 1458        }
	// 1459    .end annotation
	if ( this->tag == 0x3 )
		goto label_cond_21;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getBitString, not a bit string ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 1498    .line 568
label_cond_21:
	return this->buffer->getBitString();

}
// .method public getBitString(Z)[B
unsigned char sun::security::util::DerValue::getBitString(bool tagImplicit)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "tagImplicit"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1513        value = {
	// 1514            Ljava/io/IOException;
	// 1515        }
	// 1516    .end annotation
	if ( tagImplicit )     
		goto label_cond_23;
	if ( this->tag == 0x3 )
		goto label_cond_23;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getBitString, not a bit string ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 1558    .line 623
label_cond_23:
	return this->buffer->getBitString();

}
// .method public getBoolean()Z
bool sun::security::util::DerValue::getBoolean()
{
	
	bool cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1572        value = {
	// 1573            Ljava/io/IOException;
	// 1574        }
	// 1575    .end annotation
	cVar0 = 0x1;
	if ( this->tag == cVar0 )
		goto label_cond_22;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getBoolean, not a BOOLEAN ")))->append(this->tag)->toString());
	// throw
	throw cVar1;
	// 1614    .line 447
label_cond_22:
	if ( this->length == cVar0 )
		goto label_cond_42;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::io::IOException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getBoolean, invalid length ")))->append(this->length)->toString());
	// throw
	throw cVar3;
	// 1649    .line 451
label_cond_42:
	if ( !(this->buffer->read()) )  
		goto label_cond_4b;
	return cVar0;
	// 1662    .line 454
label_cond_4b:
	return 0x0;

}
// .method public final getData()Lsun/security/util/DerInputStream;
std::shared_ptr<sun::security::util::DerInputStream> sun::security::util::DerValue::getData()
{
	
	return this->data;

}
// .method public getDataBytes()[B
unsigned char sun::security::util::DerValue::getDataBytes()
{
	
	std::shared<std::vector<unsigned char[]>> retVal;
	std::shared_ptr<sun::security::util::DerInputStream> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1680        value = {
	// 1681            Ljava/io/IOException;
	// 1682        }
	// 1683    .end annotation
	retVal = std::make_shared<std::vector<unsigned char[]>>(this->length);
	//    .local v0, "retVal":[B
	cVar0 = this->data;
	cVar0->monitor_enter();
	try {
	//label_try_start_7:
	this->data->reset();
	this->data->getBytes(retVal);
	//label_try_end_11:
	}
	catch (...){
		goto label_catchall_13;
	}
	//    .catchall {:try_start_7 .. :try_end_11} :catchall_13
	cVar0->monitor_exit();
	return retVal;
	// 1715    .line 649
label_catchall_13:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public getEnumerated()I
int sun::security::util::DerValue::getEnumerated()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1727        value = {
	// 1728            Ljava/io/IOException;
	// 1729        }
	// 1730    .end annotation
	if ( this->tag == 0xa )
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getEnumerated, incorrect tag: ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 1769    .line 555
label_cond_22:
	return this->buffer->getInteger(this->data->available());

}
// .method public getGeneralString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::DerValue::getGeneralString()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1789        value = {
	// 1790            Ljava/io/IOException;
	// 1791        }
	// 1792    .end annotation
	if ( this->tag == 0x1b )
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getGeneralString, not GeneralString ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 1831    .line 737
label_cond_22:
	cVar2 = std::make_shared<java::lang::String>(this->getDataBytes(), std::make_shared<java::lang::String>(std::make_shared<char[]>("ASCII")));
	return cVar2;

}
// .method public getGeneralizedTime()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::util::DerValue::getGeneralizedTime()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1849        value = {
	// 1850            Ljava/io/IOException;
	// 1851        }
	// 1852    .end annotation
	if ( this->tag == 0x18 )
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getGeneralizedTime, not a GeneralizedTime: ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 1891    .line 762
label_cond_22:
	return this->buffer->getGeneralizedTime(this->data->available());

}
// .method public getIA5String()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::DerValue::getIA5String()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1911        value = {
	// 1912            Ljava/io/IOException;
	// 1913        }
	// 1914    .end annotation
	if ( this->tag == 0x16 )
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getIA5String, not IA5 ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 1953    .line 693
label_cond_22:
	cVar2 = std::make_shared<java::lang::String>(this->getDataBytes(), std::make_shared<java::lang::String>(std::make_shared<char[]>("ASCII")));
	return cVar2;

}
// .method public getInteger()I
int sun::security::util::DerValue::getInteger()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1971        value = {
	// 1972            Ljava/io/IOException;
	// 1973        }
	// 1974    .end annotation
	if ( this->tag == 0x2 )
		goto label_cond_21;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getInteger, not an int ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 2011    .line 518
label_cond_21:
	return this->buffer->getInteger(this->data->available());

}
// .method public getOID()Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::util::DerValue::getOID()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2031        value = {
	// 2032            Ljava/io/IOException;
	// 2033        }
	// 2034    .end annotation
	if ( this->tag == 0x6 )
		goto label_cond_21;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getOID, not an OID ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 2071    .line 465
label_cond_21:
	cVar2 = std::make_shared<sun::security::util::ObjectIdentifier>(this->buffer);
	return cVar2;

}
// .method public getOctetString()[B
unsigned char sun::security::util::DerValue::getOctetString()
{
	
	unsigned char cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared<std::vector<unsigned char[]>> bytes;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<sun::security::util::DerInputStream> in;
	std::shared_ptr<unsigned char[]> bytes;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2085        value = {
	// 2086            Ljava/io/IOException;
	// 2087        }
	// 2088    .end annotation
	cVar0 = 0x4;
	if ( this->tag == cVar0 )
		goto label_cond_29;
	if ( !(( this->isConstructed(cVar0) ^ 0x1)) )  
		goto label_cond_29;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getOctetString, not an Octet String: ")))->append(this->tag)->toString());
	// throw
	throw cVar1;
	// 2135    .line 491
label_cond_29:
	bytes = std::make_shared<std::vector<unsigned char[]>>(this->length);
	//    .local v0, "bytes":[B
	if ( this->length )     
		goto label_cond_32;
	return bytes;
	// 2150    .line 497
label_cond_32:
	if ( this->buffer->read(bytes) == this->length )
		goto label_cond_45;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("short read on DerValue buffer")));
	// throw
	throw cVar3;
	// 2171    .line 499
label_cond_45:
	if ( !(this->isConstructed()) )  
		goto label_cond_60;
	in = std::make_shared<sun::security::util::DerInputStream>(bytes);
	//    .local v1, "in":Lsun/security/util/DerInputStream;
	bytes = 0x0;
	//    .end local v0    # "bytes":[B
label_goto_51:
	if ( !(in->available()) )  
		goto label_cond_60;
	//    .restart local v0    # "bytes":[B
	goto label_goto_51;
	// 2209    .line 506
	// 2210    .end local v0    # "bytes":[B
	// 2211    .end local v1    # "in":Lsun/security/util/DerInputStream;
label_cond_60:
	return bytes;

}
// .method public getOriginalEncodedForm()[B
unsigned char sun::security::util::DerValue::getOriginalEncodedForm()
{
	
	std::shared_ptr<unsigned char[]> cVar1;
	
	cVar1 = 0x0;
	if ( !(this->originalEncodedForm) )  
		goto label_cond_d;
	cVar1 = this->originalEncodedForm->clone();
	cVar1->checkCast("unsigned char[]");
label_cond_d:
	return cVar1;

}
// .method public getPositiveBigInteger()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::util::DerValue::getPositiveBigInteger()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2244        value = {
	// 2245            Ljava/io/IOException;
	// 2246        }
	// 2247    .end annotation
	if ( this->tag == 0x2 )
		goto label_cond_21;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getBigInteger, not an int ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 2284    .line 542
label_cond_21:
	return this->buffer->getBigInteger(this->data->available(), 0x1);

}
// .method public getPrintableString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::DerValue::getPrintableString()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2306        value = {
	// 2307            Ljava/io/IOException;
	// 2308        }
	// 2309    .end annotation
	if ( this->tag == 0x13 )
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getPrintableString, not a string ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 2348    .line 667
label_cond_22:
	cVar2 = std::make_shared<java::lang::String>(this->getDataBytes(), std::make_shared<java::lang::String>(std::make_shared<char[]>("ASCII")));
	return cVar2;

}
// .method public getT61String()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::DerValue::getT61String()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2366        value = {
	// 2367            Ljava/io/IOException;
	// 2368        }
	// 2369    .end annotation
	if ( this->tag == 0x14 )
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getT61String, not T61 ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 2408    .line 680
label_cond_22:
	cVar2 = std::make_shared<java::lang::String>(this->getDataBytes(), std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO-8859-1")));
	return cVar2;

}
// .method public final getTag()B
unsigned char sun::security::util::DerValue::getTag()
{
	
	return this->tag;

}
// .method public getUTCTime()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::util::DerValue::getUTCTime()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2436        value = {
	// 2437            Ljava/io/IOException;
	// 2438        }
	// 2439    .end annotation
	if ( this->tag == 0x17 )
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getUTCTime, not a UtcTime: ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 2476    .line 749
label_cond_22:
	return this->buffer->getUTCTime(this->data->available());

}
// .method public getUTF8String()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::DerValue::getUTF8String()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2496        value = {
	// 2497            Ljava/io/IOException;
	// 2498        }
	// 2499    .end annotation
	if ( this->tag == 0xc )
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getUTF8String, not UTF-8 ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 2538    .line 723
label_cond_22:
	cVar2 = std::make_shared<java::lang::String>(this->getDataBytes(), std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF8")));
	return cVar2;

}
// .method public getUnalignedBitString()Lsun/security/util/BitArray;
std::shared_ptr<sun::security::util::BitArray> sun::security::util::DerValue::getUnalignedBitString()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2556        value = {
	// 2557            Ljava/io/IOException;
	// 2558        }
	// 2559    .end annotation
	if ( this->tag == 0x3 )
		goto label_cond_21;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getBitString, not a bit string ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 2598    .line 581
label_cond_21:
	return this->buffer->getUnalignedBitString();

}
// .method public getUnalignedBitString(Z)Lsun/security/util/BitArray;
std::shared_ptr<sun::security::util::BitArray> sun::security::util::DerValue::getUnalignedBitString(bool tagImplicit)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "tagImplicit"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 2613        value = {
	// 2614            Ljava/io/IOException;
	// 2615        }
	// 2616    .end annotation
	if ( tagImplicit )     
		goto label_cond_23;
	if ( this->tag == 0x3 )
		goto label_cond_23;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DerValue.getBitString, not a bit string ")))->append(this->tag)->toString());
	// throw
	throw cVar0;
	// 2658    .line 640
label_cond_23:
	return this->buffer->getUnalignedBitString();

}
// .method public hashCode()I
int sun::security::util::DerValue::hashCode()
{
	
	return this->toString()->hashCode();

}
// .method public isApplication()Z
bool sun::security::util::DerValue::isApplication()
{
	
	bool cVar0;
	
	if ( ( this->tag & 0xc0) != 0x40 )
		goto label_cond_a;
	cVar0 = 0x1;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public isConstructed()Z
bool sun::security::util::DerValue::isConstructed()
{
	
	bool cVar0;
	
	if ( ( this->tag & 0x20) != 0x20 )
		goto label_cond_a;
	cVar0 = 0x1;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public isConstructed(B)Z
bool sun::security::util::DerValue::isConstructed(unsigned char constructedTag)
{
	
	bool cVar1;
	
	//    .param p1, "constructedTag"    # B
	cVar1 = 0x0;
	if ( this->isConstructed() )     
		goto label_cond_8;
	return cVar1;
	// 2750    .line 210
label_cond_8:
	if ( ( this->tag & 0x1f) != constructedTag )
		goto label_cond_f;
	cVar1 = 0x1;
label_cond_f:
	return cVar1;

}
// .method public isContextSpecific()Z
bool sun::security::util::DerValue::isContextSpecific()
{
	
	bool cVar0;
	
	if ( ( this->tag & 0xc0) != 0x80 )
		goto label_cond_a;
	cVar0 = 0x1;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public isContextSpecific(B)Z
bool sun::security::util::DerValue::isContextSpecific(unsigned char cntxtTag)
{
	
	bool cVar1;
	
	//    .param p1, "cntxtTag"    # B
	cVar1 = 0x0;
	if ( this->isContextSpecific() )     
		goto label_cond_8;
	return cVar1;
	// 2805    .line 195
label_cond_8:
	if ( ( this->tag & 0x1f) != cntxtTag )
		goto label_cond_f;
	cVar1 = 0x1;
label_cond_f:
	return cVar1;

}
// .method isPrivate()Z
bool sun::security::util::DerValue::isPrivate()
{
	
	bool cVar0;
	
	if ( ( this->tag & 0xc0) != 0xc0 )
		goto label_cond_a;
	cVar0 = 0x1;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public isUniversal()Z
bool sun::security::util::DerValue::isUniversal()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( ( this->tag & 0xc0) )     
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method public length()I
int sun::security::util::DerValue::length()
{
	
	return this->length;

}
// .method public resetTag(B)V
void sun::security::util::DerValue::resetTag(unsigned char tag)
{
	
	//    .param p1, "tag"    # B
	this->tag = tag;
	return;

}
// .method public toByteArray()[B
unsigned char sun::security::util::DerValue::toByteArray()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> out;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2887        value = {
	// 2888            Ljava/io/IOException;
	// 2889        }
	// 2890    .end annotation
	out = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "out":Lsun/security/util/DerOutputStream;
	this->encode(out);
	this->data->reset();
	return out->toByteArray();

}
// .method public toDerInputStream()Lsun/security/util/DerInputStream;
std::shared_ptr<sun::security::util::DerInputStream> sun::security::util::DerValue::toDerInputStream()
{
	
	std::shared_ptr<sun::security::util::DerInputStream> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2918        value = {
	// 2919            Ljava/io/IOException;
	// 2920        }
	// 2921    .end annotation
	if ( this->tag == 0x30 )
		goto label_cond_c;
	if ( this->tag != 0x31 )
		goto label_cond_14;
label_cond_c:
	cVar0 = std::make_shared<sun::security::util::DerInputStream>(this->buffer);
	return cVar0;
	// 2947    .line 875
label_cond_14:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("toDerInputStream rejects tag type ")))->append(this->tag)->toString());
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::DerValue::toString()
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::String> str;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	str = this->getAsString();
	//    .local v1, "str":Ljava/lang/String;
	if ( !(str) )  
		goto label_cond_22;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->append(str)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString();
	// 3017    .line 827
label_cond_22:
	if ( this->tag != 0x5 )
		goto label_cond_2b;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("[DerValue, null]"));
	// 3030    .line 829
label_cond_2b:
	if ( this->tag != 0x6 )
		goto label_cond_49;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OID.")))->append(this->getOID())->toString();
	// 3063    .line 834
label_cond_49:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	//label_try_end_72:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_74;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_72} :catch_74
	return cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[DerValue, tag = ")))->append(this->tag)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", length = ")))->append(this->length)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->toString();
	// 3113    .line 836
	// 3114    .end local v1    # "str":Ljava/lang/String;
label_catch_74:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("misformatted DER value")));
	// throw
	throw cVar3;

}


