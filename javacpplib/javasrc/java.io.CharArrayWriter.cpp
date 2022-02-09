// CPP L:\smali2cpp20\x64\Release\out\java\io\CharArrayWriter.smali
#include "java2ctype.h"
#include "java.io.CharArrayWriter.h"
#include "java.io.Writer.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.Arrays.h"

// .method public constructor <init>()V
java::io::CharArrayWriter::CharArrayWriter()
{
	
	java::io::CharArrayWriter::(0x20);
	return;

}
// .method public constructor <init>(I)V
java::io::CharArrayWriter::CharArrayWriter(int initialSize)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "initialSize"    # I
	// 032    invoke-direct {p0}, Ljava/io/Writer;-><init>()V
	if ( initialSize >= 0 )
		goto label_cond_1f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Negative initial size: ")))->append(initialSize)->toString());
	// throw
	throw cVar0;
	// 062    .line 72
label_cond_1f:
	this->buf = std::make_shared<std::vector<char[]>>(initialSize);
	return;

}
// .method public append(C)Ljava/io/CharArrayWriter;
std::shared_ptr<java::io::CharArrayWriter> java::io::CharArrayWriter::append(char c)
{
	
	//    .param p1, "c"    # C
	this->write(c);
	return this;

}
// .method public append(Ljava/lang/CharSequence;)Ljava/io/CharArrayWriter;
std::shared_ptr<java::io::CharArrayWriter> java::io::CharArrayWriter::append(std::shared_ptr<java::lang::CharSequence> csq)
{
	
	std::shared_ptr<java::lang::String> s;
	
	//    .param p1, "csq"    # Ljava/lang/CharSequence;
	if ( csq )     
		goto label_cond_e;
	s = std::make_shared<java::lang::String>(std::make_shared<char[]>("null"));
	//    .local v0, "s":Ljava/lang/String;
label_goto_5:
	this->write(s, 0x0, s->length());
	return this;
	// 110    .line 166
	// 111    .end local v0    # "s":Ljava/lang/String;
label_cond_e:
	s = csq->toString();
	//    .restart local v0    # "s":Ljava/lang/String;
	goto label_goto_5;

}
// .method public append(Ljava/lang/CharSequence;II)Ljava/io/CharArrayWriter;
std::shared_ptr<java::io::CharArrayWriter> java::io::CharArrayWriter::append(std::shared_ptr<java::lang::CharSequence> cVar0,int start,int end)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::String> s;
	
	//    .param p1, "csq"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "end"    # I
	if ( cVar0 )     
		goto label_cond_5;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("null"));
	//    .end local p1    # "csq":Ljava/lang/CharSequence;
label_cond_5:
	s = cVar0->subSequence(start, end)->toString();
	//    .local v0, "s":Ljava/lang/String;
	this->write(s, 0x0, s->length());
	return this;

}
// .method public close()V
void java::io::CharArrayWriter::close()
{
	
	return;

}
// .method public flush()V
void java::io::CharArrayWriter::flush()
{
	
	return;

}
// .method public reset()V
void java::io::CharArrayWriter::reset()
{
	
	this->count = 0x0;
	return;

}
// .method public size()I
int java::io::CharArrayWriter::size()
{
	
	return this->count;

}
// .method public toCharArray()[C
char java::io::CharArrayWriter::toCharArray()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_3 .. :try_end_a} :catchall_d
	cVar0->monitor_exit();
	return java::util::Arrays::copyOf(this->buf, this->count);
	// 323    .line 244
label_catchall_d:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::CharArrayWriter::toString()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	cVar1 = std::make_shared<java::lang::String>(this->buf, 0x0, this->count);
	//label_try_end_d:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_3 .. :try_end_d} :catchall_f
	cVar0->monitor_exit();
	return cVar1;
	// 359    .line 263
label_catchall_f:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public write(I)V
void java::io::CharArrayWriter::write(int c)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	int newcount;
	
	//    .param p1, "c"    # I
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	newcount = ( this->count + 0x1);
	//    .local v0, "newcount":I
	if ( newcount <= this->buf->size() )
		goto label_cond_1d;
	this->buf = java::util::Arrays::copyOf(this->buf, java::lang::Math::max(( this->buf->size() << 0x1), newcount));
label_cond_1d:
	this->buf[this->count] = (char)(c);
	this->count = newcount;
	//label_try_end_26:
	}
	catch (...){
		goto label_catchall_28;
	}
	//    .catchall {:try_start_3 .. :try_end_26} :catchall_28
	cVar0->monitor_exit();
	return;
	// 431    .line 79
	// 432    .end local v0    # "newcount":I
label_catchall_28:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public write(Ljava/lang/String;II)V
void java::io::CharArrayWriter::write(std::shared_ptr<java::lang::String> str,int off,int len)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	int newcount;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	newcount = (this->count + len);
	//    .local v0, "newcount":I
	if ( newcount <= this->buf->size() )
		goto label_cond_1d;
	this->buf = java::util::Arrays::copyOf(this->buf, java::lang::Math::max(( this->buf->size() << 0x1), newcount));
label_cond_1d:
	str->getChars(off, (off + len), this->buf, this->count);
	this->count = newcount;
	//label_try_end_28:
	}
	catch (...){
		goto label_catchall_2a;
	}
	//    .catchall {:try_start_3 .. :try_end_28} :catchall_2a
	cVar0->monitor_exit();
	return;
	// 506    .line 119
	// 507    .end local v0    # "newcount":I
label_catchall_2a:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public write([CII)V
void java::io::CharArrayWriter::write(std::shared_ptr<char[]> c,int off,int len)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	int newcount;
	
	//    .param p1, "c"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	if ( off < 0 ) 
		goto label_cond_5;
	if ( off <= c->size() )
		goto label_cond_b;
label_cond_5:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 538    .line 96
label_cond_b:
	if ( len < 0 ) 
		goto label_cond_5;
	if ( (off + len) >  c->size() )
		goto label_cond_5;
	if ( (off + len) < 0 ) 
		goto label_cond_5;
	if ( len )     
		goto label_cond_19;
	return;
	// 559    .line 102
label_cond_19:
	cVar1 = this->lock;
	cVar1->monitor_enter();
	try {
	//label_try_start_1c:
	newcount = (this->count + len);
	//    .local v0, "newcount":I
	if ( newcount <= this->buf->size() )
		goto label_cond_36;
	this->buf = java::util::Arrays::copyOf(this->buf, java::lang::Math::max(( this->buf->size() << 0x1), newcount));
label_cond_36:
	java::lang::System::arraycopy(c, off, this->buf, this->count, len);
	this->count = newcount;
	//label_try_end_3f:
	}
	catch (...){
		goto label_catchall_41;
	}
	//    .catchall {:try_start_1c .. :try_end_3f} :catchall_41
	cVar1->monitor_exit();
	return;
	// 616    .line 102
	// 617    .end local v0    # "newcount":I
label_catchall_41:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;

}
// .method public writeTo(Ljava/io/Writer;)V
void java::io::CharArrayWriter::writeTo(std::shared_ptr<java::io::Writer> out)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "out"    # Ljava/io/Writer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 630        value = {
	// 631            Ljava/io/IOException;
	// 632        }
	// 633    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	out->write(this->buf, 0x0, this->count);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_3 .. :try_end_b} :catchall_d
	cVar0->monitor_exit();
	return;
	// 658    .line 136
label_catchall_d:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}


