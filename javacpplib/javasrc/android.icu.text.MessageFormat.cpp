// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessageFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.MessageFormat_S_AppendableWrapper.h"
#include "android.icu.text.MessageFormat_S_AttributeAndPosition.h"
#include "android.icu.text.MessageFormat_S_Field.h"
#include "android.icu.text.MessageFormat_S_PluralSelectorContext.h"
#include "android.icu.text.MessageFormat_S_PluralSelectorProvider.h"
#include "android.icu.text.MessageFormat.h"
#include "android.icu.text.MessagePattern_S_ApostropheMode.h"
#include "android.icu.text.MessagePattern_S_ArgType.h"
#include "android.icu.text.MessagePattern_S_Part_S_Type.h"
#include "android.icu.text.MessagePattern_S_Part.h"
#include "android.icu.text.MessagePattern.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralFormat_S_PluralSelector.h"
#include "android.icu.text.PluralFormat.h"
#include "android.icu.text.PluralRules_S_PluralType.h"
#include "android.icu.text.RuleBasedNumberFormat.h"
#include "android.icu.text.SelectFormat.h"
#include "android.icu.text.SimpleDateFormat.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.ArrayIndexOutOfBoundsException.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Class.h"
#include "java.lang.Double.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.text.AttributedCharacterIterator_S_Attribute.h"
#include "java.text.AttributedCharacterIterator.h"
#include "java.text.AttributedString.h"
#include "java.text.ChoiceFormat.h"
#include "java.text.FieldPosition.h"
#include "java.text.Format_S_Field.h"
#include "java.text.Format.h"
#include "java.text.ParseException.h"
#include "java.text.ParsePosition.h"
#include "java.util.ArrayList.h"
#include "java.util.Date.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

static android::icu::text::MessageFormat::_assertionsDisabled;
static android::icu::text::MessageFormat::CURLY_BRACE_LEFT = '{';
static android::icu::text::MessageFormat::CURLY_BRACE_RIGHT = '}';
static android::icu::text::MessageFormat::DATE_MODIFIER_EMPTY = 0x0;
static android::icu::text::MessageFormat::DATE_MODIFIER_FULL = 0x4;
static android::icu::text::MessageFormat::DATE_MODIFIER_LONG = 0x3;
static android::icu::text::MessageFormat::DATE_MODIFIER_MEDIUM = 0x2;
static android::icu::text::MessageFormat::DATE_MODIFIER_SHORT = 0x1;
static android::icu::text::MessageFormat::MODIFIER_CURRENCY = 0x1;
static android::icu::text::MessageFormat::MODIFIER_EMPTY = 0x0;
static android::icu::text::MessageFormat::MODIFIER_INTEGER = 0x3;
static android::icu::text::MessageFormat::MODIFIER_PERCENT = 0x2;
static android::icu::text::MessageFormat::SINGLE_QUOTE = '\'';
static android::icu::text::MessageFormat::STATE_INITIAL = 0x0;
static android::icu::text::MessageFormat::STATE_IN_QUOTE = 0x2;
static android::icu::text::MessageFormat::STATE_MSG_ELEMENT = 0x3;
static android::icu::text::MessageFormat::STATE_SINGLE_QUOTE = 0x1;
static android::icu::text::MessageFormat::TYPE_DATE = 0x1;
static android::icu::text::MessageFormat::TYPE_DURATION = 0x5;
static android::icu::text::MessageFormat::TYPE_NUMBER = 0x0;
static android::icu::text::MessageFormat::TYPE_ORDINAL = 0x4;
static android::icu::text::MessageFormat::TYPE_SPELLOUT = 0x3;
static android::icu::text::MessageFormat::TYPE_TIME = 0x2;
static android::icu::text::MessageFormat::dateModifierList;
static android::icu::text::MessageFormat::modifierList;
static android::icu::text::MessageFormat::rootLocale;
static android::icu::text::MessageFormat::serialVersionUID = 0x6308eb804ceb42dcL;
static android::icu::text::MessageFormat::typeList;
// .method static synthetic -get0(Landroid/icu/text/MessageFormat;)Ljava/util/Map;
std::shared_ptr<java::util::Map> android::icu::text::MessageFormat::_get0(std::shared_ptr<android::icu::text::MessageFormat> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessageFormat;
	return _this->cachedFormatters;

}
// .method static synthetic -get1(Landroid/icu/text/MessageFormat;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::MessageFormat::_get1(std::shared_ptr<android::icu::text::MessageFormat> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessageFormat;
	return _this->ulocale;

}
// .method static synthetic -wrap0(Landroid/icu/text/MessageFormat;)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::MessageFormat::_wrap0(std::shared_ptr<android::icu::text::MessageFormat> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessageFormat;
	return _this->getStockNumberFormatter();

}
// .method static synthetic -wrap1(Landroid/icu/text/MessageFormat;ILjava/lang/String;)I
int android::icu::text::MessageFormat::_wrap1(std::shared_ptr<android::icu::text::MessageFormat> _this,int msgStart,std::shared_ptr<java::lang::String> argName)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessageFormat;
	//    .param p1, "msgStart"    # I
	//    .param p2, "argName"    # Ljava/lang/String;
	return _this->findFirstPluralNumberArg(msgStart, argName);

}
// .method static synthetic -wrap2(Landroid/icu/text/MessageFormat;I)I
int android::icu::text::MessageFormat::_wrap2(std::shared_ptr<android::icu::text::MessageFormat> _this,int partIndex)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessageFormat;
	//    .param p1, "partIndex"    # I
	return _this->findOtherSubMessage(partIndex);

}
// .method static constructor <clinit>()V
void android::icu::text::MessageFormat::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar5;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar6;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar7;
	std::shared_ptr<java::util::Locale> cVar8;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	android::icu::text::MessageFormat::_assertionsDisabled = ( android::icu::text::MessageFormat()->desiredAssertionStatus() ^ 0x1);
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x6);
	cVar5[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("number"));
	cVar5[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("date"));
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("time"));
	cVar5[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("spellout"));
	cVar5[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ordinal"));
	cVar5[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("duration"));
	android::icu::text::MessageFormat::typeList = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar6[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	cVar6[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("percent"));
	cVar6[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("integer"));
	android::icu::text::MessageFormat::modifierList = cVar6;
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x5);
	cVar7[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	cVar7[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("short"));
	cVar7[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("medium"));
	cVar7[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("long"));
	cVar7[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("full"));
	android::icu::text::MessageFormat::dateModifierList = cVar7;
	cVar8 = std::make_shared<java::util::Locale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	android::icu::text::MessageFormat::rootLocale = cVar8;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::MessageFormat::MessageFormat(std::shared_ptr<java::lang::String> pattern)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	// 300    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->ulocale = android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT);
	this->applyPattern(pattern);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/util/ULocale;)V
android::icu::text::MessageFormat::MessageFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	// 325    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->ulocale = locale;
	this->applyPattern(pattern);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/util/Locale;)V
android::icu::text::MessageFormat::MessageFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "locale"    # Ljava/util/Locale;
	android::icu::text::MessageFormat::(pattern, android::icu::util::ULocale::forLocale(locale));
	return;

}
// .method private argNameMatches(ILjava/lang/String;I)Z
bool android::icu::text::MessageFormat::argNameMatches(int partIndex,std::shared_ptr<java::lang::String> argName,int argNumber)
{
	
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	bool cVar0;
	
	//    .param p1, "partIndex"    # I
	//    .param p2, "argName"    # Ljava/lang/String;
	//    .param p3, "argNumber"    # I
	part = this->msgPattern->getPart(partIndex);
	//    .local v0, "part":Landroid/icu/text/MessagePattern$Part;
	if ( part->getType() != android::icu::text::MessagePattern_S_Part_S_Type::ARG_NAME )
		goto label_cond_15;
	cVar0 = this->msgPattern->partSubstringMatches(part, argName);
label_goto_14:
	return cVar0;
	// 389    .line 540
label_cond_15:
	if ( part->getValue() != argNumber )
		goto label_cond_1d;
	cVar0 = 0x1;
	goto label_goto_14;
label_cond_1d:
	cVar0 = 0x0;
	goto label_goto_14;

}
// .method public static autoQuoteApostrophe(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessageFormat::autoQuoteApostrophe(std::shared_ptr<java::lang::String> pattern)
{
	
	char cVar0;
	std::shared_ptr<java::lang::StringBuilder> buf;
	int state;
	int braceCount;
	int i;
	char c;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .param p0, "pattern"    # Ljava/lang/String;
	cVar0 = 0x27;
	buf = std::make_shared<java::lang::StringBuilder>(( pattern->length() * 0x2));
	//    .local v1, "buf":Ljava/lang/StringBuilder;
	state = 0x0;
	//    .local v5, "state":I
	braceCount = 0x0;
	//    .local v0, "braceCount":I
	i = 0x0;
	//    .local v3, "i":I
	//    .local v4, "j":I
label_goto_14:
	if ( i >= pattern->length() )
		goto label_cond_4c;
	c = pattern->charAt(i);
	//    .local v2, "c":C
	// switch
	{
	auto item = ( state );
	if (item == 0) goto label_pswitch_23;
	if (item == 1) goto label_pswitch_2d;
	if (item == 2) goto label_pswitch_39;
	if (item == 3) goto label_pswitch_3f;
	}
label_cond_1d:
label_goto_1d:
	buf->append(c);
	i = ( i + 0x1);
	goto label_goto_14;
	// 465    .line 2450
label_pswitch_23:
	// switch
	{
	auto item = ( c );
	if (item == 0x27) goto label_sswitch_27;
	if (item == 0x7b) goto label_sswitch_29;
	}
	goto label_goto_1d;
	// 471    .line 2452
label_sswitch_27:
	state = 0x1;
	goto label_goto_1d;
	// 478    .line 2455
label_sswitch_29:
	state = 0x3;
	braceCount = ( braceCount + 0x1);
	goto label_goto_1d;
	// 488    .line 2461
label_pswitch_2d:
	// switch
	{
	auto item = ( c );
	if (item == 0x27) goto label_sswitch_35;
	if (item == 0x7b) goto label_sswitch_37;
	if (item == 0x7d) goto label_sswitch_37;
	}
	buf->append(cVar0);
	state = 0x0;
	goto label_goto_1d;
	// 501    .line 2463
label_sswitch_35:
	state = 0x0;
	goto label_goto_1d;
	// 508    .line 2467
label_sswitch_37:
	state = 0x2;
	goto label_goto_1d;
	// 515    .line 2476
label_pswitch_39:
	// switch
	{
	auto item = ( c );
	if (item == 39) goto label_pswitch_3d;
	}
	goto label_goto_1d;
	// 521    .line 2478
label_pswitch_3d:
	state = 0x0;
	goto label_goto_1d;
	// 528    .line 2483
label_pswitch_3f:
	// switch
	{
	auto item = ( c );
	if (item == 123) goto label_pswitch_43;
	if (item == 124) goto label_pswitch_42;
	if (item == 125) goto label_pswitch_46;
	}
label_pswitch_42:
	goto label_goto_1d;
	// 535    .line 2485
label_pswitch_43:
	braceCount = ( braceCount + 0x1);
	goto label_goto_1d;
	// 542    .line 2488
label_pswitch_46:
	braceCount = ( braceCount + -0x1);
	if ( braceCount )     
		goto label_cond_1d;
	state = 0x0;
	goto label_goto_1d;
	// 553    .line 2502
	// 554    .end local v2    # "c":C
label_cond_4c:
	if ( state == 0x1 )
		goto label_cond_52;
	if ( state != 0x2 )
		goto label_cond_55;
label_cond_52:
	buf->append(cVar0);
label_cond_55:
	cVar1 = std::make_shared<java::lang::String>(buf);
	return cVar1;
	// 576    .line 2448
	// 577    nop
	// 579    :pswitch_data_5c
	// 580    .packed-switch 0x0
	// 581        :pswitch_23
	// 582        :pswitch_2d
	// 583        :pswitch_39
	// 584        :pswitch_3f
	// 585    .end packed-switch
	// 587    .line 2450
	// 588    :sswitch_data_68
	// 589    .sparse-switch
	// 590        0x27 -> :sswitch_27
	// 591        0x7b -> :sswitch_29
	// 592    .end sparse-switch
	// 594    .line 2461
	// 595    :sswitch_data_72
	// 596    .sparse-switch
	// 597        0x27 -> :sswitch_35
	// 598        0x7b -> :sswitch_37
	// 599        0x7d -> :sswitch_37
	// 600    .end sparse-switch
	// 602    .line 2476
	// 603    :pswitch_data_80
	// 604    .packed-switch 0x27
	// 605        :pswitch_3d
	// 606    .end packed-switch
	// 608    .line 2483
	// 609    :pswitch_data_86
	// 610    .packed-switch 0x7b
	// 611        :pswitch_43
	// 612        :pswitch_42
	// 613        :pswitch_46
	// 614    .end packed-switch

}
// .method private cacheExplicitFormats()V
void android::icu::text::MessageFormat::cacheExplicitFormats()
{
	
	int i;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	
	if ( !(this->cachedFormatters) )  
		goto label_cond_a;
	this->cachedFormatters->clear();
label_cond_a:
	this->customFormatArgStarts = 0x0;
	//    .local v6, "limit":I
	i = 0x1;
	//    .local v3, "i":I
label_goto_15:
	if ( i >= ( this->msgPattern->countParts() + -0x2) )
		goto label_cond_62;
	part = this->msgPattern->getPart(i);
	//    .local v7, "part":Landroid/icu/text/MessagePattern$Part;
	if ( part->getType() == android::icu::text::MessagePattern_S_Part_S_Type::ARG_START )
		goto label_cond_28;
label_cond_25:
label_goto_25:
	i = ( i + 0x1);
	goto label_goto_15;
	// 678    .line 2367
label_cond_28:
	//    .local v0, "argType":Landroid/icu/text/MessagePattern$ArgType;
	if ( part->getArgType() != android::icu::text::MessagePattern_S_ArgType::SIMPLE )
		goto label_cond_25;
	//    .local v5, "index":I
	i = ( i + 0x2);
	i = ( i + 0x1);
	//    .end local v3    # "i":I
	//    .local v4, "i":I
	//    .local v1, "explicitType":Ljava/lang/String;
	//    .local v8, "style":Ljava/lang/String;
	part = this->msgPattern->getPart(i);
	if ( part->getType() != android::icu::text::MessagePattern_S_Part_S_Type::ARG_STYLE )
		goto label_cond_63;
	i = ( i + 0x1);
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
label_goto_5a:
	//    .local v2, "formatter":Ljava/text/Format;
	this->setArgStartFormat(i, this->createAppropriateFormat(this->msgPattern->getSubstring(this->msgPattern->getPart(i)), std::make_shared<java::lang::String>(std::make_shared<char[]>(""))));
	goto label_goto_25;
	// 758    .line 2382
	// 759    .end local v0    # "argType":Landroid/icu/text/MessagePattern$ArgType;
	// 760    .end local v1    # "explicitType":Ljava/lang/String;
	// 761    .end local v2    # "formatter":Ljava/text/Format;
	// 762    .end local v5    # "index":I
	// 763    .end local v7    # "part":Landroid/icu/text/MessagePattern$Part;
	// 764    .end local v8    # "style":Ljava/lang/String;
label_cond_62:
	return;
	// 768    .end local v3    # "i":I
	// 769    .restart local v0    # "argType":Landroid/icu/text/MessagePattern$ArgType;
	// 770    .restart local v1    # "explicitType":Ljava/lang/String;
	// 771    .restart local v4    # "i":I
	// 772    .restart local v5    # "index":I
	// 773    .restart local v7    # "part":Landroid/icu/text/MessagePattern$Part;
	// 774    .restart local v8    # "style":Ljava/lang/String;
label_cond_63:
	i = i;
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_5a;

}
// .method private createAppropriateFormat(Ljava/lang/String;Ljava/lang/String;)Ljava/text/Format;
std::shared_ptr<java::text::Format> android::icu::text::MessageFormat::createAppropriateFormat(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> style)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<android::icu::text::DecimalFormat> newFormat;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar6;
	std::shared_ptr<android::icu::text::SimpleDateFormat> newFormat;
	std::shared_ptr<android::icu::text::RuleBasedNumberFormat> rbnf;
	std::shared_ptr<java::lang::String> ruleset;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "type"    # Ljava/lang/String;
	//    .param p2, "style"    # Ljava/lang/String;
	cVar0 = 0x3;
	cVar1 = 0x1;
	cVar2 = 0x2;
	cVar3 = 0x0;
	0x0;
	//    .local v1, "newFormat":Ljava/text/Format;
	//    .local v4, "subformatType":I
	// switch
	{
	auto item = ( android::icu::text::MessageFormat::findKeyword(type, android::icu::text::MessageFormat::typeList) );
	if (item == 0) goto label_pswitch_2f;
	if (item == 1) goto label_pswitch_61;
	if (item == 2) goto label_pswitch_95;
	if (item == 3) goto label_pswitch_ca;
	if (item == 4) goto label_pswitch_e3;
	if (item == 5) goto label_pswitch_fc;
	}
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown format type \")))->append(type)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar4;
	// 843    .line 2150
label_pswitch_2f:
	// switch
	{
	auto item = ( android::icu::text::MessageFormat::findKeyword(style, android::icu::text::MessageFormat::modifierList) );
	if (item == 0) goto label_pswitch_45;
	if (item == 1) goto label_pswitch_4c;
	if (item == 2) goto label_pswitch_53;
	if (item == 3) goto label_pswitch_5a;
	}
	//    .end local v1    # "newFormat":Ljava/text/Format;
	cVar6 = std::make_shared<android::icu::text::DecimalFormatSymbols>(this->ulocale);
	newFormat = std::make_shared<android::icu::text::DecimalFormat>(style, cVar6);
	//    .local v1, "newFormat":Ljava/text/Format;
label_goto_44:
	return newFormat;
	// 872    .line 2152
	// 873    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_45:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 884    .line 2155
	// 885    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_4c:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 896    .line 2158
	// 897    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_53:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 908    .line 2161
	// 909    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_5a:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 920    .line 2170
	// 921    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_61:
	// switch
	{
	auto item = ( android::icu::text::MessageFormat::findKeyword(style, android::icu::text::MessageFormat::dateModifierList) );
	if (item == 0) goto label_pswitch_72;
	if (item == 1) goto label_pswitch_79;
	if (item == 2) goto label_pswitch_80;
	if (item == 3) goto label_pswitch_87;
	if (item == 4) goto label_pswitch_8e;
	}
	//    .end local v1    # "newFormat":Ljava/text/Format;
	newFormat = std::make_shared<android::icu::text::SimpleDateFormat>(style, this->ulocale);
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 943    .line 2172
	// 944    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_72:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 955    .line 2175
	// 956    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_79:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 967    .line 2178
	// 968    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_80:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 979    .line 2181
	// 980    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_87:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 991    .line 2184
	// 992    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_8e:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 1003    .line 2192
	// 1004    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_95:
	// switch
	{
	auto item = ( android::icu::text::MessageFormat::findKeyword(style, android::icu::text::MessageFormat::dateModifierList) );
	if (item == 0) goto label_pswitch_a6;
	if (item == 1) goto label_pswitch_ad;
	if (item == 2) goto label_pswitch_b4;
	if (item == 3) goto label_pswitch_bb;
	if (item == 4) goto label_pswitch_c2;
	}
	//    .end local v1    # "newFormat":Ljava/text/Format;
	newFormat = std::make_shared<android::icu::text::SimpleDateFormat>(style, this->ulocale);
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 1026    .line 2194
	// 1027    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_a6:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 1038    .line 2197
	// 1039    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_ad:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 1050    .line 2200
	// 1051    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_b4:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 1062    .line 2203
	// 1063    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_bb:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 1074    .line 2206
	// 1075    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_c2:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 1086    .line 2215
	// 1087    .local v1, "newFormat":Ljava/text/Format;
label_pswitch_ca:
	rbnf = std::make_shared<android::icu::text::RuleBasedNumberFormat>(this->ulocale, cVar1);
	//    .local v2, "rbnf":Landroid/icu/text/RuleBasedNumberFormat;
	ruleset = style->trim();
	//    .local v3, "ruleset":Ljava/lang/String;
	if ( !(ruleset->length()) )  
		goto label_cond_de;
	try {
	//label_try_start_db:
	rbnf->setDefaultRuleSet(ruleset);
	//label_try_end_de:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e1;
	}
	//    .catch Ljava/lang/Exception; {:try_start_db .. :try_end_de} :catch_e1
label_cond_de:
label_goto_de:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 1124    .line 2222
	// 1125    .local v1, "newFormat":Ljava/text/Format;
label_catch_e1:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	goto label_goto_de;
	// 1132    .line 2231
	// 1133    .end local v0    # "e":Ljava/lang/Exception;
	// 1134    .end local v2    # "rbnf":Landroid/icu/text/RuleBasedNumberFormat;
	// 1135    .end local v3    # "ruleset":Ljava/lang/String;
label_pswitch_e3:
	rbnf = std::make_shared<android::icu::text::RuleBasedNumberFormat>(this->ulocale, cVar2);
	//    .restart local v2    # "rbnf":Landroid/icu/text/RuleBasedNumberFormat;
	ruleset = style->trim();
	//    .restart local v3    # "ruleset":Ljava/lang/String;
	if ( !(ruleset->length()) )  
		goto label_cond_f7;
	try {
	//label_try_start_f4:
	rbnf->setDefaultRuleSet(ruleset);
	//label_try_end_f7:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_fa;
	}
	//    .catch Ljava/lang/Exception; {:try_start_f4 .. :try_end_f7} :catch_fa
label_cond_f7:
label_goto_f7:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 1172    .line 2238
	// 1173    .local v1, "newFormat":Ljava/text/Format;
label_catch_fa:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "e":Ljava/lang/Exception;
	goto label_goto_f7;
	// 1180    .line 2247
	// 1181    .end local v0    # "e":Ljava/lang/Exception;
	// 1182    .end local v2    # "rbnf":Landroid/icu/text/RuleBasedNumberFormat;
	// 1183    .end local v3    # "ruleset":Ljava/lang/String;
label_pswitch_fc:
	rbnf = std::make_shared<android::icu::text::RuleBasedNumberFormat>(this->ulocale, cVar0);
	//    .restart local v2    # "rbnf":Landroid/icu/text/RuleBasedNumberFormat;
	ruleset = style->trim();
	//    .restart local v3    # "ruleset":Ljava/lang/String;
	if ( !(ruleset->length()) )  
		goto label_cond_110;
	try {
	//label_try_start_10d:
	rbnf->setDefaultRuleSet(ruleset);
	//label_try_end_110:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_113;
	}
	//    .catch Ljava/lang/Exception; {:try_start_10d .. :try_end_110} :catch_113
label_cond_110:
label_goto_110:
	//    .local v1, "newFormat":Ljava/text/Format;
	goto label_goto_44;
	// 1220    .line 2254
	// 1221    .local v1, "newFormat":Ljava/text/Format;
label_catch_113:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "e":Ljava/lang/Exception;
	goto label_goto_110;
	// 1228    .line 2148
	// 1229    nop
	// 1231    :pswitch_data_116
	// 1232    .packed-switch 0x0
	// 1233        :pswitch_2f
	// 1234        :pswitch_61
	// 1235        :pswitch_95
	// 1236        :pswitch_ca
	// 1237        :pswitch_e3
	// 1238        :pswitch_fc
	// 1239    .end packed-switch
	// 1241    .line 2150
	// 1242    :pswitch_data_126
	// 1243    .packed-switch 0x0
	// 1244        :pswitch_45
	// 1245        :pswitch_4c
	// 1246        :pswitch_53
	// 1247        :pswitch_5a
	// 1248    .end packed-switch
	// 1250    .line 2170
	// 1251    :pswitch_data_132
	// 1252    .packed-switch 0x0
	// 1253        :pswitch_72
	// 1254        :pswitch_79
	// 1255        :pswitch_80
	// 1256        :pswitch_87
	// 1257        :pswitch_8e
	// 1258    .end packed-switch
	// 1260    .line 2192
	// 1261    :pswitch_data_140
	// 1262    .packed-switch 0x0
	// 1263        :pswitch_a6
	// 1264        :pswitch_ad
	// 1265        :pswitch_b4
	// 1266        :pswitch_bb
	// 1267        :pswitch_c2
	// 1268    .end packed-switch

}
// .method private static findChoiceSubMessage(Landroid/icu/text/MessagePattern;ID)I
int android::icu::text::MessageFormat::findChoiceSubMessage(std::shared_ptr<android::icu::text::MessagePattern> pattern,int cVar2,double number)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> type;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	auto boundary;
	int cVar4;
	
	//    .param p0, "pattern"    # Landroid/icu/text/MessagePattern;
	//    .param p1, "partIndex"    # I
	//    .param p2, "number"    # D
	cVar0 = 0x1;
	cVar1 = 0x0;
	//    .local v3, "count":I
	cVar2 = ( cVar2 + 0x2);
label_cond_8:
	//    .local v4, "msgStart":I
	cVar2 = pattern->getLimitPartIndex(cVar2);
	cVar2 = ( cVar2 + 0x1);
	if ( cVar2 <  pattern->countParts() )
		goto label_cond_12;
label_goto_11:
	return cVar2;
	// 1310    .line 1844
label_cond_12:
	cVar2 = ( cVar2 + 0x1);
	//    .end local p1    # "partIndex":I
	//    .local v6, "partIndex":I
	part = pattern->getPart(cVar2);
	//    .local v5, "part":Landroid/icu/text/MessagePattern$Part;
	type = part->getType();
	//    .local v8, "type":Landroid/icu/text/MessagePattern$Part$Type;
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::ARG_LIMIT )
		goto label_cond_22;
	cVar2 = cVar2;
	//    .end local v6    # "partIndex":I
	//    .restart local p1    # "partIndex":I
	goto label_goto_11;
	// 1339    .line 1852
	// 1340    .end local p1    # "partIndex":I
	// 1341    .restart local v6    # "partIndex":I
label_cond_22:
	if ( android::icu::text::MessageFormat::_assertionsDisabled )     
		goto label_cond_32;
	if ( type->hasNumericValue() )     
		goto label_cond_32;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 1359    .line 1853
label_cond_32:
	boundary = pattern->getNumericValue(part);
	//    .local v0, "boundary":D
	cVar2 = ( cVar2 + 0x1);
	//    .end local v6    # "partIndex":I
	//    .restart local p1    # "partIndex":I
	//    .local v7, "selectorIndex":I
	//    .local v2, "boundaryChar":C
	if ( pattern->getPatternString()->charAt(pattern->getPatternIndex(cVar2)) != 0x3c )
		goto label_cond_54;
	if ( (number < boundary) <= 0 )
		goto label_cond_52;
	cVar4 = cVar0;
label_goto_4d:
	if ( !(( cVar4 ^ 0x1)) )  
		goto label_cond_8;
	goto label_goto_11;
label_cond_52:
	cVar4 = cVar1;
	goto label_goto_4d;
label_cond_54:
	if ( (number < boundary) < 0 ) 
		goto label_cond_5a;
	cVar4 = cVar0;
	goto label_goto_4d;
label_cond_5a:
	cVar4 = cVar1;
	goto label_goto_4d;

}
// .method private findFirstPluralNumberArg(ILjava/lang/String;)I
int android::icu::text::MessageFormat::findFirstPluralNumberArg(int msgStart,std::shared_ptr<java::lang::String> argName)
{
	
	int i;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	auto type;
	auto argType;
	
	//    .param p1, "msgStart"    # I
	//    .param p2, "argName"    # Ljava/lang/String;
	i = ( msgStart + 0x1);
	//    .local v1, "i":I
label_goto_3:
	part = this->msgPattern->getPart(i);
	//    .local v2, "part":Landroid/icu/text/MessagePattern$Part;
	type = part->getType();
	//    .local v3, "type":Landroid/icu/text/MessagePattern$Part$Type;
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::MSG_LIMIT )
		goto label_cond_12;
	return 0x0;
	// 1459    .line 1977
label_cond_12:
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::REPLACE_NUMBER )
		goto label_cond_18;
	return -0x1;
	// 1470    .line 1980
label_cond_18:
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::ARG_START )
		goto label_cond_45;
	argType = part->getArgType();
	//    .local v0, "argType":Landroid/icu/text/MessagePattern$ArgType;
	if ( !(argName->length()) )  
		goto label_cond_3f;
	if ( argType == android::icu::text::MessagePattern_S_ArgType::NONE )
		goto label_cond_2e;
	if ( argType != android::icu::text::MessagePattern_S_ArgType::SIMPLE )
		goto label_cond_3f;
label_cond_2e:
	if ( !(this->msgPattern->partSubstringMatches(this->msgPattern->getPart(( i + 0x1)), argName)) )  
		goto label_cond_3f;
	return i;
	// 1519    .line 1988
label_cond_3f:
	i = this->msgPattern->getLimitPartIndex(i);
	//    .end local v0    # "argType":Landroid/icu/text/MessagePattern$ArgType;
label_cond_45:
	i = ( i + 0x1);
	goto label_goto_3;

}
// .method private static final findKeyword(Ljava/lang/String;[Ljava/lang/String;)I
int android::icu::text::MessageFormat::findKeyword(std::shared_ptr<java::lang::String> s,std::shared_ptr<std::vector<java::lang::String>> list)
{
	
	int i;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "list"    # [Ljava/lang/String;
	i = 0x0;
	//    .local v0, "i":I
label_goto_b:
	if ( i >= list->size() )
		goto label_cond_1a;
	if ( !(android::icu::impl::PatternProps::trimWhiteSpace(s)->toLowerCase(android::icu::text::MessageFormat::rootLocale)->equals(list[i])) )  
		goto label_cond_17;
	return i;
	// 1573    .line 2271
label_cond_17:
	i = ( i + 0x1);
	goto label_goto_b;
	// 1579    .line 2275
label_cond_1a:
	return -0x1;

}
// .method private findOtherSubMessage(I)I
int android::icu::text::MessageFormat::findOtherSubMessage(int cVar0)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	auto type;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	//    .param p1, "partIndex"    # I
	//    .local v0, "count":I
	//    .local v1, "part":Landroid/icu/text/MessagePattern$Part;
	if ( !(this->msgPattern->getPart(cVar0)->getType()->hasNumericValue()) )  
		goto label_cond_18;
	cVar0 = ( cVar0 + 0x1);
label_cond_18:
label_goto_18:
	cVar0 = ( cVar0 + 0x1);
	//    .end local p1    # "partIndex":I
	//    .local v2, "partIndex":I
	part = this->msgPattern->getPart(cVar0);
	type = part->getType();
	//    .local v3, "type":Landroid/icu/text/MessagePattern$Part$Type;
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::ARG_LIMIT )
		goto label_cond_2b;
	cVar0 = cVar0;
	//    .end local v2    # "partIndex":I
	//    .restart local p1    # "partIndex":I
label_cond_29:
	return 0x0;
	// 1655    .line 1952
	// 1656    .end local p1    # "partIndex":I
	// 1657    .restart local v2    # "partIndex":I
label_cond_2b:
	if ( android::icu::text::MessageFormat::_assertionsDisabled )     
		goto label_cond_39;
	if ( type == android::icu::text::MessagePattern_S_Part_S_Type::ARG_SELECTOR )
		goto label_cond_39;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 1673    .line 1954
label_cond_39:
	if ( !(this->msgPattern->partSubstringMatches(part, std::make_shared<java::lang::String>(std::make_shared<char[]>("other")))) )  
		goto label_cond_45;
	return cVar0;
	// 1688    .line 1957
label_cond_45:
	if ( !(this->msgPattern->getPartType(cVar0)->hasNumericValue()) )  
		goto label_cond_5e;
	cVar0 = ( cVar0 + 0x1);
	//    .end local v2    # "partIndex":I
	//    .restart local p1    # "partIndex":I
label_goto_53:
	cVar0 = this->msgPattern->getLimitPartIndex(cVar0);
	cVar0 = ( cVar0 + 0x1);
	if ( cVar0 >= this->msgPattern->countParts() )
		goto label_cond_29;
	goto label_goto_18;
	// 1722    .end local p1    # "partIndex":I
	// 1723    .restart local v2    # "partIndex":I
label_cond_5e:
	cVar0 = cVar0;
	//    .end local v2    # "partIndex":I
	//    .restart local p1    # "partIndex":I
	goto label_goto_53;

}
// .method public static format(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessageFormat::format(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> arguments)
{
	
	std::shared_ptr<android::icu::text::MessageFormat> temp;
	
	//    .param p0, "pattern"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1736        value = {
	// 1737            "(",
	// 1738            "Ljava/lang/String;",
	// 1739            "Ljava/util/Map",
	// 1740            "<",
	// 1741            "Ljava/lang/String;",
	// 1742            "Ljava/lang/Object;",
	// 1743            ">;)",
	// 1744            "Ljava/lang/String;"
	// 1745        }
	// 1746    .end annotation
	//    .local p1, "arguments":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
	temp = std::make_shared<android::icu::text::MessageFormat>(pattern);
	//    .local v0, "temp":Landroid/icu/text/MessageFormat;
	return temp->format(arguments);

}
// .method public static varargs format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessageFormat::format(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<std::vector<java::lang::Object>> arguments)
{
	
	std::shared_ptr<android::icu::text::MessageFormat> temp;
	
	//    .param p0, "pattern"    # Ljava/lang/String;
	//    .param p1, "arguments"    # [Ljava/lang/Object;
	temp = std::make_shared<android::icu::text::MessageFormat>(pattern);
	//    .local v0, "temp":Landroid/icu/text/MessageFormat;
	return temp->format(arguments);

}
// .method private format(ILandroid/icu/text/MessageFormat$PluralSelectorContext;[Ljava/lang/Object;Ljava/util/Map;Landroid/icu/text/MessageFormat$AppendableWrapper;Ljava/text/FieldPosition;)V
void android::icu::text::MessageFormat::format(int msgStart,std::shared_ptr<android::icu::text::MessageFormat_S_PluralSelectorContext> pluralNumber,std::shared_ptr<std::vector<java::lang::Object>> args,std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> argsMap,std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> dest,std::shared_ptr<java::text::FieldPosition> fp)
{
	
	int prevIndex;
	int i;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	auto type;
	int argLimit;
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> argType;
	int noArg;
	int argId;
	std::shared_ptr<java::lang::String> argName;
	int argNumber;
	auto argId;
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::Object> fp;
	std::shared_ptr<java::text::Format> formatter;
	auto subMsgString;
	std::shared_ptr<android::icu::text::MessageFormat> subMsgFormat;
	std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::util::Map> i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<android::icu::text::MessageFormat_S_PluralSelectorProvider> cVar7;
	std::shared_ptr<java::lang::Number> number;
	std::shared_ptr<android::icu::text::MessageFormat_S_PluralSelectorContext> context;
	std::shared_ptr<android::icu::text::MessageFormat_S_PluralSelectorProvider> cVar8;
	std::shared_ptr<java::lang::IllegalStateException> cVar9;
	std::shared_ptr<java::lang::StringBuilder> cVar10;
	
	//    .param p1, "msgStart"    # I
	//    .param p2, "pluralNumber"    # Landroid/icu/text/MessageFormat$PluralSelectorContext;
	//    .param p3, "args"    # [Ljava/lang/Object;
	//    .param p5, "dest"    # Landroid/icu/text/MessageFormat$AppendableWrapper;
	//    .param p6, "fp"    # Ljava/text/FieldPosition;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1792        value = {
	// 1793            "(I",
	// 1794            "Landroid/icu/text/MessageFormat$PluralSelectorContext;",
	// 1795            "[",
	// 1796            "Ljava/lang/Object;",
	// 1797            "Ljava/util/Map",
	// 1798            "<",
	// 1799            "Ljava/lang/String;",
	// 1800            "Ljava/lang/Object;",
	// 1801            ">;",
	// 1802            "Landroid/icu/text/MessageFormat$AppendableWrapper;",
	// 1803            "Ljava/text/FieldPosition;",
	// 1804            ")V"
	// 1805        }
	// 1806    .end annotation
	//    .local p4, "argsMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
	//    .local v32, "msgString":Ljava/lang/String;
	prevIndex = this->msgPattern->getPart(msgStart)->getLimit();
	//    .local v38, "prevIndex":I
	i = ( msgStart + 0x1);
	//    .local v11, "i":I
label_goto_18:
	part = this->msgPattern->getPart(i);
	//    .local v36, "part":Landroid/icu/text/MessagePattern$Part;
	type = part->getType();
	//    .local v40, "type":Landroid/icu/text/MessagePattern$Part$Type;
	//    .local v31, "index":I
	dest->append(this->msgPattern->getPatternString(), prevIndex, part->getIndex());
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::MSG_LIMIT )
		goto label_cond_3a;
	return;
	// 1884    .line 1578
label_cond_3a:
	prevIndex = part->getLimit();
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::REPLACE_NUMBER )
		goto label_cond_70;
	if ( !(pluralNumber->forReplaceNumber) )  
		goto label_cond_62;
	dest->formatAndAppend(pluralNumber->formatter, pluralNumber->number, pluralNumber->numberString);
label_cond_5f:
label_goto_5f:
	i = ( i + 0x1);
	goto label_goto_18;
	// 1934    .line 1585
label_cond_62:
	dest->formatAndAppend(this->getStockNumberFormatter(), pluralNumber->number);
	goto label_goto_5f;
	// 1950    .line 1589
label_cond_70:
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::ARG_START )
		goto label_cond_5f;
	argLimit = this->msgPattern->getLimitPartIndex(i);
	//    .local v27, "argLimit":I
	argType = part->getArgType();
	//    .local v29, "argType":Landroid/icu/text/MessagePattern$ArgType;
	i = ( i + 0x1);
	part = this->msgPattern->getPart(i);
	noArg = 0x0;
	//    .local v33, "noArg":Z
	argId = 0x0;
	//    .local v26, "argId":Ljava/lang/Object;
	argName = this->msgPattern->getSubstring(part);
	//    .local v12, "argName":Ljava/lang/String;
	if ( !(args) )  
		goto label_cond_104;
	argNumber = part->getValue();
	//    .local v28, "argNumber":I
	if ( !(android::icu::text::MessageFormat_S_AppendableWrapper::-get0(dest)) )  
		goto label_cond_aa;
	argId = java::lang::Integer::valueOf(argNumber);
	//    .end local v26    # "argId":Ljava/lang/Object;
label_cond_aa:
	if ( argNumber < 0 ) 
		goto label_cond_ff;
	if ( argNumber >= args->size() )
		goto label_cond_ff;
	cVar0 = args[argNumber];
	//    .end local v28    # "argNumber":I
label_goto_b5:
	i = ( i + 0x1);
	//    .local v37, "prevDestLength":I
	0x0;
	//    .local v30, "formatter":Ljava/text/Format;
	if ( !(noArg) )  
		goto label_cond_11c;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	dest->append(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("{")))->append(argName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("}")))->toString());
	//    .end local v11    # "i":I
	//    .end local v12    # "argName":Ljava/lang/String;
	//    .end local v30    # "formatter":Ljava/text/Format;
label_goto_df:
	fp = this->updateMetaData(dest, android::icu::text::MessageFormat_S_AppendableWrapper::-get1(dest), fp, argId);
	prevIndex = this->msgPattern->getPart(argLimit)->getLimit();
	i = argLimit;
	//    .restart local v11    # "i":I
	goto label_goto_5f;
	// 2129    .line 1608
	// 2130    .end local v37    # "prevDestLength":I
	// 2131    .restart local v12    # "argName":Ljava/lang/String;
	// 2132    .restart local v28    # "argNumber":I
label_cond_ff:
	cVar0 = 0x0;
	//    .local v25, "arg":Ljava/lang/Object;
	noArg = 0x1;
	goto label_goto_b5;
	// 2142    .line 1612
	// 2143    .end local v25    # "arg":Ljava/lang/Object;
	// 2144    .end local v28    # "argNumber":I
	// 2145    .restart local v26    # "argId":Ljava/lang/Object;
label_cond_104:
	argId = argName;
	if ( !(argsMap) )  
		goto label_cond_117;
	if ( !(argsMap->containsKey(argName)) )  
		goto label_cond_117;
	cVar0 = argsMap->get(argName);
	//    .restart local v25    # "arg":Ljava/lang/Object;
	goto label_goto_b5;
	// 2170    .line 1616
	// 2171    .end local v25    # "arg":Ljava/lang/Object;
label_cond_117:
	cVar0 = 0x0;
	//    .restart local v25    # "arg":Ljava/lang/Object;
	noArg = 0x1;
	goto label_goto_b5;
	// 2181    .line 1625
	// 2182    .end local v25    # "arg":Ljava/lang/Object;
	// 2183    .end local v26    # "argId":Ljava/lang/Object;
	// 2184    .restart local v30    # "formatter":Ljava/text/Format;
	// 2185    .restart local v37    # "prevDestLength":I
label_cond_11c:
	if ( cVar0 )     
		goto label_cond_127;
	dest->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("null")));
	goto label_goto_df;
	// 2198    .line 1627
label_cond_127:
	if ( !(pluralNumber) )  
		goto label_cond_15f;
	if ( pluralNumber->numberArgIndex != ( i + -0x2) )
		goto label_cond_15f;
	if ( (pluralNumber->offset < 0x0) )     
		goto label_cond_153;
	dest->formatAndAppend(pluralNumber->formatter, pluralNumber->number, pluralNumber->numberString);
	goto label_goto_df;
	// 2246    .line 1634
label_cond_153:
	dest->formatAndAppend(pluralNumber->formatter, cVar0);
	goto label_goto_df;
	// 2260    .line 1636
label_cond_15f:
	if ( !(this->cachedFormatters) )  
		goto label_cond_1ef;
	formatter = this->cachedFormatters->get(java::lang::Integer::valueOf(( i + -0x2)));
	//    .end local v30    # "formatter":Ljava/text/Format;
	formatter->checkCast("java::text::Format");
	//    .local v30, "formatter":Ljava/text/Format;
	if ( !(formatter) )  
		goto label_cond_1ef;
	if ( formatter->instanceOf("java::text::ChoiceFormat") )     
		goto label_cond_189;
	if ( formatter->instanceOf("android::icu::text::PluralFormat") )     
		goto label_cond_189;
	if ( !(formatter->instanceOf("android::icu::text::SelectFormat")) )  
		goto label_cond_1e4;
label_cond_189:
	subMsgString = formatter->format(cVar0);
	//    .local v39, "subMsgString":Ljava/lang/String;
	if ( subMsgString->indexOf(0x7b) >= 0 )
		goto label_cond_1b1;
	if ( subMsgString->indexOf(0x27) < 0 ) 
		goto label_cond_1ca;
	if ( !(( this->msgPattern->jdkAposMode() ^ 0x1)) )  
		goto label_cond_1ca;
label_cond_1b1:
	subMsgFormat = std::make_shared<android::icu::text::MessageFormat>(subMsgString, this->ulocale);
	//    .local v6, "subMsgFormat":Landroid/icu/text/MessageFormat;
	i = dest;
	subMsgFormat->format(0x0, 0x0, args, argsMap, i, 0x0);
	goto label_goto_df;
	// 2387    .line 1648
	// 2388    .end local v6    # "subMsgFormat":Landroid/icu/text/MessageFormat;
label_cond_1ca:
	if ( android::icu::text::MessageFormat_S_AppendableWrapper::-get0(dest) )     
		goto label_cond_1d9;
	dest->append(subMsgString);
	goto label_goto_df;
	// 2405    .line 1657
label_cond_1d9:
	dest->formatAndAppend(formatter, cVar0);
	goto label_goto_df;
	// 2417    .line 1660
	// 2418    .end local v39    # "subMsgString":Ljava/lang/String;
label_cond_1e4:
	dest->formatAndAppend(formatter, cVar0);
	goto label_goto_df;
	// 2430    .line 1663
	// 2431    .end local v30    # "formatter":Ljava/text/Format;
label_cond_1ef:
	if ( argType == android::icu::text::MessagePattern_S_ArgType::NONE )
		goto label_cond_20b;
	if ( !(this->cachedFormatters) )  
		goto label_cond_23c;
	if ( !(this->cachedFormatters->containsKey(java::lang::Integer::valueOf(( i + -0x2)))) )  
		goto label_cond_23c;
label_cond_20b:
	if ( !(cVar0->instanceOf("java::lang::Number")) )  
		goto label_cond_21e;
	dest->formatAndAppend(this->getStockNumberFormatter(), cVar0);
	goto label_goto_df;
	// 2484    .line 1670
label_cond_21e:
	if ( !(cVar0->instanceOf("java::util::Date")) )  
		goto label_cond_231;
	dest->formatAndAppend(this->getStockDateFormatter(), cVar0);
	goto label_goto_df;
	// 2505    .line 1674
label_cond_231:
	dest->append(cVar0->toString());
	goto label_goto_df;
	// 2517    .line 1676
label_cond_23c:
	if ( argType != android::icu::text::MessagePattern_S_ArgType::CHOICE )
		goto label_cond_28d;
	if ( cVar0->instanceOf("java::lang::Number") )     
		goto label_cond_26f;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->append(cVar0)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' is not a Number")))->toString());
	// throw
	throw cVar3;
	// 2569    .line 1680
label_cond_26f:
	cVar0->checkCast("java::lang::Number");
	//    .local v34, "number":D
	//    .local v8, "subMsgStart":I
	i = argsMap;
	this->formatComplexSubMessage(android::icu::text::MessageFormat::findChoiceSubMessage(this->msgPattern, i, cVar0->doubleValue()), 0x0, args, i, dest);
	goto label_goto_df;
	// 2605    .line 1683
	// 2606    .end local v8    # "subMsgStart":I
	// 2607    .end local v34    # "number":D
label_cond_28d:
	if ( !(argType->hasPluralStyle()) )  
		goto label_cond_32f;
	if ( cVar0->instanceOf("java::lang::Number") )     
		goto label_cond_2c0;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->append(cVar0)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' is not a Number")))->toString());
	// throw
	throw cVar5;
	// 2659    .line 1688
label_cond_2c0:
	if ( argType != android::icu::text::MessagePattern_S_ArgType::PLURAL )
		goto label_cond_315;
	if ( this->pluralProvider )     
		goto label_cond_2d9;
	cVar7 = std::make_shared<android::icu::text::MessageFormat_S_PluralSelectorProvider>(this, android::icu::text::PluralRules_S_PluralType::CARDINAL);
	this->pluralProvider = cVar7;
label_cond_2d9:
	//    .local v18, "selector":Landroid/icu/text/MessageFormat$PluralSelectorProvider;
label_goto_2df:
	number = cVar0;
	number->checkCast("java::lang::Number");
	//    .local v13, "number":Ljava/lang/Number;
	//    .local v14, "offset":D
	context = std::make_shared<android::icu::text::MessageFormat_S_PluralSelectorContext>(i, argName, number, this->msgPattern->getPluralOffset(i), 0x0);
	//    .local v10, "context":Landroid/icu/text/MessageFormat$PluralSelectorContext;
	//    .restart local v8    # "subMsgStart":I
	this->formatComplexSubMessage(android::icu::text::PluralFormat::findSubMessage(this->msgPattern, i, selector, context, number->doubleValue()), context, args, argsMap, dest);
	goto label_goto_df;
	// 2759    .line 1694
	// 2760    .end local v8    # "subMsgStart":I
	// 2761    .end local v10    # "context":Landroid/icu/text/MessageFormat$PluralSelectorContext;
	// 2762    .end local v13    # "number":Ljava/lang/Number;
	// 2763    .end local v14    # "offset":D
	// 2764    .end local v18    # "selector":Landroid/icu/text/MessageFormat$PluralSelectorProvider;
label_cond_315:
	if ( this->ordinalProvider )     
		goto label_cond_328;
	cVar8 = std::make_shared<android::icu::text::MessageFormat_S_PluralSelectorProvider>(this, android::icu::text::PluralRules_S_PluralType::ORDINAL);
	this->ordinalProvider = cVar8;
label_cond_328:
	//    .restart local v18    # "selector":Landroid/icu/text/MessageFormat$PluralSelectorProvider;
	goto label_goto_2df;
	// 2796    .line 1706
	// 2797    .end local v18    # "selector":Landroid/icu/text/MessageFormat$PluralSelectorProvider;
label_cond_32f:
	if ( argType != android::icu::text::MessagePattern_S_ArgType::SELECT )
		goto label_cond_352;
	//    .restart local v8    # "subMsgStart":I
	this->formatComplexSubMessage(android::icu::text::SelectFormat::findSubMessage(this->msgPattern, i, cVar0->toString()), 0x0, args, argsMap, dest);
	goto label_goto_df;
	// 2836    .line 1711
	// 2837    .end local v8    # "subMsgStart":I
label_cond_352:
	cVar10 = std::make_shared<java::lang::StringBuilder>();
	cVar9 = std::make_shared<java::lang::IllegalStateException>(cVar10->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unexpected argType ")))->append(argType)->toString());
	// throw
	throw cVar9;

}
// .method private format(Ljava/lang/Object;Landroid/icu/text/MessageFormat$AppendableWrapper;Ljava/text/FieldPosition;)V
void android::icu::text::MessageFormat::format(std::shared_ptr<java::lang::Object> arguments,std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> result,std::shared_ptr<java::text::FieldPosition> fp)
{
	
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	
	//    .param p1, "arguments"    # Ljava/lang/Object;
	//    .param p2, "result"    # Landroid/icu/text/MessageFormat$AppendableWrapper;
	//    .param p3, "fp"    # Ljava/text/FieldPosition;
	cVar0 = 0x0;
	if ( !(arguments) )  
		goto label_cond_7;
	if ( !(arguments->instanceOf("java::util::Map")) )  
		goto label_cond_d;
label_cond_7:
	arguments->checkCast("java::util::Map");
	//    .end local p1    # "arguments":Ljava/lang/Object;
	this->format(cVar0, arguments, result, fp);
label_goto_c:
	return;
	// 2895    .line 2083
	// 2896    .restart local p1    # "arguments":Ljava/lang/Object;
label_cond_d:
	arguments->checkCast("std::vector<java::lang::Object>");
	//    .end local p1    # "arguments":Ljava/lang/Object;
	this->format(arguments, cVar0, result, fp);
	goto label_goto_c;

}
// .method private format([Ljava/lang/Object;Ljava/util/Map;Landroid/icu/text/MessageFormat$AppendableWrapper;Ljava/text/FieldPosition;)V
void android::icu::text::MessageFormat::format(std::shared_ptr<std::vector<java::lang::Object>> arguments,std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> argsMap,std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> dest,std::shared_ptr<java::text::FieldPosition> fp)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "arguments"    # [Ljava/lang/Object;
	//    .param p3, "dest"    # Landroid/icu/text/MessageFormat$AppendableWrapper;
	//    .param p4, "fp"    # Ljava/text/FieldPosition;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2912        value = {
	// 2913            "([",
	// 2914            "Ljava/lang/Object;",
	// 2915            "Ljava/util/Map",
	// 2916            "<",
	// 2917            "Ljava/lang/String;",
	// 2918            "Ljava/lang/Object;",
	// 2919            ">;",
	// 2920            "Landroid/icu/text/MessageFormat$AppendableWrapper;",
	// 2921            "Ljava/text/FieldPosition;",
	// 2922            ")V"
	// 2923        }
	// 2924    .end annotation
	//    .local p2, "argsMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
	if ( !(arguments) )  
		goto label_cond_14;
	if ( !(this->msgPattern->hasNamedArguments()) )  
		goto label_cond_14;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("This method is not available in MessageFormat objects that use alphanumeric argument names.")));
	// throw
	throw cVar0;
	// 2952    .line 2101
label_cond_14:
	this->format(0x0, 0x0, arguments, argsMap, dest, fp);
	return;

}
// .method private formatComplexSubMessage(ILandroid/icu/text/MessageFormat$PluralSelectorContext;[Ljava/lang/Object;Ljava/util/Map;Landroid/icu/text/MessageFormat$AppendableWrapper;)V
void android::icu::text::MessageFormat::formatComplexSubMessage(int msgStart,std::shared_ptr<android::icu::text::MessageFormat_S_PluralSelectorContext> pluralNumber,std::shared_ptr<std::vector<java::lang::Object>> args,std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> argsMap,std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> dest)
{
	
	std::shared_ptr<java::lang::String> msgString;
	std::shared_ptr<java::lang::StringBuilder> sb;
	int prevIndex;
	int i;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	auto type;
	int index;
	std::shared_ptr<java::lang::String> subMsgString;
	std::shared_ptr<android::icu::text::MessageFormat> subMsgFormat;
	
	//    .param p1, "msgStart"    # I
	//    .param p2, "pluralNumber"    # Landroid/icu/text/MessageFormat$PluralSelectorContext;
	//    .param p3, "args"    # [Ljava/lang/Object;
	//    .param p5, "dest"    # Landroid/icu/text/MessageFormat$AppendableWrapper;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2979        value = {
	// 2980            "(I",
	// 2981            "Landroid/icu/text/MessageFormat$PluralSelectorContext;",
	// 2982            "[",
	// 2983            "Ljava/lang/Object;",
	// 2984            "Ljava/util/Map",
	// 2985            "<",
	// 2986            "Ljava/lang/String;",
	// 2987            "Ljava/lang/Object;",
	// 2988            ">;",
	// 2989            "Landroid/icu/text/MessageFormat$AppendableWrapper;",
	// 2990            ")V"
	// 2991        }
	// 2992    .end annotation
	//    .local p4, "argsMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
	if ( this->msgPattern->jdkAposMode() )     
		goto label_cond_1b;
	this->format(msgStart, pluralNumber, args, argsMap, dest, 0x0);
	return;
	// 3027    .line 1732
label_cond_1b:
	msgString = this->msgPattern->getPatternString();
	//    .local v10, "msgString":Ljava/lang/String;
	sb = 0x0;
	//    .local v13, "sb":Ljava/lang/StringBuilder;
	prevIndex = this->msgPattern->getPart(msgStart)->getLimit();
	//    .local v12, "prevIndex":I
	//    .end local v13    # "sb":Ljava/lang/StringBuilder;
	//    .local v8, "i":I
label_cond_34:
label_goto_34:
	i = ( i + 0x1);
	part = this->msgPattern->getPart(i);
	//    .local v11, "part":Landroid/icu/text/MessagePattern$Part;
	type = part->getType();
	//    .local v15, "type":Landroid/icu/text/MessagePattern$Part$Type;
	index = part->getIndex();
	//    .local v9, "index":I
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::MSG_LIMIT )
		goto label_cond_7f;
	if ( sb )     
		goto label_cond_76;
	subMsgString = msgString->substring(prevIndex, index);
	//    .local v14, "subMsgString":Ljava/lang/String;
label_goto_50:
	if ( subMsgString->indexOf(0x7b) < 0 ) 
		goto label_cond_e0;
	subMsgFormat = std::make_shared<android::icu::text::MessageFormat>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), this->ulocale);
	//    .local v1, "subMsgFormat":Landroid/icu/text/MessageFormat;
	subMsgFormat->applyPattern(subMsgString, android::icu::text::MessagePattern_S_ApostropheMode::DOUBLE_REQUIRED);
	subMsgFormat->format(0x0, 0x0, args, argsMap, dest, 0x0);
	//    .end local v1    # "subMsgFormat":Landroid/icu/text/MessageFormat;
label_goto_75:
	return;
	// 3150    .line 1744
	// 3151    .end local v14    # "subMsgString":Ljava/lang/String;
label_cond_76:
	subMsgString = sb->append(msgString, prevIndex, index)->toString();
	//    .restart local v14    # "subMsgString":Ljava/lang/String;
	goto label_goto_50;
	// 3164    .line 1747
	// 3165    .end local v14    # "subMsgString":Ljava/lang/String;
label_cond_7f:
	if ( type == android::icu::text::MessagePattern_S_Part_S_Type::REPLACE_NUMBER )
		goto label_cond_87;
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::SKIP_SYNTAX )
		goto label_cond_b7;
label_cond_87:
	if ( sb )     
		goto label_cond_8e;
	sb = std::make_shared<java::lang::StringBuilder>();
label_cond_8e:
	sb->append(msgString, prevIndex, index);
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::REPLACE_NUMBER )
		goto label_cond_a2;
	if ( !(pluralNumber->forReplaceNumber) )  
		goto label_cond_a7;
	sb->append(pluralNumber->numberString);
label_cond_a2:
label_goto_a2:
	prevIndex = part->getLimit();
	goto label_goto_34;
	// 3216    .line 1757
label_cond_a7:
	sb->append(this->getStockNumberFormatter()->format(pluralNumber->number));
	goto label_goto_a2;
	// 3234    .line 1761
label_cond_b7:
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::ARG_START )
		goto label_cond_34;
	if ( sb )     
		goto label_cond_c2;
	sb = std::make_shared<java::lang::StringBuilder>();
label_cond_c2:
	sb->append(msgString, prevIndex, index);
	prevIndex = index;
	i = this->msgPattern->getLimitPartIndex(i);
	index = this->msgPattern->getPart(i)->getLimit();
	android::icu::text::MessagePattern::appendReducedApostrophes(msgString, prevIndex, index, sb);
	prevIndex = index;
	goto label_goto_34;
	// 3285    .line 1778
	// 3286    .restart local v14    # "subMsgString":Ljava/lang/String;
label_cond_e0:
	dest->append(subMsgString);
	goto label_goto_75;

}
// .method private getArgName(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessageFormat::getArgName(int partIndex)
{
	
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	
	//    .param p1, "partIndex"    # I
	part = this->msgPattern->getPart(partIndex);
	//    .local v0, "part":Landroid/icu/text/MessagePattern$Part;
	if ( part->getType() != android::icu::text::MessagePattern_S_Part_S_Type::ARG_NAME )
		goto label_cond_15;
	return this->msgPattern->getSubstring(part);
	// 3326    .line 548
label_cond_15:
	return java::lang::Integer::toString(part->getValue());

}
// .method private getLiteralStringUntilNextArgument(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessageFormat::getLiteralStringUntilNextArgument(int from)
{
	
	std::shared_ptr<java::lang::StringBuilder> b;
	int prevIndex;
	int i;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	auto type;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "from"    # I
	b = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "b":Ljava/lang/StringBuilder;
	//    .local v3, "msgString":Ljava/lang/String;
	prevIndex = this->msgPattern->getPart(from)->getLimit();
	//    .local v5, "prevIndex":I
	i = ( from + 0x1);
	//    .local v1, "i":I
label_goto_17:
	part = this->msgPattern->getPart(i);
	//    .local v4, "part":Landroid/icu/text/MessagePattern$Part;
	type = part->getType();
	//    .local v6, "type":Landroid/icu/text/MessagePattern$Part$Type;
	//    .local v2, "index":I
	b->append(this->msgPattern->getPatternString(), prevIndex, part->getIndex());
	if ( type == android::icu::text::MessagePattern_S_Part_S_Type::ARG_START )
		goto label_cond_30;
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::MSG_LIMIT )
		goto label_cond_35;
label_cond_30:
	return b->toString();
	// 3415    .line 1801
label_cond_35:
	if ( android::icu::text::MessageFormat::_assertionsDisabled )     
		goto label_cond_62;
	if ( type == android::icu::text::MessagePattern_S_Part_S_Type::SKIP_SYNTAX )
		goto label_cond_62;
	if ( type == android::icu::text::MessagePattern_S_Part_S_Type::INSERT_CHAR )
		goto label_cond_62;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::AssertionError>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unexpected Part ")))->append(part)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" in parsed message.")))->toString());
	// throw
	throw cVar0;
	// 3461    .line 1803
label_cond_62:
	prevIndex = part->getLimit();
	i = ( i + 0x1);
	goto label_goto_17;

}
// .method private getStockDateFormatter()Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::MessageFormat::getStockDateFormatter()
{
	
	int cVar0;
	
	cVar0 = 0x3;
	if ( this->stockDateFormatter )     
		goto label_cond_d;
	this->stockDateFormatter = android::icu::text::DateFormat::getDateTimeInstance(cVar0, cVar0, this->ulocale);
label_cond_d:
	return this->stockDateFormatter;

}
// .method private getStockNumberFormatter()Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::MessageFormat::getStockNumberFormatter()
{
	
	if ( this->stockNumberFormatter )     
		goto label_cond_c;
	this->stockNumberFormatter = android::icu::text::NumberFormat::getInstance(this->ulocale);
label_cond_c:
	return this->stockNumberFormatter;

}
// .method private static matchStringUntilLimitPart(Landroid/icu/text/MessagePattern;IILjava/lang/String;I)I
int android::icu::text::MessageFormat::matchStringUntilLimitPart(std::shared_ptr<android::icu::text::MessagePattern> pattern,int partIndex,int limitPartIndex,std::shared_ptr<java::lang::String> source,int sourceOffset)
{
	
	int prevIndex;
	int partIndex;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	int length;
	int matchingSourceLength;
	
	//    .param p0, "pattern"    # Landroid/icu/text/MessagePattern;
	//    .param p1, "partIndex"    # I
	//    .param p2, "limitPartIndex"    # I
	//    .param p3, "source"    # Ljava/lang/String;
	//    .param p4, "sourceOffset"    # I
	//    .local v2, "matchingSourceLength":I
	//    .local v3, "msgString":Ljava/lang/String;
	prevIndex = pattern->getPart(partIndex)->getLimit();
	//    .local v5, "prevIndex":I
label_cond_d:
label_goto_d:
	partIndex = ( partIndex + 0x1);
	part = pattern->getPart(partIndex);
	//    .local v4, "part":Landroid/icu/text/MessagePattern$Part;
	if ( partIndex == limitPartIndex )
		goto label_cond_1d;
	if ( part->getType() != android::icu::text::MessagePattern_S_Part_S_Type::SKIP_SYNTAX )
		goto label_cond_d;
label_cond_1d:
	//    .local v0, "index":I
	length = (part->getIndex() - prevIndex);
	//    .local v1, "length":I
	if ( !(length) )  
		goto label_cond_2f;
	if ( !(( source->regionMatches(sourceOffset, pattern->getPatternString(), prevIndex, length) ^ 0x1)) )  
		goto label_cond_2f;
	return -0x1;
	// 3603    .line 1924
label_cond_2f:
	matchingSourceLength = (matchingSourceLength +  length);
	if ( partIndex != limitPartIndex )
		goto label_cond_33;
	return matchingSourceLength;
	// 3613    .line 1928
label_cond_33:
	prevIndex = part->getLimit();
	goto label_goto_d;

}
// .method private nextTopLevelArgStart(I)I
int android::icu::text::MessageFormat::nextTopLevelArgStart(int cVar0)
{
	
	int cVar0;
	auto type;
	
	//    .param p1, "partIndex"    # I
	if ( !(cVar0) )  
		goto label_cond_8;
	cVar0 = this->msgPattern->getLimitPartIndex(cVar0);
label_cond_8:
	cVar0 = ( cVar0 + 0x1);
	type = this->msgPattern->getPartType(cVar0);
	//    .local v0, "type":Landroid/icu/text/MessagePattern$Part$Type;
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::ARG_START )
		goto label_cond_15;
	return cVar0;
	// 3656    .line 530
label_cond_15:
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::MSG_LIMIT )
		goto label_cond_8;
	return -0x1;

}
// .method private parse(ILjava/lang/String;Ljava/text/ParsePosition;[Ljava/lang/Object;Ljava/util/Map;)V
void android::icu::text::MessageFormat::parse(int msgStart,std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos,std::shared_ptr<std::vector<java::lang::Object>> args,std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> argsMap)
{
	
	int prevIndex;
	int sourceOffset;
	std::shared_ptr<java::text::ParsePosition> tempStatus;
	int i;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	auto type;
	int len;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int argLimit;
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> argType;
	int argId;
	int argNumber;
	std::shared_ptr<java::lang::Object> argId;
	int haveArgResult;
	std::shared_ptr<java::text::Format> formatter;
	std::shared_ptr<java::lang::Object> argResult;
	std::shared_ptr<java::lang::String> stringAfterArgument;
	int next;
	auto strValue;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar3;
	std::shared_ptr<java::lang::IllegalStateException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	//    .param p1, "msgStart"    # I
	//    .param p2, "source"    # Ljava/lang/String;
	//    .param p3, "pos"    # Ljava/text/ParsePosition;
	//    .param p4, "args"    # [Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Signature;
	// 3675        value = {
	// 3676            "(I",
	// 3677            "Ljava/lang/String;",
	// 3678            "Ljava/text/ParsePosition;",
	// 3679            "[",
	// 3680            "Ljava/lang/Object;",
	// 3681            "Ljava/util/Map",
	// 3682            "<",
	// 3683            "Ljava/lang/String;",
	// 3684            "Ljava/lang/Object;",
	// 3685            ">;)V"
	// 3686        }
	// 3687    .end annotation
	//    .local p5, "argsMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
	if ( source )     
		goto label_cond_3;
	return;
	// 3697    .line 1209
label_cond_3:
	//    .local v19, "msgString":Ljava/lang/String;
	prevIndex = this->msgPattern->getPart(msgStart)->getLimit();
	//    .local v22, "prevIndex":I
	sourceOffset = pos->getIndex();
	//    .local v23, "sourceOffset":I
	var23 = tempStatus(0x0);
	//    .local v26, "tempStatus":Ljava/text/ParsePosition;
	i = ( msgStart + 0x1);
	//    .local v15, "i":I
label_goto_30:
	part = this->msgPattern->getPart(i);
	//    .local v21, "part":Landroid/icu/text/MessagePattern$Part;
	type = part->getType();
	//    .local v27, "type":Landroid/icu/text/MessagePattern$Part$Type;
	//    .local v16, "index":I
	len = (part->getIndex() - prevIndex);
	//    .local v18, "len":I
	if ( !(len) )  
		goto label_cond_58;
	if ( !(this->msgPattern->getPatternString()->regionMatches(prevIndex, source, sourceOffset, len)) )  
		goto label_cond_6c;
label_cond_58:
	sourceOffset = (sourceOffset + len);
	(prevIndex + len);
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::MSG_LIMIT )
		goto label_cond_74;
	pos->setIndex(sourceOffset);
	return;
	// 3828    .line 1224
label_cond_6c:
	pos->setErrorIndex(sourceOffset);
	return;
	// 3839    .line 1232
label_cond_74:
	if ( type == android::icu::text::MessagePattern_S_Part_S_Type::SKIP_SYNTAX )
		goto label_cond_84;
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::INSERT_CHAR )
		goto label_cond_8b;
label_cond_84:
	prevIndex = part->getLimit();
label_goto_88:
	i = ( i + 0x1);
	goto label_goto_30;
	// 3869    .line 1237
label_cond_8b:
	if ( android::icu::text::MessageFormat::_assertionsDisabled )     
		goto label_cond_bc;
	if ( type == android::icu::text::MessagePattern_S_Part_S_Type::ARG_START )
		goto label_cond_bc;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::AssertionError>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unexpected Part ")))->append(part)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" in parsed message.")))->toString());
	// throw
	throw cVar0;
	// 3917    .line 1238
label_cond_bc:
	argLimit = this->msgPattern->getLimitPartIndex(i);
	//    .local v7, "argLimit":I
	argType = part->getArgType();
	//    .local v10, "argType":Landroid/icu/text/MessagePattern$ArgType;
	i = ( i + 0x1);
	part = this->msgPattern->getPart(i);
	argId = 0x0;
	//    .local v6, "argId":Ljava/lang/Object;
	0x0;
	//    .local v8, "argNumber":I
	//    .local v17, "key":Ljava/lang/String;
	if ( !(args) )  
		goto label_cond_12a;
	argNumber = part->getValue();
	argId = java::lang::Integer::valueOf(argNumber);
	//    .end local v17    # "key":Ljava/lang/String;
label_goto_e8:
	i = ( i + 0x1);
	0x0;
	//    .local v11, "formatter":Ljava/text/Format;
	haveArgResult = 0x0;
	//    .local v14, "haveArgResult":Z
	0x0;
	//    .local v9, "argResult":Ljava/lang/Object;
	if ( !(this->cachedFormatters) )  
		goto label_cond_16e;
	formatter = this->cachedFormatters->get(java::lang::Integer::valueOf(( i + -0x2)));
	//    .end local v11    # "formatter":Ljava/text/Format;
	formatter->checkCast("java::text::Format");
	//    .local v11, "formatter":Ljava/text/Format;
	if ( !(formatter) )  
		goto label_cond_16e;
	tempStatus->setIndex(sourceOffset);
	argResult = formatter->parseObject(source, tempStatus);
	if ( tempStatus->getIndex() != sourceOffset )
		goto label_cond_150;
	pos->setErrorIndex(sourceOffset);
	return;
	// 4063    .line 1250
	// 4064    .end local v9    # "argResult":Ljava/lang/Object;
	// 4065    .end local v11    # "formatter":Ljava/text/Format;
	// 4066    .end local v14    # "haveArgResult":Z
	// 4067    .restart local v17    # "key":Ljava/lang/String;
label_cond_12a:
	if ( part->getType() != android::icu::text::MessagePattern_S_Part_S_Type::ARG_NAME )
		goto label_cond_147;
	//    .local v17, "key":Ljava/lang/String;
label_goto_144:
	argId = key;
	goto label_goto_e8;
	// 4103    .line 1253
	// 4104    .local v17, "key":Ljava/lang/String;
label_cond_147:
	//    .local v17, "key":Ljava/lang/String;
	goto label_goto_144;
	// 4117    .line 1270
	// 4118    .end local v17    # "key":Ljava/lang/String;
	// 4119    .restart local v9    # "argResult":Ljava/lang/Object;
	// 4120    .restart local v11    # "formatter":Ljava/text/Format;
	// 4121    .restart local v14    # "haveArgResult":Z
label_cond_150:
	haveArgResult = 0x1;
	sourceOffset = tempStatus->getIndex();
	//    .end local v9    # "argResult":Ljava/lang/Object;
	//    .end local v11    # "formatter":Ljava/text/Format;
label_goto_155:
	if ( !(haveArgResult) )  
		goto label_cond_15b;
	if ( !(args) )  
		goto label_cond_258;
	args[argNumber] = argResult;
label_cond_15b:
label_goto_15b:
	prevIndex = this->msgPattern->getPart(argLimit)->getLimit();
	i = argLimit;
	goto label_goto_88;
	// 4166    .line 1273
	// 4167    .restart local v9    # "argResult":Ljava/lang/Object;
label_cond_16e:
	if ( argType == android::icu::text::MessagePattern_S_ArgType::NONE )
		goto label_cond_18e;
	if ( !(this->cachedFormatters) )  
		goto label_cond_1ed;
	if ( !(this->cachedFormatters->containsKey(java::lang::Integer::valueOf(( i + -0x2)))) )  
		goto label_cond_1ed;
label_cond_18e:
	stringAfterArgument = this->getLiteralStringUntilNextArgument(argLimit);
	//    .local v25, "stringAfterArgument":Ljava/lang/String;
	if ( !(stringAfterArgument->length()) )  
		goto label_cond_1ae;
	next = source->indexOf(stringAfterArgument, sourceOffset);
	//    .local v20, "next":I
label_goto_1a4:
	if ( next >= 0 )
		goto label_cond_1b3;
	pos->setErrorIndex(sourceOffset);
	return;
	// 4245    .line 1284
	// 4246    .end local v20    # "next":I
label_cond_1ae:
	next = source->length();
	//    .restart local v20    # "next":I
	goto label_goto_1a4;
	// 4255    .line 1290
label_cond_1b3:
	strValue = source->substring(sourceOffset, next);
	//    .local v24, "strValue":Ljava/lang/String;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	if ( strValue->equals(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("{")))->append(argId->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("}")))->toString()) )     
		goto label_cond_1e9;
	haveArgResult = 0x1;
	strValue;
	//    .end local v9    # "argResult":Ljava/lang/Object;
label_cond_1e9:
	sourceOffset = next;
	goto label_goto_155;
	// 4320    .line 1297
	// 4321    .end local v20    # "next":I
	// 4322    .end local v24    # "strValue":Ljava/lang/String;
	// 4323    .end local v25    # "stringAfterArgument":Ljava/lang/String;
	// 4324    .restart local v9    # "argResult":Ljava/lang/Object;
label_cond_1ed:
	if ( argType != android::icu::text::MessagePattern_S_ArgType::CHOICE )
		goto label_cond_227;
	tempStatus->setIndex(sourceOffset);
	//    .local v12, "choiceResult":D
	if ( tempStatus->getIndex() != sourceOffset )
		goto label_cond_21c;
	pos->setErrorIndex(sourceOffset);
	return;
	// 4378    .line 1304
label_cond_21c:
	java::lang::Double::valueOf(android::icu::text::MessageFormat::parseChoiceArgument(this->msgPattern, i, source, tempStatus));
	haveArgResult = 0x1;
	sourceOffset = tempStatus->getIndex();
	goto label_goto_155;
	// 4394    .line 1307
	// 4395    .end local v12    # "choiceResult":D
label_cond_227:
	if ( argType->hasPluralStyle() )     
		goto label_cond_233;
	if ( argType != android::icu::text::MessagePattern_S_ArgType::SELECT )
		goto label_cond_23c;
label_cond_233:
	cVar3 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parsing of plural/select/selectordinal argument is not supported.")));
	// throw
	throw cVar3;
	// 4421    .line 1313
label_cond_23c:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IllegalStateException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unexpected argType ")))->append(argType)->toString());
	// throw
	throw cVar4;
	// 4449    .line 1318
	// 4450    .end local v9    # "argResult":Ljava/lang/Object;
label_cond_258:
	if ( !(argsMap) )  
		goto label_cond_15b;
	argsMap->put(0x0, argResult);
	goto label_goto_15b;

}
// .method private static parseChoiceArgument(Landroid/icu/text/MessagePattern;ILjava/lang/String;Ljava/text/ParsePosition;)D
double android::icu::text::MessageFormat::parseChoiceArgument(std::shared_ptr<android::icu::text::MessagePattern> pattern,int partIndex,std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	int start;
	int furthest;
	int cVar0;
	int msgLimit;
	int len;
	int newIndex;
	int partIndex;
	
	//    .param p0, "pattern"    # Landroid/icu/text/MessagePattern;
	//    .param p1, "partIndex"    # I
	//    .param p2, "source"    # Ljava/lang/String;
	//    .param p3, "pos"    # Ljava/text/ParsePosition;
	start = pos->getIndex();
	//    .local v6, "start":I
	furthest = start;
	//    .local v2, "furthest":I
	//    .local v0, "bestNumber":D
	0x0;
	//    .local v8, "tempNumber":D
label_goto_9:
	if ( pattern->getPartType(partIndex) == android::icu::text::MessagePattern_S_Part_S_Type::ARG_LIMIT )
		goto label_cond_31;
	cVar0 = ( partIndex + 0x2);
	msgLimit = pattern->getLimitPartIndex(cVar0);
	//    .local v4, "msgLimit":I
	len = android::icu::text::MessageFormat::matchStringUntilLimitPart(pattern, cVar0, msgLimit, source, start);
	//    .local v3, "len":I
	if ( len < 0 ) 
		goto label_cond_37;
	newIndex = (start + len);
	//    .local v5, "newIndex":I
	if ( newIndex <= furthest )
		goto label_cond_37;
	furthest = newIndex;
	if ( newIndex != source->length() )
		goto label_cond_37;
	//    .end local v3    # "len":I
	//    .end local v4    # "msgLimit":I
	//    .end local v5    # "newIndex":I
label_cond_31:
	if ( furthest != start )
		goto label_cond_3a;
	pos->setErrorIndex(start);
label_goto_36:
	return 0x7ff8000000000000L;
	// 4561    .line 1892
	// 4562    .restart local v3    # "len":I
	// 4563    .restart local v4    # "msgLimit":I
label_cond_37:
	partIndex = ( msgLimit + 0x1);
	goto label_goto_9;
	// 4569    .line 1897
	// 4570    .end local v3    # "len":I
	// 4571    .end local v4    # "msgLimit":I
label_cond_3a:
	pos->setIndex(furthest);
	goto label_goto_36;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::text::MessageFormat::readObject(std::shared_ptr<java::io::ObjectInputStream> in)
{
	
	std::shared_ptr<java::lang::String> languageTag;
	std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> aposMode;
	std::shared_ptr<android::icu::text::MessagePattern> cVar0;
	std::shared_ptr<java::lang::String> msg;
	int numFormatters;
	std::shared_ptr<java::text::Format> formatter;
	int numPairs;
	
	//    .param p1, "in"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4582        value = {
	// 4583            Ljava/io/IOException;,
	// 4584            Ljava/lang/ClassNotFoundException;
	// 4585        }
	// 4586    .end annotation
	in->defaultReadObject();
	languageTag = in->readObject();
	languageTag->checkCast("java::lang::String");
	//    .local v3, "languageTag":Ljava/lang/String;
	this->ulocale = android::icu::util::ULocale::forLanguageTag(languageTag);
	aposMode = in->readObject();
	aposMode->checkCast("android::icu::text::MessagePattern_S_ApostropheMode");
	//    .local v0, "aposMode":Landroid/icu/text/MessagePattern$ApostropheMode;
	if ( !(this->msgPattern) )  
		goto label_cond_21;
	if ( aposMode == this->msgPattern->getApostropheMode() )
		goto label_cond_28;
label_cond_21:
	cVar0 = std::make_shared<android::icu::text::MessagePattern>(aposMode);
	this->msgPattern = cVar0;
label_cond_28:
	msg = in->readObject();
	msg->checkCast("java::lang::String");
	//    .local v4, "msg":Ljava/lang/String;
	if ( !(msg) )  
		goto label_cond_33;
	this->applyPattern(msg);
label_cond_33:
	numFormatters = in->readInt();
	//    .local v5, "numFormatters":I
label_goto_37:
	if ( numFormatters <= 0 )
		goto label_cond_49;
	//    .local v1, "formatIndex":I
	formatter = in->readObject();
	formatter->checkCast("java::text::Format");
	//    .local v2, "formatter":Ljava/text/Format;
	this->setFormat(in->readInt(), formatter);
	numFormatters = ( numFormatters + -0x1);
	goto label_goto_37;
	// 4683    .line 2346
	// 4684    .end local v1    # "formatIndex":I
	// 4685    .end local v2    # "formatter":Ljava/text/Format;
label_cond_49:
	numPairs = in->readInt();
	//    .local v6, "numPairs":I
label_goto_4d:
	if ( numPairs <= 0 )
		goto label_cond_58;
	in->readInt();
	in->readObject();
	numPairs = ( numPairs + -0x1);
	goto label_goto_4d;
	// 4706    .line 2350
label_cond_58:
	return;

}
// .method private resetPattern()V
void android::icu::text::MessageFormat::resetPattern()
{
	
	if ( !(this->msgPattern) )  
		goto label_cond_a;
	this->msgPattern->clear();
label_cond_a:
	if ( !(this->cachedFormatters) )  
		goto label_cond_13;
	this->cachedFormatters->clear();
label_cond_13:
	this->customFormatArgStarts = 0x0;
	return;

}
// .method private setArgStartFormat(ILjava/text/Format;)V
void android::icu::text::MessageFormat::setArgStartFormat(int argStart,std::shared_ptr<java::text::Format> formatter)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	
	//    .param p1, "argStart"    # I
	//    .param p2, "formatter"    # Ljava/text/Format;
	if ( this->cachedFormatters )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::util::HashMap>();
	this->cachedFormatters = cVar0;
label_cond_b:
	this->cachedFormatters->put(java::lang::Integer::valueOf(argStart), formatter);
	return;

}
// .method private setCustomArgStartFormat(ILjava/text/Format;)V
void android::icu::text::MessageFormat::setCustomArgStartFormat(int argStart,std::shared_ptr<java::text::Format> formatter)
{
	
	std::shared_ptr<java::util::HashSet> cVar0;
	
	//    .param p1, "argStart"    # I
	//    .param p2, "formatter"    # Ljava/text/Format;
	this->setArgStartFormat(argStart, formatter);
	if ( this->customFormatArgStarts )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::util::HashSet>();
	this->customFormatArgStarts = cVar0;
label_cond_e:
	this->customFormatArgStarts->add(java::lang::Integer::valueOf(argStart));
	return;

}
// .method private updateMetaData(Landroid/icu/text/MessageFormat$AppendableWrapper;ILjava/text/FieldPosition;Ljava/lang/Object;)Ljava/text/FieldPosition;
std::shared_ptr<java::text::FieldPosition> android::icu::text::MessageFormat::updateMetaData(std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> dest,int prevLength,std::shared_ptr<java::text::FieldPosition> fp,std::shared_ptr<java::lang::Object> argId)
{
	
	std::shared_ptr<android::icu::text::MessageFormat_S_AttributeAndPosition> cVar0;
	
	//    .param p1, "dest"    # Landroid/icu/text/MessageFormat$AppendableWrapper;
	//    .param p2, "prevLength"    # I
	//    .param p3, "fp"    # Ljava/text/FieldPosition;
	//    .param p4, "argId"    # Ljava/lang/Object;
	if ( !(android::icu::text::MessageFormat_S_AppendableWrapper::-get0(dest)) )  
		goto label_cond_1d;
	if ( prevLength >= android::icu::text::MessageFormat_S_AppendableWrapper::-get1(dest) )
		goto label_cond_1d;
	cVar0 = std::make_shared<android::icu::text::MessageFormat_S_AttributeAndPosition>(argId, prevLength, android::icu::text::MessageFormat_S_AppendableWrapper::-get1(dest));
	android::icu::text::MessageFormat_S_AppendableWrapper::-get0(dest)->add(cVar0);
label_cond_1d:
	if ( !(fp) )  
		goto label_cond_36;
	if ( !(android::icu::text::MessageFormat_S_Field::ARGUMENT->equals(fp->getFieldAttribute())) )  
		goto label_cond_36;
	fp->setBeginIndex(prevLength);
	fp->setEndIndex(android::icu::text::MessageFormat_S_AppendableWrapper::-get1(dest));
	return 0x0;
	// 4880    .line 1817
label_cond_36:
	return fp;

}
// .method private writeObject(Ljava/io/ObjectOutputStream;)V
void android::icu::text::MessageFormat::writeObject(std::shared_ptr<java::io::ObjectOutputStream> out)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::MessagePattern> cVar1;
	int formatIndex;
	int partIndex;
	
	//    .param p1, "out"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4889        value = {
	// 4890            Ljava/io/IOException;
	// 4891        }
	// 4892    .end annotation
	cVar0 = 0x0;
	out->defaultWriteObject();
	out->writeObject(this->ulocale->toLanguageTag());
	if ( this->msgPattern )     
		goto label_cond_18;
	cVar1 = std::make_shared<android::icu::text::MessagePattern>();
	this->msgPattern = cVar1;
label_cond_18:
	out->writeObject(this->msgPattern->getApostropheMode());
	out->writeObject(this->msgPattern->getPatternString());
	if ( !(this->customFormatArgStarts) )  
		goto label_cond_36;
	if ( !(this->customFormatArgStarts->isEmpty()) )  
		goto label_cond_3d;
label_cond_36:
	out->writeInt(cVar0);
label_cond_39:
	out->writeInt(cVar0);
	return;
	// 4964    .line 2308
label_cond_3d:
	out->writeInt(this->customFormatArgStarts->size());
	formatIndex = 0x0;
	//    .local v0, "formatIndex":I
	//    .local v1, "partIndex":I
label_goto_48:
	partIndex = this->nextTopLevelArgStart(partIndex);
	if ( partIndex < 0 ) 
		goto label_cond_39;
	if ( !(this->customFormatArgStarts->contains(java::lang::Integer::valueOf(partIndex))) )  
		goto label_cond_6a;
	out->writeInt(formatIndex);
	out->writeObject(this->cachedFormatters->get(java::lang::Integer::valueOf(partIndex)));
label_cond_6a:
	formatIndex = ( formatIndex + 0x1);
	goto label_goto_48;

}
// .method public applyPattern(Ljava/lang/String;)V
void android::icu::text::MessageFormat::applyPattern(std::shared_ptr<java::lang::String> pttrn)
{
	
	std::shared_ptr<android::icu::text::MessagePattern> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "pttrn"    # Ljava/lang/String;
	try {
	//label_try_start_0:
	if ( this->msgPattern )     
		goto label_cond_f;
	cVar0 = std::make_shared<android::icu::text::MessagePattern>(pttrn);
	this->msgPattern = cVar0;
label_goto_b:
	this->cacheExplicitFormats();
	return;
	// 5052    .line 448
label_cond_f:
	this->msgPattern->parse(pttrn);
	//label_try_end_14:
	}
	catch (java::lang::RuntimeException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_15;
	}
	//    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_14} :catch_15
	goto label_goto_b;
	// 5062    .line 452
label_catch_15:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/RuntimeException;
	this->resetPattern();
	// throw
	throw;

}
// .method public applyPattern(Ljava/lang/String;Landroid/icu/text/MessagePattern$ApostropheMode;)V
void android::icu::text::MessageFormat::applyPattern(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> aposMode)
{
	
	std::shared_ptr<android::icu::text::MessagePattern> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "aposMode"    # Landroid/icu/text/MessagePattern$ApostropheMode;
	if ( this->msgPattern )     
		goto label_cond_f;
	cVar0 = std::make_shared<android::icu::text::MessagePattern>(aposMode);
	this->msgPattern = cVar0;
label_cond_b:
label_goto_b:
	this->applyPattern(pattern);
	return;
	// 5100    .line 475
label_cond_f:
	if ( aposMode == this->msgPattern->getApostropheMode() )
		goto label_cond_b;
	this->msgPattern->clearPatternAndSetApostropheMode(aposMode);
	goto label_goto_b;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::MessageFormat::clone()
{
	
	std::shared_ptr<java::util::Set> cVar0;
	std::shared_ptr<android::icu::text::MessageFormat> other;
	std::shared_ptr<java::util::HashSet> cVar1;
	std::shared_ptr<java::util::Iterator> key_S_iterator;
	std::shared_ptr<java::lang::Integer> key;
	std::shared_ptr<java::util::HashMap> cVar2;
	std::shared_ptr<java::util::Iterator> it;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<java::lang::Integer> cVar3;
	std::shared_ptr<java::text::Format> cVar4;
	std::shared_ptr<android::icu::text::MessagePattern> cVar5;
	std::shared_ptr<android::icu::text::DateFormat> cVar6;
	std::shared_ptr<android::icu::text::NumberFormat> cVar7;
	
	cVar0 = 0x0;
	other = this->clone();
	other->checkCast("android::icu::text::MessageFormat");
	//    .local v4, "other":Landroid/icu/text/MessageFormat;
	if ( !(this->customFormatArgStarts) )  
		goto label_cond_2a;
	cVar1 = std::make_shared<java::util::HashSet>();
	other->customFormatArgStarts = cVar1;
	key_S_iterator = this->customFormatArgStarts->iterator();
	//    .local v3, "key$iterator":Ljava/util/Iterator;
label_goto_18:
	if ( !(key_S_iterator->hasNext()) )  
		goto label_cond_2c;
	key = key_S_iterator->next();
	key->checkCast("java::lang::Integer");
	//    .local v2, "key":Ljava/lang/Integer;
	other->customFormatArgStarts->add(key);
	goto label_goto_18;
	// 5173    .line 1399
	// 5174    .end local v2    # "key":Ljava/lang/Integer;
	// 5175    .end local v3    # "key$iterator":Ljava/util/Iterator;
label_cond_2a:
	other->customFormatArgStarts = cVar0;
label_cond_2c:
	if ( !(this->cachedFormatters) )  
		goto label_cond_5f;
	cVar2 = std::make_shared<java::util::HashMap>();
	other->cachedFormatters = cVar2;
	it = this->cachedFormatters->entrySet()->iterator();
	//    .local v1, "it":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/Integer;Ljava/text/Format;>;>;"
label_goto_41:
	if ( !(it->hasNext()) )  
		goto label_cond_61;
	entry = it->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v0, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Integer;Ljava/text/Format;>;"
	cVar3 = entry->getKey();
	cVar3->checkCast("java::lang::Integer");
	cVar4 = entry->getValue();
	cVar4->checkCast("java::text::Format");
	other->cachedFormatters->put(cVar3, cVar4);
	goto label_goto_41;
	// 5239    .line 1410
	// 5240    .end local v0    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Integer;Ljava/text/Format;>;"
	// 5241    .end local v1    # "it":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/Integer;Ljava/text/Format;>;>;"
label_cond_5f:
	other->cachedFormatters = cVar0;
label_cond_61:
	if ( this->msgPattern )     
		goto label_cond_7b;
	cVar5 = cVar0;
label_goto_66:
	other->msgPattern = cVar5;
	if ( this->stockDateFormatter )     
		goto label_cond_84;
	cVar6 = cVar0;
label_goto_6d:
	other->stockDateFormatter = cVar6;
	if ( this->stockNumberFormatter )     
		goto label_cond_8d;
	cVar7 = cVar0;
label_goto_74:
	other->stockNumberFormatter = cVar7;
	other->pluralProvider = cVar0;
	other->ordinalProvider = cVar0;
	return other;
	// 5287    .line 1413
label_cond_7b:
	cVar5 = this->msgPattern->clone();
	cVar5->checkCast("android::icu::text::MessagePattern");
	goto label_goto_66;
	// 5299    .line 1415
label_cond_84:
	cVar6 = this->stockDateFormatter->clone();
	cVar6->checkCast("android::icu::text::DateFormat");
	goto label_goto_6d;
	// 5311    .line 1417
label_cond_8d:
	cVar7 = this->stockNumberFormatter->clone();
	cVar7->checkCast("android::icu::text::NumberFormat");
	goto label_goto_74;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::MessageFormat::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::MessageFormat> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return 0x1;
	// 5339    .line 1431
label_cond_5:
	if ( !(obj) )  
		goto label_cond_11;
	if ( this->getClass() == obj->getClass() )
		goto label_cond_12;
label_cond_11:
	return cVar1;
label_cond_12:
	other = obj;
	other->checkCast("android::icu::text::MessageFormat");
	//    .local v0, "other":Landroid/icu/text/MessageFormat;
	if ( !(android::icu::impl::Utility::objectEquals(this->ulocale, other->ulocale)) )  
		goto label_cond_3b;
	if ( !(android::icu::impl::Utility::objectEquals(this->msgPattern, other->msgPattern)) )  
		goto label_cond_3b;
	if ( !(android::icu::impl::Utility::objectEquals(this->cachedFormatters, other->cachedFormatters)) )  
		goto label_cond_3b;
	cVar1 = android::icu::impl::Utility::objectEquals(this->customFormatArgStarts, other->customFormatArgStarts);
label_cond_3b:
	return cVar1;

}
// .method public final format(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::MessageFormat::format(std::shared_ptr<java::lang::Object> arguments,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> cVar0;
	
	//    .param p1, "arguments"    # Ljava/lang/Object;
	//    .param p2, "result"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	cVar0 = std::make_shared<android::icu::text::MessageFormat_S_AppendableWrapper>(result);
	this->format(arguments, cVar0, pos);
	return result;

}
// .method public final format(Ljava/util/Map;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::MessageFormat::format(std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> arguments,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> cVar0;
	
	//    .param p2, "result"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	//    .annotation system Ldalvik/annotation/Signature;
	// 5436        value = {
	// 5437            "(",
	// 5438            "Ljava/util/Map",
	// 5439            "<",
	// 5440            "Ljava/lang/String;",
	// 5441            "Ljava/lang/Object;",
	// 5442            ">;",
	// 5443            "Ljava/lang/StringBuffer;",
	// 5444            "Ljava/text/FieldPosition;",
	// 5445            ")",
	// 5446            "Ljava/lang/StringBuffer;"
	// 5447        }
	// 5448    .end annotation
	//    .local p1, "arguments":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
	cVar0 = std::make_shared<android::icu::text::MessageFormat_S_AppendableWrapper>(result);
	this->format(0x0, arguments, cVar0, pos);
	return result;

}
// .method public final format([Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::MessageFormat::format(std::shared_ptr<std::vector<java::lang::Object>> arguments,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> cVar0;
	
	//    .param p1, "arguments"    # [Ljava/lang/Object;
	//    .param p2, "result"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	cVar0 = std::make_shared<android::icu::text::MessageFormat_S_AppendableWrapper>(result);
	this->format(arguments, 0x0, cVar0, pos);
	return result;

}
// .method public formatToCharacterIterator(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;
std::shared_ptr<java::text::AttributedCharacterIterator> android::icu::text::MessageFormat::formatToCharacterIterator(std::shared_ptr<java::lang::Object> arguments)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> wrapper;
	std::shared_ptr<java::text::AttributedString> as;
	std::shared_ptr<java::util::Iterator> a_S_iterator;
	std::shared_ptr<android::icu::text::MessageFormat_S_AttributeAndPosition> a;
	
	//    .param p1, "arguments"    # Ljava/lang/Object;
	if ( arguments )     
		goto label_cond_c;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("formatToCharacterIterator must be passed non-null object")));
	// throw
	throw cVar0;
	// 5506    .line 1078
label_cond_c:
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "result":Ljava/lang/StringBuilder;
	wrapper = std::make_shared<android::icu::text::MessageFormat_S_AppendableWrapper>(result);
	//    .local v4, "wrapper":Landroid/icu/text/MessageFormat$AppendableWrapper;
	wrapper->useAttributes();
	this->format(arguments, wrapper, 0x0);
	as = std::make_shared<java::text::AttributedString>(result->toString());
	//    .local v2, "as":Ljava/text/AttributedString;
	a_S_iterator = android::icu::text::MessageFormat_S_AppendableWrapper::-get0(wrapper)->iterator();
	//    .local v1, "a$iterator":Ljava/util/Iterator;
label_goto_2d:
	if ( !(a_S_iterator->hasNext()) )  
		goto label_cond_4d;
	a = a_S_iterator->next();
	a->checkCast("android::icu::text::MessageFormat_S_AttributeAndPosition");
	//    .local v0, "a":Landroid/icu/text/MessageFormat$AttributeAndPosition;
	as->addAttribute(android::icu::text::MessageFormat_S_AttributeAndPosition::-get0(a), android::icu::text::MessageFormat_S_AttributeAndPosition::-get3(a), android::icu::text::MessageFormat_S_AttributeAndPosition::-get2(a), android::icu::text::MessageFormat_S_AttributeAndPosition::-get1(a));
	goto label_goto_2d;
	// 5580    .line 1086
	// 5581    .end local v0    # "a":Landroid/icu/text/MessageFormat$AttributeAndPosition;
label_cond_4d:
	return as->getIterator();

}
// .method public getApostropheMode()Landroid/icu/text/MessagePattern$ApostropheMode;
std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> android::icu::text::MessageFormat::getApostropheMode()
{
	
	std::shared_ptr<android::icu::text::MessagePattern> cVar0;
	
	if ( this->msgPattern )     
		goto label_cond_b;
	cVar0 = std::make_shared<android::icu::text::MessagePattern>();
	this->msgPattern = cVar0;
label_cond_b:
	return this->msgPattern->getApostropheMode();

}
// .method public getArgumentNames()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::text::MessageFormat::getArgumentNames()
{
	
	std::shared_ptr<java::util::HashSet> result;
	int partIndex;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 5620        value = {
	// 5621            "()",
	// 5622            "Ljava/util/Set",
	// 5623            "<",
	// 5624            "Ljava/lang/String;",
	// 5625            ">;"
	// 5626        }
	// 5627    .end annotation
	result = std::make_shared<java::util::HashSet>();
	//    .local v1, "result":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .local v0, "partIndex":I
label_goto_6:
	partIndex = this->nextTopLevelArgStart(partIndex);
	if ( partIndex < 0 ) 
		goto label_cond_16;
	result->add(this->getArgName(( partIndex + 0x1)));
	goto label_goto_6;
	// 5658    .line 824
label_cond_16:
	return result;

}
// .method public getFormatByArgumentName(Ljava/lang/String;)Ljava/text/Format;
std::shared_ptr<java::text::Format> android::icu::text::MessageFormat::getFormatByArgumentName(std::shared_ptr<java::lang::String> argumentName)
{
	
	std::shared_ptr<java::text::Format> cVar0;
	int argNumber;
	int partIndex;
	std::shared_ptr<java::text::Format> cVar1;
	
	//    .param p1, "argumentName"    # Ljava/lang/String;
	cVar0 = 0x0;
	if ( this->cachedFormatters )     
		goto label_cond_6;
	return cVar0;
	// 5678    .line 837
label_cond_6:
	argNumber = android::icu::text::MessagePattern::validateArgumentName(argumentName);
	//    .local v0, "argNumber":I
	if ( argNumber >= -0x1 )
		goto label_cond_e;
	return cVar0;
	// 5693    .line 841
label_cond_e:
	//    .local v1, "partIndex":I
label_cond_f:
	partIndex = this->nextTopLevelArgStart(partIndex);
	if ( partIndex < 0 ) 
		goto label_cond_2a;
	if ( !(this->argNameMatches(( partIndex + 0x1), argumentName, argNumber)) )  
		goto label_cond_f;
	cVar1 = this->cachedFormatters->get(java::lang::Integer::valueOf(partIndex));
	cVar1->checkCast("java::text::Format");
	return cVar1;
	// 5729    .line 846
label_cond_2a:
	return cVar0;

}
// .method public getFormats()[Ljava/text/Format;
std::shared_ptr<java::text::Format> android::icu::text::MessageFormat::getFormats()
{
	
	std::shared_ptr<java::util::ArrayList> list;
	int partIndex;
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<std::vector<java::text::Format>> cVar2;
	
	list = std::make_shared<java::util::ArrayList>();
	//    .local v0, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/text/Format;>;"
	//    .local v1, "partIndex":I
label_goto_7:
	partIndex = this->nextTopLevelArgStart(partIndex);
	if ( partIndex < 0 ) 
		goto label_cond_23;
	if ( this->cachedFormatters )     
		goto label_cond_16;
	cVar0 = 0x0;
label_goto_12:
	list->add(cVar0);
	goto label_goto_7;
label_cond_16:
	cVar0 = this->cachedFormatters->get(java::lang::Integer::valueOf(partIndex));
	cVar0->checkCast("java::text::Format");
	goto label_goto_12;
	// 5784    .line 811
label_cond_23:
	cVar2 = list->toArray(std::make_shared<std::vector<std::vector<java::text::Format>>>(list->size()));
	cVar2->checkCast("std::vector<java::text::Format>");
	return cVar2;

}
// .method public getFormatsByArgumentIndex()[Ljava/text/Format;
std::shared_ptr<java::text::Format> android::icu::text::MessageFormat::getFormatsByArgumentIndex()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::util::ArrayList> list;
	int partIndex;
	int argNumber;
	std::shared_ptr<java::lang::Object> cVar2;
	std::shared_ptr<std::vector<java::text::Format>> cVar4;
	
	cVar0 = 0x0;
	if ( !(this->msgPattern->hasNamedArguments()) )  
		goto label_cond_12;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("This method is not available in MessageFormat objects that use alphanumeric argument names.")));
	// throw
	throw cVar1;
	// 5827    .line 775
label_cond_12:
	list = std::make_shared<java::util::ArrayList>();
	//    .local v1, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/text/Format;>;"
	//    .local v2, "partIndex":I
label_goto_18:
	partIndex = this->nextTopLevelArgStart(partIndex);
	if ( partIndex < 0 ) 
		goto label_cond_4a;
	argNumber = this->msgPattern->getPart(( partIndex + 0x1))->getValue();
	//    .local v0, "argNumber":I
label_goto_2a:
	if ( argNumber <  list->size() )
		goto label_cond_34;
	list->add(cVar0);
	goto label_goto_2a;
	// 5872    .line 781
label_cond_34:
	if ( this->cachedFormatters )     
		goto label_cond_3d;
	cVar2 = cVar0;
label_goto_39:
	list->set(argNumber, cVar2);
	goto label_goto_18;
label_cond_3d:
	cVar2 = this->cachedFormatters->get(java::lang::Integer::valueOf(partIndex));
	cVar2->checkCast("java::text::Format");
	goto label_goto_39;
	// 5900    .line 783
	// 5901    .end local v0    # "argNumber":I
label_cond_4a:
	cVar4 = list->toArray(std::make_shared<std::vector<std::vector<java::text::Format>>>(list->size()));
	cVar4->checkCast("std::vector<java::text::Format>");
	return cVar4;

}
// .method public getLocale()Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::text::MessageFormat::getLocale()
{
	
	return this->ulocale->toLocale();

}
// .method public getULocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::MessageFormat::getULocale()
{
	
	return this->ulocale;

}
// .method public hashCode()I
int android::icu::text::MessageFormat::hashCode()
{
	
	return this->msgPattern->getPatternString()->hashCode();

}
// .method public parse(Ljava/lang/String;)[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::MessageFormat::parse(std::shared_ptr<java::lang::String> source)
{
	
	std::shared_ptr<java::text::ParsePosition> pos;
	std::shared_ptr<java::text::ParseException> cVar0;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5964        value = {
	// 5965            Ljava/text/ParseException;
	// 5966        }
	// 5967    .end annotation
	pos = std::make_shared<java::text::ParsePosition>(0x0);
	//    .local v0, "pos":Ljava/text/ParsePosition;
	//    .local v1, "result":[Ljava/lang/Object;
	if ( pos->getIndex() )     
		goto label_cond_1d;
	cVar0 = std::make_shared<java::text::ParseException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MessageFormat parse error!")), pos->getErrorIndex());
	// throw
	throw cVar0;
	// 6006    .line 1186
label_cond_1d:
	return this->parse(source, pos);

}
// .method public parse(Ljava/lang/String;Ljava/text/ParsePosition;)[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::MessageFormat::parse(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	std::shared_ptr<java::util::Map> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int maxArgId;
	int partIndex;
	int argNumber;
	std::shared<std::vector<std::vector<java::lang::Object>>> resultArray;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	cVar0 = 0x0;
	if ( !(this->msgPattern->hasNamedArguments()) )  
		goto label_cond_13;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("This method is not available in MessageFormat objects that use named argument.")));
	// throw
	throw cVar1;
	// 6041    .line 1126
label_cond_13:
	maxArgId = -0x1;
	//    .local v8, "maxArgId":I
	//    .local v9, "partIndex":I
label_cond_15:
label_goto_15:
	partIndex = this->nextTopLevelArgStart(partIndex);
	if ( partIndex < 0 ) 
		goto label_cond_2b;
	argNumber = this->msgPattern->getPart(( partIndex + 0x1))->getValue();
	//    .local v6, "argNumber":I
	if ( argNumber <= maxArgId )
		goto label_cond_15;
	maxArgId = argNumber;
	goto label_goto_15;
	// 6080    .line 1133
	// 6081    .end local v6    # "argNumber":I
label_cond_2b:
	resultArray = std::make_shared<std::vector<std::vector<java::lang::Object>>>(( maxArgId + 0x1));
	//    .local v4, "resultArray":[Ljava/lang/Object;
	//    .local v7, "backupStartPos":I
	this->parse(0x0, source, pos, resultArray, cVar0);
	if ( pos->getIndex() != pos->getIndex() )
		goto label_cond_40;
	return cVar0;
	// 6113    .line 1141
label_cond_40:
	return resultArray;

}
// .method public parseObject(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::MessageFormat::parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	if ( this->msgPattern->hasNamedArguments() )     
		goto label_cond_d;
	return this->parse(source, pos);
	// 6140    .line 1382
label_cond_d:
	return this->parseToMap(source, pos);

}
// .method public parseToMap(Ljava/lang/String;)Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> android::icu::text::MessageFormat::parseToMap(std::shared_ptr<java::lang::String> source)
{
	
	int cVar0;
	std::shared_ptr<java::text::ParsePosition> pos;
	std::shared_ptr<java::util::HashMap> result;
	std::shared_ptr<java::text::ParseException> cVar1;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 6153        value = {
	// 6154            "(",
	// 6155            "Ljava/lang/String;",
	// 6156            ")",
	// 6157            "Ljava/util/Map",
	// 6158            "<",
	// 6159            "Ljava/lang/String;",
	// 6160            "Ljava/lang/Object;",
	// 6161            ">;"
	// 6162        }
	// 6163    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 6166        value = {
	// 6167            Ljava/text/ParseException;
	// 6168        }
	// 6169    .end annotation
	cVar0 = 0x0;
	pos = std::make_shared<java::text::ParsePosition>(cVar0);
	//    .local v3, "pos":Ljava/text/ParsePosition;
	result = std::make_shared<java::util::HashMap>();
	//    .local v5, "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
	this->parse(cVar0, source, pos, 0x0, result);
	if ( pos->getIndex() )     
		goto label_cond_24;
	cVar1 = std::make_shared<java::text::ParseException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MessageFormat parse error!")), pos->getErrorIndex());
	// throw
	throw cVar1;
	// 6217    .line 1348
label_cond_24:
	return result;

}
// .method public parseToMap(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> android::icu::text::MessageFormat::parseToMap(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	std::shared_ptr<java::util::HashMap> result;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	//    .annotation system Ldalvik/annotation/Signature;
	// 6227        value = {
	// 6228            "(",
	// 6229            "Ljava/lang/String;",
	// 6230            "Ljava/text/ParsePosition;",
	// 6231            ")",
	// 6232            "Ljava/util/Map",
	// 6233            "<",
	// 6234            "Ljava/lang/String;",
	// 6235            "Ljava/lang/Object;",
	// 6236            ">;"
	// 6237        }
	// 6238    .end annotation
	cVar0 = 0x0;
	result = std::make_shared<java::util::HashMap>();
	//    .local v5, "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
	//    .local v6, "backupStartPos":I
	this->parse(0x0, source, pos, cVar0, result);
	if ( pos->getIndex() != pos->getIndex() )
		goto label_cond_18;
	return cVar0;
	// 6276    .line 1163
label_cond_18:
	return result;

}
// .method public setFormat(ILjava/text/Format;)V
void android::icu::text::MessageFormat::setFormat(int formatElementIndex,std::shared_ptr<java::text::Format> newFormat)
{
	
	int formatNumber;
	int partIndex;
	std::shared_ptr<java::lang::ArrayIndexOutOfBoundsException> cVar0;
	
	//    .param p1, "formatElementIndex"    # I
	//    .param p2, "newFormat"    # Ljava/text/Format;
	formatNumber = 0x0;
	//    .local v0, "formatNumber":I
	//    .local v1, "partIndex":I
label_goto_2:
	partIndex = this->nextTopLevelArgStart(partIndex);
	if ( partIndex < 0 ) 
		goto label_cond_11;
	if ( formatNumber != formatElementIndex )
		goto label_cond_e;
	this->setCustomArgStartFormat(partIndex, newFormat);
	return;
	// 6311    .line 741
label_cond_e:
	formatNumber = ( formatNumber + 0x1);
	goto label_goto_2;
	// 6317    .line 743
label_cond_11:
	cVar0 = std::make_shared<java::lang::ArrayIndexOutOfBoundsException>(formatElementIndex);
	// throw
	throw cVar0;

}
// .method public setFormatByArgumentIndex(ILjava/text/Format;)V
void android::icu::text::MessageFormat::setFormatByArgumentIndex(int argumentIndex,std::shared_ptr<java::text::Format> newFormat)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int partIndex;
	
	//    .param p1, "argumentIndex"    # I
	//    .param p2, "newFormat"    # Ljava/text/Format;
	if ( !(this->msgPattern->hasNamedArguments()) )  
		goto label_cond_11;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("This method is not available in MessageFormat objects that use alphanumeric argument names.")));
	// throw
	throw cVar0;
	// 6352    .line 680
label_cond_11:
	//    .local v0, "partIndex":I
label_cond_12:
label_goto_12:
	partIndex = this->nextTopLevelArgStart(partIndex);
	if ( partIndex < 0 ) 
		goto label_cond_2a;
	if ( this->msgPattern->getPart(( partIndex + 0x1))->getValue() != argumentIndex )
		goto label_cond_12;
	this->setCustomArgStartFormat(partIndex, newFormat);
	goto label_goto_12;
	// 6385    .line 685
label_cond_2a:
	return;

}
// .method public setFormatByArgumentName(Ljava/lang/String;Ljava/text/Format;)V
void android::icu::text::MessageFormat::setFormatByArgumentName(std::shared_ptr<java::lang::String> argumentName,std::shared_ptr<java::text::Format> newFormat)
{
	
	int argNumber;
	int partIndex;
	
	//    .param p1, "argumentName"    # Ljava/lang/String;
	//    .param p2, "newFormat"    # Ljava/text/Format;
	argNumber = android::icu::text::MessagePattern::validateArgumentName(argumentName);
	//    .local v0, "argNumber":I
	if ( argNumber >= -0x1 )
		goto label_cond_8;
	return;
	// 6410    .line 710
label_cond_8:
	//    .local v1, "partIndex":I
label_cond_9:
label_goto_9:
	partIndex = this->nextTopLevelArgStart(partIndex);
	if ( partIndex < 0 ) 
		goto label_cond_1b;
	if ( !(this->argNameMatches(( partIndex + 0x1), argumentName, argNumber)) )  
		goto label_cond_9;
	this->setCustomArgStartFormat(partIndex, newFormat);
	goto label_goto_9;
	// 6437    .line 715
label_cond_1b:
	return;

}
// .method public setFormats([Ljava/text/Format;)V
void android::icu::text::MessageFormat::setFormats(std::shared_ptr<std::vector<java::text::Format>> newFormats)
{
	
	int formatNumber;
	int partIndex;
	
	//    .param p1, "newFormats"    # [Ljava/text/Format;
	formatNumber = 0x0;
	//    .local v0, "formatNumber":I
	//    .local v1, "partIndex":I
label_goto_2:
	if ( formatNumber >= newFormats->size() )
		goto label_cond_13;
	partIndex = this->nextTopLevelArgStart(partIndex);
	if ( partIndex < 0 ) 
		goto label_cond_13;
	this->setCustomArgStartFormat(partIndex, newFormats[formatNumber]);
	formatNumber = ( formatNumber + 0x1);
	goto label_goto_2;
	// 6478    .line 651
label_cond_13:
	return;

}
// .method public setFormatsByArgumentIndex([Ljava/text/Format;)V
void android::icu::text::MessageFormat::setFormatsByArgumentIndex(std::shared_ptr<std::vector<java::text::Format>> newFormats)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int partIndex;
	int argNumber;
	
	//    .param p1, "newFormats"    # [Ljava/text/Format;
	if ( !(this->msgPattern->hasNamedArguments()) )  
		goto label_cond_11;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("This method is not available in MessageFormat objects that use alphanumeric argument names.")));
	// throw
	throw cVar0;
	// 6508    .line 584
label_cond_11:
	//    .local v1, "partIndex":I
label_cond_12:
label_goto_12:
	partIndex = this->nextTopLevelArgStart(partIndex);
	if ( partIndex < 0 ) 
		goto label_cond_2d;
	argNumber = this->msgPattern->getPart(( partIndex + 0x1))->getValue();
	//    .local v0, "argNumber":I
	if ( argNumber >= newFormats->size() )
		goto label_cond_12;
	this->setCustomArgStartFormat(partIndex, newFormats[argNumber]);
	goto label_goto_12;
	// 6547    .line 590
	// 6548    .end local v0    # "argNumber":I
label_cond_2d:
	return;

}
// .method public setFormatsByArgumentName(Ljava/util/Map;)V
void android::icu::text::MessageFormat::setFormatsByArgumentName(std::shared_ptr<java::util::Map<java::lang::String,java::text::Format>> newFormats)
{
	
	int partIndex;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<java::text::Format> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 6556        value = {
	// 6557            "(",
	// 6558            "Ljava/util/Map",
	// 6559            "<",
	// 6560            "Ljava/lang/String;",
	// 6561            "Ljava/text/Format;",
	// 6562            ">;)V"
	// 6563        }
	// 6564    .end annotation
	//    .local p1, "newFormats":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/text/Format;>;"
	//    .local v1, "partIndex":I
label_cond_1:
label_goto_1:
	partIndex = this->nextTopLevelArgStart(partIndex);
	if ( partIndex < 0 ) 
		goto label_cond_1d;
	key = this->getArgName(( partIndex + 0x1));
	//    .local v0, "key":Ljava/lang/String;
	if ( !(newFormats->containsKey(key)) )  
		goto label_cond_1;
	cVar0 = newFormats->get(key);
	cVar0->checkCast("java::text::Format");
	this->setCustomArgStartFormat(partIndex, cVar0);
	goto label_goto_1;
	// 6606    .line 619
	// 6607    .end local v0    # "key":Ljava/lang/String;
label_cond_1d:
	return;

}
// .method public setLocale(Landroid/icu/util/ULocale;)V
void android::icu::text::MessageFormat::setLocale(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::DateFormat> cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	//    .local v0, "existingPattern":Ljava/lang/String;
	this->ulocale = locale;
	this->stockDateFormatter = cVar0;
	this->stockNumberFormatter = cVar0;
	this->pluralProvider = cVar0;
	this->ordinalProvider = cVar0;
	this->applyPattern(this->toPattern());
	return;

}
// .method public setLocale(Ljava/util/Locale;)V
void android::icu::text::MessageFormat::setLocale(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	this->setLocale(android::icu::util::ULocale::forLocale(locale));
	return;

}
// .method public toPattern()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessageFormat::toPattern()
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<java::lang::String> originalPattern;
	
	if ( !(this->customFormatArgStarts) )  
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("toPattern() is not supported after custom Format objects have been set via setFormat() or similar APIs")));
	// throw
	throw cVar0;
	// 6683    .line 510
label_cond_d:
	if ( this->msgPattern )     
		goto label_cond_15;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 6694    .line 513
label_cond_15:
	originalPattern = this->msgPattern->getPatternString();
	//    .local v0, "originalPattern":Ljava/lang/String;
	if ( originalPattern )     
		goto label_cond_20;
	//    .end local v0    # "originalPattern":Ljava/lang/String;
label_cond_20:
	return originalPattern;

}
// .method public usesNamedArguments()Z
bool android::icu::text::MessageFormat::usesNamedArguments()
{
	
	return this->msgPattern->hasNamedArguments();

}


