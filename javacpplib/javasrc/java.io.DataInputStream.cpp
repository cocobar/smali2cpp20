// CPP L:\smali2cpp20\x64\Release\out\java\io\DataInputStream.smali
#include "java2ctype.h"
#include "java.io.DataInput.h"
#include "java.io.DataInputStream.h"
#include "java.io.EOFException.h"
#include "java.io.FilterInputStream.h"
#include "java.io.InputStream.h"
#include "java.io.PushbackInputStream.h"
#include "java.io.UTFDataFormatException.h"
#include "java.lang.Double.h"
#include "java.lang.Float.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.nio.ByteOrder.h"
#include "libcore.io.Memory.h"

// .method public constructor <init>(Ljava/io/InputStream;)V
java::io::DataInputStream::DataInputStream(std::shared_ptr<java::io::InputStream> in)
{
	
	int cVar0;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	cVar0 = 0x50;
	java::io::FilterInputStream::(in);
	this->bytearr = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	this->chararr = std::make_shared<std::vector<char[]>>(cVar0);
	this->readBuffer = std::make_shared<std::vector<unsigned char[]>>(0x8);
	return;

}
// .method public static final readUTF(Ljava/io/DataInput;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::DataInputStream::readUTF(std::shared_ptr<java::io::DataInput> in)
{
	
	int cVar0;
	int cVar1;
	int utflen;
	std::shared_ptr<java::io::DataInputStream> dis;
	std::shared_ptr<char[]> chararr;
	std::shared_ptr<unsigned char[]> bytearr;
	int count;
	int chararr_count;
	int c;
	std::shared_ptr<java::io::UTFDataFormatException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::io::UTFDataFormatException> cVar4;
	unsigned char char2;
	std::shared_ptr<java::io::UTFDataFormatException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::io::UTFDataFormatException> cVar7;
	unsigned char char3;
	std::shared_ptr<java::io::UTFDataFormatException> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	std::shared_ptr<java::lang::String> cVar10;
	
	//    .param p0, "in"    # Ljava/io/DataInput;
	//    .annotation system Ldalvik/annotation/Throws;
	// 055        value = {
	// 056            Ljava/io/IOException;
	// 057        }
	// 058    .end annotation
	cVar0 = 0x0;
	cVar1 = 0x80;
	utflen = in->readUnsignedShort();
	//    .local v9, "utflen":I
	0x0;
	//    .local v0, "bytearr":[B
	0x0;
	//    .local v4, "chararr":[C
	if ( !(in->instanceOf("java::io::DataInputStream")) )  
		goto label_cond_5a;
	dis = in;
	dis->checkCast("java::io::DataInputStream");
	//    .local v8, "dis":Ljava/io/DataInputStream;
	if ( dis->bytearr->size() >= utflen )
		goto label_cond_21;
	dis->bytearr = std::make_shared<std::vector<unsigned char[]>>(( utflen * 0x2));
	dis->chararr = std::make_shared<std::vector<char[]>>(( utflen * 0x2));
label_cond_21:
	chararr = dis->chararr;
	//    .local v4, "chararr":[C
	bytearr = dis->bytearr;
	//    .end local v8    # "dis":Ljava/io/DataInputStream;
	//    .local v0, "bytearr":[B
label_goto_25:
	count = 0x0;
	//    .local v7, "count":I
	//    .local v5, "chararr_count":I
	in->readFully(bytearr, cVar0, utflen);
	chararr_count = 0x0;
	//    .end local v5    # "chararr_count":I
	//    .local v6, "chararr_count":I
label_goto_2b:
	if ( count >= utflen )
		goto label_cond_35;
	c = ( bytearr[count] & 0xff);
	//    .local v1, "c":I
	if ( c <= 0x7f )
		goto label_cond_5f;
	//    .end local v1    # "c":I
label_cond_35:
label_goto_35:
	if ( count >= utflen )
		goto label_cond_fb;
	c = ( bytearr[count] & 0xff);
	//    .restart local v1    # "c":I
	// switch
	{
	auto item = ( _shri(c,0x4) );
	if (item == 0) goto label_pswitch_68;
	if (item == 1) goto label_pswitch_68;
	if (item == 2) goto label_pswitch_68;
	if (item == 3) goto label_pswitch_68;
	if (item == 4) goto label_pswitch_68;
	if (item == 5) goto label_pswitch_68;
	if (item == 6) goto label_pswitch_68;
	if (item == 7) goto label_pswitch_68;
	if (item == 8) goto label_pswitch_40;
	if (item == 9) goto label_pswitch_40;
	if (item == 10) goto label_pswitch_40;
	if (item == 11) goto label_pswitch_40;
	if (item == 12) goto label_pswitch_71;
	if (item == 13) goto label_pswitch_71;
	if (item == 14) goto label_pswitch_ad;
	}
label_pswitch_40:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::io::UTFDataFormatException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("malformed input around byte ")))->append(count)->toString());
	// throw
	throw cVar2;
	// 197    .line 598
	// 198    .end local v1    # "c":I
	// 199    .end local v6    # "chararr_count":I
	// 200    .end local v7    # "count":I
	// 201    .local v0, "bytearr":[B
	// 202    .local v4, "chararr":[C
label_cond_5a:
	//    .local v0, "bytearr":[B
	//    .local v4, "chararr":[C
	goto label_goto_25;
	// 213    .line 611
	// 214    .restart local v1    # "c":I
	// 215    .restart local v6    # "chararr_count":I
	// 216    .restart local v7    # "count":I
label_cond_5f:
	count = ( count + 0x1);
	//    .end local v6    # "chararr_count":I
	//    .restart local v5    # "chararr_count":I
	chararr[chararr_count] = (char)(c);
	chararr_count = ( chararr_count + 0x1);
	//    .end local v5    # "chararr_count":I
	//    .restart local v6    # "chararr_count":I
	goto label_goto_2b;
	// 235    .line 620
label_pswitch_68:
	count = ( count + 0x1);
	//    .end local v6    # "chararr_count":I
	//    .restart local v5    # "chararr_count":I
	chararr[chararr_count] = (char)(c);
label_goto_6f:
	chararr_count = chararr_count;
	//    .end local v5    # "chararr_count":I
	//    .restart local v6    # "chararr_count":I
	goto label_goto_35;
	// 255    .line 625
label_pswitch_71:
	count = ( count + 0x2);
	if ( count <= utflen )
		goto label_cond_7e;
	cVar4 = std::make_shared<java::io::UTFDataFormatException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("malformed input: partial character at end")));
	// throw
	throw cVar4;
	// 273    .line 629
label_cond_7e:
	char2 = bytearr[( count + -0x1)];
	//    .local v2, "char2":I
	if ( ( char2 & 0xc0) == cVar1 )
		goto label_cond_a0;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::io::UTFDataFormatException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("malformed input around byte ")))->append(count)->toString());
	// throw
	throw cVar5;
	// 312    .line 633
label_cond_a0:
	//    .end local v6    # "chararr_count":I
	//    .restart local v5    # "chararr_count":I
	chararr[chararr_count] = (char)((( ( c & 0x1f) << 0x6) |  ( char2 & 0x3f)));
	goto label_goto_6f;
	// 334    .line 638
	// 335    .end local v2    # "char2":I
	// 336    .end local v5    # "chararr_count":I
	// 337    .restart local v6    # "chararr_count":I
label_pswitch_ad:
	count = ( count + 0x3);
	if ( count <= utflen )
		goto label_cond_ba;
	cVar7 = std::make_shared<java::io::UTFDataFormatException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("malformed input: partial character at end")));
	// throw
	throw cVar7;
	// 355    .line 642
label_cond_ba:
	char2 = bytearr[( count + -0x2)];
	//    .restart local v2    # "char2":I
	char3 = bytearr[( count + -0x1)];
	//    .local v3, "char3":I
	if ( ( char2 & 0xc0) != cVar1 )
		goto label_cond_ca;
	if ( ( char3 & 0xc0) == cVar1 )
		goto label_cond_e6;
label_cond_ca:
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<java::io::UTFDataFormatException>(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("malformed input around byte ")))->append(( count + -0x1))->toString());
	// throw
	throw cVar8;
	// 407    .line 647
label_cond_e6:
	//    .end local v6    # "chararr_count":I
	//    .restart local v5    # "chararr_count":I
	chararr[chararr_count] = (char)(((( ( c & 0xf) << 0xc) |  ( ( char2 & 0x3f) << 0x6)) |  ( ( char3 & 0x3f) << 0x0)));
	goto label_goto_6f;
	// 439    .line 658
	// 440    .end local v1    # "c":I
	// 441    .end local v2    # "char2":I
	// 442    .end local v3    # "char3":I
	// 443    .end local v5    # "chararr_count":I
	// 444    .restart local v6    # "chararr_count":I
label_cond_fb:
	cVar10 = std::make_shared<java::lang::String>(chararr, cVar0, chararr_count);
	return cVar10;
	// 452    .line 617
	// 453    nop
	// 455    :pswitch_data_102
	// 456    .packed-switch 0x0
	// 457        :pswitch_68
	// 458        :pswitch_68
	// 459        :pswitch_68
	// 460        :pswitch_68
	// 461        :pswitch_68
	// 462        :pswitch_68
	// 463        :pswitch_68
	// 464        :pswitch_68
	// 465        :pswitch_40
	// 466        :pswitch_40
	// 467        :pswitch_40
	// 468        :pswitch_40
	// 469        :pswitch_71
	// 470        :pswitch_71
	// 471        :pswitch_ad
	// 472    .end packed-switch

}
// .method public final read([B)I
int java::io::DataInputStream::read(std::shared_ptr<unsigned char[]> b)
{
	
	//    .param p1, "b"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 481        value = {
	// 482            Ljava/io/IOException;
	// 483        }
	// 484    .end annotation
	return this->in->read(b, 0x0, b->size());

}
// .method public final read([BII)I
int java::io::DataInputStream::read(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 507        value = {
	// 508            Ljava/io/IOException;
	// 509        }
	// 510    .end annotation
	return this->in->read(b, off, len);

}
// .method public final readBoolean()Z
bool java::io::DataInputStream::readBoolean()
{
	
	bool cVar2;
	int ch;
	std::shared_ptr<java::io::EOFException> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 526        value = {
	// 527            Ljava/io/IOException;
	// 528        }
	// 529    .end annotation
	cVar2 = 0x0;
	ch = this->in->read();
	//    .local v0, "ch":I
	if ( ch >= 0 )
		goto label_cond_f;
	cVar1 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar1;
	// 552    .line 248
label_cond_f:
	if ( !(ch) )  
		goto label_cond_12;
	cVar2 = 0x1;
label_cond_12:
	return cVar2;

}
// .method public final readByte()B
unsigned char java::io::DataInputStream::readByte()
{
	
	int ch;
	std::shared_ptr<java::io::EOFException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 565        value = {
	// 566            Ljava/io/IOException;
	// 567        }
	// 568    .end annotation
	ch = this->in->read();
	//    .local v0, "ch":I
	if ( ch >= 0 )
		goto label_cond_e;
	cVar0 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar0;
	// 589    .line 271
label_cond_e:
	return (unsigned char)(ch);

}
// .method public final readChar()C
char java::io::DataInputStream::readChar()
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 599        value = {
	// 600            Ljava/io/IOException;
	// 601        }
	// 602    .end annotation
	cVar0 = 0x0;
	this->readFully(this->readBuffer, cVar0, 0x2);
	return (char)(libcore::io::Memory::peekShort(this->readBuffer, cVar0, java::nio::ByteOrder::BIG_ENDIAN));

}
// .method public final readDouble()D
double java::io::DataInputStream::readDouble()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 631        value = {
	// 632            Ljava/io/IOException;
	// 633        }
	// 634    .end annotation
	return java::lang::Double::longBitsToDouble(this->readLong());

}
// .method public final readFloat()F
float java::io::DataInputStream::readFloat()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 652        value = {
	// 653            Ljava/io/IOException;
	// 654        }
	// 655    .end annotation
	return java::lang::Float::intBitsToFloat(this->readInt());

}
// .method public final readFully([B)V
void java::io::DataInputStream::readFully(std::shared_ptr<unsigned char[]> b)
{
	
	//    .param p1, "b"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 674        value = {
	// 675            Ljava/io/IOException;
	// 676        }
	// 677    .end annotation
	this->readFully(b, 0x0, b->size());
	return;

}
// .method public final readFully([BII)V
void java::io::DataInputStream::readFully(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	int n;
	int count;
	std::shared_ptr<java::io::EOFException> cVar1;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 697        value = {
	// 698            Ljava/io/IOException;
	// 699        }
	// 700    .end annotation
	if ( len >= 0 )
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 713    .line 196
label_cond_8:
	n = 0x0;
	//    .local v1, "n":I
label_goto_9:
	if ( n >= len )
		goto label_cond_1f;
	count = this->in->read(b, (off + n), (len - n));
	//    .local v0, "count":I
	if ( count >= 0 )
		goto label_cond_1d;
	cVar1 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar1;
	// 744    .line 201
label_cond_1d:
	n = (n +  count);
	goto label_goto_9;
	// 750    .line 203
	// 751    .end local v0    # "count":I
label_cond_1f:
	return;

}
// .method public final readInt()I
int java::io::DataInputStream::readInt()
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 759        value = {
	// 760            Ljava/io/IOException;
	// 761        }
	// 762    .end annotation
	cVar0 = 0x0;
	this->readFully(this->readBuffer, cVar0, 0x4);
	return libcore::io::Memory::peekInt(this->readBuffer, cVar0, java::nio::ByteOrder::BIG_ENDIAN);

}
// .method public final readLine()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::DataInputStream::readLine()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<char[]> buf;
	std::shared<std::vector<char[]>> buf;
	int room;
	int offset;
	int c;
	int c2;
	std::shared_ptr<java::io::PushbackInputStream> cVar2;
	std::shared_ptr<java::io::InputStream> cVar3;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 789        value = {
	// 790            Ljava/io/IOException;
	// 791        }
	// 792    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 795    .end annotation
	cVar0 = -0x1;
	cVar1 = 0x0;
	buf = this->lineBuffer;
	//    .local v0, "buf":[C
	if ( buf )     
		goto label_cond_d;
	buf = std::make_shared<std::vector<char[]>>(0x80);
	//    .end local v0    # "buf":[C
	this->lineBuffer = buf;
	//    .restart local v0    # "buf":[C
label_cond_d:
	room = buf->size();
	//    .local v5, "room":I
	offset = 0x0;
	//    .local v3, "offset":I
label_goto_f:
	c = this->in->read();
	//    .local v1, "c":I
	// switch
	{
	auto item = ( c );
	if (item == -0x1) goto label_sswitch_54;
	if (item == 0xa) goto label_sswitch_54;
	if (item == 0xd) goto label_sswitch_32;
	}
	room = ( room + -0x1);
	if ( room >= 0 )
		goto label_cond_2b;
	buf = std::make_shared<std::vector<char[]>>(( offset + 0x80));
	room = ( (buf->size() -  offset) + -0x1);
	java::lang::System::arraycopy(this->lineBuffer, cVar1, buf, cVar1, offset);
	this->lineBuffer = buf;
label_cond_2b:
	//    .end local v3    # "offset":I
	//    .local v4, "offset":I
	buf[offset] = (char)(c);
	offset = ( offset + 0x1);
	//    .end local v4    # "offset":I
	//    .restart local v3    # "offset":I
	goto label_goto_f;
	// 881    .line 516
label_sswitch_32:
	c2 = this->in->read();
	//    .local v2, "c2":I
	if ( c2 == 0xa )
		goto label_cond_54;
	if ( c2 == cVar0 )
		goto label_cond_54;
	if ( this->in->instanceOf("java::io::PushbackInputStream") )     
		goto label_cond_4d;
	cVar2 = std::make_shared<java::io::PushbackInputStream>(this->in);
	this->in = cVar2;
label_cond_4d:
	cVar3 = this->in;
	cVar3->checkCast("java::io::PushbackInputStream");
	cVar3->unread(c2);
	//    .end local v2    # "c2":I
label_cond_54:
label_sswitch_54:
	if ( c != cVar0 )
		goto label_cond_59;
	if ( offset )     
		goto label_cond_59;
	return 0x0;
	// 932    .line 539
label_cond_59:
	return java::lang::String::copyValueOf(buf, cVar1, offset);
	// 940    .line 510
	// 941    :sswitch_data_5e
	// 942    .sparse-switch
	// 943        -0x1 -> :sswitch_54
	// 944        0xa -> :sswitch_54
	// 945        0xd -> :sswitch_32
	// 946    .end sparse-switch

}
// .method public final readLong()J
long long java::io::DataInputStream::readLong()
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 952        value = {
	// 953            Ljava/io/IOException;
	// 954        }
	// 955    .end annotation
	cVar0 = 0x0;
	this->readFully(this->readBuffer, cVar0, 0x8);
	return (((((((((long long)(this->readBuffer[cVar0]) << 0x38) +  ((long long)(( this->readBuffer[0x1] & 0xff)) << 0x30)) +  ((long long)(( this->readBuffer[0x2] & 0xff)) << 0x28)) +  ((long long)(( this->readBuffer[0x3] & 0xff)) << 0x20)) +  ((long long)(( this->readBuffer[0x4] & 0xff)) << 0x18)) +  (long long)(( ( this->readBuffer[0x5] & 0xff) << 0x10))) +  (long long)(( ( this->readBuffer[0x6] & 0xff) << 0x8))) +  (long long)(( ( this->readBuffer[0x7] & 0xff) << 0x0)));

}
// .method public final readShort()S
short java::io::DataInputStream::readShort()
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1104        value = {
	// 1105            Ljava/io/IOException;
	// 1106        }
	// 1107    .end annotation
	cVar0 = 0x0;
	this->readFully(this->readBuffer, cVar0, 0x2);
	return libcore::io::Memory::peekShort(this->readBuffer, cVar0, java::nio::ByteOrder::BIG_ENDIAN);

}
// .method public final readUTF()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::DataInputStream::readUTF()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1134        value = {
	// 1135            Ljava/io/IOException;
	// 1136        }
	// 1137    .end annotation
	return java::io::DataInputStream::readUTF(this);

}
// .method public final readUnsignedByte()I
int java::io::DataInputStream::readUnsignedByte()
{
	
	int ch;
	std::shared_ptr<java::io::EOFException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1151        value = {
	// 1152            Ljava/io/IOException;
	// 1153        }
	// 1154    .end annotation
	ch = this->in->read();
	//    .local v0, "ch":I
	if ( ch >= 0 )
		goto label_cond_e;
	cVar0 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar0;
	// 1175    .line 294
label_cond_e:
	return ch;

}
// .method public final readUnsignedShort()I
int java::io::DataInputStream::readUnsignedShort()
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1183        value = {
	// 1184            Ljava/io/IOException;
	// 1185        }
	// 1186    .end annotation
	cVar0 = 0x0;
	this->readFully(this->readBuffer, cVar0, 0x2);
	return (libcore::io::Memory::peekShort(this->readBuffer, cVar0, java::nio::ByteOrder::BIG_ENDIAN) &  0xffff);

}
// .method public final skipBytes(I)I
int java::io::DataInputStream::skipBytes(int n)
{
	
	int total;
	int cur;
	
	//    .param p1, "n"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1218        value = {
	// 1219            Ljava/io/IOException;
	// 1220        }
	// 1221    .end annotation
	total = 0x0;
	//    .local v1, "total":I
	0x0;
	//    .local v0, "cur":I
label_goto_2:
	if ( total >= n )
		goto label_cond_12;
	cur = (int)(this->in->skip((long long)((n - total))));
	if ( cur <= 0 )
		goto label_cond_12;
	total = (total +  cur);
	goto label_goto_2;
	// 1255    .line 227
label_cond_12:
	return total;

}


