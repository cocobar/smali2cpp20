// CPP L:\smali2cpp20\x64\Release\out\java\io\StringReader.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.StringReader.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;)V
java::io::StringReader::StringReader(std::shared_ptr<java::lang::String> s)
{
	
	int cVar0;
	
	//    .param p1, "s"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 025    invoke-direct {p0}, Ljava/io/Reader;-><init>()V
	this->next = cVar0;
	this->mark = cVar0;
	this->str = s;
	this->length = s->length();
	return;

}
// .method private ensureOpen()V
void java::io::StringReader::ensureOpen()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 050        value = {
	// 051            Ljava/io/IOException;
	// 052        }
	// 053    .end annotation
	if ( this->str )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream closed")));
	// throw
	throw cVar0;
	// 070    .line 57
label_cond_d:
	return;

}
// .method public close()V
void java::io::StringReader::close()
{
	
	this->str = 0x0;
	return;

}
// .method public mark(I)V
void java::io::StringReader::mark(int readAheadLimit)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	
	//    .param p1, "readAheadLimit"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 094        value = {
	// 095            Ljava/io/IOException;
	// 096        }
	// 097    .end annotation
	if ( readAheadLimit >= 0 )
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Read-ahead limit < 0")));
	// throw
	throw cVar0;
	// 112    .line 173
label_cond_b:
	cVar1 = this->lock;
	cVar1->monitor_enter();
	try {
	//label_try_start_e:
	this->ensureOpen();
	this->mark = this->next;
	//label_try_end_15:
	}
	catch (...){
		goto label_catchall_17;
	}
	//    .catchall {:try_start_e .. :try_end_15} :catchall_17
	cVar1->monitor_exit();
	return;
	// 134    .line 173
label_catchall_17:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;

}
// .method public markSupported()Z
bool java::io::StringReader::markSupported()
{
	
	return 0x1;

}
// .method public read()I
int java::io::StringReader::read()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 156        value = {
	// 157            Ljava/io/IOException;
	// 158        }
	// 159    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_1d;
	}
	//    .catchall {:try_start_3 .. :try_end_a} :catchall_1d
	if ( this->next <  this->length )
		goto label_cond_f;
	cVar0->monitor_exit();
	return -0x1;
	// 187    .line 72
label_cond_f:
	try {
	//label_try_start_f:
	cVar1 = this->next;
	this->next = ( cVar1 + 0x1);
	//label_try_end_1a:
	}
	catch (...){
		goto label_catchall_1d;
	}
	//    .catchall {:try_start_f .. :try_end_1a} :catchall_1d
	cVar0->monitor_exit();
	return this->str->charAt(cVar1);
	// 208    .line 68
label_catchall_1d:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public read([CII)I
int java::io::StringReader::read(std::shared_ptr<char[]> cbuf,int off,int len)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	int n;
	
	//    .param p1, "cbuf"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 223        value = {
	// 224            Ljava/io/IOException;
	// 225        }
	// 226    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_4:
	this->ensureOpen();
	if ( off < 0 ) 
		goto label_cond_c;
	if ( off <= cbuf->size() )
		goto label_cond_15;
label_cond_c:
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar1;
	// 254    :try_end_12
	// 255    .catchall {:try_start_4 .. :try_end_12} :catchall_12
	// 257    .line 89
label_catchall_12:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 265    .line 91
label_cond_15:
	if ( len < 0 ) 
		goto label_cond_c;
	try {
	//label_try_start_19:
	//label_try_end_1a:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_19 .. :try_end_1a} :catchall_12
	if ( (off + len) >  cbuf->size() )
		goto label_cond_c;
	if ( (off + len) < 0 ) 
		goto label_cond_c;
	if ( len )     
		goto label_cond_24;
	cVar0->monitor_exit();
	return 0x0;
	// 291    .line 97
label_cond_24:
	try {
	//label_try_start_24:
	//label_try_end_28:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_24 .. :try_end_28} :catchall_12
	if ( this->next <  this->length )
		goto label_cond_2d;
	cVar0->monitor_exit();
	return -0x1;
	// 309    .line 99
label_cond_2d:
	try {
	//label_try_start_2d:
	n = java::lang::Math::min((this->length -  this->next), len);
	//    .local v0, "n":I
	this->str->getChars(this->next, (this->next +  n), cbuf, off);
	this->next = (this->next +  n);
	//label_try_end_45:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_2d .. :try_end_45} :catchall_12
	cVar0->monitor_exit();
	return n;

}
// .method public ready()Z
bool java::io::StringReader::ready()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 352        value = {
	// 353            Ljava/io/IOException;
	// 354        }
	// 355    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_3 .. :try_end_6} :catchall_9
	cVar0->monitor_exit();
	return 0x1;
	// 376    .line 143
label_catchall_9:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public reset()V
void java::io::StringReader::reset()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 388        value = {
	// 389            Ljava/io/IOException;
	// 390        }
	// 391    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	this->next = this->mark;
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_c;
	}
	//    .catchall {:try_start_3 .. :try_end_a} :catchall_c
	cVar0->monitor_exit();
	return;
	// 415    .line 186
label_catchall_c:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public skip(J)J
long long java::io::StringReader::skip(long long ns)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	long long n;
	
	//    .param p1, "ns"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 428        value = {
	// 429            Ljava/io/IOException;
	// 430        }
	// 431    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_2b;
	}
	//    .catchall {:try_start_3 .. :try_end_a} :catchall_2b
	if ( this->next <  this->length )
		goto label_cond_10;
	cVar0->monitor_exit();
	return 0x0;
	// 459    .line 128
label_cond_10:
	try {
	//label_try_start_10:
	//    .local v0, "n":J
	n = java::lang::Math::max((long long)((0 - this->next)), java::lang::Math::min((long long)((this->length -  this->next)), ns));
	this->next = (int)(((long long)(this->next) +  n));
	//label_try_end_29:
	}
	catch (...){
		goto label_catchall_2b;
	}
	//    .catchall {:try_start_10 .. :try_end_29} :catchall_2b
	cVar0->monitor_exit();
	return n;
	// 504    .line 123
	// 505    .end local v0    # "n":J
label_catchall_2b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}


