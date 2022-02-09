// CPP L:\smali2cpp20\x64\Release\out\java\io\Console$LineReader.smali
#include "java2ctype.h"
#include "java.io.Console_S_LineReader.h"
#include "java.io.Console.h"
#include "java.io.Reader.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Object.h"

// .method constructor <init>(Ljava/io/Console;Ljava/io/Reader;)V
java::io::Console_S_LineReader::Console_S_LineReader(std::shared_ptr<java::io::Console> this_S_0,std::shared_ptr<java::io::Reader> in)
{
	
	int cVar0;
	
	//    .param p1, "this$0"    # Ljava/io/Console;
	//    .param p2, "in"    # Ljava/io/Reader;
	cVar0 = 0x0;
	this->this_S_0 = this_S_0;
	// 043    invoke-direct {p0}, Ljava/io/Reader;-><init>()V
	this->in = in;
	this->cb = std::make_shared<std::vector<char[]>>(0x400);
	this->nChars = cVar0;
	this->nextChar = cVar0;
	this->leftoverLF = cVar0;
	return;

}
// .method public close()V
void java::io::Console_S_LineReader::close()
{
	
	return;

}
// .method public read([CII)I
int java::io::Console_S_LineReader::read(std::shared_ptr<char[]> cbuf,int offset,int length)
{
	
	int off;
	int end;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	int cVar2;
	std::shared_ptr<java::lang::Object> catchall;
	int n;
	char cVar2;
	int cVar3;
	std::shared_ptr<java::lang::Object> cVar4;
	std::shared_ptr<java::lang::Object> cbuf;
	
	//    .param p1, "cbuf"    # [C
	//    .param p2, "offset"    # I
	//    .param p3, "length"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 083        value = {
	// 084            Ljava/io/IOException;
	// 085        }
	// 086    .end annotation
	off = offset;
	//    .local v5, "off":I
	end = (offset + length);
	//    .local v2, "end":I
	if ( offset < 0 ) 
		goto label_cond_8;
	if ( offset <= cbuf->size() )
		goto label_cond_e;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 112    .line 427
label_cond_e:
	if ( length < 0 ) 
		goto label_cond_8;
	if ( end < 0 ) 
		goto label_cond_8;
	if ( end >  cbuf->size() )
		goto label_cond_8;
	cVar1 = java::io::Console::-get1(this->this_S_0);
	cVar1->monitor_enter();
	//    .local v3, "eof":Z
	cVar2 = 0x0;
label_goto_1e:
	try {
	//label_try_start_1e:
	if ( this->nextChar <  this->nChars )
		goto label_cond_54;
	0x0;
	//    .local v4, "n":I
label_cond_25:
	n = this->in->read(this->cb, 0x0, this->cb->size());
	if ( !(n) )  
		goto label_cond_25;
	if ( n <= 0 )
		goto label_cond_98;
	this->nChars = n;
	this->nextChar = 0x0;
	if ( n >= this->cb->size() )
		goto label_cond_54;
	if ( this->cb[( n + -0x1)] == 0xa )
		goto label_cond_54;
	if ( this->cb[( n + -0x1)] == 0xd )
		goto label_cond_54;
	//    .end local v4    # "n":I
label_cond_54:
	if ( !(this->leftoverLF) )  
		goto label_cond_70;
	if ( cbuf != java::io::Console::-get0(this->this_S_0) )
		goto label_cond_70;
	if ( this->cb[this->nextChar] != 0xa )
		goto label_cond_70;
	this->nextChar = ( this->nextChar + 0x1);
label_cond_70:
	this->leftoverLF = 0x0;
	//label_try_end_73:
	}
	catch (...){
		goto label_catchall_122;
	}
	//    .catchall {:try_start_1e .. :try_end_73} :catchall_122
	cVar2 = cVar2;
	//    .local v1, "c":C
	off = off;
	//    .end local v5    # "off":I
	//    .local v6, "off":I
label_goto_75:
	try {
	//label_try_start_75:
	if ( this->nextChar >= this->nChars )
		goto label_cond_118;
	cVar2 = this->cb[this->nextChar];
	//label_try_end_81:
	}
	catch (...){
		goto label_catchall_125;
	}
	//    .catchall {:try_start_75 .. :try_end_81} :catchall_125
	off = ( off + 0x1);
	//    .end local v6    # "off":I
	//    .restart local v5    # "off":I
	try {
	//label_try_start_83:
	cbuf[off] = cVar2;
	//label_try_end_85:
	}
	catch (...){
		goto label_catchall_129;
	}
	//    .catchall {:try_start_83 .. :try_end_85} :catchall_129
	//    .end local v1    # "c":C
	//    .local v0, "c":C
	try {
	//label_try_start_85:
	cVar3 = this->nextChar;
	this->nextChar = ( cVar3 + 0x1);
	this->cb[cVar3] = 0x0;
	//label_try_end_90:
	}
	catch (...){
		goto label_catchall_122;
	}
	//    .catchall {:try_start_85 .. :try_end_90} :catchall_122
	if ( cVar2 != 0xa )
		goto label_cond_a3;
	cVar1->monitor_exit();
	return (off - offset);
	// 317    .line 453
	// 318    .end local v0    # "c":C
	// 319    .restart local v4    # "n":I
label_cond_98:
	if ( (off - offset) )     
		goto label_cond_9f;
	cVar1->monitor_exit();
	return -0x1;
	// 332    .line 455
label_cond_9f:
	cVar1->monitor_exit();
	return (off - offset);
	// 340    .line 471
	// 341    .end local v4    # "n":I
	// 342    .restart local v0    # "c":C
label_cond_a3:
	if ( cVar2 != 0xd )
		goto label_cond_ff;
	if ( off != end )
		goto label_cond_b8;
	try {
	//label_try_start_a9:
	if ( cbuf != java::io::Console::-get0(this->this_S_0) )
		goto label_cond_f8;
	cVar4 = java::io::Console::-wrap0(this->this_S_0);
	cVar4->size();
label_cond_b8:
	if ( this->nextChar != this->nChars )
		goto label_cond_d7;
	if ( !(this->in->ready()) )  
		goto label_cond_d7;
	this->nChars = this->in->read(this->cb, 0x0, this->cb->size());
	this->nextChar = 0x0;
label_cond_d7:
	if ( this->nextChar >= this->nChars )
		goto label_cond_f4;
	//label_try_end_e3:
	}
	catch (...){
		goto label_catchall_122;
	}
	//    .catchall {:try_start_a9 .. :try_end_e3} :catchall_122
	if ( this->cb[this->nextChar] != 0xa )
		goto label_cond_f4;
	off = ( off + 0x1);
	//    .end local v5    # "off":I
	//    .restart local v6    # "off":I
	try {
	//label_try_start_eb:
	cVar4[off] = 0xa;
	this->nextChar = ( this->nextChar + 0x1);
	//label_try_end_f3:
	}
	catch (...){
		goto label_catchall_12c;
	}
	//    .catchall {:try_start_eb .. :try_end_f3} :catchall_12c
	//    .end local v6    # "off":I
	//    .restart local v5    # "off":I
label_cond_f4:
	cVar1->monitor_exit();
	return (off - offset);
	// 460    .line 481
label_cond_f8:
	try {
	//label_try_start_f9:
	this->leftoverLF = 0x1;
	//label_try_end_fb:
	}
	catch (...){
		goto label_catchall_122;
	}
	//    .catchall {:try_start_f9 .. :try_end_fb} :catchall_122
	cVar1->monitor_exit();
	return (off - offset);
	// 476    .line 501
label_cond_ff:
	if ( off != end )
		goto label_cond_110;
	try {
	//label_try_start_101:
	if ( cbuf != java::io::Console::-get0(this->this_S_0) )
		goto label_cond_114;
	cbuf = java::io::Console::-wrap0(this->this_S_0);
	end = cbuf->size();
	//label_try_end_110:
	}
	catch (...){
		goto label_catchall_122;
	}
	//    .catchall {:try_start_101 .. :try_end_110} :catchall_122
label_cond_110:
	cVar2 = cVar2;
	//    .end local v0    # "c":C
	//    .restart local v1    # "c":C
	off = off;
	//    .end local v5    # "off":I
	//    .restart local v6    # "off":I
	goto label_goto_75;
	// 513    .line 506
	// 514    .end local v1    # "c":C
	// 515    .end local v6    # "off":I
	// 516    .restart local v0    # "c":C
	// 517    .restart local v5    # "off":I
label_cond_114:
	cVar1->monitor_exit();
	return (off - offset);
	// 525    .line 510
	// 526    .end local v0    # "c":C
	// 527    .end local v5    # "off":I
	// 528    .restart local v1    # "c":C
	// 529    .restart local v6    # "off":I
label_cond_118:
	if ( !(0x0) )  
		goto label_cond_11e;
	cVar1->monitor_exit();
	return (off - offset);
label_cond_11e:
	cVar2 = cVar2;
	//    .end local v1    # "c":C
	//    .restart local v0    # "c":C
	//    .end local v6    # "off":I
	//    .restart local v5    # "off":I
	goto label_goto_1e;
	// 551    .line 431
	// 552    .end local v0    # "c":C
label_catchall_122:
	// move-exception
	catchall = tryCatchExcetionList.back();
label_goto_123:
	cVar1->monitor_exit();
	// throw
	throw;
	// 561    .end local v5    # "off":I
	// 562    .restart local v1    # "c":C
	// 563    .restart local v6    # "off":I
label_catchall_125:
	// move-exception
	catchall = tryCatchExcetionList.back();
	cVar2 = cVar2;
	//    .end local v1    # "c":C
	//    .restart local v0    # "c":C
	off;
	//    .end local v6    # "off":I
	//    .restart local v5    # "off":I
	goto label_goto_123;
	// 577    .end local v0    # "c":C
	// 578    .restart local v1    # "c":C
label_catchall_129:
	// move-exception
	catchall = tryCatchExcetionList.back();
	cVar2 = cVar2;
	//    .end local v1    # "c":C
	//    .restart local v0    # "c":C
	goto label_goto_123;
	// 588    .end local v5    # "off":I
	// 589    .restart local v6    # "off":I
label_catchall_12c:
	// move-exception
	catchall = tryCatchExcetionList.back();
	off;
	//    .end local v6    # "off":I
	//    .restart local v5    # "off":I
	goto label_goto_123;

}
// .method public ready()Z
bool java::io::Console_S_LineReader::ready()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 603        value = {
	// 604            Ljava/io/IOException;
	// 605        }
	// 606    .end annotation
	return this->in->ready();

}


