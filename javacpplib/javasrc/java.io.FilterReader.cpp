// CPP L:\smali2cpp20\x64\Release\out\java\io\FilterReader.smali
#include "java2ctype.h"
#include "java.io.FilterReader.h"
#include "java.io.Reader.h"

// .method protected constructor <init>(Ljava/io/Reader;)V
java::io::FilterReader::FilterReader(std::shared_ptr<java::io::Reader> in)
{
	
	//    .param p1, "in"    # Ljava/io/Reader;
	java::io::Reader::(in);
	this->in = in;
	return;

}
// .method public close()V
void java::io::FilterReader::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 031        value = {
	// 032            Ljava/io/IOException;
	// 033        }
	// 034    .end annotation
	this->in->close();
	return;

}
// .method public mark(I)V
void java::io::FilterReader::mark(int readAheadLimit)
{
	
	//    .param p1, "readAheadLimit"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 050        value = {
	// 051            Ljava/io/IOException;
	// 052        }
	// 053    .end annotation
	this->in->mark(readAheadLimit);
	return;

}
// .method public markSupported()Z
bool java::io::FilterReader::markSupported()
{
	
	return this->in->markSupported();

}
// .method public read()I
int java::io::FilterReader::read()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 082        value = {
	// 083            Ljava/io/IOException;
	// 084        }
	// 085    .end annotation
	return this->in->read();

}
// .method public read([CII)I
int java::io::FilterReader::read(std::shared_ptr<char[]> cbuf,int off,int len)
{
	
	//    .param p1, "cbuf"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 104        value = {
	// 105            Ljava/io/IOException;
	// 106        }
	// 107    .end annotation
	return this->in->read(cbuf, off, len);

}
// .method public ready()Z
bool java::io::FilterReader::ready()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 123        value = {
	// 124            Ljava/io/IOException;
	// 125        }
	// 126    .end annotation
	return this->in->ready();

}
// .method public reset()V
void java::io::FilterReader::reset()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 142        value = {
	// 143            Ljava/io/IOException;
	// 144        }
	// 145    .end annotation
	this->in->reset();
	return;

}
// .method public skip(J)J
long long java::io::FilterReader::skip(long long n)
{
	
	//    .param p1, "n"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 161        value = {
	// 162            Ljava/io/IOException;
	// 163        }
	// 164    .end annotation
	return this->in->skip(n);

}


