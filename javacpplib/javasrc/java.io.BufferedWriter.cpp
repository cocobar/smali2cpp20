// CPP L:\smali2cpp20\x64\Release\out\java\io\BufferedWriter.smali
#include "java2ctype.h"
#include "java.io.BufferedWriter.h"
#include "java.io.IOException.h"
#include "java.io.Writer.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.security.AccessController.h"
#include "sun.security.action.GetPropertyAction.h"

static java::io::BufferedWriter::defaultCharBufferSize;
// .method static constructor <clinit>()V
void java::io::BufferedWriter::static_cinit()
{
	
	java::io::BufferedWriter::defaultCharBufferSize = 0x2000;
	return;

}
// .method public constructor <init>(Ljava/io/Writer;)V
java::io::BufferedWriter::BufferedWriter(std::shared_ptr<java::io::Writer> out)
{
	
	//    .param p1, "out"    # Ljava/io/Writer;
	java::io::BufferedWriter::(out, java::io::BufferedWriter::defaultCharBufferSize);
	return;

}
// .method public constructor <init>(Ljava/io/Writer;I)V
java::io::BufferedWriter::BufferedWriter(std::shared_ptr<java::io::Writer> out,int sz)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<sun::security::action::GetPropertyAction> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	
	//    .param p1, "out"    # Ljava/io/Writer;
	//    .param p2, "sz"    # I
	java::io::Writer::(out);
	if ( sz > 0 ) 
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Buffer size <= 0")));
	// throw
	throw cVar0;
	// 073    .line 104
label_cond_f:
	this->out = out;
	this->cb = std::make_shared<std::vector<char[]>>(sz);
	this->nChars = sz;
	this->nextChar = 0x0;
	cVar1 = std::make_shared<sun::security::action::GetPropertyAction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("line.separator")));
	cVar2 = java::security::AccessController::doPrivileged(cVar1);
	cVar2->checkCast("java::lang::String");
	this->lineSeparator = cVar2;
	return;

}
// .method private ensureOpen()V
void java::io::BufferedWriter::ensureOpen()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 111        value = {
	// 112            Ljava/io/IOException;
	// 113        }
	// 114    .end annotation
	if ( this->out )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream closed")));
	// throw
	throw cVar0;
	// 131    .line 117
label_cond_d:
	return;

}
// .method private min(II)I
int java::io::BufferedWriter::min(int a,int b)
{
	
	//    .param p1, "a"    # I
	//    .param p2, "b"    # I
	if ( a >= b )
		goto label_cond_3;
	return a;
	// 147    .line 154
label_cond_3:
	return b;

}
// .method public close()V
void java::io::BufferedWriter::close()
{
	
	int cVar7;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::io::Writer> w;
	std::shared_ptr<java::lang::Object> cVar3;
	std::shared_ptr<java::lang::Object> cVar5;
	std::shared_ptr<java::lang::Throwable> cVar6;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Object> catchall;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 157        value = {
	// 158            Ljava/io/IOException;
	// 159        }
	// 160    .end annotation
	cVar7 = 0x0;
	cVar1 = this->lock;
	cVar1->monitor_enter();
	try {
	//label_try_start_4:
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_20;
	}
	//    .catchall {:try_start_4 .. :try_end_6} :catchall_20
	if ( this->out )     
		goto label_cond_a;
	cVar1->monitor_exit();
	return;
	// 183    .line 264
label_cond_a:
	w = 0x0;
	//    .local v0, "w":Ljava/io/Writer;
	try {
	//label_try_start_b:
	w = this->out;
	//    .local v0, "w":Ljava/io/Writer;
	this->flushBuffer();
	//label_try_end_10:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25;
	}
	catch (...){
		goto label_catchall_47;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_b .. :try_end_10} :catch_25
	//    .catchall {:try_start_b .. :try_end_10} :catchall_47
	if ( !(w) )  
		goto label_cond_15;
	try {
	//label_try_start_12:
	w->close();
	//label_try_end_15:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23;
	}
	catch (...){
		goto label_catchall_18;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_12 .. :try_end_15} :catch_23
	//    .catchall {:try_start_12 .. :try_end_15} :catchall_18
label_cond_15:
label_goto_15:
	if ( !(cVar7) )  
		goto label_cond_3f;
	try {
	//label_try_start_17:
	// throw
	throw cVar7;
	// 213    :try_end_18
	// 214    .catchall {:try_start_17 .. :try_end_18} :catchall_18
	// 216    .line 266
	// 217    .end local v0    # "w":Ljava/io/Writer;
label_catchall_18:
	// move-exception
	
	try {
	//label_try_start_1a:
	this->out = 0x0;
	this->cb = 0x0;
	// throw
	throw;
	// 234    :try_end_20
	// 235    .catchall {:try_start_1a .. :try_end_20} :catchall_20
	// 237    .line 260
label_catchall_20:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;
	// 245    .line 269
	// 246    .restart local v0    # "w":Ljava/io/Writer;
label_catch_23:
	// move-exception
	cVar7 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_15;
	// 252    .end local v0    # "w":Ljava/io/Writer;
label_catch_25:
	// move-exception
	cVar3 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	try {
	//label_try_start_26:
	// throw
	throw cVar3;
	// 258    :try_end_27
	// 259    .catchall {:try_start_26 .. :try_end_27} :catchall_27
label_catchall_27:
	// move-exception
	
	tryCatchExcetionList.pop_back();
	cVar7 = cVar3;
	cVar5 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_goto_2b:
	if ( !(w) )  
		goto label_cond_30;
	try {
	//label_try_start_2d:
	w->close();
	//label_try_end_30:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_33;
	}
	catch (...){
		goto label_catchall_18;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_2d .. :try_end_30} :catch_33
	//    .catchall {:try_start_2d .. :try_end_30} :catchall_18
label_cond_30:
label_goto_30:
	if ( !(cVar7) )  
		goto label_cond_3e;
	try {
	//label_try_start_32:
	// throw
	throw cVar7;
label_catch_33:
	// move-exception
	cVar6 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	if ( cVar7 )     
		goto label_cond_38;
	cVar7 = cVar6;
	goto label_goto_30;
label_cond_38:
	if ( cVar7 == cVar6 )
		goto label_cond_30;
	cVar7->addSuppressed(cVar6);
	goto label_goto_30;
label_cond_3e:
	// throw
	throw cVar5;
	// 304    :try_end_3f
	// 305    .catchall {:try_start_32 .. :try_end_3f} :catchall_18
	// 307    .line 267
	// 308    .restart local v0    # "w":Ljava/io/Writer;
label_cond_3f:
	try {
	//label_try_start_40:
	this->out = 0x0;
	this->cb = 0x0;
	//label_try_end_45:
	}
	catch (...){
		goto label_catchall_20;
	}
	//    .catchall {:try_start_40 .. :try_end_45} :catchall_20
	cVar1->monitor_exit();
	return;
	// 327    .line 269
	// 328    .end local v0    # "w":Ljava/io/Writer;
label_catchall_47:
	// move-exception
	catchall = tryCatchExcetionList.back();
	goto label_goto_2b;

}
// .method public flush()V
void java::io::BufferedWriter::flush()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 338        value = {
	// 339            Ljava/io/IOException;
	// 340        }
	// 341    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->flushBuffer();
	this->out->flush();
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_3 .. :try_end_b} :catchall_d
	cVar0->monitor_exit();
	return;
	// 365    .line 252
label_catchall_d:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method flushBuffer()V
void java::io::BufferedWriter::flushBuffer()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 377        value = {
	// 378            Ljava/io/IOException;
	// 379        }
	// 380    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	//label_try_end_8:
	}
	catch (...){
		goto label_catchall_1b;
	}
	//    .catchall {:try_start_3 .. :try_end_8} :catchall_1b
	if ( this->nextChar )     
		goto label_cond_c;
	cVar0->monitor_exit();
	return;
	// 404    .line 129
label_cond_c:
	try {
	//label_try_start_c:
	this->out->write(this->cb, 0x0, this->nextChar);
	this->nextChar = 0x0;
	//label_try_end_19:
	}
	catch (...){
		goto label_catchall_1b;
	}
	//    .catchall {:try_start_c .. :try_end_19} :catchall_1b
	cVar0->monitor_exit();
	return;
	// 429    .line 125
label_catchall_1b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public newLine()V
void java::io::BufferedWriter::newLine()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 441        value = {
	// 442            Ljava/io/IOException;
	// 443        }
	// 444    .end annotation
	this->write(this->lineSeparator);
	return;

}
// .method public write(I)V
void java::io::BufferedWriter::write(int c)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	
	//    .param p1, "c"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 460        value = {
	// 461            Ljava/io/IOException;
	// 462        }
	// 463    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	if ( this->nextChar <  this->nChars )
		goto label_cond_f;
	this->flushBuffer();
label_cond_f:
	cVar1 = this->nextChar;
	this->nextChar = ( cVar1 + 0x1);
	this->cb[cVar1] = (char)(c);
	//label_try_end_1a:
	}
	catch (...){
		goto label_catchall_1c;
	}
	//    .catchall {:try_start_3 .. :try_end_1a} :catchall_1c
	cVar0->monitor_exit();
	return;
	// 506    .line 140
label_catchall_1c:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public write(Ljava/lang/String;II)V
void java::io::BufferedWriter::write(std::shared_ptr<java::lang::String> s,int off,int len)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	int b;
	int t;
	int d;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 521        value = {
	// 522            Ljava/io/IOException;
	// 523        }
	// 524    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	b = off;
	//    .local v0, "b":I
	t = (off + len);
	//    .local v2, "t":I
label_cond_9:
label_goto_9:
	if ( b >= t )
		goto label_cond_32;
	d = this->min((this->nChars -  this->nextChar), (t - b));
	//    .local v1, "d":I
	s->getChars(b, (b + d), this->cb, this->nextChar);
	b = (b +  d);
	this->nextChar = (this->nextChar +  d);
	if ( this->nextChar <  this->nChars )
		goto label_cond_9;
	this->flushBuffer();
	//label_try_end_2e:
	}
	catch (...){
		goto label_catchall_2f;
	}
	//    .catchall {:try_start_3 .. :try_end_2e} :catchall_2f
	goto label_goto_9;
	// 595    .line 220
	// 596    .end local v0    # "b":I
	// 597    .end local v1    # "d":I
	// 598    .end local v2    # "t":I
label_catchall_2f:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 606    .restart local v0    # "b":I
	// 607    .restart local v2    # "t":I
label_cond_32:
	cVar0->monitor_exit();
	return;

}
// .method public write([CII)V
void java::io::BufferedWriter::write(std::shared_ptr<char[]> cbuf,int off,int len)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	int b;
	int t;
	int d;
	
	//    .param p1, "cbuf"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 621        value = {
	// 622            Ljava/io/IOException;
	// 623        }
	// 624    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	if ( off < 0 ) 
		goto label_cond_b;
	if ( off <= cbuf->size() )
		goto label_cond_14;
label_cond_b:
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar1;
	// 650    :try_end_11
	// 651    .catchall {:try_start_3 .. :try_end_11} :catchall_11
	// 653    .line 174
label_catchall_11:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 661    .line 176
label_cond_14:
	if ( len < 0 ) 
		goto label_cond_b;
	try {
	//label_try_start_18:
	//label_try_end_19:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_18 .. :try_end_19} :catchall_11
	if ( (off + len) >  cbuf->size() )
		goto label_cond_b;
	if ( (off + len) < 0 ) 
		goto label_cond_b;
	if ( len )     
		goto label_cond_23;
	cVar0->monitor_exit();
	return;
	// 687    .line 183
label_cond_23:
	try {
	//label_try_start_23:
	if ( len <  this->nChars )
		goto label_cond_31;
	this->flushBuffer();
	this->out->write(cbuf, off, len);
	//label_try_end_2f:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_23 .. :try_end_2f} :catchall_11
	cVar0->monitor_exit();
	return;
	// 709    .line 192
label_cond_31:
	b = off;
	//    .local v0, "b":I
	t = (off + len);
	//    .local v2, "t":I
label_cond_34:
label_goto_34:
	if ( b >= t )
		goto label_cond_58;
	try {
	//label_try_start_36:
	d = this->min((this->nChars -  this->nextChar), (t - b));
	//    .local v1, "d":I
	java::lang::System::arraycopy(cbuf, b, this->cb, this->nextChar, d);
	b = (b +  d);
	this->nextChar = (this->nextChar +  d);
	if ( this->nextChar <  this->nChars )
		goto label_cond_34;
	this->flushBuffer();
	//label_try_end_57:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_36 .. :try_end_57} :catchall_11
	goto label_goto_34;
	// 768    .end local v1    # "d":I
label_cond_58:
	cVar0->monitor_exit();
	return;

}


