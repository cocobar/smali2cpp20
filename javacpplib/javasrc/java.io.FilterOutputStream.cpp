// CPP L:\smali2cpp20\x64\Release\out\java\io\FilterOutputStream.smali
#include "java2ctype.h"
#include "java.io.FilterOutputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Object.h"
#include "java.lang.Throwable.h"

// .method public constructor <init>(Ljava/io/OutputStream;)V
java::io::FilterOutputStream::FilterOutputStream(std::shared_ptr<java::io::OutputStream> out)
{
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	// 017    invoke-direct {p0}, Ljava/io/OutputStream;-><init>()V
	this->out = out;
	return;

}
// .method public close()V
void java::io::FilterOutputStream::close()
{
	
	int cVar6;
	std::shared_ptr<java::io::OutputStream> ostream;
	std::shared_ptr<java::lang::Object> cVar2;
	std::shared_ptr<java::lang::Object> cVar4;
	std::shared_ptr<java::lang::Throwable> cVar5;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Object> catchall;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 031        value = {
	// 032            Ljava/io/IOException;
	// 033        }
	// 034    .end annotation
	cVar6 = 0x0;
	ostream = 0x0;
	//    .local v0, "ostream":Ljava/io/OutputStream;
	try {
	//label_try_start_2:
	ostream = this->out;
	//    .local v0, "ostream":Ljava/io/OutputStream;
	this->flush();
	//label_try_end_7:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_11;
	}
	catch (...){
		goto label_catchall_2c;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_2 .. :try_end_7} :catch_11
	//    .catchall {:try_start_2 .. :try_end_7} :catchall_2c
	if ( !(ostream) )  
		goto label_cond_c;
	try {
	//label_try_start_9:
	ostream->close();
	//label_try_end_c:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_9 .. :try_end_c} :catch_f
label_cond_c:
label_goto_c:
	if ( !(cVar6) )  
		goto label_cond_2b;
	// throw
	throw cVar6;
label_catch_f:
	// move-exception
	cVar6 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_c;
	// 072    .end local v0    # "ostream":Ljava/io/OutputStream;
label_catch_11:
	// move-exception
	cVar2 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	try {
	//label_try_start_12:
	// throw
	throw cVar2;
	// 078    :try_end_13
	// 079    .catchall {:try_start_12 .. :try_end_13} :catchall_13
label_catchall_13:
	// move-exception
	
	tryCatchExcetionList.pop_back();
	cVar6 = cVar2;
	cVar4 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_goto_17:
	if ( !(ostream) )  
		goto label_cond_1c;
	try {
	//label_try_start_19:
	ostream->close();
	//label_try_end_1c:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1f;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_19 .. :try_end_1c} :catch_1f
label_cond_1c:
label_goto_1c:
	if ( !(cVar6) )  
		goto label_cond_2a;
	// throw
	throw cVar6;
label_catch_1f:
	// move-exception
	cVar5 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	if ( cVar6 )     
		goto label_cond_24;
	cVar6 = cVar5;
	goto label_goto_1c;
label_cond_24:
	if ( cVar6 == cVar5 )
		goto label_cond_1c;
	cVar6->addSuppressed(cVar5);
	goto label_goto_1c;
label_cond_2a:
	// throw
	throw cVar4;
	// 123    .line 160
	// 124    .restart local v0    # "ostream":Ljava/io/OutputStream;
label_cond_2b:
	return;
	// 128    .line 159
	// 129    .end local v0    # "ostream":Ljava/io/OutputStream;
label_catchall_2c:
	// move-exception
	catchall = tryCatchExcetionList.back();
	goto label_goto_17;

}
// .method public flush()V
void java::io::FilterOutputStream::flush()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 139        value = {
	// 140            Ljava/io/IOException;
	// 141        }
	// 142    .end annotation
	this->out->flush();
	return;

}
// .method public write(I)V
void java::io::FilterOutputStream::write(int b)
{
	
	//    .param p1, "b"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 158        value = {
	// 159            Ljava/io/IOException;
	// 160        }
	// 161    .end annotation
	this->out->write(b);
	return;

}
// .method public write([B)V
void java::io::FilterOutputStream::write(std::shared_ptr<unsigned char[]> b)
{
	
	//    .param p1, "b"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 177        value = {
	// 178            Ljava/io/IOException;
	// 179        }
	// 180    .end annotation
	this->write(b, 0x0, b->size());
	return;

}
// .method public write([BII)V
void java::io::FilterOutputStream::write(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	int i;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 200        value = {
	// 201            Ljava/io/IOException;
	// 202        }
	// 203    .end annotation
	if ( (((off | len) |  (b->size() -  (len + off))) |  (off + len)) >= 0 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 230    .line 124
label_cond_12:
	i = 0x0;
	//    .local v0, "i":I
label_goto_13:
	if ( i >= len )
		goto label_cond_1f;
	this->write(b[(off + i)]);
	i = ( i + 0x1);
	goto label_goto_13;
	// 250    .line 127
label_cond_1f:
	return;

}


