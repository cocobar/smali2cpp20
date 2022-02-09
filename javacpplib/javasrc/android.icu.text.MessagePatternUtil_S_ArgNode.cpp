// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil$ArgNode.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePattern_S_ArgType.h"
#include "android.icu.text.MessagePatternUtil_S_ArgNode.h"
#include "android.icu.text.MessagePatternUtil_S_ComplexArgStyleNode.h"
#include "android.icu.text.MessagePatternUtil_S_MessageContentsNode_S_Type.h"
#include "android.icu.text.MessagePatternUtil_S_MessageContentsNode.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method static synthetic -set0(Landroid/icu/text/MessagePatternUtil$ArgNode;Landroid/icu/text/MessagePattern$ArgType;)Landroid/icu/text/MessagePattern$ArgType;
std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> android::icu::text::MessagePatternUtil_S_ArgNode::_set0(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> _this,std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$ArgNode;
	//    .param p1, "-value"    # Landroid/icu/text/MessagePattern$ArgType;
	_this->argType = _value;
	return _value;

}
// .method static synthetic -set1(Landroid/icu/text/MessagePatternUtil$ArgNode;Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;)Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> android::icu::text::MessagePatternUtil_S_ArgNode::_set1(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> _this,std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$ArgNode;
	//    .param p1, "-value"    # Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
	_this->complexStyle = _value;
	return _value;

}
// .method static synthetic -set2(Landroid/icu/text/MessagePatternUtil$ArgNode;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_ArgNode::_set2(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> _this,std::shared_ptr<java::lang::String> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$ArgNode;
	//    .param p1, "-value"    # Ljava/lang/String;
	_this->name = _value;
	return _value;

}
// .method static synthetic -set3(Landroid/icu/text/MessagePatternUtil$ArgNode;I)I
int android::icu::text::MessagePatternUtil_S_ArgNode::_set3(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> _this,int _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$ArgNode;
	//    .param p1, "-value"    # I
	_this->number = _value;
	return _value;

}
// .method static synthetic -set4(Landroid/icu/text/MessagePatternUtil$ArgNode;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_ArgNode::_set4(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> _this,std::shared_ptr<java::lang::String> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$ArgNode;
	//    .param p1, "-value"    # Ljava/lang/String;
	_this->style = _value;
	return _value;

}
// .method static synthetic -set5(Landroid/icu/text/MessagePatternUtil$ArgNode;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_ArgNode::_set5(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> _this,std::shared_ptr<java::lang::String> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$ArgNode;
	//    .param p1, "-value"    # Ljava/lang/String;
	_this->typeName = _value;
	return _value;

}
// .method static synthetic -wrap0()Landroid/icu/text/MessagePatternUtil$ArgNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> android::icu::text::MessagePatternUtil_S_ArgNode::_wrap0()
{
	
	return android::icu::text::MessagePatternUtil_S_ArgNode::createArgNode({const[class].FS-Param});

}
// .method private constructor <init>()V
android::icu::text::MessagePatternUtil_S_ArgNode::MessagePatternUtil_S_ArgNode()
{
	
	android::icu::text::MessagePatternUtil_S_MessageContentsNode::(android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::ARG, 0x0);
	this->number = -0x1;
	return;

}
// .method private static createArgNode()Landroid/icu/text/MessagePatternUtil$ArgNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> android::icu::text::MessagePatternUtil_S_ArgNode::createArgNode()
{
	
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::MessagePatternUtil_S_ArgNode>();
	return cVar0;

}
// .method public getArgType()Landroid/icu/text/MessagePattern$ArgType;
std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> android::icu::text::MessagePatternUtil_S_ArgNode::getArgType()
{
	
	return this->argType;

}
// .method public getComplexStyle()Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> android::icu::text::MessagePatternUtil_S_ArgNode::getComplexStyle()
{
	
	return this->complexStyle;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_ArgNode::getName()
{
	
	return this->name;

}
// .method public getNumber()I
int android::icu::text::MessagePatternUtil_S_ArgNode::getNumber()
{
	
	return this->number;

}
// .method public getSimpleStyle()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_ArgNode::getSimpleStyle()
{
	
	return this->style;

}
// .method public getTypeName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_ArgNode::getTypeName()
{
	
	return this->typeName;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_ArgNode::toString()
{
	
	char cVar0;
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	cVar0 = 0x2c;
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	sb->append(0x7b)->append(this->name);
	if ( this->argType == android::icu::text::MessagePattern_S_ArgType::NONE )
		goto label_cond_34;
	sb->append(cVar0)->append(this->typeName);
	if ( this->argType != android::icu::text::MessagePattern_S_ArgType::SIMPLE )
		goto label_cond_3f;
	if ( !(this->style) )  
		goto label_cond_34;
	sb->append(cVar0)->append(this->style);
label_cond_34:
label_goto_34:
	return sb->append(0x7d)->toString();
	// 277    .line 251
label_cond_3f:
	sb->append(cVar0)->append(this->complexStyle->toString());
	goto label_goto_34;

}


