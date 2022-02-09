// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\StringPrepParseException.smali
#include "java2ctype.h"
#include "android.icu.text.StringPrepParseException.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParseException.h"

static android::icu::text::StringPrepParseException::_assertionsDisabled;
static android::icu::text::StringPrepParseException::ACE_PREFIX_ERROR = 0x6;
static android::icu::text::StringPrepParseException::BUFFER_OVERFLOW_ERROR = 0x9;
static android::icu::text::StringPrepParseException::CHECK_BIDI_ERROR = 0x4;
static android::icu::text::StringPrepParseException::DOMAIN_NAME_TOO_LONG_ERROR = 0xb;
static android::icu::text::StringPrepParseException::ILLEGAL_CHAR_FOUND = 0x1;
static android::icu::text::StringPrepParseException::INVALID_CHAR_FOUND = 0x0;
static android::icu::text::StringPrepParseException::LABEL_TOO_LONG_ERROR = 0x8;
static android::icu::text::StringPrepParseException::PARSE_CONTEXT_LEN = 0x10;
static android::icu::text::StringPrepParseException::PROHIBITED_ERROR = 0x2;
static android::icu::text::StringPrepParseException::STD3_ASCII_RULES_ERROR = 0x5;
static android::icu::text::StringPrepParseException::UNASSIGNED_ERROR = 0x3;
static android::icu::text::StringPrepParseException::VERIFICATION_ERROR = 0x7;
static android::icu::text::StringPrepParseException::ZERO_LENGTH_LABEL = 0xa;
static android::icu::text::StringPrepParseException::serialVersionUID = 0x635e5eec90e16737L;
// .method static constructor <clinit>()V
void android::icu::text::StringPrepParseException::static_cinit()
{
	
	android::icu::text::StringPrepParseException::_assertionsDisabled = ( android::icu::text::StringPrepParseException()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(Ljava/lang/String;I)V
android::icu::text::StringPrepParseException::StringPrepParseException(std::shared_ptr<java::lang::String> message,int error)
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	std::shared_ptr<java::lang::StringBuffer> cVar1;
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "error"    # I
	java::text::ParseException::(message, -0x1);
	cVar0 = std::make_shared<java::lang::StringBuffer>();
	this->preContext = cVar0;
	cVar1 = std::make_shared<java::lang::StringBuffer>();
	this->postContext = cVar1;
	this->error = error;
	this->line = 0x0;
	return;

}
// .method public constructor <init>(Ljava/lang/String;ILjava/lang/String;I)V
android::icu::text::StringPrepParseException::StringPrepParseException(std::shared_ptr<java::lang::String> message,int error,std::shared_ptr<java::lang::String> rules,int pos)
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	std::shared_ptr<java::lang::StringBuffer> cVar1;
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "error"    # I
	//    .param p3, "rules"    # Ljava/lang/String;
	//    .param p4, "pos"    # I
	java::text::ParseException::(message, -0x1);
	cVar0 = std::make_shared<java::lang::StringBuffer>();
	this->preContext = cVar0;
	cVar1 = std::make_shared<java::lang::StringBuffer>();
	this->postContext = cVar1;
	this->error = error;
	this->setContext(rules, pos);
	this->line = 0x0;
	return;

}
// .method public constructor <init>(Ljava/lang/String;ILjava/lang/String;II)V
android::icu::text::StringPrepParseException::StringPrepParseException(std::shared_ptr<java::lang::String> message,int error,std::shared_ptr<java::lang::String> rules,int pos,int lineNumber)
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	std::shared_ptr<java::lang::StringBuffer> cVar1;
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "error"    # I
	//    .param p3, "rules"    # Ljava/lang/String;
	//    .param p4, "pos"    # I
	//    .param p5, "lineNumber"    # I
	java::text::ParseException::(message, -0x1);
	cVar0 = std::make_shared<java::lang::StringBuffer>();
	this->preContext = cVar0;
	cVar1 = std::make_shared<java::lang::StringBuffer>();
	this->postContext = cVar1;
	this->error = error;
	this->setContext(rules, pos);
	this->line = lineNumber;
	return;

}
// .method private setContext(Ljava/lang/String;I)V
void android::icu::text::StringPrepParseException::setContext(std::shared_ptr<java::lang::String> str,int pos)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "pos"    # I
	this->setPreContext(str, pos);
	this->setPostContext(str, pos);
	return;

}
// .method private setPostContext(Ljava/lang/String;I)V
void android::icu::text::StringPrepParseException::setPostContext(std::shared_ptr<java::lang::String> str,int pos)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "pos"    # I
	this->setPostContext(str->toCharArray(), pos);
	return;

}
// .method private setPostContext([CI)V
void android::icu::text::StringPrepParseException::setPostContext(std::shared_ptr<char[]> str,int pos)
{
	
	//    .param p1, "str"    # [C
	//    .param p2, "pos"    # I
	pos;
	//    .local v1, "start":I
	//    .local v0, "len":I
	this->postContext->append(str, pos, (str->size() - pos));
	return;

}
// .method private setPreContext(Ljava/lang/String;I)V
void android::icu::text::StringPrepParseException::setPreContext(std::shared_ptr<java::lang::String> str,int pos)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "pos"    # I
	this->setPreContext(str->toCharArray(), pos);
	return;

}
// .method private setPreContext([CI)V
void android::icu::text::StringPrepParseException::setPreContext(std::shared_ptr<char[]> str,int pos)
{
	
	int cVar0;
	int start;
	
	//    .param p1, "str"    # [C
	//    .param p2, "pos"    # I
	cVar0 = 0x10;
	if ( pos >  cVar0 )
		goto label_cond_e;
	start = 0x0;
	//    .local v1, "start":I
label_goto_5:
	if ( start >  cVar0 )
		goto label_cond_11;
	//    .local v0, "len":I
label_goto_8:
	this->preContext->append(str, start, len);
	return;
	// 292    .line 191
	// 293    .end local v0    # "len":I
	// 294    .end local v1    # "start":I
label_cond_e:
	start = ( pos + -0xf);
	//    .restart local v1    # "start":I
	goto label_goto_5;
	// 301    .line 192
label_cond_11:
	//    .restart local v0    # "len":I
	goto label_goto_8;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::StringPrepParseException::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar1;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( other->instanceOf("android::icu::text::StringPrepParseException") )     
		goto label_cond_6;
	return cVar1;
	// 326    .line 123
label_cond_6:
	other->checkCast("android::icu::text::StringPrepParseException");
	//    .end local p1    # "other":Ljava/lang/Object;
	if ( other->error != this->error )
		goto label_cond_f;
	cVar1 = 0x1;
label_cond_f:
	return cVar1;

}
// .method public getError()I
int android::icu::text::StringPrepParseException::getError()
{
	
	return this->error;

}
// .method public hashCode()I
int android::icu::text::StringPrepParseException::hashCode()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 356    .end annotation
	if ( android::icu::text::StringPrepParseException::_assertionsDisabled )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hashCode not designed")));
	// throw
	throw cVar0;
	// 372    .line 138
label_cond_d:
	return 0x2a;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::StringPrepParseException::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	buf->append(this->getMessage());
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(". line:  ")));
	buf->append(this->line);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(". preContext:  ")));
	buf->append(this->preContext);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(". postContext: ")));
	buf->append(this->postContext);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	return buf->toString();

}


