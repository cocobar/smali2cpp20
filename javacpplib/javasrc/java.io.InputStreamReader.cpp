// CPP L:\smali2cpp20\x64\Release\out\java\io\InputStreamReader.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.InputStreamReader.h"
#include "java.io.Reader.h"
#include "java.io.UnsupportedEncodingException.h"
#include "java.lang.Error.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.nio.charset.Charset.h"
#include "java.nio.charset.CharsetDecoder.h"
#include "sun.nio.cs.StreamDecoder.h"

// .method public constructor <init>(Ljava/io/InputStream;)V
java::io::InputStreamReader::InputStreamReader(std::shared_ptr<java::io::InputStream> in)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::Error> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	java::io::Reader::(in);
	cVar0 = 0x0;
	try {
	//label_try_start_4:
	cVar0->checkCast("java::lang::String");
	this->sd = sun::nio::cs::StreamDecoder::forInputStreamReader(in, this, cVar0);
	//label_try_end_c:
	}
	catch (java::io::UnsupportedEncodingException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d;
	}
	//    .catch Ljava/io/UnsupportedEncodingException; {:try_start_4 .. :try_end_c} :catch_d
	return;
	// 036    .line 75
label_catch_d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/UnsupportedEncodingException;
	cVar1 = std::make_shared<java::lang::Error>(getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method public constructor <init>(Ljava/io/InputStream;Ljava/lang/String;)V
java::io::InputStreamReader::InputStreamReader(std::shared_ptr<java::io::InputStream> in,std::shared_ptr<java::lang::String> charsetName)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .param p2, "charsetName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 054        value = {
	// 055            Ljava/io/UnsupportedEncodingException;
	// 056        }
	// 057    .end annotation
	java::io::Reader::(in);
	if ( charsetName )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("charsetName")));
	// throw
	throw cVar0;
	// 075    .line 100
label_cond_e:
	this->sd = sun::nio::cs::StreamDecoder::forInputStreamReader(in, this, charsetName);
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V
java::io::InputStreamReader::InputStreamReader(std::shared_ptr<java::io::InputStream> in,std::shared_ptr<java::nio::charset::Charset> cs)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .param p2, "cs"    # Ljava/nio/charset/Charset;
	java::io::Reader::(in);
	if ( cs )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("charset")));
	// throw
	throw cVar0;
	// 108    .line 116
label_cond_e:
	this->sd = sun::nio::cs::StreamDecoder::forInputStreamReader(in, this, cs);
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;Ljava/nio/charset/CharsetDecoder;)V
java::io::InputStreamReader::InputStreamReader(std::shared_ptr<java::io::InputStream> in,std::shared_ptr<java::nio::charset::CharsetDecoder> dec)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .param p2, "dec"    # Ljava/nio/charset/CharsetDecoder;
	java::io::Reader::(in);
	if ( dec )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("charset decoder")));
	// throw
	throw cVar0;
	// 141    .line 132
label_cond_e:
	this->sd = sun::nio::cs::StreamDecoder::forInputStreamReader(in, this, dec);
	return;

}
// .method public close()V
void java::io::InputStreamReader::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 158        value = {
	// 159            Ljava/io/IOException;
	// 160        }
	// 161    .end annotation
	this->sd->close();
	return;

}
// .method public getEncoding()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::InputStreamReader::getEncoding()
{
	
	return this->sd->getEncoding();

}
// .method public read()I
int java::io::InputStreamReader::read()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 190        value = {
	// 191            Ljava/io/IOException;
	// 192        }
	// 193    .end annotation
	return this->sd->read();

}
// .method public read([CII)I
int java::io::InputStreamReader::read(std::shared_ptr<char[]> cbuf,int offset,int length)
{
	
	//    .param p1, "cbuf"    # [C
	//    .param p2, "offset"    # I
	//    .param p3, "length"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 212        value = {
	// 213            Ljava/io/IOException;
	// 214        }
	// 215    .end annotation
	return this->sd->read(cbuf, offset, length);

}
// .method public ready()Z
bool java::io::InputStreamReader::ready()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 231        value = {
	// 232            Ljava/io/IOException;
	// 233        }
	// 234    .end annotation
	return this->sd->ready();

}


