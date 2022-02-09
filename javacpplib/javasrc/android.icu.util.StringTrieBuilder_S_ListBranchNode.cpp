// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$ListBranchNode.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_ListBranchNode.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"

static android::icu::util::StringTrieBuilder_S_ListBranchNode::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::util::StringTrieBuilder_S_ListBranchNode::static_cinit()
{
	
	android::icu::util::StringTrieBuilder_S_ListBranchNode::_assertionsDisabled = ( android::icu::util::StringTrieBuilder_S_ListBranchNode()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(I)V
android::icu::util::StringTrieBuilder_S_ListBranchNode::StringTrieBuilder_S_ListBranchNode(int capacity)
{
	
	//    .param p1, "capacity"    # I
	// 056    invoke-direct {p0}, Landroid/icu/util/StringTrieBuilder$BranchNode;-><init>()V
	this->hash = (0x9ddddd4 +  capacity);
	this->equal = std::make_shared<std::vector<std::vector<android::icu::util::StringTrieBuilder_S_Node>>>(capacity);
	this->values = std::make_shared<std::vector<int[]>>(capacity);
	this->units = std::make_shared<std::vector<char[]>>(capacity);
	return;

}
// .method public add(II)V
void android::icu::util::StringTrieBuilder_S_ListBranchNode::add(int c,int value)
{
	
	//    .param p1, "c"    # I
	//    .param p2, "value"    # I
	this->units[this->length] = (char)(c);
	this->equal[this->length] = 0x0;
	this->values[this->length] = value;
	this->length = ( this->length + 0x1);
	this->hash = (( (( this->hash * 0x25) +  c) * 0x25) +  value);
	return;

}
// .method public add(ILandroid/icu/util/StringTrieBuilder$Node;)V
void android::icu::util::StringTrieBuilder_S_ListBranchNode::add(int c,std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> node)
{
	
	//    .param p1, "c"    # I
	//    .param p2, "node"    # Landroid/icu/util/StringTrieBuilder$Node;
	this->units[this->length] = (char)(c);
	this->equal[this->length] = node;
	this->values[this->length] = 0x0;
	this->length = ( this->length + 0x1);
	this->hash = (( (( this->hash * 0x25) +  c) * 0x25) +  node->hashCode());
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::StringTrieBuilder_S_ListBranchNode::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_ListBranchNode> o;
	int i;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 215    .line 613
label_cond_5:
	if ( this->equals(other) )     
		goto label_cond_c;
	return cVar1;
label_cond_c:
	o = other;
	o->checkCast("android::icu::util::StringTrieBuilder_S_ListBranchNode");
	//    .local v1, "o":Landroid/icu/util/StringTrieBuilder$ListBranchNode;
	i = 0x0;
	//    .local v0, "i":I
label_goto_10:
	if ( i >= this->length )
		goto label_cond_36;
	if ( this->units[i] != o->units[i] )
		goto label_cond_28;
	if ( this->values[i] == o->values[i] )
		goto label_cond_29;
label_cond_28:
	return cVar1;
	// 267    .line 618
label_cond_29:
	if ( this->equal[i] != o->equal[i] )
		goto label_cond_28;
	i = ( i + 0x1);
	goto label_goto_10;
	// 284    .line 622
label_cond_36:
	return cVar0;

}
// .method public hashCode()I
int android::icu::util::StringTrieBuilder_S_ListBranchNode::hashCode()
{
	
	return this->hashCode();

}
// .method public markRightEdgesFirst(I)I
int android::icu::util::StringTrieBuilder_S_ListBranchNode::markRightEdgesFirst(int edgeNumber)
{
	
	int step;
	int i;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> edge;
	int edgeNumber;
	
	//    .param p1, "edgeNumber"    # I
	if ( this->offset )     
		goto label_cond_1c;
	this->firstEdgeNumber = edgeNumber;
	step = 0x0;
	//    .local v2, "step":I
	//    .local v1, "i":I
label_cond_9:
	i = ( i + -0x1);
	edge = this->equal[i];
	//    .local v0, "edge":Landroid/icu/util/StringTrieBuilder$Node;
	if ( !(edge) )  
		goto label_cond_17;
	edgeNumber = edge->markRightEdgesFirst((edgeNumber - step));
label_cond_17:
	step = 0x1;
	if ( i > 0 ) 
		goto label_cond_9;
	this->offset = edgeNumber;
	//    .end local v0    # "edge":Landroid/icu/util/StringTrieBuilder$Node;
	//    .end local v1    # "i":I
	//    .end local v2    # "step":I
label_cond_1c:
	return edgeNumber;

}
// .method public write(Landroid/icu/util/StringTrieBuilder;)V
void android::icu::util::StringTrieBuilder_S_ListBranchNode::write(std::shared_ptr<android::icu::util::StringTrieBuilder> builder)
{
	
	int unitNumber;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> rightEdge;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "builder"    # Landroid/icu/util/StringTrieBuilder;
	unitNumber = ( this->length + -0x1);
	//    .local v3, "unitNumber":I
	rightEdge = this->equal[unitNumber];
	//    .local v1, "rightEdge":Landroid/icu/util/StringTrieBuilder$Node;
	if ( rightEdge )     
		goto label_cond_54;
	//    .local v2, "rightEdgeNumber":I
label_cond_c:
label_goto_c:
	unitNumber = ( unitNumber + -0x1);
	if ( !(this->equal[unitNumber]) )  
		goto label_cond_1d;
	this->equal[unitNumber]->writeUnlessInsideRightEdge(this->firstEdgeNumber, this->firstEdgeNumber, builder);
label_cond_1d:
	if ( unitNumber > 0 ) 
		goto label_cond_c;
	unitNumber = ( this->length + -0x1);
	if ( rightEdge )     
		goto label_cond_59;
	builder->writeValueAndFinal(this->values[unitNumber], 0x1);
label_goto_2d:
	this->offset = builder->write(this->units[unitNumber]);
label_goto_37:
	unitNumber = ( unitNumber + -0x1);
	if ( unitNumber < 0 ) 
		goto label_cond_7f;
	if ( this->equal[unitNumber] )     
		goto label_cond_5d;
	//    .local v4, "value":I
	//    .local v0, "isFinal":Z
label_goto_46:
	builder->writeValueAndFinal(value, isFinal);
	this->offset = builder->write(this->units[unitNumber]);
	goto label_goto_37;
	// 476    .line 654
	// 477    .end local v0    # "isFinal":Z
	// 478    .end local v2    # "rightEdgeNumber":I
	// 479    .end local v4    # "value":I
label_cond_54:
	rightEdge->getOffset();
	//    .restart local v2    # "rightEdgeNumber":I
	goto label_goto_c;
	// 488    .line 667
label_cond_59:
	rightEdge->write(builder);
	goto label_goto_2d;
	// 494    .line 680
label_cond_5d:
	if ( android::icu::util::StringTrieBuilder_S_ListBranchNode::_assertionsDisabled )     
		goto label_cond_71;
	if ( this->equal[unitNumber]->getOffset() > 0 ) 
		goto label_cond_71;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 516    .line 681
label_cond_71:
	//    .restart local v4    # "value":I
	//    .restart local v0    # "isFinal":Z
	goto label_goto_46;
	// 537    .line 687
	// 538    .end local v0    # "isFinal":Z
	// 539    .end local v4    # "value":I
label_cond_7f:
	return;

}


