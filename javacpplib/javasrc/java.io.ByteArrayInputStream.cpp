// CPP L:\smali2cpp20\x64\Release\out\java\io\ByteArrayInputStream.smali
#include "java2ctype.h"
#include "java.io.ByteArrayInputStream.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Math.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.System.h"

// .method public constructor <init>([B)V
java::io::ByteArrayInputStream::ByteArrayInputStream(std::shared_ptr<unsigned char[]> buf)
{
	
	int cVar0;
	
	//    .param p1, "buf"    # [B
	cVar0 = 0x0;
	// 025    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V
	this->mark = cVar0;
	this->buf = buf;
	this->pos = cVar0;
	this->count = buf->size();
	return;

}
// .method public constructor <init>([BII)V
java::io::ByteArrayInputStream::ByteArrayInputStream(std::shared_ptr<unsigned char[]> buf,int offset,int length)
{
	
	//    .param p1, "buf"    # [B
	//    .param p2, "offset"    # I
	//    .param p3, "length"    # I
	// 053    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V
	this->mark = 0x0;
	this->buf = buf;
	this->pos = offset;
	this->count = java::lang::Math::min((offset + length), buf->size());
	this->mark = offset;
	return;

}
// .method public declared-synchronized available()I
int java::io::ByteArrayInputStream::available()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_5:
	}
	catch (...){
		goto label_catchall_8;
	}
	//    .catchall {:try_start_1 .. :try_end_5} :catchall_8
	this->monitor_exit();
	return (this->count -  this->pos);
label_catchall_8:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public close()V
void java::io::ByteArrayInputStream::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 117        value = {
	// 118            Ljava/io/IOException;
	// 119        }
	// 120    .end annotation
	return;

}
// .method public mark(I)V
void java::io::ByteArrayInputStream::mark(int readAheadLimit)
{
	
	//    .param p1, "readAheadLimit"    # I
	this->mark = this->pos;
	return;

}
// .method public markSupported()Z
bool java::io::ByteArrayInputStream::markSupported()
{
	
	return 0x1;

}
// .method public declared-synchronized read()I
int java::io::ByteArrayInputStream::read()
{
	
	int cVar0;
	int cVar1;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->pos >= this->count )
		goto label_cond_15;
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	//label_try_end_11:
	}
	catch (...){
		goto label_catchall_17;
	}
	//    .catchall {:try_start_1 .. :try_end_11} :catchall_17
	cVar1 = ( this->buf[cVar0] & 0xff);
label_goto_13:
	this->monitor_exit();
	return cVar1;
label_cond_15:
	cVar1 = -0x1;
	goto label_goto_13;
label_catchall_17:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized read([BII)I
int java::io::ByteArrayInputStream::read(std::shared_ptr<unsigned char[]> b,int off,int cVar2)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	int avail;
	int cVar2;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	this->monitor_enter();
	if ( b )     
		goto label_cond_d;
	try {
	//label_try_start_4:
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 218    :try_end_a
	// 219    .catchall {:try_start_4 .. :try_end_a} :catchall_a
label_catchall_a:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 228    .line 179
label_cond_d:
	if ( off < 0 ) 
		goto label_cond_11;
	if ( cVar2 >= 0 )
		goto label_cond_17;
label_cond_11:
	try {
	//label_try_start_11:
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar1;
	// 243    .line 179
label_cond_17:
	if ( cVar2 >  (b->size() -  off) )
		goto label_cond_11;
	//label_try_end_1f:
	}
	catch (...){
		goto label_catchall_a;
	}
	//    .catchall {:try_start_11 .. :try_end_1f} :catchall_a
	if ( this->pos <  this->count )
		goto label_cond_24;
	this->monitor_exit();
	return -0x1;
	// 267    .line 187
label_cond_24:
	try {
	//label_try_start_24:
	//label_try_end_28:
	}
	catch (...){
		goto label_catchall_a;
	}
	//    .catchall {:try_start_24 .. :try_end_28} :catchall_a
	avail = (this->count - this->pos);
	//    .local v0, "avail":I
	if ( cVar2 <= avail )
		goto label_cond_2d;
	cVar2 = avail;
label_cond_2d:
	if ( cVar2 > 0 ) 
		goto label_cond_31;
	this->monitor_exit();
	return 0x0;
	// 294    .line 194
label_cond_31:
	try {
	//label_try_start_31:
	java::lang::System::arraycopy(this->buf, this->pos, b, off, cVar2);
	this->pos = (this->pos +  cVar2);
	//label_try_end_3d:
	}
	catch (...){
		goto label_catchall_a;
	}
	//    .catchall {:try_start_31 .. :try_end_3d} :catchall_a
	this->monitor_exit();
	return cVar2;

}
// .method public declared-synchronized reset()V
void java::io::ByteArrayInputStream::reset()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->pos = this->mark;
	//label_try_end_5:
	}
	catch (...){
		goto label_catchall_7;
	}
	//    .catchall {:try_start_1 .. :try_end_5} :catchall_7
	this->monitor_exit();
	return;
label_catchall_7:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized skip(J)J
long long java::io::ByteArrayInputStream::skip(long long n)
{
	
	long long k;
	
	//    .param p1, "n"    # J
	this->monitor_enter();
	try {
	//label_try_start_1:
	k = (long long)((this->count -  this->pos));
	//    .local v0, "k":J
	if ( (n > k) >= 0 )
		goto label_cond_13;
	if ( (n > 0x0) >= 0 )
		goto label_cond_1c;
	k = 0x0;
label_cond_13:
label_goto_13:
	this->pos = (int)(((long long)(this->pos) +  k));
	//label_try_end_1a:
	}
	catch (...){
		goto label_catchall_1e;
	}
	//    .catchall {:try_start_1 .. :try_end_1a} :catchall_1e
	this->monitor_exit();
	return k;
	// 397    .line 214
label_cond_1c:
	k = n;
	goto label_goto_13;
	// 403    .end local v0    # "k":J
label_catchall_1e:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


