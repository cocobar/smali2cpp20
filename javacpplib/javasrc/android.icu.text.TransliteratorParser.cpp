// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorParser.smali
#include "java2ctype.h"
#include "android.icu.impl.IllegalIcuArgumentException.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.Normalizer_S_Mode.h"
#include "android.icu.text.Normalizer.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.StringMatcher.h"
#include "android.icu.text.TransliterationRule.h"
#include "android.icu.text.TransliterationRuleSet.h"
#include "android.icu.text.TransliteratorIDParser_S_SingleID.h"
#include "android.icu.text.TransliteratorIDParser.h"
#include "android.icu.text.TransliteratorParser_S_ParseData.h"
#include "android.icu.text.TransliteratorParser_S_RuleArray.h"
#include "android.icu.text.TransliteratorParser_S_RuleBody.h"
#include "android.icu.text.TransliteratorParser_S_RuleHalf.h"
#include "android.icu.text.TransliteratorParser.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.text.ParsePosition.h"
#include "java.util.ArrayList.h"
#include "java.util.HashMap.h"
#include "java.util.List.h"
#include "java.util.Map.h"

static android::icu::text::TransliteratorParser::ALT_FORWARD_RULE_OP = '\u2192';
static android::icu::text::TransliteratorParser::ALT_FUNCTION = '\u2206';
static android::icu::text::TransliteratorParser::ALT_FWDREV_RULE_OP = '\u2194';
static android::icu::text::TransliteratorParser::ALT_REVERSE_RULE_OP = '\u2190';
static android::icu::text::TransliteratorParser::ANCHOR_START = '^';
static android::icu::text::TransliteratorParser::CONTEXT_ANTE = '{';
static android::icu::text::TransliteratorParser::CONTEXT_POST = '}';
static android::icu::text::TransliteratorParser::CURSOR_OFFSET = '@';
static android::icu::text::TransliteratorParser::CURSOR_POS = '|';
static android::icu::text::TransliteratorParser::DOT = '.';
static android::icu::text::TransliteratorParser::DOT_SET = std::make_shared<java::lang::String>("[^[:Zp:][:Zl:]\\r\\n$]");
static android::icu::text::TransliteratorParser::END_OF_RULE = ';';
static android::icu::text::TransliteratorParser::ESCAPE = '\\';
static android::icu::text::TransliteratorParser::FORWARD_RULE_OP = '>';
static android::icu::text::TransliteratorParser::FUNCTION = '&';
static android::icu::text::TransliteratorParser::FWDREV_RULE_OP = '~';
static android::icu::text::TransliteratorParser::HALF_ENDERS = std::make_shared<java::lang::String>("=><\u2190\u2192\u2194;");
static android::icu::text::TransliteratorParser::ID_TOKEN = std::make_shared<java::lang::String>("::");
static android::icu::text::TransliteratorParser::ID_TOKEN_LEN = 0x2;
static android::icu::text::TransliteratorParser::ILLEGAL_FUNC = nullptr;
static android::icu::text::TransliteratorParser::ILLEGAL_SEG = nullptr;
static android::icu::text::TransliteratorParser::ILLEGAL_TOP = nullptr;
static android::icu::text::TransliteratorParser::KLEENE_STAR = '*';
static android::icu::text::TransliteratorParser::ONE_OR_MORE = '+';
static android::icu::text::TransliteratorParser::OPERATORS = std::make_shared<java::lang::String>("=><\u2190\u2192\u2194");
static android::icu::text::TransliteratorParser::QUOTE = '\'';
static android::icu::text::TransliteratorParser::REVERSE_RULE_OP = '<';
static android::icu::text::TransliteratorParser::RULE_COMMENT_CHAR = '#';
static android::icu::text::TransliteratorParser::SEGMENT_CLOSE = ')';
static android::icu::text::TransliteratorParser::SEGMENT_OPEN = '(';
static android::icu::text::TransliteratorParser::VARIABLE_DEF_OP = '=';
static android::icu::text::TransliteratorParser::ZERO_OR_ONE = '?';
// .method static synthetic -get0()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::TransliteratorParser::_get0()
{
	
	return android::icu::text::TransliteratorParser::ILLEGAL_FUNC;

}
// .method static synthetic -get1()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::TransliteratorParser::_get1()
{
	
	return android::icu::text::TransliteratorParser::ILLEGAL_SEG;

}
// .method static synthetic -get2()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::TransliteratorParser::_get2()
{
	
	return android::icu::text::TransliteratorParser::ILLEGAL_TOP;

}
// .method static synthetic -get3(Landroid/icu/text/TransliteratorParser;)Landroid/icu/text/RuleBasedTransliterator$Data;
std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> android::icu::text::TransliteratorParser::_get3(std::shared_ptr<android::icu::text::TransliteratorParser> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/TransliteratorParser;
	return _this->curData;

}
// .method static synthetic -get4(Landroid/icu/text/TransliteratorParser;)Landroid/icu/text/TransliteratorParser$ParseData;
std::shared_ptr<android::icu::text::TransliteratorParser_S_ParseData> android::icu::text::TransliteratorParser::_get4(std::shared_ptr<android::icu::text::TransliteratorParser> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/TransliteratorParser;
	return _this->parseData;

}
// .method static synthetic -get5(Landroid/icu/text/TransliteratorParser;)Ljava/util/Map;
std::shared_ptr<java::util::Map> android::icu::text::TransliteratorParser::_get5(std::shared_ptr<android::icu::text::TransliteratorParser> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/TransliteratorParser;
	return _this->variableNames;

}
// .method static synthetic -get6(Landroid/icu/text/TransliteratorParser;)Ljava/util/List;
std::shared_ptr<java::util::List> android::icu::text::TransliteratorParser::_get6(std::shared_ptr<android::icu::text::TransliteratorParser> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/TransliteratorParser;
	return _this->variablesVector;

}
// .method static synthetic -wrap0(Landroid/icu/text/TransliteratorParser;Ljava/lang/String;Ljava/text/ParsePosition;)C
char android::icu::text::TransliteratorParser::_wrap0(std::shared_ptr<android::icu::text::TransliteratorParser> _this,std::shared_ptr<java::lang::String> rule,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/TransliteratorParser;
	//    .param p1, "rule"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	return _this->parseSet(rule, pos);

}
// .method static synthetic -wrap1(Landroid/icu/text/TransliteratorParser;Ljava/lang/String;Ljava/lang/StringBuffer;)V
void android::icu::text::TransliteratorParser::_wrap1(std::shared_ptr<android::icu::text::TransliteratorParser> _this,std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::StringBuffer> buf)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/TransliteratorParser;
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "buf"    # Ljava/lang/StringBuffer;
	_this->appendVariableDef(name, buf);
	return;

}
// .method static synthetic -wrap2(Landroid/icu/text/TransliteratorParser;ILjava/lang/String;I)V
void android::icu::text::TransliteratorParser::_wrap2(std::shared_ptr<android::icu::text::TransliteratorParser> _this,int ch,std::shared_ptr<java::lang::String> rule,int start)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/TransliteratorParser;
	//    .param p1, "ch"    # I
	//    .param p2, "rule"    # Ljava/lang/String;
	//    .param p3, "start"    # I
	_this->checkVariableRange(ch, rule, start);
	return;

}
// .method static constructor <clinit>()V
void android::icu::text::TransliteratorParser::static_cinit()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[\\)]")));
	android::icu::text::TransliteratorParser::ILLEGAL_TOP = cVar0;
	cVar1 = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[\\{\\}\\|\\@]")));
	android::icu::text::TransliteratorParser::ILLEGAL_SEG = cVar1;
	cVar2 = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[\\^\\(\\.\\*\\+\\?\\{\\}\\|\\@]")));
	android::icu::text::TransliteratorParser::ILLEGAL_FUNC = cVar2;
	return;

}
// .method public constructor <init>()V
android::icu::text::TransliteratorParser::TransliteratorParser()
{
	
	// 302    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->dotStandIn = -0x1;
	return;

}
// .method private appendVariableDef(Ljava/lang/String;Ljava/lang/StringBuffer;)V
void android::icu::text::TransliteratorParser::appendVariableDef(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::StringBuffer> buf)
{
	
	std::shared_ptr<char[]> ch;
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	char cVar1;
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "buf"    # Ljava/lang/StringBuffer;
	ch = this->variableNames->get(name);
	ch->checkCast("char[]");
	//    .local v0, "ch":[C
	if ( ch )     
		goto label_cond_44;
	if ( this->undefinedVariableName )     
		goto label_cond_2a;
	this->undefinedVariableName = name;
	if ( this->variableNext <  this->variableLimit )
		goto label_cond_1f;
	cVar0 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Private use variables exhausted")));
	// throw
	throw cVar0;
	// 356    .line 1554
label_cond_1f:
	cVar1 = (char)(( this->variableLimit + -0x1));
	this->variableLimit = cVar1;
	buf->append(cVar1);
label_goto_29:
	return;
	// 372    .line 1556
label_cond_2a:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Undefined variable $")))->append(name)->toString());
	// throw
	throw cVar2;
	// 398    .line 1560
label_cond_44:
	buf->append(ch);
	goto label_goto_29;

}
// .method private checkVariableRange(ILjava/lang/String;I)V
void android::icu::text::TransliteratorParser::checkVariableRange(int ch,std::shared_ptr<java::lang::String> rule,int start)
{
	
	//    .param p1, "ch"    # I
	//    .param p2, "rule"    # Ljava/lang/String;
	//    .param p3, "start"    # I
	if ( ch <  this->curData->variablesBase )
		goto label_cond_10;
	if ( ch >= this->variableLimit )
		goto label_cond_10;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Variable range character in rule")), rule, start);
label_cond_10:
	return;

}
// .method private parsePragma(Ljava/lang/String;II)I
int android::icu::text::TransliteratorParser::parsePragma(std::shared_ptr<java::lang::String> rule,int pos,int limit)
{
	
	std::shared_ptr<int[]> cVar0;
	int cVar1;
	std::shared<std::vector<int[]>> array;
	int cVar2;
	int p;
	
	//    .param p1, "rule"    # Ljava/lang/String;
	//    .param p2, "pos"    # I
	//    .param p3, "limit"    # I
	cVar0 = 0x0;
	cVar1 = 0x0;
	array = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v0, "array":[I
	cVar2 = ( pos + 0x4);
	p = android::icu::impl::Utility::parsePattern(rule, cVar2, limit, std::make_shared<java::lang::String>(std::make_shared<char[]>("~variable range # #~;")), array);
	//    .local v1, "p":I
	if ( p < 0 ) 
		goto label_cond_19;
	this->setVariableRange(array[cVar1], array[0x1]);
	return p;
	// 476    .line 1404
label_cond_19:
	p = android::icu::impl::Utility::parsePattern(rule, cVar2, limit, std::make_shared<java::lang::String>(std::make_shared<char[]>("~maximum backup #~;")), array);
	if ( p < 0 ) 
		goto label_cond_28;
	this->pragmaMaximumBackup(array[cVar1]);
	return p;
	// 495    .line 1410
label_cond_28:
	p = android::icu::impl::Utility::parsePattern(rule, cVar2, limit, std::make_shared<java::lang::String>(std::make_shared<char[]>("~nfd rules~;")), cVar0);
	if ( p < 0 ) 
		goto label_cond_37;
	this->pragmaNormalizeRules(android::icu::text::Normalizer::NFD);
	return p;
	// 514    .line 1416
label_cond_37:
	p = android::icu::impl::Utility::parsePattern(rule, cVar2, limit, std::make_shared<java::lang::String>(std::make_shared<char[]>("~nfc rules~;")), cVar0);
	if ( p < 0 ) 
		goto label_cond_46;
	this->pragmaNormalizeRules(android::icu::text::Normalizer::NFC);
	return p;
	// 533    .line 1423
label_cond_46:
	return -0x1;

}
// .method private parseRule(Ljava/lang/String;II)I
int android::icu::text::TransliteratorParser::parseRule(std::shared_ptr<java::lang::String> rule,int pos,int limit)
{
	
	int start;
	int operator;
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	std::shared_ptr<android::icu::text::TransliteratorParser_S_RuleHalf> left;
	std::shared_ptr<android::icu::text::TransliteratorParser_S_RuleHalf> right;
	int cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	int cVar6;
	int cVar9;
	int n;
	auto value;
	std::shared_ptr<java::lang::StringBuilder> cVar10;
	int i;
	int cVar11;
	int cVar12;
	auto left;
	std::shared<std::vector<std::vector<android::icu::text::UnicodeMatcher>>> segmentsArray;
	std::shared_ptr<android::icu::text::TransliterationRule> cVar15;
	
	//    .param p1, "rule"    # Ljava/lang/String;
	//    .param p2, "pos"    # I
	//    .param p3, "limit"    # I
	start = pos;
	//    .local v22, "start":I
	operator = 0x0;
	//    .local v20, "operator":C
	cVar0 = std::make_shared<java::lang::StringBuffer>();
	this->segmentStandins = cVar0;
	cVar1 = std::make_shared<java::util::ArrayList>();
	this->segmentObjects = cVar1;
	var13 = left(0x0);
	//    .local v17, "left":Landroid/icu/text/TransliteratorParser$RuleHalf;
	var17 = right(0x0);
	//    .local v21, "right":Landroid/icu/text/TransliteratorParser$RuleHalf;
	this->undefinedVariableName = 0x0;
	cVar3 = left->parse(rule, pos, limit, this);
	if ( cVar3 == limit )
		goto label_cond_50;
	cVar3 = ( cVar3 + -0x1);
	operator = rule->charAt(cVar3);
	//    .local v20, "operator":C
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("=><\u2190\u2192\u2194"))->indexOf(operator) >= 0 )
		goto label_cond_6d;
	//    .end local v20    # "operator":C
label_cond_50:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	android::icu::text::TransliteratorParser::syntaxError(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("No operator pos=")))->append(cVar3)->toString(), rule, start);
label_cond_6d:
	cVar6 = ( cVar3 + 0x1);
	if ( operator != 0x3c )
		goto label_cond_87;
	if ( cVar6 >= limit )
		goto label_cond_87;
	if ( rule->charAt(cVar6) != 0x3e )
		goto label_cond_87;
	cVar6 = ( cVar6 + 0x1);
	operator = 0x7e;
label_cond_87:
	// switch
	{
	auto item = ( operator );
	if (item == 8592) goto label_pswitch_13e;
	if (item == 8593) goto label_pswitch_8a;
	if (item == 8594) goto label_pswitch_13a;
	if (item == 8595) goto label_pswitch_8a;
	if (item == 8596) goto label_pswitch_142;
	}
label_goto_8a:
label_pswitch_8a:
	cVar9 = right->parse(rule, cVar6, limit, this);
	if ( cVar9 >= limit )
		goto label_cond_aa;
	cVar9 = ( cVar9 + -0x1);
	if ( rule->charAt(cVar9) != 0x3b )
		goto label_cond_146;
	cVar9 = ( cVar9 + 0x1);
label_cond_aa:
label_goto_aa:
	if ( operator != 0x3d )
		goto label_cond_152;
	if ( this->undefinedVariableName )     
		goto label_cond_c0;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing \'$\' or duplicate definition")), rule, start);
label_cond_c0:
	if ( left->text->length() != 0x1 )
		goto label_cond_da;
	if ( left->text->charAt(0x0) == this->variableLimit )
		goto label_cond_e4;
label_cond_da:
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Malformed LHS")), rule, start);
label_cond_e4:
	if ( left->anchorStart )     
		goto label_cond_fc;
	if ( left->anchorEnd )     
		goto label_cond_fc;
	if ( right->anchorStart )     
		goto label_cond_fc;
	if ( !(right->anchorEnd) )  
		goto label_cond_106;
label_cond_fc:
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Malformed variable def")), rule, start);
label_cond_106:
	n = right->text->length();
	//    .local v19, "n":I
	value = std::make_shared<std::vector<char[]>>(n);
	//    .local v24, "value":[C
	right->text->getChars(0x0, n, value, 0x0);
	this->variableNames->put(this->undefinedVariableName, value);
	this->variableLimit = (char)(( this->variableLimit + 0x1));
	return cVar9;
	// 911    .line 1171
	// 912    .end local v19    # "n":I
	// 913    .end local v24    # "value":[C
label_pswitch_13a:
	operator = 0x3e;
	//    .local v20, "operator":C
	goto label_goto_8a;
	// 921    .line 1174
	// 922    .end local v20    # "operator":C
label_pswitch_13e:
	operator = 0x3c;
	//    .restart local v20    # "operator":C
	goto label_goto_8a;
	// 930    .line 1177
	// 931    .end local v20    # "operator":C
label_pswitch_142:
	operator = 0x7e;
	//    .restart local v20    # "operator":C
	goto label_goto_8a;
	// 939    .line 1188
	// 940    .end local v20    # "operator":C
label_cond_146:
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unquoted operator")), rule, start);
	goto label_goto_aa;
	// 952    .line 1222
label_cond_152:
	if ( !(this->undefinedVariableName) )  
		goto label_cond_177;
	cVar10 = std::make_shared<java::lang::StringBuilder>();
	android::icu::text::TransliteratorParser::syntaxError(cVar10->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Undefined variable $")))->append(this->undefinedVariableName)->toString(), rule, start);
label_cond_177:
	if ( this->segmentStandins->length() <= this->segmentObjects->size() )
		goto label_cond_193;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Undefined segment reference")), rule, start);
label_cond_193:
	i = 0x0;
	//    .local v16, "i":I
label_goto_195:
	if ( i >= this->segmentStandins->length() )
		goto label_cond_1ba;
	if ( this->segmentStandins->charAt(i) )     
		goto label_cond_1b7;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal error")), rule, start);
label_cond_1b7:
	i = ( i + 0x1);
	goto label_goto_195;
	// 1064    .line 1236
label_cond_1ba:
	i = 0x0;
label_goto_1bc:
	if ( i >= this->segmentObjects->size() )
		goto label_cond_1e1;
	if ( this->segmentObjects->get(i) )     
		goto label_cond_1de;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal error")), rule, start);
label_cond_1de:
	i = ( i + 0x1);
	goto label_goto_1bc;
	// 1109    .line 1244
label_cond_1e1:
	if ( operator == 0x7e )
		goto label_cond_1fe;
	if ( this->direction )     
		goto label_cond_1f9;
	cVar11 = 0x1;
label_goto_1ef:
	if ( operator != 0x3e )
		goto label_cond_1fc;
	cVar12 = 0x1;
label_goto_1f6:
	if ( cVar11 == cVar12 )
		goto label_cond_1fe;
	return cVar9;
	// 1143    .line 1245
label_cond_1f9:
	cVar11 = 0x0;
	goto label_goto_1ef;
label_cond_1fc:
	cVar12 = 0x0;
	goto label_goto_1f6;
	// 1156    .line 1251
label_cond_1fe:
	if ( this->direction != 0x1 )
		goto label_cond_20d;
	left;
	//    .local v23, "temp":Landroid/icu/text/TransliteratorParser$RuleHalf;
	//    .end local v17    # "left":Landroid/icu/text/TransliteratorParser$RuleHalf;
	//    .local v18, "left":Landroid/icu/text/TransliteratorParser$RuleHalf;
	right = left;
	left = right;
	//    .end local v18    # "left":Landroid/icu/text/TransliteratorParser$RuleHalf;
	//    .end local v23    # "temp":Landroid/icu/text/TransliteratorParser$RuleHalf;
	//    .restart local v17    # "left":Landroid/icu/text/TransliteratorParser$RuleHalf;
label_cond_20d:
	if ( operator != 0x7e )
		goto label_cond_220;
	right->removeContext();
	left->cursor = -0x1;
	left->cursorOffset = 0x0;
label_cond_220:
	if ( left->ante >= 0 )
		goto label_cond_22b;
	left->ante = 0x0;
label_cond_22b:
	if ( left->post >= 0 )
		goto label_cond_23d;
	left->post = left->text->length();
label_cond_23d:
	if ( right->ante >= 0 )
		goto label_cond_249;
	if ( right->post < 0 ) 
		goto label_cond_2a6;
label_cond_249:
label_goto_249:
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Malformed rule")), rule, start);
label_cond_253:
	//    .local v12, "segmentsArray":[Landroid/icu/text/UnicodeMatcher;
	if ( this->segmentObjects->size() <= 0 )
		goto label_cond_26f;
	segmentsArray = std::make_shared<std::vector<std::vector<android::icu::text::UnicodeMatcher>>>(this->segmentObjects->size());
	//    .local v12, "segmentsArray":[Landroid/icu/text/UnicodeMatcher;
	this->segmentObjects->toArray(segmentsArray);
	//    .end local v12    # "segmentsArray":[Landroid/icu/text/UnicodeMatcher;
label_cond_26f:
	cVar15 = std::make_shared<android::icu::text::TransliterationRule>(left->text, left->ante, left->post, right->text, right->cursor, right->cursorOffset, 0x0, left->anchorStart, left->anchorEnd, this->curData);
	this->curData->ruleSet->addRule(cVar15);
	return cVar9;
	// 1367    .line 1280
label_cond_2a6:
	if ( left->cursor >= 0 )
		goto label_cond_249;
	if ( !(right->cursorOffset) )  
		goto label_cond_2b8;
	if ( right->cursor < 0 ) 
		goto label_cond_249;
label_cond_2b8:
	if ( right->anchorStart )     
		goto label_cond_249;
	if ( right->anchorEnd )     
		goto label_cond_249;
	if ( ( left->isValidInput(this) ^ 0x1) )     
		goto label_cond_249;
	if ( ( right->isValidOutput(this) ^ 0x1) )     
		goto label_cond_249;
	if ( left->ante <= left->post )
		goto label_cond_253;
	goto label_goto_249;
	// 1446    .line 1169
	// 1447    :pswitch_data_2e8
	// 1448    .packed-switch 0x2190
	// 1449        :pswitch_13e
	// 1450        :pswitch_8a
	// 1451        :pswitch_13a
	// 1452        :pswitch_8a
	// 1453        :pswitch_142
	// 1454    .end packed-switch

}
// .method private final parseSet(Ljava/lang/String;Ljava/text/ParsePosition;)C
char android::icu::text::TransliteratorParser::parseSet(std::shared_ptr<java::lang::String> rule,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> set;
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	
	//    .param p1, "rule"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	set = std::make_shared<android::icu::text::UnicodeSet>(rule, pos, this->parseData);
	//    .local v0, "set":Landroid/icu/text/UnicodeSet;
	if ( this->variableNext <  this->variableLimit )
		goto label_cond_16;
	cVar0 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Private use variables exhausted")));
	// throw
	throw cVar0;
	// 1487    .line 1458
label_cond_16:
	set->compact();
	return this->generateStandInFor(set);

}
// .method private pragmaMaximumBackup(I)V
void android::icu::text::TransliteratorParser::pragmaMaximumBackup(int backup)
{
	
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar0;
	
	//    .param p1, "backup"    # I
	cVar0 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("use maximum backup pragma not implemented yet")));
	// throw
	throw cVar0;

}
// .method private pragmaNormalizeRules(Landroid/icu/text/Normalizer$Mode;)V
void android::icu::text::TransliteratorParser::pragmaNormalizeRules(std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode)
{
	
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar0;
	
	//    .param p1, "mode"    # Landroid/icu/text/Normalizer$Mode;
	cVar0 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("use normalize rules pragma not implemented yet")));
	// throw
	throw cVar0;

}
// .method static resemblesPragma(Ljava/lang/String;II)Z
bool android::icu::text::TransliteratorParser::resemblesPragma(std::shared_ptr<java::lang::String> rule,int pos,int limit)
{
	
	bool cVar1;
	
	//    .param p0, "rule"    # Ljava/lang/String;
	//    .param p1, "pos"    # I
	//    .param p2, "limit"    # I
	cVar1 = 0x0;
	if ( android::icu::impl::Utility::parsePattern(rule, pos, limit, std::make_shared<java::lang::String>(std::make_shared<char[]>("use ")), 0x0) < 0 ) 
		goto label_cond_c;
	cVar1 = 0x1;
label_cond_c:
	return cVar1;

}
// .method static final ruleEnd(Ljava/lang/String;II)I
int android::icu::text::TransliteratorParser::ruleEnd(std::shared_ptr<java::lang::String> rule,int start,int limit)
{
	
	int end;
	
	//    .param p0, "rule"    # Ljava/lang/String;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	end = android::icu::impl::Utility::quotedIndexOf(rule, start, limit, std::make_shared<java::lang::String>(std::make_shared<char[]>(";")));
	//    .local v0, "end":I
	if ( end >= 0 )
		goto label_cond_a;
label_cond_a:
	return end;

}
// .method private setVariableRange(II)V
void android::icu::text::TransliteratorParser::setVariableRange(int start,int end)
{
	
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	if ( start >  end )
		goto label_cond_4;
	if ( start >= 0 )
		goto label_cond_29;
label_cond_4:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid variable range ")))->append(start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(end)->toString());
	// throw
	throw cVar0;
	// 1628    .line 1315
label_cond_29:
	if ( end >  0xffff )
		goto label_cond_4;
	this->curData->variablesBase = (char)(start);
	if ( this->dataVector->size() )     
		goto label_cond_43;
	this->variableNext = (char)(start);
	this->variableLimit = (char)(( end + 0x1));
label_cond_43:
	return;

}
// .method static final syntaxError(Ljava/lang/String;Ljava/lang/String;I)V
void android::icu::text::TransliteratorParser::syntaxError(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::String> rule,int start)
{
	
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "msg"    # Ljava/lang/String;
	//    .param p1, "rule"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .local v0, "end":I
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(cVar1->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" in \")))->append(android::icu::impl::Utility::escape(rule->substring(start, android::icu::text::TransliteratorParser::ruleEnd(rule, start, rule->length()))))->append(0x22)->toString());
	// throw
	throw cVar0;

}
// .method generateStandInFor(Ljava/lang/Object;)C
char android::icu::text::TransliteratorParser::generateStandInFor(std::shared_ptr<java::lang::Object> obj)
{
	
	int i;
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	char cVar1;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= this->variablesVector->size() )
		goto label_cond_1b;
	if ( this->variablesVector->get(i) != obj )
		goto label_cond_18;
	return (char)((this->curData->variablesBase +  i));
	// 1772    .line 1471
label_cond_18:
	i = ( i + 0x1);
	goto label_goto_1;
	// 1778    .line 1477
label_cond_1b:
	if ( this->variableNext <  this->variableLimit )
		goto label_cond_2a;
	cVar0 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Variable range exhausted")));
	// throw
	throw cVar0;
	// 1795    .line 1480
label_cond_2a:
	this->variablesVector->add(obj);
	cVar1 = this->variableNext;
	this->variableNext = (char)(( cVar1 + 0x1));
	return (char)(cVar1);

}
// .method getDotStandIn()C
char android::icu::text::TransliteratorParser::getDotStandIn()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	if ( this->dotStandIn != -0x1 )
		goto label_cond_13;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[^[:Zp:][:Zl:]\\r\\n$]")));
	this->dotStandIn = this->generateStandInFor(cVar0);
label_cond_13:
	return (char)(this->dotStandIn);

}
// .method public getSegmentStandin(I)C
char android::icu::text::TransliteratorParser::getSegmentStandin(int seg)
{
	
	char c;
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	char cVar1;
	
	//    .param p1, "seg"    # I
	if ( this->segmentStandins->length() >= seg )
		goto label_cond_d;
	this->segmentStandins->setLength(seg);
label_cond_d:
	c = this->segmentStandins->charAt(( seg + -0x1));
	//    .local v0, "c":C
	if ( c )     
		goto label_cond_3b;
	if ( this->variableNext <  this->variableLimit )
		goto label_cond_26;
	cVar0 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Variable range exhausted")));
	// throw
	throw cVar0;
	// 1897    .line 1496
label_cond_26:
	cVar1 = this->variableNext;
	this->variableNext = (char)(( cVar1 + 0x1));
	c = (char)(cVar1);
	this->variablesVector->add(0x0);
	this->segmentStandins->setCharAt(( seg + -0x1), c);
label_cond_3b:
	return c;

}
// .method public parse(Ljava/lang/String;I)V
void android::icu::text::TransliteratorParser::parse(std::shared_ptr<java::lang::String> rules,int dir)
{
	
	std::shared_ptr<android::icu::text::TransliteratorParser_S_RuleArray> cVar0;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar1;
	
	//    .param p1, "rules"    # Ljava/lang/String;
	//    .param p2, "dir"    # I
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x1);
	cVar1[0x0] = rules;
	cVar0 = std::make_shared<android::icu::text::TransliteratorParser_S_RuleArray>(cVar1);
	this->parseRules(cVar0, dir);
	return;

}
// .method parseRules(Landroid/icu/text/TransliteratorParser$RuleBody;I)V
void android::icu::text::TransliteratorParser::parseRules(std::shared_ptr<android::icu::text::TransliteratorParser_S_RuleBody> ruleArray,int dir)
{
	
	int parsingIDs;
	int ruleCount;
	std::shared_ptr<java::util::ArrayList> cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	std::shared_ptr<java::util::ArrayList> cVar2;
	std::shared_ptr<java::util::HashMap> cVar3;
	std::shared_ptr<android::icu::text::TransliteratorParser_S_ParseData> cVar4;
	std::shared_ptr<java::util::ArrayList> errors;
	int errorCount;
	std::shared_ptr<java::lang::StringBuilder> idBlockResult;
	int compoundFilterOffset;
	std::shared_ptr<java::lang::String> rule;
	int i;
	std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> data;
	std::shared_ptr<java::util::HashMap> cVar5;
	std::shared_ptr<java::lang::IllegalArgumentException> e;
	std::shared_ptr<java::lang::RuntimeException> previous;
	std::shared_ptr<java::lang::Throwable> cVar14;
	std::shared_ptr<java::lang::RuntimeException> cVar15;
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar12;
	std::shared_ptr<java::lang::String> cVar13;
	std::vector<std::any> tryCatchExcetionList;
	int pos;
	int limit;
	int c;
	std::shared_ptr<java::lang::Throwable> e;
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> icuEx;
	auto p;
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	auto withParens;
	std::shared_ptr<android::icu::text::UnicodeSet> f;
	int cVar7;
	int cVar8;
	std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> cVar11;
	int ppp;
	
	//    .param p1, "ruleArray"    # Landroid/icu/text/TransliteratorParser$RuleBody;
	//    .param p2, "dir"    # I
	parsingIDs = 0x1;
	//    .local v18, "parsingIDs":Z
	ruleCount = 0x0;
	//    .local v24, "ruleCount":I
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->dataVector = cVar0;
	cVar1 = std::make_shared<java::util::ArrayList>();
	this->idBlockVector = cVar1;
	this->curData = 0x0;
	this->direction = dir;
	this->compoundFilter = 0x0;
	cVar2 = std::make_shared<java::util::ArrayList>();
	this->variablesVector = cVar2;
	cVar3 = std::make_shared<java::util::HashMap>();
	this->variableNames = cVar3;
	var30 = cVar4(this, 0x0);
	this->parseData = cVar4;
	errors = std::make_shared<java::util::ArrayList>();
	//    .local v10, "errors":Ljava/util/List;, "Ljava/util/List<Ljava/lang/RuntimeException;>;"
	errorCount = 0x0;
	//    .local v9, "errorCount":I
	ruleArray->reset();
	idBlockResult = std::make_shared<java::lang::StringBuilder>();
	//    .local v15, "idBlockResult":Ljava/lang/StringBuilder;
	this->compoundFilter = 0x0;
	compoundFilterOffset = -0x1;
	//    .local v6, "compoundFilterOffset":I
label_cond_70:
label_goto_70:
	rule = ruleArray->nextLine();
	//    .local v23, "rule":Ljava/lang/String;
	if ( rule )     
		goto label_cond_ea;
label_goto_76:
	if ( !(parsingIDs) )  
		goto label_cond_37f;
	if ( idBlockResult->length() <= 0 )
		goto label_cond_37f;
	if ( this->direction )     
		goto label_cond_368;
	this->idBlockVector->add(idBlockResult->toString());
label_cond_93:
label_goto_93:
	i = 0x0;
	//    .local v12, "i":I
label_goto_94:
	if ( i >= this->dataVector->size() )
		goto label_cond_3bb;
	data = this->dataVector->get(i);
	data->checkCast("android::icu::text::RuleBasedTransliterator_S_Data");
	//    .local v7, "data":Landroid/icu/text/RuleBasedTransliterator$Data;
	data->variables = std::make_shared<std::vector<std::vector<java::lang::Object>>>(this->variablesVector->size());
	this->variablesVector->toArray(data->variables);
	cVar5 = std::make_shared<java::util::HashMap>();
	data->variableNames = cVar5;
	data->variableNames->putAll(this->variableNames);
	i = ( i + 0x1);
	goto label_goto_94;
	// 2228    .line 936
	// 2229    .end local v7    # "data":Landroid/icu/text/RuleBasedTransliterator$Data;
	// 2230    .end local v12    # "i":I
label_cond_ea:
	pos = 0x0;
	//    .local v19, "pos":I
	limit = rule->length();
	//    .local v16, "limit":I
	pos = pos;
	//    .end local v19    # "pos":I
	//    .local v20, "pos":I
label_goto_f2:
	if ( pos >= limit )
		goto label_cond_497;
	pos = ( pos + 0x1);
	//    .end local v20    # "pos":I
	//    .restart local v19    # "pos":I
	c = rule->charAt(pos);
	//    .local v5, "c":C
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(c)) )  
		goto label_cond_10b;
	pos = pos;
	//    .end local v19    # "pos":I
	//    .restart local v20    # "pos":I
	goto label_goto_f2;
	// 2281    .line 944
	// 2282    .end local v20    # "pos":I
	// 2283    .restart local v19    # "pos":I
label_cond_10b:
	if ( c != 0x23 )
		goto label_cond_125;
	pos = ( rule->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")), pos) + 0x1);
	if ( !(pos) )  
		goto label_cond_70;
	pos = pos;
	//    .end local v19    # "pos":I
	//    .restart local v20    # "pos":I
	goto label_goto_f2;
	// 2316    .line 953
	// 2317    .end local v20    # "pos":I
	// 2318    .restart local v19    # "pos":I
label_cond_125:
	if ( c != 0x3b )
		goto label_cond_12e;
	pos = pos;
	//    .end local v19    # "pos":I
	//    .restart local v20    # "pos":I
	goto label_goto_f2;
	// 2333    .line 961
	// 2334    .end local v20    # "pos":I
	// 2335    .restart local v19    # "pos":I
label_cond_12e:
	ruleCount = ( ruleCount + 0x1);
	pos = ( pos + -0x1);
	if ( ( ( pos + 0x2) + 0x1) >  limit )
		goto label_cond_2c4;
	try {
	//label_try_start_13c:
	if ( !(rule->regionMatches(pos, std::make_shared<java::lang::String>(std::make_shared<char[]>("::")), 0x0, 0x2)) )  
		goto label_cond_2c4;
	pos = ( pos + 0x2);
	c = rule->charAt(pos);
label_goto_15d:
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(c)) )  
		goto label_cond_174;
	if ( pos >= limit )
		goto label_cond_174;
	pos = ( pos + 0x1);
	c = rule->charAt(pos);
	goto label_goto_15d;
	// 2418    .line 976
label_cond_174:
	p = std::make_shared<std::vector<int[]>>(0x1);
	p[0x0] = pos;
	//    .local v17, "p":[I
	if ( parsingIDs )     
		goto label_cond_1ab;
	if ( !(this->curData) )  
		goto label_cond_1a9;
	if ( this->direction )     
		goto label_cond_1f2;
	this->dataVector->add(this->curData);
label_goto_1a1:
	this->curData = 0x0;
label_cond_1a9:
	parsingIDs = 0x1;
label_cond_1ab:
	id = android::icu::text::TransliteratorIDParser::parseSingleID(rule, p, this->direction);
	//    .local v14, "id":Landroid/icu/text/TransliteratorIDParser$SingleID;
	if ( p[0x0] == pos )
		goto label_cond_244;
	if ( !(android::icu::impl::Utility::parseChar(rule, p, 0x3b)) )  
		goto label_cond_244;
	if ( this->direction )     
		goto label_cond_223;
	idBlockResult->append(id->canonID)->append(0x3b);
label_cond_1ea:
label_goto_1ea:
	pos = p[0x0];
	//    .end local v14    # "id":Landroid/icu/text/TransliteratorIDParser$SingleID;
	//    .end local v17    # "p":[I
label_goto_1ee:
	pos = pos;
	//    .end local v19    # "pos":I
	//    .restart local v20    # "pos":I
	goto label_goto_f2;
	// 2568    .line 983
	// 2569    .end local v20    # "pos":I
	// 2570    .restart local v17    # "p":[I
	// 2571    .restart local v19    # "pos":I
label_cond_1f2:
	this->dataVector->add(0x0, this->curData);
	//label_try_end_209:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_20a;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_13c .. :try_end_209} :catch_20a
	goto label_goto_1a1;
	// 2599    .line 1051
	// 2600    .end local v17    # "p":[I
label_catch_20a:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v8, "e":Ljava/lang/IllegalArgumentException;
	if ( errorCount != 0x1e )
		goto label_cond_352;
	icuEx = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nMore than 30 errors; further messages squelched")));
	//    .local v13, "icuEx":Landroid/icu/impl/IllegalIcuArgumentException;
	icuEx->initCause(e);
	errors->add(icuEx);
	goto label_goto_76;
	// 2630    .line 998
	// 2631    .end local v8    # "e":Ljava/lang/IllegalArgumentException;
	// 2632    .end local v13    # "icuEx":Landroid/icu/impl/IllegalIcuArgumentException;
	// 2633    .restart local v14    # "id":Landroid/icu/text/TransliteratorIDParser$SingleID;
	// 2634    .restart local v17    # "p":[I
label_cond_223:
	try {
	//label_try_start_223:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	idBlockResult->insert(0x0, cVar6->append(id->canonID)->append(0x3b)->toString());
	goto label_goto_1ea;
	// 2669    .line 1003
label_cond_244:
	withParens = std::make_shared<std::vector<int[]>>(0x1);
	withParens[0x0] = -0x1;
	//    .local v25, "withParens":[I
	f = android::icu::text::TransliteratorIDParser::parseGlobalFilter(rule, p, this->direction, withParens, 0x0);
	//    .local v11, "f":Landroid/icu/text/UnicodeSet;
	if ( !(f) )  
		goto label_cond_2b6;
	if ( !(android::icu::impl::Utility::parseChar(rule, p, 0x3b)) )  
		goto label_cond_2b6;
	if ( this->direction )     
		goto label_cond_2ae;
	cVar7 = 0x1;
label_goto_284:
	if ( withParens[0x0] )     
		goto label_cond_2b3;
	cVar8 = 0x1;
label_goto_28c:
	if ( cVar7 != cVar8 )
		goto label_cond_1ea;
	if ( !(this->compoundFilter) )  
		goto label_cond_2a6;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Multiple global filters")), rule, pos);
label_cond_2a6:
	this->compoundFilter = f;
	ruleCount;
	goto label_goto_1ea;
	// 2789    .line 1006
label_cond_2ae:
	cVar7 = 0x0;
	goto label_goto_284;
	// 2797    .line 1007
label_cond_2b3:
	cVar8 = 0x0;
	goto label_goto_28c;
	// 2803    .line 1018
label_cond_2b6:
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid ::ID")), rule, pos);
	goto label_goto_1ea;
	// 2817    .line 1024
	// 2818    .end local v11    # "f":Landroid/icu/text/UnicodeSet;
	// 2819    .end local v14    # "id":Landroid/icu/text/TransliteratorIDParser$SingleID;
	// 2820    .end local v17    # "p":[I
	// 2821    .end local v25    # "withParens":[I
label_cond_2c4:
	if ( !(parsingIDs) )  
		goto label_cond_304;
	if ( this->direction )     
		goto label_cond_32e;
	this->idBlockVector->add(idBlockResult->toString());
label_goto_2db:
	idBlockResult->delete(0x0, idBlockResult->length());
	parsingIDs = 0x0;
	cVar11 = std::make_shared<android::icu::text::RuleBasedTransliterator_S_Data>();
	this->curData = cVar11;
	this->setVariableRange(0xf000, 0xf8ff);
label_cond_304:
	if ( !(android::icu::text::TransliteratorParser::resemblesPragma(rule, pos, limit)) )  
		goto label_cond_344;
	ppp = this->parsePragma(rule, pos, limit);
	//    .local v21, "ppp":I
	if ( ppp >= 0 )
		goto label_cond_32a;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unrecognized pragma")), rule, pos);
label_cond_32a:
	pos = ppp;
	goto label_goto_1ee;
	// 2936    .line 1028
	// 2937    .end local v21    # "ppp":I
label_cond_32e:
	this->idBlockVector->add(0x0, idBlockResult->toString());
	goto label_goto_2db;
	// 2961    .line 1048
label_cond_344:
	//label_try_end_34f:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_20a;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_223 .. :try_end_34f} :catch_20a
	pos = this->parseRule(rule, pos, limit);
	goto label_goto_1ee;
	// 2979    .line 1058
	// 2980    .restart local v8    # "e":Ljava/lang/IllegalArgumentException;
label_cond_352:
	e->fillInStackTrace();
	errors->add(e);
	errorCount = ( errorCount + 0x1);
	pos = ( android::icu::text::TransliteratorParser::ruleEnd(rule, pos, limit) + 0x1);
	goto label_goto_1ee;
	// 3005    .line 1069
	// 3006    .end local v5    # "c":C
	// 3007    .end local v8    # "e":Ljava/lang/IllegalArgumentException;
	// 3008    .end local v16    # "limit":I
	// 3009    .end local v19    # "pos":I
label_cond_368:
	this->idBlockVector->add(0x0, idBlockResult->toString());
	goto label_goto_93;
	// 3033    .line 1071
label_cond_37f:
	if ( parsingIDs )     
		goto label_cond_93;
	if ( !(this->curData) )  
		goto label_cond_93;
	if ( this->direction )     
		goto label_cond_3a2;
	this->dataVector->add(this->curData);
	goto label_goto_93;
	// 3071    .line 1075
label_cond_3a2:
	this->dataVector->add(0x0, this->curData);
	goto label_goto_93;
	// 3097    .line 1086
	// 3098    .restart local v12    # "i":I
label_cond_3bb:
	this->variablesVector = 0x0;
	try {
	//label_try_start_3c3:
	if ( !(this->compoundFilter) )  
		goto label_cond_420;
	if ( this->direction )     
		goto label_cond_40e;
	if ( compoundFilterOffset == 0x1 )
		goto label_cond_40e;
label_cond_3d9:
	cVar12 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Compound filters misplaced")));
	// throw
	throw cVar12;
	// 3143    :try_end_3e2
	// 3144    .catch Ljava/lang/IllegalArgumentException; {:try_start_3c3 .. :try_end_3e2} :catch_3e2
	// 3146    .line 1107
label_catch_3e2:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v8    # "e":Ljava/lang/IllegalArgumentException;
	e->fillInStackTrace();
	errors->add(e);
	//    .end local v8    # "e":Ljava/lang/IllegalArgumentException;
label_cond_3e9:
label_goto_3e9:
	if ( !(errors->size()) )  
		goto label_cond_496;
	i = ( errors->size() + -0x1);
label_goto_3f5:
	if ( i <= 0 )
		goto label_cond_48b;
	previous = errors->get(( i + -0x1));
	previous->checkCast("java::lang::RuntimeException");
	//    .local v22, "previous":Ljava/lang/RuntimeException;
label_goto_401:
	if ( !(previous->getCause()) )  
		goto label_cond_47a;
	previous = previous->getCause();
	//    .end local v22    # "previous":Ljava/lang/RuntimeException;
	previous->checkCast("java::lang::RuntimeException");
	//    .restart local v22    # "previous":Ljava/lang/RuntimeException;
	goto label_goto_401;
	// 3208    .line 1093
	// 3209    .end local v22    # "previous":Ljava/lang/RuntimeException;
label_cond_40e:
	try {
	//label_try_start_40e:
	if ( this->direction != 0x1 )
		goto label_cond_420;
	if ( compoundFilterOffset != ruleCount )
		goto label_cond_3d9;
label_cond_420:
	i = 0x0;
label_goto_421:
	if ( i >= this->dataVector->size() )
		goto label_cond_447;
	data = this->dataVector->get(i);
	data->checkCast("android::icu::text::RuleBasedTransliterator_S_Data");
	//    .restart local v7    # "data":Landroid/icu/text/RuleBasedTransliterator$Data;
	data->ruleSet->freeze();
	i = ( i + 0x1);
	goto label_goto_421;
	// 3278    .line 1104
	// 3279    .end local v7    # "data":Landroid/icu/text/RuleBasedTransliterator$Data;
label_cond_447:
	if ( this->idBlockVector->size() != 0x1 )
		goto label_cond_3e9;
	cVar13 = this->idBlockVector->get(0x0);
	cVar13->checkCast("java::lang::String");
	if ( cVar13->length() )     
		goto label_cond_3e9;
	this->idBlockVector->remove(0x0);
	//label_try_end_478:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3e2;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_40e .. :try_end_478} :catch_3e2
	goto label_goto_3e9;
	// 3334    .line 1118
	// 3335    .restart local v22    # "previous":Ljava/lang/RuntimeException;
label_cond_47a:
	cVar14 = errors->get(i);
	cVar14->checkCast("java::lang::Throwable");
	previous->initCause(cVar14);
	i = ( i + -0x1);
	goto label_goto_3f5;
	// 3354    .line 1120
	// 3355    .end local v22    # "previous":Ljava/lang/RuntimeException;
label_cond_48b:
	cVar15 = errors->get(0x0);
	cVar15->checkCast("java::lang::RuntimeException");
	// throw
	throw cVar15;
	// 3369    .line 1123
label_cond_496:
	return;
	// 3373    .end local v12    # "i":I
	// 3374    .restart local v16    # "limit":I
	// 3375    .restart local v20    # "pos":I
label_cond_497:
	pos = pos;
	//    .end local v20    # "pos":I
	//    .restart local v19    # "pos":I
	goto label_goto_70;

}
// .method public setSegmentObject(ILandroid/icu/text/StringMatcher;)V
void android::icu::text::TransliteratorParser::setSegmentObject(int seg,std::shared_ptr<android::icu::text::StringMatcher> obj)
{
	
	int index;
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	
	//    .param p1, "seg"    # I
	//    .param p2, "obj"    # Landroid/icu/text/StringMatcher;
label_goto_1:
	if ( this->segmentObjects->size() >= seg )
		goto label_cond_f;
	this->segmentObjects->add(0x0);
	goto label_goto_1;
	// 3409    .line 1517
label_cond_f:
	index = (this->getSegmentStandin(seg) - this->curData->variablesBase);
	//    .local v0, "index":I
	if ( this->segmentObjects->get(( seg + -0x1)) )     
		goto label_cond_2b;
	if ( !(this->variablesVector->get(index)) )  
		goto label_cond_31;
label_cond_2b:
	cVar0 = std::make_shared<java::lang::RuntimeException>();
	// throw
	throw cVar0;
	// 3450    .line 1522
label_cond_31:
	this->segmentObjects->set(( seg + -0x1), obj);
	this->variablesVector->set(index, obj);
	return;

}


