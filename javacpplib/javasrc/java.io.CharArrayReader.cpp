// CPP L:\smali2cpp20\x64\Release\out\java\io\CharArrayReader.smali
#include "java2ctype.h"
#include "java.io.CharArrayReader.h"
#include "java.io.IOException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"

// .method public constructor <init>([C)V
java::io::CharArrayReader::CharArrayReader(std::shared_ptr<char[]> buf)
{
	
	int cVar0;
	
	//    .param p1, "buf"    # [C
	cVar0 = 0x0;
	// 025    invoke-direct {p0}, Ljava/io/Reader;-><init>()V
	this->markedPos = cVar0;
	this->buf = buf;
	this->pos = cVar0;
	this->count = buf->size();
	return;

}
// .method public constructor <init>([CII)V
java::io::CharArrayReader::CharArrayReader(std::shared_ptr<char[]> buf,int offset,int length)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "buf"    # [C
	//    .param p2, "offset"    # I
	//    .param p3, "length"    # I
	// 055    invoke-direct {p0}, Ljava/io/Reader;-><init>()V
	this->markedPos = 0x0;
	if ( offset < 0 ) 
		goto label_cond_b;
	if ( offset <= buf->size() )
		goto label_cond_11;
label_cond_b:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 075    .line 79
label_cond_11:
	if ( length < 0 ) 
		goto label_cond_b;
	if ( (offset + length) < 0 ) 
		goto label_cond_b;
	this->buf = buf;
	this->pos = offset;
	this->count = java::lang::Math::min((offset + length), buf->size());
	this->markedPos = offset;
	return;

}
// .method private ensureOpen()V
void java::io::CharArrayReader::ensureOpen()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 111        value = {
	// 112            Ljava/io/IOException;
	// 113        }
	// 114    .end annotation
	if ( this->buf )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream closed")));
	// throw
	throw cVar0;
	// 131    .line 93
label_cond_d:
	return;

}
// .method public close()V
void java::io::CharArrayReader::close()
{
	
	this->buf = 0x0;
	return;

}
// .method public mark(I)V
void java::io::CharArrayReader::mark(int readAheadLimit)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "readAheadLimit"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 155        value = {
	// 156            Ljava/io/IOException;
	// 157        }
	// 158    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	this->markedPos = this->pos;
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_c;
	}
	//    .catchall {:try_start_3 .. :try_end_a} :catchall_c
	cVar0->monitor_exit();
	return;
	// 182    .line 208
label_catchall_c:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public markSupported()Z
bool java::io::CharArrayReader::markSupported()
{
	
	return 0x1;

}
// .method public read()I
int java::io::CharArrayReader::read()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 204        value = {
	// 205            Ljava/io/IOException;
	// 206        }
	// 207    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_1b;
	}
	//    .catchall {:try_start_3 .. :try_end_a} :catchall_1b
	if ( this->pos <  this->count )
		goto label_cond_f;
	cVar0->monitor_exit();
	return -0x1;
	// 235    .line 106
label_cond_f:
	try {
	//label_try_start_f:
	cVar1 = this->pos;
	this->pos = ( cVar1 + 0x1);
	//label_try_end_19:
	}
	catch (...){
		goto label_catchall_1b;
	}
	//    .catchall {:try_start_f .. :try_end_19} :catchall_1b
	cVar0->monitor_exit();
	return this->buf[cVar1];
	// 254    .line 101
label_catchall_1b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public read([CII)I
int java::io::CharArrayReader::read(std::shared_ptr<char[]> b,int off,int cVar3)
{
	
	int cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar2;
	int avail;
	int cVar3;
	
	//    .param p1, "b"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 269        value = {
	// 270            Ljava/io/IOException;
	// 271        }
	// 272    .end annotation
	cVar0 = 0x0;
	cVar1 = this->lock;
	cVar1->monitor_enter();
	try {
	//label_try_start_4:
	this->ensureOpen();
	if ( off < 0 ) 
		goto label_cond_c;
	if ( off <= b->size() )
		goto label_cond_15;
label_cond_c:
	cVar2 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar2;
	// 300    :try_end_12
	// 301    .catchall {:try_start_4 .. :try_end_12} :catchall_12
	// 303    .line 121
label_catchall_12:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;
	// 311    .line 123
label_cond_15:
	if ( cVar3 < 0 ) 
		goto label_cond_c;
	try {
	//label_try_start_19:
	//label_try_end_1a:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_19 .. :try_end_1a} :catchall_12
	if ( (off + cVar3) >  b->size() )
		goto label_cond_c;
	if ( (off + cVar3) < 0 ) 
		goto label_cond_c;
	if ( cVar3 )     
		goto label_cond_24;
	cVar1->monitor_exit();
	return cVar0;
	// 337    .line 130
label_cond_24:
	try {
	//label_try_start_24:
	//label_try_end_28:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_24 .. :try_end_28} :catchall_12
	if ( this->pos <  this->count )
		goto label_cond_2d;
	cVar1->monitor_exit();
	return -0x1;
	// 355    .line 134
label_cond_2d:
	try {
	//label_try_start_2d:
	//label_try_end_31:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_2d .. :try_end_31} :catchall_12
	avail = (this->count - this->pos);
	//    .local v0, "avail":I
	if ( cVar3 <= avail )
		goto label_cond_36;
	cVar3 = avail;
label_cond_36:
	if ( cVar3 > 0 ) 
		goto label_cond_3a;
	cVar1->monitor_exit();
	return cVar0;
	// 382    .line 141
label_cond_3a:
	try {
	//label_try_start_3a:
	java::lang::System::arraycopy(this->buf, this->pos, b, off, cVar3);
	this->pos = (this->pos +  cVar3);
	//label_try_end_46:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_3a .. :try_end_46} :catchall_12
	cVar1->monitor_exit();
	return cVar3;

}
// .method public ready()Z
bool java::io::CharArrayReader::ready()
{
	
	bool cVar2;
	std::shared_ptr<java::lang::Object> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 409        value = {
	// 410            Ljava/io/IOException;
	// 411        }
	// 412    .end annotation
	cVar2 = 0x0;
	cVar1 = this->lock;
	cVar1->monitor_enter();
	try {
	//label_try_start_4:
	this->ensureOpen();
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_4 .. :try_end_b} :catchall_11
	if ( (this->count -  this->pos) <= 0 )
		goto label_cond_f;
	cVar2 = 0x1;
label_cond_f:
	cVar1->monitor_exit();
	return cVar2;
	// 444    .line 182
label_catchall_11:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;

}
// .method public reset()V
void java::io::CharArrayReader::reset()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 456        value = {
	// 457            Ljava/io/IOException;
	// 458        }
	// 459    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	this->pos = this->markedPos;
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_c;
	}
	//    .catchall {:try_start_3 .. :try_end_a} :catchall_c
	cVar0->monitor_exit();
	return;
	// 483    .line 221
label_catchall_c:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public skip(J)J
long long java::io::CharArrayReader::skip(long long cVar2)
{
	
	long long cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	long long avail;
	long long cVar2;
	
	//    .param p1, "n"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 496        value = {
	// 497            Ljava/io/IOException;
	// 498        }
	// 499    .end annotation
	cVar0 = 0x0;
	cVar1 = this->lock;
	cVar1->monitor_enter();
	try {
	//label_try_start_5:
	this->ensureOpen();
	//label_try_end_c:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_5 .. :try_end_c} :catchall_22
	avail = (long long)((this->count -  this->pos));
	//    .local v0, "avail":J
	if ( (cVar2 > avail) <= 0 )
		goto label_cond_13;
	cVar2 = avail;
label_cond_13:
	if ( (cVar2 > cVar0) >= 0 )
		goto label_cond_19;
	cVar1->monitor_exit();
	return cVar0;
	// 544    .line 170
label_cond_19:
	try {
	//label_try_start_19:
	this->pos = (int)(((long long)(this->pos) +  cVar2));
	//label_try_end_20:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_19 .. :try_end_20} :catchall_22
	cVar1->monitor_exit();
	return cVar2;
	// 564    .line 160
	// 565    .end local v0    # "avail":J
label_catchall_22:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;

}


