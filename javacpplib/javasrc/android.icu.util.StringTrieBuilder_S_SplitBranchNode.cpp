// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$SplitBranchNode.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder_S_SplitBranchNode.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"

static android::icu::util::StringTrieBuilder_S_SplitBranchNode::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::util::StringTrieBuilder_S_SplitBranchNode::static_cinit()
{
	
	android::icu::util::StringTrieBuilder_S_SplitBranchNode::_assertionsDisabled = ( android::icu::util::StringTrieBuilder_S_SplitBranchNode()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(CLandroid/icu/util/StringTrieBuilder$Node;Landroid/icu/util/StringTrieBuilder$Node;)V
android::icu::util::StringTrieBuilder_S_SplitBranchNode::StringTrieBuilder_S_SplitBranchNode(char middleUnit,std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> lessThanNode,std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> greaterOrEqualNode)
{
	
	//    .param p1, "middleUnit"    # C
	//    .param p2, "lessThanNode"    # Landroid/icu/util/StringTrieBuilder$Node;
	//    .param p3, "greaterOrEqualNode"    # Landroid/icu/util/StringTrieBuilder$Node;
	// 056    invoke-direct {p0}, Landroid/icu/util/StringTrieBuilder$BranchNode;-><init>()V
	this->hash = (( (( (0xc555549 +  middleUnit) * 0x25) +  lessThanNode->hashCode()) * 0x25) +  greaterOrEqualNode->hashCode());
	this->unit = middleUnit;
	this->lessThan = lessThanNode;
	this->greaterOrEqual = greaterOrEqualNode;
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::StringTrieBuilder_S_SplitBranchNode::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_SplitBranchNode> o;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 115    .line 728
label_cond_5:
	if ( this->equals(other) )     
		goto label_cond_c;
	return cVar1;
label_cond_c:
	o = other;
	o->checkCast("android::icu::util::StringTrieBuilder_S_SplitBranchNode");
	//    .local v0, "o":Landroid/icu/util/StringTrieBuilder$SplitBranchNode;
	if ( this->unit != o->unit )
		goto label_cond_22;
	if ( this->lessThan != o->lessThan )
		goto label_cond_22;
	if ( this->greaterOrEqual != o->greaterOrEqual )
		goto label_cond_22;
label_goto_21:
	return cVar0;
label_cond_22:
	cVar0 = cVar1;
	goto label_goto_21;

}
// .method public hashCode()I
int android::icu::util::StringTrieBuilder_S_SplitBranchNode::hashCode()
{
	
	return this->hashCode();

}
// .method public markRightEdgesFirst(I)I
int android::icu::util::StringTrieBuilder_S_SplitBranchNode::markRightEdgesFirst(int cVar0)
{
	
	int cVar0;
	
	//    .param p1, "edgeNumber"    # I
	if ( this->offset )     
		goto label_cond_16;
	this->firstEdgeNumber = cVar0;
	cVar0 = this->lessThan->markRightEdgesFirst(( this->greaterOrEqual->markRightEdgesFirst(cVar0) + -0x1));
	this->offset = cVar0;
label_cond_16:
	return cVar0;

}
// .method public write(Landroid/icu/util/StringTrieBuilder;)V
void android::icu::util::StringTrieBuilder_S_SplitBranchNode::write(std::shared_ptr<android::icu::util::StringTrieBuilder> builder)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "builder"    # Landroid/icu/util/StringTrieBuilder;
	this->lessThan->writeUnlessInsideRightEdge(this->firstEdgeNumber, this->greaterOrEqual->getOffset(), builder);
	this->greaterOrEqual->write(builder);
	if ( android::icu::util::StringTrieBuilder_S_SplitBranchNode::_assertionsDisabled )     
		goto label_cond_24;
	if ( this->lessThan->getOffset() > 0 ) 
		goto label_cond_24;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 251    .line 755
label_cond_24:
	builder->writeDeltaTo(this->lessThan->getOffset());
	this->offset = builder->write(this->unit);
	return;

}


