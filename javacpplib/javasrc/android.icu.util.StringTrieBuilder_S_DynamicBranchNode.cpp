// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$DynamicBranchNode.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_BranchHeadNode.h"
#include "android.icu.util.StringTrieBuilder_S_DynamicBranchNode.h"
#include "android.icu.util.StringTrieBuilder_S_IntermediateValueNode.h"
#include "android.icu.util.StringTrieBuilder_S_ListBranchNode.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder_S_SplitBranchNode.h"
#include "android.icu.util.StringTrieBuilder_S_ValueNode.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"

// .method public constructor <init>()V
android::icu::util::StringTrieBuilder_S_DynamicBranchNode::StringTrieBuilder_S_DynamicBranchNode()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	
	// 038    invoke-direct {p0}, Landroid/icu/util/StringTrieBuilder$ValueNode;-><init>()V
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->chars = cVar0;
	cVar1 = std::make_shared<java::util::ArrayList>();
	this->equal = cVar1;
	return;

}
// .method private find(C)I
int android::icu::util::StringTrieBuilder_S_DynamicBranchNode::find(char c)
{
	
	int start;
	int limit;
	int i;
	int middleChar;
	
	//    .param p1, "c"    # C
	start = 0x0;
	//    .local v3, "start":I
	limit = this->chars->length();
	//    .local v1, "limit":I
label_goto_7:
	if ( start >= limit )
		goto label_cond_1d;
	i = ( (start + limit) / 0x2);
	//    .local v0, "i":I
	middleChar = this->chars->charAt(i);
	//    .local v2, "middleChar":C
	if ( c >= middleChar )
		goto label_cond_17;
	limit = i;
	goto label_goto_7;
	// 101    .line 579
label_cond_17:
	if ( c != middleChar )
		goto label_cond_1a;
	return i;
	// 108    .line 582
label_cond_1a:
	start = ( i + 0x1);
	goto label_goto_7;
	// 114    .line 585
	// 115    .end local v0    # "i":I
	// 116    .end local v2    # "middleChar":C
label_cond_1d:
	return start;

}
// .method private register(Landroid/icu/util/StringTrieBuilder;II)Landroid/icu/util/StringTrieBuilder$Node;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> android::icu::util::StringTrieBuilder_S_DynamicBranchNode::register(std::shared_ptr<android::icu::util::StringTrieBuilder> builder,int start,int limit)
{
	
	int length;
	int middle;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_SplitBranchNode> cVar0;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_ListBranchNode> listNode;
	int c;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> node;
	int start;
	
	//    .param p1, "builder"    # Landroid/icu/util/StringTrieBuilder;
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	length = (limit - start);
	//    .local v1, "length":I
	if ( length <= builder->getMaxBranchLinearSubNodeLength() )
		goto label_cond_24;
	middle = (start + ( length / 0x2));
	//    .local v3, "middle":I
	cVar0 = std::make_shared<android::icu::util::StringTrieBuilder_S_SplitBranchNode>(this->chars->charAt(middle), this->register(builder, start, middle), this->register(builder, middle, limit));
	return android::icu::util::StringTrieBuilder::-wrap0(builder, cVar0);
	// 175    .line 557
	// 176    .end local v3    # "middle":I
label_cond_24:
	listNode = std::make_shared<android::icu::util::StringTrieBuilder_S_ListBranchNode>(length);
	//    .local v2, "listNode":Landroid/icu/util/StringTrieBuilder$ListBranchNode;
label_cond_29:
	c = this->chars->charAt(start);
	//    .local v0, "c":C
	node = this->equal->get(start);
	node->checkCast("android::icu::util::StringTrieBuilder_S_Node");
	//    .local v4, "node":Landroid/icu/util/StringTrieBuilder$Node;
	if ( node->getClass() != android::icu::util::StringTrieBuilder_S_ValueNode() )
		goto label_cond_4f;
	node->checkCast("android::icu::util::StringTrieBuilder_S_ValueNode");
	//    .end local v4    # "node":Landroid/icu/util/StringTrieBuilder$Node;
	listNode->add(c, node->value);
label_goto_46:
	start = ( start + 0x1);
	if ( start <  limit )
		goto label_cond_29;
	return android::icu::util::StringTrieBuilder::-wrap0(builder, listNode);
	// 232    .line 565
	// 233    .restart local v4    # "node":Landroid/icu/util/StringTrieBuilder$Node;
label_cond_4f:
	listNode->add(c, node->register(builder));
	goto label_goto_46;

}
// .method public add(Landroid/icu/util/StringTrieBuilder;Ljava/lang/CharSequence;II)Landroid/icu/util/StringTrieBuilder$Node;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> android::icu::util::StringTrieBuilder_S_DynamicBranchNode::add(std::shared_ptr<android::icu::util::StringTrieBuilder> builder,std::shared_ptr<java::lang::CharSequence> s,int start,int sValue)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int start;
	char c;
	int i;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> cVar1;
	
	//    .param p1, "builder"    # Landroid/icu/util/StringTrieBuilder;
	//    .param p2, "s"    # Ljava/lang/CharSequence;
	//    .param p3, "start"    # I
	//    .param p4, "sValue"    # I
	if ( start != s->length() )
		goto label_cond_17;
	if ( !(this->hasValue) )  
		goto label_cond_13;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate string.")));
	// throw
	throw cVar0;
	// 275    .line 518
label_cond_13:
	this->setValue(sValue);
	return this;
	// 282    .line 522
label_cond_17:
	start = ( start + 0x1);
	//    .end local p3    # "start":I
	//    .local v2, "start":I
	c = s->charAt(start);
	//    .local v0, "c":C
	i = this->find(c);
	//    .local v1, "i":I
	if ( i >= this->chars->length() )
		goto label_cond_43;
	if ( c != this->chars->charAt(i) )
		goto label_cond_43;
	cVar1 = this->equal->get(i);
	cVar1->checkCast("android::icu::util::StringTrieBuilder_S_Node");
	this->equal->set(i, cVar1->add(builder, s, start, sValue));
label_goto_42:
	return this;
	// 337    .line 527
label_cond_43:
	this->chars->insert(i, c);
	this->equal->add(i, android::icu::util::StringTrieBuilder::-wrap1(builder, s, start, sValue));
	goto label_goto_42;

}
// .method public add(CLandroid/icu/util/StringTrieBuilder$Node;)V
void android::icu::util::StringTrieBuilder_S_DynamicBranchNode::add(char c,std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> node)
{
	
	int i;
	
	//    .param p1, "c"    # C
	//    .param p2, "node"    # Landroid/icu/util/StringTrieBuilder$Node;
	i = this->find(c);
	//    .local v0, "i":I
	this->chars->insert(i, c);
	this->equal->add(i, node);
	return;

}
// .method public register(Landroid/icu/util/StringTrieBuilder;)Landroid/icu/util/StringTrieBuilder$Node;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> android::icu::util::StringTrieBuilder_S_DynamicBranchNode::register(std::shared_ptr<android::icu::util::StringTrieBuilder> builder)
{
	
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_BranchHeadNode> head;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_IntermediateValueNode> result;
	
	//    .param p1, "builder"    # Landroid/icu/util/StringTrieBuilder;
	//    .local v2, "subNode":Landroid/icu/util/StringTrieBuilder$Node;
	head = std::make_shared<android::icu::util::StringTrieBuilder_S_BranchHeadNode>(this->chars->length(), this->register(builder, 0x0, this->chars->length()));
	//    .local v0, "head":Landroid/icu/util/StringTrieBuilder$BranchHeadNode;
	//    .local v1, "result":Landroid/icu/util/StringTrieBuilder$Node;
	if ( !(this->hasValue) )  
		goto label_cond_26;
	if ( !(builder->matchNodesCanHaveValues()) )  
		goto label_cond_2b;
	head->setValue(this->value);
label_cond_26:
label_goto_26:
	return android::icu::util::StringTrieBuilder::-wrap0(builder, result);
	// 442    .line 541
label_cond_2b:
	//    .end local v1    # "result":Landroid/icu/util/StringTrieBuilder$Node;
	result = std::make_shared<android::icu::util::StringTrieBuilder_S_IntermediateValueNode>(this->value, android::icu::util::StringTrieBuilder::-wrap0(builder, head));
	//    .restart local v1    # "result":Landroid/icu/util/StringTrieBuilder$Node;
	goto label_goto_26;

}


