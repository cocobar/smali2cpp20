// CPP L:\smali2cpp20\x64\Release\out\java\io\Reader.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.Reader.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Math.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.CharBuffer.h"

static java::io::Reader::maxSkipBufferSize = 0x2000;
// .method protected constructor <init>()V
java::io::Reader::Reader()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->skipBuffer = 0x0;
	this->lock = this;
	return;

}
// .method protected constructor <init>(Ljava/lang/Object;)V
java::io::Reader::Reader(std::shared_ptr<java::lang::Object> lock)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "lock"    # Ljava/lang/Object;
	// 048    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->skipBuffer = 0x0;
	if ( lock )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 063    .line 80
label_cond_e:
	this->lock = lock;
	return;

}
// .method public abstract close()V
void java::io::Reader::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 075        value = {
	// 076            Ljava/io/IOException;
	// 077        }
	// 078    .end annotation

}
// .method public mark(I)V
void java::io::Reader::mark(int readAheadLimit)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "readAheadLimit"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 085        value = {
	// 086            Ljava/io/IOException;
	// 087        }
	// 088    .end annotation
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("mark() not supported")));
	// throw
	throw cVar0;

}
// .method public markSupported()Z
bool java::io::Reader::markSupported()
{
	
	return 0x0;

}
// .method public read()I
int java::io::Reader::read()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared<std::vector<char[]>> cb;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 114        value = {
	// 115            Ljava/io/IOException;
	// 116        }
	// 117    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = -0x1;
	cb = std::make_shared<std::vector<char[]>>(cVar0);
	//    .local v0, "cb":[C
	if ( this->read(cb, cVar1, cVar0) != cVar2 )
		goto label_cond_c;
	return cVar2;
	// 140    .line 124
label_cond_c:
	return cb[cVar1];

}
// .method public read(Ljava/nio/CharBuffer;)I
int java::io::Reader::read(std::shared_ptr<java::nio::CharBuffer> target)
{
	
	int cVar0;
	int len;
	std::shared<std::vector<char[]>> cbuf;
	int n;
	
	//    .param p1, "target"    # Ljava/nio/CharBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 151        value = {
	// 152            Ljava/io/IOException;
	// 153        }
	// 154    .end annotation
	cVar0 = 0x0;
	len = target->remaining();
	//    .local v1, "len":I
	cbuf = std::make_shared<std::vector<char[]>>(len);
	//    .local v0, "cbuf":[C
	n = this->read(cbuf, cVar0, len);
	//    .local v2, "n":I
	if ( n <= 0 )
		goto label_cond_10;
	target->put(cbuf, cVar0, n);
label_cond_10:
	return n;

}
// .method public read([C)I
int java::io::Reader::read(std::shared_ptr<char[]> cbuf)
{
	
	//    .param p1, "cbuf"    # [C
	//    .annotation system Ldalvik/annotation/Throws;
	// 190        value = {
	// 191            Ljava/io/IOException;
	// 192        }
	// 193    .end annotation
	return this->read(cbuf, 0x0, cbuf->size());

}
// .method public abstract read([CII)I
int java::io::Reader::read(std::shared_ptr<char[]> var0,int var1,int var2)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 210        value = {
	// 211            Ljava/io/IOException;
	// 212        }
	// 213    .end annotation

}
// .method public ready()Z
bool java::io::Reader::ready()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 219        value = {
	// 220            Ljava/io/IOException;
	// 221        }
	// 222    .end annotation
	return 0x0;

}
// .method public reset()V
void java::io::Reader::reset()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 234        value = {
	// 235            Ljava/io/IOException;
	// 236        }
	// 237    .end annotation
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("reset() not supported")));
	// throw
	throw cVar0;

}
// .method public skip(J)J
long long java::io::Reader::skip(long long n)
{
	
	long long cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int nn;
	std::shared_ptr<java::lang::Object> cVar2;
	long long r;
	int nc;
	
	//    .param p1, "n"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 254        value = {
	// 255            Ljava/io/IOException;
	// 256        }
	// 257    .end annotation
	cVar0 = 0x0;
	if ( (n > cVar0) >= 0 )
		goto label_cond_f;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("skip value is negative")));
	// throw
	throw cVar1;
	// 276    .line 179
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
	// 355    .line 188
	// 356    .restart local v0    # "nc":I
label_cond_3f:
	r = (r -  (long long)(nc));
	goto label_goto_27;
	// 364    .line 180
	// 365    .end local v0    # "nc":I
	// 366    .end local v2    # "r":J
label_catchall_42:
	// move-exception
	
	cVar2->monitor_exit();
	// throw
	throw;

}


