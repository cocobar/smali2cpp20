// CPP L:\smali2cpp20\x64\Release\out\java\io\OutputStreamWriter.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.io.OutputStreamWriter.h"
#include "java.io.UnsupportedEncodingException.h"
#include "java.io.Writer.h"
#include "java.lang.Error.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.nio.charset.Charset.h"
#include "java.nio.charset.CharsetEncoder.h"
#include "sun.nio.cs.StreamEncoder.h"

// .method public constructor <init>(Ljava/io/OutputStream;)V
java::io::OutputStreamWriter::OutputStreamWriter(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::Error> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	java::io::Writer::(out);
	cVar0 = 0x0;
	try {
	//label_try_start_4:
	cVar0->checkCast("java::lang::String");
	this->se = sun::nio::cs::StreamEncoder::forOutputStreamWriter(out, this, cVar0);
	//label_try_end_c:
	}
	catch (java::io::UnsupportedEncodingException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d;
	}
	//    .catch Ljava/io/UnsupportedEncodingException; {:try_start_4 .. :try_end_c} :catch_d
	return;
	// 036    .line 112
label_catch_d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/UnsupportedEncodingException;
	cVar1 = std::make_shared<java::lang::Error>(getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method public constructor <init>(Ljava/io/OutputStream;Ljava/lang/String;)V
java::io::OutputStreamWriter::OutputStreamWriter(std::shared_ptr<java::io::OutputStream> out,std::shared_ptr<java::lang::String> charsetName)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .param p2, "charsetName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 054        value = {
	// 055            Ljava/io/UnsupportedEncodingException;
	// 056        }
	// 057    .end annotation
	java::io::Writer::(out);
	if ( charsetName )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("charsetName")));
	// throw
	throw cVar0;
	// 075    .line 100
label_cond_e:
	this->se = sun::nio::cs::StreamEncoder::forOutputStreamWriter(out, this, charsetName);
	return;

}
// .method public constructor <init>(Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V
java::io::OutputStreamWriter::OutputStreamWriter(std::shared_ptr<java::io::OutputStream> out,std::shared_ptr<java::nio::charset::Charset> cs)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .param p2, "cs"    # Ljava/nio/charset/Charset;
	java::io::Writer::(out);
	if ( cs )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("charset")));
	// throw
	throw cVar0;
	// 108    .line 133
label_cond_e:
	this->se = sun::nio::cs::StreamEncoder::forOutputStreamWriter(out, this, cs);
	return;

}
// .method public constructor <init>(Ljava/io/OutputStream;Ljava/nio/charset/CharsetEncoder;)V
java::io::OutputStreamWriter::OutputStreamWriter(std::shared_ptr<java::io::OutputStream> out,std::shared_ptr<java::nio::charset::CharsetEncoder> enc)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .param p2, "enc"    # Ljava/nio/charset/CharsetEncoder;
	java::io::Writer::(out);
	if ( enc )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("charset encoder")));
	// throw
	throw cVar0;
	// 141    .line 152
label_cond_e:
	this->se = sun::nio::cs::StreamEncoder::forOutputStreamWriter(out, this, enc);
	return;

}
// .method public close()V
void java::io::OutputStreamWriter::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 158        value = {
	// 159            Ljava/io/IOException;
	// 160        }
	// 161    .end annotation
	this->se->close();
	return;

}
// .method public flush()V
void java::io::OutputStreamWriter::flush()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 176        value = {
	// 177            Ljava/io/IOException;
	// 178        }
	// 179    .end annotation
	this->se->flush();
	return;

}
// .method flushBuffer()V
void java::io::OutputStreamWriter::flushBuffer()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 194        value = {
	// 195            Ljava/io/IOException;
	// 196        }
	// 197    .end annotation
	this->se->flushBuffer();
	return;

}
// .method public getEncoding()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::OutputStreamWriter::getEncoding()
{
	
	return this->se->getEncoding();

}
// .method public write(I)V
void java::io::OutputStreamWriter::write(int c)
{
	
	//    .param p1, "c"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 227        value = {
	// 228            Ljava/io/IOException;
	// 229        }
	// 230    .end annotation
	this->se->write(c);
	return;

}
// .method public write(Ljava/lang/String;II)V
void java::io::OutputStreamWriter::write(std::shared_ptr<java::lang::String> str,int off,int len)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 248        value = {
	// 249            Ljava/io/IOException;
	// 250        }
	// 251    .end annotation
	this->se->write(str, off, len);
	return;

}
// .method public write([CII)V
void java::io::OutputStreamWriter::write(std::shared_ptr<char[]> cbuf,int off,int len)
{
	
	//    .param p1, "cbuf"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 269        value = {
	// 270            Ljava/io/IOException;
	// 271        }
	// 272    .end annotation
	this->se->write(cbuf, off, len);
	return;

}


