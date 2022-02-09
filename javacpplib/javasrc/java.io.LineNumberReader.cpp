// CPP L:\smali2cpp20\x64\Release\out\java\io\LineNumberReader.smali
#include "java2ctype.h"
#include "java.io.BufferedReader.h"
#include "java.io.LineNumberReader.h"
#include "java.io.Reader.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static java::io::LineNumberReader::maxSkipBufferSize = 0x2000;
// .method public constructor <init>(Ljava/io/Reader;)V
java::io::LineNumberReader::LineNumberReader(std::shared_ptr<java::io::Reader> in)
{
	
	//    .param p1, "in"    # Ljava/io/Reader;
	java::io::BufferedReader::(in);
	this->lineNumber = 0x0;
	this->skipBuffer = 0x0;
	return;

}
// .method public constructor <init>(Ljava/io/Reader;I)V
java::io::LineNumberReader::LineNumberReader(std::shared_ptr<java::io::Reader> in,int sz)
{
	
	//    .param p1, "in"    # Ljava/io/Reader;
	//    .param p2, "sz"    # I
	java::io::BufferedReader::(in, sz);
	this->lineNumber = 0x0;
	this->skipBuffer = 0x0;
	return;

}
// .method public getLineNumber()I
int java::io::LineNumberReader::getLineNumber()
{
	
	return this->lineNumber;

}
// .method public mark(I)V
void java::io::LineNumberReader::mark(int readAheadLimit)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "readAheadLimit"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 084        value = {
	// 085            Ljava/io/IOException;
	// 086        }
	// 087    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->mark(readAheadLimit);
	this->markedLineNumber = this->lineNumber;
	this->markedSkipLF = this->skipLF;
	//label_try_end_e:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_3 .. :try_end_e} :catchall_10
	cVar0->monitor_exit();
	return;
	// 116    .line 261
label_catchall_10:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public read()I
int java::io::LineNumberReader::read()
{
	
	int cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	int c;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 128        value = {
	// 129            Ljava/io/IOException;
	// 130        }
	// 131    .end annotation
	cVar0 = 0xa;
	cVar1 = this->lock;
	cVar1->monitor_enter();
	try {
	//label_try_start_5:
	c = this->read();
	//    .local v0, "c":I
	if ( !(this->skipLF) )  
		goto label_cond_16;
	if ( c != cVar0 )
		goto label_cond_13;
	c = this->read();
label_cond_13:
	this->skipLF = 0x0;
	//label_try_end_16:
	}
	catch (...){
		goto label_catchall_26;
	}
	//    .catchall {:try_start_5 .. :try_end_16} :catchall_26
label_cond_16:
	// switch
	{
	auto item = ( c );
	if (item == 10) goto label_pswitch_1e;
	if (item == 11) goto label_pswitch_19;
	if (item == 12) goto label_pswitch_19;
	if (item == 13) goto label_pswitch_1b;
	}
label_pswitch_19:
	cVar1->monitor_exit();
	return c;
	// 179    .line 134
label_pswitch_1b:
	try {
	//label_try_start_1c:
	this->skipLF = 0x1;
label_pswitch_1e:
	this->lineNumber = ( this->lineNumber + 0x1);
	//label_try_end_24:
	}
	catch (...){
		goto label_catchall_26;
	}
	//    .catchall {:try_start_1c .. :try_end_24} :catchall_26
	cVar1->monitor_exit();
	return cVar0;
	// 201    .line 125
	// 202    .end local v0    # "c":I
label_catchall_26:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;
	// 210    .line 132
	// 211    nop
	// 213    :pswitch_data_2a
	// 214    .packed-switch 0xa
	// 215        :pswitch_1e
	// 216        :pswitch_19
	// 217        :pswitch_19
	// 218        :pswitch_1b
	// 219    .end packed-switch

}
// .method public read([CII)I
int java::io::LineNumberReader::read(std::shared_ptr<char[]> cbuf,int off,int len)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	int n;
	int i;
	char c;
	
	//    .param p1, "cbuf"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 228        value = {
	// 229            Ljava/io/IOException;
	// 230        }
	// 231    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	n = this->read(cbuf, off, len);
	//    .local v2, "n":I
	i = off;
	//    .local v1, "i":I
label_goto_8:
	if ( i >= (off + n) )
		goto label_cond_2e;
	c = cbuf[i];
	//    .local v0, "c":I
	if ( !(this->skipLF) )  
		goto label_cond_1c;
	this->skipLF = 0x0;
	if ( c != 0xa )
		goto label_cond_1c;
label_goto_19:
	i = ( i + 0x1);
	goto label_goto_8;
	// 280    .line 175
label_cond_1c:
	// switch
	{
	auto item = ( c );
	if (item == 10) goto label_pswitch_20;
	if (item == 11) goto label_pswitch_1f;
	if (item == 12) goto label_pswitch_1f;
	if (item == 13) goto label_pswitch_2a;
	}
label_pswitch_1f:
	goto label_goto_19;
	// 287    .line 179
label_goto_20:
label_pswitch_20:
	this->lineNumber = ( this->lineNumber + 0x1);
	//label_try_end_26:
	}
	catch (...){
		goto label_catchall_27;
	}
	//    .catchall {:try_start_3 .. :try_end_26} :catchall_27
	goto label_goto_19;
	// 300    .line 165
	// 301    .end local v0    # "c":I
	// 302    .end local v1    # "i":I
	// 303    .end local v2    # "n":I
label_catchall_27:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 311    .line 177
	// 312    .restart local v0    # "c":I
	// 313    .restart local v1    # "i":I
	// 314    .restart local v2    # "n":I
label_pswitch_2a:
	try {
	//label_try_start_2b:
	this->skipLF = 0x1;
	//label_try_end_2d:
	}
	catch (...){
		goto label_catchall_27;
	}
	//    .catchall {:try_start_2b .. :try_end_2d} :catchall_27
	goto label_goto_20;
	// 325    .end local v0    # "c":I
label_cond_2e:
	cVar0->monitor_exit();
	return n;
	// 332    .line 175
	// 333    :pswitch_data_30
	// 334    .packed-switch 0xa
	// 335        :pswitch_20
	// 336        :pswitch_1f
	// 337        :pswitch_1f
	// 338        :pswitch_2a
	// 339    .end packed-switch

}
// .method public readLine()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::LineNumberReader::readLine()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::String> l;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 345        value = {
	// 346            Ljava/io/IOException;
	// 347        }
	// 348    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	l = this->readLine(this->skipLF);
	//    .local v0, "l":Ljava/lang/String;
	this->skipLF = 0x0;
	if ( !(l) )  
		goto label_cond_14;
	this->lineNumber = ( this->lineNumber + 0x1);
	//label_try_end_14:
	}
	catch (...){
		goto label_catchall_16;
	}
	//    .catchall {:try_start_3 .. :try_end_14} :catchall_16
label_cond_14:
	cVar0->monitor_exit();
	return l;
	// 388    .line 200
	// 389    .end local v0    # "l":Ljava/lang/String;
label_catchall_16:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public reset()V
void java::io::LineNumberReader::reset()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 401        value = {
	// 402            Ljava/io/IOException;
	// 403        }
	// 404    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->reset();
	this->lineNumber = this->markedLineNumber;
	this->skipLF = this->markedSkipLF;
	//label_try_end_e:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_3 .. :try_end_e} :catchall_10
	cVar0->monitor_exit();
	return;
	// 433    .line 276
label_catchall_10:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public setLineNumber(I)V
void java::io::LineNumberReader::setLineNumber(int lineNumber)
{
	
	//    .param p1, "lineNumber"    # I
	this->lineNumber = lineNumber;
	return;

}
// .method public skip(J)J
long long java::io::LineNumberReader::skip(long long n)
{
	
	long long cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int nn;
	std::shared_ptr<java::lang::Object> cVar2;
	long long r;
	int nc;
	
	//    .param p1, "n"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 458        value = {
	// 459            Ljava/io/IOException;
	// 460        }
	// 461    .end annotation
	cVar0 = 0x0;
	if ( (n > cVar0) >= 0 )
		goto label_cond_f;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("skip() value is negative")));
	// throw
	throw cVar1;
	// 480    .line 232
label_cond_f:
	nn = (int)(java::lang::Math::min(n, 0x2000));
	//    .local v1, "nn":I
	cVar2 = this->lock;
	cVar2->monitor_enter();
	try {
	//label_try_start_19:
	if ( !(this->skipBuffer) )  
		goto label_cond_22;
	if ( this->skipBuffer->size() >= nn )
		goto label_cond_26;
label_cond_22:
	this->skipBuffer = std::make_shared<std::vector<char[]>>(nn);
label_cond_26:
	r = n;
	//    .local v2, "r":J
label_goto_27:
	if ( (r > cVar0) <= 0 )
		goto label_cond_3b;
	//label_try_end_37:
	}
	catch (...){
		goto label_catchall_42;
	}
	//    .catchall {:try_start_19 .. :try_end_37} :catchall_42
	nc = this->read(this->skipBuffer, 0x0, (int)(java::lang::Math::min(r, (long long)(nn))));
	//    .local v0, "nc":I
	if ( nc != -0x1 )
		goto label_cond_3f;
	//    .end local v0    # "nc":I
label_cond_3b:
	cVar2->monitor_exit();
	return (n - r);
	// 559    .line 241
	// 560    .restart local v0    # "nc":I
label_cond_3f:
	r = (r -  (long long)(nc));
	goto label_goto_27;
	// 568    .line 233
	// 569    .end local v0    # "nc":I
	// 570    .end local v2    # "r":J
label_catchall_42:
	// move-exception
	
	cVar2->monitor_exit();
	// throw
	throw;

}


