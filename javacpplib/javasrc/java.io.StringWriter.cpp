// CPP L:\smali2cpp20\x64\Release\out\java\io\StringWriter.smali
#include "java2ctype.h"
#include "java.io.StringWriter.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

// .method public constructor <init>()V
java::io::StringWriter::StringWriter()
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	
	// 016    invoke-direct {p0}, Ljava/io/Writer;-><init>()V
	cVar0 = std::make_shared<java::lang::StringBuffer>();
	this->buf = cVar0;
	this->lock = this->buf;
	return;

}
// .method public constructor <init>(I)V
java::io::StringWriter::StringWriter(int initialSize)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuffer> cVar1;
	
	//    .param p1, "initialSize"    # I
	// 040    invoke-direct {p0}, Ljava/io/Writer;-><init>()V
	if ( initialSize >= 0 )
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Negative buffer size")));
	// throw
	throw cVar0;
	// 054    .line 69
label_cond_e:
	cVar1 = std::make_shared<java::lang::StringBuffer>(initialSize);
	this->buf = cVar1;
	this->lock = this->buf;
	return;

}
// .method public append(C)Ljava/io/StringWriter;
std::shared_ptr<java::io::StringWriter> java::io::StringWriter::append(char c)
{
	
	//    .param p1, "c"    # C
	this->write(c);
	return this;

}
// .method public append(Ljava/lang/CharSequence;)Ljava/io/StringWriter;
std::shared_ptr<java::io::StringWriter> java::io::StringWriter::append(std::shared_ptr<java::lang::CharSequence> csq)
{
	
	//    .param p1, "csq"    # Ljava/lang/CharSequence;
	if ( csq )     
		goto label_cond_9;
	this->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("null")));
label_goto_8:
	return this;
	// 102    .line 143
label_cond_9:
	this->write(csq->toString());
	goto label_goto_8;

}
// .method public append(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;
std::shared_ptr<java::io::StringWriter> java::io::StringWriter::append(std::shared_ptr<java::lang::CharSequence> csq,int start,int end)
{
	
	//    .param p1, "csq"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "end"    # I
	if ( csq )     
		goto label_cond_11;
	//    .local v0, "cs":Ljava/lang/CharSequence;
label_goto_5:
	this->write(cs->subSequence(start, end)->toString());
	return this;
	// 141    .line 180
	// 142    .end local v0    # "cs":Ljava/lang/CharSequence;
label_cond_11:
	//    .restart local v0    # "cs":Ljava/lang/CharSequence;
	goto label_goto_5;

}
// .method public close()V
void java::io::StringWriter::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 255        value = {
	// 256            Ljava/io/IOException;
	// 257        }
	// 258    .end annotation
	return;

}
// .method public flush()V
void java::io::StringWriter::flush()
{
	
	return;

}
// .method public getBuffer()Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> java::io::StringWriter::getBuffer()
{
	
	return this->buf;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::StringWriter::toString()
{
	
	return this->buf->toString();

}
// .method public write(I)V
void java::io::StringWriter::write(int c)
{
	
	//    .param p1, "c"    # I
	this->buf->append((char)(c));
	return;

}
// .method public write(Ljava/lang/String;)V
void java::io::StringWriter::write(std::shared_ptr<java::lang::String> str)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	this->buf->append(str);
	return;

}
// .method public write(Ljava/lang/String;II)V
void java::io::StringWriter::write(std::shared_ptr<java::lang::String> str,int off,int len)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	this->buf->append(str->substring(off, (off + len)));
	return;

}
// .method public write([CII)V
void java::io::StringWriter::write(std::shared_ptr<char[]> cbuf,int off,int len)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p1, "cbuf"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	if ( off < 0 ) 
		goto label_cond_5;
	if ( off <= cbuf->size() )
		goto label_cond_b;
label_cond_5:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 371    .line 88
label_cond_b:
	if ( len < 0 ) 
		goto label_cond_5;
	if ( (off + len) >  cbuf->size() )
		goto label_cond_5;
	if ( (off + len) < 0 ) 
		goto label_cond_5;
	if ( len )     
		goto label_cond_19;
	return;
	// 392    .line 94
label_cond_19:
	this->buf->append(cbuf, off, len);
	return;

}


