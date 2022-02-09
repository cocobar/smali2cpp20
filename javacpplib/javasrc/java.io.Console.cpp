// CPP L:\smali2cpp20\x64\Release\out\java\io\Console.smali
#include "java2ctype.h"
#include "java.io.Console_S_1.h"
#include "java.io.Console_S_LineReader.h"
#include "java.io.Console.h"
#include "java.io.FileDescriptor.h"
#include "java.io.FileInputStream.h"
#include "java.io.FileOutputStream.h"
#include "java.io.IOError.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.io.PrintWriter.h"
#include "java.io.Reader.h"
#include "java.io.Writer.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.lang.Thread.h"
#include "java.lang.Throwable.h"
#include "java.nio.charset.Charset.h"
#include "java.util.Arrays.h"
#include "java.util.Formatter.h"
#include "sun.nio.cs.StreamDecoder.h"
#include "sun.nio.cs.StreamEncoder.h"

static java::io::Console::_assertionsDisabled;
static java::io::Console::cons;
static java::io::Console::echoOff;
// .method static synthetic -get0(Ljava/io/Console;)[C
char java::io::Console::_get0(std::shared_ptr<java::io::Console> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/Console;
	return _this->rcb;

}
// .method static synthetic -get1(Ljava/io/Console;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::Console::_get1(std::shared_ptr<java::io::Console> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/Console;
	return _this->readLock;

}
// .method static synthetic -wrap0(Ljava/io/Console;)[C
char java::io::Console::_wrap0(std::shared_ptr<java::io::Console> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/Console;
	return _this->grow();

}
// .method static constructor <clinit>()V
void java::io::Console::static_cinit()
{
	
	java::io::Console::_assertionsDisabled = ( java::io::Console()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method private constructor <init>()V
java::io::Console::Console()
{
	
	std::shared_ptr<java::io::FileInputStream> cVar0;
	std::shared_ptr<java::io::FileOutputStream> cVar1;
	
	cVar0 = std::make_shared<java::io::FileInputStream>(java::io::FileDescriptor::in);
	cVar1 = std::make_shared<java::io::FileOutputStream>(java::io::FileDescriptor::out);
	java::io::Console::(cVar0, cVar1);
	return;

}
// .method private constructor <init>(Ljava/io/InputStream;Ljava/io/OutputStream;)V
java::io::Console::Console(std::shared_ptr<java::io::InputStream> inStream,std::shared_ptr<java::io::OutputStream> outStream)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::lang::String> csname;
	std::shared_ptr<java::io::Console_S_1> cVar2;
	std::shared_ptr<java::util::Formatter> cVar3;
	std::shared_ptr<java::io::Console_S_LineReader> cVar4;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "inStream"    # Ljava/io/InputStream;
	//    .param p2, "outStream"    # Ljava/io/OutputStream;
	// 124    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::lang::Object>();
	this->readLock = cVar0;
	cVar1 = std::make_shared<java::lang::Object>();
	this->writeLock = cVar1;
	csname = java::io::Console::encoding({const[class].FS-Param});
	//    .local v0, "csname":Ljava/lang/String;
	if ( !(csname) )  
		goto label_cond_1d;
	try {
	//label_try_start_17:
	this->cs = java::nio::charset::Charset::forName(csname);
	//label_try_end_1d:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5a;
	}
	//    .catch Ljava/lang/Exception; {:try_start_17 .. :try_end_1d} :catch_5a
label_cond_1d:
label_goto_1d:
	if ( this->cs )     
		goto label_cond_27;
	this->cs = java::nio::charset::Charset::defaultCharset({const[class].FS-Param});
label_cond_27:
	this->out = sun::nio::cs::StreamEncoder::forOutputStreamWriter(outStream, this->writeLock, this->cs);
	cVar2 = std::make_shared<java::io::Console_S_1>(this, this->out, 0x1);
	this->pw = cVar2;
	cVar3 = std::make_shared<java::util::Formatter>(this->out);
	this->formatter = cVar3;
	cVar4 = std::make_shared<java::io::Console_S_LineReader>(this, sun::nio::cs::StreamDecoder::forInputStreamReader(inStream, this->readLock, this->cs));
	this->reader = cVar4;
	this->rcb = std::make_shared<std::vector<char[]>>(0x400);
	return;
	// 235    .line 546
label_catch_5a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Ljava/lang/Exception;
	goto label_goto_1d;

}
// .method public static console()Ljava/io/Console;
std::shared_ptr<java::io::Console> java::io::Console::console()
{
	
	std::shared_ptr<java::io::Console> cVar0;
	
	if ( !(java::io::Console::istty({const[class].FS-Param})) )  
		goto label_cond_15;
	if ( java::io::Console::cons )     
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::Console>();
	java::io::Console::cons = cVar0;
label_cond_12:
	return java::io::Console::cons;
	// 274    .line 528
label_cond_15:
	return 0x0;

}
// .method private static native echo(Z)Z
bool java::io::Console::echo(bool var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 281        value = {
	// 282            Ljava/io/IOException;
	// 283        }
	// 284    .end annotation

}
// .method private grow()[C
char java::io::Console::grow()
{
	
	int cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared<std::vector<char[]>> t;
	
	cVar0 = 0x0;
	if ( java::io::Console::_assertionsDisabled )     
		goto label_cond_13;
	if ( java::lang::Thread::holdsLock(this->readLock) )     
		goto label_cond_13;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 315    .line 399
label_cond_13:
	t = std::make_shared<std::vector<char[]>>(( this->rcb->size() * 0x2));
	//    .local v0, "t":[C
	java::lang::System::arraycopy(this->rcb, cVar0, t, cVar0, this->rcb->size());
	this->rcb = t;
	return this->rcb;

}
// .method private readline(Z)[C
char java::io::Console::readline(bool zeroOut)
{
	
	int cVar0;
	int cVar1;
	int len;
	std::shared<std::vector<char[]>> b;
	
	//    .param p1, "zeroOut"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 351        value = {
	// 352            Ljava/io/IOException;
	// 353        }
	// 354    .end annotation
	cVar0 = 0xd;
	cVar1 = 0x0;
	len = this->reader->read(this->rcb, cVar1, this->rcb->size());
	//    .local v1, "len":I
	if ( len >= 0 )
		goto label_cond_12;
	return 0x0;
	// 383    .line 380
label_cond_12:
	if ( this->rcb[( len + -0x1)] != cVar0 )
		goto label_cond_2f;
	len = ( len + -0x1);
label_cond_1c:
label_goto_1c:
	b = std::make_shared<std::vector<char[]>>(len);
	//    .local v0, "b":[C
	if ( len <= 0 )
		goto label_cond_2e;
	java::lang::System::arraycopy(this->rcb, cVar1, b, cVar1, len);
	if ( !(zeroOut) )  
		goto label_cond_2e;
	java::util::Arrays::fill(this->rcb, cVar1, len, 0x20);
label_cond_2e:
	return b;
	// 424    .line 382
	// 425    .end local v0    # "b":[C
label_cond_2f:
	if ( this->rcb[( len + -0x1)] != 0xa )
		goto label_cond_1c;
	len = ( len + -0x1);
	if ( len <= 0 )
		goto label_cond_1c;
	if ( this->rcb[( len + -0x1)] != cVar0 )
		goto label_cond_1c;
	len = ( len + -0x1);
	goto label_goto_1c;

}
// .method public flush()V
void java::io::Console::flush()
{
	
	this->pw->flush();
	return;

}
// .method public varargs format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;
std::shared_ptr<java::io::Console> java::io::Console::format(std::shared_ptr<java::lang::String> fmt,std::shared_ptr<std::vector<java::lang::Object>> args)
{
	
	//    .param p1, "fmt"    # Ljava/lang/String;
	//    .param p2, "args"    # [Ljava/lang/Object;
	this->formatter->format(fmt, args)->flush();
	return this;

}
// .method public varargs printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;
std::shared_ptr<java::io::Console> java::io::Console::printf(std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args)
{
	
	//    .param p1, "format"    # Ljava/lang/String;
	//    .param p2, "args"    # [Ljava/lang/Object;
	return this->format(format, args);

}
// .method public readLine()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::Console::readLine()
{
	
	return this->readLine(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x0));

}
// .method public varargs readLine(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::Console::readLine(std::shared_ptr<java::lang::String> fmt,std::shared_ptr<std::vector<java::lang::Object>> args)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::io::IOError> cVar2;
	std::shared_ptr<char[]> ca;
	std::shared_ptr<java::lang::String> line;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "fmt"    # Ljava/lang/String;
	//    .param p2, "args"    # [Ljava/lang/Object;
	//    .local v1, "line":Ljava/lang/String;
	cVar0 = this->writeLock;
	cVar0->monitor_enter();
	try {
	//label_try_start_4:
	cVar1 = this->readLock;
	cVar1->monitor_enter();
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_2c;
	}
	//    .catchall {:try_start_4 .. :try_end_7} :catchall_2c
	try {
	//label_try_start_7:
	if ( !(fmt->length()) )  
		goto label_cond_12;
	this->pw->format(fmt, args);
	//label_try_end_12:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_7 .. :try_end_12} :catchall_29
label_cond_12:
	try {
	//label_try_start_13:
	ca = this->readline(0x0);
	//    .local v0, "ca":[C
	if ( !(ca) )  
		goto label_cond_1f;
	line = std::make_shared<java::lang::String>(ca);
	//label_try_end_1e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_22;
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catch Ljava/io/IOException; {:try_start_13 .. :try_end_1e} :catch_22
	//    .catchall {:try_start_13 .. :try_end_1e} :catchall_29
	//    .local v2, "line":Ljava/lang/String;
	//    .end local v1    # "line":Ljava/lang/String;
	//    .end local v2    # "line":Ljava/lang/String;
label_cond_1f:
	try {
	//label_try_start_1f:
	cVar1->monitor_exit();
	//label_try_end_20:
	}
	catch (...){
		goto label_catchall_2c;
	}
	//    .catchall {:try_start_1f .. :try_end_20} :catchall_2c
	cVar0->monitor_exit();
	return 0x0;
	// 598    .line 254
	// 599    .end local v0    # "ca":[C
	// 600    .restart local v1    # "line":Ljava/lang/String;
label_catch_22:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "x":Ljava/io/IOException;
	try {
	//label_try_start_23:
	cVar2 = std::make_shared<java::io::IOError>(getCatchExcetionFromList);
	// throw
	throw cVar2;
	// 612    :try_end_29
	// 613    .catchall {:try_start_23 .. :try_end_29} :catchall_29
	// 615    .line 247
	// 616    .end local v3    # "x":Ljava/io/IOException;
label_catchall_29:
	// move-exception
	
	try {
	//label_try_start_2a:
	cVar1->monitor_exit();
	// throw
	throw;
	// 624    :try_end_2c
	// 625    .catchall {:try_start_2a .. :try_end_2c} :catchall_2c
	// 627    .line 246
	// 628    .end local v1    # "line":Ljava/lang/String;
label_catchall_2c:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public readPassword()[C
char java::io::Console::readPassword()
{
	
	return this->readPassword(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x0));

}
// .method public varargs readPassword(Ljava/lang/String;[Ljava/lang/Object;)[C
char java::io::Console::readPassword(std::shared_ptr<java::lang::String> fmt,std::shared_ptr<std::vector<java::lang::Object>> args)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::io::IOError> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	int ioe;
	std::shared_ptr<java::io::IOError> ioe;
	std::shared_ptr<java::lang::Throwable> x;
	
	//    .param p1, "fmt"    # Ljava/lang/String;
	//    .param p2, "args"    # [Ljava/lang/Object;
	//    .local v2, "passwd":[C
	cVar0 = this->writeLock;
	cVar0->monitor_enter();
	try {
	//label_try_start_4:
	cVar1 = this->readLock;
	cVar1->monitor_enter();
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_2c;
	}
	//    .catchall {:try_start_4 .. :try_end_7} :catchall_2c
	try {
	//label_try_start_8:
	java::io::Console::echoOff = java::io::Console::echo(0x0);
	//label_try_end_e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2f;
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_e} :catch_2f
	//    .catchall {:try_start_8 .. :try_end_e} :catchall_29
	ioe = 0x0;
	//    .local v0, "ioe":Ljava/io/IOError;
	try {
	//label_try_start_f:
	if ( !(fmt->length()) )  
		goto label_cond_1a;
	this->pw->format(fmt, args);
label_cond_1a:
	//label_try_end_1e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3d;
	}
	catch (...){
		goto label_catchall_5c;
	}
	//    .catch Ljava/io/IOException; {:try_start_f .. :try_end_1e} :catch_3d
	//    .catchall {:try_start_f .. :try_end_1e} :catchall_5c
	//    .local v2, "passwd":[C
	try {
	//label_try_start_20:
	java::io::Console::echoOff = java::io::Console::echo(0x1);
	//label_try_end_26:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_36;
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catch Ljava/io/IOException; {:try_start_20 .. :try_end_26} :catch_36
	//    .catchall {:try_start_20 .. :try_end_26} :catchall_29
	//    .end local v0    # "ioe":Ljava/io/IOError;
label_goto_26:
	if ( !(ioe) )  
		goto label_cond_6f;
	try {
	//label_try_start_28:
	// throw
	throw ioe;
	// 741    :try_end_29
	// 742    .catchall {:try_start_28 .. :try_end_29} :catchall_29
	// 744    .line 311
	// 745    .end local v2    # "passwd":[C
label_catchall_29:
	// move-exception
	
	try {
	//label_try_start_2a:
	cVar1->monitor_exit();
	// throw
	throw;
	// 753    :try_end_2c
	// 754    .catchall {:try_start_2a .. :try_end_2c} :catchall_2c
	// 756    .line 310
label_catchall_2c:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 764    .line 314
	// 765    .local v2, "passwd":[C
label_catch_2f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "x":Ljava/io/IOException;
	try {
	//label_try_start_30:
	cVar2 = std::make_shared<java::io::IOError>(getCatchExcetionFromList);
	// throw
	throw cVar2;
	// 778    .line 327
	// 779    .end local v3    # "x":Ljava/io/IOException;
	// 780    .restart local v0    # "ioe":Ljava/io/IOError;
	// 781    .local v2, "passwd":[C
label_catch_36:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v3    # "x":Ljava/io/IOException;
	//    .end local v0    # "ioe":Ljava/io/IOError;
	ioe = std::make_shared<java::io::IOError>(getCatchExcetionFromList);
	//label_try_end_3c:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_30 .. :try_end_3c} :catchall_29
	//    .local v0, "ioe":Ljava/io/IOError;
	goto label_goto_26;
	// 797    .line 322
	// 798    .end local v3    # "x":Ljava/io/IOException;
	// 799    .local v0, "ioe":Ljava/io/IOError;
	// 800    .local v2, "passwd":[C
label_catch_3d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v3    # "x":Ljava/io/IOException;
	try {
	//label_try_start_3e:
	ioe = std::make_shared<java::io::IOError>(getCatchExcetionFromList);
	//label_try_end_43:
	}
	catch (...){
		goto label_catchall_5c;
	}
	//    .catchall {:try_start_3e .. :try_end_43} :catchall_5c
	//    .end local v0    # "ioe":Ljava/io/IOError;
	//    .local v1, "ioe":Ljava/io/IOError;
	try {
	//label_try_start_44:
	java::io::Console::echoOff = java::io::Console::echo(0x1);
	//label_try_end_4a:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4e;
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catch Ljava/io/IOException; {:try_start_44 .. :try_end_4a} :catch_4e
	//    .catchall {:try_start_44 .. :try_end_4a} :catchall_29
	//    .end local v1    # "ioe":Ljava/io/IOError;
	//    .local v0, "ioe":Ljava/io/IOError;
label_goto_4b:
	if ( !(ioe) )  
		goto label_cond_6f;
	try {
	//label_try_start_4d:
	// throw
	throw ioe;
	// 840    .line 327
	// 841    .end local v0    # "ioe":Ljava/io/IOError;
	// 842    .restart local v1    # "ioe":Ljava/io/IOError;
label_catch_4e:
	// move-exception
	x = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	if ( ioe )     
		goto label_cond_57;
	ioe = std::make_shared<java::io::IOError>(x);
	//    .end local v1    # "ioe":Ljava/io/IOError;
	//    .restart local v0    # "ioe":Ljava/io/IOError;
	goto label_goto_4b;
	// 858    .line 331
	// 859    .end local v0    # "ioe":Ljava/io/IOError;
	// 860    .restart local v1    # "ioe":Ljava/io/IOError;
label_cond_57:
	ioe->addSuppressed(x);
	//label_try_end_5a:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_4d .. :try_end_5a} :catchall_29
	//    .end local v1    # "ioe":Ljava/io/IOError;
	//    .restart local v0    # "ioe":Ljava/io/IOError;
	goto label_goto_4b;
	// 872    .line 324
	// 873    .end local v3    # "x":Ljava/io/IOException;
	// 874    .local v0, "ioe":Ljava/io/IOError;
label_catchall_5c:
	// move-exception
	
	try {
	//label_try_start_5e:
	java::io::Console::echoOff = java::io::Console::echo(0x1);
	//label_try_end_64:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_67;
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catch Ljava/io/IOException; {:try_start_5e .. :try_end_64} :catch_67
	//    .catchall {:try_start_5e .. :try_end_64} :catchall_29
	//    .end local v0    # "ioe":Ljava/io/IOError;
label_goto_64:
	if ( !(ioe) )  
		goto label_cond_6e;
	try {
	//label_try_start_66:
	// throw
	throw ioe;
	// 900    .line 327
	// 901    .restart local v0    # "ioe":Ljava/io/IOError;
label_catch_67:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v3    # "x":Ljava/io/IOException;
	//    .end local v0    # "ioe":Ljava/io/IOError;
	ioe = std::make_shared<java::io::IOError>(getCatchExcetionFromList);
	//    .local v0, "ioe":Ljava/io/IOError;
	goto label_goto_64;
	// 915    .line 324
	// 916    .end local v0    # "ioe":Ljava/io/IOError;
	// 917    .end local v3    # "x":Ljava/io/IOException;
label_cond_6e:
	// throw
	throw;
	// 921    .line 336
	// 922    .end local v2    # "passwd":[C
label_cond_6f:
	this->pw->println();
	//label_try_end_74:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_66 .. :try_end_74} :catchall_29
	try {
	//label_try_start_74:
	cVar1->monitor_exit();
	//label_try_end_75:
	}
	catch (...){
		goto label_catchall_2c;
	}
	//    .catchall {:try_start_74 .. :try_end_75} :catchall_2c
	cVar0->monitor_exit();
	return passwd;

}
// .method public reader()Ljava/io/Reader;
std::shared_ptr<java::io::Reader> java::io::Console::reader()
{
	
	return this->reader;

}
// .method public writer()Ljava/io/PrintWriter;
std::shared_ptr<java::io::PrintWriter> java::io::Console::writer()
{
	
	return this->pw;

}


