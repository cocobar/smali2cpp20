// CPP L:\smali2cpp20\x64\Release\out\java\io\FilterInputStream.smali
#include "java2ctype.h"
#include "java.io.FilterInputStream.h"
#include "java.io.InputStream.h"

// .method protected constructor <init>(Ljava/io/InputStream;)V
java::io::FilterInputStream::FilterInputStream(std::shared_ptr<java::io::InputStream> in)
{
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	// 017    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V
	this->in = in;
	return;

}
// .method public available()I
int java::io::FilterInputStream::available()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 031        value = {
	// 032            Ljava/io/IOException;
	// 033        }
	// 034    .end annotation
	return this->in->available();

}
// .method public close()V
void java::io::FilterInputStream::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 050        value = {
	// 051            Ljava/io/IOException;
	// 052        }
	// 053    .end annotation
	this->in->close();
	return;

}
// .method public declared-synchronized mark(I)V
void java::io::FilterInputStream::mark(int readlimit)
{
	
	//    .param p1, "readlimit"    # I
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->in->mark(readlimit);
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_8;
	}
	//    .catchall {:try_start_1 .. :try_end_6} :catchall_8
	this->monitor_exit();
	return;
label_catchall_8:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public markSupported()Z
bool java::io::FilterInputStream::markSupported()
{
	
	return this->in->markSupported();

}
// .method public read()I
int java::io::FilterInputStream::read()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 110        value = {
	// 111            Ljava/io/IOException;
	// 112        }
	// 113    .end annotation
	return this->in->read();

}
// .method public read([B)I
int java::io::FilterInputStream::read(std::shared_ptr<unsigned char[]> b)
{
	
	//    .param p1, "b"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 130        value = {
	// 131            Ljava/io/IOException;
	// 132        }
	// 133    .end annotation
	return this->read(b, 0x0, b->size());

}
// .method public read([BII)I
int java::io::FilterInputStream::read(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 154        value = {
	// 155            Ljava/io/IOException;
	// 156        }
	// 157    .end annotation
	return this->in->read(b, off, len);

}
// .method public declared-synchronized reset()V
void java::io::FilterInputStream::reset()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 173        value = {
	// 174            Ljava/io/IOException;
	// 175        }
	// 176    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->in->reset();
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_8;
	}
	//    .catchall {:try_start_1 .. :try_end_6} :catchall_8
	this->monitor_exit();
	return;
label_catchall_8:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public skip(J)J
long long java::io::FilterInputStream::skip(long long n)
{
	
	//    .param p1, "n"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 206        value = {
	// 207            Ljava/io/IOException;
	// 208        }
	// 209    .end annotation
	return this->in->skip(n);

}


