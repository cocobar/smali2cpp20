// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$LinearMatchNode.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_DynamicBranchNode.h"
#include "android.icu.util.StringTrieBuilder_S_IntermediateValueNode.h"
#include "android.icu.util.StringTrieBuilder_S_LinearMatchNode.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder_S_ValueNode.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/CharSequence;IILandroid/icu/util/StringTrieBuilder$Node;)V
android::icu::util::StringTrieBuilder_S_LinearMatchNode::StringTrieBuilder_S_LinearMatchNode(std::shared_ptr<java::lang::CharSequence> builderStrings,int sOffset,int len,std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> nextNode)
{
	
	//    .param p1, "builderStrings"    # Ljava/lang/CharSequence;
	//    .param p2, "sOffset"    # I
	//    .param p3, "len"    # I
	//    .param p4, "nextNode"    # Landroid/icu/util/StringTrieBuilder$Node;
	// 039    invoke-direct {p0}, Landroid/icu/util/StringTrieBuilder$ValueNode;-><init>()V
	this->strings = builderStrings;
	this->stringOffset = sOffset;
	this->length = len;
	this->next = nextNode;
	return;

}
// .method private setHashCode()V
void android::icu::util::StringTrieBuilder_S_LinearMatchNode::setHashCode()
{
	
	int i;
	
	this->hash = (( (this->length +  0x766665f) * 0x25) +  this->next->hashCode());
	if ( !(this->hasValue) )  
		goto label_cond_1e;
	this->hash = (( this->hash * 0x25) +  this->value);
label_cond_1e:
	i = this->stringOffset;
	//    .local v0, "i":I
	//    .local v1, "limit":I
label_goto_26:
	if ( i >= (this->stringOffset + this->length) )
		goto label_cond_38;
	this->hash = (( this->hash * 0x25) +  this->strings->charAt(i));
	i = ( i + 0x1);
	goto label_goto_26;
	// 131    .line 495
label_cond_38:
	return;

}
// .method public add(Landroid/icu/util/StringTrieBuilder;Ljava/lang/CharSequence;II)Landroid/icu/util/StringTrieBuilder$Node;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> android::icu::util::StringTrieBuilder_S_LinearMatchNode::add(std::shared_ptr<android::icu::util::StringTrieBuilder> builder,std::shared_ptr<java::lang::CharSequence> s,int start,int sValue)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int limit;
	int i;
	int prefixLength;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_LinearMatchNode> suffixNode;
	char thisChar;
	char newChar;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_DynamicBranchNode> branchNode;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_LinearMatchNode> thisSuffixNode;
	int start;
	
	//    .param p1, "builder"    # Landroid/icu/util/StringTrieBuilder;
	//    .param p2, "s"    # Ljava/lang/CharSequence;
	//    .param p3, "start"    # I
	//    .param p4, "sValue"    # I
	if ( start != s->length() )
		goto label_cond_1f;
	if ( !(this->hasValue) )  
		goto label_cond_17;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate string.")));
	// throw
	throw cVar0;
	// 171    .line 385
label_cond_17:
	this->setValue(sValue);
	return this;
	// 182    .line 389
label_cond_1f:
	limit = (this->stringOffset + this->length);
	//    .local v6, "limit":I
	i = this->stringOffset;
	//    .local v5, "i":I
label_goto_2d:
	if ( i >= limit )
		goto label_cond_111;
	if ( start != s->length() )
		goto label_cond_61;
	prefixLength = (i - this->stringOffset);
	//    .local v9, "prefixLength":I
	suffixNode = std::make_shared<android::icu::util::StringTrieBuilder_S_LinearMatchNode>(this->strings, i, (this->length -  prefixLength), this->next);
	//    .local v11, "suffixNode":Landroid/icu/util/StringTrieBuilder$LinearMatchNode;
	suffixNode->setValue(sValue);
	this->length = prefixLength;
	this->next = suffixNode;
	return this;
	// 263    .line 400
	// 264    .end local v9    # "prefixLength":I
	// 265    .end local v11    # "suffixNode":Landroid/icu/util/StringTrieBuilder$LinearMatchNode;
label_cond_61:
	thisChar = this->strings->charAt(i);
	//    .local v12, "thisChar":C
	newChar = s->charAt(start);
	//    .local v7, "newChar":C
	if ( thisChar == newChar )
		goto label_cond_10b;
	branchNode = std::make_shared<android::icu::util::StringTrieBuilder_S_DynamicBranchNode>();
	//    .local v4, "branchNode":Landroid/icu/util/StringTrieBuilder$DynamicBranchNode;
	if ( i != this->stringOffset )
		goto label_cond_c6;
	if ( !(this->hasValue) )  
		goto label_cond_91;
	branchNode->setValue(this->value);
	this->value = 0x0;
	this->hasValue = 0x0;
label_cond_91:
	this->stringOffset = ( this->stringOffset + 0x1);
	this->length = ( this->length + -0x1);
	if ( this->length <= 0 )
		goto label_cond_c1;
	//    .local v13, "thisSuffixNode":Landroid/icu/util/StringTrieBuilder$Node;
label_goto_ad:
	//    .local v10, "result":Landroid/icu/util/StringTrieBuilder$Node;
label_goto_ae:
	//    .local v8, "newSuffixNode":Landroid/icu/util/StringTrieBuilder$ValueNode;
	branchNode->add(thisChar, thisSuffixNode);
	branchNode->add(newChar, android::icu::util::StringTrieBuilder::-wrap1(builder, s, ( start + 0x1), sValue));
	return result;
	// 388    .line 417
	// 389    .end local v8    # "newSuffixNode":Landroid/icu/util/StringTrieBuilder$ValueNode;
	// 390    .end local v10    # "result":Landroid/icu/util/StringTrieBuilder$Node;
	// 391    .end local v13    # "thisSuffixNode":Landroid/icu/util/StringTrieBuilder$Node;
label_cond_c1:
	//    .restart local v13    # "thisSuffixNode":Landroid/icu/util/StringTrieBuilder$Node;
	goto label_goto_ad;
	// 400    .line 420
	// 401    .end local v13    # "thisSuffixNode":Landroid/icu/util/StringTrieBuilder$Node;
label_cond_c6:
	if ( i != ( limit + -0x1) )
		goto label_cond_df;
	this->length = ( this->length + -0x1);
	//    .restart local v13    # "thisSuffixNode":Landroid/icu/util/StringTrieBuilder$Node;
	this->next = branchNode;
	//    .restart local v10    # "result":Landroid/icu/util/StringTrieBuilder$Node;
	goto label_goto_ae;
	// 435    .line 428
	// 436    .end local v10    # "result":Landroid/icu/util/StringTrieBuilder$Node;
	// 437    .end local v13    # "thisSuffixNode":Landroid/icu/util/StringTrieBuilder$Node;
label_cond_df:
	prefixLength = (i - this->stringOffset);
	//    .restart local v9    # "prefixLength":I
	i = ( i + 0x1);
	thisSuffixNode = std::make_shared<android::icu::util::StringTrieBuilder_S_LinearMatchNode>(this->strings, i, (this->length - ( prefixLength + 0x1)), this->next);
	//    .restart local v13    # "thisSuffixNode":Landroid/icu/util/StringTrieBuilder$Node;
	this->length = prefixLength;
	this->next = branchNode;
	//    .restart local v10    # "result":Landroid/icu/util/StringTrieBuilder$Node;
	goto label_goto_ae;
	// 493    .line 390
	// 494    .end local v4    # "branchNode":Landroid/icu/util/StringTrieBuilder$DynamicBranchNode;
	// 495    .end local v9    # "prefixLength":I
	// 496    .end local v10    # "result":Landroid/icu/util/StringTrieBuilder$Node;
	// 497    .end local v13    # "thisSuffixNode":Landroid/icu/util/StringTrieBuilder$Node;
label_cond_10b:
	i = ( i + 0x1);
	start = ( start + 0x1);
	goto label_goto_2d;
	// 505    .line 443
	// 506    .end local v7    # "newChar":C
	// 507    .end local v12    # "thisChar":C
label_cond_111:
	this->next = this->next->add(builder, s, start, sValue);
	return this;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::StringTrieBuilder_S_LinearMatchNode::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_LinearMatchNode> o;
	int i;
	int j;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 548    .line 365
label_cond_5:
	if ( this->equals(other) )     
		goto label_cond_c;
	return cVar1;
label_cond_c:
	o = other;
	o->checkCast("android::icu::util::StringTrieBuilder_S_LinearMatchNode");
	//    .local v3, "o":Landroid/icu/util/StringTrieBuilder$LinearMatchNode;
	if ( this->length != o->length )
		goto label_cond_1b;
	if ( this->next == o->next )
		goto label_cond_1c;
label_cond_1b:
	return cVar1;
	// 583    .line 372
label_cond_1c:
	i = this->stringOffset;
	//    .local v0, "i":I
	j = o->stringOffset;
	//    .local v1, "j":I
	//    .local v2, "limit":I
label_goto_26:
	if ( i >= (this->stringOffset + this->length) )
		goto label_cond_3c;
	if ( this->strings->charAt(i) == this->strings->charAt(j) )
		goto label_cond_37;
	return cVar1;
	// 619    .line 372
label_cond_37:
	i = ( i + 0x1);
	j = ( j + 0x1);
	goto label_goto_26;
	// 627    .line 377
label_cond_3c:
	return cVar0;

}
// .method public hashCode()I
int android::icu::util::StringTrieBuilder_S_LinearMatchNode::hashCode()
{
	
	return this->hash;

}
// .method public markRightEdgesFirst(I)I
int android::icu::util::StringTrieBuilder_S_LinearMatchNode::markRightEdgesFirst(int cVar0)
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
// .method public register(Landroid/icu/util/StringTrieBuilder;)Landroid/icu/util/StringTrieBuilder$Node;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> android::icu::util::StringTrieBuilder_S_LinearMatchNode::register(std::shared_ptr<android::icu::util::StringTrieBuilder> builder)
{
	
	int cVar0;
	int maxLinearMatchLength;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_LinearMatchNode> suffixNode;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_IntermediateValueNode> result;
	
	//    .param p1, "builder"    # Landroid/icu/util/StringTrieBuilder;
	cVar0 = 0x0;
	this->next = this->next->register(builder);
	maxLinearMatchLength = builder->getMaxLinearMatchLength();
	//    .local v1, "maxLinearMatchLength":I
label_goto_d:
	if ( this->length <= maxLinearMatchLength )
		goto label_cond_30;
	//    .local v2, "nextOffset":I
	this->length = (this->length -  maxLinearMatchLength);
	suffixNode = std::make_shared<android::icu::util::StringTrieBuilder_S_LinearMatchNode>(this->strings, ((this->stringOffset +  this->length) - maxLinearMatchLength), maxLinearMatchLength, this->next);
	//    .local v4, "suffixNode":Landroid/icu/util/StringTrieBuilder$LinearMatchNode;
	suffixNode->setHashCode();
	this->next = android::icu::util::StringTrieBuilder::-wrap0(builder, suffixNode);
	goto label_goto_d;
	// 733    .line 460
	// 734    .end local v2    # "nextOffset":I
	// 735    .end local v4    # "suffixNode":Landroid/icu/util/StringTrieBuilder$LinearMatchNode;
label_cond_30:
	if ( !(this->hasValue) )  
		goto label_cond_53;
	if ( !(( builder->matchNodesCanHaveValues() ^ 0x1)) )  
		goto label_cond_53;
	//    .local v0, "intermediateValue":I
	this->value = cVar0;
	this->hasValue = cVar0;
	this->setHashCode();
	result = std::make_shared<android::icu::util::StringTrieBuilder_S_IntermediateValueNode>(this->value, android::icu::util::StringTrieBuilder::-wrap0(builder, this));
	//    .end local v0    # "intermediateValue":I
	//    .local v3, "result":Landroid/icu/util/StringTrieBuilder$Node;
label_goto_4e:
	return android::icu::util::StringTrieBuilder::-wrap0(builder, result);
	// 781    .line 467
	// 782    .end local v3    # "result":Landroid/icu/util/StringTrieBuilder$Node;
label_cond_53:
	this->setHashCode();
	//    .restart local v3    # "result":Landroid/icu/util/StringTrieBuilder$Node;
	goto label_goto_4e;

}
// .method public write(Landroid/icu/util/StringTrieBuilder;)V
void android::icu::util::StringTrieBuilder_S_LinearMatchNode::write(std::shared_ptr<android::icu::util::StringTrieBuilder> builder)
{
	
	//    .param p1, "builder"    # Landroid/icu/util/StringTrieBuilder;
	this->next->write(builder);
	builder->write(this->stringOffset, this->length);
	this->offset = builder->writeValueAndType(this->hasValue, this->value, ( (builder->getMinLinearMatch() +  this->length) + -0x1));
	return;

}


