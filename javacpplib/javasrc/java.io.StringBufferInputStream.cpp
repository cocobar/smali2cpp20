// CPP L:\smali2cpp20\x64\Release\out\java\io\StringBufferInputStream.smali
#include "java2ctype.h"
#include "java.io.StringBufferInputStream.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;)V
java::io::StringBufferInputStream::StringBufferInputStream(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	// 026    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V
	this->buffer = s;
	this->count = s->length();
	return;

}
// .method public declared-synchronized available()I
int java::io::StringBufferInputStream::available()
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
// .method public declared-synchronized read()I
int java::io::StringBufferInputStream::read()
{
	
	int cVar0;
	int cVar1;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->pos >= this->count )
		goto label_cond_17;
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	//label_try_end_12:
	}
	catch (...){
		goto label_catchall_19;
	}
	//    .catchall {:try_start_1 .. :try_end_12} :catchall_19
	cVar1 = ( this->buffer->charAt(cVar0) & 0xff);
label_goto_15:
	this->monitor_exit();
	return cVar1;
label_cond_17:
	cVar1 = -0x1;
	goto label_goto_15;
label_catchall_19:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized read([BII)I
int java::io::StringBufferInputStream::read(std::shared_ptr<unsigned char[]> b,int off,int cVar3)
{
	
	std::shared_ptr<java::lang::Object> catchall;
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar2;
	int avail;
	int cVar3;
	int cnt;
	int off;
	int cVar4;
	
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
	// 141    :try_end_a
	// 142    .catchall {:try_start_4 .. :try_end_a} :catchall_a
label_catchall_a:
	// move-exception
	catchall = tryCatchExcetionList.back();
label_goto_b:
	this->monitor_exit();
	// throw
	throw;
	// 152    .line 114
label_cond_d:
	if ( off < 0 ) 
		goto label_cond_12;
	try {
	//label_try_start_f:
	if ( off <= b->size() )
		goto label_cond_18;
label_cond_12:
	cVar2 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar2;
	// 169    .line 114
label_cond_18:
	if ( cVar3 < 0 ) 
		goto label_cond_12;
	if ( (off + cVar3) >  b->size() )
		goto label_cond_12;
	if ( (off + cVar3) < 0 ) 
		goto label_cond_12;
	//label_try_end_27:
	}
	catch (...){
		goto label_catchall_a;
	}
	//    .catchall {:try_start_f .. :try_end_27} :catchall_a
	if ( this->pos <  this->count )
		goto label_cond_2c;
	this->monitor_exit();
	return -0x1;
	// 200    .line 122
label_cond_2c:
	try {
	//label_try_start_2c:
	//label_try_end_30:
	}
	catch (...){
		goto label_catchall_a;
	}
	//    .catchall {:try_start_2c .. :try_end_30} :catchall_a
	avail = (this->count - this->pos);
	//    .local v0, "avail":I
	if ( cVar3 <= avail )
		goto label_cond_35;
	cVar3 = avail;
label_cond_35:
	if ( cVar3 > 0 ) 
		goto label_cond_39;
	this->monitor_exit();
	return 0x0;
	// 227    .line 129
label_cond_39:
	try {
	//label_try_start_39:
	//label_try_end_3b:
	}
	catch (...){
		goto label_catchall_a;
	}
	//    .catchall {:try_start_39 .. :try_end_3b} :catchall_a
	//    .local v3, "s":Ljava/lang/String;
	//    .local v1, "cnt":I
label_goto_3c:
	cnt = ( cnt + -0x1);
	if ( cnt < 0 ) 
		goto label_cond_51;
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .local v2, "off":I
	try {
	//label_try_start_42:
	cVar4 = this->pos;
	this->pos = ( cVar4 + 0x1);
	b[off] = (unsigned char)(this->buffer->charAt(cVar4));
	//label_try_end_4f:
	}
	catch (...){
		goto label_catchall_53;
	}
	//    .catchall {:try_start_42 .. :try_end_4f} :catchall_53
	off = off;
	//    .end local v2    # "off":I
	//    .restart local p2    # "off":I
	goto label_goto_3c;
label_cond_51:
	this->monitor_exit();
	return cVar3;
	// 279    .end local p2    # "off":I
	// 280    .restart local v2    # "off":I
label_catchall_53:
	// move-exception
	catchall = tryCatchExcetionList.back();
	off;
	//    .end local v2    # "off":I
	//    .restart local p2    # "off":I
	goto label_goto_b;

}
// .method public declared-synchronized reset()V
void java::io::StringBufferInputStream::reset()
{
	
	this->monitor_enter();
	try {
	//label_try_start_2:
	this->pos = 0x0;
	//label_try_end_4:
	}
	catch (...){
		goto label_catchall_6;
	}
	//    .catchall {:try_start_2 .. :try_end_4} :catchall_6
	this->monitor_exit();
	return;
label_catchall_6:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized skip(J)J
long long java::io::StringBufferInputStream::skip(long long cVar1)
{
	
	long long cVar0;
	long long cVar1;
	
	//    .param p1, "n"    # J
	cVar0 = 0x0;
	this->monitor_enter();
	if ( (cVar1 > cVar0) >= 0 )
		goto label_cond_9;
	this->monitor_exit();
	return cVar0;
	// 337    .line 149
label_cond_9:
	try {
	//label_try_start_9:
	if ( (cVar1 > (long long)((this->count -  this->pos))) <= 0 )
		goto label_cond_19;
	cVar1 = (long long)((this->count -  this->pos));
label_cond_19:
	this->pos = (int)(((long long)(this->pos) +  cVar1));
	//label_try_end_20:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_9 .. :try_end_20} :catchall_22
	this->monitor_exit();
	return cVar1;
label_catchall_22:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


