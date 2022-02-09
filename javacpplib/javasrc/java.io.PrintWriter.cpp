// CPP L:\smali2cpp20\x64\Release\out\java\io\PrintWriter.smali
#include "java2ctype.h"
#include "java.io.BufferedWriter.h"
#include "java.io.File.h"
#include "java.io.FileOutputStream.h"
#include "java.io.IOException.h"
#include "java.io.InterruptedIOException.h"
#include "java.io.OutputStream.h"
#include "java.io.OutputStreamWriter.h"
#include "java.io.PrintStream.h"
#include "java.io.PrintWriter.h"
#include "java.io.UnsupportedEncodingException.h"
#include "java.io.Writer.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Thread.h"
#include "java.nio.charset.Charset.h"
#include "java.nio.charset.IllegalCharsetNameException.h"
#include "java.nio.charset.UnsupportedCharsetException.h"
#include "java.security.AccessController.h"
#include "java.util.Formatter.h"
#include "java.util.Locale.h"
#include "java.util.Objects.h"
#include "sun.security.action.GetPropertyAction.h"

// .method public constructor <init>(Ljava/io/File;)V
java::io::PrintWriter::PrintWriter(std::shared_ptr<java::io::File> file)
{
	
	std::shared_ptr<java::io::BufferedWriter> cVar0;
	std::shared_ptr<java::io::OutputStreamWriter> cVar1;
	std::shared_ptr<java::io::FileOutputStream> cVar2;
	
	//    .param p1, "file"    # Ljava/io/File;
	//    .annotation system Ldalvik/annotation/Throws;
	// 025        value = {
	// 026            Ljava/io/FileNotFoundException;
	// 027        }
	// 028    .end annotation
	cVar2 = std::make_shared<java::io::FileOutputStream>(file);
	cVar1 = std::make_shared<java::io::OutputStreamWriter>(cVar2);
	cVar0 = std::make_shared<java::io::BufferedWriter>(cVar1);
	java::io::PrintWriter::(cVar0, 0x0);
	return;

}
// .method public constructor <init>(Ljava/io/File;Ljava/lang/String;)V
java::io::PrintWriter::PrintWriter(std::shared_ptr<java::io::File> file,std::shared_ptr<java::lang::String> csn)
{
	
	//    .param p1, "file"    # Ljava/io/File;
	//    .param p2, "csn"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 059        value = {
	// 060            Ljava/io/FileNotFoundException;,
	// 061            Ljava/io/UnsupportedEncodingException;
	// 062        }
	// 063    .end annotation
	java::io::PrintWriter::(java::io::PrintWriter::toCharset(csn), file);
	return;

}
// .method public constructor <init>(Ljava/io/OutputStream;)V
java::io::PrintWriter::PrintWriter(std::shared_ptr<java::io::OutputStream> out)
{
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	java::io::PrintWriter::(out, 0x0);
	return;

}
// .method public constructor <init>(Ljava/io/OutputStream;Z)V
java::io::PrintWriter::PrintWriter(std::shared_ptr<java::io::OutputStream> out,bool autoFlush)
{
	
	std::shared_ptr<java::io::BufferedWriter> cVar0;
	std::shared_ptr<java::io::OutputStreamWriter> cVar1;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .param p2, "autoFlush"    # Z
	cVar1 = std::make_shared<java::io::OutputStreamWriter>(out);
	cVar0 = std::make_shared<java::io::BufferedWriter>(cVar1);
	java::io::PrintWriter::(cVar0, autoFlush);
	if ( !(out->instanceOf("java::io::PrintStream")) )  
		goto label_cond_15;
	out->checkCast("java::io::PrintStream");
	//    .end local p1    # "out":Ljava/io/OutputStream;
	this->psOut = out;
label_cond_15:
	return;

}
// .method public constructor <init>(Ljava/io/Writer;)V
java::io::PrintWriter::PrintWriter(std::shared_ptr<java::io::Writer> out)
{
	
	//    .param p1, "out"    # Ljava/io/Writer;
	java::io::PrintWriter::(out, 0x0);
	return;

}
// .method public constructor <init>(Ljava/io/Writer;Z)V
java::io::PrintWriter::PrintWriter(std::shared_ptr<java::io::Writer> out,bool autoFlush)
{
	
	std::shared_ptr<sun::security::action::GetPropertyAction> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .param p1, "out"    # Ljava/io/Writer;
	//    .param p2, "autoFlush"    # Z
	java::io::Writer::(out);
	this->trouble = 0x0;
	this->psOut = 0x0;
	this->out = out;
	this->autoFlush = autoFlush;
	cVar0 = std::make_shared<sun::security::action::GetPropertyAction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("line.separator")));
	cVar1 = java::security::AccessController::doPrivileged(cVar0);
	cVar1->checkCast("java::lang::String");
	this->lineSeparator = cVar1;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::PrintWriter::PrintWriter(std::shared_ptr<java::lang::String> fileName)
{
	
	std::shared_ptr<java::io::BufferedWriter> cVar0;
	std::shared_ptr<java::io::OutputStreamWriter> cVar1;
	std::shared_ptr<java::io::FileOutputStream> cVar2;
	
	//    .param p1, "fileName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 187        value = {
	// 188            Ljava/io/FileNotFoundException;
	// 189        }
	// 190    .end annotation
	cVar2 = std::make_shared<java::io::FileOutputStream>(fileName);
	cVar1 = std::make_shared<java::io::OutputStreamWriter>(cVar2);
	cVar0 = std::make_shared<java::io::BufferedWriter>(cVar1);
	java::io::PrintWriter::(cVar0, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
java::io::PrintWriter::PrintWriter(std::shared_ptr<java::lang::String> fileName,std::shared_ptr<java::lang::String> csn)
{
	
	std::shared_ptr<java::io::File> cVar0;
	
	//    .param p1, "fileName"    # Ljava/lang/String;
	//    .param p2, "csn"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 221        value = {
	// 222            Ljava/io/FileNotFoundException;,
	// 223            Ljava/io/UnsupportedEncodingException;
	// 224        }
	// 225    .end annotation
	cVar0 = std::make_shared<java::io::File>(fileName);
	java::io::PrintWriter::(java::io::PrintWriter::toCharset(csn), cVar0);
	return;

}
// .method private constructor <init>(Ljava/nio/charset/Charset;Ljava/io/File;)V
java::io::PrintWriter::PrintWriter(std::shared_ptr<java::nio::charset::Charset> charset,std::shared_ptr<java::io::File> file)
{
	
	std::shared_ptr<java::io::BufferedWriter> cVar0;
	std::shared_ptr<java::io::OutputStreamWriter> cVar1;
	std::shared_ptr<java::io::FileOutputStream> cVar2;
	
	//    .param p1, "charset"    # Ljava/nio/charset/Charset;
	//    .param p2, "file"    # Ljava/io/File;
	//    .annotation system Ldalvik/annotation/Throws;
	// 248        value = {
	// 249            Ljava/io/FileNotFoundException;
	// 250        }
	// 251    .end annotation
	cVar2 = std::make_shared<java::io::FileOutputStream>(file);
	cVar1 = std::make_shared<java::io::OutputStreamWriter>(cVar2, charset);
	cVar0 = std::make_shared<java::io::BufferedWriter>(cVar1);
	java::io::PrintWriter::(cVar0, 0x0);
	return;

}
// .method private ensureOpen()V
void java::io::PrintWriter::ensureOpen()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 280        value = {
	// 281            Ljava/io/IOException;
	// 282        }
	// 283    .end annotation
	if ( this->out )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream closed")));
	// throw
	throw cVar0;
	// 300    .line 310
label_cond_d:
	return;

}
// .method private newLine()V
void java::io::PrintWriter::newLine()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	cVar0 = this->lock;
	cVar0->monitor_enter();
	//label_try_end_3:
	}
	catch (java::io::InterruptedIOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1b;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	//    .catch Ljava/io/InterruptedIOException; {:try_start_0 .. :try_end_3} :catch_1b
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_3} :catch_24
	try {
	//label_try_start_3:
	this->ensureOpen();
	this->out->write(this->lineSeparator);
	if ( !(this->autoFlush) )  
		goto label_cond_16;
	this->out->flush();
	//label_try_end_16:
	}
	catch (...){
		goto label_catchall_18;
	}
	//    .catchall {:try_start_3 .. :try_end_16} :catchall_18
label_cond_16:
	try {
	//label_try_start_16:
	cVar0->monitor_exit();
label_goto_17:
	return;
	// 349    .line 478
label_catchall_18:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 356    :try_end_1b
	// 357    .catch Ljava/io/InterruptedIOException; {:try_start_16 .. :try_end_1b} :catch_1b
	// 358    .catch Ljava/io/IOException; {:try_start_16 .. :try_end_1b} :catch_24
	// 360    .line 485
label_catch_1b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Ljava/io/InterruptedIOException;
	java::lang::Thread::currentThread({const[class].FS-Param})->interrupt();
	goto label_goto_17;
	// 374    .line 488
	// 375    .end local v1    # "x":Ljava/io/InterruptedIOException;
label_catch_24:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Ljava/io/IOException;
	this->trouble = 0x1;
	goto label_goto_17;

}
// .method private static toCharset(Ljava/lang/String;)Ljava/nio/charset/Charset;
std::shared_ptr<java::nio::charset::Charset> java::io::PrintWriter::toCharset(std::shared_ptr<java::lang::String> csn)
{
	
	std::shared_ptr<java::io::UnsupportedEncodingException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "csn"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 392        value = {
	// 393            Ljava/io/UnsupportedEncodingException;
	// 394        }
	// 395    .end annotation
	java::util::Objects::requireNonNull(csn, std::make_shared<java::lang::String>(std::make_shared<char[]>("charsetName")));
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
	// 414    .line 88
label_catch_b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "unused":Ljava/lang/IllegalArgumentException;
	cVar0 = std::make_shared<java::io::UnsupportedEncodingException>(csn);
	// throw
	throw cVar0;

}
// .method public append(C)Ljava/io/PrintWriter;
std::shared_ptr<java::io::PrintWriter> java::io::PrintWriter::append(char c)
{
	
	//    .param p1, "c"    # C
	this->write(c);
	return this;

}
// .method public append(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;
std::shared_ptr<java::io::PrintWriter> java::io::PrintWriter::append(std::shared_ptr<java::lang::CharSequence> csq)
{
	
	//    .param p1, "csq"    # Ljava/lang/CharSequence;
	if ( csq )     
		goto label_cond_9;
	this->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("null")));
label_goto_8:
	return this;
	// 458    .line 1004
label_cond_9:
	this->write(csq->toString());
	goto label_goto_8;

}
// .method public append(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;
std::shared_ptr<java::io::PrintWriter> java::io::PrintWriter::append(std::shared_ptr<java::lang::CharSequence> csq,int start,int end)
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
	// 497    .line 1041
	// 498    .end local v0    # "cs":Ljava/lang/CharSequence;
label_cond_11:
	//    .restart local v0    # "cs":Ljava/lang/CharSequence;
	goto label_goto_5;

}
// .method public checkError()Z
bool java::io::PrintWriter::checkError()
{
	
	std::shared_ptr<java::io::Writer> pw;
	
	if ( !(this->out) )  
		goto label_cond_7;
	this->flush();
label_cond_7:
	if ( !(this->out->instanceOf("java::io::PrintWriter")) )  
		goto label_cond_16;
	pw = this->out;
	pw->checkCast("java::io::PrintWriter");
	//    .local v0, "pw":Ljava/io/PrintWriter;
	return pw->checkError();
	// 641    .line 362
	// 642    .end local v0    # "pw":Ljava/io/PrintWriter;
label_cond_16:
	if ( !(this->psOut) )  
		goto label_cond_21;
	return this->psOut->checkError();
	// 657    .line 365
label_cond_21:
	return this->trouble;

}
// .method protected clearError()V
void java::io::PrintWriter::clearError()
{
	
	this->trouble = 0x0;
	return;

}
// .method public close()V
void java::io::PrintWriter::close()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	cVar0 = this->lock;
	cVar0->monitor_enter();
	//label_try_end_3:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_3} :catch_16
	try {
	//label_try_start_3:
	//label_try_end_5:
	}
	catch (...){
		goto label_catchall_13;
	}
	//    .catchall {:try_start_3 .. :try_end_5} :catchall_13
	if ( this->out )     
		goto label_cond_9;
	try {
	//label_try_start_7:
	cVar0->monitor_exit();
	//label_try_end_8:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	//    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_8} :catch_16
	return;
	// 705    .line 339
label_cond_9:
	try {
	//label_try_start_9:
	this->out->close();
	this->out = 0x0;
	//label_try_end_11:
	}
	catch (...){
		goto label_catchall_13;
	}
	//    .catchall {:try_start_9 .. :try_end_11} :catchall_13
	try {
	//label_try_start_11:
	cVar0->monitor_exit();
label_goto_12:
	return;
	// 726    .line 336
label_catchall_13:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 733    :try_end_16
	// 734    .catch Ljava/io/IOException; {:try_start_11 .. :try_end_16} :catch_16
	// 736    .line 343
label_catch_16:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Ljava/io/IOException;
	this->trouble = 0x1;
	goto label_goto_12;

}
// .method public flush()V
void java::io::PrintWriter::flush()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	cVar0 = this->lock;
	cVar0->monitor_enter();
	//label_try_end_3:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_3} :catch_10
	try {
	//label_try_start_3:
	this->ensureOpen();
	this->out->flush();
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_3 .. :try_end_b} :catchall_d
	try {
	//label_try_start_b:
	cVar0->monitor_exit();
label_goto_c:
	return;
	// 779    .line 318
label_catchall_d:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 786    :try_end_10
	// 787    .catch Ljava/io/IOException; {:try_start_b .. :try_end_10} :catch_10
	// 789    .line 323
label_catch_10:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Ljava/io/IOException;
	this->trouble = 0x1;
	goto label_goto_c;

}
// .method public varargs format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;
std::shared_ptr<java::io::PrintWriter> java::io::PrintWriter::format(std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::Formatter> cVar1;
	
	//    .param p1, "format"    # Ljava/lang/String;
	//    .param p2, "args"    # [Ljava/lang/Object;
	try {
	//label_try_start_0:
	cVar0 = this->lock;
	cVar0->monitor_enter();
	//label_try_end_3:
	}
	catch (java::io::InterruptedIOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_34;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3d;
	}
	//    .catch Ljava/io/InterruptedIOException; {:try_start_0 .. :try_end_3} :catch_34
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_3} :catch_3d
	try {
	//label_try_start_3:
	this->ensureOpen();
	if ( !(this->formatter) )  
		goto label_cond_16;
	if ( this->formatter->locale() == java::util::Locale::getDefault({const[class].FS-Param}) )
		goto label_cond_1d;
label_cond_16:
	cVar1 = std::make_shared<java::util::Formatter>(this);
	this->formatter = cVar1;
label_cond_1d:
	this->formatter->format(java::util::Locale::getDefault({const[class].FS-Param}), format, args);
	if ( !(this->autoFlush) )  
		goto label_cond_2f;
	this->out->flush();
	//label_try_end_2f:
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catchall {:try_start_3 .. :try_end_2f} :catchall_31
label_cond_2f:
	try {
	//label_try_start_2f:
	cVar0->monitor_exit();
label_goto_30:
	return this;
	// 877    .line 900
label_catchall_31:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 884    :try_end_34
	// 885    .catch Ljava/io/InterruptedIOException; {:try_start_2f .. :try_end_34} :catch_34
	// 886    .catch Ljava/io/IOException; {:try_start_2f .. :try_end_34} :catch_3d
	// 888    .line 909
label_catch_34:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Ljava/io/InterruptedIOException;
	java::lang::Thread::currentThread({const[class].FS-Param})->interrupt();
	goto label_goto_30;
	// 902    .line 911
	// 903    .end local v1    # "x":Ljava/io/InterruptedIOException;
label_catch_3d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Ljava/io/IOException;
	this->trouble = 0x1;
	goto label_goto_30;

}
// .method public varargs format(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;
std::shared_ptr<java::io::PrintWriter> java::io::PrintWriter::format(std::shared_ptr<java::util::Locale> l,std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::Formatter> cVar1;
	
	//    .param p1, "l"    # Ljava/util/Locale;
	//    .param p2, "format"    # Ljava/lang/String;
	//    .param p3, "args"    # [Ljava/lang/Object;
	try {
	//label_try_start_0:
	cVar0 = this->lock;
	cVar0->monitor_enter();
	//label_try_end_3:
	}
	catch (java::io::InterruptedIOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_35;
	}
	//    .catch Ljava/io/InterruptedIOException; {:try_start_0 .. :try_end_3} :catch_2c
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_3} :catch_35
	try {
	//label_try_start_3:
	this->ensureOpen();
	if ( !(this->formatter) )  
		goto label_cond_12;
	if ( this->formatter->locale() == l )
		goto label_cond_19;
label_cond_12:
	cVar1 = std::make_shared<java::util::Formatter>(this, l);
	this->formatter = cVar1;
label_cond_19:
	this->formatter->format(l, format, args);
	if ( !(this->autoFlush) )  
		goto label_cond_27;
	this->out->flush();
	//label_try_end_27:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_3 .. :try_end_27} :catchall_29
label_cond_27:
	try {
	//label_try_start_27:
	cVar0->monitor_exit();
label_goto_28:
	return this;
	// 983    .line 960
label_catchall_29:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 990    :try_end_2c
	// 991    .catch Ljava/io/InterruptedIOException; {:try_start_27 .. :try_end_2c} :catch_2c
	// 992    .catch Ljava/io/IOException; {:try_start_27 .. :try_end_2c} :catch_35
	// 994    .line 968
label_catch_2c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Ljava/io/InterruptedIOException;
	java::lang::Thread::currentThread({const[class].FS-Param})->interrupt();
	goto label_goto_28;
	// 1008    .line 970
	// 1009    .end local v1    # "x":Ljava/io/InterruptedIOException;
label_catch_35:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Ljava/io/IOException;
	this->trouble = 0x1;
	goto label_goto_28;

}
// .method public print(C)V
void java::io::PrintWriter::print(char c)
{
	
	//    .param p1, "c"    # C
	this->write(c);
	return;

}
// .method public print(D)V
void java::io::PrintWriter::print(double d)
{
	
	//    .param p1, "d"    # D
	this->write(java::lang::String::valueOf(d));
	return;

}
// .method public print(F)V
void java::io::PrintWriter::print(float f)
{
	
	//    .param p1, "f"    # F
	this->write(java::lang::String::valueOf(f));
	return;

}
// .method public print(I)V
void java::io::PrintWriter::print(int i)
{
	
	//    .param p1, "i"    # I
	this->write(java::lang::String::valueOf(i));
	return;

}
// .method public print(J)V
void java::io::PrintWriter::print(long long l)
{
	
	//    .param p1, "l"    # J
	this->write(java::lang::String::valueOf(l));
	return;

}
// .method public print(Ljava/lang/Object;)V
void java::io::PrintWriter::print(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	this->write(java::lang::String::valueOf(obj));
	return;

}
// .method public print(Ljava/lang/String;)V
void java::io::PrintWriter::print(std::shared_ptr<java::lang::String> cVar0)
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
void java::io::PrintWriter::print(bool b)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "b"    # Z
	if ( !(b) )  
		goto label_cond_9;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("true"));
label_goto_5:
	this->write(cVar0);
	return;
	// 1149    .line 505
label_cond_9:
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("false"));
	goto label_goto_5;

}
// .method public print([C)V
void java::io::PrintWriter::print(std::shared_ptr<char[]> s)
{
	
	//    .param p1, "s"    # [C
	this->write(s);
	return;

}
// .method public varargs printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;
std::shared_ptr<java::io::PrintWriter> java::io::PrintWriter::printf(std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args)
{
	
	//    .param p1, "format"    # Ljava/lang/String;
	//    .param p2, "args"    # [Ljava/lang/Object;
	return this->format(format, args);

}
// .method public varargs printf(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;
std::shared_ptr<java::io::PrintWriter> java::io::PrintWriter::printf(std::shared_ptr<java::util::Locale> l,std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args)
{
	
	//    .param p1, "l"    # Ljava/util/Locale;
	//    .param p2, "format"    # Ljava/lang/String;
	//    .param p3, "args"    # [Ljava/lang/Object;
	return this->format(l, format, args);

}
// .method public println()V
void java::io::PrintWriter::println()
{
	
	this->newLine();
	return;

}
// .method public println(C)V
void java::io::PrintWriter::println(char x)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "x"    # C
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->print(x);
	this->println();
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_3 .. :try_end_9} :catchall_b
	cVar0->monitor_exit();
	return;
	// 1232    .line 654
label_catchall_b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public println(D)V
void java::io::PrintWriter::println(double x)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "x"    # D
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->print(x);
	this->println();
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_3 .. :try_end_9} :catchall_b
	cVar0->monitor_exit();
	return;
	// 1265    .line 710
label_catchall_b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public println(F)V
void java::io::PrintWriter::println(float x)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "x"    # F
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->print(x);
	this->println();
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_3 .. :try_end_9} :catchall_b
	cVar0->monitor_exit();
	return;
	// 1298    .line 696
label_catchall_b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public println(I)V
void java::io::PrintWriter::println(int x)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "x"    # I
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->print(x);
	this->println();
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_3 .. :try_end_9} :catchall_b
	cVar0->monitor_exit();
	return;
	// 1331    .line 668
label_catchall_b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public println(J)V
void java::io::PrintWriter::println(long long x)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "x"    # J
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->print(x);
	this->println();
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_3 .. :try_end_9} :catchall_b
	cVar0->monitor_exit();
	return;
	// 1364    .line 682
label_catchall_b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public println(Ljava/lang/Object;)V
void java::io::PrintWriter::println(std::shared_ptr<java::lang::Object> x)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "x"    # Ljava/lang/Object;
	//    .local v0, "s":Ljava/lang/String;
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_7:
	this->print(java::lang::String::valueOf(x));
	this->println();
	//label_try_end_d:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_7 .. :try_end_d} :catchall_f
	cVar0->monitor_exit();
	return;
	// 1403    .line 755
label_catchall_f:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public println(Ljava/lang/String;)V
void java::io::PrintWriter::println(std::shared_ptr<java::lang::String> x)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "x"    # Ljava/lang/String;
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->print(x);
	this->println();
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_3 .. :try_end_9} :catchall_b
	cVar0->monitor_exit();
	return;
	// 1436    .line 738
label_catchall_b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public println(Z)V
void java::io::PrintWriter::println(bool x)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "x"    # Z
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->print(x);
	this->println();
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_3 .. :try_end_9} :catchall_b
	cVar0->monitor_exit();
	return;
	// 1469    .line 640
label_catchall_b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public println([C)V
void java::io::PrintWriter::println(std::shared_ptr<char[]> x)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "x"    # [C
	cVar0 = this->lock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->print(x);
	this->println();
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_3 .. :try_end_9} :catchall_b
	cVar0->monitor_exit();
	return;
	// 1502    .line 724
label_catchall_b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method protected setError()V
void java::io::PrintWriter::setError()
{
	
	this->trouble = 0x1;
	return;

}
// .method public write(I)V
void java::io::PrintWriter::write(int c)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "c"    # I
	try {
	//label_try_start_0:
	cVar0 = this->lock;
	cVar0->monitor_enter();
	//label_try_end_3:
	}
	catch (java::io::InterruptedIOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Ljava/io/InterruptedIOException; {:try_start_0 .. :try_end_3} :catch_10
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_3} :catch_19
	try {
	//label_try_start_3:
	this->ensureOpen();
	this->out->write(c);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_3 .. :try_end_b} :catchall_d
	try {
	//label_try_start_b:
	cVar0->monitor_exit();
label_goto_c:
	return;
	// 1556    .line 403
label_catchall_d:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 1563    :try_end_10
	// 1564    .catch Ljava/io/InterruptedIOException; {:try_start_b .. :try_end_10} :catch_10
	// 1565    .catch Ljava/io/IOException; {:try_start_b .. :try_end_10} :catch_19
	// 1567    .line 408
label_catch_10:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Ljava/io/InterruptedIOException;
	java::lang::Thread::currentThread({const[class].FS-Param})->interrupt();
	goto label_goto_c;
	// 1581    .line 411
	// 1582    .end local v1    # "x":Ljava/io/InterruptedIOException;
label_catch_19:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Ljava/io/IOException;
	this->trouble = 0x1;
	goto label_goto_c;

}
// .method public write(Ljava/lang/String;)V
void java::io::PrintWriter::write(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	this->write(s, 0x0, s->length());
	return;

}
// .method public write(Ljava/lang/String;II)V
void java::io::PrintWriter::write(std::shared_ptr<java::lang::String> s,int off,int len)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	try {
	//label_try_start_0:
	cVar0 = this->lock;
	cVar0->monitor_enter();
	//label_try_end_3:
	}
	catch (java::io::InterruptedIOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Ljava/io/InterruptedIOException; {:try_start_0 .. :try_end_3} :catch_10
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_3} :catch_19
	try {
	//label_try_start_3:
	this->ensureOpen();
	this->out->write(s, off, len);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_3 .. :try_end_b} :catchall_d
	try {
	//label_try_start_b:
	cVar0->monitor_exit();
label_goto_c:
	return;
	// 1647    .line 454
label_catchall_d:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 1654    :try_end_10
	// 1655    .catch Ljava/io/InterruptedIOException; {:try_start_b .. :try_end_10} :catch_10
	// 1656    .catch Ljava/io/IOException; {:try_start_b .. :try_end_10} :catch_19
	// 1658    .line 459
label_catch_10:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Ljava/io/InterruptedIOException;
	java::lang::Thread::currentThread({const[class].FS-Param})->interrupt();
	goto label_goto_c;
	// 1672    .line 462
	// 1673    .end local v1    # "x":Ljava/io/InterruptedIOException;
label_catch_19:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Ljava/io/IOException;
	this->trouble = 0x1;
	goto label_goto_c;

}
// .method public write([C)V
void java::io::PrintWriter::write(std::shared_ptr<char[]> buf)
{
	
	//    .param p1, "buf"    # [C
	this->write(buf, 0x0, buf->size());
	return;

}
// .method public write([CII)V
void java::io::PrintWriter::write(std::shared_ptr<char[]> buf,int off,int len)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "buf"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	try {
	//label_try_start_0:
	cVar0 = this->lock;
	cVar0->monitor_enter();
	//label_try_end_3:
	}
	catch (java::io::InterruptedIOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Ljava/io/InterruptedIOException; {:try_start_0 .. :try_end_3} :catch_10
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_3} :catch_19
	try {
	//label_try_start_3:
	this->ensureOpen();
	this->out->write(buf, off, len);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_3 .. :try_end_b} :catchall_d
	try {
	//label_try_start_b:
	cVar0->monitor_exit();
label_goto_c:
	return;
	// 1736    .line 424
label_catchall_d:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 1743    :try_end_10
	// 1744    .catch Ljava/io/InterruptedIOException; {:try_start_b .. :try_end_10} :catch_10
	// 1745    .catch Ljava/io/IOException; {:try_start_b .. :try_end_10} :catch_19
	// 1747    .line 429
label_catch_10:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Ljava/io/InterruptedIOException;
	java::lang::Thread::currentThread({const[class].FS-Param})->interrupt();
	goto label_goto_c;
	// 1761    .line 432
	// 1762    .end local v1    # "x":Ljava/io/InterruptedIOException;
label_catch_19:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Ljava/io/IOException;
	this->trouble = 0x1;
	goto label_goto_c;

}


