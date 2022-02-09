// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RBBINode.smali
#include "java2ctype.h"
#include "android.icu.impl.Assert.h"
#include "android.icu.text.RBBINode.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.io.PrintStream.h"
#include "java.lang.Integer.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.HashSet.h"
#include "java.util.List.h"
#include "java.util.Set.h"

static android::icu::text::RBBINode::endMark = 0x6;
static android::icu::text::RBBINode::gLastSerial = 0x0;
static android::icu::text::RBBINode::leafChar = 0x3;
static android::icu::text::RBBINode::lookAhead = 0x4;
static android::icu::text::RBBINode::nodeTypeLimit = 0x10;
static android::icu::text::RBBINode::nodeTypeNames;
static android::icu::text::RBBINode::opBreak = 0xd;
static android::icu::text::RBBINode::opCat = 0x8;
static android::icu::text::RBBINode::opLParen = 0xf;
static android::icu::text::RBBINode::opOr = 0x9;
static android::icu::text::RBBINode::opPlus = 0xb;
static android::icu::text::RBBINode::opQuestion = 0xc;
static android::icu::text::RBBINode::opReverse = 0xe;
static android::icu::text::RBBINode::opStar = 0xa;
static android::icu::text::RBBINode::opStart = 0x7;
static android::icu::text::RBBINode::precLParen = 0x2;
static android::icu::text::RBBINode::precOpCat = 0x4;
static android::icu::text::RBBINode::precOpOr = 0x3;
static android::icu::text::RBBINode::precStart = 0x1;
static android::icu::text::RBBINode::precZero = 0x0;
static android::icu::text::RBBINode::setRef = 0x0;
static android::icu::text::RBBINode::tag = 0x5;
static android::icu::text::RBBINode::uset = 0x1;
static android::icu::text::RBBINode::varRef = 0x2;
// .method static constructor <clinit>()V
void android::icu::text::RBBINode::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x10);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("setRef"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("uset"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("varRef"));
	cVar0[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("leafChar"));
	cVar0[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("lookAhead"));
	cVar0[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tag"));
	cVar0[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("endMark"));
	cVar0[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("opStart"));
	cVar0[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("opCat"));
	cVar0[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("opOr"));
	cVar0[0xa] = std::make_shared<java::lang::String>(std::make_shared<char[]>("opStar"));
	cVar0[0xb] = std::make_shared<java::lang::String>(std::make_shared<char[]>("opPlus"));
	cVar0[0xc] = std::make_shared<java::lang::String>(std::make_shared<char[]>("opQuestion"));
	cVar0[0xd] = std::make_shared<java::lang::String>(std::make_shared<char[]>("opBreak"));
	cVar0[0xe] = std::make_shared<java::lang::String>(std::make_shared<char[]>("opReverse"));
	cVar0[0xf] = std::make_shared<java::lang::String>(std::make_shared<char[]>("opLParen"));
	android::icu::text::RBBINode::nodeTypeNames = cVar0;
	return;

}
// .method constructor <init>(I)V
android::icu::text::RBBINode::RBBINode(int t)
{
	
	int cVar0;
	int cVar1;
	bool cVar2;
	int cVar3;
	std::shared_ptr<java::util::HashSet> cVar4;
	std::shared_ptr<java::util::HashSet> cVar5;
	std::shared_ptr<java::util::HashSet> cVar6;
	
	//    .param p1, "t"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	// 260    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fPrecedence = cVar1;
	if ( t >= 0x10 )
		goto label_cond_36;
	cVar2 = cVar0;
label_goto_c:
	android::icu::impl::Assert::assrt(cVar2);
	cVar3 = ( android::icu::text::RBBINode::gLastSerial + 0x1);
	android::icu::text::RBBINode::gLastSerial = cVar3;
	this->fSerialNum = cVar3;
	this->fType = t;
	cVar4 = std::make_shared<java::util::HashSet>();
	this->fFirstPosSet = cVar4;
	cVar5 = std::make_shared<java::util::HashSet>();
	this->fLastPosSet = cVar5;
	cVar6 = std::make_shared<java::util::HashSet>();
	this->fFollowPos = cVar6;
	if ( t != 0x8 )
		goto label_cond_38;
	this->fPrecedence = 0x4;
label_goto_35:
	return;
label_cond_36:
	cVar2 = cVar1;
	goto label_goto_c;
	// 328    .line 119
label_cond_38:
	if ( t != 0x9 )
		goto label_cond_40;
	this->fPrecedence = 0x3;
	goto label_goto_35;
	// 341    .line 121
label_cond_40:
	if ( t != 0x7 )
		goto label_cond_46;
	this->fPrecedence = cVar0;
	goto label_goto_35;
	// 352    .line 123
label_cond_46:
	if ( t != 0xf )
		goto label_cond_4e;
	this->fPrecedence = 0x2;
	goto label_goto_35;
	// 365    .line 126
label_cond_4e:
	this->fPrecedence = cVar1;
	goto label_goto_35;

}
// .method constructor <init>(Landroid/icu/text/RBBINode;)V
android::icu::text::RBBINode::RBBINode(std::shared_ptr<android::icu::text::RBBINode> other)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::util::HashSet> cVar2;
	std::shared_ptr<java::util::HashSet> cVar3;
	std::shared_ptr<java::util::HashSet> cVar4;
	
	//    .param p1, "other"    # Landroid/icu/text/RBBINode;
	cVar0 = 0x0;
	// 380    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fPrecedence = cVar0;
	cVar1 = ( android::icu::text::RBBINode::gLastSerial + 0x1);
	android::icu::text::RBBINode::gLastSerial = cVar1;
	this->fSerialNum = cVar1;
	this->fType = other->fType;
	this->fInputSet = other->fInputSet;
	this->fPrecedence = other->fPrecedence;
	this->fText = other->fText;
	this->fFirstPos = other->fFirstPos;
	this->fLastPos = other->fLastPos;
	this->fNullable = other->fNullable;
	this->fVal = other->fVal;
	this->fRuleRoot = cVar0;
	this->fChainIn = other->fChainIn;
	cVar2 = std::make_shared<java::util::HashSet>(other->fFirstPosSet);
	this->fFirstPosSet = cVar2;
	cVar3 = std::make_shared<java::util::HashSet>(other->fLastPosSet);
	this->fLastPosSet = cVar3;
	cVar4 = std::make_shared<java::util::HashSet>(other->fFollowPos);
	this->fFollowPos = cVar4;
	return;

}
// .method static printHex(II)V
void android::icu::text::RBBINode::printHex(int i,int minWidth)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "i"    # I
	//    .param p1, "minWidth"    # I
	cVar0 = 0x0;
	s = java::lang::Integer::toString(i, 0x10);
	//    .local v1, "s":Ljava/lang/String;
	//    .local v0, "leadingZeroes":Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	android::icu::text::RBBINode::printString(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("00000"))->substring(cVar0, java::lang::Math::max(cVar0, ( s->length() - 0x5))))->append(s)->toString(), minWidth);
	return;

}
// .method static printInt(II)V
void android::icu::text::RBBINode::printInt(int i,int minWidth)
{
	
	std::shared_ptr<java::lang::String> s;
	
	//    .param p0, "i"    # I
	//    .param p1, "minWidth"    # I
	s = java::lang::Integer::toString(i);
	//    .local v0, "s":Ljava/lang/String;
	android::icu::text::RBBINode::printString(s, java::lang::Math::max(minWidth, ( s->length() + 0x1)));
	return;

}
// .method static printNode(Landroid/icu/text/RBBINode;)V
void android::icu::text::RBBINode::printNode(std::shared_ptr<android::icu::text::RBBINode> n)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	//    .param p0, "n"    # Landroid/icu/text/RBBINode;
	cVar0 = 0xc;
	cVar1 = 0xb;
	cVar2 = 0x0;
	if ( n )     
		goto label_cond_18;
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>(" -- null --\n")));
label_cond_f:
label_goto_f:
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	return;
	// 595    .line 286
label_cond_18:
	android::icu::text::RBBINode::printInt(n->fSerialNum, 0xa);
	android::icu::text::RBBINode::printString(android::icu::text::RBBINode::nodeTypeNames[n->fType], cVar1);
	if ( n->fParent )     
		goto label_cond_6b;
	cVar3 = cVar2;
label_goto_2d:
	android::icu::text::RBBINode::printInt(cVar3, cVar1);
	if ( n->fLeftChild )     
		goto label_cond_70;
	cVar4 = cVar2;
label_goto_35:
	android::icu::text::RBBINode::printInt(cVar4, cVar1);
	if ( n->fRightChild )     
		goto label_cond_75;
label_goto_3c:
	android::icu::text::RBBINode::printInt(cVar2, cVar0);
	android::icu::text::RBBINode::printInt(n->fFirstPos, cVar0);
	android::icu::text::RBBINode::printInt(n->fVal, 0x7);
	if ( n->fType != 0x2 )
		goto label_cond_f;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->print(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(n->fText)->toString());
	goto label_goto_f;
	// 686    .line 288
label_cond_6b:
	cVar3 = n->fParent->fSerialNum;
	goto label_goto_2d;
	// 694    .line 289
label_cond_70:
	cVar4 = n->fLeftChild->fSerialNum;
	goto label_goto_35;
	// 702    .line 290
label_cond_75:
	cVar2 = n->fRightChild->fSerialNum;
	goto label_goto_3c;

}
// .method static printString(Ljava/lang/String;I)V
void android::icu::text::RBBINode::printString(std::shared_ptr<java::lang::String> s,int minWidth)
{
	
	char cVar0;
	int i;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "minWidth"    # I
	cVar0 = 0x20;
	i = minWidth;
	//    .local v0, "i":I
label_goto_3:
	if ( i >= 0 )
		goto label_cond_d;
	java::lang::System::out->print(cVar0);
	i = ( i + 0x1);
	goto label_goto_3;
	// 736    .line 311
label_cond_d:
	i = s->length();
label_goto_11:
	if ( i >= minWidth )
		goto label_cond_1b;
	java::lang::System::out->print(cVar0);
	i = ( i + 0x1);
	goto label_goto_11;
	// 755    .line 314
label_cond_1b:
	java::lang::System::out->print(s);
	return;

}
// .method cloneTree()Landroid/icu/text/RBBINode;
std::shared_ptr<android::icu::text::RBBINode> android::icu::text::RBBINode::cloneTree()
{
	
	std::shared_ptr<android::icu::text::RBBINode> n;
	
	if ( this->fType != 0x2 )
		goto label_cond_c;
	//    .local v0, "n":Landroid/icu/text/RBBINode;
label_cond_b:
label_goto_b:
	return n;
	// 791    .line 163
	// 792    .end local v0    # "n":Landroid/icu/text/RBBINode;
label_cond_c:
	if ( this->fType != 0x1 )
		goto label_cond_13;
	//    .restart local v0    # "n":Landroid/icu/text/RBBINode;
	goto label_goto_b;
	// 806    .line 166
	// 807    .end local v0    # "n":Landroid/icu/text/RBBINode;
label_cond_13:
	n = std::make_shared<android::icu::text::RBBINode>(this);
	//    .restart local v0    # "n":Landroid/icu/text/RBBINode;
	if ( !(this->fLeftChild) )  
		goto label_cond_28;
	n->fLeftChild = this->fLeftChild->cloneTree();
	n->fLeftChild->fParent = n;
label_cond_28:
	if ( !(this->fRightChild) )  
		goto label_cond_b;
	n->fRightChild = this->fRightChild->cloneTree();
	n->fRightChild->fParent = n;
	goto label_goto_b;

}
// .method findNodes(Ljava/util/List;I)V
void android::icu::text::RBBINode::findNodes(std::shared_ptr<java::util::List<android::icu::text::RBBINode>> dest,int kind)
{
	
	//    .param p2, "kind"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 860        value = {
	// 861            "(",
	// 862            "Ljava/util/List",
	// 863            "<",
	// 864            "Landroid/icu/text/RBBINode;",
	// 865            ">;I)V"
	// 866        }
	// 867    .end annotation
	//    .local p1, "dest":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/RBBINode;>;"
	if ( this->fType != kind )
		goto label_cond_7;
	dest->add(this);
label_cond_7:
	if ( !(this->fLeftChild) )  
		goto label_cond_10;
	this->fLeftChild->findNodes(dest, kind);
label_cond_10:
	if ( !(this->fRightChild) )  
		goto label_cond_19;
	this->fRightChild->findNodes(dest, kind);
label_cond_19:
	return;

}
// .method flattenSets()V
void android::icu::text::RBBINode::flattenSets()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( !(this->fType) )  
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	android::icu::impl::Assert::assrt(cVar1);
	if ( !(this->fLeftChild) )  
		goto label_cond_23;
	if ( this->fLeftChild->fType )     
		goto label_cond_3e;
	//    .local v1, "setRefNode":Landroid/icu/text/RBBINode;
	//    .local v2, "usetNode":Landroid/icu/text/RBBINode;
	//    .local v0, "replTree":Landroid/icu/text/RBBINode;
	this->fLeftChild = this->fLeftChild->fLeftChild->fLeftChild->cloneTree();
	this->fLeftChild->fParent = this;
	//    .end local v0    # "replTree":Landroid/icu/text/RBBINode;
	//    .end local v1    # "setRefNode":Landroid/icu/text/RBBINode;
	//    .end local v2    # "usetNode":Landroid/icu/text/RBBINode;
label_cond_23:
label_goto_23:
	if ( !(this->fRightChild) )  
		goto label_cond_3d;
	if ( this->fRightChild->fType )     
		goto label_cond_44;
	//    .restart local v1    # "setRefNode":Landroid/icu/text/RBBINode;
	//    .restart local v2    # "usetNode":Landroid/icu/text/RBBINode;
	//    .restart local v0    # "replTree":Landroid/icu/text/RBBINode;
	this->fRightChild = this->fRightChild->fLeftChild->fLeftChild->cloneTree();
	this->fRightChild->fParent = this;
	//    .end local v0    # "replTree":Landroid/icu/text/RBBINode;
	//    .end local v1    # "setRefNode":Landroid/icu/text/RBBINode;
	//    .end local v2    # "usetNode":Landroid/icu/text/RBBINode;
label_cond_3d:
label_goto_3d:
	return;
	// 1007    .line 237
label_cond_3e:
	this->fLeftChild->flattenSets();
	goto label_goto_23;
	// 1015    .line 250
label_cond_44:
	this->fRightChild->flattenSets();
	goto label_goto_3d;

}
// .method flattenVariables()Landroid/icu/text/RBBINode;
std::shared_ptr<android::icu::text::RBBINode> android::icu::text::RBBINode::flattenVariables()
{
	
	std::shared_ptr<android::icu::text::RBBINode> retNode;
	
	if ( this->fType != 0x2 )
		goto label_cond_14;
	retNode = this->fLeftChild->cloneTree();
	//    .local v0, "retNode":Landroid/icu/text/RBBINode;
	retNode->fRuleRoot = this->fRuleRoot;
	retNode->fChainIn = this->fChainIn;
	return retNode;
	// 1056    .line 207
	// 1057    .end local v0    # "retNode":Landroid/icu/text/RBBINode;
label_cond_14:
	if ( !(this->fLeftChild) )  
		goto label_cond_24;
	this->fLeftChild = this->fLeftChild->flattenVariables();
	this->fLeftChild->fParent = this;
label_cond_24:
	if ( !(this->fRightChild) )  
		goto label_cond_34;
	this->fRightChild = this->fRightChild->flattenVariables();
	this->fRightChild->fParent = this;
label_cond_34:
	return this;

}
// .method printTree(Z)V
void android::icu::text::RBBINode::printTree(bool printHeading)
{
	
	bool cVar0;
	
	//    .param p1, "printHeading"    # Z
	cVar0 = 0x0;
	if ( !(printHeading) )  
		goto label_cond_13;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("-------------------------------------------------------------------")));
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("    Serial       type     Parent  LeftChild  RightChild    position  value")));
label_cond_13:
	android::icu::text::RBBINode::printNode(this);
	if ( this->fType == 0x2 )
		goto label_cond_2d;
	if ( !(this->fLeftChild) )  
		goto label_cond_24;
	this->fLeftChild->printTree(cVar0);
label_cond_24:
	if ( !(this->fRightChild) )  
		goto label_cond_2d;
	this->fRightChild->printTree(cVar0);
label_cond_2d:
	return;

}


