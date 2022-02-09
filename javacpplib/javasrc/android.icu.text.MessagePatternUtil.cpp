// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePattern_S_ArgType.h"
#include "android.icu.text.MessagePattern_S_Part_S_Type.h"
#include "android.icu.text.MessagePattern_S_Part.h"
#include "android.icu.text.MessagePattern.h"
#include "android.icu.text.MessagePatternUtil_S_ArgNode.h"
#include "android.icu.text.MessagePatternUtil_S_ComplexArgStyleNode.h"
#include "android.icu.text.MessagePatternUtil_S_MessageContentsNode.h"
#include "android.icu.text.MessagePatternUtil_S_MessageNode.h"
#include "android.icu.text.MessagePatternUtil_S_TextNode.h"
#include "android.icu.text.MessagePatternUtil_S_VariantNode.h"
#include "android.icu.text.MessagePatternUtil.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.String.h"

static android::icu::text::MessagePatternUtil::_android_icu_text_MessagePattern_S_ArgTypeSwitchesValues;
// .method private static synthetic -getandroid-icu-text-MessagePattern$ArgTypeSwitchesValues()[I
int android::icu::text::MessagePatternUtil::_getandroid_icu_text_MessagePattern_S_ArgTypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::text::MessagePatternUtil::_android_icu_text_MessagePattern_S_ArgTypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::text::MessagePatternUtil::_android_icu_text_MessagePattern_S_ArgTypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::text::MessagePattern_S_ArgType::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::text::MessagePattern_S_ArgType::CHOICE->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_51;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_51
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::text::MessagePattern_S_ArgType::NONE->ordinal()] = 0x6;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4f;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_4f
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::text::MessagePattern_S_ArgType::PLURAL->ordinal()] = 0x2;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4d;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_4d
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[android::icu::text::MessagePattern_S_ArgType::SELECT->ordinal()] = 0x3;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4b;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_4b
label_goto_32:
	try {
	//label_try_start_32:
	cVar0[android::icu::text::MessagePattern_S_ArgType::SELECTORDINAL->ordinal()] = 0x4;
	//label_try_end_3b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_49;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_32 .. :try_end_3b} :catch_49
label_goto_3b:
	try {
	//label_try_start_3b:
	cVar0[android::icu::text::MessagePattern_S_ArgType::SIMPLE->ordinal()] = 0x5;
	//label_try_end_44:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_47;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3b .. :try_end_44} :catch_47
label_goto_44:
	android::icu::text::MessagePatternUtil::_android_icu_text_MessagePattern_S_ArgTypeSwitchesValues = cVar0;
	return cVar0;
label_catch_47:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_44;
label_catch_49:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3b;
label_catch_4b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_4d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_4f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_51:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method private constructor <init>()V
android::icu::text::MessagePatternUtil::MessagePatternUtil()
{
	
	// 169    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static buildArgNode(Landroid/icu/text/MessagePattern;II)Landroid/icu/text/MessagePatternUtil$ArgNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> android::icu::text::MessagePatternUtil::buildArgNode(std::shared_ptr<android::icu::text::MessagePattern> pattern,int start,int limit)
{
	
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> node;
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> argType;
	int cVar0;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	int cVar1;
	int start;
	
	//    .param p0, "pattern"    # Landroid/icu/text/MessagePattern;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	node = android::icu::text::MessagePatternUtil_S_ArgNode::-wrap0({const[class].FS-Param});
	//    .local v1, "node":Landroid/icu/text/MessagePatternUtil$ArgNode;
	//    .local v2, "part":Landroid/icu/text/MessagePattern$Part;
	argType = android::icu::text::MessagePatternUtil_S_ArgNode::-set0(node, pattern->getPart(start)->getArgType());
	//    .local v0, "argType":Landroid/icu/text/MessagePattern$ArgType;
	cVar0 = ( start + 0x1);
	part = pattern->getPart(cVar0);
	android::icu::text::MessagePatternUtil_S_ArgNode::-set2(node, pattern->getSubstring(part));
	if ( part->getType() != android::icu::text::MessagePattern_S_Part_S_Type::ARG_NUMBER )
		goto label_cond_2c;
	android::icu::text::MessagePatternUtil_S_ArgNode::-set3(node, part->getValue());
label_cond_2c:
	cVar1 = ( cVar0 + 0x1);
	// switch
	{
	auto item = ( android::icu::text::MessagePatternUtil::-getandroid-icu-text-MessagePattern$ArgTypeSwitchesValues({const[class].FS-Param})[argType->ordinal()] );
	if (item == 1) goto label_pswitch_58;
	if (item == 2) goto label_pswitch_66;
	if (item == 3) goto label_pswitch_74;
	if (item == 4) goto label_pswitch_82;
	if (item == 5) goto label_pswitch_3c;
	}
label_goto_3b:
	return node;
	// 255    .line 466
label_pswitch_3c:
	start = ( cVar1 + 0x1);
	//    .end local p1    # "start":I
	//    .local v3, "start":I
	android::icu::text::MessagePatternUtil_S_ArgNode::-set5(node, pattern->getSubstring(pattern->getPart(cVar1)));
	if ( start >= limit )
		goto label_cond_56;
	android::icu::text::MessagePatternUtil_S_ArgNode::-set4(node, pattern->getSubstring(pattern->getPart(start)));
label_cond_56:
	start;
	//    .end local v3    # "start":I
	//    .restart local p1    # "start":I
	goto label_goto_3b;
	// 293    .line 473
label_pswitch_58:
	android::icu::text::MessagePatternUtil_S_ArgNode::-set5(node, std::make_shared<java::lang::String>(std::make_shared<char[]>("choice")));
	android::icu::text::MessagePatternUtil_S_ArgNode::-set1(node, android::icu::text::MessagePatternUtil::buildChoiceStyleNode(pattern, cVar1, limit));
	goto label_goto_3b;
	// 308    .line 477
label_pswitch_66:
	android::icu::text::MessagePatternUtil_S_ArgNode::-set5(node, std::make_shared<java::lang::String>(std::make_shared<char[]>("plural")));
	android::icu::text::MessagePatternUtil_S_ArgNode::-set1(node, android::icu::text::MessagePatternUtil::buildPluralStyleNode(pattern, cVar1, limit, argType));
	goto label_goto_3b;
	// 323    .line 481
label_pswitch_74:
	android::icu::text::MessagePatternUtil_S_ArgNode::-set5(node, std::make_shared<java::lang::String>(std::make_shared<char[]>("select")));
	android::icu::text::MessagePatternUtil_S_ArgNode::-set1(node, android::icu::text::MessagePatternUtil::buildSelectStyleNode(pattern, cVar1, limit));
	goto label_goto_3b;
	// 338    .line 485
label_pswitch_82:
	android::icu::text::MessagePatternUtil_S_ArgNode::-set5(node, std::make_shared<java::lang::String>(std::make_shared<char[]>("selectordinal")));
	android::icu::text::MessagePatternUtil_S_ArgNode::-set1(node, android::icu::text::MessagePatternUtil::buildPluralStyleNode(pattern, cVar1, limit, argType));
	goto label_goto_3b;
	// 353    .line 463
	// 354    :pswitch_data_90
	// 355    .packed-switch 0x1
	// 356        :pswitch_58
	// 357        :pswitch_66
	// 358        :pswitch_74
	// 359        :pswitch_82
	// 360        :pswitch_3c
	// 361    .end packed-switch

}
// .method private static buildChoiceStyleNode(Landroid/icu/text/MessagePattern;II)Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> android::icu::text::MessagePatternUtil::buildChoiceStyleNode(std::shared_ptr<android::icu::text::MessagePattern> pattern,int start,int limit)
{
	
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> cVar0;
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> node;
	int cVar1;
	int msgLimit;
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> variant;
	int start;
	
	//    .param p0, "pattern"    # Landroid/icu/text/MessagePattern;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	cVar0 = 0x0;
	node = std::make_shared<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode>(android::icu::text::MessagePattern_S_ArgType::CHOICE, cVar0);
	//    .local v1, "node":Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
label_goto_8:
	if ( start >= limit )
		goto label_cond_3b;
	//    .local v3, "valueIndex":I
	//    .local v2, "part":Landroid/icu/text/MessagePattern$Part;
	//    .local v4, "value":D
	cVar1 = ( start + 0x2);
	msgLimit = pattern->getLimitPartIndex(cVar1);
	//    .local v0, "msgLimit":I
	variant = std::make_shared<android::icu::text::MessagePatternUtil_S_VariantNode>(cVar0);
	//    .local v6, "variant":Landroid/icu/text/MessagePatternUtil$VariantNode;
	android::icu::text::MessagePatternUtil_S_VariantNode::-set2(variant, pattern->getSubstring(pattern->getPart(( start + 0x1))));
	android::icu::text::MessagePatternUtil_S_VariantNode::-set1(variant, pattern->getNumericValue(pattern->getPart(start)));
	android::icu::text::MessagePatternUtil_S_VariantNode::-set0(variant, android::icu::text::MessagePatternUtil::buildMessageNode(pattern, cVar1, msgLimit));
	android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::-wrap1(node, variant);
	start = ( msgLimit + 0x1);
	goto label_goto_8;
	// 447    .line 511
	// 448    .end local v0    # "msgLimit":I
	// 449    .end local v2    # "part":Landroid/icu/text/MessagePattern$Part;
	// 450    .end local v3    # "valueIndex":I
	// 451    .end local v4    # "value":D
	// 452    .end local v6    # "variant":Landroid/icu/text/MessagePatternUtil$VariantNode;
label_cond_3b:
	return android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::-wrap0(node);

}
// .method public static buildMessageNode(Landroid/icu/text/MessagePattern;)Landroid/icu/text/MessagePatternUtil$MessageNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> android::icu::text::MessagePatternUtil::buildMessageNode(std::shared_ptr<android::icu::text::MessagePattern> pattern)
{
	
	int cVar0;
	int limit;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p0, "pattern"    # Landroid/icu/text/MessagePattern;
	cVar0 = 0x0;
	limit = ( pattern->countParts() + -0x1);
	//    .local v0, "limit":I
	if ( limit >= 0 )
		goto label_cond_12;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The MessagePattern is empty")));
	// throw
	throw cVar1;
	// 488    .line 59
label_cond_12:
	if ( pattern->getPartType(cVar0) == android::icu::text::MessagePattern_S_Part_S_Type::MSG_START )
		goto label_cond_23;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The MessagePattern does not represent a MessageFormat pattern")));
	// throw
	throw cVar2;
	// 509    .line 63
label_cond_23:
	return android::icu::text::MessagePatternUtil::buildMessageNode(pattern, cVar0, limit);

}
// .method private static buildMessageNode(Landroid/icu/text/MessagePattern;II)Landroid/icu/text/MessagePatternUtil$MessageNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> android::icu::text::MessagePatternUtil::buildMessageNode(std::shared_ptr<android::icu::text::MessagePattern> pattern,int start,int limit)
{
	
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> cVar0;
	int prevPatternIndex;
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> node;
	int i;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	int patternIndex;
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_TextNode> cVar1;
	auto partType;
	int argLimit;
	
	//    .param p0, "pattern"    # Landroid/icu/text/MessagePattern;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	cVar0 = 0x0;
	prevPatternIndex = pattern->getPart(start)->getLimit();
	//    .local v6, "prevPatternIndex":I
	node = std::make_shared<android::icu::text::MessagePatternUtil_S_MessageNode>(cVar0);
	//    .local v2, "node":Landroid/icu/text/MessagePatternUtil$MessageNode;
	i = ( start + 0x1);
	//    .local v1, "i":I
label_goto_10:
	part = pattern->getPart(i);
	//    .local v3, "part":Landroid/icu/text/MessagePattern$Part;
	patternIndex = part->getIndex();
	//    .local v5, "patternIndex":I
	if ( prevPatternIndex >= patternIndex )
		goto label_cond_2a;
	cVar1 = std::make_shared<android::icu::text::MessagePatternUtil_S_TextNode>(pattern->getPatternString()->substring(prevPatternIndex, patternIndex), cVar0);
	android::icu::text::MessagePatternUtil_S_MessageNode::-wrap1(node, cVar1);
label_cond_2a:
	if ( i != limit )
		goto label_cond_31;
	return android::icu::text::MessagePatternUtil_S_MessageNode::-wrap0(node);
	// 590    .line 438
label_cond_31:
	partType = part->getType();
	//    .local v4, "partType":Landroid/icu/text/MessagePattern$Part$Type;
	if ( partType != android::icu::text::MessagePattern_S_Part_S_Type::ARG_START )
		goto label_cond_50;
	argLimit = pattern->getLimitPartIndex(i);
	//    .local v0, "argLimit":I
	android::icu::text::MessagePatternUtil_S_MessageNode::-wrap1(node, android::icu::text::MessagePatternUtil::buildArgNode(pattern, i, argLimit));
	i = argLimit;
	//    .end local v0    # "argLimit":I
label_cond_49:
label_goto_49:
	prevPatternIndex = part->getLimit();
	i = ( i + 0x1);
	goto label_goto_10;
	// 636    .line 444
label_cond_50:
	if ( partType != android::icu::text::MessagePattern_S_Part_S_Type::REPLACE_NUMBER )
		goto label_cond_49;
	android::icu::text::MessagePatternUtil_S_MessageNode::-wrap1(node, android::icu::text::MessagePatternUtil_S_MessageContentsNode::-wrap0(node, android::icu::text::MessagePatternUtil_S_MessageContentsNode::-wrap0({const[class].FS-Param})));
	goto label_goto_49;

}
// .method public static buildMessageNode(Ljava/lang/String;)Landroid/icu/text/MessagePatternUtil$MessageNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> android::icu::text::MessagePatternUtil::buildMessageNode(std::shared_ptr<java::lang::String> patternString)
{
	
	std::shared_ptr<android::icu::text::MessagePattern> cVar0;
	
	//    .param p0, "patternString"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::text::MessagePattern>(patternString);
	return android::icu::text::MessagePatternUtil::buildMessageNode(cVar0);

}
// .method private static buildPluralStyleNode(Landroid/icu/text/MessagePattern;IILandroid/icu/text/MessagePattern$ArgType;)Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> android::icu::text::MessagePatternUtil::buildPluralStyleNode(std::shared_ptr<android::icu::text::MessagePattern> pattern,int start,int limit,std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> argType)
{
	
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> node;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> offset;
	int start;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	int msgLimit;
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> variant;
	
	//    .param p0, "pattern"    # Landroid/icu/text/MessagePattern;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "argType"    # Landroid/icu/text/MessagePattern$ArgType;
	node = std::make_shared<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode>(argType, 0x0);
	//    .local v1, "node":Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
	offset = pattern->getPart(start);
	//    .local v2, "offset":Landroid/icu/text/MessagePattern$Part;
	if ( !(offset->getType()->hasNumericValue()) )  
		goto label_cond_6a;
	android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::-set0(node, 0x1);
	android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::-set1(node, pattern->getNumericValue(offset));
	start = ( start + 0x1);
	//    .end local p1    # "start":I
	//    .local v5, "start":I
label_goto_22:
	if ( start >= limit )
		goto label_cond_65;
	start = ( start + 0x1);
	//    .end local v5    # "start":I
	//    .restart local p1    # "start":I
	//    .local v4, "selector":Landroid/icu/text/MessagePattern$Part;
	//    .local v6, "value":D
	part = pattern->getPart(start);
	//    .local v3, "part":Landroid/icu/text/MessagePattern$Part;
	if ( !(part->getType()->hasNumericValue()) )  
		goto label_cond_43;
	start = ( start + 0x1);
label_cond_43:
	msgLimit = pattern->getLimitPartIndex(start);
	//    .local v0, "msgLimit":I
	variant = std::make_shared<android::icu::text::MessagePatternUtil_S_VariantNode>(0x0);
	//    .local v8, "variant":Landroid/icu/text/MessagePatternUtil$VariantNode;
	android::icu::text::MessagePatternUtil_S_VariantNode::-set2(variant, pattern->getSubstring(pattern->getPart(start)));
	android::icu::text::MessagePatternUtil_S_VariantNode::-set1(variant, -0x3e6290cbac000000L);
	android::icu::text::MessagePatternUtil_S_VariantNode::-set0(variant, android::icu::text::MessagePatternUtil::buildMessageNode(pattern, start, msgLimit));
	android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::-wrap1(node, variant);
	start = ( msgLimit + 0x1);
	//    .end local p1    # "start":I
	//    .restart local v5    # "start":I
	goto label_goto_22;
	// 808    .line 540
	// 809    .end local v0    # "msgLimit":I
	// 810    .end local v3    # "part":Landroid/icu/text/MessagePattern$Part;
	// 811    .end local v4    # "selector":Landroid/icu/text/MessagePattern$Part;
	// 812    .end local v6    # "value":D
	// 813    .end local v8    # "variant":Landroid/icu/text/MessagePatternUtil$VariantNode;
label_cond_65:
	return android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::-wrap0(node);
	// 821    .end local v5    # "start":I
	// 822    .restart local p1    # "start":I
label_cond_6a:
	//    .end local p1    # "start":I
	//    .restart local v5    # "start":I
	goto label_goto_22;

}
// .method private static buildSelectStyleNode(Landroid/icu/text/MessagePattern;II)Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> android::icu::text::MessagePatternUtil::buildSelectStyleNode(std::shared_ptr<android::icu::text::MessagePattern> pattern,int start,int limit)
{
	
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> cVar0;
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> node;
	int start;
	int msgLimit;
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> variant;
	
	//    .param p0, "pattern"    # Landroid/icu/text/MessagePattern;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	cVar0 = 0x0;
	node = std::make_shared<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode>(android::icu::text::MessagePattern_S_ArgType::SELECT, cVar0);
	//    .local v1, "node":Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
	start = start;
	//    .end local p1    # "start":I
	//    .local v3, "start":I
label_goto_9:
	if ( start >= limit )
		goto label_cond_2f;
	start = ( start + 0x1);
	//    .end local v3    # "start":I
	//    .restart local p1    # "start":I
	//    .local v2, "selector":Landroid/icu/text/MessagePattern$Part;
	msgLimit = pattern->getLimitPartIndex(start);
	//    .local v0, "msgLimit":I
	variant = std::make_shared<android::icu::text::MessagePatternUtil_S_VariantNode>(cVar0);
	//    .local v4, "variant":Landroid/icu/text/MessagePatternUtil$VariantNode;
	android::icu::text::MessagePatternUtil_S_VariantNode::-set2(variant, pattern->getSubstring(pattern->getPart(start)));
	android::icu::text::MessagePatternUtil_S_VariantNode::-set0(variant, android::icu::text::MessagePatternUtil::buildMessageNode(pattern, start, msgLimit));
	android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::-wrap1(node, variant);
	start = ( msgLimit + 0x1);
	//    .end local p1    # "start":I
	//    .restart local v3    # "start":I
	goto label_goto_9;
	// 904    .line 555
	// 905    .end local v0    # "msgLimit":I
	// 906    .end local v2    # "selector":Landroid/icu/text/MessagePattern$Part;
	// 907    .end local v4    # "variant":Landroid/icu/text/MessagePatternUtil$VariantNode;
label_cond_2f:
	return android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::-wrap0(node);

}


