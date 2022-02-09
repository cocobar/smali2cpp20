// CPP L:\smali2cpp20\x64\Release\out\java\io\PushbackInputStream.smali
#include "java2ctype.h"
#include "java.io.FilterInputStream.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.PushbackInputStream.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.String.h"
#include "java.lang.System.h"

// .method public constructor <init>(Ljava/io/InputStream;)V
java::io::PushbackInputStream::PushbackInputStream(std::shared_ptr<java::io::InputStream> in)
{
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	java::io::PushbackInputStream::(in, 0x1);
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;I)V
java::io::PushbackInputStream::PushbackInputStream(std::shared_ptr<java::io::InputStream> in,int size)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .param p2, "size"    # I
	java::io::FilterInputStream::(in);
	if ( size > 0 ) 
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("size <= 0")));
	// throw
	throw cVar0;
	// 048    .line 96
label_cond_e:
	this->buf = std::make_shared<std::vector<unsigned char[]>>(size);
	this->pos = size;
	return;

}
// .method private ensureOpen()V
void java::io::PushbackInputStream::ensureOpen()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 064        value = {
	// 065            Ljava/io/IOException;
	// 066        }
	// 067    .end annotation
	if ( this->in )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream closed")));
	// throw
	throw cVar0;
	// 084    .line 75
label_cond_d:
	return;

}
// .method public available()I
int java::io::PushbackInputStream::available()
{
	
	int cVar0;
	int n;
	int avail;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 094        value = {
	// 095            Ljava/io/IOException;
	// 096        }
	// 097    .end annotation
	cVar0 = 0x7fffffff;
	this->ensureOpen();
	n = (this->buf->size() - this->pos);
	//    .local v1, "n":I
	avail = this->available();
	//    .local v0, "avail":I
	if ( n <= (cVar0 - avail) )
		goto label_cond_16;
label_goto_15:
	return cVar0;
	// 129    .line 280
label_cond_16:
	cVar0 = (n + avail);
	goto label_goto_15;

}
// .method public declared-synchronized close()V
void java::io::PushbackInputStream::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 139        value = {
	// 140            Ljava/io/IOException;
	// 141        }
	// 142    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_3:
	}
	catch (...){
		goto label_catchall_14;
	}
	//    .catchall {:try_start_1 .. :try_end_3} :catchall_14
	if ( this->in )     
		goto label_cond_7;
	this->monitor_exit();
	return;
	// 160    .line 379
label_cond_7:
	try {
	//label_try_start_7:
	this->in->close();
	this->in = 0x0;
	this->buf = 0x0;
	//label_try_end_12:
	}
	catch (...){
		goto label_catchall_14;
	}
	//    .catchall {:try_start_7 .. :try_end_12} :catchall_14
	this->monitor_exit();
	return;
label_catchall_14:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized mark(I)V
void java::io::PushbackInputStream::mark(int readlimit)
{
	
	//    .param p1, "readlimit"    # I
	this->monitor_enter();
	this->monitor_exit();
	return;

}
// .method public markSupported()Z
bool java::io::PushbackInputStream::markSupported()
{
	
	return 0x0;

}
// .method public read()I
int java::io::PushbackInputStream::read()
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 218        value = {
	// 219            Ljava/io/IOException;
	// 220        }
	// 221    .end annotation
	this->ensureOpen();
	if ( this->pos >= this->buf->size() )
		goto label_cond_17;
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	return ( this->buf[cVar0] & 0xff);
	// 251    .line 139
label_cond_17:
	return this->read();

}
// .method public read([BII)I
int java::io::PushbackInputStream::read(std::shared_ptr<unsigned char[]> b,int off,int cVar3)
{
	
	int cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar2;
	int avail;
	int cVar3;
	int cVar4;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 266        value = {
	// 267            Ljava/io/IOException;
	// 268        }
	// 269    .end annotation
	cVar0 = -0x1;
	this->ensureOpen();
	if ( b )     
		goto label_cond_d;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 289    .line 169
label_cond_d:
	if ( off < 0 ) 
		goto label_cond_11;
	if ( cVar3 >= 0 )
		goto label_cond_17;
label_cond_11:
	cVar2 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar2;
	// 303    .line 169
label_cond_17:
	if ( cVar3 >  (b->size() -  off) )
		goto label_cond_11;
	if ( cVar3 )     
		goto label_cond_1e;
	return 0x0;
	// 317    .line 175
label_cond_1e:
	avail = (this->buf->size() - this->pos);
	//    .local v0, "avail":I
	if ( avail <= 0 )
		goto label_cond_38;
	if ( cVar3 >= avail )
		goto label_cond_2a;
	avail = cVar3;
label_cond_2a:
	java::lang::System::arraycopy(this->buf, this->pos, b, off, avail);
	this->pos = (this->pos +  avail);
	cVar3 = (cVar3 -  avail);
label_cond_38:
	if ( cVar3 <= 0 )
		goto label_cond_47;
	cVar4 = this->read(b, (off +  avail), cVar3);
	if ( cVar4 != cVar0 )
		goto label_cond_44;
	if ( avail )     
		goto label_cond_43;
	//    .end local v0    # "avail":I
label_cond_43:
	return avail;
	// 379    .line 190
	// 380    .restart local v0    # "avail":I
label_cond_44:
	return (avail + cVar4);
	// 386    .line 192
label_cond_47:
	return avail;

}
// .method public declared-synchronized reset()V
void java::io::PushbackInputStream::reset()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 394        value = {
	// 395            Ljava/io/IOException;
	// 396        }
	// 397    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("mark/reset not supported")));
	// throw
	throw cVar0;
	// 411    :try_end_a
	// 412    .catchall {:try_start_1 .. :try_end_a} :catchall_a
label_catchall_a:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public skip(J)J
long long java::io::PushbackInputStream::skip(long long cVar1)
{
	
	long long cVar0;
	long long pskip;
	long long cVar1;
	
	//    .param p1, "n"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 426        value = {
	// 427            Ljava/io/IOException;
	// 428        }
	// 429    .end annotation
	cVar0 = 0x0;
	this->ensureOpen();
	if ( (cVar1 > cVar0) > 0 ) 
		goto label_cond_a;
	return cVar0;
	// 445    .line 311
label_cond_a:
	pskip = (long long)((this->buf->size() -  this->pos));
	//    .local v0, "pskip":J
	if ( (pskip > cVar0) <= 0 )
		goto label_cond_22;
	if ( (cVar1 > pskip) >= 0 )
		goto label_cond_1a;
	pskip = cVar1;
label_cond_1a:
	this->pos = (int)(((long long)(this->pos) +  pskip));
	cVar1 = (cVar1 -  pskip);
label_cond_22:
	if ( (cVar1 > cVar0) <= 0 )
		goto label_cond_2b;
label_cond_2b:
	return pskip;

}
// .method public unread(I)V
void java::io::PushbackInputStream::unread(int b)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	int cVar1;
	
	//    .param p1, "b"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 508        value = {
	// 509            Ljava/io/IOException;
	// 510        }
	// 511    .end annotation
	this->ensureOpen();
	if ( this->pos )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Push back buffer is full")));
	// throw
	throw cVar0;
	// 531    .line 211
label_cond_10:
	cVar1 = ( this->pos + -0x1);
	this->pos = cVar1;
	this->buf[cVar1] = (unsigned char)(b);
	return;

}
// .method public unread([B)V
void java::io::PushbackInputStream::unread(std::shared_ptr<unsigned char[]> b)
{
	
	//    .param p1, "b"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 553        value = {
	// 554            Ljava/io/IOException;
	// 555        }
	// 556    .end annotation
	this->unread(b, 0x0, b->size());
	return;

}
// .method public unread([BII)V
void java::io::PushbackInputStream::unread(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 576        value = {
	// 577            Ljava/io/IOException;
	// 578        }
	// 579    .end annotation
	this->ensureOpen();
	if ( len <= this->pos )
		goto label_cond_10;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Push back buffer is full")));
	// throw
	throw cVar0;
	// 599    .line 234
label_cond_10:
	this->pos = (this->pos -  len);
	java::lang::System::arraycopy(b, off, this->buf, this->pos, len);
	return;

}


