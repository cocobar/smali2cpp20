// CPP L:\smali2cpp20\x64\Release\out\java\io\FilterWriter.smali
#include "java2ctype.h"
#include "java.io.FilterWriter.h"
#include "java.io.Writer.h"
#include "java.lang.String.h"

// .method protected constructor <init>(Ljava/io/Writer;)V
java::io::FilterWriter::FilterWriter(std::shared_ptr<java::io::Writer> out)
{
	
	//    .param p1, "out"    # Ljava/io/Writer;
	java::io::Writer::(out);
	this->out = out;
	return;

}
// .method public close()V
void java::io::FilterWriter::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 031        value = {
	// 032            Ljava/io/IOException;
	// 033        }
	// 034    .end annotation
	this->out->close();
	return;

}
// .method public flush()V
void java::io::FilterWriter::flush()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 049        value = {
	// 050            Ljava/io/IOException;
	// 051        }
	// 052    .end annotation
	this->out->flush();
	return;

}
// .method public write(I)V
void java::io::FilterWriter::write(int c)
{
	
	//    .param p1, "c"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 068        value = {
	// 069            Ljava/io/IOException;
	// 070        }
	// 071    .end annotation
	this->out->write(c);
	return;

}
// .method public write(Ljava/lang/String;II)V
void java::io::FilterWriter::write(std::shared_ptr<java::lang::String> str,int off,int len)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 089        value = {
	// 090            Ljava/io/IOException;
	// 091        }
	// 092    .end annotation
	this->out->write(str, off, len);
	return;

}
// .method public write([CII)V
void java::io::FilterWriter::write(std::shared_ptr<char[]> cbuf,int off,int len)
{
	
	//    .param p1, "cbuf"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 110        value = {
	// 111            Ljava/io/IOException;
	// 112        }
	// 113    .end annotation
	this->out->write(cbuf, off, len);
	return;

}


