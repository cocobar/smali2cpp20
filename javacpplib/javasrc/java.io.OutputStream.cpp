// CPP L:\smali2cpp20\x64\Release\out\java\io\OutputStream.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.NullPointerException.h"

// .method public constructor <init>()V
java::io::OutputStream::OutputStream()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public close()V
void java::io::OutputStream::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 026        value = {
	// 027            Ljava/io/IOException;
	// 028        }
	// 029    .end annotation
	return;

}
// .method public flush()V
void java::io::OutputStream::flush()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 039        value = {
	// 040            Ljava/io/IOException;
	// 041        }
	// 042    .end annotation
	return;

}
// .method public abstract write(I)V
void java::io::OutputStream::write(int var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 051        value = {
	// 052            Ljava/io/IOException;
	// 053        }
	// 054    .end annotation

}
// .method public write([B)V
void java::io::OutputStream::write(std::shared_ptr<unsigned char[]> b)
{
	
	//    .param p1, "b"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 061        value = {
	// 062            Ljava/io/IOException;
	// 063        }
	// 064    .end annotation
	this->write(b, 0x0, b->size());
	return;

}
// .method public write([BII)V
void java::io::OutputStream::write(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	int i;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 084        value = {
	// 085            Ljava/io/IOException;
	// 086        }
	// 087    .end annotation
	if ( b )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 100    .line 109
label_cond_8:
	if ( off < 0 ) 
		goto label_cond_d;
	if ( off <= b->size() )
		goto label_cond_13;
label_cond_d:
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar1;
	// 116    .line 109
label_cond_13:
	if ( len < 0 ) 
		goto label_cond_d;
	if ( (off + len) >  b->size() )
		goto label_cond_d;
	if ( (off + len) < 0 ) 
		goto label_cond_d;
	if ( len )     
		goto label_cond_21;
	return;
	// 137    .line 115
label_cond_21:
	i = 0x0;
	//    .local v0, "i":I
label_goto_22:
	if ( i >= len )
		goto label_cond_2e;
	this->write(b[(off + i)]);
	i = ( i + 0x1);
	goto label_goto_22;
	// 157    .line 118
label_cond_2e:
	return;

}


