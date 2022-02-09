// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$BranchHeadNode.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_BranchHeadNode.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.Object.h"

// .method public constructor <init>(ILandroid/icu/util/StringTrieBuilder$Node;)V
android::icu::util::StringTrieBuilder_S_BranchHeadNode::StringTrieBuilder_S_BranchHeadNode(int len,std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> subNode)
{
	
	//    .param p1, "len"    # I
	//    .param p2, "subNode"    # Landroid/icu/util/StringTrieBuilder$Node;
	// 031    invoke-direct {p0}, Landroid/icu/util/StringTrieBuilder$ValueNode;-><init>()V
	this->length = len;
	this->next = subNode;
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::StringTrieBuilder_S_BranchHeadNode::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_BranchHeadNode> o;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 060    .line 779
label_cond_5:
	if ( this->equals(other) )     
		goto label_cond_c;
	return cVar1;
label_cond_c:
	o = other;
	o->checkCast("android::icu::util::StringTrieBuilder_S_BranchHeadNode");
	//    .local v0, "o":Landroid/icu/util/StringTrieBuilder$BranchHeadNode;
	if ( this->length != o->length )
		goto label_cond_1c;
	if ( this->next != o->next )
		goto label_cond_1c;
label_goto_1b:
	return cVar0;
label_cond_1c:
	cVar0 = cVar1;
	goto label_goto_1b;

}
// .method public hashCode()I
int android::icu::util::StringTrieBuilder_S_BranchHeadNode::hashCode()
{
	
	return (( (this->length +  0xeccccbe) * 0x25) +  this->next->hashCode());

}
// .method public markRightEdgesFirst(I)I
int android::icu::util::StringTrieBuilder_S_BranchHeadNode::markRightEdgesFirst(int cVar0)
{
	
	int cVar0;
	
	//    .param p1, "edgeNumber"    # I
	if ( this->offset )     
		goto label_cond_c;
	cVar0 = this->next->markRightEdgesFirst(cVar0);
	this->offset = cVar0;
label_cond_c:
	return cVar0;

}
// .method public write(Landroid/icu/util/StringTrieBuilder;)V
void android::icu::util::StringTrieBuilder_S_BranchHeadNode::write(std::shared_ptr<android::icu::util::StringTrieBuilder> builder)
{
	
	//    .param p1, "builder"    # Landroid/icu/util/StringTrieBuilder;
	this->next->write(builder);
	if ( this->length >  builder->getMinLinearMatch() )
		goto label_cond_1c;
	this->offset = builder->writeValueAndType(this->hasValue, this->value, ( this->length + -0x1));
label_goto_1b:
	return;
	// 186    .line 798
label_cond_1c:
	builder->write(( this->length + -0x1));
	this->offset = builder->writeValueAndType(this->hasValue, this->value, 0x0);
	goto label_goto_1b;

}


