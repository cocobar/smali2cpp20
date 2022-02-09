// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream$BlockDataOutputStream.smali
#include "java2ctype.h"
#include "java.io.Bits.h"
#include "java.io.DataOutputStream.h"
#include "java.io.IOException.h"
#include "java.io.ObjectOutputStream_S_BlockDataOutputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.OutputStream.h"
#include "java.io.UTFDataFormatException.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.lang.System.h"

static java::io::ObjectOutputStream_S_BlockDataOutputStream::CHAR_BUF_SIZE = 0x100;
static java::io::ObjectOutputStream_S_BlockDataOutputStream::MAX_BLOCK_SIZE = 0x400;
static java::io::ObjectOutputStream_S_BlockDataOutputStream::MAX_HEADER_SIZE = 0x5;
// .method constructor <init>(Ljava/io/OutputStream;)V
java::io::ObjectOutputStream_S_BlockDataOutputStream::ObjectOutputStream_S_BlockDataOutputStream(std::shared_ptr<java::io::OutputStream> out)
{
	
	bool cVar0;
	std::shared_ptr<java::io::DataOutputStream> cVar1;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	cVar0 = 0x0;
	// 055    invoke-direct {p0}, Ljava/io/OutputStream;-><init>()V
	this->buf = std::make_shared<std::vector<unsigned char[]>>(0x400);
	this->hbuf = std::make_shared<std::vector<unsigned char[]>>(0x5);
	this->cbuf = std::make_shared<std::vector<char[]>>(0x100);
	this->blkmode = cVar0;
	this->pos = cVar0;
	this->out = out;
	cVar1 = std::make_shared<java::io::DataOutputStream>(this);
	this->dout = cVar1;
	return;

}
// .method private warnIfClosed()V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::warnIfClosed()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	if ( !(this->warnOnceWhenWriting) )  
		goto label_cond_15;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream Closed")));
	java::lang::System::logW(std::make_shared<java::lang::String>(std::make_shared<char[]>("The app is relying on undefined behavior. Attempting to write to a closed ObjectOutputStream could produce corrupt output in a future release of Android.")), cVar0);
	this->warnOnceWhenWriting = 0x0;
label_cond_15:
	return;

}
// .method private writeBlockHeader(I)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeBlockHeader(int len)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p1, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 134        value = {
	// 135            Ljava/io/IOException;
	// 136        }
	// 137    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( len >  0xff )
		goto label_cond_1d;
	this->hbuf[cVar1] = 0x77;
	this->hbuf[cVar0] = (unsigned char)(len);
	this->out->write(this->hbuf, cVar1, 0x2);
label_goto_19:
	this->warnIfClosed();
	return;
	// 179    .line 1975
label_cond_1d:
	this->hbuf[cVar1] = 0x7a;
	java::io::Bits::putInt(this->hbuf, cVar0, len);
	this->out->write(this->hbuf, cVar1, 0x5);
	goto label_goto_19;

}
// .method private writeUTFBody(Ljava/lang/String;)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeUTFBody(std::shared_ptr<java::lang::String> s)
{
	
	int cVar0;
	int len;
	int off;
	int csize;
	int cpos;
	int c;
	int cVar1;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 208        value = {
	// 209            Ljava/io/IOException;
	// 210        }
	// 211    .end annotation
	cVar0 = 0x7f;
	0x3fd;
	//    .local v4, "limit":I
	len = s->length();
	//    .local v3, "len":I
	off = 0x0;
	//    .local v5, "off":I
label_goto_a:
	if ( off >= len )
		goto label_cond_d7;
	csize = java::lang::Math::min((len - off), 0x100);
	//    .local v2, "csize":I
	s->getChars(off, (off + csize), this->cbuf, 0x0);
	cpos = 0x0;
	//    .local v1, "cpos":I
label_goto_1c:
	if ( cpos >= csize )
		goto label_cond_d4;
	c = this->cbuf[cpos];
	//    .local v0, "c":C
	if ( this->pos >  0x3fd )
		goto label_cond_97;
	if ( c >  cVar0 )
		goto label_cond_3a;
	if ( !(c) )  
		goto label_cond_3a;
	cVar1 = this->pos;
	this->pos = ( cVar1 + 0x1);
	this->buf[cVar1] = (unsigned char)(c);
label_goto_37:
	cpos = ( cpos + 0x1);
	goto label_goto_1c;
	// 298    .line 2295
label_cond_3a:
	if ( c <= 0x7ff )
		goto label_cond_72;
	this->buf[( this->pos + 0x2)] = (unsigned char)(( ( _shri(c,0x0) & 0x3f) | 0x80));
	this->buf[( this->pos + 0x1)] = (unsigned char)(( ( _shri(c,0x6) & 0x3f) | 0x80));
	this->buf[( this->pos + 0x0)] = (unsigned char)(( ( _shri(c,0xc) & 0xf) | 0xe0));
	this->pos = ( this->pos + 0x3);
	goto label_goto_37;
	// 364    .line 2301
label_cond_72:
	this->buf[( this->pos + 0x1)] = (unsigned char)(( ( _shri(c,0x0) & 0x3f) | 0x80));
	this->buf[( this->pos + 0x0)] = (unsigned char)(( ( _shri(c,0x6) & 0x1f) | 0xc0));
	this->pos = ( this->pos + 0x2);
	goto label_goto_37;
	// 408    .line 2306
label_cond_97:
	if ( c >  cVar0 )
		goto label_cond_9f;
	if ( !(c) )  
		goto label_cond_9f;
	this->write(c);
	goto label_goto_37;
	// 419    .line 2308
label_cond_9f:
	if ( c <= 0x7ff )
		goto label_cond_c0;
	this->write(( ( _shri(c,0xc) & 0xf) | 0xe0));
	this->write(( ( _shri(c,0x6) & 0x3f) | 0x80));
	this->write(( ( _shri(c,0x0) & 0x3f) | 0x80));
	goto label_goto_37;
	// 454    .line 2313
label_cond_c0:
	this->write(( ( _shri(c,0x6) & 0x1f) | 0xc0));
	this->write(( ( _shri(c,0x0) & 0x3f) | 0x80));
	goto label_goto_37;
	// 475    .line 2318
	// 476    .end local v0    # "c":C
label_cond_d4:
	off = (off +  csize);
	goto label_goto_a;
	// 482    .line 2320
	// 483    .end local v1    # "cpos":I
	// 484    .end local v2    # "csize":I
label_cond_d7:
	return;

}
// .method public close()V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 494        value = {
	// 495            Ljava/io/IOException;
	// 496        }
	// 497    .end annotation
	this->flush();
	this->out->close();
	this->warnOnceWhenWriting = 0x1;
	return;

}
// .method drain()V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::drain()
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 520        value = {
	// 521            Ljava/io/IOException;
	// 522        }
	// 523    .end annotation
	cVar0 = 0x0;
	if ( this->pos )     
		goto label_cond_6;
	return;
	// 536    .line 1956
label_cond_6:
	if ( !(this->blkmode) )  
		goto label_cond_f;
	this->writeBlockHeader(this->pos);
label_cond_f:
	this->out->write(this->buf, cVar0, this->pos);
	this->pos = cVar0;
	this->warnIfClosed();
	return;

}
// .method public flush()V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::flush()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 570        value = {
	// 571            Ljava/io/IOException;
	// 572        }
	// 573    .end annotation
	this->drain();
	this->out->flush();
	return;

}
// .method getBlockDataMode()Z
bool java::io::ObjectOutputStream_S_BlockDataOutputStream::getBlockDataMode()
{
	
	return this->blkmode;

}
// .method getUTFLength(Ljava/lang/String;)J
long long java::io::ObjectOutputStream_S_BlockDataOutputStream::getUTFLength(std::shared_ptr<java::lang::String> s)
{
	
	int len;
	long long utflen;
	int off;
	int csize;
	int cpos;
	char c;
	
	//    .param p1, "s"    # Ljava/lang/String;
	len = s->length();
	//    .local v3, "len":I
	utflen = 0x0;
	//    .local v6, "utflen":J
	off = 0x0;
	//    .local v4, "off":I
label_goto_7:
	if ( off >= len )
		goto label_cond_3b;
	csize = java::lang::Math::min((len - off), 0x100);
	//    .local v2, "csize":I
	s->getChars(off, (off + csize), this->cbuf, 0x0);
	cpos = 0x0;
	//    .local v1, "cpos":I
label_goto_1a:
	if ( cpos >= csize )
		goto label_cond_39;
	c = this->cbuf[cpos];
	//    .local v0, "c":C
	if ( c <  0x1 )
		goto label_cond_2d;
	if ( c >  0x7f )
		goto label_cond_2d;
	utflen = (utflen +  0x1);
label_goto_2a:
	cpos = ( cpos + 0x1);
	goto label_goto_1a;
	// 672    .line 2229
label_cond_2d:
	if ( c <= 0x7ff )
		goto label_cond_35;
	utflen = (utflen +  0x3);
	goto label_goto_2a;
	// 685    .line 2232
label_cond_35:
	utflen = (utflen +  0x2);
	goto label_goto_2a;
	// 693    .line 2235
	// 694    .end local v0    # "c":C
label_cond_39:
	off = (off +  csize);
	goto label_goto_7;
	// 700    .line 2237
	// 701    .end local v1    # "cpos":I
	// 702    .end local v2    # "csize":I
label_cond_3b:
	return utflen;

}
// .method setBlockDataMode(Z)Z
bool java::io::ObjectOutputStream_S_BlockDataOutputStream::setBlockDataMode(bool mode)
{
	
	//    .param p1, "mode"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 711        value = {
	// 712            Ljava/io/IOException;
	// 713        }
	// 714    .end annotation
	if ( this->blkmode != mode )
		goto label_cond_7;
	return this->blkmode;
	// 727    .line 1846
label_cond_7:
	this->drain();
	this->blkmode = mode;
	return ( this->blkmode ^ 0x1);

}
// .method public write(I)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::write(int b)
{
	
	int cVar0;
	
	//    .param p1, "b"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 746        value = {
	// 747            Ljava/io/IOException;
	// 748        }
	// 749    .end annotation
	if ( this->pos <  0x400 )
		goto label_cond_9;
	this->drain();
label_cond_9:
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	this->buf[cVar0] = (unsigned char)(b);
	return;

}
// .method public write([B)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::write(std::shared_ptr<unsigned char[]> b)
{
	
	int cVar0;
	
	//    .param p1, "b"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 784        value = {
	// 785            Ljava/io/IOException;
	// 786        }
	// 787    .end annotation
	cVar0 = 0x0;
	this->write(b, cVar0, b->size(), cVar0);
	return;

}
// .method public write([BII)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::write(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 807        value = {
	// 808            Ljava/io/IOException;
	// 809        }
	// 810    .end annotation
	this->write(b, off, len, 0x0);
	return;

}
// .method write([BIIZ)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::write(std::shared_ptr<unsigned char[]> b,int off,int len,bool copy)
{
	
	int cVar0;
	bool cVar1;
	int off;
	int len;
	int wlen;
	int cVar1;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .param p4, "copy"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 829        value = {
	// 830            Ljava/io/IOException;
	// 831        }
	// 832    .end annotation
	cVar0 = 0x400;
	if ( copy )     
		goto label_cond_14;
	cVar1 = this->blkmode;
label_goto_6:
	if ( cVar1 )     
		goto label_cond_16;
	this->drain();
	this->out->write(b, off, len);
	this->warnIfClosed();
	return;
	// 859    .line 1920
label_cond_14:
	cVar1 = 0x1;
	goto label_goto_6;
	// 865    .line 1927
label_cond_16:
label_goto_16:
	if ( len <= 0 )
		goto label_cond_4d;
	if ( this->pos <  cVar0 )
		goto label_cond_1f;
	this->drain();
label_cond_1f:
	if ( len <  cVar0 )
		goto label_cond_36;
	if ( !(( copy ^ 0x1)) )  
		goto label_cond_36;
	if ( this->pos )     
		goto label_cond_36;
	this->writeBlockHeader(cVar0);
	this->out->write(b, off, cVar0);
	off = ( off + 0x400);
	len = ( len + -0x400);
	goto label_goto_16;
	// 907    .line 1938
label_cond_36:
	wlen = java::lang::Math::min(len, ( this->pos - 0x400));
	//    .local v0, "wlen":I
	java::lang::System::arraycopy(b, off, this->buf, this->pos, wlen);
	this->pos = (this->pos +  wlen);
	off = (off +  wlen);
	len = (len -  wlen);
	goto label_goto_16;
	// 940    .line 1945
	// 941    .end local v0    # "wlen":I
label_cond_4d:
	this->warnIfClosed();
	return;

}
// .method public writeBoolean(Z)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeBoolean(bool v)
{
	
	int cVar0;
	
	//    .param p1, "v"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 953        value = {
	// 954            Ljava/io/IOException;
	// 955        }
	// 956    .end annotation
	if ( this->pos <  0x400 )
		goto label_cond_9;
	this->drain();
label_cond_9:
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	java::io::Bits::putBoolean(this->buf, cVar0, v);
	return;

}
// .method writeBooleans([ZII)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeBooleans(std::shared_ptr<bool[]> v,int off,int len)
{
	
	int endoff;
	int off;
	int cVar0;
	
	//    .param p1, "v"    # [Z
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 991        value = {
	// 992            Ljava/io/IOException;
	// 993        }
	// 994    .end annotation
	endoff = (off + len);
	//    .local v0, "endoff":I
label_goto_2:
	if ( off >= endoff )
		goto label_cond_2c;
	if ( this->pos <  0x400 )
		goto label_cond_d;
	this->drain();
label_cond_d:
	//    .local v2, "stop":I
	off = off;
	//    .end local p2    # "off":I
	//    .local v1, "off":I
label_goto_17:
	if ( off >= java::lang::Math::min(endoff, (( this->pos - 0x400) +  off)) )
		goto label_cond_2a;
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	java::io::Bits::putBoolean(this->buf, cVar0, v[off]);
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v1    # "off":I
	goto label_goto_17;
label_cond_2a:
	off = off;
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	goto label_goto_2;
	// 1066    .line 2114
	// 1067    .end local v2    # "stop":I
label_cond_2c:
	return;

}
// .method public writeByte(I)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeByte(int v)
{
	
	int cVar0;
	
	//    .param p1, "v"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1076        value = {
	// 1077            Ljava/io/IOException;
	// 1078        }
	// 1079    .end annotation
	if ( this->pos <  0x400 )
		goto label_cond_9;
	this->drain();
label_cond_9:
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	this->buf[cVar0] = (unsigned char)(v);
	return;

}
// .method public writeBytes(Ljava/lang/String;)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeBytes(std::shared_ptr<java::lang::String> s)
{
	
	int endoff;
	int cpos;
	int csize;
	int off;
	int n;
	int cVar0;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1114        value = {
	// 1115            Ljava/io/IOException;
	// 1116        }
	// 1117    .end annotation
	endoff = s->length();
	//    .local v3, "endoff":I
	cpos = 0x0;
	//    .local v0, "cpos":I
	csize = 0x0;
	//    .local v2, "csize":I
	off = 0x0;
	//    .local v5, "off":I
label_goto_7:
	if ( off >= endoff )
		goto label_cond_4c;
	if ( cpos <  csize )
		goto label_cond_1c;
	cpos = 0x0;
	csize = java::lang::Math::min((endoff - off), 0x100);
	s->getChars(off, (off + csize), this->cbuf, 0x0);
label_cond_1c:
	if ( this->pos <  0x400 )
		goto label_cond_25;
	this->drain();
label_cond_25:
	n = java::lang::Math::min((csize - cpos), ( this->pos - 0x400));
	//    .local v4, "n":I
	//    .local v6, "stop":I
label_goto_33:
	if ( this->pos >= (this->pos + n) )
		goto label_cond_4a;
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	//    .end local v0    # "cpos":I
	//    .local v1, "cpos":I
	this->buf[cVar0] = (unsigned char)(this->cbuf[cpos]);
	cpos = ( cpos + 0x1);
	//    .end local v1    # "cpos":I
	//    .restart local v0    # "cpos":I
	goto label_goto_33;
	// 1228    .line 2076
label_cond_4a:
	off = (off +  n);
	goto label_goto_7;
	// 1234    .line 2078
	// 1235    .end local v4    # "n":I
	// 1236    .end local v6    # "stop":I
label_cond_4c:
	return;

}
// .method public writeChar(I)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeChar(int v)
{
	
	//    .param p1, "v"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1245        value = {
	// 1246            Ljava/io/IOException;
	// 1247        }
	// 1248    .end annotation
	if ( ( this->pos + 0x2) >  0x400 )
		goto label_cond_17;
	java::io::Bits::putChar(this->buf, this->pos, (char)(v));
	this->pos = ( this->pos + 0x2);
label_goto_16:
	return;
	// 1280    .line 2009
label_cond_17:
	this->dout->writeChar(v);
	goto label_goto_16;

}
// .method public writeChars(Ljava/lang/String;)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeChars(std::shared_ptr<java::lang::String> s)
{
	
	int cVar0;
	int endoff;
	int off;
	int csize;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1293        value = {
	// 1294            Ljava/io/IOException;
	// 1295        }
	// 1296    .end annotation
	cVar0 = 0x0;
	endoff = s->length();
	//    .local v1, "endoff":I
	off = 0x0;
	//    .local v2, "off":I
label_goto_6:
	if ( off >= endoff )
		goto label_cond_1e;
	csize = java::lang::Math::min((endoff - off), 0x100);
	//    .local v0, "csize":I
	s->getChars(off, (off + csize), this->cbuf, cVar0);
	this->writeChars(this->cbuf, cVar0, csize);
	off = (off +  csize);
	goto label_goto_6;
	// 1341    .line 2088
	// 1342    .end local v0    # "csize":I
label_cond_1e:
	return;

}
// .method writeChars([CII)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeChars(std::shared_ptr<char[]> v,int off,int len)
{
	
	int endoff;
	int off;
	
	//    .param p1, "v"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1353        value = {
	// 1354            Ljava/io/IOException;
	// 1355        }
	// 1356    .end annotation
	0x3fe;
	//    .local v2, "limit":I
	endoff = (off + len);
	//    .local v1, "endoff":I
	off = off;
	//    .end local p2    # "off":I
	//    .local v3, "off":I
label_goto_5:
	if ( off >= endoff )
		goto label_cond_39;
	if ( this->pos >  0x3fe )
		goto label_cond_2e;
	//    .local v0, "avail":I
	//    .local v4, "stop":I
label_goto_19:
	if ( off >= java::lang::Math::min(endoff, (off + _shri(( this->pos - 0x400),0x1))) )
		goto label_cond_3a;
	//    .end local v3    # "off":I
	//    .restart local p2    # "off":I
	java::io::Bits::putChar(this->buf, this->pos, v[off]);
	this->pos = ( this->pos + 0x2);
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v3    # "off":I
	goto label_goto_19;
	// 1430    .line 2128
	// 1431    .end local v0    # "avail":I
	// 1432    .end local v4    # "stop":I
label_cond_2e:
	//    .end local v3    # "off":I
	//    .restart local p2    # "off":I
	this->dout->writeChar(v[off]);
label_goto_37:
	off = off;
	//    .end local p2    # "off":I
	//    .restart local v3    # "off":I
	goto label_goto_5;
	// 1451    .line 2131
label_cond_39:
	return;
	// 1455    .restart local v0    # "avail":I
	// 1456    .restart local v4    # "stop":I
label_cond_3a:
	//    .end local v3    # "off":I
	//    .restart local p2    # "off":I
	goto label_goto_37;

}
// .method public writeDouble(D)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeDouble(double v)
{
	
	//    .param p1, "v"    # D
	//    .annotation system Ldalvik/annotation/Throws;
	// 1469        value = {
	// 1470            Ljava/io/IOException;
	// 1471        }
	// 1472    .end annotation
	if ( ( this->pos + 0x8) >  0x400 )
		goto label_cond_16;
	java::io::Bits::putDouble(this->buf, this->pos, v);
	this->pos = ( this->pos + 0x8);
label_goto_15:
	return;
	// 1502    .line 2054
label_cond_16:
	this->dout->writeDouble(v);
	goto label_goto_15;

}
// .method writeDoubles([DII)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeDoubles(std::shared_ptr<double[]> v,int off,int len)
{
	
	int endoff;
	int off;
	int chunklen;
	
	//    .param p1, "v"    # [D
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1517        value = {
	// 1518            Ljava/io/IOException;
	// 1519        }
	// 1520    .end annotation
	0x3f8;
	//    .local v3, "limit":I
	endoff = (off + len);
	//    .local v2, "endoff":I
	off = off;
	//    .end local p2    # "off":I
	//    .local v4, "off":I
label_goto_5:
	if ( off >= endoff )
		goto label_cond_35;
	if ( this->pos >  0x3f8 )
		goto label_cond_2b;
	//    .local v0, "avail":I
	chunklen = java::lang::Math::min((endoff - off), _shri(( this->pos - 0x400),0x3));
	//    .local v1, "chunklen":I
	java::io::ObjectOutputStream::-wrap0(v, off, this->buf, this->pos, chunklen);
	//    .end local v4    # "off":I
	//    .restart local p2    # "off":I
	this->pos = (this->pos +  ( chunklen << 0x3));
	//    .end local v0    # "avail":I
	//    .end local v1    # "chunklen":I
label_goto_29:
	off = off;
	//    .end local p2    # "off":I
	//    .restart local v4    # "off":I
	goto label_goto_5;
	// 1594    .line 2211
label_cond_2b:
	//    .end local v4    # "off":I
	//    .restart local p2    # "off":I
	this->dout->writeDouble(v[off]);
	goto label_goto_29;
	// 1608    .line 2214
	// 1609    .end local p2    # "off":I
	// 1610    .restart local v4    # "off":I
label_cond_35:
	return;

}
// .method public writeFloat(F)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeFloat(float v)
{
	
	//    .param p1, "v"    # F
	//    .annotation system Ldalvik/annotation/Throws;
	// 1619        value = {
	// 1620            Ljava/io/IOException;
	// 1621        }
	// 1622    .end annotation
	if ( ( this->pos + 0x4) >  0x400 )
		goto label_cond_16;
	java::io::Bits::putFloat(this->buf, this->pos, v);
	this->pos = ( this->pos + 0x4);
label_goto_15:
	return;
	// 1652    .line 2036
label_cond_16:
	this->dout->writeFloat(v);
	goto label_goto_15;

}
// .method writeFloats([FII)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeFloats(std::shared_ptr<float[]> v,int off,int len)
{
	
	int endoff;
	int off;
	int chunklen;
	
	//    .param p1, "v"    # [F
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1667        value = {
	// 1668            Ljava/io/IOException;
	// 1669        }
	// 1670    .end annotation
	0x3fc;
	//    .local v3, "limit":I
	endoff = (off + len);
	//    .local v2, "endoff":I
	off = off;
	//    .end local p2    # "off":I
	//    .local v4, "off":I
label_goto_5:
	if ( off >= endoff )
		goto label_cond_35;
	if ( this->pos >  0x3fc )
		goto label_cond_2b;
	//    .local v0, "avail":I
	chunklen = java::lang::Math::min((endoff - off), _shri(( this->pos - 0x400),0x2));
	//    .local v1, "chunklen":I
	java::io::ObjectOutputStream::-wrap1(v, off, this->buf, this->pos, chunklen);
	//    .end local v4    # "off":I
	//    .restart local p2    # "off":I
	this->pos = (this->pos +  ( chunklen << 0x2));
	//    .end local v0    # "avail":I
	//    .end local v1    # "chunklen":I
label_goto_29:
	off = off;
	//    .end local p2    # "off":I
	//    .restart local v4    # "off":I
	goto label_goto_5;
	// 1744    .line 2178
label_cond_2b:
	//    .end local v4    # "off":I
	//    .restart local p2    # "off":I
	this->dout->writeFloat(v[off]);
	goto label_goto_29;
	// 1758    .line 2181
	// 1759    .end local p2    # "off":I
	// 1760    .restart local v4    # "off":I
label_cond_35:
	return;

}
// .method public writeInt(I)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeInt(int v)
{
	
	//    .param p1, "v"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1769        value = {
	// 1770            Ljava/io/IOException;
	// 1771        }
	// 1772    .end annotation
	if ( ( this->pos + 0x4) >  0x400 )
		goto label_cond_16;
	java::io::Bits::putInt(this->buf, this->pos, v);
	this->pos = ( this->pos + 0x4);
label_goto_15:
	return;
	// 1802    .line 2027
label_cond_16:
	this->dout->writeInt(v);
	goto label_goto_15;

}
// .method writeInts([III)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeInts(std::shared_ptr<int[]> v,int off,int len)
{
	
	int endoff;
	int off;
	
	//    .param p1, "v"    # [I
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1817        value = {
	// 1818            Ljava/io/IOException;
	// 1819        }
	// 1820    .end annotation
	0x3fc;
	//    .local v2, "limit":I
	endoff = (off + len);
	//    .local v1, "endoff":I
	off = off;
	//    .end local p2    # "off":I
	//    .local v3, "off":I
label_goto_5:
	if ( off >= endoff )
		goto label_cond_39;
	if ( this->pos >  0x3fc )
		goto label_cond_2e;
	//    .local v0, "avail":I
	//    .local v4, "stop":I
label_goto_19:
	if ( off >= java::lang::Math::min(endoff, (off + _shri(( this->pos - 0x400),0x2))) )
		goto label_cond_3a;
	//    .end local v3    # "off":I
	//    .restart local p2    # "off":I
	java::io::Bits::putInt(this->buf, this->pos, v[off]);
	this->pos = ( this->pos + 0x4);
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v3    # "off":I
	goto label_goto_19;
	// 1894    .line 2162
	// 1895    .end local v0    # "avail":I
	// 1896    .end local v4    # "stop":I
label_cond_2e:
	//    .end local v3    # "off":I
	//    .restart local p2    # "off":I
	this->dout->writeInt(v[off]);
label_goto_37:
	off = off;
	//    .end local p2    # "off":I
	//    .restart local v3    # "off":I
	goto label_goto_5;
	// 1915    .line 2165
label_cond_39:
	return;
	// 1919    .restart local v0    # "avail":I
	// 1920    .restart local v4    # "stop":I
label_cond_3a:
	//    .end local v3    # "off":I
	//    .restart local p2    # "off":I
	goto label_goto_37;

}
// .method public writeLong(J)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeLong(long long v)
{
	
	//    .param p1, "v"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1933        value = {
	// 1934            Ljava/io/IOException;
	// 1935        }
	// 1936    .end annotation
	if ( ( this->pos + 0x8) >  0x400 )
		goto label_cond_16;
	java::io::Bits::putLong(this->buf, this->pos, v);
	this->pos = ( this->pos + 0x8);
label_goto_15:
	return;
	// 1966    .line 2045
label_cond_16:
	this->dout->writeLong(v);
	goto label_goto_15;

}
// .method writeLongUTF(Ljava/lang/String;)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeLongUTF(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1979        value = {
	// 1980            Ljava/io/IOException;
	// 1981        }
	// 1982    .end annotation
	this->writeLongUTF(s, this->getUTFLength(s));
	return;

}
// .method writeLongUTF(Ljava/lang/String;J)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeLongUTF(std::shared_ptr<java::lang::String> s,long long utflen)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "utflen"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 2001        value = {
	// 2002            Ljava/io/IOException;
	// 2003        }
	// 2004    .end annotation
	this->writeLong(utflen);
	if ( (utflen > (long long)(s->length())) )     
		goto label_cond_10;
	this->writeBytes(s);
label_goto_f:
	return;
	// 2028    .line 2276
label_cond_10:
	this->writeUTFBody(s);
	goto label_goto_f;

}
// .method writeLongs([JII)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeLongs(std::shared_ptr<long long[]> v,int off,int len)
{
	
	int endoff;
	int off;
	
	//    .param p1, "v"    # [J
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2041        value = {
	// 2042            Ljava/io/IOException;
	// 2043        }
	// 2044    .end annotation
	0x3f8;
	//    .local v2, "limit":I
	endoff = (off + len);
	//    .local v1, "endoff":I
	off = off;
	//    .end local p2    # "off":I
	//    .local v3, "off":I
label_goto_5:
	if ( off >= endoff )
		goto label_cond_39;
	if ( this->pos >  0x3f8 )
		goto label_cond_2e;
	//    .local v0, "avail":I
	//    .local v4, "stop":I
label_goto_19:
	if ( off >= java::lang::Math::min(endoff, (off + _shri(( this->pos - 0x400),0x3))) )
		goto label_cond_3a;
	//    .end local v3    # "off":I
	//    .restart local p2    # "off":I
	java::io::Bits::putLong(this->buf, this->pos, v[off]);
	this->pos = ( this->pos + 0x8);
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v3    # "off":I
	goto label_goto_19;
	// 2118    .line 2195
	// 2119    .end local v0    # "avail":I
	// 2120    .end local v4    # "stop":I
label_cond_2e:
	//    .end local v3    # "off":I
	//    .restart local p2    # "off":I
	this->dout->writeLong(v[off]);
label_goto_37:
	off = off;
	//    .end local p2    # "off":I
	//    .restart local v3    # "off":I
	goto label_goto_5;
	// 2139    .line 2198
label_cond_39:
	return;
	// 2143    .restart local v0    # "avail":I
	// 2144    .restart local v4    # "stop":I
label_cond_3a:
	//    .end local v3    # "off":I
	//    .restart local p2    # "off":I
	goto label_goto_37;

}
// .method public writeShort(I)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeShort(int v)
{
	
	//    .param p1, "v"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2157        value = {
	// 2158            Ljava/io/IOException;
	// 2159        }
	// 2160    .end annotation
	if ( ( this->pos + 0x2) >  0x400 )
		goto label_cond_17;
	java::io::Bits::putShort(this->buf, this->pos, (short)(v));
	this->pos = ( this->pos + 0x2);
label_goto_16:
	return;
	// 2192    .line 2018
label_cond_17:
	this->dout->writeShort(v);
	goto label_goto_16;

}
// .method writeShorts([SII)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeShorts(std::shared_ptr<short[]> v,int off,int len)
{
	
	int endoff;
	int off;
	
	//    .param p1, "v"    # [S
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2207        value = {
	// 2208            Ljava/io/IOException;
	// 2209        }
	// 2210    .end annotation
	0x3fe;
	//    .local v2, "limit":I
	endoff = (off + len);
	//    .local v1, "endoff":I
	off = off;
	//    .end local p2    # "off":I
	//    .local v3, "off":I
label_goto_5:
	if ( off >= endoff )
		goto label_cond_39;
	if ( this->pos >  0x3fe )
		goto label_cond_2e;
	//    .local v0, "avail":I
	//    .local v4, "stop":I
label_goto_19:
	if ( off >= java::lang::Math::min(endoff, (off + _shri(( this->pos - 0x400),0x1))) )
		goto label_cond_3a;
	//    .end local v3    # "off":I
	//    .restart local p2    # "off":I
	java::io::Bits::putShort(this->buf, this->pos, v[off]);
	this->pos = ( this->pos + 0x2);
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v3    # "off":I
	goto label_goto_19;
	// 2284    .line 2145
	// 2285    .end local v0    # "avail":I
	// 2286    .end local v4    # "stop":I
label_cond_2e:
	//    .end local v3    # "off":I
	//    .restart local p2    # "off":I
	this->dout->writeShort(v[off]);
label_goto_37:
	off = off;
	//    .end local p2    # "off":I
	//    .restart local v3    # "off":I
	goto label_goto_5;
	// 2305    .line 2148
label_cond_39:
	return;
	// 2309    .restart local v0    # "avail":I
	// 2310    .restart local v4    # "stop":I
label_cond_3a:
	//    .end local v3    # "off":I
	//    .restart local p2    # "off":I
	goto label_goto_37;

}
// .method public writeUTF(Ljava/lang/String;)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeUTF(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2323        value = {
	// 2324            Ljava/io/IOException;
	// 2325        }
	// 2326    .end annotation
	this->writeUTF(s, this->getUTFLength(s));
	return;

}
// .method writeUTF(Ljava/lang/String;J)V
void java::io::ObjectOutputStream_S_BlockDataOutputStream::writeUTF(std::shared_ptr<java::lang::String> s,long long utflen)
{
	
	std::shared_ptr<java::io::UTFDataFormatException> cVar0;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "utflen"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 2345        value = {
	// 2346            Ljava/io/IOException;
	// 2347        }
	// 2348    .end annotation
	if ( (utflen > 0xffff) <= 0 )
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::UTFDataFormatException>();
	// throw
	throw cVar0;
	// 2365    .line 2250
label_cond_d:
	this->writeShort((int)(utflen));
	if ( (utflen > (long long)(s->length())) )     
		goto label_cond_1e;
	this->writeBytes(s);
label_goto_1d:
	return;
	// 2389    .line 2254
label_cond_1e:
	this->writeUTFBody(s);
	goto label_goto_1d;

}


