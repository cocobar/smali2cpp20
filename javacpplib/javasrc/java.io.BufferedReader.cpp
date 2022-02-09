// CPP L:\smali2cpp20\x64\Release\out\java\io\BufferedReader.smali
#include "java2ctype.h"
#include "java.io.BufferedReader_S_1.h"
#include "java.io.BufferedReader.h"
#include "java.io.IOException.h"
#include "java.io.Reader.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.System.h"
#include "java.util.Spliterator.h"
#include "java.util.Spliterators.h"
#include "java.util.stream.Stream.h"
#include "java.util.stream.StreamSupport.h"

static java::io::BufferedReader::INVALIDATED = -0x2;
static java::io::BufferedReader::UNMARKED = -0x1;
static java::io::BufferedReader::defaultCharBufferSize;
static java::io::BufferedReader::defaultExpectedLineLength;
// .method static constructor <clinit>()V
void java::io::BufferedReader::static_cinit()
{
	
	java::io::BufferedReader::defaultCharBufferSize = 0x2000;
	java::io::BufferedReader::defaultExpectedLineLength = 0x50;
	return;

}
// .method public constructor <init>(Ljava/io/Reader;)V
java::io::BufferedReader::BufferedReader(std::shared_ptr<java::io::Reader> in)
{
	
	//    .param p1, "in"    # Ljava/io/Reader;
	java::io::BufferedReader::(in, java::io::BufferedReader::defaultCharBufferSize);
	return;

}
// .method public constructor <init>(Ljava/io/Reader;I)V
java::io::BufferedReader::BufferedReader(std::shared_ptr<java::io::Reader> in,int sz)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "in"    # Ljava/io/Reader;
	//    .param p2, "sz"    # I
	cVar0 = 0x0;
	java::io::Reader::(in);
	this->markedChar = -0x1;
	this->readAheadLimit = cVar0;
	this->skipLF = cVar0;
	this->markedSkipLF = cVar0;
	if ( sz > 0 ) 
		goto label_cond_18;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Buffer size <= 0")));
	// throw
	throw cVar1;
	// 104    .line 105
label_cond_18:
	this->in = in;
	this->cb = std::make_shared<std::vector<char[]>>(sz);
	this->nChars = cVar0;
	this->nextChar = cVar0;
	return;

}
// .method private ensureOpen()V
void java::io::BufferedReader::ensureOpen()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 125        value = {
	// 126            Ljava/io/IOException;
	// 127        }
	// 128    .end annotation
	if ( this->in )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream closed")));
	// throw
	throw cVar0;
	// 145    .line 124
label_cond_d:
	return;

}
// .method private fill()V
void java::io::BufferedReader::fill()
{
	
	int cVar0;
	int dst;
	int n;
	int delta;
	int nlength;
	std::shared<std::vector<char[]>> ncb;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 153        value = {
	// 154            Ljava/io/IOException;
	// 155        }
	// 156    .end annotation
	cVar0 = 0x0;
	if ( this->markedChar >  -0x1 )
		goto label_cond_1e;
	dst = 0x0;
	//    .local v1, "dst":I
label_cond_7:
label_goto_7:
	n = this->in->read(this->cb, dst, (this->cb->size() -  dst));
	//    .local v2, "n":I
	if ( !(n) )  
		goto label_cond_7;
	if ( n <= 0 )
		goto label_cond_1d;
	this->nChars = (dst + n);
	this->nextChar = dst;
label_cond_1d:
	return;
	// 208    .line 136
	// 209    .end local v1    # "dst":I
	// 210    .end local v2    # "n":I
label_cond_1e:
	delta = (this->nextChar - this->markedChar);
	//    .local v0, "delta":I
	if ( delta <  this->readAheadLimit )
		goto label_cond_2f;
	this->markedChar = -0x2;
	this->readAheadLimit = cVar0;
	dst = 0x0;
	//    .restart local v1    # "dst":I
	goto label_goto_7;
	// 238    .line 143
	// 239    .end local v1    # "dst":I
label_cond_2f:
	if ( this->readAheadLimit >  this->cb->size() )
		goto label_cond_47;
	java::lang::System::arraycopy(this->cb, this->markedChar, this->cb, cVar0, delta);
	this->markedChar = cVar0;
	dst = delta;
	//    .restart local v1    # "dst":I
label_goto_42:
	this->nChars = delta;
	this->nextChar = delta;
	goto label_goto_7;
	// 273    .line 156
	// 274    .end local v1    # "dst":I
label_cond_47:
	nlength = ( this->cb->size() * 0x2);
	//    .local v4, "nlength":I
	if ( nlength <= this->readAheadLimit )
		goto label_cond_52;
label_cond_52:
	ncb = std::make_shared<std::vector<char[]>>(nlength);
	//    .local v3, "ncb":[C
	java::lang::System::arraycopy(this->cb, this->markedChar, ncb, cVar0, delta);
	this->cb = ncb;
	this->markedChar = cVar0;
	dst = delta;
	//    .restart local v1    # "dst":I
	goto label_goto_42;

}
// .method private read1([CII)I
int java::io::BufferedReader::read1(std::shared_ptr<char[]> cbuf,int off,int len)
{
	
	int cVar0;
	int n;
	
	//    .param p1, "cbuf"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 322        value = {
	// 323            Ljava/io/IOException;
	// 324        }
	// 325    .end annotation
	cVar0 = -0x1;
	if ( this->nextChar <  this->nChars )
		goto label_cond_20;
	if ( len <  this->cb->size() )
		goto label_cond_1d;
	if ( this->markedChar >  cVar0 )
		goto label_cond_1d;
	if ( !(( this->skipLF ^ 0x1)) )  
		goto label_cond_1d;
	return this->in->read(cbuf, off, len);
	// 363    .line 223
label_cond_1d:
	this->fill();
label_cond_20:
	if ( this->nextChar <  this->nChars )
		goto label_cond_27;
	return cVar0;
	// 377    .line 226
label_cond_27:
	if ( !(this->skipLF) )  
		goto label_cond_4e;
	this->skipLF = 0x0;
	if ( this->cb[this->nextChar] != 0xa )
		goto label_cond_4e;
	this->nextChar = ( this->nextChar + 0x1);
	if ( this->nextChar <  this->nChars )
		goto label_cond_47;
	this->fill();
label_cond_47:
	if ( this->nextChar <  this->nChars )
		goto label_cond_4e;
	return cVar0;
	// 427    .line 236
label_cond_4e:
	n = java::lang::Math::min(len, (this->nChars -  this->nextChar));
	//    .local v0, "n":I
	java::lang::System::arraycopy(this->cb, this->nextChar, cbuf, off, n);
	this->nextChar = (this->nextChar +  n);
	return n;

}
// .method public close()V
void java::io::BufferedReader::close()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 463        value = {
	// 464            Ljava/io/IOException;
	// 465        }
	// 466    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	//label_try_end_5:
	}
	catch (...){
		goto label_catchall_1e;
	}
	//    .catchall {:try_start_3 .. :try_end_5} :catchall_1e
	if ( this->in )     
		goto label_cond_9;
	cVar0->monitor_exit();
	return;
	// 487    .line 536
label_cond_9:
	try {
	//label_try_start_9:
	this->in->close();
	//label_try_end_e:
	}
	catch (...){
		goto label_catchall_16;
	}
	//    .catchall {:try_start_9 .. :try_end_e} :catchall_16
	try {
	//label_try_start_f:
	this->in = 0x0;
	this->cb = 0x0;
	//label_try_end_14:
	}
	catch (...){
		goto label_catchall_1e;
	}
	//    .catchall {:try_start_f .. :try_end_14} :catchall_1e
	cVar0->monitor_exit();
	return;
	// 514    .line 537
label_catchall_16:
	// move-exception
	
	try {
	//label_try_start_18:
	this->in = 0x0;
	this->cb = 0x0;
	// throw
	throw;
	// 531    :try_end_1e
	// 532    .catchall {:try_start_18 .. :try_end_1e} :catchall_1e
	// 534    .line 532
label_catchall_1e:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public lines()Ljava/util/stream/Stream;
std::shared_ptr<java::util::stream::Stream<java::lang::String>> java::io::BufferedReader::lines()
{
	
	std::shared_ptr<java::io::BufferedReader_S_1> iter;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 546        value = {
	// 547            "()",
	// 548            "Ljava/util/stream/Stream",
	// 549            "<",
	// 550            "Ljava/lang/String;",
	// 551            ">;"
	// 552        }
	// 553    .end annotation
	iter = std::make_shared<java::io::BufferedReader_S_1>(this);
	//    .local v0, "iter":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	return java::util::stream::StreamSupport::stream(java::util::Spliterators::spliteratorUnknownSize(iter, 0x110), 0x0);

}
// .method public mark(I)V
void java::io::BufferedReader::mark(int readAheadLimit)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	
	//    .param p1, "readAheadLimit"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 585        value = {
	// 586            Ljava/io/IOException;
	// 587        }
	// 588    .end annotation
	if ( readAheadLimit >= 0 )
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Read-ahead limit < 0")));
	// throw
	throw cVar0;
	// 603    .line 505
label_cond_b:
	cVar1 = this->lock;
	cVar1->monitor_enter();
	try {
	//label_try_start_e:
	this->ensureOpen();
	this->readAheadLimit = readAheadLimit;
	this->markedChar = this->nextChar;
	this->markedSkipLF = this->skipLF;
	//label_try_end_1b:
	}
	catch (...){
		goto label_catchall_1d;
	}
	//    .catchall {:try_start_e .. :try_end_1b} :catchall_1d
	cVar1->monitor_exit();
	return;
	// 633    .line 505
label_catchall_1d:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;

}
// .method public markSupported()Z
bool java::io::BufferedReader::markSupported()
{
	
	return 0x1;

}
// .method public read()I
int java::io::BufferedReader::read()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 655        value = {
	// 656            Ljava/io/IOException;
	// 657        }
	// 658    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
label_goto_6:
	if ( this->nextChar <  this->nChars )
		goto label_cond_18;
	this->fill();
	//label_try_end_13:
	}
	catch (...){
		goto label_catchall_30;
	}
	//    .catchall {:try_start_3 .. :try_end_13} :catchall_30
	if ( this->nextChar <  this->nChars )
		goto label_cond_18;
	cVar0->monitor_exit();
	return -0x1;
	// 697    .line 197
label_cond_18:
	try {
	//label_try_start_18:
	if ( !(this->skipLF) )  
		goto label_cond_33;
	this->skipLF = 0x0;
	if ( this->cb[this->nextChar] != 0xa )
		goto label_cond_33;
	this->nextChar = ( this->nextChar + 0x1);
	//label_try_end_2f:
	}
	catch (...){
		goto label_catchall_30;
	}
	//    .catchall {:try_start_18 .. :try_end_2f} :catchall_30
	goto label_goto_6;
	// 731    .line 189
label_catchall_30:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 739    .line 204
label_cond_33:
	try {
	//label_try_start_33:
	cVar1 = this->nextChar;
	this->nextChar = ( cVar1 + 0x1);
	//label_try_end_3d:
	}
	catch (...){
		goto label_catchall_30;
	}
	//    .catchall {:try_start_33 .. :try_end_3d} :catchall_30
	cVar0->monitor_exit();
	return this->cb[cVar1];

}
// .method public read([CII)I
int java::io::BufferedReader::read(std::shared_ptr<char[]> cbuf,int off,int len)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	int n;
	int n1;
	
	//    .param p1, "cbuf"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 765        value = {
	// 766            Ljava/io/IOException;
	// 767        }
	// 768    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_4:
	this->ensureOpen();
	if ( off < 0 ) 
		goto label_cond_c;
	if ( off <= cbuf->size() )
		goto label_cond_15;
label_cond_c:
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar1;
	// 796    :try_end_12
	// 797    .catchall {:try_start_4 .. :try_end_12} :catchall_12
	// 799    .line 288
label_catchall_12:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 807    .line 290
label_cond_15:
	if ( len < 0 ) 
		goto label_cond_c;
	try {
	//label_try_start_19:
	//label_try_end_1a:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_19 .. :try_end_1a} :catchall_12
	if ( (off + len) >  cbuf->size() )
		goto label_cond_c;
	if ( (off + len) < 0 ) 
		goto label_cond_c;
	if ( len )     
		goto label_cond_24;
	cVar0->monitor_exit();
	return 0x0;
	// 833    .line 297
label_cond_24:
	try {
	//label_try_start_24:
	//label_try_end_27:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_24 .. :try_end_27} :catchall_12
	n = this->read1(cbuf, off, len);
	//    .local v0, "n":I
	if ( n > 0 ) 
		goto label_cond_2d;
	cVar0->monitor_exit();
	return n;
	// 850    .line 302
	// 851    .local v1, "n1":I
label_cond_2c:
	n = (n +  n1);
	//    .end local v1    # "n1":I
label_cond_2d:
	if ( n >= len )
		goto label_cond_41;
	try {
	//label_try_start_2f:
	if ( !(this->in->ready()) )  
		goto label_cond_41;
	//label_try_end_3e:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_2f .. :try_end_3e} :catchall_12
	n1 = this->read1(cbuf, (off + n), (len - n));
	//    .restart local v1    # "n1":I
	if ( n1 > 0 ) 
		goto label_cond_2c;
	//    .end local v1    # "n1":I
label_cond_41:
	cVar0->monitor_exit();
	return n;

}
// .method public readLine()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::BufferedReader::readLine()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 895        value = {
	// 896            Ljava/io/IOException;
	// 897        }
	// 898    .end annotation
	return this->readLine(0x0);

}
// .method readLine(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::BufferedReader::readLine(bool ignoreLF)
{
	
	int cVar0;
	int cVar1;
	int s;
	std::shared_ptr<java::lang::Object> cVar2;
	std::shared_ptr<java::lang::Object> catchall;
	std::shared_ptr<java::lang::StringBuffer> s;
	int i;
	char c;
	int startChar;
	std::shared_ptr<java::lang::String> str;
	auto s;
	
	//    .param p1, "ignoreLF"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 915        value = {
	// 916            Ljava/io/IOException;
	// 917        }
	// 918    .end annotation
	cVar0 = 0xd;
	cVar1 = 0xa;
	s = 0x0;
	//    .local v4, "s":Ljava/lang/StringBuffer;
	cVar2 = this->lock;
	cVar2->monitor_enter();
	try {
	//label_try_start_9:
	this->ensureOpen();
	if ( ignoreLF )     
		goto label_cond_2e;
	//label_try_end_10:
	}
	catch (...){
		goto label_catchall_98;
	}
	//    .catchall {:try_start_9 .. :try_end_10} :catchall_98
	//    .local v3, "omitLF":Z
	s = s;
	//    .end local v3    # "omitLF":Z
	//    .end local v4    # "s":Ljava/lang/StringBuffer;
	//    .local v5, "s":Ljava/lang/StringBuffer;
label_goto_11:
	try {
	//label_try_start_11:
	if ( this->nextChar <  this->nChars )
		goto label_cond_1a;
	this->fill();
label_cond_1a:
	if ( this->nextChar <  this->nChars )
		goto label_cond_33;
	if ( !(s) )  
		goto label_cond_31;
	if ( s->length() <= 0 )
		goto label_cond_31;
	//label_try_end_2b:
	}
	catch (...){
		goto label_catchall_9b;
	}
	//    .catchall {:try_start_11 .. :try_end_2b} :catchall_9b
	cVar2->monitor_exit();
	return s->toString();
	// 993    .line 329
	// 994    .end local v5    # "s":Ljava/lang/StringBuffer;
	// 995    .restart local v4    # "s":Ljava/lang/StringBuffer;
label_cond_2e:
	//    .local v3, "omitLF":Z
	s = s;
	//    .restart local v5    # "s":Ljava/lang/StringBuffer;
	goto label_goto_11;
	// 1005    .end local v3    # "omitLF":Z
	// 1006    .end local v4    # "s":Ljava/lang/StringBuffer;
label_cond_31:
	cVar2->monitor_exit();
	return 0x0;
	// 1013    .line 342
label_cond_33:
	//    .local v1, "eol":Z
	0x0;
	//    .local v0, "c":C
	if ( !(omitLF) )  
		goto label_cond_45;
	try {
	//label_try_start_37:
	if ( this->cb[this->nextChar] != cVar1 )
		goto label_cond_45;
	this->nextChar = ( this->nextChar + 0x1);
label_cond_45:
	this->skipLF = 0x0;
	//    .restart local v3    # "omitLF":Z
	i = this->nextChar;
	//    .end local v0    # "c":C
	//    .local v2, "i":I
label_goto_4b:
	if ( i >= this->nChars )
		goto label_cond_58;
	c = this->cb[i];
	//    .local v0, "c":C
	if ( c == cVar1 )
		goto label_cond_57;
	if ( c != cVar0 )
		goto label_cond_76;
label_cond_57:
	//    .end local v0    # "c":C
label_cond_58:
	startChar = this->nextChar;
	//    .local v6, "startChar":I
	this->nextChar = i;
	if ( !(0x0) )  
		goto label_cond_85;
	if ( s )     
		goto label_cond_79;
	str = std::make_shared<java::lang::String>(this->cb, startChar, (i - startChar));
	//    .local v7, "str":Ljava/lang/String;
label_goto_69:
	this->nextChar = ( this->nextChar + 0x1);
	if ( c != cVar0 )
		goto label_cond_74;
	this->skipLF = 0x1;
	//label_try_end_74:
	}
	catch (...){
		goto label_catchall_9b;
	}
	//    .catchall {:try_start_37 .. :try_end_74} :catchall_9b
label_cond_74:
	cVar2->monitor_exit();
	return str;
	// 1125    .line 353
	// 1126    .end local v6    # "startChar":I
	// 1127    .end local v7    # "str":Ljava/lang/String;
	// 1128    .restart local v0    # "c":C
label_cond_76:
	i = ( i + 0x1);
	goto label_goto_4b;
	// 1134    .line 369
	// 1135    .end local v0    # "c":C
	// 1136    .restart local v6    # "startChar":I
label_cond_79:
	try {
	//label_try_start_79:
	s->append(this->cb, startChar, (i - startChar));
	//    .restart local v7    # "str":Ljava/lang/String;
	goto label_goto_69;
	// 1153    .line 379
	// 1154    .end local v7    # "str":Ljava/lang/String;
label_cond_85:
	if ( s )     
		goto label_cond_9e;
	s = std::make_shared<java::lang::StringBuffer>(java::io::BufferedReader::defaultExpectedLineLength);
	//label_try_end_8e:
	}
	catch (...){
		goto label_catchall_9b;
	}
	//    .catchall {:try_start_79 .. :try_end_8e} :catchall_9b
	//    .end local v5    # "s":Ljava/lang/StringBuffer;
	//    .local v4, "s":Ljava/lang/StringBuffer;
label_goto_8e:
	try {
	//label_try_start_8e:
	s->append(this->cb, startChar, (i - startChar));
	//label_try_end_95:
	}
	catch (...){
		goto label_catchall_98;
	}
	//    .catchall {:try_start_8e .. :try_end_95} :catchall_98
	s = s;
	//    .end local v4    # "s":Ljava/lang/StringBuffer;
	//    .restart local v5    # "s":Ljava/lang/StringBuffer;
	goto label_goto_11;
	// 1186    .line 327
	// 1187    .end local v1    # "eol":Z
	// 1188    .end local v2    # "i":I
	// 1189    .end local v3    # "omitLF":Z
	// 1190    .end local v5    # "s":Ljava/lang/StringBuffer;
	// 1191    .end local v6    # "startChar":I
label_catchall_98:
	// move-exception
	catchall = tryCatchExcetionList.back();
label_goto_99:
	cVar2->monitor_exit();
	// throw
	throw;
	// 1200    .restart local v5    # "s":Ljava/lang/StringBuffer;
label_catchall_9b:
	// move-exception
	catchall = tryCatchExcetionList.back();
	s;
	//    .end local v5    # "s":Ljava/lang/StringBuffer;
	//    .restart local v4    # "s":Ljava/lang/StringBuffer;
	goto label_goto_99;
	// 1210    .end local v4    # "s":Ljava/lang/StringBuffer;
	// 1211    .restart local v1    # "eol":Z
	// 1212    .restart local v2    # "i":I
	// 1213    .restart local v3    # "omitLF":Z
	// 1214    .restart local v5    # "s":Ljava/lang/StringBuffer;
	// 1215    .restart local v6    # "startChar":I
label_cond_9e:
	s = s;
	//    .end local v5    # "s":Ljava/lang/StringBuffer;
	//    .restart local v4    # "s":Ljava/lang/StringBuffer;
	goto label_goto_8e;

}
// .method public ready()Z
bool java::io::BufferedReader::ready()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	bool cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1227        value = {
	// 1228            Ljava/io/IOException;
	// 1229        }
	// 1230    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	if ( !(this->skipLF) )  
		goto label_cond_34;
	if ( this->nextChar <  this->nChars )
		goto label_cond_1b;
	if ( !(this->in->ready()) )  
		goto label_cond_1b;
	this->fill();
label_cond_1b:
	if ( this->nextChar >= this->nChars )
		goto label_cond_34;
	if ( this->cb[this->nextChar] != 0xa )
		goto label_cond_31;
	this->nextChar = ( this->nextChar + 0x1);
label_cond_31:
	this->skipLF = 0x0;
label_cond_34:
	if ( this->nextChar <  this->nChars )
		goto label_cond_42;
	//label_try_end_3f:
	}
	catch (...){
		goto label_catchall_44;
	}
	//    .catchall {:try_start_3 .. :try_end_3f} :catchall_44
	cVar1 = this->in->ready();
label_goto_40:
	cVar0->monitor_exit();
	return cVar1;
label_cond_42:
	cVar1 = 0x1;
	goto label_goto_40;
	// 1323    .line 454
label_catchall_44:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public reset()V
void java::io::BufferedReader::reset()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1335        value = {
	// 1336            Ljava/io/IOException;
	// 1337        }
	// 1338    .end annotation
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->ensureOpen();
	if ( this->markedChar >= 0 )
		goto label_cond_1f;
	if ( this->markedChar != -0x2 )
		goto label_cond_1b;
	cVar2 = std::make_shared<java::lang::String>(std::make_shared<char[]>("Mark invalid"));
label_goto_14:
	cVar1 = std::make_shared<java::io::IOException>(cVar2);
	// throw
	throw cVar1;
	// 1372    :try_end_18
	// 1373    .catchall {:try_start_3 .. :try_end_18} :catchall_18
	// 1375    .line 520
label_catchall_18:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 1383    .line 525
label_cond_1b:
	try {
	//label_try_start_1b:
	cVar2 = std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream not marked"));
	goto label_goto_14;
	// 1390    .line 526
label_cond_1f:
	this->nextChar = this->markedChar;
	this->skipLF = this->markedSkipLF;
	//label_try_end_27:
	}
	catch (...){
		goto label_catchall_18;
	}
	//    .catchall {:try_start_1b .. :try_end_27} :catchall_18
	cVar0->monitor_exit();
	return;

}
// .method public skip(J)J
long long java::io::BufferedReader::skip(long long n)
{
	
	long long cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::Object> cVar2;
	auto r;
	long long d;
	long long r;
	
	//    .param p1, "n"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1413        value = {
	// 1414            Ljava/io/IOException;
	// 1415        }
	// 1416    .end annotation
	cVar0 = 0x0;
	if ( (n > cVar0) >= 0 )
		goto label_cond_f;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("skip value is negative")));
	// throw
	throw cVar1;
	// 1435    .line 417
label_cond_f:
	cVar2 = this->lock;
	cVar2->monitor_enter();
	try {
	//label_try_start_12:
	this->ensureOpen();
	r = n;
	//    .local v2, "r":J
label_goto_16:
	if ( (r > cVar0) <= 0 )
		goto label_cond_29;
	if ( this->nextChar <  this->nChars )
		goto label_cond_23;
	this->fill();
label_cond_23:
	//label_try_end_27:
	}
	catch (...){
		goto label_catchall_5e;
	}
	//    .catchall {:try_start_12 .. :try_end_27} :catchall_5e
	if ( this->nextChar <  this->nChars )
		goto label_cond_2d;
label_cond_29:
label_goto_29:
	cVar2->monitor_exit();
	return (n - r);
	// 1484    .line 425
label_cond_2d:
	try {
	//label_try_start_2d:
	if ( !(this->skipLF) )  
		goto label_cond_44;
	this->skipLF = 0x0;
	if ( this->cb[this->nextChar] != 0xa )
		goto label_cond_44;
	this->nextChar = ( this->nextChar + 0x1);
label_cond_44:
	d = (long long)((this->nChars -  this->nextChar));
	//    .local v0, "d":J
	if ( (r > d) > 0 ) 
		goto label_cond_58;
	this->nextChar = (int)(((long long)(this->nextChar) +  r));
	r = 0x0;
	goto label_goto_29;
	// 1547    .line 438
label_cond_58:
	r = (r -  d);
	this->nextChar = this->nChars;
	//label_try_end_5d:
	}
	catch (...){
		goto label_catchall_5e;
	}
	//    .catchall {:try_start_2d .. :try_end_5d} :catchall_5e
	goto label_goto_16;
	// 1560    .line 417
	// 1561    .end local v0    # "d":J
	// 1562    .end local v2    # "r":J
label_catchall_5e:
	// move-exception
	
	cVar2->monitor_exit();
	// throw
	throw;

}


