// CPP L:\smali2cpp20\x64\Release\out\java\io\PipedOutputStream.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.PipedInputStream.h"
#include "java.io.PipedOutputStream.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.String.h"

// .method public constructor <init>()V
java::io::PipedOutputStream::PipedOutputStream()
{
	
	// 016    invoke-direct {p0}, Ljava/io/OutputStream;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/io/PipedInputStream;)V
java::io::PipedOutputStream::PipedOutputStream(std::shared_ptr<java::io::PipedInputStream> snk)
{
	
	//    .param p1, "snk"    # Ljava/io/PipedInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 026        value = {
	// 027            Ljava/io/IOException;
	// 028        }
	// 029    .end annotation
	// 033    invoke-direct {p0}, Ljava/io/OutputStream;-><init>()V
	this->connect(snk);
	return;

}
// .method public close()V
void java::io::PipedOutputStream::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 047        value = {
	// 048            Ljava/io/IOException;
	// 049        }
	// 050    .end annotation
	if ( !(this->sink) )  
		goto label_cond_9;
	this->sink->receivedLast();
label_cond_9:
	return;

}
// .method public declared-synchronized connect(Ljava/io/PipedInputStream;)V
void java::io::PipedOutputStream::connect(std::shared_ptr<java::io::PipedInputStream> snk)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "snk"    # Ljava/io/PipedInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 072        value = {
	// 073            Ljava/io/IOException;
	// 074        }
	// 075    .end annotation
	this->monitor_enter();
	if ( snk )     
		goto label_cond_c;
	try {
	//label_try_start_3:
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 090    :try_end_9
	// 091    .catchall {:try_start_3 .. :try_end_9} :catchall_9
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 100    .line 99
label_cond_c:
	try {
	//label_try_start_c:
	if ( this->sink )     
		goto label_cond_14;
	if ( !(snk->connected) )  
		goto label_cond_1d;
label_cond_14:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Already connected")));
	// throw
	throw cVar1;
	// 121    .line 102
label_cond_1d:
	this->sink = snk;
	snk->in = -0x1;
	snk->out = 0x0;
	snk->connected = 0x1;
	//label_try_end_28:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_c .. :try_end_28} :catchall_9
	this->monitor_exit();
	return;

}
// .method public declared-synchronized flush()V
void java::io::PipedOutputStream::flush()
{
	
	std::shared_ptr<java::io::PipedInputStream> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 151        value = {
	// 152            Ljava/io/IOException;
	// 153        }
	// 154    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( !(this->sink) )  
		goto label_cond_e;
	cVar0 = this->sink;
	cVar0->monitor_enter();
	//label_try_end_8:
	}
	catch (...){
		goto label_catchall_13;
	}
	//    .catchall {:try_start_1 .. :try_end_8} :catchall_13
	try {
	//label_try_start_8:
	this->sink->notifyAll();
	//label_try_end_d:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_8 .. :try_end_d} :catchall_10
	try {
	//label_try_start_d:
	cVar0->monitor_exit();
	//label_try_end_e:
	}
	catch (...){
		goto label_catchall_13;
	}
	//    .catchall {:try_start_d .. :try_end_e} :catchall_13
label_cond_e:
	this->monitor_exit();
	return;
	// 191    .line 161
label_catchall_10:
	// move-exception
	
	try {
	//label_try_start_11:
	cVar0->monitor_exit();
	// throw
	throw;
	// 199    :try_end_13
	// 200    .catchall {:try_start_11 .. :try_end_13} :catchall_13
label_catchall_13:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public write(I)V
void java::io::PipedOutputStream::write(int b)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "b"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 214        value = {
	// 215            Ljava/io/IOException;
	// 216        }
	// 217    .end annotation
	if ( this->sink )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe not connected")));
	// throw
	throw cVar0;
	// 234    .line 122
label_cond_d:
	this->sink->receive(b);
	return;

}
// .method public write([BII)V
void java::io::PipedOutputStream::write(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar2;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 250        value = {
	// 251            Ljava/io/IOException;
	// 252        }
	// 253    .end annotation
	if ( this->sink )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe not connected")));
	// throw
	throw cVar0;
	// 270    .line 141
label_cond_d:
	if ( b )     
		goto label_cond_15;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 281    .line 143
label_cond_15:
	if ( off < 0 ) 
		goto label_cond_1a;
	if ( off <= b->size() )
		goto label_cond_20;
label_cond_1a:
	cVar2 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar2;
	// 297    .line 143
label_cond_20:
	if ( len < 0 ) 
		goto label_cond_1a;
	if ( (off + len) >  b->size() )
		goto label_cond_1a;
	if ( (off + len) < 0 ) 
		goto label_cond_1a;
	if ( len )     
		goto label_cond_2e;
	return;
	// 318    .line 149
label_cond_2e:
	this->sink->receive(b, off, len);
	return;

}


