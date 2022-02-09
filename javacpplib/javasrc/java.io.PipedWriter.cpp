// CPP L:\smali2cpp20\x64\Release\out\java\io\PipedWriter.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.PipedReader.h"
#include "java.io.PipedWriter.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.String.h"

// .method public constructor <init>()V
java::io::PipedWriter::PipedWriter()
{
	
	// 018    invoke-direct {p0}, Ljava/io/Writer;-><init>()V
	this->closed = 0x0;
	return;

}
// .method public constructor <init>(Ljava/io/PipedReader;)V
java::io::PipedWriter::PipedWriter(std::shared_ptr<java::io::PipedReader> snk)
{
	
	//    .param p1, "snk"    # Ljava/io/PipedReader;
	//    .annotation system Ldalvik/annotation/Throws;
	// 033        value = {
	// 034            Ljava/io/IOException;
	// 035        }
	// 036    .end annotation
	// 040    invoke-direct {p0}, Ljava/io/Writer;-><init>()V
	this->closed = 0x0;
	this->connect(snk);
	return;

}
// .method public close()V
void java::io::PipedWriter::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 059        value = {
	// 060            Ljava/io/IOException;
	// 061        }
	// 062    .end annotation
	this->closed = 0x1;
	if ( !(this->sink) )  
		goto label_cond_c;
	this->sink->receivedLast();
label_cond_c:
	return;

}
// .method public declared-synchronized connect(Ljava/io/PipedReader;)V
void java::io::PipedWriter::connect(std::shared_ptr<java::io::PipedReader> snk)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	
	//    .param p1, "snk"    # Ljava/io/PipedReader;
	//    .annotation system Ldalvik/annotation/Throws;
	// 089        value = {
	// 090            Ljava/io/IOException;
	// 091        }
	// 092    .end annotation
	this->monitor_enter();
	if ( snk )     
		goto label_cond_c;
	try {
	//label_try_start_3:
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 107    :try_end_9
	// 108    .catchall {:try_start_3 .. :try_end_9} :catchall_9
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 117    .line 94
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
	// 138    .line 96
label_cond_1d:
	if ( snk->closedByReader )     
		goto label_cond_25;
	if ( !(this->closed) )  
		goto label_cond_2e;
label_cond_25:
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe closed")));
	// throw
	throw cVar2;
	// 158    .line 100
label_cond_2e:
	this->sink = snk;
	snk->in = -0x1;
	snk->out = 0x0;
	snk->connected = 0x1;
	//label_try_end_39:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_c .. :try_end_39} :catchall_9
	this->monitor_exit();
	return;

}
// .method public declared-synchronized flush()V
void java::io::PipedWriter::flush()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::PipedReader> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 188        value = {
	// 189            Ljava/io/IOException;
	// 190        }
	// 191    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( !(this->sink) )  
		goto label_cond_24;
	if ( this->sink->closedByReader )     
		goto label_cond_f;
	if ( !(this->closed) )  
		goto label_cond_1b;
label_cond_f:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe closed")));
	// throw
	throw cVar0;
	// 222    :try_end_18
	// 223    .catchall {:try_start_1 .. :try_end_18} :catchall_18
label_catchall_18:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 232    .line 165
label_cond_1b:
	try {
	//label_try_start_1b:
	cVar1 = this->sink;
	cVar1->monitor_enter();
	//label_try_end_1e:
	}
	catch (...){
		goto label_catchall_18;
	}
	//    .catchall {:try_start_1b .. :try_end_1e} :catchall_18
	try {
	//label_try_start_1e:
	this->sink->notifyAll();
	//label_try_end_23:
	}
	catch (...){
		goto label_catchall_26;
	}
	//    .catchall {:try_start_1e .. :try_end_23} :catchall_26
	try {
	//label_try_start_23:
	cVar1->monitor_exit();
	//label_try_end_24:
	}
	catch (...){
		goto label_catchall_18;
	}
	//    .catchall {:try_start_23 .. :try_end_24} :catchall_18
label_cond_24:
	this->monitor_exit();
	return;
	// 260    .line 165
label_catchall_26:
	// move-exception
	
	try {
	//label_try_start_27:
	cVar1->monitor_exit();
	// throw
	throw;
	// 268    :try_end_29
	// 269    .catchall {:try_start_27 .. :try_end_29} :catchall_18

}
// .method public write(I)V
void java::io::PipedWriter::write(int c)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "c"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 276        value = {
	// 277            Ljava/io/IOException;
	// 278        }
	// 279    .end annotation
	if ( this->sink )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe not connected")));
	// throw
	throw cVar0;
	// 296    .line 124
label_cond_d:
	this->sink->receive(c);
	return;

}
// .method public write([CII)V
void java::io::PipedWriter::write(std::shared_ptr<char[]> cbuf,int off,int len)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	
	//    .param p1, "cbuf"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 312        value = {
	// 313            Ljava/io/IOException;
	// 314        }
	// 315    .end annotation
	if ( this->sink )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe not connected")));
	// throw
	throw cVar0;
	// 332    .line 147
label_cond_d:
	if ( (((off | len) |  (off + len)) |  (cbuf->size() -  (off + len))) >= 0 )
		goto label_cond_1f;
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar1;
	// 357    .line 150
label_cond_1f:
	this->sink->receive(cbuf, off, len);
	return;

}


