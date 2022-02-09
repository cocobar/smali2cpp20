// CPP L:\smali2cpp20\x64\Release\out\java\io\BufferedOutputStream.smali
#include "java2ctype.h"
#include "java.io.BufferedOutputStream.h"
#include "java.io.FilterOutputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.System.h"

// .method public constructor <init>(Ljava/io/OutputStream;)V
java::io::BufferedOutputStream::BufferedOutputStream(std::shared_ptr<java::io::OutputStream> out)
{
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	java::io::BufferedOutputStream::(out, 0x2000);
	return;

}
// .method public constructor <init>(Ljava/io/OutputStream;I)V
java::io::BufferedOutputStream::BufferedOutputStream(std::shared_ptr<java::io::OutputStream> out,int size)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .param p2, "size"    # I
	java::io::FilterOutputStream::(out);
	if ( size > 0 ) 
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Buffer size <= 0")));
	// throw
	throw cVar0;
	// 048    .line 76
label_cond_e:
	this->buf = std::make_shared<std::vector<unsigned char[]>>(size);
	return;

}
// .method private flushBuffer()V
void java::io::BufferedOutputStream::flushBuffer()
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 061        value = {
	// 062            Ljava/io/IOException;
	// 063        }
	// 064    .end annotation
	cVar0 = 0x0;
	if ( this->count <= 0 )
		goto label_cond_10;
	this->out->write(this->buf, cVar0, this->count);
	this->count = cVar0;
label_cond_10:
	return;

}
// .method public declared-synchronized flush()V
void java::io::BufferedOutputStream::flush()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 096        value = {
	// 097            Ljava/io/IOException;
	// 098        }
	// 099    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->flushBuffer();
	this->out->flush();
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
// .method public declared-synchronized write(I)V
void java::io::BufferedOutputStream::write(int b)
{
	
	int cVar0;
	
	//    .param p1, "b"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 132        value = {
	// 133            Ljava/io/IOException;
	// 134        }
	// 135    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->count <  this->buf->size() )
		goto label_cond_b;
	this->flushBuffer();
label_cond_b:
	cVar0 = this->count;
	this->count = ( cVar0 + 0x1);
	this->buf[cVar0] = (unsigned char)(b);
	//label_try_end_16:
	}
	catch (...){
		goto label_catchall_18;
	}
	//    .catchall {:try_start_1 .. :try_end_16} :catchall_18
	this->monitor_exit();
	return;
label_catchall_18:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized write([BII)V
void java::io::BufferedOutputStream::write(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 188        value = {
	// 189            Ljava/io/IOException;
	// 190        }
	// 191    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( len <  this->buf->size() )
		goto label_cond_10;
	this->flushBuffer();
	this->out->write(b, off, len);
	//label_try_end_e:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_1 .. :try_end_e} :catchall_29
	this->monitor_exit();
	return;
	// 219    .line 125
label_cond_10:
	try {
	//label_try_start_10:
	if ( len <= (this->buf->size() -  this->count) )
		goto label_cond_1b;
	this->flushBuffer();
label_cond_1b:
	java::lang::System::arraycopy(b, off, this->buf, this->count, len);
	this->count = (this->count +  len);
	//label_try_end_27:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_10 .. :try_end_27} :catchall_29
	this->monitor_exit();
	return;
label_catchall_29:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


