// CPP L:\smali2cpp20\x64\Release\out\java\io\PushbackReader.smali
#include "java2ctype.h"
#include "java.io.FilterReader.h"
#include "java.io.IOException.h"
#include "java.io.PushbackReader.h"
#include "java.io.Reader.h"
#include "java.lang.ArrayIndexOutOfBoundsException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"

// .method public constructor <init>(Ljava/io/Reader;)V
java::io::PushbackReader::PushbackReader(std::shared_ptr<java::io::Reader> in)
{
	
	//    .param p1, "in"    # Ljava/io/Reader;
	java::io::PushbackReader::(in, 0x1);
	return;

}
// .method public constructor <init>(Ljava/io/Reader;I)V
java::io::PushbackReader::PushbackReader(std::shared_ptr<java::io::Reader> in,int size)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "in"    # Ljava/io/Reader;
	//    .param p2, "size"    # I
	java::io::FilterReader::(in);
	if ( size > 0 ) 
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("size <= 0")));
	// throw
	throw cVar0;
	// 048    .line 57
label_cond_e:
	this->buf = std::make_shared<std::vector<char[]>>(size);
	this->pos = size;
	return;

}
// .method private ensureOpen()V
void java::io::PushbackReader::ensureOpen()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 064        value = {
	// 065            Ljava/io/IOException;
	// 066        }
	// 067    .end annotation
	if ( this->buf )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream closed")));
	// throw
	throw cVar0;
	// 084    .line 74
label_cond_d:
	return;

}
// .method public close()V
void java::io::PushbackReader::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 094        value = {
	// 095            Ljava/io/IOException;
	// 096        }
	// 097    .end annotation
	this->close();
	this->buf = 0x0;
	return;

}
// .method public mark(I)V
void java::io::PushbackReader::mark(int readAheadLimit)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "readAheadLimit"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 116        value = {
	// 117            Ljava/io/IOException;
	// 118        }
	// 119    .end annotation
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("mark/reset not supported")));
	// throw
	throw cVar0;

}
// .method public markSupported()Z
bool java::io::PushbackReader::markSupported()
{
	
	return 0x0;

}
// .method public read()I
int java::io::PushbackReader::read()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 145        value = {
	// 146            Ljava/io/IOException;
	// 147        }
	// 148    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	if ( this->pos >= this->buf->size() )
		goto label_cond_19;
	cVar1 = this->pos;
	this->pos = ( cVar1 + 0x1);
	//label_try_end_17:
	}
	catch (...){
		goto label_catchall_1f;
	}
	//    .catchall {:try_start_3 .. :try_end_17} :catchall_1f
	cVar0->monitor_exit();
	return this->buf[cVar1];
	// 186    .line 90
label_cond_19:
	try {
	//label_try_start_19:
	//label_try_end_1c:
	}
	catch (...){
		goto label_catchall_1f;
	}
	//    .catchall {:try_start_19 .. :try_end_1c} :catchall_1f
	cVar0->monitor_exit();
	return this->read();
	// 199    .line 85
label_catchall_1f:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public read([CII)I
int java::io::PushbackReader::read(std::shared_ptr<char[]> cbuf,int off,int cVar5)
{
	
	int cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar3;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar2;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar4;
	int avail;
	int cVar5;
	std::vector<std::any> tryCatchExcetionList;
	int cVar6;
	
	//    .param p1, "cbuf"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 214        value = {
	// 215            Ljava/io/IOException;
	// 216        }
	// 217    .end annotation
	cVar0 = -0x1;
	cVar1 = this->lock;
	cVar1->monitor_enter();
	try {
	//label_try_start_5:
	this->ensureOpen();
	//label_try_end_8:
	}
	catch (...){
		goto label_catchall_19;
	}
	//    .catchall {:try_start_5 .. :try_end_8} :catchall_19
	if ( cVar5 > 0 ) 
		goto label_cond_29;
	if ( cVar5 >= 0 )
		goto label_cond_1c;
	try {
	//label_try_start_c:
	cVar2 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar2;
	// 248    :try_end_12
	// 249    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_c .. :try_end_12} :catch_12
	// 250    .catchall {:try_start_c .. :try_end_12} :catchall_19
	// 252    .line 135
label_catch_12:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/ArrayIndexOutOfBoundsException;
	try {
	//label_try_start_13:
	cVar3 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar3;
	// 264    :try_end_19
	// 265    .catchall {:try_start_13 .. :try_end_19} :catchall_19
	// 267    .line 107
	// 268    .end local v1    # "e":Ljava/lang/ArrayIndexOutOfBoundsException;
label_catchall_19:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;
	// 276    .line 113
label_cond_1c:
	if ( off < 0 ) 
		goto label_cond_21;
	try {
	//label_try_start_1e:
	if ( off <= cbuf->size() )
		goto label_cond_27;
label_cond_21:
	cVar4 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar4;
	// 292    :try_end_27
	// 293    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_1e .. :try_end_27} :catch_12
	// 294    .catchall {:try_start_1e .. :try_end_27} :catchall_19
label_cond_27:
	cVar1->monitor_exit();
	return 0x0;
	// 302    .line 118
label_cond_29:
	try {
	//label_try_start_29:
	avail = (this->buf->size() - this->pos);
	//    .local v0, "avail":I
	if ( avail <= 0 )
		goto label_cond_43;
	if ( cVar5 >= avail )
		goto label_cond_35;
	avail = cVar5;
label_cond_35:
	java::lang::System::arraycopy(this->buf, this->pos, cbuf, off, avail);
	this->pos = (this->pos +  avail);
	cVar5 = (cVar5 -  avail);
label_cond_43:
	if ( cVar5 <= 0 )
		goto label_cond_54;
	//label_try_end_48:
	}
	catch (java::lang::ArrayIndexOutOfBoundsException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	catch (...){
		goto label_catchall_19;
	}
	//    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_29 .. :try_end_48} :catch_12
	//    .catchall {:try_start_29 .. :try_end_48} :catchall_19
	cVar6 = this->read(cbuf, (off +  avail), cVar5);
	if ( cVar6 != cVar0 )
		goto label_cond_50;
	if ( avail )     
		goto label_cond_4e;
	//    .end local v0    # "avail":I
label_cond_4e:
	cVar1->monitor_exit();
	return avail;
	// 370    .line 132
	// 371    .restart local v0    # "avail":I
label_cond_50:
	cVar1->monitor_exit();
	return (avail + cVar6);
label_cond_54:
	cVar1->monitor_exit();
	return avail;

}
// .method public ready()Z
bool java::io::PushbackReader::ready()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	bool cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 389        value = {
	// 390            Ljava/io/IOException;
	// 391        }
	// 392    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	if ( this->pos <  this->buf->size() )
		goto label_cond_13;
	//label_try_end_10:
	}
	catch (...){
		goto label_catchall_15;
	}
	//    .catchall {:try_start_3 .. :try_end_10} :catchall_15
	cVar1 = this->ready();
label_goto_11:
	cVar0->monitor_exit();
	return cVar1;
label_cond_13:
	cVar1 = 0x1;
	goto label_goto_11;
	// 429    .line 205
label_catchall_15:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public reset()V
void java::io::PushbackReader::reset()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 441        value = {
	// 442            Ljava/io/IOException;
	// 443        }
	// 444    .end annotation
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("mark/reset not supported")));
	// throw
	throw cVar0;

}
// .method public skip(J)J
long long java::io::PushbackReader::skip(long long cVar2)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	int avail;
	long long cVar2;
	
	//    .param p1, "n"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 461        value = {
	// 462            Ljava/io/IOException;
	// 463        }
	// 464    .end annotation
	if ( (cVar2 > 0x0) >= 0 )
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("skip value is negative")));
	// throw
	throw cVar0;
	// 483    .line 266
label_cond_f:
	cVar1 = this->lock;
	cVar1->monitor_enter();
	try {
	//label_try_start_12:
	this->ensureOpen();
	avail = (this->buf->size() - this->pos);
	//    .local v0, "avail":I
	if ( avail <= 0 )
		goto label_cond_33;
	if ( (cVar2 > (long long)(avail)) > 0 ) 
		goto label_cond_2c;
	this->pos = (int)(((long long)(this->pos) +  cVar2));
	//label_try_end_2a:
	}
	catch (...){
		goto label_catchall_3b;
	}
	//    .catchall {:try_start_12 .. :try_end_2a} :catchall_3b
	cVar1->monitor_exit();
	return cVar2;
	// 531    .line 274
label_cond_2c:
	try {
	//label_try_start_2c:
	this->pos = this->buf->size();
	cVar2 = (cVar2 -  (long long)(avail));
label_cond_33:
	//label_try_end_37:
	}
	catch (...){
		goto label_catchall_3b;
	}
	//    .catchall {:try_start_2c .. :try_end_37} :catchall_3b
	cVar1->monitor_exit();
	return ((long long)(avail) +  this->skip(cVar2));
	// 561    .line 266
	// 562    .end local v0    # "avail":I
label_catchall_3b:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;

}
// .method public unread(I)V
void java::io::PushbackReader::unread(int c)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	int cVar2;
	
	//    .param p1, "c"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 575        value = {
	// 576            Ljava/io/IOException;
	// 577        }
	// 578    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	if ( this->pos )     
		goto label_cond_16;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pushback buffer overflow")));
	// throw
	throw cVar1;
	// 603    :try_end_13
	// 604    .catchall {:try_start_3 .. :try_end_13} :catchall_13
	// 606    .line 152
label_catchall_13:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 614    .line 156
label_cond_16:
	try {
	//label_try_start_16:
	cVar2 = ( this->pos + -0x1);
	this->pos = cVar2;
	this->buf[cVar2] = (char)(c);
	//label_try_end_21:
	}
	catch (...){
		goto label_catchall_13;
	}
	//    .catchall {:try_start_16 .. :try_end_21} :catchall_13
	cVar0->monitor_exit();
	return;

}
// .method public unread([C)V
void java::io::PushbackReader::unread(std::shared_ptr<char[]> cbuf)
{
	
	//    .param p1, "cbuf"    # [C
	//    .annotation system Ldalvik/annotation/Throws;
	// 641        value = {
	// 642            Ljava/io/IOException;
	// 643        }
	// 644    .end annotation
	this->unread(cbuf, 0x0, cbuf->size());
	return;

}
// .method public unread([CII)V
void java::io::PushbackReader::unread(std::shared_ptr<char[]> cbuf,int off,int len)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "cbuf"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 664        value = {
	// 665            Ljava/io/IOException;
	// 666        }
	// 667    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	if ( len <= this->pos )
		goto label_cond_16;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pushback buffer overflow")));
	// throw
	throw cVar1;
	// 692    :try_end_13
	// 693    .catchall {:try_start_3 .. :try_end_13} :catchall_13
	// 695    .line 175
label_catchall_13:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 703    .line 179
label_cond_16:
	try {
	//label_try_start_16:
	this->pos = (this->pos -  len);
	java::lang::System::arraycopy(cbuf, off, this->buf, this->pos, len);
	//label_try_end_22:
	}
	catch (...){
		goto label_catchall_13;
	}
	//    .catchall {:try_start_16 .. :try_end_22} :catchall_13
	cVar0->monitor_exit();
	return;

}


