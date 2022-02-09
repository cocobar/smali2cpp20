// CPP L:\smali2cpp20\x64\Release\out\java\io\DataOutputStream.smali
#include "java2ctype.h"
#include "java.io.DataOutput.h"
#include "java.io.DataOutputStream.h"
#include "java.io.FilterOutputStream.h"
#include "java.io.OutputStream.h"
#include "java.io.UTFDataFormatException.h"
#include "java.lang.Double.h"
#include "java.lang.Float.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(Ljava/io/OutputStream;)V
java::io::DataOutputStream::DataOutputStream(std::shared_ptr<java::io::OutputStream> out)
{
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	java::io::FilterOutputStream::(out);
	this->bytearr = 0x0;
	this->writeBuffer = std::make_shared<std::vector<unsigned char[]>>(0x8);
	return;

}
// .method private incCount(I)V
void java::io::DataOutputStream::incCount(int value)
{
	
	int temp;
	
	//    .param p1, "value"    # I
	temp = (this->written + value);
	//    .local v0, "temp":I
	if ( temp >= 0 )
		goto label_cond_9;
label_cond_9:
	this->written = temp;
	return;

}
// .method static writeUTF(Ljava/lang/String;Ljava/io/DataOutput;)I
int java::io::DataOutputStream::writeUTF(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::io::DataOutput> out)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int strlen;
	int utflen;
	int i;
	int c;
	std::shared_ptr<java::io::UTFDataFormatException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::io::DataOutputStream> dos;
	std::shared_ptr<unsigned char[]> bytearr;
	int count;
	std::shared<std::vector<unsigned char[]>> bytearr;
	
	//    .param p0, "str"    # Ljava/lang/String;
	//    .param p1, "out"    # Ljava/io/DataOutput;
	//    .annotation system Ldalvik/annotation/Throws;
	// 072        value = {
	// 073            Ljava/io/IOException;
	// 074        }
	// 075    .end annotation
	cVar0 = 0x7ff;
	cVar1 = 0x0;
	cVar2 = 0x7f;
	cVar3 = 0x1;
	strlen = str->length();
	//    .local v6, "strlen":I
	utflen = 0x0;
	//    .local v7, "utflen":I
	0x0;
	//    .local v2, "count":I
	i = 0x0;
	//    .local v5, "i":I
label_goto_d:
	if ( i >= strlen )
		goto label_cond_24;
	c = str->charAt(i);
	//    .local v1, "c":I
	if ( c <  cVar3 )
		goto label_cond_1c;
	if ( c >  cVar2 )
		goto label_cond_1c;
	utflen = ( utflen + 0x1);
label_goto_19:
	i = ( i + 0x1);
	goto label_goto_d;
	// 127    .line 356
label_cond_1c:
	if ( c <= cVar0 )
		goto label_cond_21;
	utflen = ( utflen + 0x3);
	goto label_goto_19;
	// 136    .line 359
label_cond_21:
	utflen = ( utflen + 0x2);
	goto label_goto_19;
	// 142    .line 363
	// 143    .end local v1    # "c":I
label_cond_24:
	if ( utflen <= 0xffff )
		goto label_cond_4a;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::io::UTFDataFormatException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("encoded string too long: ")))->append(utflen)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" bytes")))->toString());
	// throw
	throw cVar4;
	// 182    .line 367
label_cond_4a:
	0x0;
	//    .local v0, "bytearr":[B
	if ( !(out->instanceOf("java::io::DataOutputStream")) )  
		goto label_cond_97;
	dos = out;
	dos->checkCast("java::io::DataOutputStream");
	//    .local v4, "dos":Ljava/io/DataOutputStream;
	if ( !(dos->bytearr) )  
		goto label_cond_5d;
	if ( dos->bytearr->size() >= ( utflen + 0x2) )
		goto label_cond_65;
label_cond_5d:
	dos->bytearr = std::make_shared<std::vector<unsigned char[]>>(( ( utflen * 0x2) + 0x2));
label_cond_65:
	bytearr = dos->bytearr;
	//    .end local v4    # "dos":Ljava/io/DataOutputStream;
	//    .local v0, "bytearr":[B
label_goto_67:
	count = 0x1;
	bytearr[cVar1] = (unsigned char)(( _ushri(utflen,0x8) & 0xff));
	count = ( count + 0x1);
	//    .end local v2    # "count":I
	//    .local v3, "count":I
	bytearr[count] = (unsigned char)(( _ushri(utflen,0x0) & 0xff));
	0x0;
	i = 0x0;
label_goto_7a:
	if ( i >= strlen )
		goto label_cond_84;
	c = str->charAt(i);
	//    .restart local v1    # "c":I
	if ( c <  cVar3 )
		goto label_cond_84;
	if ( c <= cVar2 )
		goto label_cond_9c;
	//    .end local v1    # "c":I
label_cond_84:
label_goto_84:
	if ( i >= strlen )
		goto label_cond_e1;
	c = str->charAt(i);
	//    .restart local v1    # "c":I
	if ( c <  cVar3 )
		goto label_cond_a5;
	if ( c >  cVar2 )
		goto label_cond_a5;
	//    .end local v3    # "count":I
	//    .restart local v2    # "count":I
	bytearr[count] = (unsigned char)(c);
label_goto_93:
	i = ( i + 0x1);
	count = count;
	//    .end local v2    # "count":I
	//    .restart local v3    # "count":I
	goto label_goto_84;
	// 308    .line 374
	// 309    .end local v1    # "c":I
	// 310    .end local v3    # "count":I
	// 311    .local v0, "bytearr":[B
	// 312    .restart local v2    # "count":I
label_cond_97:
	bytearr = std::make_shared<std::vector<unsigned char[]>>(( utflen + 0x2));
	//    .local v0, "bytearr":[B
	goto label_goto_67;
	// 321    .line 384
	// 322    .end local v2    # "count":I
	// 323    .restart local v1    # "c":I
	// 324    .restart local v3    # "count":I
label_cond_9c:
	//    .end local v3    # "count":I
	//    .restart local v2    # "count":I
	bytearr[count] = (unsigned char)(c);
	i = ( i + 0x1);
	count = ( count + 0x1);
	//    .end local v2    # "count":I
	//    .restart local v3    # "count":I
	goto label_goto_7a;
	// 343    .line 392
label_cond_a5:
	if ( c <= cVar0 )
		goto label_cond_c9;
	count = ( count + 0x1);
	//    .end local v3    # "count":I
	//    .restart local v2    # "count":I
	bytearr[count] = (unsigned char)(( ( _shri(c,0xc) & 0xf) | 0xe0));
	count = ( count + 0x1);
	//    .end local v2    # "count":I
	//    .restart local v3    # "count":I
	bytearr[count] = (unsigned char)(( ( _shri(c,0x6) & 0x3f) | 0x80));
	//    .end local v3    # "count":I
	//    .restart local v2    # "count":I
	bytearr[count] = (unsigned char)(( ( _shri(c,0x0) & 0x3f) | 0x80));
	goto label_goto_93;
	// 394    .line 397
	// 395    .end local v2    # "count":I
	// 396    .restart local v3    # "count":I
label_cond_c9:
	count = ( count + 0x1);
	//    .end local v3    # "count":I
	//    .restart local v2    # "count":I
	bytearr[count] = (unsigned char)(( ( _shri(c,0x6) & 0x1f) | 0xc0));
	//    .end local v2    # "count":I
	//    .restart local v3    # "count":I
	bytearr[count] = (unsigned char)(( ( _shri(c,0x0) & 0x3f) | 0x80));
	//    .end local v3    # "count":I
	//    .restart local v2    # "count":I
	goto label_goto_93;
	// 433    .line 401
	// 434    .end local v1    # "c":I
	// 435    .end local v2    # "count":I
	// 436    .restart local v3    # "count":I
label_cond_e1:
	out->write(bytearr, cVar1, ( utflen + 0x2));
	return ( utflen + 0x2);

}
// .method public flush()V
void java::io::DataOutputStream::flush()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 453        value = {
	// 454            Ljava/io/IOException;
	// 455        }
	// 456    .end annotation
	this->out->flush();
	return;

}
// .method public final size()I
int java::io::DataOutputStream::size()
{
	
	return this->written;

}
// .method public declared-synchronized write(I)V
void java::io::DataOutputStream::write(int b)
{
	
	//    .param p1, "b"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 482        value = {
	// 483            Ljava/io/IOException;
	// 484        }
	// 485    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->out->write(b);
	this->incCount(0x1);
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_c;
	}
	//    .catchall {:try_start_1 .. :try_end_a} :catchall_c
	this->monitor_exit();
	return;
label_catchall_c:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized write([BII)V
void java::io::DataOutputStream::write(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 522        value = {
	// 523            Ljava/io/IOException;
	// 524        }
	// 525    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->out->write(b, off, len);
	this->incCount(len);
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_1 .. :try_end_9} :catchall_b
	this->monitor_exit();
	return;
label_catchall_b:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public final writeBoolean(Z)V
void java::io::DataOutputStream::writeBoolean(bool v)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p1, "v"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 558        value = {
	// 559            Ljava/io/IOException;
	// 560        }
	// 561    .end annotation
	cVar0 = 0x1;
	if ( !(v) )  
		goto label_cond_d;
	cVar1 = cVar0;
label_goto_6:
	this->out->write(cVar1);
	this->incCount(cVar0);
	return;
	// 582    .line 139
label_cond_d:
	cVar1 = 0x0;
	goto label_goto_6;

}
// .method public final writeByte(I)V
void java::io::DataOutputStream::writeByte(int v)
{
	
	//    .param p1, "v"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 593        value = {
	// 594            Ljava/io/IOException;
	// 595        }
	// 596    .end annotation
	this->out->write(v);
	this->incCount(0x1);
	return;

}
// .method public final writeBytes(Ljava/lang/String;)V
void java::io::DataOutputStream::writeBytes(std::shared_ptr<java::lang::String> s)
{
	
	int len;
	int i;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 617        value = {
	// 618            Ljava/io/IOException;
	// 619        }
	// 620    .end annotation
	len = s->length();
	//    .local v1, "len":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( i >= len )
		goto label_cond_14;
	this->out->write((unsigned char)(s->charAt(i)));
	i = ( i + 0x1);
	goto label_goto_5;
	// 652    .line 278
label_cond_14:
	this->incCount(len);
	return;

}
// .method public final writeChar(I)V
void java::io::DataOutputStream::writeChar(int v)
{
	
	//    .param p1, "v"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 664        value = {
	// 665            Ljava/io/IOException;
	// 666        }
	// 667    .end annotation
	this->out->write(( _ushri(v,0x8) & 0xff));
	this->out->write(( _ushri(v,0x0) & 0xff));
	this->incCount(0x2);
	return;

}
// .method public final writeChars(Ljava/lang/String;)V
void java::io::DataOutputStream::writeChars(std::shared_ptr<java::lang::String> s)
{
	
	int len;
	int i;
	int v;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 701        value = {
	// 702            Ljava/io/IOException;
	// 703        }
	// 704    .end annotation
	len = s->length();
	//    .local v1, "len":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( i >= len )
		goto label_cond_20;
	v = s->charAt(i);
	//    .local v2, "v":I
	this->out->write(( _ushri(v,0x8) & 0xff));
	this->out->write(( _ushri(v,0x0) & 0xff));
	i = ( i + 0x1);
	goto label_goto_5;
	// 749    .line 300
	// 750    .end local v2    # "v":I
label_cond_20:
	this->incCount(( len * 0x2));
	return;

}
// .method public final writeDouble(D)V
void java::io::DataOutputStream::writeDouble(double v)
{
	
	//    .param p1, "v"    # D
	//    .annotation system Ldalvik/annotation/Throws;
	// 764        value = {
	// 765            Ljava/io/IOException;
	// 766        }
	// 767    .end annotation
	this->writeLong(java::lang::Double::doubleToLongBits(v));
	return;

}
// .method public final writeFloat(F)V
void java::io::DataOutputStream::writeFloat(float v)
{
	
	//    .param p1, "v"    # F
	//    .annotation system Ldalvik/annotation/Throws;
	// 785        value = {
	// 786            Ljava/io/IOException;
	// 787        }
	// 788    .end annotation
	this->writeInt(java::lang::Float::floatToIntBits(v));
	return;

}
// .method public final writeInt(I)V
void java::io::DataOutputStream::writeInt(int v)
{
	
	//    .param p1, "v"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 806        value = {
	// 807            Ljava/io/IOException;
	// 808        }
	// 809    .end annotation
	this->out->write(( _ushri(v,0x18) & 0xff));
	this->out->write(( _ushri(v,0x10) & 0xff));
	this->out->write(( _ushri(v,0x8) & 0xff));
	this->out->write(( _ushri(v,0x0) & 0xff));
	this->incCount(0x4);
	return;

}
// .method public final writeLong(J)V
void java::io::DataOutputStream::writeLong(long long v)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p1, "v"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 861        value = {
	// 862            Ljava/io/IOException;
	// 863        }
	// 864    .end annotation
	cVar0 = 0x8;
	cVar1 = 0x0;
	this->writeBuffer[cVar1] = (unsigned char)((int)(_ushrll(v,0x38)));
	this->writeBuffer[0x1] = (unsigned char)((int)(_ushrll(v,0x30)));
	this->writeBuffer[0x2] = (unsigned char)((int)(_ushrll(v,0x28)));
	this->writeBuffer[0x3] = (unsigned char)((int)(_ushrll(v,0x20)));
	this->writeBuffer[0x4] = (unsigned char)((int)(_ushrll(v,0x18)));
	this->writeBuffer[0x5] = (unsigned char)((int)(_ushrll(v,0x10)));
	this->writeBuffer[0x6] = (unsigned char)((int)(_ushrll(v,cVar0)));
	this->writeBuffer[0x7] = (unsigned char)((int)(_ushrll(v,cVar1)));
	this->out->write(this->writeBuffer, cVar1, cVar0);
	this->incCount(cVar0);
	return;

}
// .method public final writeShort(I)V
void java::io::DataOutputStream::writeShort(int v)
{
	
	//    .param p1, "v"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1003        value = {
	// 1004            Ljava/io/IOException;
	// 1005        }
	// 1006    .end annotation
	this->out->write(( _ushri(v,0x8) & 0xff));
	this->out->write(( _ushri(v,0x0) & 0xff));
	this->incCount(0x2);
	return;

}
// .method public final writeUTF(Ljava/lang/String;)V
void java::io::DataOutputStream::writeUTF(std::shared_ptr<java::lang::String> str)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1040        value = {
	// 1041            Ljava/io/IOException;
	// 1042        }
	// 1043    .end annotation
	java::io::DataOutputStream::writeUTF(str, this);
	return;

}


