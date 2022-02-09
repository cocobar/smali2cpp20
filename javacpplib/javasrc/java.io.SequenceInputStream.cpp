// CPP L:\smali2cpp20\x64\Release\out\java\io\SequenceInputStream.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.SequenceInputStream.h"
#include "java.lang.Error.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "java.util.Vector.h"

// .method public constructor <init>(Ljava/io/InputStream;Ljava/io/InputStream;)V
java::io::SequenceInputStream::SequenceInputStream(std::shared_ptr<java::io::InputStream> s1,std::shared_ptr<java::io::InputStream> s2)
{
	
	std::shared_ptr<java::util::Vector> v;
	std::shared_ptr<java::lang::Error> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "s1"    # Ljava/io/InputStream;
	//    .param p2, "s2"    # Ljava/io/InputStream;
	// 029    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V
	v = std::make_shared<java::util::Vector>(0x2);
	//    .local v1, "v":Ljava/util/Vector;, "Ljava/util/Vector<Ljava/io/InputStream;>;"
	v->addElement(s1);
	v->addElement(s2);
	this->e = v->elements();
	try {
	//label_try_start_15:
	this->nextStream();
	//label_try_end_18:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Ljava/io/IOException; {:try_start_15 .. :try_end_18} :catch_19
	return;
	// 061    .line 95
label_catch_19:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/io/IOException;
	cVar0 = std::make_shared<java::lang::Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("panic")));
	// throw
	throw cVar0;

}
// .method public constructor <init>(Ljava/util/Enumeration;)V
java::io::SequenceInputStream::SequenceInputStream(std::shared_ptr<java::util::Enumeration<java::io::InputStream>> e)
{
	
	std::shared_ptr<java::lang::Error> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 079        value = {
	// 080            "(",
	// 081            "Ljava/util/Enumeration",
	// 082            "<+",
	// 083            "Ljava/io/InputStream;",
	// 084            ">;)V"
	// 085        }
	// 086    .end annotation
	//    .local p1, "e":Ljava/util/Enumeration;, "Ljava/util/Enumeration<+Ljava/io/InputStream;>;"
	// 091    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V
	this->e = e;
	try {
	//label_try_start_5:
	this->nextStream();
	//label_try_end_8:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9;
	}
	//    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_8} :catch_9
	return;
	// 105    .line 70
label_catch_9:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/io/IOException;
	cVar0 = std::make_shared<java::lang::Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("panic")));
	// throw
	throw cVar0;

}
// .method public available()I
int java::io::SequenceInputStream::available()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 125        value = {
	// 126            Ljava/io/IOException;
	// 127        }
	// 128    .end annotation
	if ( this->in )     
		goto label_cond_6;
	return 0x0;
	// 141    .line 141
label_cond_6:
	return this->in->available();

}
// .method public close()V
void java::io::SequenceInputStream::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 155        value = {
	// 156            Ljava/io/IOException;
	// 157        }
	// 158    .end annotation
label_cond_0:
	this->nextStream();
	if ( this->in )     
		goto label_cond_0;
	return;

}
// .method final nextStream()V
void java::io::SequenceInputStream::nextStream()
{
	
	std::shared_ptr<java::io::InputStream> cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 177        value = {
	// 178            Ljava/io/IOException;
	// 179        }
	// 180    .end annotation
	if ( !(this->in) )  
		goto label_cond_a;
	this->in->close();
label_cond_a:
	if ( !(this->e->hasMoreElements()) )  
		goto label_cond_26;
	cVar0 = this->e->nextElement();
	cVar0->checkCast("java::io::InputStream");
	this->in = cVar0;
	if ( this->in )     
		goto label_cond_28;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 228    .line 114
label_cond_26:
	this->in = 0x0;
label_cond_28:
	return;

}
// .method public read()I
int java::io::SequenceInputStream::read()
{
	
	int cVar0;
	int c;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 240        value = {
	// 241            Ljava/io/IOException;
	// 242        }
	// 243    .end annotation
	cVar0 = -0x1;
label_goto_1:
	if ( !(this->in) )  
		goto label_cond_12;
	c = this->in->read();
	//    .local v0, "c":I
	if ( c == cVar0 )
		goto label_cond_e;
	return c;
	// 268    .line 168
label_cond_e:
	this->nextStream();
	goto label_goto_1;
	// 274    .line 170
	// 275    .end local v0    # "c":I
label_cond_12:
	return cVar0;

}
// .method public read([BII)I
int java::io::SequenceInputStream::read(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	int cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar2;
	int n;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 286        value = {
	// 287            Ljava/io/IOException;
	// 288        }
	// 289    .end annotation
	cVar0 = -0x1;
	if ( this->in )     
		goto label_cond_7;
	return cVar0;
	// 304    .line 199
label_cond_7:
	if ( b )     
		goto label_cond_f;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 315    .line 201
label_cond_f:
	if ( off < 0 ) 
		goto label_cond_13;
	if ( len >= 0 )
		goto label_cond_19;
label_cond_13:
	cVar2 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar2;
	// 329    .line 201
label_cond_19:
	if ( len >  (b->size() -  off) )
		goto label_cond_13;
	if ( len )     
		goto label_cond_27;
	return 0x0;
	// 343    .line 211
	// 344    .local v0, "n":I
label_cond_20:
	this->nextStream();
	if ( !(this->in) )  
		goto label_cond_30;
	//    .end local v0    # "n":I
label_cond_27:
	n = this->in->read(b, off, len);
	//    .restart local v0    # "n":I
	if ( n <= 0 )
		goto label_cond_20;
	return n;
	// 369    .line 213
label_cond_30:
	return cVar0;

}


