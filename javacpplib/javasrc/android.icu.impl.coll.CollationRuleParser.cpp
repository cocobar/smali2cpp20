// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationRuleParser.smali
#include "java2ctype.h"
#include "android.icu.impl.IllegalIcuArgumentException.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationRuleParser_S_Importer.h"
#include "android.icu.impl.coll.CollationRuleParser_S_Position.h"
#include "android.icu.impl.coll.CollationRuleParser_S_Sink.h"
#include "android.icu.impl.coll.CollationRuleParser.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ULocale_S_Builder.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Exception.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.text.ParseException.h"
#include "java.util.ArrayList.h"
#include "java.util.Iterator.h"

static android::icu::impl::coll::CollationRuleParser::_assertionsDisabled;
static android::icu::impl::coll::CollationRuleParser::BEFORE = std::make_shared<java::lang::String>("[before");
static android::icu::impl::coll::CollationRuleParser::OFFSET_SHIFT = 0x8;
static android::icu::impl::coll::CollationRuleParser::POSITION_VALUES;
static android::icu::impl::coll::CollationRuleParser::POS_BASE = '\u2800';
static android::icu::impl::coll::CollationRuleParser::POS_LEAD = '\ufffe';
static android::icu::impl::coll::CollationRuleParser::STARRED_FLAG = 0x10;
static android::icu::impl::coll::CollationRuleParser::STRENGTH_MASK = 0xf;
static android::icu::impl::coll::CollationRuleParser::UCOL_DEFAULT = -0x1;
static android::icu::impl::coll::CollationRuleParser::UCOL_OFF = 0x0;
static android::icu::impl::coll::CollationRuleParser::UCOL_ON = 0x1;
static android::icu::impl::coll::CollationRuleParser::U_PARSE_CONTEXT_LEN = 0x10;
static android::icu::impl::coll::CollationRuleParser::gSpecialReorderCodes;
static android::icu::impl::coll::CollationRuleParser::positions;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationRuleParser::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar5;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar6;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	android::icu::impl::coll::CollationRuleParser::_assertionsDisabled = ( android::icu::impl::coll::CollationRuleParser()->desiredAssertionStatus() ^ 0x1);
	android::icu::impl::coll::CollationRuleParser::POSITION_VALUES = android::icu::impl::coll::CollationRuleParser_S_Position::values({const[class].FS-Param});
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0xe);
	cVar5[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("first tertiary ignorable"));
	cVar5[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("last tertiary ignorable"));
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("first secondary ignorable"));
	cVar5[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("last secondary ignorable"));
	cVar5[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("first primary ignorable"));
	cVar5[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("last primary ignorable"));
	cVar5[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("first variable"));
	cVar5[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("last variable"));
	cVar5[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("first regular"));
	cVar5[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("last regular"));
	cVar5[0xa] = std::make_shared<java::lang::String>(std::make_shared<char[]>("first implicit"));
	cVar5[0xb] = std::make_shared<java::lang::String>(std::make_shared<char[]>("last implicit"));
	cVar5[0xc] = std::make_shared<java::lang::String>(std::make_shared<char[]>("first trailing"));
	cVar5[0xd] = std::make_shared<java::lang::String>(std::make_shared<char[]>("last trailing"));
	android::icu::impl::coll::CollationRuleParser::positions = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x5);
	cVar6[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("space"));
	cVar6[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("punct"));
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("symbol"));
	cVar6[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar6[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("digit"));
	android::icu::impl::coll::CollationRuleParser::gSpecialReorderCodes = cVar6;
	return;

}
// .method constructor <init>(Landroid/icu/impl/coll/CollationData;)V
android::icu::impl::coll::CollationRuleParser::CollationRuleParser(std::shared_ptr<android::icu::impl::coll::CollationData> base)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "base"    # Landroid/icu/impl/coll/CollationData;
	// 233    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->rawBuilder = cVar0;
	this->nfd = android::icu::text::Normalizer2::getNFDInstance({const[class].FS-Param});
	this->nfc = android::icu::text::Normalizer2::getNFCInstance({const[class].FS-Param});
	this->baseData = base;
	return;

}
// .method private appendErrorContext(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::coll::CollationRuleParser::appendErrorContext(std::shared_ptr<java::lang::String> reason)
{
	
	std::shared_ptr<java::lang::StringBuilder> msg;
	int start;
	int length;
	
	//    .param p1, "reason"    # Ljava/lang/String;
	msg = std::make_shared<java::lang::StringBuilder>(reason);
	//    .local v1, "msg":Ljava/lang/StringBuilder;
	msg->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" at index ")))->append(this->ruleIndex);
	msg->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" near \")));
	start = ( this->ruleIndex + -0xf);
	//    .local v2, "start":I
	if ( start >= 0 )
		goto label_cond_63;
	start = 0x0;
label_cond_1e:
label_goto_1e:
	msg->append(this->rules, start, this->ruleIndex);
	msg->append(0x21);
	length = (this->rules->length() - this->ruleIndex);
	//    .local v0, "length":I
	if ( length <  0x10 )
		goto label_cond_4e;
	length = 0xf;
	if ( !(java::lang::Character::isHighSurrogate(this->rules->charAt(( ( this->ruleIndex + 0xf) + -0x1)))) )  
		goto label_cond_4e;
	length = 0xe;
label_cond_4e:
	msg->append(this->rules, this->ruleIndex, (this->ruleIndex +  length));
	return msg->append(0x22)->toString();
	// 383    .line 874
	// 384    .end local v0    # "length":I
label_cond_63:
	if ( start <= 0 )
		goto label_cond_1e;
	if ( !(java::lang::Character::isLowSurrogate(this->rules->charAt(start))) )  
		goto label_cond_1e;
	start = ( start + 0x1);
	goto label_goto_1e;

}
// .method private static getOnOffValue(Ljava/lang/String;)I
int android::icu::impl::coll::CollationRuleParser::getOnOffValue(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( !(s->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("on")))) )  
		goto label_cond_b;
	return 0x1;
	// 425    .line 769
label_cond_b:
	if ( !(s->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("off")))) )  
		goto label_cond_16;
	return 0x0;
	// 440    .line 772
label_cond_16:
	return -0x1;

}
// .method public static getReorderCode(Ljava/lang/String;)I
int android::icu::impl::coll::CollationRuleParser::getReorderCode(std::shared_ptr<java::lang::String> word)
{
	
	int i;
	std::vector<std::any> tryCatchExcetionList;
	int script;
	
	//    .param p0, "word"    # Ljava/lang/String;
	i = 0x0;
	//    .local v1, "i":I
label_goto_1:
	if ( i >= android::icu::impl::coll::CollationRuleParser::gSpecialReorderCodes->size() )
		goto label_cond_16;
	if ( !(word->equalsIgnoreCase(android::icu::impl::coll::CollationRuleParser::gSpecialReorderCodes[i])) )  
		goto label_cond_13;
	return ( i + 0x1000);
	// 479    .line 747
label_cond_13:
	i = ( i + 0x1);
	goto label_goto_1;
	// 485    .line 753
label_cond_16:
	try {
	//label_try_start_18:
	//label_try_end_1b:
	}
	catch (android::icu::impl::IllegalIcuArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1f;
	}
	//    .catch Landroid/icu/impl/IllegalIcuArgumentException; {:try_start_18 .. :try_end_1b} :catch_1f
	script = android::icu::lang::UCharacter::getPropertyValueEnum(0x100a, word);
	//    .local v2, "script":I
	if ( script < 0 ) 
		goto label_cond_20;
	return script;
	// 503    .line 757
	// 504    .end local v2    # "script":I
label_catch_1f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_20:
	if ( !(word->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("others")))) )  
		goto label_cond_2c;
	return 0x67;
	// 523    .line 763
label_cond_2c:
	return -0x1;

}
// .method private static final isSurrogate(I)Z
bool android::icu::impl::coll::CollationRuleParser::isSurrogate(int c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # I
	if ( ( c & -0x800) != 0xd800 )
		goto label_cond_9;
	cVar0 = 0x1;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method private static isSyntaxChar(I)Z
bool android::icu::impl::coll::CollationRuleParser::isSyntaxChar(int c)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p0, "c"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( 0x21 >  c )
		goto label_cond_25;
	if ( c >  0x7e )
		goto label_cond_25;
	if ( c <= 0x2f )
		goto label_cond_16;
	if ( 0x3a >  c )
		goto label_cond_17;
	if ( c >  0x40 )
		goto label_cond_17;
label_cond_16:
label_goto_16:
	return cVar0;
	// 589    .line 899
label_cond_17:
	if ( 0x5b >  c )
		goto label_cond_1f;
	if ( c <= 0x60 )
		goto label_cond_16;
label_cond_1f:
	if ( 0x7b <= c )
		goto label_cond_16;
	cVar0 = cVar1;
	goto label_goto_16;
label_cond_25:
	cVar0 = cVar1;
	goto label_goto_16;

}
// .method private makeParseException(Ljava/lang/String;)Ljava/text/ParseException;
std::shared_ptr<java::text::ParseException> android::icu::impl::coll::CollationRuleParser::makeParseException(std::shared_ptr<java::lang::String> reason)
{
	
	std::shared_ptr<java::text::ParseException> cVar0;
	
	//    .param p1, "reason"    # Ljava/lang/String;
	cVar0 = std::make_shared<java::text::ParseException>(this->appendErrorContext(reason), this->ruleIndex);
	return cVar0;

}
// .method private parse(Ljava/lang/String;)V
void android::icu::impl::coll::CollationRuleParser::parse(std::shared_ptr<java::lang::String> ruleString)
{
	
	int c;
	
	//    .param p1, "ruleString"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 638        value = {
	// 639            Ljava/text/ParseException;
	// 640        }
	// 641    .end annotation
	this->rules = ruleString;
	this->ruleIndex = 0x0;
label_goto_5:
	if ( this->ruleIndex >= this->rules->length() )
		goto label_cond_57;
	c = this->rules->charAt(this->ruleIndex);
	//    .local v0, "c":C
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(c)) )  
		goto label_cond_24;
	this->ruleIndex = ( this->ruleIndex + 0x1);
	goto label_goto_5;
	// 690    .line 144
label_cond_24:
	// switch
	{
	auto item = ( c );
	if (item == 0x21) goto label_sswitch_50;
	if (item == 0x23) goto label_sswitch_36;
	if (item == 0x26) goto label_sswitch_2e;
	if (item == 0x40) goto label_sswitch_41;
	if (item == 0x5b) goto label_sswitch_32;
	}
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("expected a reset or setting or comment")));
	goto label_goto_5;
	// 701    .line 146
label_sswitch_2e:
	this->parseRuleChain();
	goto label_goto_5;
	// 707    .line 149
label_sswitch_32:
	this->parseSetting();
	goto label_goto_5;
	// 713    .line 152
label_sswitch_36:
	this->ruleIndex = this->skipComment(( this->ruleIndex + 0x1));
	goto label_goto_5;
	// 727    .line 155
label_sswitch_41:
	this->settings->setFlag(0x800, 0x1);
	this->ruleIndex = ( this->ruleIndex + 0x1);
	goto label_goto_5;
	// 746    .line 161
label_sswitch_50:
	this->ruleIndex = ( this->ruleIndex + 0x1);
	goto label_goto_5;
	// 756    .line 168
	// 757    .end local v0    # "c":C
label_cond_57:
	return;
	// 761    .line 144
	// 762    :sswitch_data_58
	// 763    .sparse-switch
	// 764        0x21 -> :sswitch_50
	// 765        0x23 -> :sswitch_36
	// 766        0x26 -> :sswitch_2e
	// 767        0x40 -> :sswitch_41
	// 768        0x5b -> :sswitch_32
	// 769    .end sparse-switch

}
// .method private parseRelationOperator()I
int android::icu::impl::coll::CollationRuleParser::parseRelationOperator()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int i;
	int strength;
	
	cVar0 = 0x2a;
	cVar1 = -0x1;
	cVar2 = 0x3c;
	this->ruleIndex = this->skipWhiteSpace(this->ruleIndex);
	if ( this->ruleIndex <  this->rules->length() )
		goto label_cond_18;
	return cVar1;
	// 804    .line 251
label_cond_18:
	i = this->ruleIndex;
	//    .local v1, "i":I
	i = ( i + 0x1);
	//    .end local v1    # "i":I
	//    .local v2, "i":I
	//    .local v0, "c":C
	// switch
	{
	auto item = ( this->rules->charAt(i) );
	if (item == 0x2c) goto label_sswitch_83;
	if (item == 0x3b) goto label_sswitch_80;
	if (item == 0x3c) goto label_sswitch_26;
	if (item == 0x3d) goto label_sswitch_86;
	}
	return cVar1;
	// 827    .line 255
label_sswitch_26:
	if ( i >= this->rules->length() )
		goto label_cond_7d;
	if ( this->rules->charAt(i) != cVar2 )
		goto label_cond_7d;
	i = ( i + 0x1);
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	if ( i >= this->rules->length() )
		goto label_cond_7b;
	if ( this->rules->charAt(i) != cVar2 )
		goto label_cond_7b;
	i = ( i + 0x1);
	if ( i >= this->rules->length() )
		goto label_cond_79;
	if ( this->rules->charAt(i) != cVar2 )
		goto label_cond_79;
	i = ( i + 0x1);
	strength = 0x3;
	//    .local v3, "strength":I
label_goto_5d:
	if ( i >= this->rules->length() )
		goto label_cond_71;
	if ( this->rules->charAt(i) != cVar0 )
		goto label_cond_71;
	i = ( i + 0x1);
	strength = ( strength | 0x10);
label_cond_71:
label_goto_71:
	return (( (i - this->ruleIndex) << 0x8) |  strength);
	// 931    .line 263
	// 932    .end local v3    # "strength":I
label_cond_79:
	strength = 0x2;
	//    .restart local v3    # "strength":I
	goto label_goto_5d;
	// 939    .line 266
	// 940    .end local v3    # "strength":I
label_cond_7b:
	strength = 0x1;
	//    .restart local v3    # "strength":I
	goto label_goto_5d;
	// 947    .line 269
	// 948    .end local v1    # "i":I
	// 949    .end local v3    # "strength":I
	// 950    .restart local v2    # "i":I
label_cond_7d:
	strength = 0x0;
	//    .restart local v3    # "strength":I
	i = i;
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_5d;
	// 961    .line 277
	// 962    .end local v1    # "i":I
	// 963    .end local v3    # "strength":I
	// 964    .restart local v2    # "i":I
label_sswitch_80:
	strength = 0x1;
	//    .restart local v3    # "strength":I
	i = i;
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_71;
	// 976    .line 280
	// 977    .end local v1    # "i":I
	// 978    .end local v3    # "strength":I
	// 979    .restart local v2    # "i":I
label_sswitch_83:
	strength = 0x2;
	//    .restart local v3    # "strength":I
	i = i;
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_71;
	// 991    .line 283
	// 992    .end local v1    # "i":I
	// 993    .end local v3    # "strength":I
	// 994    .restart local v2    # "i":I
label_sswitch_86:
	strength = 0xf;
	//    .restart local v3    # "strength":I
	if ( i >= this->rules->length() )
		goto label_cond_9d;
	if ( this->rules->charAt(i) != cVar0 )
		goto label_cond_9d;
	i = ( i + 0x1);
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	strength = 0x1f;
	goto label_goto_71;
	// 1026    .end local v1    # "i":I
	// 1027    .restart local v2    # "i":I
label_cond_9d:
	i = i;
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_71;
	// 1036    .line 253
	// 1037    nop
	// 1039    :sswitch_data_a0
	// 1040    .sparse-switch
	// 1041        0x2c -> :sswitch_83
	// 1042        0x3b -> :sswitch_80
	// 1043        0x3c -> :sswitch_26
	// 1044        0x3d -> :sswitch_86
	// 1045    .end sparse-switch

}
// .method private parseRelationStrings(II)V
void android::icu::impl::coll::CollationRuleParser::parseRelationStrings(int strength,int i)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> prefix;
	int cVar5;
	int cVar4;
	std::shared_ptr<java::lang::StringBuilder> extBuilder;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "strength"    # I
	//    .param p2, "i"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1053        value = {
	// 1054            Ljava/text/ParseException;
	// 1055        }
	// 1056    .end annotation
	cVar0 = 0x0;
	prefix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v5, "prefix":Ljava/lang/String;
	//    .local v3, "extension":Ljava/lang/CharSequence;
	cVar5 = this->parseTailoringString(i, this->rawBuilder);
	if ( cVar5 >= this->rules->length() )
		goto label_cond_74;
	cVar4 = this->rules->charAt(cVar5);
label_goto_1b:
	if ( cVar4 != 0x7c )
		goto label_cond_3b;
	prefix = this->rawBuilder->toString();
	cVar5 = this->parseTailoringString(( cVar5 + 0x1), this->rawBuilder);
	if ( cVar5 >= this->rules->length() )
		goto label_cond_76;
	cVar4 = this->rules->charAt(cVar5);
label_cond_3b:
label_goto_3b:
	if ( cVar4 != 0x2f )
		goto label_cond_4b;
	extBuilder = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "extBuilder":Ljava/lang/StringBuilder;
	cVar5 = this->parseTailoringString(( cVar5 + 0x1), extBuilder);
	//    .end local v2    # "extBuilder":Ljava/lang/StringBuilder;
label_cond_4b:
	if ( !(prefix->length()) )  
		goto label_cond_78;
	//    .local v6, "prefix0":I
	//    .local v0, "c":I
	if ( !(this->nfc->hasBoundaryBefore(prefix->codePointAt(cVar0))) )  
		goto label_cond_6d;
	if ( !(( this->nfc->hasBoundaryBefore(this->rawBuilder->codePointAt(cVar0)) ^ 0x1)) )  
		goto label_cond_78;
label_cond_6d:
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("in \'prefix|str\', prefix and str must each start with an NFC boundary")));
	return;
	// 1202    .line 302
	// 1203    .end local v0    # "c":I
	// 1204    .end local v6    # "prefix0":I
label_cond_74:
	cVar4 = 0x0;
	//    .local v4, "next":C
	goto label_goto_1b;
	// 1211    .line 306
	// 1212    .end local v4    # "next":C
label_cond_76:
	cVar4 = 0x0;
	//    .restart local v4    # "next":C
	goto label_goto_3b;
	// 1219    .line 323
	// 1220    .end local v4    # "next":C
label_cond_78:
	try {
	//label_try_start_78:
	this->sink->addRelation(strength, prefix, this->rawBuilder, std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	//label_try_end_7f:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_82;
	}
	//    .catch Ljava/lang/Exception; {:try_start_78 .. :try_end_7f} :catch_82
	this->ruleIndex = cVar5;
	return;
	// 1237    .line 324
label_catch_82:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("adding relation failed")), getCatchExcetionFromList);
	return;

}
// .method private parseReordering(Ljava/lang/CharSequence;)V
void android::icu::impl::coll::CollationRuleParser::parseReordering(std::shared_ptr<java::lang::CharSequence> raw)
{
	
	int i;
	std::shared_ptr<java::util::ArrayList> reorderCodes;
	int limit;
	int code;
	std::shared<std::vector<int[]>> codes;
	int j;
	std::shared_ptr<java::util::Iterator> code_S_iterator;
	std::shared_ptr<java::lang::Integer> code;
	
	//    .param p1, "raw"    # Ljava/lang/CharSequence;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1255        value = {
	// 1256            Ljava/text/ParseException;
	// 1257        }
	// 1258    .end annotation
	i = 0x7;
	//    .local v4, "i":I
	if ( 0x7 != raw->length() )
		goto label_cond_e;
	this->settings->resetReordering();
	return;
	// 1284    .line 713
label_cond_e:
	reorderCodes = std::make_shared<java::util::ArrayList>();
	//    .local v8, "reorderCodes":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
label_goto_13:
	if ( i >= raw->length() )
		goto label_cond_4b;
	i = ( i + 0x1);
	limit = i;
	//    .local v7, "limit":I
label_goto_1c:
	if ( limit >= raw->length() )
		goto label_cond_2d;
	if ( raw->charAt(limit) == 0x20 )
		goto label_cond_2d;
	limit = ( limit + 0x1);
	goto label_goto_1c;
	// 1326    .line 718
label_cond_2d:
	//    .local v9, "word":Ljava/lang/String;
	code = android::icu::impl::coll::CollationRuleParser::getReorderCode(raw->subSequence(i, limit)->toString());
	//    .local v0, "code":I
	if ( code >= 0 )
		goto label_cond_42;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("unknown script or reorder code")));
	return;
	// 1354    .line 724
label_cond_42:
	reorderCodes->add(java::lang::Integer::valueOf(code));
	i = limit;
	goto label_goto_13;
	// 1367    .line 727
	// 1368    .end local v0    # "code":I
	// 1369    .end local v7    # "limit":I
	// 1370    .end local v9    # "word":Ljava/lang/String;
label_cond_4b:
	if ( !(reorderCodes->isEmpty()) )  
		goto label_cond_57;
	this->settings->resetReordering();
label_goto_56:
	return;
	// 1387    .line 730
label_cond_57:
	codes = std::make_shared<std::vector<int[]>>(reorderCodes->size());
	//    .local v3, "codes":[I
	j = 0x0;
	//    .local v5, "j":I
	code_S_iterator = reorderCodes->iterator();
	//    .local v2, "code$iterator":Ljava/util/Iterator;
label_goto_62:
	if ( !(code_S_iterator->hasNext()) )  
		goto label_cond_78;
	code = code_S_iterator->next();
	code->checkCast("java::lang::Integer");
	//    .local v1, "code":Ljava/lang/Integer;
	//    .end local v5    # "j":I
	//    .local v6, "j":I
	codes[j] = code->intValue();
	j = ( j + 0x1);
	//    .end local v6    # "j":I
	//    .restart local v5    # "j":I
	goto label_goto_62;
	// 1436    .line 733
	// 1437    .end local v1    # "code":Ljava/lang/Integer;
label_cond_78:
	this->settings->setReordering(this->baseData, codes);
	goto label_goto_56;

}
// .method private parseResetAndPosition()I
int android::icu::impl::coll::CollationRuleParser::parseResetAndPosition()
{
	
	int cVar0;
	int i;
	int j;
	int c;
	int resetStrength;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1451        value = {
	// 1452            Ljava/text/ParseException;
	// 1453        }
	// 1454    .end annotation
	cVar0 = -0x1;
	i = this->skipWhiteSpace(( this->ruleIndex + 0x1));
	//    .local v2, "i":I
	if ( !(this->rules->regionMatches(i, std::make_shared<java::lang::String>(std::make_shared<char[]>("[before")), 0x0, std::make_shared<java::lang::String>(std::make_shared<char[]>("[before"))->length())) )  
		goto label_cond_7c;
	j = (i + std::make_shared<java::lang::String>(std::make_shared<char[]>("[before"))->length());
	//    .local v3, "j":I
	if ( j >= this->rules->length() )
		goto label_cond_7c;
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(this->rules->charAt(j))) )  
		goto label_cond_7c;
	j = this->skipWhiteSpace(( j + 0x1));
	if ( ( j + 0x1) >= this->rules->length() )
		goto label_cond_7c;
	c = this->rules->charAt(j);
	//    .local v0, "c":C
	if ( 0x31 >  c )
		goto label_cond_7c;
	if ( c >  0x33 )
		goto label_cond_7c;
	if ( this->rules->charAt(( j + 0x1)) != 0x5d )
		goto label_cond_7c;
	resetStrength = ( ( c + -0x31) + 0x0);
	//    .local v4, "resetStrength":I
	i = this->skipWhiteSpace(( j + 0x2));
	//    .end local v0    # "c":C
	//    .end local v3    # "j":I
label_goto_6d:
	if ( i <  this->rules->length() )
		goto label_cond_7f;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("reset without position")));
	return cVar0;
	// 1599    .line 226
	// 1600    .end local v4    # "resetStrength":I
label_cond_7c:
	resetStrength = 0xf;
	//    .restart local v4    # "resetStrength":I
	goto label_goto_6d;
	// 1607    .line 232
label_cond_7f:
	if ( this->rules->charAt(i) != 0x5b )
		goto label_cond_99;
	i = this->parseSpecialPosition(i, this->rawBuilder);
label_goto_8f:
	try {
	//label_try_start_8f:
	this->sink->addReset(resetStrength, this->rawBuilder);
	//label_try_end_96:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a0;
	}
	//    .catch Ljava/lang/Exception; {:try_start_8f .. :try_end_96} :catch_a0
	this->ruleIndex = i;
	return resetStrength;
	// 1643    .line 235
label_cond_99:
	i = this->parseTailoringString(i, this->rawBuilder);
	goto label_goto_8f;
	// 1653    .line 239
label_catch_a0:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("adding reset failed")), getCatchExcetionFromList);
	return cVar0;

}
// .method private parseRuleChain()V
void android::icu::impl::coll::CollationRuleParser::parseRuleChain()
{
	
	int resetStrength;
	int isFirstRelation;
	int result;
	int strength;
	int i;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1670        value = {
	// 1671            Ljava/text/ParseException;
	// 1672        }
	// 1673    .end annotation
	resetStrength = this->parseResetAndPosition();
	//    .local v2, "resetStrength":I
	isFirstRelation = 0x1;
	//    .local v1, "isFirstRelation":Z
label_goto_5:
	result = this->parseRelationOperator();
	//    .local v3, "result":I
	if ( result >= 0 )
		goto label_cond_35;
	if ( this->ruleIndex >= this->rules->length() )
		goto label_cond_2c;
	if ( this->rules->charAt(this->ruleIndex) != 0x23 )
		goto label_cond_2c;
	this->ruleIndex = this->skipComment(( this->ruleIndex + 0x1));
	goto label_goto_5;
	// 1732    .line 181
label_cond_2c:
	if ( !(isFirstRelation) )  
		goto label_cond_34;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("reset not followed by a relation")));
label_cond_34:
	return;
	// 1745    .line 186
label_cond_35:
	strength = ( result & 0xf);
	//    .local v4, "strength":I
	if ( resetStrength >= 0xf )
		goto label_cond_4f;
	if ( !(isFirstRelation) )  
		goto label_cond_46;
	if ( strength == resetStrength )
		goto label_cond_4f;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("reset-before strength differs from its first relation")));
	return;
	// 1769    .line 195
label_cond_46:
	if ( strength >= resetStrength )
		goto label_cond_4f;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("reset-before strength followed by a stronger relation")));
	return;
	// 1781    .line 201
label_cond_4f:
	i = (this->ruleIndex + _shri(result,0x8));
	//    .local v0, "i":I
	if ( ( result & 0x10) )     
		goto label_cond_5e;
	this->parseRelationStrings(strength, i);
label_goto_5c:
	isFirstRelation = 0x0;
	goto label_goto_5;
	// 1804    .line 205
label_cond_5e:
	this->parseStarredCharacters(strength, i);
	goto label_goto_5c;

}
// .method private parseSetting()V
void android::icu::impl::coll::CollationRuleParser::parseSetting()
{
	
	int i;
	int j;
	std::shared_ptr<java::lang::String> raw;
	int valueIndex;
	std::shared_ptr<java::lang::String> v;
	int value;
	int c;
	int cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int cVar3;
	int cVar5;
	int cVar7;
	std::shared_ptr<android::icu::util::ULocale_S_Builder> cVar9;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::util::ULocale> localeID;
	std::shared_ptr<java::lang::String> collationType;
	std::shared_ptr<android::icu::text::UnicodeSet> set;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1814        value = {
	// 1815            Ljava/text/ParseException;
	// 1816        }
	// 1817    .end annotation
	i = ( this->ruleIndex + 0x1);
	//    .local v8, "i":I
	j = this->readWords(i, this->rawBuilder);
	//    .local v10, "j":I
	if ( j <= i )
		goto label_cond_24;
	if ( this->rawBuilder->length() )     
		goto label_cond_2e;
label_cond_24:
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("expected a setting/option at \'[\'")));
label_cond_2e:
	raw = this->rawBuilder->toString();
	//    .local v14, "raw":Ljava/lang/String;
	if ( this->rules->charAt(j) != 0x5d )
		goto label_cond_3ad;
	j = ( j + 0x1);
	if ( !(raw->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("reorder")))) )  
		goto label_cond_7f;
	if ( raw->length() == 0x7 )
		goto label_cond_75;
	if ( raw->charAt(0x7) != 0x20 )
		goto label_cond_7f;
label_cond_75:
	this->parseReordering(raw);
	this->ruleIndex = j;
	return;
	// 1962    .line 542
label_cond_7f:
	if ( !(raw->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("backwards 2")))) )  
		goto label_cond_9c;
	this->settings->setFlag(0x800, 0x1);
	this->ruleIndex = j;
	return;
	// 1995    .line 548
label_cond_9c:
	valueIndex = raw->lastIndexOf(0x20);
	//    .local v18, "valueIndex":I
	if ( valueIndex < 0 ) 
		goto label_cond_105;
	v = raw->substring(( valueIndex + 0x1));
	//    .local v16, "v":Ljava/lang/String;
	raw = raw->substring(0x0, valueIndex);
label_goto_b8:
	if ( !(raw->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("strength")))) )  
		goto label_cond_112;
	if ( v->length() != 0x1 )
		goto label_cond_112;
	value = -0x1;
	//    .local v17, "value":I
	c = v->charAt(0x0);
	//    .local v5, "c":C
	if ( 0x31 >  c )
		goto label_cond_109;
	if ( c >  0x34 )
		goto label_cond_109;
	value = ( ( c + -0x31) + 0x0);
label_cond_eb:
label_goto_eb:
	if ( value == -0x1 )
		goto label_cond_41a;
	this->settings->setStrength(value);
	this->ruleIndex = j;
	return;
	// 2120    .line 553
	// 2121    .end local v5    # "c":C
	// 2122    .end local v16    # "v":Ljava/lang/String;
	// 2123    .end local v17    # "value":I
label_cond_105:
	std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .restart local v16    # "v":Ljava/lang/String;
	goto label_goto_b8;
	// 2130    .line 560
	// 2131    .restart local v5    # "c":C
	// 2132    .restart local v17    # "value":I
label_cond_109:
	if ( c != 0x49 )
		goto label_cond_eb;
	value = 0xf;
	goto label_goto_eb;
	// 2145    .line 568
	// 2146    .end local v5    # "c":C
	// 2147    .end local v17    # "value":I
label_cond_112:
	if ( !(raw->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("alternate")))) )  
		goto label_cond_15f;
	value = -0x1;
	//    .restart local v17    # "value":I
	if ( !(v->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("non-ignorable")))) )  
		goto label_cond_14c;
	value = 0x0;
label_cond_12e:
label_goto_12e:
	if ( value == -0x1 )
		goto label_cond_41a;
	if ( value <= 0 )
		goto label_cond_15c;
	cVar0 = 0x1;
label_goto_140:
	this->settings->setAlternateHandlingShifted(cVar0);
	this->ruleIndex = j;
	return;
	// 2216    .line 572
label_cond_14c:
	if ( !(v->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("shifted")))) )  
		goto label_cond_12e;
	value = 0x1;
	goto label_goto_12e;
	// 2235    .line 576
label_cond_15c:
	cVar0 = 0x0;
	goto label_goto_140;
	// 2241    .line 580
	// 2242    .end local v17    # "value":I
label_cond_15f:
	if ( !(raw->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("maxVariable")))) )  
		goto label_cond_201;
	value = -0x1;
	//    .restart local v17    # "value":I
	if ( !(v->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("space")))) )  
		goto label_cond_1cc;
	value = 0x0;
label_cond_17b:
label_goto_17b:
	if ( value == -0x1 )
		goto label_cond_41a;
	this->settings->setMaxVariable(value, 0x0);
	this->settings->variableTop = this->baseData->getLastPrimaryForGroup(( value + 0x1000));
	if ( android::icu::impl::coll::CollationRuleParser::_assertionsDisabled )     
		goto label_cond_1fc;
	if ( (this->settings->variableTop > 0x0) )     
		goto label_cond_1fc;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 2362    .line 584
label_cond_1cc:
	if ( !(v->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("punct")))) )  
		goto label_cond_1dc;
	value = 0x1;
	goto label_goto_17b;
	// 2381    .line 586
label_cond_1dc:
	if ( !(v->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("symbol")))) )  
		goto label_cond_1ec;
	value = 0x2;
	goto label_goto_17b;
	// 2400    .line 588
label_cond_1ec:
	if ( !(v->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("currency")))) )  
		goto label_cond_17b;
	value = 0x3;
	goto label_goto_17b;
	// 2419    .line 596
label_cond_1fc:
	this->ruleIndex = j;
	return;
	// 2428    .line 599
	// 2429    .end local v17    # "value":I
label_cond_201:
	if ( !(raw->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("caseFirst")))) )  
		goto label_cond_257;
	value = -0x1;
	//    .restart local v17    # "value":I
	if ( !(v->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("off")))) )  
		goto label_cond_237;
	value = 0x0;
label_cond_21d:
label_goto_21d:
	if ( value == -0x1 )
		goto label_cond_41a;
	this->settings->setCaseFirst(value);
	this->ruleIndex = j;
	return;
	// 2493    .line 603
label_cond_237:
	if ( !(v->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("lower")))) )  
		goto label_cond_247;
	value = 0x200;
	goto label_goto_21d;
	// 2512    .line 605
label_cond_247:
	if ( !(v->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("upper")))) )  
		goto label_cond_21d;
	value = 0x300;
	goto label_goto_21d;
	// 2531    .line 613
	// 2532    .end local v17    # "value":I
label_cond_257:
	if ( !(raw->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("caseLevel")))) )  
		goto label_cond_28b;
	value = android::icu::impl::coll::CollationRuleParser::getOnOffValue(v);
	//    .restart local v17    # "value":I
	if ( value == -0x1 )
		goto label_cond_41a;
	if ( value <= 0 )
		goto label_cond_288;
	cVar3 = 0x1;
label_goto_278:
	this->settings->setFlag(0x400, cVar3);
	this->ruleIndex = j;
	return;
	// 2589    .line 616
label_cond_288:
	cVar3 = 0x0;
	goto label_goto_278;
	// 2595    .line 620
	// 2596    .end local v17    # "value":I
label_cond_28b:
	if ( !(raw->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("normalization")))) )  
		goto label_cond_2bf;
	value = android::icu::impl::coll::CollationRuleParser::getOnOffValue(v);
	//    .restart local v17    # "value":I
	if ( value == -0x1 )
		goto label_cond_41a;
	if ( value <= 0 )
		goto label_cond_2bc;
	cVar5 = 0x1;
label_goto_2ac:
	this->settings->setFlag(0x1, cVar5);
	this->ruleIndex = j;
	return;
	// 2653    .line 623
label_cond_2bc:
	cVar5 = 0x0;
	goto label_goto_2ac;
	// 2659    .line 627
	// 2660    .end local v17    # "value":I
label_cond_2bf:
	if ( !(raw->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("numericOrdering")))) )  
		goto label_cond_2f3;
	value = android::icu::impl::coll::CollationRuleParser::getOnOffValue(v);
	//    .restart local v17    # "value":I
	if ( value == -0x1 )
		goto label_cond_41a;
	if ( value <= 0 )
		goto label_cond_2f0;
	cVar7 = 0x1;
label_goto_2e0:
	this->settings->setFlag(0x2, cVar7);
	this->ruleIndex = j;
	return;
	// 2717    .line 630
label_cond_2f0:
	cVar7 = 0x0;
	goto label_goto_2e0;
	// 2723    .line 634
	// 2724    .end local v17    # "value":I
label_cond_2f3:
	if ( !(raw->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("hiraganaQ")))) )  
		goto label_cond_321;
	value = android::icu::impl::coll::CollationRuleParser::getOnOffValue(v);
	//    .restart local v17    # "value":I
	if ( value == -0x1 )
		goto label_cond_41a;
	if ( value != 0x1 )
		goto label_cond_31c;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("[hiraganaQ on] is not supported")));
label_cond_31c:
	this->ruleIndex = j;
	return;
	// 2778    .line 643
	// 2779    .end local v17    # "value":I
label_cond_321:
	if ( !(raw->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("import")))) )  
		goto label_cond_41a;
	try {
	//label_try_start_32c:
	cVar9 = std::make_shared<android::icu::util::ULocale_S_Builder>();
	//label_try_end_33c:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_35d;
	}
	//    .catch Ljava/lang/Exception; {:try_start_32c .. :try_end_33c} :catch_35d
	localeID = cVar9->setLanguageTag(v)->build();
	//    .local v11, "localeID":Landroid/icu/util/ULocale;
	//    .local v4, "baseID":Ljava/lang/String;
	collationType = localeID->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("collation")));
	//    .local v6, "collationType":Ljava/lang/String;
	if ( this->importer )     
		goto label_cond_369;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("[import langTag] is not supported")));
	//    .end local v6    # "collationType":Ljava/lang/String;
label_goto_35c:
	return;
	// 2851    .line 648
	// 2852    .end local v4    # "baseID":Ljava/lang/String;
	// 2853    .end local v11    # "localeID":Landroid/icu/util/ULocale;
label_catch_35d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v7, "e":Ljava/lang/Exception;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("expected language tag in [import langTag]")), getCatchExcetionFromList);
	return;
	// 2870    .line 662
	// 2871    .end local v7    # "e":Ljava/lang/Exception;
	// 2872    .restart local v4    # "baseID":Ljava/lang/String;
	// 2873    .restart local v6    # "collationType":Ljava/lang/String;
	// 2874    .restart local v11    # "localeID":Landroid/icu/util/ULocale;
label_cond_369:
	try {
	//label_try_start_369:
	if ( !(collationType) )  
		goto label_cond_38d;
	//    .end local v6    # "collationType":Ljava/lang/String;
label_goto_371:
	//label_try_end_376:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_391;
	}
	//    .catch Ljava/lang/Exception; {:try_start_369 .. :try_end_376} :catch_391
	//    .local v9, "importedRules":Ljava/lang/String;
	//    .local v13, "outerRules":Ljava/lang/String;
	//    .local v12, "outerRuleIndex":I
	try {
	//label_try_start_37f:
	this->parse(this->importer->getRules(localeID->getBaseName(), collationType));
	//label_try_end_384:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_39d;
	}
	//    .catch Ljava/lang/Exception; {:try_start_37f .. :try_end_384} :catch_39d
label_goto_384:
	this->rules = this->rules;
	this->ruleIndex = j;
	goto label_goto_35c;
	// 2931    .line 663
	// 2932    .end local v9    # "importedRules":Ljava/lang/String;
	// 2933    .end local v12    # "outerRuleIndex":I
	// 2934    .end local v13    # "outerRules":Ljava/lang/String;
	// 2935    .restart local v6    # "collationType":Ljava/lang/String;
label_cond_38d:
	try {
	//label_try_start_38d:
	collationType = std::make_shared<java::lang::String>(std::make_shared<char[]>("standard"));
	//label_try_end_390:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_391;
	}
	//    .catch Ljava/lang/Exception; {:try_start_38d .. :try_end_390} :catch_391
	goto label_goto_371;
	// 2944    .line 664
	// 2945    .end local v6    # "collationType":Ljava/lang/String;
label_catch_391:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v7    # "e":Ljava/lang/Exception;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("[import langTag] failed")), getCatchExcetionFromList);
	return;
	// 2962    .line 672
	// 2963    .end local v7    # "e":Ljava/lang/Exception;
	// 2964    .restart local v9    # "importedRules":Ljava/lang/String;
	// 2965    .restart local v12    # "outerRuleIndex":I
	// 2966    .restart local v13    # "outerRules":Ljava/lang/String;
label_catch_39d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v7    # "e":Ljava/lang/Exception;
	this->ruleIndex = this->ruleIndex;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("parsing imported rules failed")), getCatchExcetionFromList);
	goto label_goto_384;
	// 2987    .line 681
	// 2988    .end local v4    # "baseID":Ljava/lang/String;
	// 2989    .end local v7    # "e":Ljava/lang/Exception;
	// 2990    .end local v9    # "importedRules":Ljava/lang/String;
	// 2991    .end local v11    # "localeID":Landroid/icu/util/ULocale;
	// 2992    .end local v12    # "outerRuleIndex":I
	// 2993    .end local v13    # "outerRules":Ljava/lang/String;
	// 2994    .end local v16    # "v":Ljava/lang/String;
	// 2995    .end local v18    # "valueIndex":I
label_cond_3ad:
	if ( this->rules->charAt(j) != 0x5b )
		goto label_cond_41a;
	set = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v15, "set":Landroid/icu/text/UnicodeSet;
	j = this->parseUnicodeSet(j, set);
	if ( !(raw->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("optimize")))) )  
		goto label_cond_3f3;
	try {
	//label_try_start_3d7:
	this->sink->optimize(set);
	//label_try_end_3e2:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3e7;
	}
	//    .catch Ljava/lang/Exception; {:try_start_3d7 .. :try_end_3e2} :catch_3e7
label_goto_3e2:
	this->ruleIndex = j;
	return;
	// 3064    .line 687
label_catch_3e7:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v7    # "e":Ljava/lang/Exception;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("[optimize set] failed")), getCatchExcetionFromList);
	goto label_goto_3e2;
	// 3080    .line 692
	// 3081    .end local v7    # "e":Ljava/lang/Exception;
label_cond_3f3:
	if ( !(raw->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("suppressContractions")))) )  
		goto label_cond_41a;
	try {
	//label_try_start_3fe:
	this->sink->suppressContractions(set);
	//label_try_end_409:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_40e;
	}
	//    .catch Ljava/lang/Exception; {:try_start_3fe .. :try_end_409} :catch_40e
label_goto_409:
	this->ruleIndex = j;
	return;
	// 3116    .line 695
label_catch_40e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v7    # "e":Ljava/lang/Exception;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("[suppressContractions set] failed")), getCatchExcetionFromList);
	goto label_goto_409;
	// 3132    .line 702
	// 3133    .end local v7    # "e":Ljava/lang/Exception;
	// 3134    .end local v15    # "set":Landroid/icu/text/UnicodeSet;
label_cond_41a:
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("not a valid setting/option")));
	return;

}
// .method private parseSpecialPosition(ILjava/lang/StringBuilder;)I
int android::icu::impl::coll::CollationRuleParser::parseSpecialPosition(int i,std::shared_ptr<java::lang::StringBuilder> str)
{
	
	char cVar0;
	int j;
	std::shared_ptr<java::lang::String> raw;
	int pos;
	
	//    .param p1, "i"    # I
	//    .param p2, "str"    # Ljava/lang/StringBuilder;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3153        value = {
	// 3154            Ljava/text/ParseException;
	// 3155        }
	// 3156    .end annotation
	cVar0 = 0xfffe;
	j = this->readWords(( i + 0x1), this->rawBuilder);
	//    .local v0, "j":I
	if ( j <= i )
		goto label_cond_7d;
	if ( this->rules->charAt(j) != 0x5d )
		goto label_cond_7d;
	if ( !(this->rawBuilder->length()) )  
		goto label_cond_7d;
	j = ( j + 0x1);
	raw = this->rawBuilder->toString();
	//    .local v2, "raw":Ljava/lang/String;
	str->setLength(0x0);
	pos = 0x0;
	//    .local v1, "pos":I
label_goto_2c:
	if ( pos >= android::icu::impl::coll::CollationRuleParser::positions->size() )
		goto label_cond_49;
	if ( !(raw->equals(android::icu::impl::coll::CollationRuleParser::positions[pos])) )  
		goto label_cond_46;
	str->append(cVar0)->append((char)(( pos + 0x2800)));
	return j;
	// 3244    .line 507
label_cond_46:
	pos = ( pos + 0x1);
	goto label_goto_2c;
	// 3250    .line 513
label_cond_49:
	if ( !(raw->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("top")))) )  
		goto label_cond_63;
	str->append(cVar0)->append((char)(( android::icu::impl::coll::CollationRuleParser_S_Position::LAST_REGULAR->ordinal() + 0x2800)));
	return j;
	// 3280    .line 517
label_cond_63:
	if ( !(raw->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("variable top")))) )  
		goto label_cond_7d;
	str->append(cVar0)->append((char)(( android::icu::impl::coll::CollationRuleParser_S_Position::LAST_VARIABLE->ordinal() + 0x2800)));
	return j;
	// 3310    .line 522
	// 3311    .end local v1    # "pos":I
	// 3312    .end local v2    # "raw":Ljava/lang/String;
label_cond_7d:
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("not a valid special reset position")));
	return i;

}
// .method private parseStarredCharacters(II)V
void android::icu::impl::coll::CollationRuleParser::parseStarredCharacters(int strength,int i)
{
	
	std::shared_ptr<java::lang::String> empty;
	int cVar0;
	int prev;
	int j;
	int c;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "strength"    # I
	//    .param p2, "i"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 3327        value = {
	// 3328            Ljava/text/ParseException;
	// 3329        }
	// 3330    .end annotation
	empty = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v2, "empty":Ljava/lang/String;
	cVar0 = this->parseString(this->skipWhiteSpace(i), this->rawBuilder);
	if ( this->rawBuilder->length() )     
		goto label_cond_1d;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("missing starred-relation string")));
	return;
	// 3367    .line 338
label_cond_1d:
	prev = -0x1;
	//    .local v4, "prev":I
	j = 0x0;
	//    .local v3, "j":I
label_goto_1f:
	if ( j >= this->rawBuilder->length() )
		goto label_cond_54;
	c = this->rawBuilder->codePointAt(j);
	//    .local v0, "c":I
	if ( this->nfd->isInert(c) )     
		goto label_cond_3c;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("starred-relation string is not all NFD-inert")));
	return;
	// 3411    .line 348
label_cond_3c:
	try {
	//label_try_start_3c:
	this->sink->addRelation(strength, empty, android::icu::text::UTF16::valueOf(c), empty);
	//label_try_end_45:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4c;
	}
	//    .catch Ljava/lang/Exception; {:try_start_3c .. :try_end_45} :catch_4c
	j = (j +  java::lang::Character::charCount(c));
	c;
	goto label_goto_1f;
	// 3436    .line 349
label_catch_4c:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("adding relation failed")), getCatchExcetionFromList);
	return;
	// 3449    .line 356
	// 3450    .end local v0    # "c":I
	// 3451    .end local v1    # "e":Ljava/lang/Exception;
label_cond_54:
	if ( cVar0 >= this->rules->length() )
		goto label_cond_66;
	if ( this->rules->charAt(cVar0) == 0x2d )
		goto label_cond_6d;
label_cond_66:
	this->ruleIndex = this->skipWhiteSpace(cVar0);
	return;
	// 3482    .line 359
label_cond_6d:
	if ( prev >= 0 )
		goto label_cond_76;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("range without start in starred-relation string")));
	return;
	// 3494    .line 363
label_cond_76:
	cVar0 = this->parseString(( cVar0 + 0x1), this->rawBuilder);
	if ( this->rawBuilder->length() )     
		goto label_cond_8d;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("range without end in starred-relation string")));
	return;
	// 3521    .line 368
label_cond_8d:
	c = this->rawBuilder->codePointAt(0x0);
	//    .restart local v0    # "c":I
	if ( c >= prev )
		goto label_cond_a5;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("range start greater than end in starred-relation string")));
	return;
	// 3541    .line 388
label_cond_9c:
	try {
	//label_try_start_9c:
	this->sink->addRelation(strength, empty, android::icu::text::UTF16::valueOf(prev), empty);
	//label_try_end_a5:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d6;
	}
	//    .catch Ljava/lang/Exception; {:try_start_9c .. :try_end_a5} :catch_d6
label_cond_a5:
	prev = ( prev + 0x1);
	if ( prev >  c )
		goto label_cond_de;
	if ( this->nfd->isInert(prev) )     
		goto label_cond_b8;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("starred-relation string range is not all NFD-inert")));
	return;
	// 3577    .line 379
label_cond_b8:
	if ( !(android::icu::impl::coll::CollationRuleParser::isSurrogate(prev)) )  
		goto label_cond_c5;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("starred-relation string range contains a surrogate")));
	return;
	// 3593    .line 383
label_cond_c5:
	if ( 0xfffd >  prev )
		goto label_cond_9c;
	if ( prev >  0xffff )
		goto label_cond_9c;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("starred-relation string range contains U+FFFD, U+FFFE or U+FFFF")));
	return;
	// 3611    .line 389
label_catch_d6:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v1    # "e":Ljava/lang/Exception;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("adding relation failed")), getCatchExcetionFromList);
	return;
	// 3624    .line 394
	// 3625    .end local v1    # "e":Ljava/lang/Exception;
label_cond_de:
	prev = -0x1;
	j = java::lang::Character::charCount(c);
	goto label_goto_1f;

}
// .method private parseString(ILjava/lang/StringBuilder;)I
int android::icu::impl::coll::CollationRuleParser::parseString(int i,std::shared_ptr<java::lang::StringBuilder> raw)
{
	
	char cVar0;
	int i;
	int c;
	char c;
	int cp;
	int j;
	
	//    .param p1, "i"    # I
	//    .param p2, "raw"    # Ljava/lang/StringBuilder;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3642        value = {
	// 3643            Ljava/text/ParseException;
	// 3644        }
	// 3645    .end annotation
	cVar0 = 0x27;
	raw->setLength(0x0);
label_goto_6:
	if ( i >= this->rules->length() )
		goto label_cond_8c;
	i = ( i + 0x1);
	//    .end local p1    # "i":I
	//    .local v3, "i":I
	c = this->rules->charAt(i);
	//    .local v0, "c":C
	if ( !(android::icu::impl::coll::CollationRuleParser::isSyntaxChar(c)) )  
		goto label_cond_a4;
	if ( c != cVar0 )
		goto label_cond_66;
	if ( i >= this->rules->length() )
		goto label_cond_34;
	if ( this->rules->charAt(i) != cVar0 )
		goto label_cond_34;
	raw->append(cVar0);
	i = ( i + 0x1);
	//    .end local v3    # "i":I
	//    .restart local p1    # "i":I
	goto label_goto_6;
	// 3715    .end local p1    # "i":I
	// 3716    .restart local v3    # "i":I
label_cond_34:
	i = i;
	//    .end local v3    # "i":I
	//    .restart local p1    # "i":I
label_goto_35:
	if ( i != this->rules->length() )
		goto label_cond_44;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("quoted literal text missing terminating apostrophe")));
	return i;
	// 3740    .line 426
label_cond_44:
	i = ( i + 0x1);
	//    .end local p1    # "i":I
	//    .restart local v3    # "i":I
	c = this->rules->charAt(i);
	if ( c != cVar0 )
		goto label_cond_cb;
	if ( i >= this->rules->length() )
		goto label_cond_64;
	if ( this->rules->charAt(i) != cVar0 )
		goto label_cond_64;
	i = ( i + 0x1);
	//    .end local v3    # "i":I
	//    .restart local p1    # "i":I
label_goto_60:
	raw->append(c);
	goto label_goto_35;
	// 3783    .end local p1    # "i":I
	// 3784    .restart local v3    # "i":I
label_cond_64:
	i = i;
	//    .end local v3    # "i":I
	//    .restart local p1    # "i":I
	goto label_goto_6;
	// 3793    .line 438
	// 3794    .end local p1    # "i":I
	// 3795    .restart local v3    # "i":I
label_cond_66:
	if ( c != 0x5c )
		goto label_cond_8a;
	if ( i != this->rules->length() )
		goto label_cond_79;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("backslash escape at the end of the rule string")));
	return i;
	// 3818    .line 443
label_cond_79:
	cp = this->rules->codePointAt(i);
	//    .local v2, "cp":I
	raw->appendCodePoint(cp);
	i = (i + java::lang::Character::charCount(cp));
	//    .end local v3    # "i":I
	//    .restart local p1    # "i":I
	goto label_goto_6;
	// 3841    .line 448
	// 3842    .end local v2    # "cp":I
	// 3843    .end local p1    # "i":I
	// 3844    .restart local v3    # "i":I
label_cond_8a:
	i = ( i + -0x1);
	//    .end local v0    # "c":C
	//    .end local v3    # "i":I
	//    .restart local p1    # "i":I
label_cond_8c:
label_goto_8c:
	j = 0x0;
	//    .local v4, "j":I
label_goto_8d:
	if ( j >= raw->length() )
		goto label_cond_ca;
	c = raw->codePointAt(j);
	//    .local v1, "c":I
	if ( !(android::icu::impl::coll::CollationRuleParser::isSurrogate(c)) )  
		goto label_cond_b3;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("string contains an unpaired surrogate")));
	return i;
	// 3885    .line 451
	// 3886    .end local v1    # "c":I
	// 3887    .end local v4    # "j":I
	// 3888    .end local p1    # "i":I
	// 3889    .restart local v0    # "c":C
	// 3890    .restart local v3    # "i":I
label_cond_a4:
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(c)) )  
		goto label_cond_ad;
	//    .end local v3    # "i":I
	//    .restart local p1    # "i":I
	goto label_goto_8c;
	// 3906    .line 456
	// 3907    .end local p1    # "i":I
	// 3908    .restart local v3    # "i":I
label_cond_ad:
	raw->append(c);
	i = i;
	//    .end local v3    # "i":I
	//    .restart local p1    # "i":I
	goto label_goto_6;
	// 3918    .line 465
	// 3919    .end local v0    # "c":C
	// 3920    .restart local v1    # "c":I
	// 3921    .restart local v4    # "j":I
label_cond_b3:
	if ( 0xfffd >  c )
		goto label_cond_c4;
	if ( c >  0xffff )
		goto label_cond_c4;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("string contains U+FFFD, U+FFFE or U+FFFF")));
	return i;
	// 3939    .line 469
label_cond_c4:
	j = (j +  java::lang::Character::charCount(c));
	goto label_goto_8d;
	// 3949    .line 471
	// 3950    .end local v1    # "c":I
label_cond_ca:
	return i;
	// 3954    .end local v4    # "j":I
	// 3955    .end local p1    # "i":I
	// 3956    .restart local v0    # "c":C
	// 3957    .restart local v3    # "i":I
label_cond_cb:
	i = i;
	//    .end local v3    # "i":I
	//    .restart local p1    # "i":I
	goto label_goto_60;

}
// .method private parseTailoringString(ILjava/lang/StringBuilder;)I
int android::icu::impl::coll::CollationRuleParser::parseTailoringString(int i,std::shared_ptr<java::lang::StringBuilder> raw)
{
	
	//    .param p1, "i"    # I
	//    .param p2, "raw"    # Ljava/lang/StringBuilder;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3971        value = {
	// 3972            Ljava/text/ParseException;
	// 3973        }
	// 3974    .end annotation
	if ( raw->length() )     
		goto label_cond_14;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("missing relation string")));
label_cond_14:
	return this->skipWhiteSpace(this->parseString(this->skipWhiteSpace(i), raw));

}
// .method private parseUnicodeSet(ILandroid/icu/text/UnicodeSet;)I
int android::icu::impl::coll::CollationRuleParser::parseUnicodeSet(int i,std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	int cVar0;
	int level;
	int j;
	int c;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "i"    # I
	//    .param p2, "set"    # Landroid/icu/text/UnicodeSet;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4012        value = {
	// 4013            Ljava/text/ParseException;
	// 4014        }
	// 4015    .end annotation
	cVar0 = 0x5d;
	level = 0x0;
	//    .local v4, "level":I
	j = i;
	//    .local v2, "j":I
label_goto_4:
	if ( j != this->rules->length() )
		goto label_cond_13;
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("unbalanced UnicodeSet pattern brackets")));
	return j;
	// 4046    .line 785
label_cond_13:
	j = ( j + 0x1);
	//    .end local v2    # "j":I
	//    .local v3, "j":I
	c = this->rules->charAt(j);
	//    .local v0, "c":C
	if ( c != 0x5b )
		goto label_cond_23;
	level = ( level + 0x1);
label_cond_21:
	j = j;
	//    .end local v3    # "j":I
	//    .restart local v2    # "j":I
	goto label_goto_4;
	// 4074    .line 788
	// 4075    .end local v2    # "j":I
	// 4076    .restart local v3    # "j":I
label_cond_23:
	if ( c != cVar0 )
		goto label_cond_21;
	level = ( level + -0x1);
	if ( level )     
		goto label_cond_21;
	try {
	//label_try_start_29:
	set->applyPattern(this->rules->substring(i, j));
	//label_try_end_32:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4d;
	}
	//    .catch Ljava/lang/Exception; {:try_start_29 .. :try_end_32} :catch_4d
label_goto_32:
	j = this->skipWhiteSpace(j);
	//    .end local v3    # "j":I
	//    .restart local v2    # "j":I
	if ( j == this->rules->length() )
		goto label_cond_46;
	if ( this->rules->charAt(j) == cVar0 )
		goto label_cond_6a;
label_cond_46:
	this->setParseError(std::make_shared<java::lang::String>(std::make_shared<char[]>("missing option-terminating \']\' after UnicodeSet pattern")));
	return j;
	// 4131    .line 794
	// 4132    .end local v2    # "j":I
	// 4133    .restart local v3    # "j":I
label_catch_4d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	this->setParseError(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("not a valid UnicodeSet pattern: ")))->append(getCatchExcetionFromList->getMessage())->toString());
	goto label_goto_32;
	// 4165    .line 802
	// 4166    .end local v1    # "e":Ljava/lang/Exception;
	// 4167    .end local v3    # "j":I
	// 4168    .restart local v2    # "j":I
label_cond_6a:
	return ( j + 0x1);

}
// .method private readWords(ILjava/lang/StringBuilder;)I
int android::icu::impl::coll::CollationRuleParser::readWords(int i,std::shared_ptr<java::lang::StringBuilder> raw)
{
	
	char cVar0;
	int cVar1;
	int cVar2;
	int c;
	int lastIndex;
	
	//    .param p1, "i"    # I
	//    .param p2, "raw"    # Ljava/lang/StringBuilder;
	cVar0 = 0x20;
	cVar1 = 0x0;
	raw->setLength(cVar1);
	cVar2 = this->skipWhiteSpace(i);
label_goto_a:
	if ( cVar2 <  this->rules->length() )
		goto label_cond_13;
	return cVar1;
	// 4205    .line 810
label_cond_13:
	c = this->rules->charAt(cVar2);
	//    .local v0, "c":C
	if ( !(android::icu::impl::coll::CollationRuleParser::isSyntaxChar(c)) )  
		goto label_cond_3e;
	if ( c == 0x2d )
		goto label_cond_3e;
	if ( c == 0x5f )
		goto label_cond_3e;
	if ( raw->length() )     
		goto label_cond_2e;
	return cVar2;
	// 4238    .line 813
label_cond_2e:
	lastIndex = ( raw->length() + -0x1);
	//    .local v1, "lastIndex":I
	if ( raw->charAt(lastIndex) != cVar0 )
		goto label_cond_3d;
	raw->setLength(lastIndex);
label_cond_3d:
	return cVar2;
	// 4261    .line 819
	// 4262    .end local v1    # "lastIndex":I
label_cond_3e:
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(c)) )  
		goto label_cond_4e;
	raw->append(cVar0);
	cVar2 = this->skipWhiteSpace(( cVar2 + 0x1));
	goto label_goto_a;
	// 4282    .line 823
label_cond_4e:
	raw->append(c);
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_a;

}
// .method private setParseError(Ljava/lang/String;)V
void android::icu::impl::coll::CollationRuleParser::setParseError(std::shared_ptr<java::lang::String> reason)
{
	
	//    .param p1, "reason"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4296        value = {
	// 4297            Ljava/text/ParseException;
	// 4298        }
	// 4299    .end annotation
	// throw
	throw this->makeParseException(reason);

}
// .method private setParseError(Ljava/lang/String;Ljava/lang/Exception;)V
void android::icu::impl::coll::CollationRuleParser::setParseError(std::shared_ptr<java::lang::String> reason,std::shared_ptr<java::lang::Exception> e)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::text::ParseException> newExc;
	
	//    .param p1, "reason"    # Ljava/lang/String;
	//    .param p2, "e"    # Ljava/lang/Exception;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4315        value = {
	// 4316            Ljava/text/ParseException;
	// 4317        }
	// 4318    .end annotation
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	newExc = this->makeParseException(cVar0->append(reason)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(": ")))->append(e->getMessage())->toString());
	//    .local v0, "newExc":Ljava/text/ParseException;
	newExc->initCause(e);
	// throw
	throw newExc;

}
// .method private skipComment(I)I
int android::icu::impl::coll::CollationRuleParser::skipComment(int i)
{
	
	int i;
	int c;
	
	//    .param p1, "i"    # I
label_goto_0:
	if ( i >= this->rules->length() )
		goto label_cond_19;
	i = ( i + 0x1);
	//    .end local p1    # "i":I
	//    .local v1, "i":I
	c = this->rules->charAt(i);
	//    .local v0, "c":C
	if ( c == 0xa )
		goto label_cond_18;
	if ( c != 0xc )
		goto label_cond_1a;
label_cond_18:
	//    .end local v0    # "c":C
	//    .end local v1    # "i":I
	//    .restart local p1    # "i":I
label_cond_19:
	return i;
	// 4406    .line 834
	// 4407    .end local p1    # "i":I
	// 4408    .restart local v0    # "c":C
	// 4409    .restart local v1    # "i":I
label_cond_1a:
	if ( c == 0xd )
		goto label_cond_18;
	if ( c == 0x85 )
		goto label_cond_18;
	if ( c == 0x2028 )
		goto label_cond_18;
	if ( c == 0x2029 )
		goto label_cond_18;
	i = i;
	//    .end local v1    # "i":I
	//    .restart local p1    # "i":I
	goto label_goto_0;

}
// .method private skipWhiteSpace(I)I
int android::icu::impl::coll::CollationRuleParser::skipWhiteSpace(int i)
{
	
	int i;
	
	//    .param p1, "i"    # I
label_goto_0:
	if ( i >= this->rules->length() )
		goto label_cond_17;
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(this->rules->charAt(i))) )  
		goto label_cond_17;
	i = ( i + 0x1);
	goto label_goto_0;
	// 4466    .line 906
label_cond_17:
	return i;

}
// .method parse(Ljava/lang/String;Landroid/icu/impl/coll/CollationSettings;)V
void android::icu::impl::coll::CollationRuleParser::parse(std::shared_ptr<java::lang::String> ruleString,std::shared_ptr<android::icu::impl::coll::CollationSettings> outSettings)
{
	
	//    .param p1, "ruleString"    # Ljava/lang/String;
	//    .param p2, "outSettings"    # Landroid/icu/impl/coll/CollationSettings;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4478        value = {
	// 4479            Ljava/text/ParseException;
	// 4480        }
	// 4481    .end annotation
	this->settings = outSettings;
	this->parse(ruleString);
	return;

}
// .method setImporter(Landroid/icu/impl/coll/CollationRuleParser$Importer;)V
void android::icu::impl::coll::CollationRuleParser::setImporter(std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Importer> importerAlias)
{
	
	//    .param p1, "importerAlias"    # Landroid/icu/impl/coll/CollationRuleParser$Importer;
	this->importer = importerAlias;
	return;

}
// .method setSink(Landroid/icu/impl/coll/CollationRuleParser$Sink;)V
void android::icu::impl::coll::CollationRuleParser::setSink(std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Sink> sinkAlias)
{
	
	//    .param p1, "sinkAlias"    # Landroid/icu/impl/coll/CollationRuleParser$Sink;
	this->sink = sinkAlias;
	return;

}


