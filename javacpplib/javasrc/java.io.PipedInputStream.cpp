// CPP L:\smali2cpp20\x64\Release\out\java\io\PipedInputStream.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.PipedInputStream.h"
#include "java.io.PipedOutputStream.h"
#include "java.lang.AssertionError.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.InterruptedException.h"
#include "java.lang.Math.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.lang.Thread.h"
#include "libcore.io.IoUtils.h"

static java::io::PipedInputStream::_assertionsDisabled;
static java::io::PipedInputStream::DEFAULT_PIPE_SIZE = 0x400;
static java::io::PipedInputStream::PIPE_SIZE = 0x400;
// .method static constructor <clinit>()V
void java::io::PipedInputStream::static_cinit()
{
	
	java::io::PipedInputStream::_assertionsDisabled = ( java::io::PipedInputStream()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>()V
java::io::PipedInputStream::PipedInputStream()
{
	
	bool cVar0;
	
	cVar0 = 0x0;
	// 058    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V
	this->closedByWriter = cVar0;
	this->closedByReader = cVar0;
	this->connected = cVar0;
	this->in = -0x1;
	this->out = cVar0;
	this->initPipe(0x400);
	return;

}
// .method public constructor <init>(I)V
java::io::PipedInputStream::PipedInputStream(int pipeSize)
{
	
	bool cVar0;
	
	//    .param p1, "pipeSize"    # I
	cVar0 = 0x0;
	// 094    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V
	this->closedByWriter = cVar0;
	this->closedByReader = cVar0;
	this->connected = cVar0;
	this->in = -0x1;
	this->out = cVar0;
	this->initPipe(pipeSize);
	return;

}
// .method public constructor <init>(Ljava/io/PipedOutputStream;)V
java::io::PipedInputStream::PipedInputStream(std::shared_ptr<java::io::PipedOutputStream> src)
{
	
	//    .param p1, "src"    # Ljava/io/PipedOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 124        value = {
	// 125            Ljava/io/IOException;
	// 126        }
	// 127    .end annotation
	java::io::PipedInputStream::(src, 0x400);
	return;

}
// .method public constructor <init>(Ljava/io/PipedOutputStream;I)V
java::io::PipedInputStream::PipedInputStream(std::shared_ptr<java::io::PipedOutputStream> src,int pipeSize)
{
	
	bool cVar0;
	
	//    .param p1, "src"    # Ljava/io/PipedOutputStream;
	//    .param p2, "pipeSize"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 144        value = {
	// 145            Ljava/io/IOException;
	// 146        }
	// 147    .end annotation
	cVar0 = 0x0;
	// 153    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V
	this->closedByWriter = cVar0;
	this->closedByReader = cVar0;
	this->connected = cVar0;
	this->in = -0x1;
	this->out = cVar0;
	this->initPipe(pipeSize);
	this->connect(src);
	return;

}
// .method private awaitSpace()V
void java::io::PipedInputStream::awaitSpace()
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 185        value = {
	// 186            Ljava/io/IOException;
	// 187        }
	// 188    .end annotation
label_goto_0:
	if ( this->in != this->out )
		goto label_cond_17;
	this->checkStateForReceive();
	this->notifyAll();
	try {
	//label_try_start_e:
	this->wait(0x3e8);
	//label_try_end_11:
	}
	catch (java::lang::InterruptedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/lang/InterruptedException; {:try_start_e .. :try_end_11} :catch_12
	goto label_goto_0;
	// 215    .line 277
label_catch_12:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/InterruptedException;
	// throw
	libcore::io::IoUtils::throwInterruptedIoException({const[class].FS-Param});
	goto label_goto_0;
	// 225    .line 283
	// 226    .end local v0    # "ex":Ljava/lang/InterruptedException;
label_cond_17:
	return;

}
// .method private checkStateForReceive()V
void java::io::PipedInputStream::checkStateForReceive()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 234        value = {
	// 235            Ljava/io/IOException;
	// 236        }
	// 237    .end annotation
	if ( this->connected )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe not connected")));
	// throw
	throw cVar0;
	// 254    .line 262
label_cond_d:
	if ( this->closedByWriter )     
		goto label_cond_15;
	if ( !(this->closedByReader) )  
		goto label_cond_1e;
label_cond_15:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe closed")));
	// throw
	throw cVar1;
	// 274    .line 264
label_cond_1e:
	if ( !(this->readSide) )  
		goto label_cond_35;
	if ( !(( this->readSide->isAlive() ^ 0x1)) )  
		goto label_cond_35;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Read end dead")));
	// throw
	throw cVar2;
	// 299    .line 267
label_cond_35:
	return;

}
// .method private initPipe(I)V
void java::io::PipedInputStream::initPipe(int pipeSize)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "pipeSize"    # I
	if ( pipeSize > 0 ) 
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe Size <= 0")));
	// throw
	throw cVar0;
	// 321    .line 164
label_cond_b:
	this->buffer = std::make_shared<std::vector<unsigned char[]>>(pipeSize);
	return;

}
// .method public declared-synchronized available()I
int java::io::PipedInputStream::available()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 336        value = {
	// 337            Ljava/io/IOException;
	// 338        }
	// 339    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_2:
	//label_try_end_4:
	}
	catch (...){
		goto label_catchall_2b;
	}
	//    .catchall {:try_start_2 .. :try_end_4} :catchall_2b
	if ( this->in >= 0 )
		goto label_cond_8;
	this->monitor_exit();
	return 0x0;
	// 359    .line 436
label_cond_8:
	try {
	//label_try_start_8:
	if ( this->in != this->out )
		goto label_cond_13;
	//label_try_end_11:
	}
	catch (...){
		goto label_catchall_2b;
	}
	//    .catchall {:try_start_8 .. :try_end_11} :catchall_2b
	this->monitor_exit();
	return this->buffer->size();
	// 379    .line 438
label_cond_13:
	try {
	//label_try_start_13:
	if ( this->in <= this->out )
		goto label_cond_20;
	//label_try_end_1d:
	}
	catch (...){
		goto label_catchall_2b;
	}
	//    .catchall {:try_start_13 .. :try_end_1d} :catchall_2b
	this->monitor_exit();
	return (this->in -  this->out);
	// 401    .line 441
label_cond_20:
	try {
	//label_try_start_20:
	//label_try_end_28:
	}
	catch (...){
		goto label_catchall_2b;
	}
	//    .catchall {:try_start_20 .. :try_end_28} :catchall_2b
	this->monitor_exit();
	return ((this->in +  this->buffer->size()) -  this->out);
label_catchall_2b:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public close()V
void java::io::PipedInputStream::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 433        value = {
	// 434            Ljava/io/IOException;
	// 435        }
	// 436    .end annotation
	this->closedByReader = 0x1;
	this->monitor_enter();
	try {
	//label_try_start_5:
	this->in = -0x1;
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_5 .. :try_end_7} :catchall_9
	this->monitor_exit();
	return;
	// 460    .line 452
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public connect(Ljava/io/PipedOutputStream;)V
void java::io::PipedInputStream::connect(std::shared_ptr<java::io::PipedOutputStream> src)
{
	
	//    .param p1, "src"    # Ljava/io/PipedOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 473        value = {
	// 474            Ljava/io/IOException;
	// 475        }
	// 476    .end annotation
	src->connect(this);
	return;

}
// .method public declared-synchronized read()I
int java::io::PipedInputStream::read()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	int trials;
	std::shared_ptr<java::io::IOException> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	int cVar4;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 489        value = {
	// 490            Ljava/io/IOException;
	// 491        }
	// 492    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_2:
	if ( this->connected )     
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe not connected")));
	// throw
	throw cVar0;
	// 513    :try_end_f
	// 514    .catchall {:try_start_2 .. :try_end_f} :catchall_f
label_catchall_f:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 523    .line 311
label_cond_12:
	try {
	//label_try_start_12:
	if ( !(this->closedByReader) )  
		goto label_cond_1f;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe closed")));
	// throw
	throw cVar1;
	// 539    .line 313
label_cond_1f:
	if ( !(this->writeSide) )  
		goto label_cond_40;
	if ( !(( this->writeSide->isAlive() ^ 0x1)) )  
		goto label_cond_40;
	if ( !(( this->closedByWriter ^ 0x1)) )  
		goto label_cond_40;
	if ( this->in >= 0 )
		goto label_cond_40;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Write end dead")));
	// throw
	throw cVar2;
	// 577    .line 318
label_cond_40:
	this->readSide = java::lang::Thread::currentThread({const[class].FS-Param});
	//    .local v2, "trials":I
label_goto_47:
	if ( this->in >= 0 )
		goto label_cond_7a;
	//label_try_end_4d:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_12 .. :try_end_4d} :catchall_f
	if ( !(this->closedByWriter) )  
		goto label_cond_51;
	this->monitor_exit();
	return -0x1;
	// 607    .line 325
label_cond_51:
	try {
	//label_try_start_51:
	if ( !(this->writeSide) )  
		goto label_cond_6c;
	if ( !(( this->writeSide->isAlive() ^ 0x1)) )  
		goto label_cond_6c;
	trials = ( trials + -0x1);
	if ( trials >= 0 )
		goto label_cond_6c;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe broken")));
	// throw
	throw cVar3;
	// 637    .line 329
label_cond_6c:
	this->notifyAll();
	//label_try_end_6f:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_51 .. :try_end_6f} :catchall_f
	try {
	//label_try_start_71:
	this->wait(0x3e8);
	//label_try_end_74:
	}
	catch (java::lang::InterruptedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_75;
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catch Ljava/lang/InterruptedException; {:try_start_71 .. :try_end_74} :catch_75
	//    .catchall {:try_start_71 .. :try_end_74} :catchall_f
	goto label_goto_47;
	// 654    .line 332
label_catch_75:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/InterruptedException;
	try {
	//label_try_start_76:
	// throw
	libcore::io::IoUtils::throwInterruptedIoException({const[class].FS-Param});
	goto label_goto_47;
	// 665    .line 338
	// 666    .end local v0    # "ex":Ljava/lang/InterruptedException;
label_cond_7a:
	cVar4 = this->out;
	this->out = ( cVar4 + 0x1);
	//    .local v1, "ret":I
	if ( this->out <  this->buffer->size() )
		goto label_cond_90;
	this->out = 0x0;
label_cond_90:
	if ( this->in != this->out )
		goto label_cond_99;
	this->in = -0x1;
	//label_try_end_99:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_76 .. :try_end_99} :catchall_f
label_cond_99:
	this->monitor_exit();
	return ( this->buffer[cVar4] & 0xff);

}
// .method public declared-synchronized read([BII)I
int java::io::PipedInputStream::read(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	int c;
	int rlen;
	int available;
	int len;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 723        value = {
	// 724            Ljava/io/IOException;
	// 725        }
	// 726    .end annotation
	this->monitor_enter();
	if ( b )     
		goto label_cond_e;
	try {
	//label_try_start_5:
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 745    :try_end_b
	// 746    .catchall {:try_start_5 .. :try_end_b} :catchall_b
label_catchall_b:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 755    .line 377
label_cond_e:
	if ( off < 0 ) 
		goto label_cond_12;
	if ( len >= 0 )
		goto label_cond_18;
label_cond_12:
	try {
	//label_try_start_12:
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar1;
	// 770    .line 377
label_cond_18:
	//label_try_end_19:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_12 .. :try_end_19} :catchall_b
	if ( len >  (b->size() -  off) )
		goto label_cond_12;
	if ( len )     
		goto label_cond_20;
	this->monitor_exit();
	return 0x0;
	// 788    .line 384
label_cond_20:
	try {
	//label_try_start_20:
	//label_try_end_23:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_20 .. :try_end_23} :catchall_b
	c = this->read();
	//    .local v1, "c":I
	if ( c >= 0 )
		goto label_cond_28;
	this->monitor_exit();
	return -0x1;
	// 806    .line 388
label_cond_28:
	try {
	//label_try_start_29:
	b[off] = (unsigned char)(c);
	rlen = 0x1;
	//    .local v2, "rlen":I
label_cond_2c:
label_goto_2c:
	if ( this->in < 0 ) 
		goto label_cond_7a;
	if ( len <= 0x1 )
		goto label_cond_7a;
	if ( this->in <= this->out )
		goto label_cond_72;
	available = java::lang::Math::min((this->buffer->size() -  this->out), (this->in -  this->out));
	//    .local v0, "available":I
label_goto_48:
	if ( available <= ( len + -0x1) )
		goto label_cond_4e;
	available = ( len + -0x1);
label_cond_4e:
	java::lang::System::arraycopy(this->buffer, this->out, b, (off + rlen), available);
	this->out = (this->out +  available);
	rlen = (rlen +  available);
	len = (len -  available);
	if ( this->out <  this->buffer->size() )
		goto label_cond_68;
	this->out = 0x0;
label_cond_68:
	if ( this->in != this->out )
		goto label_cond_2c;
	this->in = -0x1;
	goto label_goto_2c;
	// 916    .line 397
	// 917    .end local v0    # "available":I
label_cond_72:
	//label_try_end_77:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_29 .. :try_end_77} :catchall_b
	available = (this->buffer->size() - this->out);
	//    .restart local v0    # "available":I
	goto label_goto_48;
	// 932    .end local v0    # "available":I
label_cond_7a:
	this->monitor_exit();
	return rlen;

}
// .method protected declared-synchronized receive(I)V
void java::io::PipedInputStream::receive(int b)
{
	
	int cVar0;
	
	//    .param p1, "b"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 944        value = {
	// 945            Ljava/io/IOException;
	// 946        }
	// 947    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->checkStateForReceive();
	this->writeSide = java::lang::Thread::currentThread({const[class].FS-Param});
	if ( this->in != this->out )
		goto label_cond_13;
	this->awaitSpace();
label_cond_13:
	if ( this->in >= 0 )
		goto label_cond_1d;
	this->in = 0x0;
	this->out = 0x0;
label_cond_1d:
	cVar0 = this->in;
	this->in = ( cVar0 + 0x1);
	this->buffer[cVar0] = (unsigned char)(( b & 0xff));
	if ( this->in <  this->buffer->size() )
		goto label_cond_34;
	this->in = 0x0;
	//label_try_end_34:
	}
	catch (...){
		goto label_catchall_36;
	}
	//    .catchall {:try_start_1 .. :try_end_34} :catchall_36
label_cond_34:
	this->monitor_exit();
	return;
label_catchall_36:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method declared-synchronized receive([BII)V
void java::io::PipedInputStream::receive(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	int bytesToTransfer;
	int nextTransferAmount;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int off;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1041        value = {
	// 1042            Ljava/io/IOException;
	// 1043        }
	// 1044    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->checkStateForReceive();
	this->writeSide = java::lang::Thread::currentThread({const[class].FS-Param});
	bytesToTransfer = len;
	//    .local v0, "bytesToTransfer":I
label_cond_b:
label_goto_b:
	if ( bytesToTransfer <= 0 )
		goto label_cond_6f;
	if ( this->in != this->out )
		goto label_cond_16;
	this->awaitSpace();
label_cond_16:
	nextTransferAmount = 0x0;
	//    .local v1, "nextTransferAmount":I
	if ( this->out >= this->in )
		goto label_cond_36;
	nextTransferAmount = (this->buffer->size() - this->in);
label_cond_24:
label_goto_24:
	if ( nextTransferAmount <= bytesToTransfer )
		goto label_cond_27;
	nextTransferAmount = bytesToTransfer;
label_cond_27:
	if ( java::io::PipedInputStream::_assertionsDisabled )     
		goto label_cond_56;
	if ( nextTransferAmount > 0 ) 
		goto label_cond_56;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1121    :try_end_33
	// 1122    .catchall {:try_start_1 .. :try_end_33} :catchall_33
	// 1124    .end local v0    # "bytesToTransfer":I
	// 1125    .end local v1    # "nextTransferAmount":I
label_catchall_33:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 1133    .line 238
	// 1134    .restart local v0    # "bytesToTransfer":I
	// 1135    .restart local v1    # "nextTransferAmount":I
label_cond_36:
	try {
	//label_try_start_36:
	if ( this->in >= this->out )
		goto label_cond_24;
	if ( this->in != -0x1 )
		goto label_cond_4f;
	this->out = 0x0;
	this->in = 0x0;
	nextTransferAmount = (this->buffer->size() - this->in);
	goto label_goto_24;
	// 1171    .line 243
label_cond_4f:
	nextTransferAmount = (this->out - this->in);
	goto label_goto_24;
	// 1181    .line 249
label_cond_56:
	java::lang::System::arraycopy(b, off, this->buffer, this->in, nextTransferAmount);
	bytesToTransfer = (bytesToTransfer -  nextTransferAmount);
	off = (off +  nextTransferAmount);
	this->in = (this->in +  nextTransferAmount);
	if ( this->in <  this->buffer->size() )
		goto label_cond_b;
	this->in = 0x0;
	//label_try_end_6e:
	}
	catch (...){
		goto label_catchall_33;
	}
	//    .catchall {:try_start_36 .. :try_end_6e} :catchall_33
	goto label_goto_b;
	// 1220    .end local v1    # "nextTransferAmount":I
label_cond_6f:
	this->monitor_exit();
	return;

}
// .method declared-synchronized receivedLast()V
void java::io::PipedInputStream::receivedLast()
{
	
	this->monitor_enter();
	try {
	//label_try_start_2:
	this->closedByWriter = 0x1;
	this->notifyAll();
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_2 .. :try_end_7} :catchall_9
	this->monitor_exit();
	return;
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


