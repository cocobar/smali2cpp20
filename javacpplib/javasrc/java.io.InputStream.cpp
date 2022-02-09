// CPP L:\smali2cpp20\x64\Release\out\java\io\InputStream.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Math.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.String.h"

static java::io::InputStream::MAX_SKIP_BUFFER_SIZE = 0x800;
// .method public constructor <init>()V
java::io::InputStream::InputStream()
{
	
	// 019    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public available()I
int java::io::InputStream::available()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 029        value = {
	// 030            Ljava/io/IOException;
	// 031        }
	// 032    .end annotation
	return 0x0;

}
// .method public close()V
void java::io::InputStream::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 044        value = {
	// 045            Ljava/io/IOException;
	// 046        }
	// 047    .end annotation
	return;

}
// .method public declared-synchronized mark(I)V
void java::io::InputStream::mark(int readlimit)
{
	
	//    .param p1, "readlimit"    # I
	this->monitor_enter();
	this->monitor_exit();
	return;

}
// .method public markSupported()Z
bool java::io::InputStream::markSupported()
{
	
	return 0x0;

}
// .method public abstract read()I
int java::io::InputStream::read()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 079        value = {
	// 080            Ljava/io/IOException;
	// 081        }
	// 082    .end annotation

}
// .method public read([B)I
int java::io::InputStream::read(std::shared_ptr<unsigned char[]> b)
{
	
	//    .param p1, "b"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 089        value = {
	// 090            Ljava/io/IOException;
	// 091        }
	// 092    .end annotation
	return this->read(b, 0x0, b->size());

}
// .method public read([BII)I
int java::io::InputStream::read(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	int cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar2;
	int c;
	int i;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 113        value = {
	// 114            Ljava/io/IOException;
	// 115        }
	// 116    .end annotation
	cVar0 = -0x1;
	if ( b )     
		goto label_cond_a;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 133    .line 164
label_cond_a:
	if ( off < 0 ) 
		goto label_cond_e;
	if ( len >= 0 )
		goto label_cond_14;
label_cond_e:
	cVar2 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar2;
	// 147    .line 164
label_cond_14:
	if ( len >  (b->size() -  off) )
		goto label_cond_e;
	if ( len )     
		goto label_cond_1b;
	return 0x0;
	// 161    .line 170
label_cond_1b:
	c = this->read();
	//    .local v0, "c":I
	if ( c != cVar0 )
		goto label_cond_22;
	return cVar0;
	// 174    .line 174
label_cond_22:
	b[off] = (unsigned char)(c);
	i = 0x1;
	//    .local v2, "i":I
label_goto_26:
	if ( i >= len )
		goto label_cond_2e;
	try {
	//label_try_start_28:
	c = this->read();
	if ( c != cVar0 )
		goto label_cond_2f;
label_cond_2e:
label_goto_2e:
	return i;
	// 202    .line 183
label_cond_2f:
	b[(off + i)] = (unsigned char)(c);
	//label_try_end_34:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	//    .catch Ljava/io/IOException; {:try_start_28 .. :try_end_34} :catch_37
	i = ( i + 0x1);
	goto label_goto_26;
	// 217    .line 185
label_catch_37:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ee":Ljava/io/IOException;
	goto label_goto_2e;

}
// .method public declared-synchronized reset()V
void java::io::InputStream::reset()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 228        value = {
	// 229            Ljava/io/IOException;
	// 230        }
	// 231    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("mark/reset not supported")));
	// throw
	throw cVar0;
	// 245    :try_end_a
	// 246    .catchall {:try_start_1 .. :try_end_a} :catchall_a
label_catchall_a:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public skip(J)J
long long java::io::InputStream::skip(long long n)
{
	
	long long cVar0;
	long long remaining;
	int size;
	int nr;
	
	//    .param p1, "n"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 260        value = {
	// 261            Ljava/io/IOException;
	// 262        }
	// 263    .end annotation
	cVar0 = 0x0;
	remaining = n;
	//    .local v2, "remaining":J
	if ( (n > cVar0) > 0 ) 
		goto label_cond_9;
	return cVar0;
	// 282    .line 221
label_cond_9:
	size = (int)(java::lang::Math::min(0x800, n));
	//    .local v1, "size":I
	//    .local v4, "skipBuffer":[B
label_goto_12:
	if ( (remaining > cVar0) <= 0 )
		goto label_cond_22;
	nr = this->read(std::make_shared<std::vector<unsigned char[]>>(size), 0x0, (int)(java::lang::Math::min((long long)(size), remaining)));
	//    .local v0, "nr":I
	if ( nr >= 0 )
		goto label_cond_25;
	//    .end local v0    # "nr":I
label_cond_22:
	return (n - remaining);
	// 327    .line 228
	// 328    .restart local v0    # "nr":I
label_cond_25:
	remaining = (remaining -  (long long)(nr));
	goto label_goto_12;

}


