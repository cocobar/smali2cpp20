// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetMatch.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecognizer.h"
#include "java.io.ByteArrayInputStream.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.InputStreamReader.h"
#include "java.io.Reader.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method constructor <init>(Landroid/icu/text/CharsetDetector;Landroid/icu/text/CharsetRecognizer;I)V
android::icu::text::CharsetMatch::CharsetMatch(std::shared_ptr<android::icu::text::CharsetDetector> det,std::shared_ptr<android::icu::text::CharsetRecognizer> rec,int conf)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	//    .param p2, "rec"    # Landroid/icu/text/CharsetRecognizer;
	//    .param p3, "conf"    # I
	cVar0 = 0x0;
	// 046    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fRawInput = cVar0;
	this->fInputStream = cVar0;
	this->fConfidence = conf;
	if ( det->fInputStream )     
		goto label_cond_16;
	this->fRawInput = det->fRawInput;
	this->fRawLength = det->fRawLength;
label_cond_16:
	this->fInputStream = det->fInputStream;
	this->fCharsetName = rec->getName();
	this->fLang = rec->getLanguage();
	return;

}
// .method constructor <init>(Landroid/icu/text/CharsetDetector;Landroid/icu/text/CharsetRecognizer;ILjava/lang/String;Ljava/lang/String;)V
android::icu::text::CharsetMatch::CharsetMatch(std::shared_ptr<android::icu::text::CharsetDetector> det,std::shared_ptr<android::icu::text::CharsetRecognizer> rec,int conf,std::shared_ptr<java::lang::String> csName,std::shared_ptr<java::lang::String> lang)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	//    .param p2, "rec"    # Landroid/icu/text/CharsetRecognizer;
	//    .param p3, "conf"    # I
	//    .param p4, "csName"    # Ljava/lang/String;
	//    .param p5, "lang"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 108    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fRawInput = cVar0;
	this->fInputStream = cVar0;
	this->fConfidence = conf;
	if ( det->fInputStream )     
		goto label_cond_16;
	this->fRawInput = det->fRawInput;
	this->fRawLength = det->fRawLength;
label_cond_16:
	this->fInputStream = det->fInputStream;
	this->fCharsetName = csName;
	this->fLang = lang;
	return;

}
// .method public compareTo(Landroid/icu/text/CharsetMatch;)I
int android::icu::text::CharsetMatch::compareTo(std::shared_ptr<android::icu::text::CharsetMatch> other)
{
	
	int compareResult;
	
	//    .param p1, "other"    # Landroid/icu/text/CharsetMatch;
	compareResult = 0x0;
	//    .local v0, "compareResult":I
	if ( this->fConfidence <= other->fConfidence )
		goto label_cond_9;
	compareResult = 0x1;
label_cond_8:
label_goto_8:
	return compareResult;
	// 176    .line 173
label_cond_9:
	if ( this->fConfidence >= other->fConfidence )
		goto label_cond_8;
	compareResult = -0x1;
	goto label_goto_8;

}
// .method public getConfidence()I
int android::icu::text::CharsetMatch::getConfidence()
{
	
	return this->fConfidence;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetMatch::getLanguage()
{
	
	return this->fLang;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetMatch::getName()
{
	
	return this->fCharsetName;

}
// .method public getReader()Ljava/io/Reader;
std::shared_ptr<java::io::Reader> android::icu::text::CharsetMatch::getReader()
{
	
	std::shared_ptr<java::io::InputStream> inputStream;
	std::shared_ptr<java::io::ByteArrayInputStream> inputStream;
	std::shared_ptr<java::io::InputStreamReader> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	inputStream = this->fInputStream;
	//    .local v1, "inputStream":Ljava/io/InputStream;
	if ( inputStream )     
		goto label_cond_f;
	//    .end local v1    # "inputStream":Ljava/io/InputStream;
	inputStream = std::make_shared<java::io::ByteArrayInputStream>(this->fRawInput, 0x0, this->fRawLength);
	//    .restart local v1    # "inputStream":Ljava/io/InputStream;
label_cond_f:
	try {
	//label_try_start_f:
	inputStream->reset();
	cVar0 = std::make_shared<java::io::InputStreamReader>(inputStream, this->getName());
	//label_try_end_1b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1c;
	}
	//    .catch Ljava/io/IOException; {:try_start_f .. :try_end_1b} :catch_1c
	return cVar0;
	// 278    .line 56
label_catch_1c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	return 0x0;

}
// .method public getString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetMatch::getString()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 290        value = {
	// 291            Ljava/io/IOException;
	// 292        }
	// 293    .end annotation
	return this->getString(-0x1);

}
// .method public getString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetMatch::getString(int maxLength)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared<std::vector<char[]>> buffer;
	std::shared_ptr<java::io::Reader> reader;
	int max;
	int bytesRead;
	std::shared_ptr<java::lang::String> name;
	int startSuffix;
	std::shared_ptr<java::lang::String> result;
	
	//    .param p1, "maxLength"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 310        value = {
	// 311            Ljava/io/IOException;
	// 312        }
	// 313    .end annotation
	cVar0 = 0x400;
	cVar1 = 0x0;
	0x0;
	//    .local v5, "result":Ljava/lang/String;
	if ( !(this->fInputStream) )  
		goto label_cond_32;
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v6, "sb":Ljava/lang/StringBuilder;
	buffer = std::make_shared<std::vector<char[]>>(cVar0);
	//    .local v0, "buffer":[C
	reader = this->getReader();
	//    .local v4, "reader":Ljava/io/Reader;
	if ( maxLength >= 0 )
		goto label_cond_28;
	max = 0x7fffffff;
	//    .local v2, "max":I
label_goto_18:
	0x0;
	//    .local v1, "bytesRead":I
label_goto_19:
	bytesRead = reader->read(buffer, cVar1, java::lang::Math::min(max, cVar0));
	if ( bytesRead < 0 ) 
		goto label_cond_2a;
	sb->append(buffer, cVar1, bytesRead);
	max = (max -  bytesRead);
	goto label_goto_19;
	// 376    .line 90
	// 377    .end local v1    # "bytesRead":I
	// 378    .end local v2    # "max":I
label_cond_28:
	max = maxLength;
	//    .restart local v2    # "max":I
	goto label_goto_18;
	// 385    .line 98
	// 386    .restart local v1    # "bytesRead":I
label_cond_2a:
	reader->close();
	return sb->toString();
	// 397    .line 102
	// 398    .end local v0    # "buffer":[C
	// 399    .end local v1    # "bytesRead":I
	// 400    .end local v2    # "max":I
	// 401    .end local v4    # "reader":Ljava/io/Reader;
	// 402    .end local v6    # "sb":Ljava/lang/StringBuilder;
label_cond_32:
	name = this->getName();
	//    .local v3, "name":Ljava/lang/String;
	if ( name->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("_rtl"))) >= 0 )
		goto label_cond_54;
	startSuffix = name->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("_ltr")));
	//    .local v7, "startSuffix":I
label_goto_46:
	if ( startSuffix <= 0 )
		goto label_cond_4c;
label_cond_4c:
	//    .end local v5    # "result":Ljava/lang/String;
	result = std::make_shared<java::lang::String>(this->fRawInput, name);
	//    .local v5, "result":Ljava/lang/String;
	return result;
	// 447    .line 108
	// 448    .end local v7    # "startSuffix":I
	// 449    .local v5, "result":Ljava/lang/String;
label_cond_54:
	//    .restart local v7    # "startSuffix":I
	goto label_goto_46;

}


