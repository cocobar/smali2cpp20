// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$FormatParser.smali
#include "java2ctype.h"
#include "android.icu.impl.PatternTokenizer.h"
#include "android.icu.text.DateTimePatternGenerator_S_FormatParser.h"
#include "android.icu.text.DateTimePatternGenerator_S_VariableField.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"

static android::icu::text::DateTimePatternGenerator_S_FormatParser::QUOTING_CHARS;
static android::icu::text::DateTimePatternGenerator_S_FormatParser::SYNTAX_CHARS;
// .method static synthetic -get0(Landroid/icu/text/DateTimePatternGenerator$FormatParser;)Ljava/util/List;
std::shared_ptr<java::util::List> android::icu::text::DateTimePatternGenerator_S_FormatParser::_get0(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_FormatParser> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/DateTimePatternGenerator$FormatParser;
	return _this->items;

}
// .method static constructor <clinit>()V
void android::icu::text::DateTimePatternGenerator_S_FormatParser::static_cinit()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar1;
	
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[a-zA-Z]")));
	android::icu::text::DateTimePatternGenerator_S_FormatParser::SYNTAX_CHARS = cVar0->freeze();
	cVar1 = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[[[:script=Latn:][:script=Cyrl:]]&[[:L:][:M:]]]")));
	android::icu::text::DateTimePatternGenerator_S_FormatParser::QUOTING_CHARS = cVar1->freeze();
	return;

}
// .method public constructor <init>()V
android::icu::text::DateTimePatternGenerator_S_FormatParser::DateTimePatternGenerator_S_FormatParser()
{
	
	std::shared_ptr<android::icu::impl::PatternTokenizer> cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 089    .end annotation
	// 093    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::impl::PatternTokenizer>();
	this->tokenizer = cVar0->setSyntaxCharacters(android::icu::text::DateTimePatternGenerator_S_FormatParser::SYNTAX_CHARS)->setExtraQuotingCharacters(android::icu::text::DateTimePatternGenerator_S_FormatParser::QUOTING_CHARS)->setUsingQuote(0x1);
	cVar1 = std::make_shared<java::util::ArrayList>();
	this->items = cVar1;
	return;

}
// .method private addVariable(Ljava/lang/StringBuffer;Z)V
void android::icu::text::DateTimePatternGenerator_S_FormatParser::addVariable(std::shared_ptr<java::lang::StringBuffer> variable,bool strict)
{
	
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_VariableField> cVar0;
	
	//    .param p1, "variable"    # Ljava/lang/StringBuffer;
	//    .param p2, "strict"    # Z
	if ( !(variable->length()) )  
		goto label_cond_18;
	cVar0 = std::make_shared<android::icu::text::DateTimePatternGenerator_S_VariableField>(variable->toString(), strict);
	this->items->add(cVar0);
	variable->setLength(0x0);
label_cond_18:
	return;

}
// .method public getItems()Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::Object>> android::icu::text::DateTimePatternGenerator_S_FormatParser::getItems()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 178        value = {
	// 179            "()",
	// 180            "Ljava/util/List",
	// 181            "<",
	// 182            "Ljava/lang/Object;",
	// 183            ">;"
	// 184        }
	// 185    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 188    .end annotation
	return this->items;

}
// .method public hasDateAndTimeFields()Z
bool android::icu::text::DateTimePatternGenerator_S_FormatParser::hasDateAndTimeFields()
{
	
	int foundMask;
	std::shared_ptr<java::util::Iterator> item_S_iterator;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_VariableField> item;
	bool isTime;
	int isTime;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 200    .end annotation
	foundMask = 0x0;
	//    .local v0, "foundMask":I
	item_S_iterator = this->items->iterator();
	//    .local v4, "item$iterator":Ljava/util/Iterator;
label_cond_8:
label_goto_8:
	if ( !(item_S_iterator->hasNext()) )  
		goto label_cond_20;
	item = item_S_iterator->next();
	//    .local v3, "item":Ljava/lang/Object;
	if ( !(item->instanceOf("android::icu::text::DateTimePatternGenerator_S_VariableField")) )  
		goto label_cond_8;
	item->checkCast("android::icu::text::DateTimePatternGenerator_S_VariableField");
	//    .end local v3    # "item":Ljava/lang/Object;
	//    .local v5, "type":I
	foundMask = (foundMask |  (0x1 << item->getType()));
	goto label_goto_8;
	// 253    .line 1540
	// 254    .end local v5    # "type":I
label_cond_20:
	if ( !(( foundMask & 0x3ff)) )  
		goto label_cond_2f;
	//    .local v1, "isDate":Z
label_goto_25:
	if ( !((0xfc00 &  foundMask)) )  
		goto label_cond_31;
	isTime = 0x1;
	//    .local v2, "isTime":Z
label_goto_2c:
	if ( !(isDate) )  
		goto label_cond_33;
	//    .end local v2    # "isTime":Z
label_goto_2e:
	return isTime;
	// 282    .line 1540
	// 283    .end local v1    # "isDate":Z
label_cond_2f:
	//    .restart local v1    # "isDate":Z
	goto label_goto_25;
	// 290    .line 1541
label_cond_31:
	isTime = 0x0;
	//    .restart local v2    # "isTime":Z
	goto label_goto_2c;
label_cond_33:
	isTime = 0x0;
	goto label_goto_2e;

}
// .method public quoteLiteral(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::DateTimePatternGenerator_S_FormatParser::quoteLiteral(std::shared_ptr<java::lang::String> string)
{
	
	//    .param p1, "string"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 308    .end annotation
	return this->tokenizer->quoteLiteral(string);

}
// .method public final set(Ljava/lang/String;)Landroid/icu/text/DateTimePatternGenerator$FormatParser;
std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_FormatParser> android::icu::text::DateTimePatternGenerator_S_FormatParser::set(std::shared_ptr<java::lang::String> string)
{
	
	//    .param p1, "string"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 325    .end annotation
	return this->set(string, 0x0);

}
// .method public set(Ljava/lang/String;Z)Landroid/icu/text/DateTimePatternGenerator$FormatParser;
std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_FormatParser> android::icu::text::DateTimePatternGenerator_S_FormatParser::set(std::shared_ptr<java::lang::String> string,bool strict)
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuffer> buffer;
	std::shared_ptr<java::lang::StringBuffer> variable;
	int status;
	
	//    .param p1, "string"    # Ljava/lang/String;
	//    .param p2, "strict"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 343    .end annotation
	cVar0 = 0x0;
	this->items->clear();
	if ( string->length() )     
		goto label_cond_d;
	return this;
	// 362    .line 1406
label_cond_d:
	this->tokenizer->setPattern(string);
	buffer = std::make_shared<java::lang::StringBuffer>();
	//    .local v0, "buffer":Ljava/lang/StringBuffer;
	variable = std::make_shared<java::lang::StringBuffer>();
	//    .local v2, "variable":Ljava/lang/StringBuffer;
label_goto_1c:
	buffer->setLength(cVar0);
	status = this->tokenizer->next(buffer);
	//    .local v1, "status":I
	if ( status )     
		goto label_cond_2b;
	this->addVariable(variable, cVar0);
	return this;
	// 401    .line 1413
label_cond_2b:
	if ( status != 0x1 )
		goto label_cond_45;
	if ( !(variable->length()) )  
		goto label_cond_41;
	if ( buffer->charAt(cVar0) == variable->charAt(cVar0) )
		goto label_cond_41;
	this->addVariable(variable, cVar0);
label_cond_41:
	variable->append(buffer);
	goto label_goto_1c;
	// 433    .line 1419
label_cond_45:
	this->addVariable(variable, cVar0);
	this->items->add(buffer->toString());
	goto label_goto_1c;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator_S_FormatParser::toString()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 452    .end annotation
	return this->toString(0x0, this->items->size());

}
// .method public toString(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator_S_FormatParser::toString(int start,int limit)
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	int i;
	std::shared_ptr<java::lang::String> item;
	std::shared_ptr<java::lang::String> itemString;
	
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 476    .end annotation
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "result":Ljava/lang/StringBuilder;
	i = start;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= limit )
		goto label_cond_2f;
	item = this->items->get(i);
	//    .local v1, "item":Ljava/lang/Object;
	if ( !(item->instanceOf("java::lang::String")) )  
		goto label_cond_21;
	itemString = item;
	itemString->checkCast("java::lang::String");
	//    .local v2, "itemString":Ljava/lang/String;
	result->append(this->tokenizer->quoteLiteral(itemString));
	//    .end local v2    # "itemString":Ljava/lang/String;
label_goto_1e:
	i = ( i + 0x1);
	goto label_goto_6;
	// 527    .line 1518
label_cond_21:
	result->append(this->items->get(i)->toString());
	goto label_goto_1e;
	// 543    .line 1521
	// 544    .end local v1    # "item":Ljava/lang/Object;
label_cond_2f:
	return result->toString();

}


