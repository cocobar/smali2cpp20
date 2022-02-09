// CPP L:\smali2cpp20\x64\Release\out\java\io\PrintStream.smali
#include "java2ctype.h"
#include "java.io.BufferedWriter.h"
#include "java.io.File.h"
#include "java.io.FileOutputStream.h"
#include "java.io.FilterOutputStream.h"
#include "java.io.IOException.h"
#include "java.io.InterruptedIOException.h"
#include "java.io.OutputStream.h"
#include "java.io.OutputStreamWriter.h"
#include "java.io.PrintStream.h"
#include "java.io.UnsupportedEncodingException.h"
#include "java.lang.CharSequence.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Thread.h"
#include "java.nio.charset.Charset.h"
#include "java.nio.charset.IllegalCharsetNameException.h"
#include "java.nio.charset.UnsupportedCharsetException.h"
#include "java.util.Formatter.h"
#include "java.util.Locale.h"

// .method public constructor <init>(Ljava/io/File;)V
java::io::PrintStream::PrintStream(std::shared_ptr<java::io::File> file)
{
	
	std::shared_ptr<java::io::FileOutputStream> cVar0;
	
	//    .param p1, "file"    # Ljava/io/File;
	//    .annotation system Ldalvik/annotation/Throws;
	// 031        value = {
	// 032            Ljava/io/FileNotFoundException;
	// 033        }
	// 034    .end annotation
	cVar0 = std::make_shared<java::io::FileOutputStream>(file);
	java::io::PrintStream::(0x0, cVar0);
	return;

}
// .method public constructor <init>(Ljava/io/File;Ljava/lang/String;)V
java::io::PrintStream::PrintStream(std::shared_ptr<java::io::File> file,std::shared_ptr<java::lang::String> csn)
{
	
	std::shared_ptr<java::io::FileOutputStream> cVar0;
	
	//    .param p1, "file"    # Ljava/io/File;
	//    .param p2, "csn"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 055        value = {
	// 056            Ljava/io/FileNotFoundException;,
	// 057            Ljava/io/UnsupportedEncodingException;
	// 058        }
	// 059    .end annotation
	cVar0 = std::make_shared<java::io::FileOutputStream>(file);
	java::io::PrintStream::(0x0, java::io::PrintStream::toCharset(csn), cVar0);
	return;

}
// .method public constructor <init>(Ljava/io/OutputStream;)V
java::io::PrintStream::PrintStream(std::shared_ptr<java::io::OutputStream> out)
{
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	java::io::PrintStream::(out, 0x0);
	return;

}
// .method public constructor <init>(Ljava/io/OutputStream;Z)V
java::io::PrintStream::PrintStream(std::shared_ptr<java::io::OutputStream> out,bool autoFlush)
{
	
	std::shared_ptr<java::io::OutputStream> cVar0;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .param p2, "autoFlush"    # Z
	cVar0 = java::io::PrintStream::requireNonNull(out, std::make_shared<java::lang::String>(std::make_shared<char[]>("Null output stream")));
	cVar0->checkCast("java::io::OutputStream");
	java::io::PrintStream::(autoFlush, cVar0);
	return;

}
// .method public constructor <init>(Ljava/io/OutputStream;ZLjava/lang/String;)V
java::io::PrintStream::PrintStream(std::shared_ptr<java::io::OutputStream> out,bool autoFlush,std::shared_ptr<java::lang::String> encoding)
{
	
	std::shared_ptr<java::io::OutputStream> cVar0;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .param p2, "autoFlush"    # Z
	//    .param p3, "encoding"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 120        value = {
	// 121            Ljava/io/UnsupportedEncodingException;
	// 122        }
	// 123    .end annotation
	cVar0 = java::io::PrintStream::requireNonNull(out, std::make_shared<java::lang::String>(std::make_shared<char[]>("Null output stream")));
	cVar0->checkCast("java::io::OutputStream");
	java::io::PrintStream::(autoFlush, cVar0, java::io::PrintStream::toCharset(encoding));
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::PrintStream::PrintStream(std::shared_ptr<java::lang::String> fileName)
{
	
	std::shared_ptr<java::io::FileOutputStream> cVar0;
	
	//    .param p1, "fileName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 151        value = {
	// 152            Ljava/io/FileNotFoundException;
	// 153        }
	// 154    .end annotation
	cVar0 = std::make_shared<java::io::FileOutputStream>(fileName);
	java::io::PrintStream::(0x0, cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
java::io::PrintStream::PrintStream(std::shared_ptr<java::lang::String> fileName,std::shared_ptr<java::lang::String> csn)
{
	
	std::shared_ptr<java::io::FileOutputStream> cVar0;
	
	//    .param p1, "fileName"    # Ljava/lang/String;
	//    .param p2, "csn"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 175        value = {
	// 176            Ljava/io/FileNotFoundException;,
	// 177            Ljava/io/UnsupportedEncodingException;
	// 178        }
	// 179    .end annotation
	cVar0 = std::make_shared<java::io::FileOutputStream>(fileName);
	java::io::PrintStream::(0x0, java::io::PrintStream::toCharset(csn), cVar0);
	return;

}
// .method private constructor <init>(ZLjava/io/OutputStream;)V
java::io::PrintStream::PrintStream(bool autoFlush,std::shared_ptr<java::io::OutputStream> out)
{
	
	bool cVar0;
	
	//    .param p1, "autoFlush"    # Z
	//    .param p2, "out"    # Ljava/io/OutputStream;
	cVar0 = 0x0;
	java::io::FilterOutputStream::(out);
	this->trouble = cVar0;
	this->closing = cVar0;
	this->autoFlush = autoFlush;
	return;

}
// .method private constructor <init>(ZLjava/io/OutputStream;Ljava/nio/charset/Charset;)V
java::io::PrintStream::PrintStream(bool autoFlush,std::shared_ptr<java::io::OutputStream> out,std::shared_ptr<java::nio::charset::Charset> charset)
{
	
	bool cVar0;
	
	//    .param p1, "autoFlush"    # Z
	//    .param p2, "out"    # Ljava/io/OutputStream;
	//    .param p3, "charset"    # Ljava/nio/charset/Charset;
	cVar0 = 0x0;
	java::io::FilterOutputStream::(out);
	this->trouble = cVar0;
	this->closing = cVar0;
	this->autoFlush = autoFlush;
	this->charset = charset;
	return;

}
// .method private constructor <init>(ZLjava/nio/charset/Charset;Ljava/io/OutputStream;)V
java::io::PrintStream::PrintStream(bool autoFlush,std::shared_ptr<java::nio::charset::Charset> charset,std::shared_ptr<java::io::OutputStream> out)
{
	
	//    .param p1, "autoFlush"    # Z
	//    .param p2, "charset"    # Ljava/nio/charset/Charset;
	//    .param p3, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 257        value = {
	// 258            Ljava/io/UnsupportedEncodingException;
	// 259        }
	// 260    .end annotation
	java::io::PrintStream::(autoFlush, out, charset);
	return;

}
// .method private ensureOpen()V
void java::io::PrintStream::ensureOpen()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 273        value = {
	// 274            Ljava/io/IOException;
	// 275        }
	// 276    .end annotation
	if ( this->out )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream closed")));
	// throw
	throw cVar0;
	// 293    .line 333
label_cond_d:
	return;

}
// .method private getTextOut()Ljava/io/BufferedWriter;
std::shared_ptr<java::io::BufferedWriter> java::io::PrintStream::getTextOut()
{
	
	std::shared_ptr<java::io::OutputStreamWriter> cVar0;
	std::shared_ptr<java::io::BufferedWriter> cVar1;
	
	if ( this->textOut )     
		goto label_cond_1a;
	if ( !(this->charset) )  
		goto label_cond_1d;
	cVar0 = std::make_shared<java::io::OutputStreamWriter>(this, this->charset);
label_goto_f:
	this->charOut = cVar0;
	cVar1 = std::make_shared<java::io::BufferedWriter>(this->charOut);
	this->textOut = cVar1;
label_cond_1a:
	return this->textOut;
	// 336    .line 359
label_cond_1d:
	cVar0 = std::make_shared<java::io::OutputStreamWriter>(this);
	goto label_goto_f;

}
// .method private newLine()V
void java::io::PrintStream::newLine()
{
	
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::BufferedWriter> textOut;
	
	try {
	//label_try_start_0:
	this->monitor_enter();
	//label_try_end_1:
	}
	catch (java::io::InterruptedIOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_21;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a;
	}
	//    .catch Ljava/io/InterruptedIOException; {:try_start_0 .. :try_end_1} :catch_21
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_1} :catch_2a
	try {
	//label_try_start_1:
	this->ensureOpen();
	textOut = this->getTextOut();
	//    .local v0, "textOut":Ljava/io/BufferedWriter;
	textOut->newLine();
	textOut->flushBuffer();
	this->charOut->flushBuffer();
	if ( !(this->autoFlush) )  
		goto label_cond_1c;
	this->out->flush();
	//label_try_end_1c:
	}
	catch (...){
		goto label_catchall_1e;
	}
	//    .catchall {:try_start_1 .. :try_end_1c} :catchall_1e
label_cond_1c:
	try {
	//label_try_start_1c:
	this->monitor_exit();
	//    .end local v0    # "textOut":Ljava/io/BufferedWriter;
label_goto_1d:
	return;
	// 398    .line 569
label_catchall_1e:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 405    :try_end_21
	// 406    .catch Ljava/io/InterruptedIOException; {:try_start_1c .. :try_end_21} :catch_21
	// 407    .catch Ljava/io/IOException; {:try_start_1c .. :try_end_21} :catch_2a
	// 409    .line 580
label_catch_21:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "x":Ljava/io/InterruptedIOException;
	java::lang::Thread::currentThread({const[class].FS-Param})->interrupt();
	goto label_goto_1d;
	// 423    .line 583
	// 424    .end local v2    # "x":Ljava/io/InterruptedIOException;
label_catch_2a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Ljava/io/IOException;
	this->trouble = 0x1;
	goto label_goto_1d;

}
// .method private static requireNonNull(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;
template <typename T>
std::shared_ptr<T> java::io::PrintStream::requireNonNull(std::shared_ptr<T> obj,std::shared_ptr<java::lang::String> message)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 441        value = {
	// 442            "<T:",
	// 443            "Ljava/lang/Object;",
	// 444            ">(TT;",
	// 445            "Ljava/lang/String;",
	// 446            ")TT;"
	// 447        }
	// 448    .end annotation
	//    .local p0, "obj":Ljava/lang/Object;, "TT;"
	if ( obj )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>(message);
	// throw
	throw cVar0;
	// 462    .line 84
label_cond_8:
	return obj;

}
// .method private static toCharset(Ljava/lang/String;)Ljava/nio/charset/Charset;
std::shared_ptr<java::nio::charset::Charset> java::io::PrintStream::toCharset(std::shared_ptr<java::lang::String> csn)
{
	
	std::shared_ptr<java::io::UnsupportedEncodingException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "csn"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 471        value = {
	// 472            Ljava/io/UnsupportedEncodingException;
	// 473        }
	// 474    .end annotation
	java::io::PrintStream::requireNonNull(csn, std::make_shared<java::lang::String>(std::make_shared<char[]>("charsetName")));
	try {
	//label_try_start_6:
	//label_try_end_9:
	}
	catch (java::nio::charset::IllegalCharsetNameException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b;
	}
	catch (java::nio::charset::UnsupportedCharsetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b;
	}
	//    .catch Ljava/nio/charset/IllegalCharsetNameException; {:try_start_6 .. :try_end_9} :catch_b
	//    .catch Ljava/nio/charset/UnsupportedCharsetException; {:try_start_6 .. :try_end_9} :catch_b
	return java::nio::charset::Charset::forName(csn);
	// 493    .line 98
label_catch_b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "unused":Ljava/lang/IllegalArgumentException;
	cVar0 = std::make_shared<java::io::UnsupportedEncodingException>(csn);
	// throw
	throw cVar0;

}
// .method private write(Ljava/lang/String;)V
void java::io::PrintStream::write(std::shared_ptr<java::lang::String> s)
{
	
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::BufferedWriter> textOut;
	
	//    .param p1, "s"    # Ljava/lang/String;
	try {
	//label_try_start_0:
	this->monitor_enter();
	//label_try_end_1:
	}
	catch (java::io::InterruptedIOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_29;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_32;
	}
	//    .catch Ljava/io/InterruptedIOException; {:try_start_0 .. :try_end_1} :catch_29
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_1} :catch_32
	try {
	//label_try_start_1:
	this->ensureOpen();
	textOut = this->getTextOut();
	//    .local v0, "textOut":Ljava/io/BufferedWriter;
	textOut->write(s);
	textOut->flushBuffer();
	this->charOut->flushBuffer();
	if ( !(this->autoFlush) )  
		goto label_cond_24;
	if ( s->indexOf(0xa) < 0 ) 
		goto label_cond_24;
	this->out->flush();
	//label_try_end_24:
	}
	catch (...){
		goto label_catchall_26;
	}
	//    .catchall {:try_start_1 .. :try_end_24} :catchall_26
label_cond_24:
	try {
	//label_try_start_24:
	this->monitor_exit();
	//    .end local v0    # "textOut":Ljava/io/BufferedWriter;
label_goto_25:
	return;
	// 568    .line 548
label_catchall_26:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 575    :try_end_29
	// 576    .catch Ljava/io/InterruptedIOException; {:try_start_24 .. :try_end_29} :catch_29
	// 577    .catch Ljava/io/IOException; {:try_start_24 .. :try_end_29} :catch_32
	// 579    .line 559
label_catch_29:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "x":Ljava/io/InterruptedIOException;
	java::lang::Thread::currentThread({const[class].FS-Param})->interrupt();
	goto label_goto_25;
	// 593    .line 562
	// 594    .end local v2    # "x":Ljava/io/InterruptedIOException;
label_catch_32:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Ljava/io/IOException;
	this->trouble = 0x1;
	goto label_goto_25;

}
// .method private write([C)V
void java::io::PrintStream::write(std::shared_ptr<char[]> buf)
{
	
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::BufferedWriter> textOut;
	int i;
	
	//    .param p1, "buf"    # [C
	try {
	//label_try_start_0:
	this->monitor_enter();
	//label_try_end_1:
	}
	catch (java::io::InterruptedIOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2e;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	//    .catch Ljava/io/InterruptedIOException; {:try_start_0 .. :try_end_1} :catch_2e
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_1} :catch_37
	try {
	//label_try_start_1:
	this->ensureOpen();
	textOut = this->getTextOut();
	//    .local v1, "textOut":Ljava/io/BufferedWriter;
	textOut->write(buf);
	textOut->flushBuffer();
	this->charOut->flushBuffer();
	if ( !(this->autoFlush) )  
		goto label_cond_29;
	i = 0x0;
	//    .local v0, "i":I
label_goto_18:
	if ( i >= buf->size() )
		goto label_cond_29;
	if ( buf[i] != 0xa )
		goto label_cond_26;
	this->out->flush();
	//label_try_end_26:
	}
	catch (...){
		goto label_catchall_2b;
	}
	//    .catchall {:try_start_1 .. :try_end_26} :catchall_2b
label_cond_26:
	i = ( i + 0x1);
	goto label_goto_18;
	// 674    .end local v0    # "i":I
label_cond_29:
	try {
	//label_try_start_29:
	this->monitor_exit();
	//    .end local v1    # "textOut":Ljava/io/BufferedWriter;
label_goto_2a:
	return;
	// 684    .line 524
label_catchall_2b:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 691    :try_end_2e
	// 692    .catch Ljava/io/InterruptedIOException; {:try_start_29 .. :try_end_2e} :catch_2e
	// 693    .catch Ljava/io/IOException; {:try_start_29 .. :try_end_2e} :catch_37
	// 695    .line 538
label_catch_2e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "x":Ljava/io/InterruptedIOException;
	java::lang::Thread::currentThread({const[class].FS-Param})->interrupt();
	goto label_goto_2a;
	// 709    .line 541
	// 710    .end local v3    # "x":Ljava/io/InterruptedIOException;
label_catch_37:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "x":Ljava/io/IOException;
	this->trouble = 0x1;
	goto label_goto_2a;

}
// .method public append(C)Ljava/io/PrintStream;
std::shared_ptr<java::io::PrintStream> java::io::PrintStream::append(char c)
{
	
	//    .param p1, "c"    # C
	this->print(c);
	return this;

}
// .method public append(Ljava/lang/CharSequence;)Ljava/io/PrintStream;
std::shared_ptr<java::io::PrintStream> java::io::PrintStream::append(std::shared_ptr<java::lang::CharSequence> csq)
{
	
	//    .param p1, "csq"    # Ljava/lang/CharSequence;
	if ( csq )     
		goto label_cond_9;
	this->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("null")));
label_goto_8:
	return this;
	// 754    .line 1094
label_cond_9:
	this->print(csq->toString());
	goto label_goto_8;

}
// .method public append(Ljava/lang/CharSequence;II)Ljava/io/PrintStream;
std::shared_ptr<java::io::PrintStream> java::io::PrintStream::append(std::shared_ptr<java::lang::CharSequence> csq,int start,int end)
{
	
	//    .param p1, "csq"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "end"    # I
	if ( csq )     
		goto label_cond_11;
	//    .local v0, "cs":Ljava/lang/CharSequence;
label_goto_5:
	this->write(cs->subSequence(start, end)->toString());
	return this;
	// 793    .line 1132
	// 794    .end local v0    # "cs":Ljava/lang/CharSequence;
label_cond_11:
	//    .restart local v0    # "cs":Ljava/lang/CharSequence;
	goto label_goto_5;

}
// .method public checkError()Z
bool java::io::PrintStream::checkError()
{
	
	std::shared_ptr<java::io::OutputStream> ps;
	
	if ( !(this->out) )  
		goto label_cond_7;
	this->flush();
label_cond_7:
	if ( !(this->out->instanceOf("java::io::PrintStream")) )  
		goto label_cond_16;
	ps = this->out;
	ps->checkCast("java::io::PrintStream");
	//    .local v0, "ps":Ljava/io/PrintStream;
	return ps->checkError();
	// 886    .line 420
	// 887    .end local v0    # "ps":Ljava/io/PrintStream;
label_cond_16:
	return this->trouble;

}
// .method protected clearError()V
void java::io::PrintStream::clearError()
{
	
	this->trouble = 0x0;
	return;

}
// .method public close()V
void java::io::PrintStream::close()
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->closing )     
		goto label_cond_1f;
	this->closing = 0x1;
	//label_try_end_8:
	}
	catch (...){
		goto label_catchall_26;
	}
	//    .catchall {:try_start_1 .. :try_end_8} :catchall_26
	try {
	//label_try_start_8:
	if ( !(this->textOut) )  
		goto label_cond_11;
	this->textOut->close();
label_cond_11:
	this->out->close();
	//label_try_end_16:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_21;
	}
	catch (...){
		goto label_catchall_26;
	}
	//    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_16} :catch_21
	//    .catchall {:try_start_8 .. :try_end_16} :catchall_26
label_goto_16:
	try {
	//label_try_start_17:
	this->textOut = 0x0;
	this->charOut = 0x0;
	this->out = 0x0;
	//label_try_end_1f:
	}
	catch (...){
		goto label_catchall_26;
	}
	//    .catchall {:try_start_17 .. :try_end_1f} :catchall_26
label_cond_1f:
	this->monitor_exit();
	return;
	// 972    .line 385
label_catch_21:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Ljava/io/IOException;
	try {
	//label_try_start_23:
	this->trouble = 0x1;
	//label_try_end_25:
	}
	catch (...){
		goto label_catchall_26;
	}
	//    .catchall {:try_start_23 .. :try_end_25} :catchall_26
	goto label_goto_16;
	// 987    .line 373
	// 988    .end local v0    # "x":Ljava/io/IOException;
label_catchall_26:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public flush()V
void java::io::PrintStream::flush()
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->ensureOpen();
	this->out->flush();
	//label_try_end_9:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b;
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_9} :catch_b
	//    .catchall {:try_start_1 .. :try_end_9} :catchall_10
label_goto_9:
	this->monitor_exit();
	return;
	// 1022    .line 347
label_catch_b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Ljava/io/IOException;
	try {
	//label_try_start_d:
	this->trouble = 0x1;
	//label_try_end_f:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_d .. :try_end_f} :catchall_10
	goto label_goto_9;
	// 1037    .line 342
	// 1038    .end local v0    # "x":Ljava/io/IOException;
label_catchall_10:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public varargs format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
std::shared_ptr<java::io::PrintStream> java::io::PrintStream::format(std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args)
{
	
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::Formatter> cVar0;
	
	//    .param p1, "format"    # Ljava/lang/String;
	//    .param p2, "args"    # [Ljava/lang/Object;
	try {
	//label_try_start_0:
	this->monitor_enter();
	//label_try_end_1:
	}
	catch (java::io::InterruptedIOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_29;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_32;
	}
	//    .catch Ljava/io/InterruptedIOException; {:try_start_0 .. :try_end_1} :catch_29
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_1} :catch_32
	try {
	//label_try_start_1:
	this->ensureOpen();
	if ( !(this->formatter) )  
		goto label_cond_14;
	if ( this->formatter->locale() == java::util::Locale::getDefault({const[class].FS-Param}) )
		goto label_cond_1b;
label_cond_14:
	cVar0 = std::make_shared<java::util::Formatter>(this);
	this->formatter = cVar0;
label_cond_1b:
	this->formatter->format(java::util::Locale::getDefault({const[class].FS-Param}), format, args);
	//label_try_end_24:
	}
	catch (...){
		goto label_catchall_26;
	}
	//    .catchall {:try_start_1 .. :try_end_24} :catchall_26
	try {
	//label_try_start_24:
	this->monitor_exit();
label_goto_25:
	return this;
	// 1109    .line 994
label_catchall_26:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 1116    :try_end_29
	// 1117    .catch Ljava/io/InterruptedIOException; {:try_start_24 .. :try_end_29} :catch_29
	// 1118    .catch Ljava/io/IOException; {:try_start_24 .. :try_end_29} :catch_32
	// 1120    .line 1001
label_catch_29:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Ljava/io/InterruptedIOException;
	java::lang::Thread::currentThread({const[class].FS-Param})->interrupt();
	goto label_goto_25;
	// 1134    .line 1003
	// 1135    .end local v1    # "x":Ljava/io/InterruptedIOException;
label_catch_32:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Ljava/io/IOException;
	this->trouble = 0x1;
	goto label_goto_25;

}
// .method public varargs format(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
std::shared_ptr<java::io::PrintStream> java::io::PrintStream::format(std::shared_ptr<java::util::Locale> l,std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args)
{
	
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::Formatter> cVar0;
	
	//    .param p1, "l"    # Ljava/util/Locale;
	//    .param p2, "format"    # Ljava/lang/String;
	//    .param p3, "args"    # [Ljava/lang/Object;
	try {
	//label_try_start_0:
	this->monitor_enter();
	//label_try_end_1:
	}
	catch (java::io::InterruptedIOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_21;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a;
	}
	//    .catch Ljava/io/InterruptedIOException; {:try_start_0 .. :try_end_1} :catch_21
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_1} :catch_2a
	try {
	//label_try_start_1:
	this->ensureOpen();
	if ( !(this->formatter) )  
		goto label_cond_10;
	if ( this->formatter->locale() == l )
		goto label_cond_17;
label_cond_10:
	cVar0 = std::make_shared<java::util::Formatter>(this, l);
	this->formatter = cVar0;
label_cond_17:
	this->formatter->format(l, format, args);
	//label_try_end_1c:
	}
	catch (...){
		goto label_catchall_1e;
	}
	//    .catchall {:try_start_1 .. :try_end_1c} :catchall_1e
	try {
	//label_try_start_1c:
	this->monitor_exit();
label_goto_1d:
	return this;
	// 1203    .line 1051
label_catchall_1e:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 1210    :try_end_21
	// 1211    .catch Ljava/io/InterruptedIOException; {:try_start_1c .. :try_end_21} :catch_21
	// 1212    .catch Ljava/io/IOException; {:try_start_1c .. :try_end_21} :catch_2a
	// 1214    .line 1058
label_catch_21:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Ljava/io/InterruptedIOException;
	java::lang::Thread::currentThread({const[class].FS-Param})->interrupt();
	goto label_goto_1d;
	// 1228    .line 1060
	// 1229    .end local v1    # "x":Ljava/io/InterruptedIOException;
label_catch_2a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Ljava/io/IOException;
	this->trouble = 0x1;
	goto label_goto_1d;

}
// .method public print(C)V
void java::io::PrintStream::print(char c)
{
	
	//    .param p1, "c"    # C
	this->write(java::lang::String::valueOf(c));
	return;

}
// .method public print(D)V
void java::io::PrintStream::print(double d)
{
	
	//    .param p1, "d"    # D
	this->write(java::lang::String::valueOf(d));
	return;

}
// .method public print(F)V
void java::io::PrintStream::print(float f)
{
	
	//    .param p1, "f"    # F
	this->write(java::lang::String::valueOf(f));
	return;

}
// .method public print(I)V
void java::io::PrintStream::print(int i)
{
	
	//    .param p1, "i"    # I
	this->write(java::lang::String::valueOf(i));
	return;

}
// .method public print(J)V
void java::io::PrintStream::print(long long l)
{
	
	//    .param p1, "l"    # J
	this->write(java::lang::String::valueOf(l));
	return;

}
// .method public print(Ljava/lang/Object;)V
void java::io::PrintStream::print(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	this->write(java::lang::String::valueOf(obj));
	return;

}
// .method public print(Ljava/lang/String;)V
void java::io::PrintStream::print(std::shared_ptr<java::lang::String> cVar0)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "s"    # Ljava/lang/String;
	if ( cVar0 )     
		goto label_cond_5;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("null"));
label_cond_5:
	this->write(cVar0);
	return;

}
// .method public print(Z)V
void java::io::PrintStream::print(bool b)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "b"    # Z
	if ( !(b) )  
		goto label_cond_9;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("true"));
label_goto_5:
	this->write(cVar0);
	return;
	// 1373    .line 600
label_cond_9:
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("false"));
	goto label_goto_5;

}
// .method public print([C)V
void java::io::PrintStream::print(std::shared_ptr<char[]> s)
{
	
	//    .param p1, "s"    # [C
	this->write(s);
	return;

}
// .method public varargs printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
std::shared_ptr<java::io::PrintStream> java::io::PrintStream::printf(std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args)
{
	
	//    .param p1, "format"    # Ljava/lang/String;
	//    .param p2, "args"    # [Ljava/lang/Object;
	return this->format(format, args);

}
// .method public varargs printf(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
std::shared_ptr<java::io::PrintStream> java::io::PrintStream::printf(std::shared_ptr<java::util::Locale> l,std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args)
{
	
	//    .param p1, "l"    # Ljava/util/Locale;
	//    .param p2, "format"    # Ljava/lang/String;
	//    .param p3, "args"    # [Ljava/lang/Object;
	return this->format(l, format, args);

}
// .method public println()V
void java::io::PrintStream::println()
{
	
	this->newLine();
	return;

}
// .method public println(C)V
void java::io::PrintStream::println(char x)
{
	
	//    .param p1, "x"    # C
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->print(x);
	this->newLine();
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_1 .. :try_end_7} :catchall_9
	this->monitor_exit();
	return;
	// 1454    .line 750
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public println(D)V
void java::io::PrintStream::println(double x)
{
	
	//    .param p1, "x"    # D
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->print(x);
	this->newLine();
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_1 .. :try_end_7} :catchall_9
	this->monitor_exit();
	return;
	// 1485    .line 806
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public println(F)V
void java::io::PrintStream::println(float x)
{
	
	//    .param p1, "x"    # F
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->print(x);
	this->newLine();
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_1 .. :try_end_7} :catchall_9
	this->monitor_exit();
	return;
	// 1516    .line 792
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public println(I)V
void java::io::PrintStream::println(int x)
{
	
	//    .param p1, "x"    # I
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->print(x);
	this->newLine();
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_1 .. :try_end_7} :catchall_9
	this->monitor_exit();
	return;
	// 1547    .line 764
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public println(J)V
void java::io::PrintStream::println(long long x)
{
	
	//    .param p1, "x"    # J
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->print(x);
	this->newLine();
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_1 .. :try_end_7} :catchall_9
	this->monitor_exit();
	return;
	// 1578    .line 778
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public println(Ljava/lang/Object;)V
void java::io::PrintStream::println(std::shared_ptr<java::lang::Object> x)
{
	
	//    .param p1, "x"    # Ljava/lang/Object;
	//    .local v0, "s":Ljava/lang/String;
	this->monitor_enter();
	try {
	//label_try_start_5:
	this->print(java::lang::String::valueOf(x));
	this->newLine();
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_5 .. :try_end_b} :catchall_d
	this->monitor_exit();
	return;
	// 1615    .line 851
label_catchall_d:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public println(Ljava/lang/String;)V
void java::io::PrintStream::println(std::shared_ptr<java::lang::String> x)
{
	
	//    .param p1, "x"    # Ljava/lang/String;
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->print(x);
	this->newLine();
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_1 .. :try_end_7} :catchall_9
	this->monitor_exit();
	return;
	// 1646    .line 834
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public println(Z)V
void java::io::PrintStream::println(bool x)
{
	
	//    .param p1, "x"    # Z
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->print(x);
	this->newLine();
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_1 .. :try_end_7} :catchall_9
	this->monitor_exit();
	return;
	// 1677    .line 736
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public println([C)V
void java::io::PrintStream::println(std::shared_ptr<char[]> x)
{
	
	//    .param p1, "x"    # [C
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->print(x);
	this->newLine();
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_1 .. :try_end_7} :catchall_9
	this->monitor_exit();
	return;
	// 1708    .line 820
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method protected setError()V
void java::io::PrintStream::setError()
{
	
	this->trouble = 0x1;
	return;

}
// .method public write(I)V
void java::io::PrintStream::write(int b)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "b"    # I
	try {
	//label_try_start_0:
	this->monitor_enter();
	//label_try_end_1:
	}
	catch (java::io::InterruptedIOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1b;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	//    .catch Ljava/io/InterruptedIOException; {:try_start_0 .. :try_end_1} :catch_1b
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_1} :catch_24
	try {
	//label_try_start_1:
	this->ensureOpen();
	this->out->write(b);
	if ( b != 0xa )
		goto label_cond_16;
	if ( !(this->autoFlush) )  
		goto label_cond_16;
	this->out->flush();
	//label_try_end_16:
	}
	catch (...){
		goto label_catchall_18;
	}
	//    .catchall {:try_start_1 .. :try_end_16} :catchall_18
label_cond_16:
	try {
	//label_try_start_16:
	this->monitor_exit();
label_goto_17:
	return;
	// 1775    .line 470
label_catchall_18:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 1782    :try_end_1b
	// 1783    .catch Ljava/io/InterruptedIOException; {:try_start_16 .. :try_end_1b} :catch_1b
	// 1784    .catch Ljava/io/IOException; {:try_start_16 .. :try_end_1b} :catch_24
	// 1786    .line 477
label_catch_1b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Ljava/io/InterruptedIOException;
	java::lang::Thread::currentThread({const[class].FS-Param})->interrupt();
	goto label_goto_17;
	// 1800    .line 480
	// 1801    .end local v1    # "x":Ljava/io/InterruptedIOException;
label_catch_24:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Ljava/io/IOException;
	this->trouble = 0x1;
	goto label_goto_17;

}
// .method public write([BII)V
void java::io::PrintStream::write(std::shared_ptr<unsigned char[]> buf,int off,int len)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "buf"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	try {
	//label_try_start_0:
	this->monitor_enter();
	//label_try_end_1:
	}
	catch (java::io::InterruptedIOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_17;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_20;
	}
	//    .catch Ljava/io/InterruptedIOException; {:try_start_0 .. :try_end_1} :catch_17
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_1} :catch_20
	try {
	//label_try_start_1:
	this->ensureOpen();
	this->out->write(buf, off, len);
	if ( !(this->autoFlush) )  
		goto label_cond_12;
	this->out->flush();
	//label_try_end_12:
	}
	catch (...){
		goto label_catchall_14;
	}
	//    .catchall {:try_start_1 .. :try_end_12} :catchall_14
label_cond_12:
	try {
	//label_try_start_12:
	this->monitor_exit();
label_goto_13:
	return;
	// 1857    .line 501
label_catchall_14:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 1864    :try_end_17
	// 1865    .catch Ljava/io/InterruptedIOException; {:try_start_12 .. :try_end_17} :catch_17
	// 1866    .catch Ljava/io/IOException; {:try_start_12 .. :try_end_17} :catch_20
	// 1868    .line 508
label_catch_17:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Ljava/io/InterruptedIOException;
	java::lang::Thread::currentThread({const[class].FS-Param})->interrupt();
	goto label_goto_13;
	// 1882    .line 511
	// 1883    .end local v1    # "x":Ljava/io/InterruptedIOException;
label_catch_20:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Ljava/io/IOException;
	this->trouble = 0x1;
	goto label_goto_13;

}


