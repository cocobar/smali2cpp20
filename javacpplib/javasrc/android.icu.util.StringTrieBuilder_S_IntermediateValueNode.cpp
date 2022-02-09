// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$IntermediateValueNode.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_IntermediateValueNode.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.Object.h"

// .method public constructor <init>(ILandroid/icu/util/StringTrieBuilder$Node;)V
android::icu::util::StringTrieBuilder_S_IntermediateValueNode::StringTrieBuilder_S_IntermediateValueNode(int v,std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> nextNode)
{
	
	//    .param p1, "v"    # I
	//    .param p2, "nextNode"    # Landroid/icu/util/StringTrieBuilder$Node;
	// 029    invoke-direct {p0}, Landroid/icu/util/StringTrieBuilder$ValueNode;-><init>()V
	this->next = nextNode;
	this->setValue(v);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::StringTrieBuilder_S_IntermediateValueNode::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_IntermediateValueNode> o;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 058    .line 329
label_cond_5:
	if ( this->equals(other) )     
		goto label_cond_c;
	return cVar1;
label_cond_c:
	o = other;
	o->checkCast("android::icu::util::StringTrieBuilder_S_IntermediateValueNode");
	//    .local v0, "o":Landroid/icu/util/StringTrieBuilder$IntermediateValueNode;
	if ( this->next != o->next )
		goto label_cond_16;
label_goto_15:
	return cVar0;
label_cond_16:
	cVar0 = cVar1;
	goto label_goto_15;

}
// .method public hashCode()I
int android::icu::util::StringTrieBuilder_S_IntermediateValueNode::hashCode()
{
	
	return (( (this->value +  0x4eeeeea) * 0x25) +  this->next->hashCode());

}
// .method public markRightEdgesFirst(I)I
int android::icu::util::StringTrieBuilder_S_IntermediateValueNode::markRightEdgesFirst(int cVar0)
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
void android::icu::util::StringTrieBuilder_S_IntermediateValueNode::write(std::shared_ptr<android::icu::util::StringTrieBuilder> builder)
{
	
	//    .param p1, "builder"    # Landroid/icu/util/StringTrieBuilder;
	this->next->write(builder);
	this->offset = builder->writeValueAndFinal(this->value, 0x0);
	return;

}


