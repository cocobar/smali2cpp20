// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil$TextNode.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePatternUtil_S_MessageContentsNode_S_Type.h"
#include "android.icu.text.MessagePatternUtil_S_MessageContentsNode.h"
#include "android.icu.text.MessagePatternUtil_S_TextNode.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method static synthetic -get0(Landroid/icu/text/MessagePatternUtil$TextNode;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_TextNode::_get0(std::shared_ptr<android::icu::text::MessagePatternUtil_S_TextNode> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$TextNode;
	return _this->text;

}
// .method static synthetic -set0(Landroid/icu/text/MessagePatternUtil$TextNode;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_TextNode::_set0(std::shared_ptr<android::icu::text::MessagePatternUtil_S_TextNode> _this,std::shared_ptr<java::lang::String> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$TextNode;
	//    .param p1, "-value"    # Ljava/lang/String;
	_this->text = _value;
	return _value;

}
// .method private constructor <init>(Ljava/lang/String;)V
android::icu::text::MessagePatternUtil_S_TextNode::MessagePatternUtil_S_TextNode(std::shared_ptr<java::lang::String> text)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	android::icu::text::MessagePatternUtil_S_MessageContentsNode::(android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::TEXT, 0x0);
	this->text = text;
	return;

}
// .method synthetic constructor <init>(Ljava/lang/String;Landroid/icu/text/MessagePatternUtil$TextNode;)V
android::icu::text::MessagePatternUtil_S_TextNode::MessagePatternUtil_S_TextNode(std::shared_ptr<java::lang::String> text,std::shared_ptr<android::icu::text::MessagePatternUtil_S_TextNode> _this1)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "-this1"    # Landroid/icu/text/MessagePatternUtil$TextNode;
	android::icu::text::MessagePatternUtil_S_TextNode::(text);
	return;

}
// .method public getText()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_TextNode::getText()
{
	
	return this->text;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_TextNode::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u00ab")))->append(this->text)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u00bb")))->toString();

}


