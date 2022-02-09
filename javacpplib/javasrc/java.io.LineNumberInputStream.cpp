// CPP L:\smali2cpp20\x64\Release\out\java\io\LineNumberInputStream.smali
#include "java2ctype.h"
#include "java.io.FilterInputStream.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.LineNumberInputStream.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Math.h"
#include "java.lang.NullPointerException.h"

// .method public constructor <init>(Ljava/io/InputStream;)V
java::io::LineNumberInputStream::LineNumberInputStream(std::shared_ptr<java::io::InputStream> in)
{
	
	int cVar0;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	cVar0 = -0x1;
	java::io::FilterInputStream::(in);
	this->pushBack = cVar0;
	this->markPushBack = cVar0;
	return;

}
// .method public available()I
int java::io::LineNumberInputStream::available()
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 047        value = {
	// 048            Ljava/io/IOException;
	// 049        }
	// 050    .end annotation
	if ( this->pushBack != -0x1 )
		goto label_cond_c;
	cVar0 = ( this->available() / 0x2);
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = ( ( this->available() / 0x2) + 0x1);
	goto label_goto_b;

}
// .method public getLineNumber()I
int java::io::LineNumberInputStream::getLineNumber()
{
	
	return this->lineNumber;

}
// .method public mark(I)V
void java::io::LineNumberInputStream::mark(int readlimit)
{
	
	//    .param p1, "readlimit"    # I
	this->markLineNumber = this->lineNumber;
	this->markPushBack = this->pushBack;
	this->in->mark(readlimit);
	return;

}
// .method public read()I
int java::io::LineNumberInputStream::read()
{
	
	int cVar0;
	int cVar1;
	int c;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 118        value = {
	// 119            Ljava/io/IOException;
	// 120        }
	// 121    .end annotation
	cVar0 = 0xa;
	cVar1 = -0x1;
	c = this->pushBack;
	//    .local v0, "c":I
	if ( c == cVar1 )
		goto label_cond_d;
	this->pushBack = cVar1;
label_goto_9:
	// switch
	{
	auto item = ( c );
	if (item == 10) goto label_pswitch_22;
	if (item == 11) goto label_pswitch_c;
	if (item == 12) goto label_pswitch_c;
	if (item == 13) goto label_pswitch_14;
	}
label_pswitch_c:
	return c;
	// 146    .line 97
label_cond_d:
	c = this->in->read();
	goto label_goto_9;
	// 156    .line 102
label_pswitch_14:
	this->pushBack = this->in->read();
	if ( this->pushBack != cVar0 )
		goto label_cond_22;
	this->pushBack = cVar1;
label_cond_22:
label_pswitch_22:
	this->lineNumber = ( this->lineNumber + 0x1);
	return cVar0;
	// 186    .line 100
	// 187    nop
	// 189    :pswitch_data_2a
	// 190    .packed-switch 0xa
	// 191        :pswitch_22
	// 192        :pswitch_c
	// 193        :pswitch_c
	// 194        :pswitch_14
	// 195    .end packed-switch

}
// .method public read([BII)I
int java::io::LineNumberInputStream::read(std::shared_ptr<unsigned char[]> b,int off,int len)
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
	// 204        value = {
	// 205            Ljava/io/IOException;
	// 206        }
	// 207    .end annotation
	cVar0 = -0x1;
	if ( b )     
		goto label_cond_a;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 224    .line 133
label_cond_a:
	if ( off < 0 ) 
		goto label_cond_f;
	if ( off <= b->size() )
		goto label_cond_15;
label_cond_f:
	cVar2 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar2;
	// 240    .line 133
label_cond_15:
	if ( len < 0 ) 
		goto label_cond_f;
	if ( (off + len) >  b->size() )
		goto label_cond_f;
	if ( (off + len) < 0 ) 
		goto label_cond_f;
	if ( len )     
		goto label_cond_23;
	return 0x0;
	// 261    .line 140
label_cond_23:
	c = this->read();
	//    .local v0, "c":I
	if ( c != cVar0 )
		goto label_cond_2a;
	return cVar0;
	// 274    .line 144
label_cond_2a:
	b[off] = (unsigned char)(c);
	i = 0x1;
	//    .local v2, "i":I
label_goto_2e:
	if ( i >= len )
		goto label_cond_36;
	try {
	//label_try_start_30:
	c = this->read();
	if ( c != cVar0 )
		goto label_cond_37;
label_cond_36:
label_goto_36:
	return i;
	// 302    .line 153
label_cond_37:
	if ( !(b) )  
		goto label_cond_3e;
	b[(off + i)] = (unsigned char)(c);
	//label_try_end_3e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_41;
	}
	//    .catch Ljava/io/IOException; {:try_start_30 .. :try_end_3e} :catch_41
label_cond_3e:
	i = ( i + 0x1);
	goto label_goto_2e;
	// 321    .line 157
label_catch_41:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ee":Ljava/io/IOException;
	goto label_goto_36;

}
// .method public reset()V
void java::io::LineNumberInputStream::reset()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 332        value = {
	// 333            Ljava/io/IOException;
	// 334        }
	// 335    .end annotation
	this->lineNumber = this->markLineNumber;
	this->pushBack = this->markPushBack;
	this->in->reset();
	return;

}
// .method public setLineNumber(I)V
void java::io::LineNumberInputStream::setLineNumber(int lineNumber)
{
	
	//    .param p1, "lineNumber"    # I
	this->lineNumber = lineNumber;
	return;

}
// .method public skip(J)J
long long java::io::LineNumberInputStream::skip(long long n)
{
	
	long long cVar0;
	long long remaining;
	int nr;
	
	//    .param p1, "n"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 373        value = {
	// 374            Ljava/io/IOException;
	// 375        }
	// 376    .end annotation
	cVar0 = 0x0;
	//    .local v0, "chunk":I
	remaining = n;
	//    .local v4, "remaining":J
	if ( (n > cVar0) > 0 ) 
		goto label_cond_b;
	return cVar0;
	// 399    .line 189
label_cond_b:
	//    .local v1, "data":[B
label_goto_d:
	if ( (remaining > cVar0) <= 0 )
		goto label_cond_1e;
	nr = this->read(std::make_shared<std::vector<unsigned char[]>>(0x800), 0x0, (int)(java::lang::Math::min(0x800, remaining)));
	//    .local v2, "nr":I
	if ( nr >= 0 )
		goto label_cond_21;
	//    .end local v2    # "nr":I
label_cond_1e:
	return (n - remaining);
	// 434    .line 195
	// 435    .restart local v2    # "nr":I
label_cond_21:
	remaining = (remaining -  (long long)(nr));
	goto label_goto_d;

}


