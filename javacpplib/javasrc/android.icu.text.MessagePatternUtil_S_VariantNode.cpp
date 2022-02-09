// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil$VariantNode.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePatternUtil_S_MessageNode.h"
#include "android.icu.text.MessagePatternUtil_S_Node.h"
#include "android.icu.text.MessagePatternUtil_S_VariantNode.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method static synthetic -set0(Landroid/icu/text/MessagePatternUtil$VariantNode;Landroid/icu/text/MessagePatternUtil$MessageNode;)Landroid/icu/text/MessagePatternUtil$MessageNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> android::icu::text::MessagePatternUtil_S_VariantNode::_set0(std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> _this,std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$VariantNode;
	//    .param p1, "-value"    # Landroid/icu/text/MessagePatternUtil$MessageNode;
	_this->msgNode = _value;
	return _value;

}
// .method static synthetic -set1(Landroid/icu/text/MessagePatternUtil$VariantNode;D)D
double android::icu::text::MessagePatternUtil_S_VariantNode::_set1(std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> _this,double _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$VariantNode;
	//    .param p1, "-value"    # D
	_this->numericValue = _value;
	return _value;

}
// .method static synthetic -set2(Landroid/icu/text/MessagePatternUtil$VariantNode;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_VariantNode::_set2(std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> _this,std::shared_ptr<java::lang::String> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$VariantNode;
	//    .param p1, "-value"    # Ljava/lang/String;
	_this->selector = _value;
	return _value;

}
// .method private constructor <init>()V
android::icu::text::MessagePatternUtil_S_VariantNode::MessagePatternUtil_S_VariantNode()
{
	
	android::icu::text::MessagePatternUtil_S_Node::(0x0);
	this->numericValue = -0x3e6290cbac000000L;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/MessagePatternUtil$VariantNode;)V
android::icu::text::MessagePatternUtil_S_VariantNode::MessagePatternUtil_S_VariantNode(std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/MessagePatternUtil$VariantNode;
	// 082    invoke-direct {p0}, Landroid/icu/text/MessagePatternUtil$VariantNode;-><init>()V
	return;

}
// .method public getMessage()Landroid/icu/text/MessagePatternUtil$MessageNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> android::icu::text::MessagePatternUtil_S_VariantNode::getMessage()
{
	
	return this->msgNode;

}
// .method public getSelector()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_VariantNode::getSelector()
{
	
	return this->selector;

}
// .method public getSelectorValue()D
double android::icu::text::MessagePatternUtil_S_VariantNode::getSelectorValue()
{
	
	return this->numericValue;

}
// .method public isSelectorNumeric()Z
bool android::icu::text::MessagePatternUtil_S_VariantNode::isSelectorNumeric()
{
	
	bool cVar0;
	
	if ( !((this->numericValue < -0x3e6290cbac000000L)) )  
		goto label_cond_d;
	cVar0 = 0x1;
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = 0x0;
	goto label_goto_c;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_VariantNode::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	if ( !(this->isSelectorNumeric()) )  
		goto label_cond_39;
	sb->append(this->numericValue)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" (")))->append(this->selector)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") {")));
label_goto_24:
	return sb->append(this->msgNode->toString())->append(0x7d)->toString();
	// 207    .line 410
label_cond_39:
	sb->append(this->selector)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" {")));
	goto label_goto_24;

}


