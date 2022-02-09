// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SelectFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.text.MessagePattern_S_Part_S_Type.h"
#include "android.icu.text.MessagePattern_S_Part.h"
#include "android.icu.text.MessagePattern.h"
#include "android.icu.text.SelectFormat.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"

static android::icu::text::SelectFormat::_assertionsDisabled;
static android::icu::text::SelectFormat::serialVersionUID = 0x2989d201f7bc66f8L;
// .method static constructor <clinit>()V
void android::icu::text::SelectFormat::static_cinit()
{
	
	android::icu::text::SelectFormat::_assertionsDisabled = ( android::icu::text::SelectFormat()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::SelectFormat::SelectFormat(std::shared_ptr<java::lang::String> pattern)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	// 043    invoke-direct {p0}, Ljava/text/Format;-><init>()V
	this->pattern = 0x0;
	this->applyPattern(pattern);
	return;

}
// .method static findSubMessage(Landroid/icu/text/MessagePattern;ILjava/lang/String;)I
int android::icu::text::SelectFormat::findSubMessage(std::shared_ptr<android::icu::text::MessagePattern> pattern,int partIndex,std::shared_ptr<java::lang::String> keyword)
{
	
	int msgStart;
	int partIndex;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	auto type;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p0, "pattern"    # Landroid/icu/text/MessagePattern;
	//    .param p1, "partIndex"    # I
	//    .param p2, "keyword"    # Ljava/lang/String;
	//    .local v0, "count":I
	msgStart = 0x0;
	//    .local v1, "msgStart":I
label_goto_5:
	partIndex = ( partIndex + 0x1);
	//    .end local p1    # "partIndex":I
	//    .local v3, "partIndex":I
	part = pattern->getPart(partIndex);
	//    .local v2, "part":Landroid/icu/text/MessagePattern$Part;
	type = part->getType();
	//    .local v4, "type":Landroid/icu/text/MessagePattern$Part$Type;
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::ARG_LIMIT )
		goto label_cond_15;
	partIndex;
	//    .end local v3    # "partIndex":I
	//    .restart local p1    # "partIndex":I
label_cond_14:
	return msgStart;
	// 104    .line 229
	// 105    .end local p1    # "partIndex":I
	// 106    .restart local v3    # "partIndex":I
label_cond_15:
	if ( android::icu::text::SelectFormat::_assertionsDisabled )     
		goto label_cond_23;
	if ( type == android::icu::text::MessagePattern_S_Part_S_Type::ARG_SELECTOR )
		goto label_cond_23;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 122    .line 231
label_cond_23:
	if ( !(pattern->partSubstringMatches(part, keyword)) )  
		goto label_cond_2a;
	return partIndex;
	// 133    .line 234
label_cond_2a:
	if ( msgStart )     
		goto label_cond_36;
	if ( !(pattern->partSubstringMatches(part, std::make_shared<java::lang::String>(std::make_shared<char[]>("other")))) )  
		goto label_cond_36;
	msgStart = partIndex;
label_cond_36:
	//    .end local v3    # "partIndex":I
	//    .restart local p1    # "partIndex":I
	partIndex = ( pattern->getLimitPartIndex(partIndex) + 0x1);
	if ( partIndex >= pattern->countParts() )
		goto label_cond_14;
	goto label_goto_5;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::text::SelectFormat::readObject(std::shared_ptr<java::io::ObjectInputStream> in)
{
	
	//    .param p1, "in"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 168        value = {
	// 169            Ljava/io/IOException;,
	// 170            Ljava/lang/ClassNotFoundException;
	// 171        }
	// 172    .end annotation
	in->defaultReadObject();
	if ( !(this->pattern) )  
		goto label_cond_c;
	this->applyPattern(this->pattern);
label_cond_c:
	return;

}
// .method private reset()V
void android::icu::text::SelectFormat::reset()
{
	
	this->pattern = 0x0;
	if ( !(this->msgPattern) )  
		goto label_cond_c;
	this->msgPattern->clear();
label_cond_c:
	return;

}
// .method public applyPattern(Ljava/lang/String;)V
void android::icu::text::SelectFormat::applyPattern(std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<android::icu::text::MessagePattern> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	this->pattern = pattern;
	if ( this->msgPattern )     
		goto label_cond_d;
	cVar0 = std::make_shared<android::icu::text::MessagePattern>();
	this->msgPattern = cVar0;
label_cond_d:
	try {
	//label_try_start_d:
	this->msgPattern->parseSelectStyle(pattern);
	//label_try_end_12:
	}
	catch (java::lang::RuntimeException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_13;
	}
	//    .catch Ljava/lang/RuntimeException; {:try_start_d .. :try_end_12} :catch_13
	return;
	// 251    .line 197
label_catch_13:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/RuntimeException;
	this->reset();
	// throw
	throw;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::SelectFormat::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::SelectFormat> sf;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return cVar0;
	// 278    .line 342
label_cond_5:
	if ( !(obj) )  
		goto label_cond_11;
	if ( this->getClass() == obj->getClass() )
		goto label_cond_12;
label_cond_11:
	return cVar1;
label_cond_12:
	sf = obj;
	sf->checkCast("android::icu::text::SelectFormat");
	//    .local v0, "sf":Landroid/icu/text/SelectFormat;
	if ( this->msgPattern )     
		goto label_cond_20;
	if ( sf->msgPattern )     
		goto label_cond_1e;
label_goto_1d:
	return cVar0;
label_cond_1e:
	cVar0 = cVar1;
	goto label_goto_1d;
label_cond_20:
	cVar0 = this->msgPattern->equals(sf->msgPattern);
	goto label_goto_1d;

}
// .method public final format(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SelectFormat::format(std::shared_ptr<java::lang::String> keyword)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	int msgStart;
	std::shared_ptr<java::lang::StringBuilder> result;
	int prevIndex;
	int i;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	auto type;
	int index;
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	if ( android::icu::impl::PatternProps::isIdentifier(keyword) )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid formatting argument.")));
	// throw
	throw cVar0;
	// 355    .line 255
label_cond_10:
	if ( !(this->msgPattern) )  
		goto label_cond_1c;
	if ( this->msgPattern->countParts() )     
		goto label_cond_25;
label_cond_1c:
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid format error.")));
	// throw
	throw cVar1;
	// 379    .line 260
label_cond_25:
	msgStart = android::icu::text::SelectFormat::findSubMessage(this->msgPattern, 0x0, keyword);
	//    .local v3, "msgStart":I
	if ( this->msgPattern->jdkAposMode() )     
		goto label_cond_54;
	//    .local v2, "msgLimit":I
	return this->msgPattern->getPatternString()->substring(this->msgPattern->getPart(msgStart)->getLimit(), this->msgPattern->getPatternIndex(this->msgPattern->getLimitPartIndex(msgStart)));
	// 436    .line 267
	// 437    .end local v2    # "msgLimit":I
label_cond_54:
	result = 0x0;
	//    .local v6, "result":Ljava/lang/StringBuilder;
	prevIndex = this->msgPattern->getPart(msgStart)->getLimit();
	//    .local v5, "prevIndex":I
	//    .end local v6    # "result":Ljava/lang/StringBuilder;
	//    .local v0, "i":I
label_cond_60:
label_goto_60:
	i = ( i + 0x1);
	part = this->msgPattern->getPart(i);
	//    .local v4, "part":Landroid/icu/text/MessagePattern$Part;
	type = part->getType();
	//    .local v7, "type":Landroid/icu/text/MessagePattern$Part$Type;
	index = part->getIndex();
	//    .local v1, "index":I
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::MSG_LIMIT )
		goto label_cond_88;
	if ( result )     
		goto label_cond_7d;
	return this->pattern->substring(prevIndex, index);
	// 500    .line 277
label_cond_7d:
	return result->append(this->pattern, prevIndex, index)->toString();
	// 514    .line 279
label_cond_88:
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::SKIP_SYNTAX )
		goto label_cond_9d;
	if ( result )     
		goto label_cond_93;
	result = std::make_shared<java::lang::StringBuilder>();
label_cond_93:
	result->append(this->pattern, prevIndex, index);
	prevIndex = part->getLimit();
	goto label_goto_60;
	// 541    .line 285
label_cond_9d:
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::ARG_START )
		goto label_cond_60;
	if ( result )     
		goto label_cond_a8;
	result = std::make_shared<java::lang::StringBuilder>();
label_cond_a8:
	result->append(this->pattern, prevIndex, index);
	prevIndex = index;
	i = this->msgPattern->getLimitPartIndex(i);
	index = this->msgPattern->getPart(i)->getLimit();
	android::icu::text::MessagePattern::appendReducedApostrophes(this->pattern, prevIndex, index, result);
	prevIndex = index;
	goto label_goto_60;

}
// .method public format(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::SelectFormat::format(std::shared_ptr<java::lang::Object> keyword,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "keyword"    # Ljava/lang/Object;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	if ( !(keyword->instanceOf("java::lang::String")) )  
		goto label_cond_e;
	keyword->checkCast("java::lang::String");
	//    .end local p1    # "keyword":Ljava/lang/Object;
	toAppendTo->append(this->format(keyword));
	return toAppendTo;
	// 618    .line 316
	// 619    .restart local p1    # "keyword":Ljava/lang/Object;
label_cond_e:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->append(keyword)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' is not a String")))->toString());
	// throw
	throw cVar0;

}
// .method public hashCode()I
int android::icu::text::SelectFormat::hashCode()
{
	
	if ( !(this->pattern) )  
		goto label_cond_b;
	return this->pattern->hashCode();
	// 670    .line 357
label_cond_b:
	return 0x0;

}
// .method public parseObject(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::SelectFormat::parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}
// .method public toPattern()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SelectFormat::toPattern()
{
	
	return this->pattern;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SelectFormat::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("pattern=\'")))->append(this->pattern)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString();

}


