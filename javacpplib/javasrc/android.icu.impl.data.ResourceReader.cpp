// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\ResourceReader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUData.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.impl.data.ResourceReader.h"
#include "java.io.BufferedReader.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.InputStreamReader.h"
#include "java.io.UnsupportedEncodingException.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(Ljava/io/InputStream;Ljava/lang/String;)V
android::icu::impl::data::ResourceReader::ResourceReader(std::shared_ptr<java::io::InputStream> is,std::shared_ptr<java::lang::String> resourceName)
{
	
	//    .param p1, "is"    # Ljava/io/InputStream;
	//    .param p2, "resourceName"    # Ljava/lang/String;
	android::icu::impl::data::ResourceReader::(is, resourceName, 0x0);
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;Ljava/lang/String;Ljava/lang/String;)V
android::icu::impl::data::ResourceReader::ResourceReader(std::shared_ptr<java::io::InputStream> is,std::shared_ptr<java::lang::String> resourceName,std::shared_ptr<java::lang::String> encoding)
{
	
	std::shared_ptr<java::io::BufferedReader> cVar0;
	std::shared_ptr<java::io::InputStreamReader> isr;
	std::shared_ptr<java::io::BufferedReader> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "is"    # Ljava/io/InputStream;
	//    .param p2, "resourceName"    # Ljava/lang/String;
	//    .param p3, "encoding"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 054    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->reader = cVar0;
	this->root = cVar0;
	this->resourceName = resourceName;
	this->encoding = encoding;
	this->lineNo = -0x1;
	if ( encoding )     
		goto label_cond_21;
	try {
	//label_try_start_11:
	isr = std::make_shared<java::io::InputStreamReader>(is);
	//    .local v1, "isr":Ljava/io/InputStreamReader;
label_goto_16:
	cVar1 = std::make_shared<java::io::BufferedReader>(isr);
	this->reader = cVar1;
	this->lineNo = 0x0;
	//    .end local v1    # "isr":Ljava/io/InputStreamReader;
label_goto_20:
	return;
	// 101    .line 110
label_cond_21:
	isr = std::make_shared<java::io::InputStreamReader>(is, encoding);
	//label_try_end_26:
	}
	catch (java::io::UnsupportedEncodingException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_27;
	}
	//    .catch Ljava/io/UnsupportedEncodingException; {:try_start_11 .. :try_end_26} :catch_27
	//    .restart local v1    # "isr":Ljava/io/InputStreamReader;
	goto label_goto_16;
	// 112    .line 115
	// 113    .end local v1    # "isr":Ljava/io/InputStreamReader;
label_catch_27:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/UnsupportedEncodingException;
	goto label_goto_20;

}
// .method public constructor <init>(Ljava/lang/Class;Ljava/lang/String;)V
android::icu::impl::data::ResourceReader::ResourceReader(std::shared_ptr<java::lang::Class<java::lang::Object>> rootClass,std::shared_ptr<java::lang::String> resourceName)
{
	
	std::shared_ptr<java::io::BufferedReader> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p2, "resourceName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 125        value = {
	// 126            "(",
	// 127            "Ljava/lang/Class",
	// 128            "<*>;",
	// 129            "Ljava/lang/String;",
	// 130            ")V"
	// 131        }
	// 132    .end annotation
	//    .local p1, "rootClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = 0x0;
	// 139    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->reader = cVar0;
	this->root = rootClass;
	this->resourceName = resourceName;
	this->encoding = cVar0;
	this->lineNo = -0x1;
	try {
	//label_try_start_f:
	this->_reset();
	//label_try_end_12:
	}
	catch (java::io::UnsupportedEncodingException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_13;
	}
	//    .catch Ljava/io/UnsupportedEncodingException; {:try_start_f .. :try_end_12} :catch_13
label_goto_12:
	return;
	// 168    .line 142
label_catch_13:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/UnsupportedEncodingException;
	goto label_goto_12;

}
// .method public constructor <init>(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)V
android::icu::impl::data::ResourceReader::ResourceReader(std::shared_ptr<java::lang::Class<java::lang::Object>> rootClass,std::shared_ptr<java::lang::String> resourceName,std::shared_ptr<java::lang::String> encoding)
{
	
	//    .param p2, "resourceName"    # Ljava/lang/String;
	//    .param p3, "encoding"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 181        value = {
	// 182            "(",
	// 183            "Ljava/lang/Class",
	// 184            "<*>;",
	// 185            "Ljava/lang/String;",
	// 186            "Ljava/lang/String;",
	// 187            ")V"
	// 188        }
	// 189    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 192        value = {
	// 193            Ljava/io/UnsupportedEncodingException;
	// 194        }
	// 195    .end annotation
	//    .local p1, "rootClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 200    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->reader = 0x0;
	this->root = rootClass;
	this->resourceName = resourceName;
	this->encoding = encoding;
	this->lineNo = -0x1;
	this->_reset();
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::impl::data::ResourceReader::ResourceReader(std::shared_ptr<java::lang::String> resourceName)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "resourceName"    # Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	android::icu::impl::data::ResourceReader::(android::icu::impl::ICUData(), cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("data/")))->append(resourceName)->toString());
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::impl::data::ResourceReader::ResourceReader(std::shared_ptr<java::lang::String> resourceName,std::shared_ptr<java::lang::String> encoding)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "resourceName"    # Ljava/lang/String;
	//    .param p2, "encoding"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 265        value = {
	// 266            Ljava/io/UnsupportedEncodingException;
	// 267        }
	// 268    .end annotation
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	android::icu::impl::data::ResourceReader::(android::icu::impl::ICUData(), cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("data/")))->append(resourceName)->toString(), encoding);
	return;

}
// .method private _reset()V
void android::icu::impl::data::ResourceReader::_reset()
{
	
	std::shared_ptr<java::io::InputStream> is;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::io::InputStreamReader> isr;
	std::shared_ptr<java::io::BufferedReader> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 301        value = {
	// 302            Ljava/io/UnsupportedEncodingException;
	// 303        }
	// 304    .end annotation
	try {
	//label_try_start_1:
	this->close();
	//label_try_end_4:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_4} :catch_9
label_goto_4:
	if ( this->lineNo )     
		goto label_cond_b;
	return;
	// 324    .line 241
label_catch_9:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	goto label_goto_4;
	// 331    .line 245
	// 332    .end local v0    # "e":Ljava/io/IOException;
label_cond_b:
	is = android::icu::impl::ICUData::getStream(this->root, this->resourceName);
	//    .local v1, "is":Ljava/io/InputStream;
	if ( is )     
		goto label_cond_31;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t open ")))->append(this->resourceName)->toString());
	// throw
	throw cVar0;
	// 373    .line 251
label_cond_31:
	if ( this->encoding )     
		goto label_cond_44;
	isr = std::make_shared<java::io::InputStreamReader>(is);
	//    .local v2, "isr":Ljava/io/InputStreamReader;
label_goto_3a:
	cVar2 = std::make_shared<java::io::BufferedReader>(isr);
	this->reader = cVar2;
	this->lineNo = 0x0;
	return;
	// 398    .line 252
	// 399    .end local v2    # "isr":Ljava/io/InputStreamReader;
label_cond_44:
	isr = std::make_shared<java::io::InputStreamReader>(is, this->encoding);
	//    .restart local v2    # "isr":Ljava/io/InputStreamReader;
	goto label_goto_3a;

}
// .method public close()V
void android::icu::impl::data::ResourceReader::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 416        value = {
	// 417            Ljava/io/IOException;
	// 418        }
	// 419    .end annotation
	if ( !(this->reader) )  
		goto label_cond_c;
	this->reader->close();
	this->reader = 0x0;
label_cond_c:
	return;

}
// .method public describePosition()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::data::ResourceReader::describePosition()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->resourceName)->append(0x3a)->append(this->lineNo)->toString();

}
// .method public getLineNumber()I
int android::icu::impl::data::ResourceReader::getLineNumber()
{
	
	return this->lineNo;

}
// .method public readLine()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::data::ResourceReader::readLine()
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> line;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 489        value = {
	// 490            Ljava/io/IOException;
	// 491        }
	// 492    .end annotation
	cVar0 = 0x0;
	if ( this->lineNo )     
		goto label_cond_2b;
	this->lineNo = ( this->lineNo + 0x1);
	line = this->reader->readLine();
	//    .local v0, "line":Ljava/lang/String;
	if ( !(line) )  
		goto label_cond_2a;
	if ( line->charAt(cVar0) == 0xffef )
		goto label_cond_25;
	if ( line->charAt(cVar0) != 0xfeff )
		goto label_cond_2a;
label_cond_25:
label_cond_2a:
	return line;
	// 549    .line 160
	// 550    .end local v0    # "line":Ljava/lang/String;
label_cond_2b:
	this->lineNo = ( this->lineNo + 0x1);
	return this->reader->readLine();

}
// .method public readLineSkippingComments()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::data::ResourceReader::readLineSkippingComments()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 571        value = {
	// 572            Ljava/io/IOException;
	// 573        }
	// 574    .end annotation
	return this->readLineSkippingComments(0x0);

}
// .method public readLineSkippingComments(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::data::ResourceReader::readLineSkippingComments(bool trim)
{
	
	std::shared_ptr<java::lang::String> line;
	int pos;
	
	//    .param p1, "trim"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 591        value = {
	// 592            Ljava/io/IOException;
	// 593        }
	// 594    .end annotation
label_cond_0:
	line = this->readLine();
	//    .local v0, "line":Ljava/lang/String;
	if ( line )     
		goto label_cond_7;
	return line;
	// 610    .line 176
label_cond_7:
	pos = android::icu::impl::PatternProps::skipWhiteSpace(line, 0x0);
	//    .local v1, "pos":I
	if ( pos == line->length() )
		goto label_cond_0;
	if ( line->charAt(pos) == 0x23 )
		goto label_cond_0;
	if ( !(trim) )  
		goto label_cond_20;
label_cond_20:
	return line;

}
// .method public reset()V
void android::icu::impl::data::ResourceReader::reset()
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	this->_reset();
	//label_try_end_3:
	}
	catch (java::io::UnsupportedEncodingException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4;
	}
	//    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_3} :catch_4
label_goto_3:
	return;
	// 660    .line 225
label_catch_4:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/UnsupportedEncodingException;
	goto label_goto_3;

}


