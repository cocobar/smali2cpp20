// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePattern.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUConfig.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.text.MessagePattern_S_ApostropheMode.h"
#include "android.icu.text.MessagePattern_S_ArgType.h"
#include "android.icu.text.MessagePattern_S_Part_S_Type.h"
#include "android.icu.text.MessagePattern_S_Part.h"
#include "android.icu.text.MessagePattern.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Double.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.NumberFormatException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.ArrayList.h"
#include "java.util.Locale.h"

static android::icu::text::MessagePattern::_assertionsDisabled;
static android::icu::text::MessagePattern::ARG_NAME_NOT_NUMBER = -0x1;
static android::icu::text::MessagePattern::ARG_NAME_NOT_VALID = -0x2;
static android::icu::text::MessagePattern::MAX_PREFIX_LENGTH = 0x18;
static android::icu::text::MessagePattern::NO_NUMERIC_VALUE = -1.23456789E8;
static android::icu::text::MessagePattern::argTypes;
static android::icu::text::MessagePattern::defaultAposMode;
// .method static synthetic -get0()[Landroid/icu/text/MessagePattern$ArgType;
std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> android::icu::text::MessagePattern::_get0()
{
	
	return android::icu::text::MessagePattern::argTypes;

}
// .method static constructor <clinit>()V
void android::icu::text::MessagePattern::static_cinit()
{
	
	android::icu::text::MessagePattern::_assertionsDisabled = ( android::icu::text::MessagePattern()->desiredAssertionStatus() ^ 0x1);
	android::icu::text::MessagePattern::defaultAposMode = android::icu::text::MessagePattern_S_ApostropheMode::valueOf(android::icu::impl::ICUConfig::get(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.text.MessagePattern.ApostropheMode")), std::make_shared<java::lang::String>(std::make_shared<char[]>("DOUBLE_OPTIONAL"))));
	android::icu::text::MessagePattern::argTypes = android::icu::text::MessagePattern_S_ArgType::values({const[class].FS-Param});
	return;

}
// .method public constructor <init>()V
android::icu::text::MessagePattern::MessagePattern()
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	// 139    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->parts = cVar0;
	this->aposMode = android::icu::text::MessagePattern::defaultAposMode;
	return;

}
// .method public constructor <init>(Landroid/icu/text/MessagePattern$ApostropheMode;)V
android::icu::text::MessagePattern::MessagePattern(std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> mode)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	//    .param p1, "mode"    # Landroid/icu/text/MessagePattern$ApostropheMode;
	// 163    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->parts = cVar0;
	this->aposMode = mode;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::MessagePattern::MessagePattern(std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	// 185    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->parts = cVar0;
	this->aposMode = android::icu::text::MessagePattern::defaultAposMode;
	this->parse(pattern);
	return;

}
// .method private addArgDoublePart(DII)V
void android::icu::text::MessagePattern::addArgDoublePart(double numericValue,int start,int length)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	int numericIndex;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	
	//    .param p1, "numericValue"    # D
	//    .param p3, "start"    # I
	//    .param p4, "length"    # I
	if ( this->numericValues )     
		goto label_cond_1b;
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->numericValues = cVar0;
	//    .local v0, "numericIndex":I
label_cond_c:
	this->numericValues->add(java::lang::Double::valueOf(numericValue));
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::ARG_DOUBLE, start, length, numericIndex);
	return;
	// 247    .line 1484
	// 248    .end local v0    # "numericIndex":I
label_cond_1b:
	numericIndex = this->numericValues->size();
	//    .restart local v0    # "numericIndex":I
	if ( numericIndex <= 0x7fff )
		goto label_cond_c;
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Too many numeric values")));
	// throw
	throw cVar1;

}
// .method private addLimitPart(ILandroid/icu/text/MessagePattern$Part$Type;III)V
void android::icu::text::MessagePattern::addLimitPart(int start,std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> type,int index,int length,int value)
{
	
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> cVar0;
	
	//    .param p1, "start"    # I
	//    .param p2, "type"    # Landroid/icu/text/MessagePattern$Part$Type;
	//    .param p3, "index"    # I
	//    .param p4, "length"    # I
	//    .param p5, "value"    # I
	cVar0 = this->parts->get(start);
	cVar0->checkCast("android::icu::text::MessagePattern_S_Part");
	android::icu::text::MessagePattern_S_Part::-set0(cVar0, this->parts->size());
	this->addPart(type, index, length, value);
	return;

}
// .method private addPart(Landroid/icu/text/MessagePattern$Part$Type;III)V
void android::icu::text::MessagePattern::addPart(std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> type,int index,int length,int value)
{
	
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> cVar0;
	
	//    .param p1, "type"    # Landroid/icu/text/MessagePattern$Part$Type;
	//    .param p2, "index"    # I
	//    .param p3, "length"    # I
	//    .param p4, "value"    # I
	cVar0 = std::make_shared<android::icu::text::MessagePattern_S_Part>(type, index, length, value, 0x0);
	this->parts->add(cVar0);
	return;

}
// .method static appendReducedApostrophes(Ljava/lang/String;IILjava/lang/StringBuilder;)V
void android::icu::text::MessagePattern::appendReducedApostrophes(std::shared_ptr<java::lang::String> s,int start,int limit,std::shared_ptr<java::lang::StringBuilder> sb)
{
	
	int cVar0;
	int doubleApos;
	int i;
	int start;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "sb"    # Ljava/lang/StringBuilder;
	cVar0 = 0x27;
	doubleApos = -0x1;
	//    .local v0, "doubleApos":I
label_goto_3:
	i = s->indexOf(cVar0, start);
	//    .local v1, "i":I
	if ( i < 0 ) 
		goto label_cond_b;
	if ( i <  limit )
		goto label_cond_f;
label_cond_b:
	sb->append(s, start, limit);
	return;
	// 369    .line 1364
label_cond_f:
	if ( i != doubleApos )
		goto label_cond_18;
	sb->append(cVar0);
	start = ( start + 0x1);
	doubleApos = -0x1;
	goto label_goto_3;
	// 384    .line 1371
label_cond_18:
	sb->append(s, start, i);
	start = ( i + 0x1);
	doubleApos = start;
	goto label_goto_3;

}
// .method private inMessageFormatPattern(I)Z
bool android::icu::text::MessagePattern::inMessageFormatPattern(int nestingLevel)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> cVar1;
	bool cVar2;
	
	//    .param p1, "nestingLevel"    # I
	cVar0 = 0x0;
	if ( nestingLevel > 0 ) 
		goto label_cond_14;
	cVar1 = this->parts->get(cVar0);
	cVar1->checkCast("android::icu::text::MessagePattern_S_Part");
	if ( android::icu::text::MessagePattern_S_Part::-get3(cVar1) != android::icu::text::MessagePattern_S_Part_S_Type::MSG_START )
		goto label_cond_16;
label_cond_14:
	cVar2 = 0x1;
label_goto_15:
	return cVar2;
label_cond_16:
	cVar2 = cVar0;
	goto label_goto_15;

}
// .method private inTopLevelChoiceMessage(ILandroid/icu/text/MessagePattern$ArgType;)Z
bool android::icu::text::MessagePattern::inTopLevelChoiceMessage(int nestingLevel,std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> parentType)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> cVar2;
	bool cVar3;
	
	//    .param p1, "nestingLevel"    # I
	//    .param p2, "parentType"    # Landroid/icu/text/MessagePattern$ArgType;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( nestingLevel != cVar0 )
		goto label_cond_1c;
	if ( parentType != android::icu::text::MessagePattern_S_ArgType::CHOICE )
		goto label_cond_1c;
	cVar2 = this->parts->get(cVar1);
	cVar2->checkCast("android::icu::text::MessagePattern_S_Part");
	if ( android::icu::text::MessagePattern_S_Part::-get3(cVar2) == android::icu::text::MessagePattern_S_Part_S_Type::MSG_START )
		goto label_cond_1a;
	cVar3 = cVar0;
label_goto_19:
	return cVar3;
label_cond_1a:
	cVar3 = cVar1;
	goto label_goto_19;
label_cond_1c:
	cVar3 = cVar1;
	goto label_goto_19;

}
// .method private static isArgTypeChar(I)Z
bool android::icu::text::MessagePattern::isArgTypeChar(int c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # I
	cVar0 = 0x1;
	if ( 0x61 >  c )
		goto label_cond_b;
	if ( c >  0x7a )
		goto label_cond_b;
label_cond_a:
label_goto_a:
	return cVar0;
label_cond_b:
	if ( 0x41 >  c )
		goto label_cond_13;
	if ( c <= 0x5a )
		goto label_cond_a;
label_cond_13:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method private isChoice(I)Z
bool android::icu::text::MessagePattern::isChoice(int index)
{
	
	int cVar0;
	int cVar1;
	bool cVar2;
	int cVar3;
	int index;
	int c;
	
	//    .param p1, "index"    # I
	cVar0 = 0x63;
	cVar1 = 0x43;
	cVar2 = 0x1;
	cVar3 = 0x0;
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .local v1, "index":I
	c = this->msg->charAt(index);
	//    .local v0, "c":C
	if ( c == cVar0 )
		goto label_cond_12;
	if ( c != cVar1 )
		goto label_cond_5e;
label_cond_12:
	index = ( index + 0x1);
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	c = this->msg->charAt(index);
	if ( c == 0x68 )
		goto label_cond_22;
	if ( c != 0x48 )
		goto label_cond_5f;
label_cond_22:
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .restart local v1    # "index":I
	c = this->msg->charAt(index);
	if ( c == 0x6f )
		goto label_cond_32;
	if ( c != 0x4f )
		goto label_cond_61;
label_cond_32:
	index = ( index + 0x1);
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	c = this->msg->charAt(index);
	if ( c == 0x69 )
		goto label_cond_42;
	if ( c != 0x49 )
		goto label_cond_5f;
label_cond_42:
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .restart local v1    # "index":I
	c = this->msg->charAt(index);
	if ( c == cVar0 )
		goto label_cond_4e;
	if ( c != cVar1 )
		goto label_cond_63;
label_cond_4e:
	c = this->msg->charAt(index);
	if ( c == 0x65 )
		goto label_cond_5c;
	if ( c != 0x45 )
		goto label_cond_65;
label_cond_5c:
label_goto_5c:
	index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
label_goto_5d:
	return cVar2;
	// 658    .end local p1    # "index":I
	// 659    .restart local v1    # "index":I
label_cond_5e:
	index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
label_cond_5f:
label_goto_5f:
	cVar2 = cVar3;
	goto label_goto_5d;
	// 672    .end local p1    # "index":I
	// 673    .restart local v1    # "index":I
label_cond_61:
	index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_5f;
	// 682    .end local p1    # "index":I
	// 683    .restart local v1    # "index":I
label_cond_63:
	index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_5f;
	// 692    .end local p1    # "index":I
	// 693    .restart local v1    # "index":I
label_cond_65:
	cVar2 = cVar3;
	goto label_goto_5c;

}
// .method private isOrdinal(I)Z
bool android::icu::text::MessagePattern::isOrdinal(int index)
{
	
	bool cVar0;
	int cVar1;
	int index;
	int c;
	
	//    .param p1, "index"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .local v1, "index":I
	c = this->msg->charAt(index);
	//    .local v0, "c":C
	if ( c == 0x6f )
		goto label_cond_12;
	if ( c != 0x4f )
		goto label_cond_71;
label_cond_12:
	index = ( index + 0x1);
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	c = this->msg->charAt(index);
	if ( c == 0x72 )
		goto label_cond_22;
	if ( c != 0x52 )
		goto label_cond_72;
label_cond_22:
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .restart local v1    # "index":I
	c = this->msg->charAt(index);
	if ( c == 0x64 )
		goto label_cond_32;
	if ( c != 0x44 )
		goto label_cond_74;
label_cond_32:
	index = ( index + 0x1);
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	c = this->msg->charAt(index);
	if ( c == 0x69 )
		goto label_cond_42;
	if ( c != 0x49 )
		goto label_cond_72;
label_cond_42:
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .restart local v1    # "index":I
	c = this->msg->charAt(index);
	if ( c == 0x6e )
		goto label_cond_52;
	if ( c != 0x4e )
		goto label_cond_76;
label_cond_52:
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	c = this->msg->charAt(index);
	if ( c == 0x61 )
		goto label_cond_62;
	if ( c != 0x41 )
		goto label_cond_72;
label_cond_62:
	c = this->msg->charAt(( index + 0x1));
	if ( c == 0x6c )
		goto label_cond_70;
	if ( c != 0x4c )
		goto label_cond_78;
label_cond_70:
label_goto_70:
	return cVar0;
	// 850    .end local p1    # "index":I
	// 851    .restart local v1    # "index":I
label_cond_71:
	index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
label_cond_72:
label_goto_72:
	cVar0 = cVar1;
	goto label_goto_70;
	// 864    .end local p1    # "index":I
	// 865    .restart local v1    # "index":I
label_cond_74:
	index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_72;
	// 874    .end local p1    # "index":I
	// 875    .restart local v1    # "index":I
label_cond_76:
	index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_72;
label_cond_78:
	cVar0 = cVar1;
	goto label_goto_70;

}
// .method private isPlural(I)Z
bool android::icu::text::MessagePattern::isPlural(int index)
{
	
	int cVar0;
	int cVar1;
	bool cVar2;
	int cVar3;
	int index;
	int c;
	
	//    .param p1, "index"    # I
	cVar0 = 0x6c;
	cVar1 = 0x4c;
	cVar2 = 0x1;
	cVar3 = 0x0;
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .local v1, "index":I
	c = this->msg->charAt(index);
	//    .local v0, "c":C
	if ( c == 0x70 )
		goto label_cond_16;
	if ( c != 0x50 )
		goto label_cond_5e;
label_cond_16:
	index = ( index + 0x1);
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	c = this->msg->charAt(index);
	if ( c == cVar0 )
		goto label_cond_22;
	if ( c != cVar1 )
		goto label_cond_5f;
label_cond_22:
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .restart local v1    # "index":I
	c = this->msg->charAt(index);
	if ( c == 0x75 )
		goto label_cond_32;
	if ( c != 0x55 )
		goto label_cond_61;
label_cond_32:
	index = ( index + 0x1);
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	c = this->msg->charAt(index);
	if ( c == 0x72 )
		goto label_cond_42;
	if ( c != 0x52 )
		goto label_cond_5f;
label_cond_42:
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .restart local v1    # "index":I
	c = this->msg->charAt(index);
	if ( c == 0x61 )
		goto label_cond_52;
	if ( c != 0x41 )
		goto label_cond_63;
label_cond_52:
	c = this->msg->charAt(index);
	if ( c == cVar0 )
		goto label_cond_5c;
	if ( c != cVar1 )
		goto label_cond_65;
label_cond_5c:
label_goto_5c:
	index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
label_goto_5d:
	return cVar2;
	// 1022    .end local p1    # "index":I
	// 1023    .restart local v1    # "index":I
label_cond_5e:
	index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
label_cond_5f:
label_goto_5f:
	cVar2 = cVar3;
	goto label_goto_5d;
	// 1036    .end local p1    # "index":I
	// 1037    .restart local v1    # "index":I
label_cond_61:
	index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_5f;
	// 1046    .end local p1    # "index":I
	// 1047    .restart local v1    # "index":I
label_cond_63:
	index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_5f;
	// 1056    .end local p1    # "index":I
	// 1057    .restart local v1    # "index":I
label_cond_65:
	cVar2 = cVar3;
	goto label_goto_5c;

}
// .method private isSelect(I)Z
bool android::icu::text::MessagePattern::isSelect(int index)
{
	
	int cVar0;
	int cVar1;
	bool cVar2;
	int cVar3;
	int index;
	int c;
	
	//    .param p1, "index"    # I
	cVar0 = 0x65;
	cVar1 = 0x45;
	cVar2 = 0x1;
	cVar3 = 0x0;
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .local v1, "index":I
	c = this->msg->charAt(index);
	//    .local v0, "c":C
	if ( c == 0x73 )
		goto label_cond_16;
	if ( c != 0x53 )
		goto label_cond_5e;
label_cond_16:
	index = ( index + 0x1);
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	c = this->msg->charAt(index);
	if ( c == cVar0 )
		goto label_cond_22;
	if ( c != cVar1 )
		goto label_cond_5f;
label_cond_22:
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .restart local v1    # "index":I
	c = this->msg->charAt(index);
	if ( c == 0x6c )
		goto label_cond_32;
	if ( c != 0x4c )
		goto label_cond_61;
label_cond_32:
	index = ( index + 0x1);
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	c = this->msg->charAt(index);
	if ( c == cVar0 )
		goto label_cond_3e;
	if ( c != cVar1 )
		goto label_cond_5f;
label_cond_3e:
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .restart local v1    # "index":I
	c = this->msg->charAt(index);
	if ( c == 0x63 )
		goto label_cond_4e;
	if ( c != 0x43 )
		goto label_cond_63;
label_cond_4e:
	c = this->msg->charAt(index);
	if ( c == 0x74 )
		goto label_cond_5c;
	if ( c != 0x54 )
		goto label_cond_65;
label_cond_5c:
label_goto_5c:
	index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
label_goto_5d:
	return cVar2;
	// 1195    .end local p1    # "index":I
	// 1196    .restart local v1    # "index":I
label_cond_5e:
	index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
label_cond_5f:
label_goto_5f:
	cVar2 = cVar3;
	goto label_goto_5d;
	// 1209    .end local p1    # "index":I
	// 1210    .restart local v1    # "index":I
label_cond_61:
	index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_5f;
	// 1219    .end local p1    # "index":I
	// 1220    .restart local v1    # "index":I
label_cond_63:
	index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_5f;
	// 1229    .end local p1    # "index":I
	// 1230    .restart local v1    # "index":I
label_cond_65:
	cVar2 = cVar3;
	goto label_goto_5c;

}
// .method private parseArg(III)I
int android::icu::text::MessagePattern::parseArg(int index,int argStartLength,int nestingLevel)
{
	
	int argStart;
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> argType;
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	int index;
	int number;
	int length;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	int c;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar11;
	std::shared_ptr<java::lang::StringBuilder> cVar12;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar13;
	std::shared_ptr<java::lang::StringBuilder> cVar14;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar15;
	std::shared_ptr<java::lang::StringBuilder> cVar16;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar17;
	std::shared_ptr<java::lang::StringBuilder> cVar18;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> cVar19;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar20;
	std::shared_ptr<java::lang::StringBuilder> cVar21;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar9;
	std::shared_ptr<java::lang::StringBuilder> cVar10;
	
	//    .param p1, "index"    # I
	//    .param p2, "argStartLength"    # I
	//    .param p3, "nestingLevel"    # I
	argStart = this->parts->size();
	//    .local v4, "argStart":I
	argType = android::icu::text::MessagePattern_S_ArgType::NONE;
	//    .local v9, "argType":Landroid/icu/text/MessagePattern$ArgType;
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::ARG_START, index, argStartLength, argType->ordinal());
	cVar0 = this->skipWhiteSpace((index + argStartLength));
	cVar0;
	//    .local v14, "nameIndex":I
	if ( cVar0 != this->msg->length() )
		goto label_cond_4d;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unmatched \'{\' braces in message ")))->append(this->prefix())->toString());
	// throw
	throw cVar1;
	// 1329    .line 958
label_cond_4d:
	index = this->skipIdentifier(cVar0);
	//    .end local p1    # "index":I
	//    .local v11, "index":I
	number = this->parseArgNumber(cVar0, index);
	//    .local v15, "number":I
	if ( number < 0 ) 
		goto label_cond_c0;
	length = (index - cVar0);
	//    .local v13, "length":I
	if ( length >  0xffff )
		goto label_cond_66;
	if ( number <= 0x7fff )
		goto label_cond_84;
label_cond_66:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument number too large: ")))->append(this->prefix(cVar0))->toString());
	// throw
	throw cVar3;
	// 1395    .line 966
label_cond_84:
	this->hasArgNumbers = 0x1;
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::ARG_NUMBER, cVar0, length, number);
label_goto_92:
	index = this->skipWhiteSpace(index);
	if ( index != this->msg->length() )
		goto label_cond_116;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unmatched \'{\' braces in message ")))->append(this->prefix())->toString());
	// throw
	throw cVar5;
	// 1462    .line 968
	// 1463    .end local v13    # "length":I
label_cond_c0:
	if ( number != -0x1 )
		goto label_cond_f8;
	length = (index - cVar0);
	//    .restart local v13    # "length":I
	if ( length <= 0xffff )
		goto label_cond_e8;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	cVar7 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument name too long: ")))->append(this->prefix(cVar0))->toString());
	// throw
	throw cVar7;
	// 1509    .line 974
label_cond_e8:
	this->hasArgNames = 0x1;
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::ARG_NAME, cVar0, length, 0x0);
	goto label_goto_92;
	// 1530    .line 977
	// 1531    .end local v13    # "length":I
label_cond_f8:
	cVar10 = std::make_shared<java::lang::StringBuilder>();
	cVar9 = std::make_shared<java::lang::IllegalArgumentException>(cVar10->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad argument syntax: ")))->append(this->prefix(cVar0))->toString());
	// throw
	throw cVar9;
	// 1561    .line 984
	// 1562    .restart local v13    # "length":I
label_cond_116:
	c = this->msg->charAt(index);
	//    .local v10, "c":C
	if ( c != 0x7d )
		goto label_cond_135;
	index = index;
	//    .end local v11    # "index":I
	//    .restart local p1    # "index":I
label_goto_124:
	this->addLimitPart(argStart, android::icu::text::MessagePattern_S_Part_S_Type::ARG_LIMIT, index, 0x1, argType->ordinal());
	return ( index + 0x1);
	// 1603    .line 987
	// 1604    .end local p1    # "index":I
	// 1605    .restart local v11    # "index":I
label_cond_135:
	if ( c == 0x2c )
		goto label_cond_157;
	cVar12 = std::make_shared<java::lang::StringBuilder>();
	cVar11 = std::make_shared<java::lang::IllegalArgumentException>(cVar12->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad argument syntax: ")))->append(this->prefix(cVar0))->toString());
	// throw
	throw cVar11;
	// 1640    .line 991
label_cond_157:
	index = this->skipWhiteSpace(( index + 0x1));
	index;
	//    .local v16, "typeIndex":I
	index = index;
	//    .end local v11    # "index":I
	//    .local v12, "index":I
label_goto_162:
	if ( index >= this->msg->length() )
		goto label_cond_17d;
	if ( !(android::icu::text::MessagePattern::isArgTypeChar(this->msg->charAt(index))) )  
		goto label_cond_17d;
	index = ( index + 0x1);
	goto label_goto_162;
	// 1688    .line 995
label_cond_17d:
	length = (index - index);
	index = this->skipWhiteSpace(index);
	if ( index != this->msg->length() )
		goto label_cond_1ad;
	cVar14 = std::make_shared<java::lang::StringBuilder>();
	cVar13 = std::make_shared<java::lang::IllegalArgumentException>(cVar14->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unmatched \'{\' braces in message ")))->append(this->prefix())->toString());
	// throw
	throw cVar13;
	// 1741    .line 1001
label_cond_1ad:
	if ( !(length) )  
		goto label_cond_1bf;
	c = this->msg->charAt(index);
	if ( c == 0x2c )
		goto label_cond_1dd;
	if ( c == 0x7d )
		goto label_cond_1dd;
label_cond_1bf:
	cVar16 = std::make_shared<java::lang::StringBuilder>();
	cVar15 = std::make_shared<java::lang::IllegalArgumentException>(cVar16->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad argument syntax: ")))->append(this->prefix(cVar0))->toString());
	// throw
	throw cVar15;
	// 1791    .line 1004
label_cond_1dd:
	if ( length <= 0xffff )
		goto label_cond_200;
	cVar18 = std::make_shared<java::lang::StringBuilder>();
	cVar17 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar18->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument type name too long: ")))->append(this->prefix(cVar0))->toString());
	// throw
	throw cVar17;
	// 1828    .line 1008
label_cond_200:
	argType = android::icu::text::MessagePattern_S_ArgType::SIMPLE;
	if ( length != 0x6 )
		goto label_cond_269;
	if ( !(this->isChoice(index)) )  
		goto label_cond_253;
	argType = android::icu::text::MessagePattern_S_ArgType::CHOICE;
label_cond_20f:
label_goto_20f:
	cVar19 = this->parts->get(argStart);
	cVar19->checkCast("android::icu::text::MessagePattern_S_Part");
	android::icu::text::MessagePattern_S_Part::-set1(cVar19, (short)(argType->ordinal()));
	if ( argType != android::icu::text::MessagePattern_S_ArgType::SIMPLE )
		goto label_cond_22d;
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::ARG_TYPE, index, length, 0x0);
label_cond_22d:
	if ( c != 0x7d )
		goto label_cond_282;
	if ( argType == android::icu::text::MessagePattern_S_ArgType::SIMPLE )
		goto label_cond_2aa;
	cVar21 = std::make_shared<java::lang::StringBuilder>();
	cVar20 = std::make_shared<java::lang::IllegalArgumentException>(cVar21->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("No style field for complex argument: ")))->append(this->prefix(cVar0))->toString());
	// throw
	throw cVar20;
	// 1926    .line 1013
label_cond_253:
	if ( !(this->isPlural(index)) )  
		goto label_cond_25e;
	argType = android::icu::text::MessagePattern_S_ArgType::PLURAL;
	goto label_goto_20f;
	// 1941    .line 1015
label_cond_25e:
	if ( !(this->isSelect(index)) )  
		goto label_cond_20f;
	argType = android::icu::text::MessagePattern_S_ArgType::SELECT;
	goto label_goto_20f;
	// 1956    .line 1018
label_cond_269:
	if ( length != 0xd )
		goto label_cond_20f;
	if ( !(this->isSelect(index)) )  
		goto label_cond_20f;
	if ( !(this->isOrdinal(( index + 0x6))) )  
		goto label_cond_20f;
	argType = android::icu::text::MessagePattern_S_ArgType::SELECTORDINAL;
	goto label_goto_20f;
	// 1986    .line 1035
label_cond_282:
	index = ( index + 0x1);
	//    .end local v12    # "index":I
	//    .restart local p1    # "index":I
	if ( argType != android::icu::text::MessagePattern_S_ArgType::SIMPLE )
		goto label_cond_28e;
	index = this->parseSimpleStyle(index);
	goto label_goto_124;
	// 2004    .line 1038
label_cond_28e:
	if ( argType != android::icu::text::MessagePattern_S_ArgType::CHOICE )
		goto label_cond_29e;
	index = this->parseChoiceStyle(index, nestingLevel);
	goto label_goto_124;
	// 2023    .line 1041
label_cond_29e:
	index = this->parsePluralOrSelectStyle(argType, index, nestingLevel);
	goto label_goto_124;
	// 2037    .end local p1    # "index":I
	// 2038    .restart local v12    # "index":I
label_cond_2aa:
	index = index;
	//    .end local v12    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_124;

}
// .method private parseArgNumber(II)I
int android::icu::text::MessagePattern::parseArgNumber(int start,int limit)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	return android::icu::text::MessagePattern::parseArgNumber(this->msg, start, limit);

}
// .method private static parseArgNumber(Ljava/lang/CharSequence;II)I
int android::icu::text::MessagePattern::parseArgNumber(std::shared_ptr<java::lang::CharSequence> s,int start,int limit)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int start;
	int c;
	int number;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	cVar0 = 0x39;
	cVar1 = 0x30;
	cVar2 = -0x1;
	cVar3 = -0x2;
	if ( start <  limit )
		goto label_cond_9;
	return cVar3;
	// 2084    .line 1255
label_cond_9:
	start = ( start + 0x1);
	//    .end local p1    # "start":I
	//    .local v3, "start":I
	c = s->charAt(start);
	//    .local v1, "c":C
	if ( c != cVar1 )
		goto label_cond_31;
	if ( start != limit )
		goto label_cond_15;
	return 0x0;
	// 2106    .line 1260
label_cond_15:
	number = 0x0;
	//    .local v2, "number":I
	//    .local v0, "badNumber":Z
label_goto_17:
	if ( start >= limit )
		goto label_cond_3d;
	//    .end local v3    # "start":I
	//    .restart local p1    # "start":I
	c = s->charAt(start);
	if ( cVar1 >  c )
		goto label_cond_3c;
	if ( c >  cVar0 )
		goto label_cond_3c;
	if ( number <  0xccccccc )
		goto label_cond_29;
	0x1;
label_cond_29:
	number = (( number * 0xa) + ( c + -0x30));
	start = ( start + 0x1);
	//    .end local p1    # "start":I
	//    .restart local v3    # "start":I
	goto label_goto_17;
	// 2155    .line 1263
	// 2156    .end local v0    # "badNumber":Z
	// 2157    .end local v2    # "number":I
label_cond_31:
	if ( 0x31 >  c )
		goto label_cond_3b;
	if ( c >  cVar0 )
		goto label_cond_3b;
	number = ( c + -0x30);
	//    .restart local v2    # "number":I
	//    .restart local v0    # "badNumber":Z
	goto label_goto_17;
	// 2176    .line 1267
	// 2177    .end local v0    # "badNumber":Z
	// 2178    .end local v2    # "number":I
label_cond_3b:
	return cVar2;
	// 2182    .line 1277
	// 2183    .end local v3    # "start":I
	// 2184    .restart local v0    # "badNumber":Z
	// 2185    .restart local v2    # "number":I
	// 2186    .restart local p1    # "start":I
label_cond_3c:
	return cVar2;
	// 2190    .line 1281
	// 2191    .end local p1    # "start":I
	// 2192    .restart local v3    # "start":I
label_cond_3d:
	if ( !(badNumber) )  
		goto label_cond_40;
	return cVar3;
	// 2199    .line 1284
label_cond_40:
	return number;

}
// .method private parseChoiceStyle(II)I
int android::icu::text::MessagePattern::parseChoiceStyle(int index,int nestingLevel)
{
	
	int cVar0;
	bool cVar1;
	int cVar2;
	int start;
	int cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	int numberIndex;
	int cVar7;
	int length;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar10;
	std::shared_ptr<java::lang::StringBuilder> cVar11;
	int cVar12;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar13;
	std::shared_ptr<java::lang::StringBuilder> cVar14;
	char c;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar15;
	std::shared_ptr<java::lang::StringBuilder> cVar16;
	int cVar17;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar18;
	std::shared_ptr<java::lang::StringBuilder> cVar19;
	
	//    .param p1, "index"    # I
	//    .param p2, "nestingLevel"    # I
	cVar0 = 0x7d;
	cVar1 = 0x1;
	cVar2 = 0x0;
	start = index;
	//    .local v3, "start":I
	cVar3 = this->skipWhiteSpace(index);
	if ( cVar3 == this->msg->length() )
		goto label_cond_19;
	if ( this->msg->charAt(cVar3) != cVar0 )
		goto label_cond_3d;
label_cond_19:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing choice argument pattern in ")))->append(this->prefix())->toString());
	// throw
	throw cVar4;
	// 2274    .line 1132
	// 2275    .local v0, "c":C
	// 2276    .local v1, "length":I
	// 2277    .local v2, "numberIndex":I
label_cond_37:
	cVar3 = this->skipWhiteSpace(( cVar17 + 0x1));
	//    .end local v0    # "c":C
	//    .end local v1    # "length":I
	//    .end local v2    # "numberIndex":I
label_cond_3d:
	numberIndex = cVar3;
	//    .restart local v2    # "numberIndex":I
	cVar7 = this->skipDouble(cVar3);
	length = (cVar7 - numberIndex);
	//    .restart local v1    # "length":I
	if ( length )     
		goto label_cond_64;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<java::lang::IllegalArgumentException>(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad choice pattern syntax: ")))->append(this->prefix(start))->toString());
	// throw
	throw cVar8;
	// 2334    .line 1102
label_cond_64:
	if ( length <= 0xffff )
		goto label_cond_87;
	cVar11 = std::make_shared<java::lang::StringBuilder>();
	cVar10 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar11->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Choice number too long: ")))->append(this->prefix(numberIndex))->toString());
	// throw
	throw cVar10;
	// 2371    .line 1106
label_cond_87:
	this->parseDouble(numberIndex, cVar7, cVar1);
	cVar12 = this->skipWhiteSpace(cVar7);
	if ( cVar12 != this->msg->length() )
		goto label_cond_b4;
	cVar14 = std::make_shared<java::lang::StringBuilder>();
	cVar13 = std::make_shared<java::lang::IllegalArgumentException>(cVar14->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad choice pattern syntax: ")))->append(this->prefix(start))->toString());
	// throw
	throw cVar13;
	// 2418    .line 1112
label_cond_b4:
	c = this->msg->charAt(cVar12);
	//    .restart local v0    # "c":C
	if ( c == 0x23 )
		goto label_cond_ef;
	if ( c == 0x3c )
		goto label_cond_ef;
	if ( c == 0x2264 )
		goto label_cond_ef;
	cVar16 = std::make_shared<java::lang::StringBuilder>();
	cVar15 = std::make_shared<java::lang::IllegalArgumentException>(cVar16->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Expected choice separator (#<\u2264) instead of \'")))->append(c)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' in choice pattern ")))->append(this->prefix(start))->toString());
	// throw
	throw cVar15;
	// 2485    .line 1118
label_cond_ef:
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::ARG_SELECTOR, cVar12, cVar1, cVar2);
	cVar17 = this->parseMessage(( cVar12 + 0x1), cVar2, ( nestingLevel + 0x1), android::icu::text::MessagePattern_S_ArgType::CHOICE);
	if ( cVar17 != this->msg->length() )
		goto label_cond_107;
	return cVar17;
	// 2514    .line 1125
label_cond_107:
	if ( this->msg->charAt(cVar17) != cVar0 )
		goto label_cond_37;
	if ( this->inMessageFormatPattern(nestingLevel) )     
		goto label_cond_133;
	cVar19 = std::make_shared<java::lang::StringBuilder>();
	cVar18 = std::make_shared<java::lang::IllegalArgumentException>(cVar19->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad choice pattern syntax: ")))->append(this->prefix(start))->toString());
	// throw
	throw cVar18;
	// 2562    .line 1130
label_cond_133:
	return cVar17;

}
// .method private parseDouble(IIZ)V
void android::icu::text::MessagePattern::parseDouble(int start,int limit,bool allowInfinity)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int index;
	int c;
	int isNegative;
	std::shared_ptr<java::lang::NumberFormatException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	double cVar3;
	int value;
	
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "allowInfinity"    # Z
	if ( android::icu::text::MessagePattern::_assertionsDisabled )     
		goto label_cond_c;
	if ( start <  limit )
		goto label_cond_c;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2587    .line 1303
label_cond_c:
	//    .local v6, "value":I
	0x0;
	//    .local v3, "isNegative":I
	start;
	//    .local v1, "index":I
	index = ( start + 0x1);
	c = this->msg->charAt(start);
	//    .local v0, "c":C
	if ( c != 0x2d )
		goto label_cond_59;
	isNegative = 0x1;
	if ( index != limit )
		goto label_cond_3e;
label_cond_1e:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::NumberFormatException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad syntax for numeric value: ")))->append(this->msg->substring(start, limit))->toString());
	// throw
	throw cVar1;
	// 2655    .line 1312
label_cond_3e:
	//    .end local v1    # "index":I
	//    .local v2, "index":I
	c = this->msg->charAt(index);
	index = ( index + 0x1);
	//    .end local v2    # "index":I
	//    .restart local v1    # "index":I
label_cond_47:
label_goto_47:
	if ( c != 0x221e )
		goto label_cond_74;
	if ( !(allowInfinity) )  
		goto label_cond_1e;
	if ( index != limit )
		goto label_cond_1e;
	if ( !(isNegative) )  
		goto label_cond_69;
	cVar3 = -0x10000000000000L;
label_goto_53:
	this->addArgDoublePart(cVar3, start, (limit - start));
	return;
	// 2698    .line 1313
label_cond_59:
	if ( c != 0x2b )
		goto label_cond_47;
	if ( index == limit )
		goto label_cond_1e;
	//    .end local v1    # "index":I
	//    .restart local v2    # "index":I
	c = this->msg->charAt(index);
	//    .end local v2    # "index":I
	//    .restart local v1    # "index":I
	goto label_goto_47;
	// 2724    .line 1322
label_cond_69:
	cVar3 = 0x7ff0000000000000L;
	goto label_goto_53;
	// 2730    .line 1339
	// 2731    .end local v1    # "index":I
	// 2732    .restart local v2    # "index":I
label_cond_6c:
	//    .end local v2    # "index":I
	//    .restart local v1    # "index":I
	c = this->msg->charAt(index);
label_cond_74:
	index = index;
	//    .end local v1    # "index":I
	//    .restart local v2    # "index":I
	if ( 0x30 >  c )
		goto label_cond_87;
	if ( c >  0x39 )
		goto label_cond_87;
	value = (( value * 0xa) + ( c + -0x30));
	if ( value <= ( isNegative + 0x7fff) )
		goto label_cond_97;
label_cond_87:
	//    .local v4, "numericValue":D
	this->addArgDoublePart(java::lang::Double::parseDouble(this->msg->substring(start, limit)), start, (limit - start));
	return;
	// 2791    .line 1335
	// 2792    .end local v4    # "numericValue":D
label_cond_97:
	if ( index != limit )
		goto label_cond_6c;
	if ( !(isNegative) )  
		goto label_cond_a0;
	//    .end local v6    # "value":I
label_cond_a0:
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::ARG_INT, start, (limit - start), value);
	return;

}
// .method private parseMessage(IIILandroid/icu/text/MessagePattern$ArgType;)I
int android::icu::text::MessagePattern::parseMessage(int cVar1,int msgStartLength,int nestingLevel,std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> parentType)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	int msgStart;
	int cVar1;
	int c;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "index"    # I
	//    .param p2, "msgStartLength"    # I
	//    .param p3, "nestingLevel"    # I
	//    .param p4, "parentType"    # Landroid/icu/text/MessagePattern$ArgType;
	if ( nestingLevel <= 0x7fff )
		goto label_cond_c;
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 2835    .line 866
label_cond_c:
	msgStart = this->parts->size();
	//    .local v5, "msgStart":I
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::MSG_START, cVar1, msgStartLength, nestingLevel);
	cVar1 = (cVar1 + msgStartLength);
label_goto_23:
	if ( cVar1 >= this->msg->length() )
		goto label_cond_183;
	cVar1 = ( cVar1 + 0x1);
	//    .end local p1    # "index":I
	//    .local v16, "index":I
	c = this->msg->charAt(cVar1);
	//    .local v15, "c":C
	if ( c != 0x27 )
		goto label_cond_123;
	if ( cVar1 != this->msg->length() )
		goto label_cond_5f;
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::INSERT_CHAR, cVar1, 0x0, 0x27);
	this->needsAutoQuoting = 0x1;
	cVar1 = cVar1;
	//    .end local v16    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_23;
	// 2936    .line 878
	// 2937    .end local p1    # "index":I
	// 2938    .restart local v16    # "index":I
label_cond_5f:
	c = this->msg->charAt(cVar1);
	if ( c != 0x27 )
		goto label_cond_7b;
	cVar1 = ( cVar1 + 0x1);
	//    .end local v16    # "index":I
	//    .restart local p1    # "index":I
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::SKIP_SYNTAX, cVar1, 0x1, 0x0);
	goto label_goto_23;
	// 2974    .line 883
	// 2975    .end local p1    # "index":I
	// 2976    .restart local v16    # "index":I
label_cond_7b:
	if ( this->aposMode == android::icu::text::MessagePattern_S_ApostropheMode::DOUBLE_REQUIRED )
		goto label_cond_87;
	if ( c != 0x7b )
		goto label_cond_ca;
label_cond_87:
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::SKIP_SYNTAX, ( cVar1 + -0x1), 0x1, 0x0);
	cVar1 = cVar1;
	//    .end local v16    # "index":I
	//    .restart local p1    # "index":I
label_goto_94:
	cVar1 = this->msg->indexOf(0x27, ( cVar1 + 0x1));
	if ( cVar1 < 0 ) 
		goto label_cond_108;
	if ( ( cVar1 + 0x1) >= this->msg->length() )
		goto label_cond_f7;
	if ( this->msg->charAt(( cVar1 + 0x1)) != 0x27 )
		goto label_cond_f7;
	cVar1 = ( cVar1 + 0x1);
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::SKIP_SYNTAX, cVar1, 0x1, 0x0);
	goto label_goto_94;
	// 3070    .line 884
	// 3071    .end local p1    # "index":I
	// 3072    .restart local v16    # "index":I
label_cond_ca:
	if ( c == 0x7d )
		goto label_cond_87;
	if ( parentType != android::icu::text::MessagePattern_S_ArgType::CHOICE )
		goto label_cond_d8;
	if ( c == 0x7c )
		goto label_cond_87;
label_cond_d8:
	if ( !(parentType->hasPluralStyle()) )  
		goto label_cond_e2;
	if ( c == 0x23 )
		goto label_cond_87;
label_cond_e2:
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::INSERT_CHAR, cVar1, 0x0, 0x27);
	this->needsAutoQuoting = 0x1;
	cVar1 = cVar1;
	//    .end local v16    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_23;
	// 3128    .line 900
label_cond_f7:
	cVar1 = ( cVar1 + 0x1);
	//    .end local p1    # "index":I
	//    .restart local v16    # "index":I
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::SKIP_SYNTAX, cVar1, 0x1, 0x0);
	cVar1 = cVar1;
	//    .end local v16    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_23;
	// 3153    .line 905
label_cond_108:
	cVar1 = this->msg->length();
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::INSERT_CHAR, cVar1, 0x0, 0x27);
	this->needsAutoQuoting = 0x1;
	goto label_goto_23;
	// 3185    .line 919
	// 3186    .end local p1    # "index":I
	// 3187    .restart local v16    # "index":I
label_cond_123:
	if ( !(parentType->hasPluralStyle()) )  
		goto label_cond_13c;
	if ( c != 0x23 )
		goto label_cond_13c;
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::REPLACE_NUMBER, ( cVar1 + -0x1), 0x1, 0x0);
	cVar1 = cVar1;
	//    .end local v16    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_23;
	// 3219    .line 923
	// 3220    .end local p1    # "index":I
	// 3221    .restart local v16    # "index":I
label_cond_13c:
	if ( c != 0x7b )
		goto label_cond_14d;
	cVar1 = this->parseArg(( cVar1 + -0x1), 0x1, nestingLevel);
	//    .end local v16    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_23;
	// 3244    .line 925
	// 3245    .end local p1    # "index":I
	// 3246    .restart local v16    # "index":I
label_cond_14d:
	if ( nestingLevel <= 0 )
		goto label_cond_172;
	if ( c != 0x7d )
		goto label_cond_172;
label_cond_153:
	if ( parentType != android::icu::text::MessagePattern_S_ArgType::CHOICE )
		goto label_cond_180;
	if ( c != 0x7d )
		goto label_cond_180;
	//    .local v8, "limitLength":I
label_goto_15e:
	this->addLimitPart(msgStart, android::icu::text::MessagePattern_S_Part_S_Type::MSG_LIMIT, ( cVar1 + -0x1), limitLength, nestingLevel);
	if ( parentType != android::icu::text::MessagePattern_S_ArgType::CHOICE )
		goto label_cond_182;
	return ( cVar1 + -0x1);
	// 3293    .line 925
	// 3294    .end local v8    # "limitLength":I
label_cond_172:
	if ( parentType != android::icu::text::MessagePattern_S_ArgType::CHOICE )
		goto label_cond_17c;
	if ( c == 0x7c )
		goto label_cond_153;
label_cond_17c:
	cVar1 = cVar1;
	//    .end local v16    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_23;
	// 3313    .line 929
	// 3314    .end local p1    # "index":I
	// 3315    .restart local v16    # "index":I
label_cond_180:
	//    .restart local v8    # "limitLength":I
	goto label_goto_15e;
	// 3322    .line 936
label_cond_182:
	return cVar1;
	// 3326    .line 940
	// 3327    .end local v8    # "limitLength":I
	// 3328    .end local v15    # "c":C
	// 3329    .end local v16    # "index":I
	// 3330    .restart local p1    # "index":I
label_cond_183:
	if ( nestingLevel <= 0 )
		goto label_cond_1b1;
	if ( !(( this->inTopLevelChoiceMessage(nestingLevel, parentType) ^ 0x1)) )  
		goto label_cond_1b1;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unmatched \'{\' braces in message ")))->append(this->prefix())->toString());
	// throw
	throw cVar2;
	// 3379    .line 944
label_cond_1b1:
	this->addLimitPart(msgStart, android::icu::text::MessagePattern_S_Part_S_Type::MSG_LIMIT, cVar1, 0x0, nestingLevel);
	return cVar1;

}
// .method private parsePluralOrSelectStyle(Landroid/icu/text/MessagePattern$ArgType;II)I
int android::icu::text::MessagePattern::parsePluralOrSelectStyle(std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> argType,int index,int nestingLevel)
{
	
	int start;
	int isEmpty;
	int index;
	int eos;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int length;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar10;
	std::shared_ptr<java::lang::StringBuilder> cVar11;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar12;
	std::shared_ptr<java::lang::StringBuilder> cVar13;
	int valueIndex;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar14;
	std::shared_ptr<java::lang::StringBuilder> cVar15;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar16;
	std::shared_ptr<java::lang::StringBuilder> cVar17;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar18;
	std::shared_ptr<java::lang::StringBuilder> cVar19;
	
	//    .param p1, "argType"    # Landroid/icu/text/MessagePattern$ArgType;
	//    .param p2, "index"    # I
	//    .param p3, "nestingLevel"    # I
	start = index;
	//    .local v6, "start":I
	isEmpty = 0x1;
	//    .local v3, "isEmpty":Z
	//    .local v1, "hasOther":Z
label_goto_3:
	index = this->skipWhiteSpace(index);
	if ( index != this->msg->length() )
		goto label_cond_55;
	eos = 0x1;
	//    .local v0, "eos":Z
label_goto_10:
	if ( eos )     
		goto label_cond_1c;
	if ( this->msg->charAt(index) != 0x7d )
		goto label_cond_8d;
label_cond_1c:
	if ( eos != this->inMessageFormatPattern(nestingLevel) )
		goto label_cond_57;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad ")))->append(argType->toString()->toLowerCase(java::util::Locale::ENGLISH))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" pattern syntax: ")))->append(this->prefix(start))->toString());
	// throw
	throw cVar0;
	// 3515    .line 1145
	// 3516    .end local v0    # "eos":Z
label_cond_55:
	eos = 0x0;
	//    .restart local v0    # "eos":Z
	goto label_goto_10;
	// 3523    .line 1153
label_cond_57:
	if ( 0x0 )     
		goto label_cond_8c;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing \'other\' keyword in ")))->append(argType->toString()->toLowerCase(java::util::Locale::ENGLISH))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" pattern in ")))->append(this->prefix())->toString());
	// throw
	throw cVar2;
	// 3584    .line 1159
label_cond_8c:
	return index;
	// 3588    .line 1161
label_cond_8d:
	index;
	//    .local v5, "selectorIndex":I
	if ( !(argType->hasPluralStyle()) )  
		goto label_cond_154;
	if ( this->msg->charAt(index) != 0x3d )
		goto label_cond_154;
	index = this->skipDouble(( index + 0x1));
	//    .end local p2    # "index":I
	//    .local v2, "index":I
	length = (index - index);
	//    .local v4, "length":I
	if ( length != 0x1 )
		goto label_cond_dc;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad ")))->append(argType->toString()->toLowerCase(java::util::Locale::ENGLISH))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" pattern syntax: ")))->append(this->prefix(start))->toString());
	// throw
	throw cVar4;
	// 3685    .line 1172
label_cond_dc:
	if ( length <= 0xffff )
		goto label_cond_ff;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument selector too long: ")))->append(this->prefix(index))->toString());
	// throw
	throw cVar6;
	// 3722    .line 1176
label_cond_ff:
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::ARG_SELECTOR, index, length, 0x0);
	this->parseDouble(( index + 0x1), index, 0x0);
label_cond_10b:
label_goto_10b:
	index = this->skipWhiteSpace(index);
	if ( index == this->msg->length() )
		goto label_cond_121;
	if ( this->msg->charAt(index) == 0x7b )
		goto label_cond_25b;
label_cond_121:
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<java::lang::IllegalArgumentException>(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("No message fragment after ")))->append(argType->toString()->toLowerCase(java::util::Locale::ENGLISH))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" selector: ")))->append(this->prefix(index))->toString());
	// throw
	throw cVar8;
	// 3821    .line 1179
	// 3822    .end local v2    # "index":I
	// 3823    .end local v4    # "length":I
	// 3824    .restart local p2    # "index":I
label_cond_154:
	index = this->skipIdentifier(index);
	//    .end local p2    # "index":I
	//    .restart local v2    # "index":I
	length = (index - index);
	//    .restart local v4    # "length":I
	if ( length )     
		goto label_cond_18f;
	cVar11 = std::make_shared<java::lang::StringBuilder>();
	cVar10 = std::make_shared<java::lang::IllegalArgumentException>(cVar11->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad ")))->append(argType->toString()->toLowerCase(java::util::Locale::ENGLISH))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" pattern syntax: ")))->append(this->prefix(start))->toString());
	// throw
	throw cVar10;
	// 3896    .line 1188
label_cond_18f:
	if ( !(argType->hasPluralStyle()) )  
		goto label_cond_223;
	if ( length != 0x6 )
		goto label_cond_223;
	if ( index >= this->msg->length() )
		goto label_cond_223;
	if ( !(this->msg->regionMatches(index, std::make_shared<java::lang::String>(std::make_shared<char[]>("offset:")), 0x0, 0x7)) )  
		goto label_cond_223;
	if ( isEmpty )     
		goto label_cond_1cd;
	cVar13 = std::make_shared<java::lang::StringBuilder>();
	cVar12 = std::make_shared<java::lang::IllegalArgumentException>(cVar13->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Plural argument \'offset:\' (if present) must precede key-message pairs: ")))->append(this->prefix(start))->toString());
	// throw
	throw cVar12;
	// 3968    .line 1198
label_cond_1cd:
	valueIndex = this->skipWhiteSpace(( index + 0x1));
	//    .local v7, "valueIndex":I
	index = this->skipDouble(valueIndex);
	//    .end local v2    # "index":I
	//    .restart local p2    # "index":I
	if ( index != valueIndex )
		goto label_cond_1f7;
	cVar15 = std::make_shared<java::lang::StringBuilder>();
	cVar14 = std::make_shared<java::lang::IllegalArgumentException>(cVar15->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing value for plural \'offset:\' ")))->append(this->prefix(start))->toString());
	// throw
	throw cVar14;
	// 4018    .line 1204
label_cond_1f7:
	if ( (index - valueIndex) <= 0xffff )
		goto label_cond_21c;
	cVar17 = std::make_shared<java::lang::StringBuilder>();
	cVar16 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar17->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Plural offset value too long: ")))->append(this->prefix(valueIndex))->toString());
	// throw
	throw cVar16;
	// 4057    .line 1208
label_cond_21c:
	this->parseDouble(valueIndex, index, 0x0);
	isEmpty = 0x0;
	goto label_goto_3;
	// 4069    .line 1213
	// 4070    .end local v7    # "valueIndex":I
	// 4071    .end local p2    # "index":I
	// 4072    .restart local v2    # "index":I
label_cond_223:
	if ( length <= 0xffff )
		goto label_cond_246;
	cVar19 = std::make_shared<java::lang::StringBuilder>();
	cVar18 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar19->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument selector too long: ")))->append(this->prefix(index))->toString());
	// throw
	throw cVar18;
	// 4109    .line 1217
label_cond_246:
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::ARG_SELECTOR, index, length, 0x0);
	if ( !(this->msg->regionMatches(index, std::make_shared<java::lang::String>(std::make_shared<char[]>("other")), 0x0, length)) )  
		goto label_cond_10b;
	0x1;
	goto label_goto_10b;
	// 4135    .line 1232
label_cond_25b:
	//    .end local v2    # "index":I
	//    .restart local p2    # "index":I
	0x0;
	goto label_goto_3;

}
// .method private parseSimpleStyle(I)I
int android::icu::text::MessagePattern::parseSimpleStyle(int index)
{
	
	int cVar0;
	int start;
	int nestedBraces;
	int index;
	int c;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	int length;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	//    .param p1, "index"    # I
	cVar0 = 0x27;
	start = index;
	//    .local v4, "start":I
	nestedBraces = 0x0;
	//    .local v3, "nestedBraces":I
label_goto_5:
	if ( index >= this->msg->length() )
		goto label_cond_7f;
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .local v1, "index":I
	c = this->msg->charAt(index);
	//    .local v0, "c":C
	if ( c != cVar0 )
		goto label_cond_40;
	index = this->msg->indexOf(cVar0, index);
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	if ( index >= 0 )
		goto label_cond_3d;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Quoted literal argument style text reaches to the end of the message: ")))->append(this->prefix(start))->toString());
	// throw
	throw cVar1;
	// 4240    .line 1065
label_cond_3d:
	index = ( index + 0x1);
	goto label_goto_5;
	// 4246    .line 1066
	// 4247    .end local p1    # "index":I
	// 4248    .restart local v1    # "index":I
label_cond_40:
	if ( c != 0x7b )
		goto label_cond_48;
	nestedBraces = ( nestedBraces + 0x1);
	index = index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_5;
	// 4263    .line 1068
	// 4264    .end local p1    # "index":I
	// 4265    .restart local v1    # "index":I
label_cond_48:
	if ( c != 0x7d )
		goto label_cond_9d;
	if ( nestedBraces <= 0 )
		goto label_cond_52;
	nestedBraces = ( nestedBraces + -0x1);
	index = index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_5;
	// 4283    .line 1072
	// 4284    .end local p1    # "index":I
	// 4285    .restart local v1    # "index":I
label_cond_52:
	index = ( index + -0x1);
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	length = (index - start);
	//    .local v2, "length":I
	if ( length <= 0xffff )
		goto label_cond_79;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument style text too long: ")))->append(this->prefix(start))->toString());
	// throw
	throw cVar3;
	// 4330    .line 1077
label_cond_79:
	this->addPart(android::icu::text::MessagePattern_S_Part_S_Type::ARG_STYLE, start, length, 0x0);
	return index;
	// 4339    .line 1082
	// 4340    .end local v0    # "c":C
	// 4341    .end local v2    # "length":I
label_cond_7f:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unmatched \'{\' braces in message ")))->append(this->prefix())->toString());
	// throw
	throw cVar5;
	// 4373    .end local p1    # "index":I
	// 4374    .restart local v0    # "c":C
	// 4375    .restart local v1    # "index":I
label_cond_9d:
	index = index;
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	goto label_goto_5;

}
// .method private postParse()V
void android::icu::text::MessagePattern::postParse()
{
	
	return;

}
// .method private preParse(Ljava/lang/String;)V
void android::icu::text::MessagePattern::preParse(std::shared_ptr<java::lang::String> pattern)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	cVar0 = 0x0;
	if ( !(this->isFrozen()) )  
		goto label_cond_2c;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to parse(")))->append(android::icu::text::MessagePattern::prefix(pattern))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") on frozen MessagePattern instance.")))->toString());
	// throw
	throw cVar1;
	// 4443    .line 849
label_cond_2c:
	this->msg = pattern;
	this->hasArgNumbers = cVar0;
	this->hasArgNames = cVar0;
	this->needsAutoQuoting = cVar0;
	this->parts->clear();
	if ( !(this->numericValues) )  
		goto label_cond_42;
	this->numericValues->clear();
label_cond_42:
	return;

}
// .method private prefix()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePattern::prefix()
{
	
	return android::icu::text::MessagePattern::prefix(this->msg, 0x0);

}
// .method private prefix(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePattern::prefix(int start)
{
	
	//    .param p1, "start"    # I
	return android::icu::text::MessagePattern::prefix(this->msg, start);

}
// .method private static prefix(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePattern::prefix(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return android::icu::text::MessagePattern::prefix(s, 0x0);

}
// .method private static prefix(Ljava/lang/String;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePattern::prefix(std::shared_ptr<java::lang::String> s,int start)
{
	
	std::shared_ptr<java::lang::StringBuilder> prefix;
	std::shared_ptr<java::lang::String> s;
	int limit;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "start"    # I
	prefix = std::make_shared<java::lang::StringBuilder>(0x2c);
	//    .local v1, "prefix":Ljava/lang/StringBuilder;
	if ( start )     
		goto label_cond_2a;
	prefix->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")));
label_goto_f:
	//    .local v2, "substringLength":I
	if ( (s->length() - start) >  0x18 )
		goto label_cond_41;
	if ( start )     
		goto label_cond_3c;
	//    .end local p0    # "s":Ljava/lang/String;
label_goto_1b:
	prefix->append(s);
label_goto_1e:
	return prefix->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString();
	// 4578    .line 1506
	// 4579    .end local v2    # "substringLength":I
	// 4580    .restart local p0    # "s":Ljava/lang/String;
label_cond_2a:
	prefix->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[at pattern index ")))->append(start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] \")));
	goto label_goto_f;
	// 4598    .line 1510
	// 4599    .restart local v2    # "substringLength":I
label_cond_3c:
	s = s->substring(start);
	goto label_goto_1b;
	// 4607    .line 1512
label_cond_41:
	limit = ( ( start + 0x18) + -0x4);
	//    .local v0, "limit":I
	if ( !(java::lang::Character::isHighSurrogate(s->charAt(( limit + -0x1)))) )  
		goto label_cond_53;
label_cond_53:
	prefix->append(s, start, limit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ...")));
	goto label_goto_1e;

}
// .method private skipDouble(I)I
int android::icu::text::MessagePattern::skipDouble(int index)
{
	
	int c;
	int index;
	
	//    .param p1, "index"    # I
label_goto_0:
	if ( index >= this->msg->length() )
		goto label_cond_1b;
	c = this->msg->charAt(index);
	//    .local v0, "c":C
	if ( c >= 0x30 )
		goto label_cond_1c;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("+-."))->indexOf(c) >= 0 )
		goto label_cond_1c;
	//    .end local v0    # "c":C
label_cond_1b:
	return index;
	// 4684    .line 1393
	// 4685    .restart local v0    # "c":C
label_cond_1c:
	if ( c <= 0x39 )
		goto label_cond_2c;
	if ( c == 0x65 )
		goto label_cond_2c;
	if ( c == 0x45 )
		goto label_cond_2c;
	if ( c != 0x221e )
		goto label_cond_1b;
label_cond_2c:
	index = ( index + 0x1);
	goto label_goto_0;

}
// .method private skipIdentifier(I)I
int android::icu::text::MessagePattern::skipIdentifier(int index)
{
	
	//    .param p1, "index"    # I
	return android::icu::impl::PatternProps::skipIdentifier(this->msg, index);

}
// .method private skipWhiteSpace(I)I
int android::icu::text::MessagePattern::skipWhiteSpace(int index)
{
	
	//    .param p1, "index"    # I
	return android::icu::impl::PatternProps::skipWhiteSpace(this->msg, index);

}
// .method public static validateArgumentName(Ljava/lang/String;)I
int android::icu::text::MessagePattern::validateArgumentName(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	if ( android::icu::impl::PatternProps::isIdentifier(name) )     
		goto label_cond_8;
	return -0x2;
	// 4757    .line 349
label_cond_8:
	return android::icu::text::MessagePattern::parseArgNumber(name, 0x0, name->length());

}
// .method public autoQuoteApostropheDeep()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePattern::autoQuoteApostropheDeep()
{
	
	std::shared_ptr<java::lang::StringBuilder> modified;
	int i;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	if ( this->needsAutoQuoting )     
		goto label_cond_7;
	return this->msg;
	// 4788    .line 379
label_cond_7:
	modified = 0x0;
	//    .local v2, "modified":Ljava/lang/StringBuilder;
	//    .local v0, "count":I
	i = this->countParts();
	//    .end local v2    # "modified":Ljava/lang/StringBuilder;
	//    .local v1, "i":I
label_cond_d:
label_goto_d:
	if ( i <= 0 )
		goto label_cond_3f;
	i = ( i + -0x1);
	part = this->getPart(i);
	//    .local v3, "part":Landroid/icu/text/MessagePattern$Part;
	if ( part->getType() != android::icu::text::MessagePattern_S_Part_S_Type::INSERT_CHAR )
		goto label_cond_d;
	if ( modified )     
		goto label_cond_32;
	cVar0 = std::make_shared<java::lang::StringBuilder>(( this->msg->length() + 0xa));
	modified = cVar0->append(this->msg);
label_cond_32:
	modified->insert(android::icu::text::MessagePattern_S_Part::-get0(part), (char)(android::icu::text::MessagePattern_S_Part::-get4(part)));
	goto label_goto_d;
	// 4862    .line 391
	// 4863    .end local v3    # "part":Landroid/icu/text/MessagePattern$Part;
label_cond_3f:
	if ( modified )     
		goto label_cond_44;
	return this->msg;
	// 4872    .line 394
label_cond_44:
	return modified->toString();

}
// .method public clear()V
void android::icu::text::MessagePattern::clear()
{
	
	bool cVar0;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	
	cVar0 = 0x0;
	if ( !(this->isFrozen()) )  
		goto label_cond_11;
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to clear() a frozen MessagePattern instance.")));
	// throw
	throw cVar1;
	// 4907    .line 242
label_cond_11:
	this->msg = 0x0;
	this->hasArgNumbers = cVar0;
	this->hasArgNames = cVar0;
	this->needsAutoQuoting = cVar0;
	this->parts->clear();
	if ( !(this->numericValues) )  
		goto label_cond_27;
	this->numericValues->clear();
label_cond_27:
	return;

}
// .method public clearPatternAndSetApostropheMode(Landroid/icu/text/MessagePattern$ApostropheMode;)V
void android::icu::text::MessagePattern::clearPatternAndSetApostropheMode(std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> mode)
{
	
	//    .param p1, "mode"    # Landroid/icu/text/MessagePattern$ApostropheMode;
	this->clear();
	this->aposMode = mode;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::MessagePattern::clone()
{
	
	if ( !(this->isFrozen()) )  
		goto label_cond_7;
	return this;
	// 4968    .line 800
label_cond_7:
	return this->cloneAsThawed();

}
// .method public cloneAsThawed()Landroid/icu/text/MessagePattern;
std::shared_ptr<android::icu::text::MessagePattern> android::icu::text::MessagePattern::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar2;
	std::shared_ptr<android::icu::text::MessagePattern> newMsg;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::ArrayList> cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	
	try {
	//label_try_start_0:
	newMsg = this->clone();
	newMsg->checkCast("android::icu::text::MessagePattern");
	//label_try_end_6:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_22;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_6} :catch_22
	//    .local v1, "newMsg":Landroid/icu/text/MessagePattern;
	cVar0 = this->parts->clone();
	cVar0->checkCast("java::util::ArrayList");
	newMsg->parts = cVar0;
	if ( !(this->numericValues) )  
		goto label_cond_1e;
	cVar1 = this->numericValues->clone();
	cVar1->checkCast("java::util::ArrayList");
	newMsg->numericValues = cVar1;
label_cond_1e:
	newMsg->frozen = 0x0;
	return newMsg;
	// 5028    .line 814
	// 5029    .end local v1    # "newMsg":Landroid/icu/text/MessagePattern;
label_catch_22:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar2 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar2;

}
// .method public countParts()I
int android::icu::text::MessagePattern::countParts()
{
	
	return this->parts->size();

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::MessagePattern::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::MessagePattern> o;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return 0x1;
	// 5083    .line 270
label_cond_5:
	if ( !(other) )  
		goto label_cond_11;
	if ( this->getClass() == other->getClass() )
		goto label_cond_12;
label_cond_11:
	return cVar1;
label_cond_12:
	o = other;
	o->checkCast("android::icu::text::MessagePattern");
	//    .local v0, "o":Landroid/icu/text/MessagePattern;
	if ( !(this->aposMode->equals(o->aposMode)) )  
		goto label_cond_2f;
	if ( this->msg )     
		goto label_cond_30;
	if ( o->msg )     
		goto label_cond_2f;
label_goto_27:
	cVar1 = this->parts->equals(o->parts);
label_cond_2f:
	return cVar1;
	// 5142    .line 276
label_cond_30:
	if ( !(this->msg->equals(o->msg)) )  
		goto label_cond_2f;
	goto label_goto_27;

}
// .method public freeze()Landroid/icu/text/MessagePattern;
std::shared_ptr<android::icu::text::MessagePattern> android::icu::text::MessagePattern::freeze()
{
	
	this->frozen = 0x1;
	return this;

}
// .method public getApostropheMode()Landroid/icu/text/MessagePattern$ApostropheMode;
std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> android::icu::text::MessagePattern::getApostropheMode()
{
	
	return this->aposMode;

}
// .method public getLimitPartIndex(I)I
int android::icu::text::MessagePattern::getLimitPartIndex(int start)
{
	
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> cVar0;
	int limit;
	
	//    .param p1, "start"    # I
	cVar0 = this->parts->get(start);
	cVar0->checkCast("android::icu::text::MessagePattern_S_Part");
	limit = android::icu::text::MessagePattern_S_Part::-get2(cVar0);
	//    .local v0, "limit":I
	if ( limit >= start )
		goto label_cond_f;
	return start;
	// 5218    .line 511
label_cond_f:
	return limit;

}
// .method public getNumericValue(Landroid/icu/text/MessagePattern$Part;)D
double android::icu::text::MessagePattern::getNumericValue(std::shared_ptr<android::icu::text::MessagePattern_S_Part> part)
{
	
	auto type;
	std::shared_ptr<java::lang::Double> cVar0;
	
	//    .param p1, "part"    # Landroid/icu/text/MessagePattern$Part;
	type = android::icu::text::MessagePattern_S_Part::-get3(part);
	//    .local v0, "type":Landroid/icu/text/MessagePattern$Part$Type;
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::ARG_INT )
		goto label_cond_e;
	return (double)(android::icu::text::MessagePattern_S_Part::-get4(part));
	// 5248    .line 469
label_cond_e:
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::ARG_DOUBLE )
		goto label_cond_23;
	cVar0 = this->numericValues->get(android::icu::text::MessagePattern_S_Part::-get4(part));
	cVar0->checkCast("java::lang::Double");
	return cVar0->doubleValue();
	// 5273    .line 472
label_cond_23:
	return -0x3e6290cbac000000L;

}
// .method public getPart(I)Landroid/icu/text/MessagePattern$Part;
std::shared_ptr<android::icu::text::MessagePattern_S_Part> android::icu::text::MessagePattern::getPart(int i)
{
	
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> cVar0;
	
	//    .param p1, "i"    # I
	cVar0 = this->parts->get(i);
	cVar0->checkCast("android::icu::text::MessagePattern_S_Part");
	return cVar0;

}
// .method public getPartType(I)Landroid/icu/text/MessagePattern$Part$Type;
std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> android::icu::text::MessagePattern::getPartType(int i)
{
	
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> cVar0;
	
	//    .param p1, "i"    # I
	cVar0 = this->parts->get(i);
	cVar0->checkCast("android::icu::text::MessagePattern_S_Part");
	return android::icu::text::MessagePattern_S_Part::-get3(cVar0);

}
// .method public getPatternIndex(I)I
int android::icu::text::MessagePattern::getPatternIndex(int partIndex)
{
	
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> cVar0;
	
	//    .param p1, "partIndex"    # I
	cVar0 = this->parts->get(partIndex);
	cVar0->checkCast("android::icu::text::MessagePattern_S_Part");
	return android::icu::text::MessagePattern_S_Part::-get0(cVar0);

}
// .method public getPatternString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePattern::getPatternString()
{
	
	return this->msg;

}
// .method public getPluralOffset(I)D
double android::icu::text::MessagePattern::getPluralOffset(int pluralStart)
{
	
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	
	//    .param p1, "pluralStart"    # I
	part = this->parts->get(pluralStart);
	part->checkCast("android::icu::text::MessagePattern_S_Part");
	//    .local v0, "part":Landroid/icu/text/MessagePattern$Part;
	if ( !(android::icu::text::MessagePattern_S_Part::-get3(part)->hasNumericValue()) )  
		goto label_cond_17;
	return this->getNumericValue(part);
	// 5382    .line 494
label_cond_17:
	return 0x0;

}
// .method public getSubstring(Landroid/icu/text/MessagePattern$Part;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePattern::getSubstring(std::shared_ptr<android::icu::text::MessagePattern_S_Part> part)
{
	
	int index;
	
	//    .param p1, "part"    # Landroid/icu/text/MessagePattern$Part;
	index = android::icu::text::MessagePattern_S_Part::-get0(part);
	//    .local v0, "index":I
	return this->msg->substring(index, (android::icu::text::MessagePattern_S_Part::-get1(part) +  index));

}
// .method public hasNamedArguments()Z
bool android::icu::text::MessagePattern::hasNamedArguments()
{
	
	return this->hasArgNames;

}
// .method public hasNumberedArguments()Z
bool android::icu::text::MessagePattern::hasNumberedArguments()
{
	
	return this->hasArgNumbers;

}
// .method public hashCode()I
int android::icu::text::MessagePattern::hashCode()
{
	
	int cVar0;
	
	if ( !(this->msg) )  
		goto label_cond_1d;
	cVar0 = this->msg->hashCode();
label_goto_12:
	return (( (cVar0 +  ( this->aposMode->hashCode() * 0x25)) * 0x25) +  this->parts->hashCode());
label_cond_1d:
	cVar0 = 0x0;
	goto label_goto_12;

}
// .method public isFrozen()Z
bool android::icu::text::MessagePattern::isFrozen()
{
	
	return this->frozen;

}
// .method jdkAposMode()Z
bool android::icu::text::MessagePattern::jdkAposMode()
{
	
	bool cVar0;
	
	if ( this->aposMode != android::icu::text::MessagePattern_S_ApostropheMode::DOUBLE_REQUIRED )
		goto label_cond_8;
	cVar0 = 0x1;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method public parse(Ljava/lang/String;)Landroid/icu/text/MessagePattern;
std::shared_ptr<android::icu::text::MessagePattern> android::icu::text::MessagePattern::parse(std::shared_ptr<java::lang::String> pattern)
{
	
	int cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	cVar0 = 0x0;
	this->preParse(pattern);
	this->parseMessage(cVar0, cVar0, cVar0, android::icu::text::MessagePattern_S_ArgType::NONE);
	this->postParse();
	return this;

}
// .method public parseChoiceStyle(Ljava/lang/String;)Landroid/icu/text/MessagePattern;
std::shared_ptr<android::icu::text::MessagePattern> android::icu::text::MessagePattern::parseChoiceStyle(std::shared_ptr<java::lang::String> pattern)
{
	
	int cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	cVar0 = 0x0;
	this->preParse(pattern);
	this->parseChoiceStyle(cVar0, cVar0);
	this->postParse();
	return this;

}
// .method public parsePluralStyle(Ljava/lang/String;)Landroid/icu/text/MessagePattern;
std::shared_ptr<android::icu::text::MessagePattern> android::icu::text::MessagePattern::parsePluralStyle(std::shared_ptr<java::lang::String> pattern)
{
	
	int cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	cVar0 = 0x0;
	this->preParse(pattern);
	this->parsePluralOrSelectStyle(android::icu::text::MessagePattern_S_ArgType::PLURAL, cVar0, cVar0);
	this->postParse();
	return this;

}
// .method public parseSelectStyle(Ljava/lang/String;)Landroid/icu/text/MessagePattern;
std::shared_ptr<android::icu::text::MessagePattern> android::icu::text::MessagePattern::parseSelectStyle(std::shared_ptr<java::lang::String> pattern)
{
	
	int cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	cVar0 = 0x0;
	this->preParse(pattern);
	this->parsePluralOrSelectStyle(android::icu::text::MessagePattern_S_ArgType::SELECT, cVar0, cVar0);
	this->postParse();
	return this;

}
// .method public partSubstringMatches(Landroid/icu/text/MessagePattern$Part;Ljava/lang/String;)Z
bool android::icu::text::MessagePattern::partSubstringMatches(std::shared_ptr<android::icu::text::MessagePattern_S_Part> part,std::shared_ptr<java::lang::String> s)
{
	
	int cVar1;
	bool cVar1;
	
	//    .param p1, "part"    # Landroid/icu/text/MessagePattern$Part;
	//    .param p2, "s"    # Ljava/lang/String;
	cVar1 = 0x0;
	if ( android::icu::text::MessagePattern_S_Part::-get1(part) != s->length() )
		goto label_cond_19;
	cVar1 = this->msg->regionMatches(android::icu::text::MessagePattern_S_Part::-get0(part), s, cVar1, android::icu::text::MessagePattern_S_Part::-get1(part));
label_cond_19:
	return cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePattern::toString()
{
	
	return this->msg;

}


