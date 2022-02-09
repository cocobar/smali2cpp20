// CPP L:\smali2cpp20\x64\Release\out\java\io\Writer.smali
#include "java2ctype.h"
#include "java.io.Writer.h"
#include "java.lang.CharSequence.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static java::io::Writer::WRITE_BUFFER_SIZE = 0x400;
// .method protected constructor <init>()V
java::io::Writer::Writer()
{
	
	// 027    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->lock = this;
	return;

}
// .method protected constructor <init>(Ljava/lang/Object;)V
java::io::Writer::Writer(std::shared_ptr<java::lang::Object> lock)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "lock"    # Ljava/lang/Object;
	// 042    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( lock )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 054    .line 90
label_cond_b:
	this->lock = lock;
	return;

}
// .method public append(C)Ljava/io/Writer;
std::shared_ptr<java::io::Writer> java::io::Writer::append(char c)
{
	
	//    .param p1, "c"    # C
	//    .annotation system Ldalvik/annotation/Throws;
	// 068        value = {
	// 069            Ljava/io/IOException;
	// 070        }
	// 071    .end annotation
	this->write(c);
	return this;

}
// .method public append(Ljava/lang/CharSequence;)Ljava/io/Writer;
std::shared_ptr<java::io::Writer> java::io::Writer::append(std::shared_ptr<java::lang::CharSequence> csq)
{
	
	//    .param p1, "csq"    # Ljava/lang/CharSequence;
	//    .annotation system Ldalvik/annotation/Throws;
	// 085        value = {
	// 086            Ljava/io/IOException;
	// 087        }
	// 088    .end annotation
	if ( csq )     
		goto label_cond_9;
	this->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("null")));
label_goto_8:
	return this;
	// 103    .line 227
label_cond_9:
	this->write(csq->toString());
	goto label_goto_8;

}
// .method public append(Ljava/lang/CharSequence;II)Ljava/io/Writer;
std::shared_ptr<java::io::Writer> java::io::Writer::append(std::shared_ptr<java::lang::CharSequence> csq,int start,int end)
{
	
	//    .param p1, "csq"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "end"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 120        value = {
	// 121            Ljava/io/IOException;
	// 122        }
	// 123    .end annotation
	if ( csq )     
		goto label_cond_11;
	//    .local v0, "cs":Ljava/lang/CharSequence;
label_goto_5:
	this->write(cs->subSequence(start, end)->toString());
	return this;
	// 147    .line 268
	// 148    .end local v0    # "cs":Ljava/lang/CharSequence;
label_cond_11:
	//    .restart local v0    # "cs":Ljava/lang/CharSequence;
	goto label_goto_5;

}
// .method public abstract close()V
void java::io::Writer::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 209        value = {
	// 210            Ljava/io/IOException;
	// 211        }
	// 212    .end annotation

}
// .method public abstract flush()V
void java::io::Writer::flush()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 217        value = {
	// 218            Ljava/io/IOException;
	// 219        }
	// 220    .end annotation

}
// .method public write(I)V
void java::io::Writer::write(int c)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "c"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 227        value = {
	// 228            Ljava/io/IOException;
	// 229        }
	// 230    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	if ( this->writeBuffer )     
		goto label_cond_d;
	this->writeBuffer = std::make_shared<std::vector<char[]>>(0x400);
label_cond_d:
	this->writeBuffer[0x0] = (char)(c);
	this->write(this->writeBuffer, 0x0, 0x1);
	//label_try_end_1a:
	}
	catch (...){
		goto label_catchall_1c;
	}
	//    .catchall {:try_start_3 .. :try_end_1a} :catchall_1c
	cVar0->monitor_exit();
	return;
	// 277    .line 108
label_catchall_1c:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public write(Ljava/lang/String;)V
void java::io::Writer::write(std::shared_ptr<java::lang::String> str)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 290        value = {
	// 291            Ljava/io/IOException;
	// 292        }
	// 293    .end annotation
	this->write(str, 0x0, str->length());
	return;

}
// .method public write(Ljava/lang/String;II)V
void java::io::Writer::write(std::shared_ptr<java::lang::String> str,int off,int len)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<char[]> cbuf;
	std::shared<std::vector<char[]>> cbuf;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 315        value = {
	// 316            Ljava/io/IOException;
	// 317        }
	// 318    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	if ( len >  0x400 )
		goto label_cond_1f;
	try {
	//label_try_start_7:
	if ( this->writeBuffer )     
		goto label_cond_11;
	this->writeBuffer = std::make_shared<std::vector<char[]>>(0x400);
label_cond_11:
	cbuf = this->writeBuffer;
	//    .local v0, "cbuf":[C
label_goto_13:
	str->getChars(off, (off + len), cbuf, 0x0);
	this->write(cbuf, 0x0, len);
	//label_try_end_1d:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_7 .. :try_end_1d} :catchall_22
	cVar0->monitor_exit();
	return;
	// 369    .line 189
	// 370    .end local v0    # "cbuf":[C
label_cond_1f:
	try {
	//label_try_start_1f:
	cbuf = std::make_shared<std::vector<char[]>>(len);
	//label_try_end_21:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_1f .. :try_end_21} :catchall_22
	//    .restart local v0    # "cbuf":[C
	goto label_goto_13;
	// 380    .line 181
	// 381    .end local v0    # "cbuf":[C
label_catchall_22:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public write([C)V
void java::io::Writer::write(std::shared_ptr<char[]> cbuf)
{
	
	//    .param p1, "cbuf"    # [C
	//    .annotation system Ldalvik/annotation/Throws;
	// 394        value = {
	// 395            Ljava/io/IOException;
	// 396        }
	// 397    .end annotation
	this->write(cbuf, 0x0, cbuf->size());
	return;

}
// .method public abstract write([CII)V
void java::io::Writer::write(std::shared_ptr<char[]> var0,int var1,int var2)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 413        value = {
	// 414            Ljava/io/IOException;
	// 415        }
	// 416    .end annotation

}


