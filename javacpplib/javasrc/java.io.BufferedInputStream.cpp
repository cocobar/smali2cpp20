// CPP L:\smali2cpp20\x64\Release\out\java\io\BufferedInputStream.smali
#include "java2ctype.h"
#include "java.io.BufferedInputStream.h"
#include "java.io.FilterInputStream.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Object.h"
#include "java.lang.OutOfMemoryError.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.concurrent.atomic.AtomicReferenceFieldUpdater.h"

static java::io::BufferedInputStream::DEFAULT_BUFFER_SIZE = 0x2000;
static java::io::BufferedInputStream::MAX_BUFFER_SIZE = 0x7ffffff7;
static java::io::BufferedInputStream::bufUpdater;
// .method static constructor <clinit>()V
void java::io::BufferedInputStream::static_cinit()
{
	
	java::io::BufferedInputStream::bufUpdater = java::util::concurrent::atomic::AtomicReferenceFieldUpdater::newUpdater(java::io::BufferedInputStream(), unsigned char[](), std::make_shared<java::lang::String>(std::make_shared<char[]>("buf")));
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;)V
java::io::BufferedInputStream::BufferedInputStream(std::shared_ptr<java::io::InputStream> in)
{
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	java::io::BufferedInputStream::(in, 0x2000);
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;I)V
java::io::BufferedInputStream::BufferedInputStream(std::shared_ptr<java::io::InputStream> in,int size)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .param p2, "size"    # I
	java::io::FilterInputStream::(in);
	this->markpos = -0x1;
	if ( size > 0 ) 
		goto label_cond_11;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Buffer size <= 0")));
	// throw
	throw cVar0;
	// 099    .line 205
label_cond_11:
	this->buf = std::make_shared<std::vector<unsigned char[]>>(size);
	return;

}
// .method private fill()V
void java::io::BufferedInputStream::fill()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<unsigned char[]> buffer;
	int n;
	int sz;
	std::shared_ptr<java::lang::OutOfMemoryError> cVar2;
	int nsz;
	std::shared<std::vector<unsigned char[]>> nbuf;
	std::shared_ptr<java::io::IOException> cVar3;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 112        value = {
	// 113            Ljava/io/IOException;
	// 114        }
	// 115    .end annotation
	cVar0 = 0x7ffffff7;
	cVar1 = 0x0;
	buffer = this->getBufIfOpen();
	//    .local v0, "buffer":[B
	if ( this->markpos >= 0 )
		goto label_cond_28;
	this->pos = cVar1;
label_cond_e:
label_goto_e:
	this->count = this->pos;
	n = this->getInIfOpen()->read(buffer, this->pos, (buffer->size() -  this->pos));
	//    .local v1, "n":I
	if ( n <= 0 )
		goto label_cond_27;
	this->count = (this->pos +  n);
label_cond_27:
	return;
	// 175    .line 219
	// 176    .end local v1    # "n":I
label_cond_28:
	if ( this->pos <  buffer->size() )
		goto label_cond_e;
	if ( this->markpos <= 0 )
		goto label_cond_41;
	sz = (this->pos - this->markpos);
	//    .local v4, "sz":I
	java::lang::System::arraycopy(buffer, this->markpos, buffer, cVar1, sz);
	this->pos = sz;
	this->markpos = cVar1;
	goto label_goto_e;
	// 210    .line 225
	// 211    .end local v4    # "sz":I
label_cond_41:
	if ( buffer->size() <  this->marklimit )
		goto label_cond_4c;
	this->markpos = -0x1;
	this->pos = cVar1;
	goto label_goto_e;
	// 229    .line 228
label_cond_4c:
	if ( buffer->size() <  cVar0 )
		goto label_cond_58;
	cVar2 = std::make_shared<java::lang::OutOfMemoryError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Required array size too large")));
	// throw
	throw cVar2;
	// 244    .line 231
label_cond_58:
	if ( this->pos >  (cVar0 - this->pos) )
		goto label_cond_82;
	nsz = ( this->pos * 0x2);
	//    .local v3, "nsz":I
label_goto_64:
	if ( nsz <= this->marklimit )
		goto label_cond_6a;
label_cond_6a:
	nbuf = std::make_shared<std::vector<unsigned char[]>>(nsz);
	//    .local v2, "nbuf":[B
	java::lang::System::arraycopy(buffer, cVar1, nbuf, cVar1, this->pos);
	if ( java::io::BufferedInputStream::bufUpdater->compareAndSet(this, buffer, nbuf) )     
		goto label_cond_86;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream closed")));
	// throw
	throw cVar3;
	// 297    .line 232
	// 298    .end local v2    # "nbuf":[B
	// 299    .end local v3    # "nsz":I
label_cond_82:
	nsz = 0x7ffffff7;
	//    .restart local v3    # "nsz":I
	goto label_goto_64;
	// 306    .line 245
	// 307    .restart local v2    # "nbuf":[B
label_cond_86:
	buffer = nbuf;
	goto label_goto_e;

}
// .method private getBufIfOpen()[B
unsigned char java::io::BufferedInputStream::getBufIfOpen()
{
	
	std::shared_ptr<unsigned char[]> buffer;
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 317        value = {
	// 318            Ljava/io/IOException;
	// 319        }
	// 320    .end annotation
	buffer = this->buf;
	//    .local v0, "buffer":[B
	if ( buffer )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream closed")));
	// throw
	throw cVar0;
	// 339    .line 173
label_cond_d:
	return buffer;

}
// .method private getInIfOpen()Ljava/io/InputStream;
std::shared_ptr<java::io::InputStream> java::io::BufferedInputStream::getInIfOpen()
{
	
	std::shared_ptr<java::io::InputStream> input;
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 347        value = {
	// 348            Ljava/io/IOException;
	// 349        }
	// 350    .end annotation
	input = this->in;
	//    .local v0, "input":Ljava/io/InputStream;
	if ( input )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream closed")));
	// throw
	throw cVar0;
	// 369    .line 162
label_cond_d:
	return input;

}
// .method private read1([BII)I
int java::io::BufferedInputStream::read1(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	int avail;
	int cnt;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 380        value = {
	// 381            Ljava/io/IOException;
	// 382        }
	// 383    .end annotation
	avail = (this->count - this->pos);
	//    .local v0, "avail":I
	if ( avail > 0 ) 
		goto label_cond_29;
	if ( len <  this->getBufIfOpen()->size() )
		goto label_cond_1c;
	if ( this->markpos >= 0 )
		goto label_cond_1c;
	return this->getInIfOpen()->read(b, off, len);
	// 421    .line 288
label_cond_1c:
	this->fill();
	avail = (this->count - this->pos);
	if ( avail > 0 ) 
		goto label_cond_29;
	return -0x1;
	// 439    .line 292
label_cond_29:
	if ( avail >= len )
		goto label_cond_3b;
	cnt = avail;
	//    .local v1, "cnt":I
label_goto_2c:
	java::lang::System::arraycopy(this->getBufIfOpen(), this->pos, b, off, cnt);
	this->pos = (this->pos +  cnt);
	return cnt;
	// 466    .line 292
	// 467    .end local v1    # "cnt":I
label_cond_3b:
	cnt = len;
	//    .restart local v1    # "cnt":I
	goto label_goto_2c;

}
// .method public declared-synchronized available()I
int java::io::BufferedInputStream::available()
{
	
	int cVar0;
	int n;
	int avail;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 480        value = {
	// 481            Ljava/io/IOException;
	// 482        }
	// 483    .end annotation
	cVar0 = 0x7fffffff;
	this->monitor_enter();
	try {
	//label_try_start_4:
	n = (this->count - this->pos);
	//    .local v1, "n":I
	//label_try_end_11:
	}
	catch (...){
		goto label_catchall_1b;
	}
	//    .catchall {:try_start_4 .. :try_end_11} :catchall_1b
	avail = this->getInIfOpen()->available();
	//    .local v0, "avail":I
	if ( n <= (cVar0 - avail) )
		goto label_cond_18;
label_goto_16:
	this->monitor_exit();
	return cVar0;
	// 521    .line 415
label_cond_18:
	cVar0 = (n + avail);
	goto label_goto_16;
	// 527    .end local v0    # "avail":I
	// 528    .end local v1    # "n":I
label_catchall_1b:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public close()V
void java::io::BufferedInputStream::close()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<unsigned char[]> buffer;
	std::shared_ptr<java::io::InputStream> input;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 540        value = {
	// 541            Ljava/io/IOException;
	// 542        }
	// 543    .end annotation
	cVar0 = 0x0;
label_cond_1:
	buffer = this->buf;
	//    .local v0, "buffer":[B
	if ( !(buffer) )  
		goto label_cond_17;
	if ( !(java::io::BufferedInputStream::bufUpdater->compareAndSet(this, buffer, cVar0)) )  
		goto label_cond_1;
	input = this->in;
	//    .local v1, "input":Ljava/io/InputStream;
	this->in = cVar0;
	if ( !(input) )  
		goto label_cond_16;
	input->close();
label_cond_16:
	return;
	// 581    .line 490
	// 582    .end local v1    # "input":Ljava/io/InputStream;
label_cond_17:
	return;

}
// .method public declared-synchronized mark(I)V
void java::io::BufferedInputStream::mark(int readlimit)
{
	
	//    .param p1, "readlimit"    # I
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->marklimit = readlimit;
	this->markpos = this->pos;
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_1 .. :try_end_7} :catchall_9
	this->monitor_exit();
	return;
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public markSupported()Z
bool java::io::BufferedInputStream::markSupported()
{
	
	return 0x1;

}
// .method public declared-synchronized read()I
int java::io::BufferedInputStream::read()
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 631        value = {
	// 632            Ljava/io/IOException;
	// 633        }
	// 634    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->pos <  this->count )
		goto label_cond_13;
	this->fill();
	//label_try_end_e:
	}
	catch (...){
		goto label_catchall_23;
	}
	//    .catchall {:try_start_1 .. :try_end_e} :catchall_23
	if ( this->pos <  this->count )
		goto label_cond_13;
	this->monitor_exit();
	return -0x1;
	// 666    .line 271
label_cond_13:
	try {
	//label_try_start_13:
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	//label_try_end_1f:
	}
	catch (...){
		goto label_catchall_23;
	}
	//    .catchall {:try_start_13 .. :try_end_1f} :catchall_23
	this->monitor_exit();
	return ( this->getBufIfOpen()[cVar0] & 0xff);
label_catchall_23:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized read([BII)I
int java::io::BufferedInputStream::read(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	int n;
	int nread;
	std::shared_ptr<java::io::InputStream> input;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 703        value = {
	// 704            Ljava/io/IOException;
	// 705        }
	// 706    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_2:
	this->getBufIfOpen();
	if ( (((off | len) |  (off + len)) |  (b->size() -  (off + len))) >= 0 )
		goto label_cond_1a;
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 740    :try_end_17
	// 741    .catchall {:try_start_2 .. :try_end_17} :catchall_17
label_catchall_17:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 750    .line 341
label_cond_1a:
	if ( len )     
		goto label_cond_1e;
	this->monitor_exit();
	return 0x0;
	// 759    .line 345
label_cond_1e:
	n = 0x0;
	//    .local v1, "n":I
label_cond_1f:
	try {
	//label_try_start_23:
	//label_try_end_26:
	}
	catch (...){
		goto label_catchall_17;
	}
	//    .catchall {:try_start_23 .. :try_end_26} :catchall_17
	nread = this->read1(b, (off + n), (len - n));
	//    .local v2, "nread":I
	if ( nread > 0 ) 
		goto label_cond_2f;
	if ( n )     
		goto label_cond_2d;
	//    .end local v2    # "nread":I
label_goto_2b:
	this->monitor_exit();
	return nread;
	// 790    .restart local v2    # "nread":I
label_cond_2d:
	nread = n;
	goto label_goto_2b;
	// 796    .line 350
label_cond_2f:
	n = (n +  nread);
	if ( n <  len )
		goto label_cond_34;
	this->monitor_exit();
	return n;
	// 808    .line 354
label_cond_34:
	try {
	//label_try_start_34:
	input = this->in;
	//    .local v0, "input":Ljava/io/InputStream;
	if ( !(input) )  
		goto label_cond_1f;
	//label_try_end_3b:
	}
	catch (...){
		goto label_catchall_17;
	}
	//    .catchall {:try_start_34 .. :try_end_3b} :catchall_17
	if ( input->available() > 0 ) 
		goto label_cond_1f;
	this->monitor_exit();
	return n;

}
// .method public declared-synchronized reset()V
void java::io::BufferedInputStream::reset()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 834        value = {
	// 835            Ljava/io/IOException;
	// 836        }
	// 837    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->getBufIfOpen();
	if ( this->markpos >= 0 )
		goto label_cond_14;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Resetting to invalid mark")));
	// throw
	throw cVar0;
	// 859    :try_end_11
	// 860    .catchall {:try_start_1 .. :try_end_11} :catchall_11
label_catchall_11:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 869    .line 451
label_cond_14:
	try {
	//label_try_start_14:
	this->pos = this->markpos;
	//label_try_end_18:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_14 .. :try_end_18} :catchall_11
	this->monitor_exit();
	return;

}
// .method public declared-synchronized skip(J)J
long long java::io::BufferedInputStream::skip(long long n)
{
	
	long long cVar0;
	long long avail;
	long long skipped;
	
	//    .param p1, "n"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 888        value = {
	// 889            Ljava/io/IOException;
	// 890        }
	// 891    .end annotation
	cVar0 = 0x0;
	this->monitor_enter();
	try {
	//label_try_start_3:
	this->getBufIfOpen();
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_43;
	}
	//    .catchall {:try_start_3 .. :try_end_6} :catchall_43
	if ( (n > cVar0) > 0 ) 
		goto label_cond_c;
	this->monitor_exit();
	return cVar0;
	// 914    .line 374
label_cond_c:
	try {
	//label_try_start_c:
	avail = (long long)((this->count -  this->pos));
	//    .local v0, "avail":J
	if ( (avail > cVar0) > 0 ) 
		goto label_cond_33;
	if ( this->markpos >= 0 )
		goto label_cond_24;
	//label_try_end_21:
	}
	catch (...){
		goto label_catchall_43;
	}
	//    .catchall {:try_start_c .. :try_end_21} :catchall_43
	this->monitor_exit();
	return this->getInIfOpen()->skip(n);
	// 951    .line 382
label_cond_24:
	try {
	//label_try_start_24:
	this->fill();
	//label_try_end_2b:
	}
	catch (...){
		goto label_catchall_43;
	}
	//    .catchall {:try_start_24 .. :try_end_2b} :catchall_43
	avail = (long long)((this->count -  this->pos));
	if ( (avail > cVar0) > 0 ) 
		goto label_cond_33;
	this->monitor_exit();
	return cVar0;
	// 977    .line 388
label_cond_33:
	if ( (avail > n) >= 0 )
		goto label_cond_41;
	skipped = avail;
	//    .local v2, "skipped":J
label_goto_38:
	try {
	//label_try_start_38:
	this->pos = (int)(((long long)(this->pos) +  skipped));
	//label_try_end_3f:
	}
	catch (...){
		goto label_catchall_43;
	}
	//    .catchall {:try_start_38 .. :try_end_3f} :catchall_43
	this->monitor_exit();
	return skipped;
	// 1006    .line 388
	// 1007    .end local v2    # "skipped":J
label_cond_41:
	skipped = n;
	//    .restart local v2    # "skipped":J
	goto label_goto_38;
	// 1014    .end local v0    # "avail":J
	// 1015    .end local v2    # "skipped":J
label_catchall_43:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


