// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil$MessageNode.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePatternUtil_S_MessageContentsNode.h"
#include "android.icu.text.MessagePatternUtil_S_MessageNode.h"
#include "android.icu.text.MessagePatternUtil_S_Node.h"
#include "android.icu.text.MessagePatternUtil_S_TextNode.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.List.h"

// .method static synthetic -wrap0(Landroid/icu/text/MessagePatternUtil$MessageNode;)Landroid/icu/text/MessagePatternUtil$MessageNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> android::icu::text::MessagePatternUtil_S_MessageNode::_wrap0(std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$MessageNode;
	return _this->freeze();

}
// .method static synthetic -wrap1(Landroid/icu/text/MessagePatternUtil$MessageNode;Landroid/icu/text/MessagePatternUtil$MessageContentsNode;)V
void android::icu::text::MessagePatternUtil_S_MessageNode::_wrap1(std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> _this,std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode> node)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$MessageNode;
	//    .param p1, "node"    # Landroid/icu/text/MessagePatternUtil$MessageContentsNode;
	_this->addContentsNode(node);
	return;

}
// .method private constructor <init>()V
android::icu::text::MessagePatternUtil_S_MessageNode::MessagePatternUtil_S_MessageNode()
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	android::icu::text::MessagePatternUtil_S_Node::(0x0);
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->list = cVar0;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/MessagePatternUtil$MessageNode;)V
android::icu::text::MessagePatternUtil_S_MessageNode::MessagePatternUtil_S_MessageNode(std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/MessagePatternUtil$MessageNode;
	// 079    invoke-direct {p0}, Landroid/icu/text/MessagePatternUtil$MessageNode;-><init>()V
	return;

}
// .method private addContentsNode(Landroid/icu/text/MessagePatternUtil$MessageContentsNode;)V
void android::icu::text::MessagePatternUtil_S_MessageNode::addContentsNode(std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode> node)
{
	
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode> lastNode;
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_TextNode> textNode;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "node"    # Landroid/icu/text/MessagePatternUtil$MessageContentsNode;
	if ( !(node->instanceOf("android::icu::text::MessagePatternUtil_S_TextNode")) )  
		goto label_cond_44;
	if ( !(( this->list->isEmpty() ^ 0x1)) )  
		goto label_cond_44;
	lastNode = this->list->get(( this->list->size() + -0x1));
	lastNode->checkCast("android::icu::text::MessagePatternUtil_S_MessageContentsNode");
	//    .local v0, "lastNode":Landroid/icu/text/MessagePatternUtil$MessageContentsNode;
	if ( !(lastNode->instanceOf("android::icu::text::MessagePatternUtil_S_TextNode")) )  
		goto label_cond_44;
	textNode = lastNode;
	textNode->checkCast("android::icu::text::MessagePatternUtil_S_TextNode");
	//    .local v1, "textNode":Landroid/icu/text/MessagePatternUtil$TextNode;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	node->checkCast("android::icu::text::MessagePatternUtil_S_TextNode");
	//    .end local p1    # "node":Landroid/icu/text/MessagePatternUtil$MessageContentsNode;
	android::icu::text::MessagePatternUtil_S_TextNode::-set0(textNode, cVar0->append(android::icu::text::MessagePatternUtil_S_TextNode::-get0(textNode))->append(android::icu::text::MessagePatternUtil_S_TextNode::-get0(node))->toString());
	return;
	// 166    .line 106
	// 167    .end local v0    # "lastNode":Landroid/icu/text/MessagePatternUtil$MessageContentsNode;
	// 168    .end local v1    # "textNode":Landroid/icu/text/MessagePatternUtil$TextNode;
	// 169    .restart local p1    # "node":Landroid/icu/text/MessagePatternUtil$MessageContentsNode;
label_cond_44:
	this->list->add(node);
	return;

}
// .method private freeze()Landroid/icu/text/MessagePatternUtil$MessageNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> android::icu::text::MessagePatternUtil_S_MessageNode::freeze()
{
	
	this->list = java::util::Collections::unmodifiableList(this->list);
	return this;

}
// .method public getContents()Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::text::MessagePatternUtil_S_MessageContentsNode>> android::icu::text::MessagePatternUtil_S_MessageNode::getContents()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 201        value = {
	// 202            "()",
	// 203            "Ljava/util/List",
	// 204            "<",
	// 205            "Landroid/icu/text/MessagePatternUtil$MessageContentsNode;",
	// 206            ">;"
	// 207        }
	// 208    .end annotation
	return this->list;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_MessageNode::toString()
{
	
	return this->list->toString();

}


