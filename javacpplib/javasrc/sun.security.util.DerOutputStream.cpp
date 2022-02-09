// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\DerOutputStream.smali
#include "java2ctype.h"
#include "java.io.ByteArrayOutputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.text.SimpleDateFormat.h"
#include "java.util.Arrays.h"
#include "java.util.Comparator.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"
#include "java.util.TimeZone.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.ByteArrayLexOrder.h"
#include "sun.security.util.ByteArrayTagOrder.h"
#include "sun.security.util.DerEncoder.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"

static sun::security::util::DerOutputStream::lexOrder;
static sun::security::util::DerOutputStream::tagOrder;
// .method static constructor <clinit>()V
void sun::security::util::DerOutputStream::static_cinit()
{
	
	std::shared_ptr<sun::security::util::ByteArrayLexOrder> cVar0;
	std::shared_ptr<sun::security::util::ByteArrayTagOrder> cVar1;
	
	cVar0 = std::make_shared<sun::security::util::ByteArrayLexOrder>();
	sun::security::util::DerOutputStream::lexOrder = cVar0;
	cVar1 = std::make_shared<sun::security::util::ByteArrayTagOrder>();
	sun::security::util::DerOutputStream::tagOrder = cVar1;
	return;

}
// .method public constructor <init>()V
sun::security::util::DerOutputStream::DerOutputStream()
{
	
	// 043    invoke-direct {p0}, Ljava/io/ByteArrayOutputStream;-><init>()V
	return;

}
// .method public constructor <init>(I)V
sun::security::util::DerOutputStream::DerOutputStream(int size)
{
	
	//    .param p1, "size"    # I
	java::io::ByteArrayOutputStream::(size);
	return;

}
// .method private putIntegerContents(I)V
void sun::security::util::DerOutputStream::putIntegerContents(int i)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared<std::vector<unsigned char[]>> bytes;
	int start;
	int j;
	int k;
	
	//    .param p1, "i"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 063        value = {
	// 064            Ljava/io/IOException;
	// 065        }
	// 066    .end annotation
	cVar0 = 0x4;
	cVar1 = -0x1;
	cVar2 = 0x3;
	cVar3 = 0x0;
	bytes = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	//    .local v0, "bytes":[B
	start = 0x0;
	//    .local v3, "start":I
	bytes[cVar2] = (unsigned char)(( i & 0xff));
	bytes[0x2] = (unsigned char)(_ushri((0xff00 &  i),0x8));
	bytes[0x1] = (unsigned char)(_ushri((0xff0000 &  i),0x10));
	bytes[cVar3] = (unsigned char)(_ushri((-0x1000000 &  i),0x18));
	if ( bytes[cVar3] != cVar1 )
		goto label_cond_41;
	j = 0x0;
	//    .local v1, "j":I
label_goto_2c:
	if ( j >= cVar2 )
		goto label_cond_59;
	if ( bytes[j] != cVar1 )
		goto label_cond_59;
	if ( ( bytes[( j + 0x1)] & 0x80) != 0x80 )
		goto label_cond_59;
	start = ( start + 0x1);
	j = ( j + 0x1);
	goto label_goto_2c;
	// 165    .line 213
	// 166    .end local v1    # "j":I
label_cond_41:
	if ( bytes[cVar3] )     
		goto label_cond_59;
	j = 0x0;
	//    .restart local v1    # "j":I
label_goto_46:
	if ( j >= cVar2 )
		goto label_cond_59;
	if ( bytes[j] )     
		goto label_cond_59;
	if ( ( bytes[( j + 0x1)] & 0x80) )     
		goto label_cond_59;
	start = ( start + 0x1);
	j = ( j + 0x1);
	goto label_goto_46;
	// 201    .line 226
	// 202    .end local v1    # "j":I
label_cond_59:
	this->putLength(( start - 0x4));
	k = start;
	//    .local v2, "k":I
label_goto_5f:
	if ( k >= cVar0 )
		goto label_cond_69;
	this->write(bytes[k]);
	k = ( k + 0x1);
	goto label_goto_5f;
	// 225    .line 229
label_cond_69:
	return;

}
// .method private putOrderedSet(B[Lsun/security/util/DerEncoder;Ljava/util/Comparator;)V
void sun::security::util::DerOutputStream::putOrderedSet(unsigned char tag,std::shared_ptr<std::vector<sun::security::util::DerEncoder>> set,std::shared_ptr<java::util::Comparator<unsigned char[]>> order)
{
	
	std::shared<std::vector<std::vector<sun::security::util::DerOutputStream>>> streams;
	int i;
	std::shared_ptr<sun::security::util::DerOutputStream> cVar0;
	std::shared<std::vector<unsigned char[][]>> bufs;
	std::shared_ptr<sun::security::util::DerOutputStream> bytes;
	
	//    .param p1, "tag"    # B
	//    .param p2, "set"    # [Lsun/security/util/DerEncoder;
	//    .annotation system Ldalvik/annotation/Signature;
	// 235        value = {
	// 236            "(B[",
	// 237            "Lsun/security/util/DerEncoder;",
	// 238            "Ljava/util/Comparator",
	// 239            "<[B>;)V"
	// 240        }
	// 241    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 244        value = {
	// 245            Ljava/io/IOException;
	// 246        }
	// 247    .end annotation
	//    .local p3, "order":Ljava/util/Comparator;, "Ljava/util/Comparator<[B>;"
	streams = std::make_shared<std::vector<std::vector<sun::security::util::DerOutputStream>>>(set->size());
	//    .local v3, "streams":[Lsun/security/util/DerOutputStream;
	i = 0x0;
	//    .local v2, "i":I
label_goto_4:
	if ( i >= set->size() )
		goto label_cond_18;
	cVar0 = std::make_shared<sun::security::util::DerOutputStream>();
	streams[i] = cVar0;
	set[i]->derEncode(streams[i]);
	i = ( i + 0x1);
	goto label_goto_4;
	// 285    .line 383
label_cond_18:
	bufs = std::make_shared<std::vector<unsigned char[][]>>(streams->size());
	//    .local v0, "bufs":[[B
	i = 0x0;
label_goto_1c:
	if ( i >= streams->size() )
		goto label_cond_2a;
	bufs[i] = streams[i]->toByteArray();
	i = ( i + 0x1);
	goto label_goto_1c;
	// 314    .line 387
label_cond_2a:
	java::util::Arrays::sort(bufs, order);
	bytes = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "bytes":Lsun/security/util/DerOutputStream;
	i = 0x0;
label_goto_33:
	if ( i >= streams->size() )
		goto label_cond_3e;
	bytes->write(bufs[i]);
	i = ( i + 0x1);
	goto label_goto_33;
	// 342    .line 393
label_cond_3e:
	this->write(tag, bytes);
	return;

}
// .method private putTime(Ljava/util/Date;B)V
void sun::security::util::DerOutputStream::putTime(std::shared_ptr<java::util::Date> d,unsigned char tag)
{
	
	std::shared_ptr<java::text::SimpleDateFormat> sdf;
	std::shared_ptr<unsigned char[]> time;
	
	//    .param p1, "d"    # Ljava/util/Date;
	//    .param p2, "tag"    # B
	//    .annotation system Ldalvik/annotation/Throws;
	// 355        value = {
	// 356            Ljava/io/IOException;
	// 357        }
	// 358    .end annotation
	//    .local v3, "tz":Ljava/util/TimeZone;
	0x0;
	//    .local v0, "pattern":Ljava/lang/String;
	if ( tag != 0x17 )
		goto label_cond_2f;
	//    .end local p2    # "tag":B
	//    .local v0, "pattern":Ljava/lang/String;
label_goto_f:
	sdf = std::make_shared<java::text::SimpleDateFormat>(pattern, java::util::Locale::US);
	//    .local v1, "sdf":Ljava/text/SimpleDateFormat;
	sdf->setTimeZone(java::util::TimeZone::getTimeZone(std::make_shared<java::lang::String>(std::make_shared<char[]>("GMT"))));
	time = sdf->format(d)->getBytes(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO-8859-1")));
	//    .local v2, "time":[B
	this->write(tag);
	this->putLength(time->size());
	this->write(time);
	return;
	// 421    .line 499
	// 422    .end local v1    # "sdf":Ljava/text/SimpleDateFormat;
	// 423    .end local v2    # "time":[B
	// 424    .local v0, "pattern":Ljava/lang/String;
	// 425    .restart local p2    # "tag":B
label_cond_2f:
	//    .local p2, "tag":B
	//    .local v0, "pattern":Ljava/lang/String;
	goto label_goto_f;

}
// .method private writeString(Ljava/lang/String;BLjava/lang/String;)V
void sun::security::util::DerOutputStream::writeString(std::shared_ptr<java::lang::String> s,unsigned char stringTag,std::shared_ptr<java::lang::String> enc)
{
	
	std::shared_ptr<unsigned char[]> data;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "stringTag"    # B
	//    .param p3, "enc"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 443        value = {
	// 444            Ljava/io/IOException;
	// 445        }
	// 446    .end annotation
	data = s->getBytes(enc);
	//    .local v0, "data":[B
	this->write(stringTag);
	this->putLength(data->size());
	this->write(data);
	return;

}
// .method public derEncode(Ljava/io/OutputStream;)V
void sun::security::util::DerOutputStream::derEncode(std::shared_ptr<java::io::OutputStream> out)
{
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 476        value = {
	// 477            Ljava/io/IOException;
	// 478        }
	// 479    .end annotation
	out->write(this->toByteArray());
	return;

}
// .method public putBMPString(Ljava/lang/String;)V
void sun::security::util::DerOutputStream::putBMPString(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 497        value = {
	// 498            Ljava/io/IOException;
	// 499        }
	// 500    .end annotation
	this->writeString(s, 0x1e, std::make_shared<java::lang::String>(std::make_shared<char[]>("UnicodeBigUnmarked")));
	return;

}
// .method public putBitString([B)V
void sun::security::util::DerOutputStream::putBitString(std::shared_ptr<unsigned char[]> bits)
{
	
	//    .param p1, "bits"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 518        value = {
	// 519            Ljava/io/IOException;
	// 520        }
	// 521    .end annotation
	this->write(0x3);
	this->putLength(( bits->size() + 0x1));
	this->write(0x0);
	this->write(bits);
	return;

}
// .method public putBoolean(Z)V
void sun::security::util::DerOutputStream::putBoolean(bool val)
{
	
	int cVar0;
	
	//    .param p1, "val"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 552        value = {
	// 553            Ljava/io/IOException;
	// 554        }
	// 555    .end annotation
	cVar0 = 0x1;
	this->write(cVar0);
	this->putLength(cVar0);
	if ( !(val) )  
		goto label_cond_f;
	this->write(0xff);
label_goto_e:
	return;
	// 578    .line 145
label_cond_f:
	this->write(0x0);
	goto label_goto_e;

}
// .method public putDerValue(Lsun/security/util/DerValue;)V
void sun::security::util::DerOutputStream::putDerValue(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 591        value = {
	// 592            Ljava/io/IOException;
	// 593        }
	// 594    .end annotation
	val->encode(this);
	return;

}
// .method public putEnumerated(I)V
void sun::security::util::DerOutputStream::putEnumerated(int i)
{
	
	//    .param p1, "i"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 608        value = {
	// 609            Ljava/io/IOException;
	// 610        }
	// 611    .end annotation
	this->write(0xa);
	this->putIntegerContents(i);
	return;

}
// .method public putGeneralString(Ljava/lang/String;)V
void sun::security::util::DerOutputStream::putGeneralString(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 630        value = {
	// 631            Ljava/io/IOException;
	// 632        }
	// 633    .end annotation
	this->writeString(s, 0x1b, std::make_shared<java::lang::String>(std::make_shared<char[]>("ASCII")));
	return;

}
// .method public putGeneralizedTime(Ljava/util/Date;)V
void sun::security::util::DerOutputStream::putGeneralizedTime(std::shared_ptr<java::util::Date> d)
{
	
	//    .param p1, "d"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Throws;
	// 651        value = {
	// 652            Ljava/io/IOException;
	// 653        }
	// 654    .end annotation
	this->putTime(d, 0x18);
	return;

}
// .method public putIA5String(Ljava/lang/String;)V
void sun::security::util::DerOutputStream::putIA5String(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 670        value = {
	// 671            Ljava/io/IOException;
	// 672        }
	// 673    .end annotation
	this->writeString(s, 0x16, std::make_shared<java::lang::String>(std::make_shared<char[]>("ASCII")));
	return;

}
// .method public putInteger(I)V
void sun::security::util::DerOutputStream::putInteger(int i)
{
	
	//    .param p1, "i"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 691        value = {
	// 692            Ljava/io/IOException;
	// 693        }
	// 694    .end annotation
	this->write(0x2);
	this->putIntegerContents(i);
	return;

}
// .method public putInteger(Ljava/lang/Integer;)V
void sun::security::util::DerOutputStream::putInteger(std::shared_ptr<java::lang::Integer> i)
{
	
	//    .param p1, "i"    # Ljava/lang/Integer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 713        value = {
	// 714            Ljava/io/IOException;
	// 715        }
	// 716    .end annotation
	this->putInteger(i->intValue());
	return;

}
// .method public putInteger(Ljava/math/BigInteger;)V
void sun::security::util::DerOutputStream::putInteger(std::shared_ptr<java::math::BigInteger> i)
{
	
	std::shared_ptr<unsigned char[]> buf;
	
	//    .param p1, "i"    # Ljava/math/BigInteger;
	//    .annotation system Ldalvik/annotation/Throws;
	// 734        value = {
	// 735            Ljava/io/IOException;
	// 736        }
	// 737    .end annotation
	this->write(0x2);
	buf = i->toByteArray();
	//    .local v0, "buf":[B
	this->putLength(buf->size());
	this->write(buf, 0x0, buf->size());
	return;

}
// .method public putLength(I)V
void sun::security::util::DerOutputStream::putLength(int len)
{
	
	//    .param p1, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 771        value = {
	// 772            Ljava/io/IOException;
	// 773        }
	// 774    .end annotation
	if ( len >= 0x80 )
		goto label_cond_9;
	this->write((unsigned char)(len));
label_goto_8:
	return;
	// 791    .line 526
label_cond_9:
	if ( len >= 0x100 )
		goto label_cond_17;
	this->write(-0x7f);
	this->write((unsigned char)(len));
	goto label_goto_8;
	// 809    .line 530
label_cond_17:
	if ( len >= 0x10000 )
		goto label_cond_2b;
	this->write(-0x7e);
	this->write((unsigned char)(_shri(len,0x8)));
	this->write((unsigned char)(len));
	goto label_goto_8;
	// 834    .line 535
label_cond_2b:
	if ( len >= 0x1000000 )
		goto label_cond_45;
	this->write(-0x7d);
	this->write((unsigned char)(_shri(len,0x10)));
	this->write((unsigned char)(_shri(len,0x8)));
	this->write((unsigned char)(len));
	goto label_goto_8;
	// 866    .line 542
label_cond_45:
	this->write(-0x7c);
	this->write((unsigned char)(_shri(len,0x18)));
	this->write((unsigned char)(_shri(len,0x10)));
	this->write((unsigned char)(_shri(len,0x8)));
	this->write((unsigned char)(len));
	goto label_goto_8;

}
// .method public putNull()V
void sun::security::util::DerOutputStream::putNull()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 904        value = {
	// 905            Ljava/io/IOException;
	// 906        }
	// 907    .end annotation
	this->write(0x5);
	this->putLength(0x0);
	return;

}
// .method public putOID(Lsun/security/util/ObjectIdentifier;)V
void sun::security::util::DerOutputStream::putOID(std::shared_ptr<sun::security::util::ObjectIdentifier> oid)
{
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .annotation system Ldalvik/annotation/Throws;
	// 928        value = {
	// 929            Ljava/io/IOException;
	// 930        }
	// 931    .end annotation
	oid->encode(this);
	return;

}
// .method public putOctetString([B)V
void sun::security::util::DerOutputStream::putOctetString(std::shared_ptr<unsigned char[]> octets)
{
	
	//    .param p1, "octets"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 945        value = {
	// 946            Ljava/io/IOException;
	// 947        }
	// 948    .end annotation
	this->write(0x4, octets);
	return;

}
// .method public putOrderedSet(B[Lsun/security/util/DerEncoder;)V
void sun::security::util::DerOutputStream::putOrderedSet(unsigned char tag,std::shared_ptr<std::vector<sun::security::util::DerEncoder>> set)
{
	
	//    .param p1, "tag"    # B
	//    .param p2, "set"    # [Lsun/security/util/DerEncoder;
	//    .annotation system Ldalvik/annotation/Throws;
	// 965        value = {
	// 966            Ljava/io/IOException;
	// 967        }
	// 968    .end annotation
	this->putOrderedSet(tag, set, sun::security::util::DerOutputStream::tagOrder);
	return;

}
// .method public putOrderedSetOf(B[Lsun/security/util/DerEncoder;)V
void sun::security::util::DerOutputStream::putOrderedSetOf(unsigned char tag,std::shared_ptr<std::vector<sun::security::util::DerEncoder>> set)
{
	
	//    .param p1, "tag"    # B
	//    .param p2, "set"    # [Lsun/security/util/DerEncoder;
	//    .annotation system Ldalvik/annotation/Throws;
	// 985        value = {
	// 986            Ljava/io/IOException;
	// 987        }
	// 988    .end annotation
	this->putOrderedSet(tag, set, sun::security::util::DerOutputStream::lexOrder);
	return;

}
// .method public putPrintableString(Ljava/lang/String;)V
void sun::security::util::DerOutputStream::putPrintableString(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1004        value = {
	// 1005            Ljava/io/IOException;
	// 1006        }
	// 1007    .end annotation
	this->writeString(s, 0x13, std::make_shared<java::lang::String>(std::make_shared<char[]>("ASCII")));
	return;

}
// .method public putSequence([Lsun/security/util/DerValue;)V
void sun::security::util::DerOutputStream::putSequence(std::shared_ptr<std::vector<sun::security::util::DerValue>> seq)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> bytes;
	int i;
	
	//    .param p1, "seq"    # [Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1025        value = {
	// 1026            Ljava/io/IOException;
	// 1027        }
	// 1028    .end annotation
	bytes = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "bytes":Lsun/security/util/DerOutputStream;
	i = 0x0;
	//    .local v1, "i":I
label_goto_6:
	if ( i >= seq->size() )
		goto label_cond_11;
	seq[i]->encode(bytes);
	i = ( i + 0x1);
	goto label_goto_6;
	// 1056    .line 307
label_cond_11:
	this->write(0x30, bytes);
	return;

}
// .method public putSet([Lsun/security/util/DerValue;)V
void sun::security::util::DerOutputStream::putSet(std::shared_ptr<std::vector<sun::security::util::DerValue>> set)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> bytes;
	int i;
	
	//    .param p1, "set"    # [Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1070        value = {
	// 1071            Ljava/io/IOException;
	// 1072        }
	// 1073    .end annotation
	bytes = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "bytes":Lsun/security/util/DerOutputStream;
	i = 0x0;
	//    .local v1, "i":I
label_goto_6:
	if ( i >= set->size() )
		goto label_cond_11;
	set[i]->encode(bytes);
	i = ( i + 0x1);
	goto label_goto_6;
	// 1101    .line 324
label_cond_11:
	this->write(0x31, bytes);
	return;

}
// .method public putT61String(Ljava/lang/String;)V
void sun::security::util::DerOutputStream::putT61String(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1115        value = {
	// 1116            Ljava/io/IOException;
	// 1117        }
	// 1118    .end annotation
	this->writeString(s, 0x14, std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO-8859-1")));
	return;

}
// .method public putTag(BZB)V
void sun::security::util::DerOutputStream::putTag(unsigned char tagClass,bool form,unsigned char val)
{
	
	int tag;
	
	//    .param p1, "tagClass"    # B
	//    .param p2, "form"    # Z
	//    .param p3, "val"    # B
	tag = (unsigned char)((tagClass | val));
	//    .local v0, "tag":B
	if ( !(form) )  
		goto label_cond_8;
label_cond_8:
	this->write(tag);
	return;

}
// .method public putTruncatedUnalignedBitString(Lsun/security/util/BitArray;)V
void sun::security::util::DerOutputStream::putTruncatedUnalignedBitString(std::shared_ptr<sun::security::util::BitArray> ba)
{
	
	//    .param p1, "ba"    # Lsun/security/util/BitArray;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1165        value = {
	// 1166            Ljava/io/IOException;
	// 1167        }
	// 1168    .end annotation
	this->putUnalignedBitString(ba->truncate());
	return;

}
// .method public putUTCTime(Ljava/util/Date;)V
void sun::security::util::DerOutputStream::putUTCTime(std::shared_ptr<java::util::Date> d)
{
	
	//    .param p1, "d"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1186        value = {
	// 1187            Ljava/io/IOException;
	// 1188        }
	// 1189    .end annotation
	this->putTime(d, 0x17);
	return;

}
// .method public putUTF8String(Ljava/lang/String;)V
void sun::security::util::DerOutputStream::putUTF8String(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1205        value = {
	// 1206            Ljava/io/IOException;
	// 1207        }
	// 1208    .end annotation
	this->writeString(s, 0xc, std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF8")));
	return;

}
// .method public putUnalignedBitString(Lsun/security/util/BitArray;)V
void sun::security::util::DerOutputStream::putUnalignedBitString(std::shared_ptr<sun::security::util::BitArray> ba)
{
	
	std::shared_ptr<unsigned char[]> bits;
	
	//    .param p1, "ba"    # Lsun/security/util/BitArray;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1226        value = {
	// 1227            Ljava/io/IOException;
	// 1228        }
	// 1229    .end annotation
	bits = ba->toByteArray();
	//    .local v0, "bits":[B
	this->write(0x3);
	this->putLength(( bits->size() + 0x1));
	this->write((( bits->size() * 0x8) -  ba->length()));
	this->write(bits);
	return;

}
// .method public write(BLsun/security/util/DerOutputStream;)V
void sun::security::util::DerOutputStream::write(unsigned char tag,std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "tag"    # B
	//    .param p2, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1275        value = {
	// 1276            Ljava/io/IOException;
	// 1277        }
	// 1278    .end annotation
	this->write(tag);
	this->putLength(out->count);
	this->write(out->buf, 0x0, out->count);
	return;

}
// .method public write(B[B)V
void sun::security::util::DerOutputStream::write(unsigned char tag,std::shared_ptr<unsigned char[]> buf)
{
	
	//    .param p1, "tag"    # B
	//    .param p2, "buf"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 1307        value = {
	// 1308            Ljava/io/IOException;
	// 1309        }
	// 1310    .end annotation
	this->write(tag);
	this->putLength(buf->size());
	this->write(buf, 0x0, buf->size());
	return;

}
// .method public writeImplicit(BLsun/security/util/DerOutputStream;)V
void sun::security::util::DerOutputStream::writeImplicit(unsigned char tag,std::shared_ptr<sun::security::util::DerOutputStream> value)
{
	
	//    .param p1, "tag"    # B
	//    .param p2, "value"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1337        value = {
	// 1338            Ljava/io/IOException;
	// 1339        }
	// 1340    .end annotation
	this->write(tag);
	this->write(value->buf, 0x1, ( value->count + -0x1));
	return;

}


