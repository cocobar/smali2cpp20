// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil$MessageContentsNode.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePatternUtil_S_MessageContentsNode_S_Type.h"
#include "android.icu.text.MessagePatternUtil_S_MessageContentsNode.h"
#include "android.icu.text.MessagePatternUtil_S_Node.h"
#include "java.lang.String.h"

// .method static synthetic -wrap0()Landroid/icu/text/MessagePatternUtil$MessageContentsNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode> android::icu::text::MessagePatternUtil_S_MessageContentsNode::_wrap0()
{
	
	return android::icu::text::MessagePatternUtil_S_MessageContentsNode::createReplaceNumberNode({const[class].FS-Param});

}
// .method private constructor <init>(Landroid/icu/text/MessagePatternUtil$MessageContentsNode$Type;)V
android::icu::text::MessagePatternUtil_S_MessageContentsNode::MessagePatternUtil_S_MessageContentsNode(std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> type)
{
	
	//    .param p1, "type"    # Landroid/icu/text/MessagePatternUtil$MessageContentsNode$Type;
	android::icu::text::MessagePatternUtil_S_Node::(0x0);
	this->type = type;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/MessagePatternUtil$MessageContentsNode$Type;Landroid/icu/text/MessagePatternUtil$MessageContentsNode;)V
android::icu::text::MessagePatternUtil_S_MessageContentsNode::MessagePatternUtil_S_MessageContentsNode(std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> type,std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode> _this1)
{
	
	//    .param p1, "type"    # Landroid/icu/text/MessagePatternUtil$MessageContentsNode$Type;
	//    .param p2, "-this1"    # Landroid/icu/text/MessagePatternUtil$MessageContentsNode;
	android::icu::text::MessagePatternUtil_S_MessageContentsNode::(type);
	return;

}
// .method private static createReplaceNumberNode()Landroid/icu/text/MessagePatternUtil$MessageContentsNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode> android::icu::text::MessagePatternUtil_S_MessageContentsNode::createReplaceNumberNode()
{
	
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::MessagePatternUtil_S_MessageContentsNode>(android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::REPLACE_NUMBER);
	return cVar0;

}
// .method public getType()Landroid/icu/text/MessagePatternUtil$MessageContentsNode$Type;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> android::icu::text::MessagePatternUtil_S_MessageContentsNode::getType()
{
	
	return this->type;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_MessageContentsNode::toString()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("{REPLACE_NUMBER}"));

}


