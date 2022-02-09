// CPP L:\smali2cpp20\x64\Release\out\java\io\PipedReader.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.PipedReader.h"
#include "java.io.PipedWriter.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.InterruptedException.h"
#include "java.lang.String.h"
#include "java.lang.Thread.h"
#include "libcore.io.IoUtils.h"

static java::io::PipedReader::DEFAULT_PIPE_SIZE = 0x400;
// .method public constructor <init>()V
java::io::PipedReader::PipedReader()
{
	
	bool cVar0;
	
	cVar0 = 0x0;
	// 036    invoke-direct {p0}, Ljava/io/Reader;-><init>()V
	this->closedByWriter = cVar0;
	this->closedByReader = cVar0;
	this->connected = cVar0;
	this->in = -0x1;
	this->out = cVar0;
	this->initPipe(0x400);
	return;

}
// .method public constructor <init>(I)V
java::io::PipedReader::PipedReader(int pipeSize)
{
	
	bool cVar0;
	
	//    .param p1, "pipeSize"    # I
	cVar0 = 0x0;
	// 072    invoke-direct {p0}, Ljava/io/Reader;-><init>()V
	this->closedByWriter = cVar0;
	this->closedByReader = cVar0;
	this->connected = cVar0;
	this->in = -0x1;
	this->out = cVar0;
	this->initPipe(pipeSize);
	return;

}
// .method public constructor <init>(Ljava/io/PipedWriter;)V
java::io::PipedReader::PipedReader(std::shared_ptr<java::io::PipedWriter> src)
{
	
	//    .param p1, "src"    # Ljava/io/PipedWriter;
	//    .annotation system Ldalvik/annotation/Throws;
	// 102        value = {
	// 103            Ljava/io/IOException;
	// 104        }
	// 105    .end annotation
	java::io::PipedReader::(src, 0x400);
	return;

}
// .method public constructor <init>(Ljava/io/PipedWriter;I)V
java::io::PipedReader::PipedReader(std::shared_ptr<java::io::PipedWriter> src,int pipeSize)
{
	
	bool cVar0;
	
	//    .param p1, "src"    # Ljava/io/PipedWriter;
	//    .param p2, "pipeSize"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 122        value = {
	// 123            Ljava/io/IOException;
	// 124        }
	// 125    .end annotation
	cVar0 = 0x0;
	// 131    invoke-direct {p0}, Ljava/io/Reader;-><init>()V
	this->closedByWriter = cVar0;
	this->closedByReader = cVar0;
	this->connected = cVar0;
	this->in = -0x1;
	this->out = cVar0;
	this->initPipe(pipeSize);
	this->connect(src);
	return;

}
// .method private initPipe(I)V
void java::io::PipedReader::initPipe(int pipeSize)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "pipeSize"    # I
	if ( pipeSize > 0 ) 
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe size <= 0")));
	// throw
	throw cVar0;
	// 177    .line 136
label_cond_b:
	this->buffer = std::make_shared<std::vector<char[]>>(pipeSize);
	return;

}
// .method public close()V
void java::io::PipedReader::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 192        value = {
	// 193            Ljava/io/IOException;
	// 194        }
	// 195    .end annotation
	this->in = -0x1;
	this->closedByReader = 0x1;
	return;

}
// .method public connect(Ljava/io/PipedWriter;)V
void java::io::PipedReader::connect(std::shared_ptr<java::io::PipedWriter> src)
{
	
	//    .param p1, "src"    # Ljava/io/PipedWriter;
	//    .annotation system Ldalvik/annotation/Throws;
	// 216        value = {
	// 217            Ljava/io/IOException;
	// 218        }
	// 219    .end annotation
	src->connect(this);
	return;

}
// .method public declared-synchronized read()I
int java::io::PipedReader::read()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	int trials;
	std::shared_ptr<java::io::IOException> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	int cVar4;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 232        value = {
	// 233            Ljava/io/IOException;
	// 234        }
	// 235    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_2:
	if ( this->connected )     
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe not connected")));
	// throw
	throw cVar0;
	// 256    :try_end_f
	// 257    .catchall {:try_start_2 .. :try_end_f} :catchall_f
label_catchall_f:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 266    .line 240
label_cond_12:
	try {
	//label_try_start_12:
	if ( !(this->closedByReader) )  
		goto label_cond_1f;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe closed")));
	// throw
	throw cVar1;
	// 282    .line 242
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
	// 320    .line 247
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
	// 350    .line 254
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
	// 380    .line 258
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
	// 397    .line 261
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
	// 408    .line 267
	// 409    .end local v0    # "ex":Ljava/lang/InterruptedException;
label_cond_7a:
	cVar4 = this->out;
	this->out = ( cVar4 + 0x1);
	//    .local v1, "ret":I
	if ( this->out <  this->buffer->size() )
		goto label_cond_8e;
	this->out = 0x0;
label_cond_8e:
	if ( this->in != this->out )
		goto label_cond_97;
	this->in = -0x1;
	//label_try_end_97:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_76 .. :try_end_97} :catchall_f
label_cond_97:
	this->monitor_exit();
	return this->buffer[cVar4];

}
// .method public declared-synchronized read([CII)I
int java::io::PipedReader::read(std::shared_ptr<char[]> cbuf,int off,int len)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar3;
	int c;
	int rlen;
	int len;
	int cVar5;
	
	//    .param p1, "cbuf"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 464        value = {
	// 465            Ljava/io/IOException;
	// 466        }
	// 467    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_3:
	if ( this->connected )     
		goto label_cond_13;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe not connected")));
	// throw
	throw cVar0;
	// 490    :try_end_10
	// 491    .catchall {:try_start_3 .. :try_end_10} :catchall_10
label_catchall_10:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 500    .line 299
label_cond_13:
	try {
	//label_try_start_13:
	if ( !(this->closedByReader) )  
		goto label_cond_20;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe closed")));
	// throw
	throw cVar1;
	// 516    .line 301
label_cond_20:
	if ( !(this->writeSide) )  
		goto label_cond_41;
	if ( !(( this->writeSide->isAlive() ^ 0x1)) )  
		goto label_cond_41;
	if ( !(( this->closedByWriter ^ 0x1)) )  
		goto label_cond_41;
	if ( this->in >= 0 )
		goto label_cond_41;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Write end dead")));
	// throw
	throw cVar2;
	// 554    .line 306
label_cond_41:
	if ( off < 0 ) 
		goto label_cond_46;
	if ( off <= cbuf->size() )
		goto label_cond_4c;
label_cond_46:
	cVar3 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar3;
	// 570    .line 306
label_cond_4c:
	if ( len < 0 ) 
		goto label_cond_46;
	//label_try_end_51:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_13 .. :try_end_51} :catchall_10
	if ( (off + len) >  cbuf->size() )
		goto label_cond_46;
	if ( (off + len) < 0 ) 
		goto label_cond_46;
	if ( len )     
		goto label_cond_5b;
	this->monitor_exit();
	return 0x0;
	// 595    .line 314
label_cond_5b:
	try {
	//label_try_start_5b:
	//label_try_end_5e:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_5b .. :try_end_5e} :catchall_10
	c = this->read();
	//    .local v0, "c":I
	if ( c >= 0 )
		goto label_cond_63;
	this->monitor_exit();
	return -0x1;
	// 613    .line 318
label_cond_63:
	try {
	//label_try_start_64:
	cbuf[off] = (char)(c);
	rlen = 0x1;
	//    .local v1, "rlen":I
label_cond_67:
label_goto_67:
	if ( this->in < 0 ) 
		goto label_cond_93;
	len = ( len + -0x1);
	if ( len <= 0 )
		goto label_cond_93;
	cVar5 = this->out;
	this->out = ( cVar5 + 0x1);
	cbuf[(off + rlen)] = this->buffer[cVar5];
	rlen = ( rlen + 0x1);
	if ( this->out <  this->buffer->size() )
		goto label_cond_89;
	this->out = 0x0;
label_cond_89:
	if ( this->in != this->out )
		goto label_cond_67;
	this->in = -0x1;
	//label_try_end_92:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_64 .. :try_end_92} :catchall_10
	goto label_goto_67;
label_cond_93:
	this->monitor_exit();
	return rlen;

}
// .method public declared-synchronized ready()Z
bool java::io::PipedReader::ready()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 694        value = {
	// 695            Ljava/io/IOException;
	// 696        }
	// 697    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_2:
	if ( this->connected )     
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe not connected")));
	// throw
	throw cVar0;
	// 718    :try_end_f
	// 719    .catchall {:try_start_2 .. :try_end_f} :catchall_f
label_catchall_f:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 728    .line 345
label_cond_12:
	try {
	//label_try_start_12:
	if ( !(this->closedByReader) )  
		goto label_cond_1f;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe closed")));
	// throw
	throw cVar1;
	// 744    .line 347
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
	// 782    .line 351
label_cond_40:
	//label_try_end_42:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_12 .. :try_end_42} :catchall_f
	if ( this->in >= 0 )
		goto label_cond_46;
	this->monitor_exit();
	return 0x0;
	// 795    .line 354
label_cond_46:
	this->monitor_exit();
	return 0x1;

}
// .method declared-synchronized receive(I)V
void java::io::PipedReader::receive(int c)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	int cVar4;
	
	//    .param p1, "c"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 808        value = {
	// 809            Ljava/io/IOException;
	// 810        }
	// 811    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->connected )     
		goto label_cond_11;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe not connected")));
	// throw
	throw cVar0;
	// 830    :try_end_e
	// 831    .catchall {:try_start_1 .. :try_end_e} :catchall_e
label_catchall_e:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 840    .line 173
label_cond_11:
	try {
	//label_try_start_11:
	if ( this->closedByWriter )     
		goto label_cond_19;
	if ( !(this->closedByReader) )  
		goto label_cond_22;
label_cond_19:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe closed")));
	// throw
	throw cVar1;
	// 861    .line 175
label_cond_22:
	if ( !(this->readSide) )  
		goto label_cond_39;
	if ( !(( this->readSide->isAlive() ^ 0x1)) )  
		goto label_cond_39;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Read end dead")));
	// throw
	throw cVar2;
	// 886    .line 179
label_cond_39:
	this->writeSide = java::lang::Thread::currentThread({const[class].FS-Param});
label_goto_3f:
	if ( this->in != this->out )
		goto label_cond_6a;
	if ( !(this->readSide) )  
		goto label_cond_5c;
	if ( !(( this->readSide->isAlive() ^ 0x1)) )  
		goto label_cond_5c;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pipe broken")));
	// throw
	throw cVar3;
	// 926    .line 185
label_cond_5c:
	this->notifyAll();
	//label_try_end_5f:
	}
	catch (...){
		goto label_catchall_e;
	}
	//    .catchall {:try_start_11 .. :try_end_5f} :catchall_e
	try {
	//label_try_start_61:
	this->wait(0x3e8);
	//label_try_end_64:
	}
	catch (java::lang::InterruptedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_65;
	}
	catch (...){
		goto label_catchall_e;
	}
	//    .catch Ljava/lang/InterruptedException; {:try_start_61 .. :try_end_64} :catch_65
	//    .catchall {:try_start_61 .. :try_end_64} :catchall_e
	goto label_goto_3f;
	// 943    .line 188
label_catch_65:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/InterruptedException;
	try {
	//label_try_start_66:
	// throw
	libcore::io::IoUtils::throwInterruptedIoException({const[class].FS-Param});
	goto label_goto_3f;
	// 954    .line 194
	// 955    .end local v0    # "ex":Ljava/lang/InterruptedException;
label_cond_6a:
	if ( this->in >= 0 )
		goto label_cond_74;
	this->in = 0x0;
	this->out = 0x0;
label_cond_74:
	cVar4 = this->in;
	this->in = ( cVar4 + 0x1);
	this->buffer[cVar4] = (char)(c);
	if ( this->in <  this->buffer->size() )
		goto label_cond_89;
	this->in = 0x0;
	//label_try_end_89:
	}
	catch (...){
		goto label_catchall_e;
	}
	//    .catchall {:try_start_66 .. :try_end_89} :catchall_e
label_cond_89:
	this->monitor_exit();
	return;

}
// .method declared-synchronized receive([CII)V
void java::io::PipedReader::receive(std::shared_ptr<char[]> c,int off,int len)
{
	
	int len;
	int off;
	
	//    .param p1, "c"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1014        value = {
	// 1015            Ljava/io/IOException;
	// 1016        }
	// 1017    .end annotation
	this->monitor_enter();
label_goto_1:
	len = ( len + -0x1);
	if ( len < 0 ) 
		goto label_cond_e;
	//    .end local p2    # "off":I
	//    .local v0, "off":I
	try {
	//label_try_start_7:
	this->receive(c[off]);
	//label_try_end_c:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_7 .. :try_end_c} :catchall_10
	off = ( off + 0x1);
	//    .end local v0    # "off":I
	//    .restart local p2    # "off":I
	goto label_goto_1;
label_cond_e:
	this->monitor_exit();
	return;
	// 1052    .end local p2    # "off":I
	// 1053    .restart local v0    # "off":I
label_catchall_10:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method declared-synchronized receivedLast()V
void java::io::PipedReader::receivedLast()
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


