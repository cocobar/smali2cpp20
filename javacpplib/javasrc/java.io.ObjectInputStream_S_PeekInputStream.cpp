// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$PeekInputStream.smali
#include "java2ctype.h"
#include "java.io.EOFException.h"
#include "java.io.InputStream.h"
#include "java.io.ObjectInputStream_S_PeekInputStream.h"

// .method constructor <init>(Ljava/io/InputStream;)V
java::io::ObjectInputStream_S_PeekInputStream::ObjectInputStream_S_PeekInputStream(std::shared_ptr<java::io::InputStream> in)
{
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	// 030    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V
	this->peekb = -0x1;
	this->in = in;
	return;

}
// .method public available()I
int java::io::ObjectInputStream_S_PeekInputStream::available()
{
	
	int cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 049        value = {
	// 050            Ljava/io/IOException;
	// 051        }
	// 052    .end annotation
	cVar1 = 0x0;
	if ( this->peekb < 0 ) 
		goto label_cond_c;
	cVar1 = 0x1;
label_cond_c:
	return (cVar1 +  this->in->available());

}
// .method public close()V
void java::io::ObjectInputStream_S_PeekInputStream::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 079        value = {
	// 080            Ljava/io/IOException;
	// 081        }
	// 082    .end annotation
	this->in->close();
	return;

}
// .method peek()I
int java::io::ObjectInputStream_S_PeekInputStream::peek()
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 097        value = {
	// 098            Ljava/io/IOException;
	// 099        }
	// 100    .end annotation
	if ( this->peekb < 0 ) 
		goto label_cond_7;
	cVar0 = this->peekb;
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = this->in->read();
	this->peekb = cVar0;
	goto label_goto_6;

}
// .method public read()I
int java::io::ObjectInputStream_S_PeekInputStream::read()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 128        value = {
	// 129            Ljava/io/IOException;
	// 130        }
	// 131    .end annotation
	if ( this->peekb < 0 ) 
		goto label_cond_a;
	//    .local v0, "v":I
	this->peekb = -0x1;
	return this->peekb;
	// 151    .line 2319
	// 152    .end local v0    # "v":I
label_cond_a:
	return this->in->read();

}
// .method public read([BII)I
int java::io::ObjectInputStream_S_PeekInputStream::read(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	int n;
	int cVar0;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 169        value = {
	// 170            Ljava/io/IOException;
	// 171        }
	// 172    .end annotation
	if ( len )     
		goto label_cond_4;
	return 0x0;
	// 183    .line 2326
label_cond_4:
	if ( this->peekb >= 0 )
		goto label_cond_f;
	return this->in->read(b, off, len);
	// 198    .line 2329
label_cond_f:
	//    .end local p2    # "off":I
	//    .local v1, "off":I
	b[off] = (unsigned char)(this->peekb);
	this->peekb = -0x1;
	n = this->in->read(b, ( off + 0x1), ( len + -0x1));
	//    .local v0, "n":I
	if ( n < 0 ) 
		goto label_cond_26;
	cVar0 = ( n + 0x1);
label_goto_25:
	return cVar0;
label_cond_26:
	cVar0 = 0x1;
	goto label_goto_25;

}
// .method readFully([BII)V
void java::io::ObjectInputStream_S_PeekInputStream::readFully(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	int n;
	int count;
	std::shared_ptr<java::io::EOFException> cVar0;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 246        value = {
	// 247            Ljava/io/IOException;
	// 248        }
	// 249    .end annotation
	n = 0x0;
	//    .local v1, "n":I
label_goto_1:
	if ( n >= len )
		goto label_cond_15;
	count = this->read(b, (off + n), (len - n));
	//    .local v0, "count":I
	if ( count >= 0 )
		goto label_cond_13;
	cVar0 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar0;
	// 280    .line 2344
label_cond_13:
	n = (n +  count);
	goto label_goto_1;
	// 286    .line 2346
	// 287    .end local v0    # "count":I
label_cond_15:
	return;

}
// .method public skip(J)J
long long java::io::ObjectInputStream_S_PeekInputStream::skip(long long cVar1)
{
	
	long long cVar0;
	long long cVar1;
	
	//    .param p1, "n"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 296        value = {
	// 297            Ljava/io/IOException;
	// 298        }
	// 299    .end annotation
	cVar0 = 0x0;
	if ( (cVar1 > cVar0) > 0 ) 
		goto label_cond_7;
	return cVar0;
	// 312    .line 2352
label_cond_7:
	//    .local v0, "skipped":I
	if ( this->peekb < 0 ) 
		goto label_cond_13;
	this->peekb = -0x1;
	cVar1 = (cVar1 -  0x1);
label_cond_13:
	return ((long long)(0x0) +  this->skip(cVar1));

}


