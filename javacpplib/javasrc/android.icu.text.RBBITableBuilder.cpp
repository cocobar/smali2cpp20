// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RBBITableBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.Assert.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.RBBINode.h"
#include "android.icu.text.RBBIRuleBuilder.h"
#include "android.icu.text.RBBISetBuilder.h"
#include "android.icu.text.RBBITableBuilder_S_RBBIStateDescriptor.h"
#include "android.icu.text.RBBITableBuilder.h"
#include "java.io.PrintStream.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.SortedSet.h"
#include "java.util.TreeSet.h"

// .method constructor <init>(Landroid/icu/text/RBBIRuleBuilder;I)V
android::icu::text::RBBITableBuilder::RBBITableBuilder(std::shared_ptr<android::icu::text::RBBIRuleBuilder> rb,int rootNodeIx)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	//    .param p1, "rb"    # Landroid/icu/text/RBBIRuleBuilder;
	//    .param p2, "rootNodeIx"    # I
	// 039    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fRootIx = rootNodeIx;
	this->fRB = rb;
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->fDStates = cVar0;
	return;

}
// .method addRuleRootNodes(Ljava/util/List;Landroid/icu/text/RBBINode;)V
void android::icu::text::RBBITableBuilder::addRuleRootNodes(std::shared_ptr<java::util::List<android::icu::text::RBBINode>> dest,std::shared_ptr<android::icu::text::RBBINode> node)
{
	
	//    .param p2, "node"    # Landroid/icu/text/RBBINode;
	//    .annotation system Ldalvik/annotation/Signature;
	// 064        value = {
	// 065            "(",
	// 066            "Ljava/util/List",
	// 067            "<",
	// 068            "Landroid/icu/text/RBBINode;",
	// 069            ">;",
	// 070            "Landroid/icu/text/RBBINode;",
	// 071            ")V"
	// 072        }
	// 073    .end annotation
	//    .local p1, "dest":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/RBBINode;>;"
	if ( node )     
		goto label_cond_3;
	return;
	// 083    .line 377
label_cond_3:
	if ( !(node->fRuleRoot) )  
		goto label_cond_b;
	dest->add(node);
	return;
	// 095    .line 383
label_cond_b:
	this->addRuleRootNodes(dest, node->fLeftChild);
	this->addRuleRootNodes(dest, node->fRightChild);
	return;

}
// .method bofFixup()V
void android::icu::text::RBBITableBuilder::bofFixup()
{
	
	int cVar0;
	bool cVar1;
	int cVar2;
	std::shared_ptr<android::icu::text::RBBINode> bofNode;
	bool cVar3;
	std::shared_ptr<java::util::Iterator> startNode_S_iterator;
	std::shared_ptr<android::icu::text::RBBINode> startNode;
	
	cVar0 = 0x3;
	cVar1 = 0x1;
	cVar2 = 0x0;
	bofNode = this->fRB->fTreeRoots[this->fRootIx]->fLeftChild->fLeftChild;
	//    .local v0, "bofNode":Landroid/icu/text/RBBINode;
	if ( bofNode->fType != cVar0 )
		goto label_cond_4f;
	cVar3 = cVar1;
label_goto_14:
	android::icu::impl::Assert::assrt(cVar3);
	if ( bofNode->fVal != 0x2 )
		goto label_cond_51;
label_goto_1c:
	android::icu::impl::Assert::assrt(cVar1);
	//    .local v1, "matchStartNodes":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/RBBINode;>;"
	startNode_S_iterator = this->fRB->fTreeRoots[this->fRootIx]->fLeftChild->fRightChild->fFirstPosSet->iterator();
	//    .local v3, "startNode$iterator":Ljava/util/Iterator;
label_cond_31:
label_goto_31:
	if ( !(startNode_S_iterator->hasNext()) )  
		goto label_cond_53;
	startNode = startNode_S_iterator->next();
	startNode->checkCast("android::icu::text::RBBINode");
	//    .local v2, "startNode":Landroid/icu/text/RBBINode;
	if ( startNode->fType != cVar0 )
		goto label_cond_31;
	if ( startNode->fVal != bofNode->fVal )
		goto label_cond_31;
	bofNode->fFollowPos->addAll(startNode->fFollowPos);
	goto label_goto_31;
	// 212    .end local v1    # "matchStartNodes":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/RBBINode;>;"
	// 213    .end local v2    # "startNode":Landroid/icu/text/RBBINode;
	// 214    .end local v3    # "startNode$iterator":Ljava/util/Iterator;
label_cond_4f:
	cVar3 = cVar2;
	goto label_goto_14;
label_cond_51:
	cVar1 = cVar2;
	goto label_goto_1c;
	// 227    .line 522
	// 228    .restart local v1    # "matchStartNodes":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/RBBINode;>;"
	// 229    .restart local v3    # "startNode$iterator":Ljava/util/Iterator;
label_cond_53:
	return;

}
// .method build()V
void android::icu::text::RBBITableBuilder::build()
{
	
	int cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::RBBINode> bofTop;
	std::shared_ptr<android::icu::text::RBBINode> bofLeaf;
	std::shared_ptr<android::icu::text::RBBINode> cn;
	std::shared_ptr<android::icu::text::RBBINode> cVar2;
	
	cVar0 = 0x8;
	cVar1 = 0x1;
	if ( this->fRB->fTreeRoots[this->fRootIx] )     
		goto label_cond_e;
	return;
	// 256    .line 108
label_cond_e:
	this->fRB->fTreeRoots[this->fRootIx] = this->fRB->fTreeRoots[this->fRootIx]->flattenVariables();
	if ( !(this->fRB->fDebugEnv) )  
		goto label_cond_48;
	if ( this->fRB->fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("ftree"))) < 0 ) 
		goto label_cond_48;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parse tree after flattening variable references.")));
	this->fRB->fTreeRoots[this->fRootIx]->printTree(cVar1);
label_cond_48:
	if ( !(this->fRB->fSetBuilder->sawBOF()) )  
		goto label_cond_76;
	bofTop = std::make_shared<android::icu::text::RBBINode>(cVar0);
	//    .local v1, "bofTop":Landroid/icu/text/RBBINode;
	bofLeaf = std::make_shared<android::icu::text::RBBINode>(0x3);
	//    .local v0, "bofLeaf":Landroid/icu/text/RBBINode;
	bofTop->fLeftChild = bofLeaf;
	bofTop->fRightChild = this->fRB->fTreeRoots[this->fRootIx];
	bofLeaf->fParent = bofTop;
	bofLeaf->fVal = 0x2;
	this->fRB->fTreeRoots[this->fRootIx] = bofTop;
	//    .end local v0    # "bofLeaf":Landroid/icu/text/RBBINode;
	//    .end local v1    # "bofTop":Landroid/icu/text/RBBINode;
label_cond_76:
	cn = std::make_shared<android::icu::text::RBBINode>(cVar0);
	//    .local v2, "cn":Landroid/icu/text/RBBINode;
	cn->fLeftChild = this->fRB->fTreeRoots[this->fRootIx];
	this->fRB->fTreeRoots[this->fRootIx]->fParent = cn;
	cVar2 = std::make_shared<android::icu::text::RBBINode>(0x6);
	cn->fRightChild = cVar2;
	cn->fRightChild->fParent = cn;
	this->fRB->fTreeRoots[this->fRootIx] = cn;
	this->fRB->fTreeRoots[this->fRootIx]->flattenSets();
	if ( !(this->fRB->fDebugEnv) )  
		goto label_cond_d4;
	if ( this->fRB->fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("stree"))) < 0 ) 
		goto label_cond_d4;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parse tree after flattening Unicode Set references.")));
	this->fRB->fTreeRoots[this->fRootIx]->printTree(cVar1);
label_cond_d4:
	this->calcNullable(this->fRB->fTreeRoots[this->fRootIx]);
	this->calcFirstPos(this->fRB->fTreeRoots[this->fRootIx]);
	this->calcLastPos(this->fRB->fTreeRoots[this->fRootIx]);
	this->calcFollowPos(this->fRB->fTreeRoots[this->fRootIx]);
	if ( !(this->fRB->fDebugEnv) )  
		goto label_cond_126;
	if ( this->fRB->fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("pos"))) < 0 ) 
		goto label_cond_126;
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	this->printPosSets(this->fRB->fTreeRoots[this->fRootIx]);
label_cond_126:
	if ( !(this->fRB->fChainRules) )  
		goto label_cond_137;
	this->calcChainedFollowPos(this->fRB->fTreeRoots[this->fRootIx]);
label_cond_137:
	if ( !(this->fRB->fSetBuilder->sawBOF()) )  
		goto label_cond_144;
	this->bofFixup();
label_cond_144:
	this->buildStateTable();
	this->flagAcceptingStates();
	this->flagLookAheadStates();
	this->flagTaggedStates();
	this->mergeRuleStatusVals();
	if ( !(this->fRB->fDebugEnv) )  
		goto label_cond_169;
	if ( this->fRB->fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("states"))) < 0 ) 
		goto label_cond_169;
	this->printStates();
label_cond_169:
	return;

}
// .method buildStateTable()V
void android::icu::text::RBBITableBuilder::buildStateTable()
{
	
	int lastInputSymbol;
	std::shared_ptr<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor> failState;
	std::shared_ptr<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor> initialState;
	std::shared_ptr<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor> T;
	int tx;
	std::shared_ptr<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor> temp;
	int a;
	std::shared_ptr<java::util::Set> U;
	std::shared_ptr<java::util::Iterator> p_S_iterator;
	std::shared_ptr<android::icu::text::RBBINode> p;
	std::shared_ptr<java::util::HashSet> U;
	int ux;
	bool cVar0;
	int ix;
	std::shared_ptr<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor> temp2;
	std::shared_ptr<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor> newState;
	
	lastInputSymbol = ( this->fRB->fSetBuilder->getNumCharCategories() + -0x1);
	//    .local v9, "lastInputSymbol":I
	failState = std::make_shared<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor>(lastInputSymbol);
	//    .local v6, "failState":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	this->fDStates->add(failState);
	initialState = std::make_shared<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor>(lastInputSymbol);
	//    .local v7, "initialState":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	initialState->fPositions->addAll(this->fRB->fTreeRoots[this->fRootIx]->fFirstPosSet);
	this->fDStates->add(initialState);
label_cond_53:
	T = 0x0;
	//    .local v2, "T":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	tx = 0x1;
	//    .local v15, "tx":I
label_goto_55:
	if ( tx >= this->fDStates->size() )
		goto label_cond_78;
	temp = this->fDStates->get(tx);
	temp->checkCast("android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor");
	//    .local v13, "temp":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	if ( temp->fMarked )     
		goto label_cond_7b;
	T = temp;
	//    .end local v2    # "T":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	//    .end local v13    # "temp":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
label_cond_78:
	if ( T )     
		goto label_cond_7e;
	return;
	// 782    .line 550
	// 783    .restart local v2    # "T":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	// 784    .restart local v13    # "temp":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
label_cond_7b:
	tx = ( tx + 0x1);
	goto label_goto_55;
	// 790    .line 562
	// 791    .end local v2    # "T":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	// 792    .end local v13    # "temp":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
label_cond_7e:
	T->fMarked = 0x1;
	a = 0x1;
	//    .local v5, "a":I
label_goto_85:
	if ( a >  lastInputSymbol )
		goto label_cond_53;
	U = 0x0;
	//    .local v3, "U":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/RBBINode;>;"
	p_S_iterator = T->fPositions->iterator();
	//    .end local v3    # "U":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/RBBINode;>;"
	//    .local v12, "p$iterator":Ljava/util/Iterator;
label_cond_90:
label_goto_90:
	if ( !(p_S_iterator->hasNext()) )  
		goto label_cond_c1;
	p = p_S_iterator->next();
	p->checkCast("android::icu::text::RBBINode");
	//    .local v11, "p":Landroid/icu/text/RBBINode;
	if ( p->fType != 0x3 )
		goto label_cond_90;
	if ( p->fVal != a )
		goto label_cond_90;
	if ( U )     
		goto label_cond_b7;
	U = std::make_shared<java::util::HashSet>();
label_cond_b7:
	U->addAll(p->fFollowPos);
	goto label_goto_90;
	// 878    .line 581
	// 879    .end local v11    # "p":Landroid/icu/text/RBBINode;
label_cond_c1:
	ux = 0x0;
	//    .local v16, "ux":I
	//    .local v4, "UinDstates":Z
	if ( !(U) )  
		goto label_cond_125;
	if ( U->size() <= 0 )
		goto label_cond_129;
	cVar0 = 0x1;
label_goto_ce:
	android::icu::impl::Assert::assrt(cVar0);
	ix = 0x0;
	//    .local v8, "ix":I
label_goto_d2:
	if ( ix >= this->fDStates->size() )
		goto label_cond_ff;
	temp2 = this->fDStates->get(ix);
	temp2->checkCast("android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor");
	//    .local v14, "temp2":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	if ( !(U->equals(temp2->fPositions)) )  
		goto label_cond_12c;
	//    .local v3, "U":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/RBBINode;>;"
	ux = ix;
	//    .end local v3    # "U":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/RBBINode;>;"
	//    .end local v14    # "temp2":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
label_cond_ff:
	if ( 0x0 )     
		goto label_cond_11f;
	newState = std::make_shared<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor>(lastInputSymbol);
	//    .local v10, "newState":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	newState->fPositions = temp2->fPositions;
	this->fDStates->add(newState);
	ux = ( this->fDStates->size() + -0x1);
	//    .end local v10    # "newState":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
label_cond_11f:
	T->fDtran[a] = ux;
	//    .end local v8    # "ix":I
label_cond_125:
	a = ( a + 0x1);
	goto label_goto_85;
	// 1016    .line 584
label_cond_129:
	cVar0 = 0x0;
	goto label_goto_ce;
	// 1022    .line 586
	// 1023    .restart local v8    # "ix":I
	// 1024    .restart local v14    # "temp2":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
label_cond_12c:
	ix = ( ix + 0x1);
	goto label_goto_d2;

}
// .method calcChainedFollowPos(Landroid/icu/text/RBBINode;)V
void android::icu::text::RBBITableBuilder::calcChainedFollowPos(std::shared_ptr<android::icu::text::RBBINode> tree)
{
	
	std::shared_ptr<java::util::ArrayList> endMarkerNodes;
	std::shared_ptr<java::util::ArrayList> leafNodes;
	std::shared_ptr<java::util::ArrayList> ruleRootNodes;
	std::shared_ptr<java::util::HashSet> matchStartNodes;
	std::shared_ptr<java::util::Iterator> node_S_iterator;
	std::shared_ptr<android::icu::text::RBBINode> node;
	std::shared_ptr<java::util::Iterator> tNode_S_iterator;
	std::shared_ptr<android::icu::text::RBBINode> tNode;
	std::shared_ptr<java::util::Iterator> endMarkerNode_S_iterator;
	std::shared_ptr<android::icu::text::RBBINode> endMarkerNode;
	int endNode;
	int c;
	std::shared_ptr<java::util::Iterator> startNode_S_iterator;
	std::shared_ptr<android::icu::text::RBBINode> startNode;
	
	//    .param p1, "tree"    # Landroid/icu/text/RBBINode;
	endMarkerNodes = std::make_shared<java::util::ArrayList>();
	//    .local v6, "endMarkerNodes":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/RBBINode;>;"
	leafNodes = std::make_shared<java::util::ArrayList>();
	//    .local v8, "leafNodes":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/RBBINode;>;"
	tree->findNodes(endMarkerNodes, 0x6);
	tree->findNodes(leafNodes, 0x3);
	ruleRootNodes = std::make_shared<java::util::ArrayList>();
	//    .local v12, "ruleRootNodes":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/RBBINode;>;"
	this->addRuleRootNodes(ruleRootNodes, tree);
	matchStartNodes = std::make_shared<java::util::HashSet>();
	//    .local v9, "matchStartNodes":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/RBBINode;>;"
	node_S_iterator = ruleRootNodes->iterator();
	//    .local v11, "node$iterator":Ljava/util/Iterator;
label_cond_31:
label_goto_31:
	if ( !(node_S_iterator->hasNext()) )  
		goto label_cond_4d;
	node = node_S_iterator->next();
	node->checkCast("android::icu::text::RBBINode");
	//    .local v10, "node":Landroid/icu/text/RBBINode;
	if ( !(node->fChainIn) )  
		goto label_cond_31;
	matchStartNodes->addAll(node->fFirstPosSet);
	goto label_goto_31;
	// 1124    .line 420
	// 1125    .end local v10    # "node":Landroid/icu/text/RBBINode;
label_cond_4d:
	tNode_S_iterator = leafNodes->iterator();
	//    .local v16, "tNode$iterator":Ljava/util/Iterator;
label_cond_51:
	if ( !(tNode_S_iterator->hasNext()) )  
		goto label_cond_e9;
	tNode = tNode_S_iterator->next();
	tNode->checkCast("android::icu::text::RBBINode");
	//    .local v15, "tNode":Landroid/icu/text/RBBINode;
	//    .local v7, "endNode":Landroid/icu/text/RBBINode;
	endMarkerNode_S_iterator = endMarkerNodes->iterator();
	//    .local v5, "endMarkerNode$iterator":Ljava/util/Iterator;
label_cond_62:
	if ( !(endMarkerNode_S_iterator->hasNext()) )  
		goto label_cond_7b;
	endMarkerNode = endMarkerNode_S_iterator->next();
	endMarkerNode->checkCast("android::icu::text::RBBINode");
	//    .local v4, "endMarkerNode":Landroid/icu/text/RBBINode;
	if ( !(tNode->fFollowPos->contains(endMarkerNode)) )  
		goto label_cond_62;
	endNode = tNode;
	//    .end local v4    # "endMarkerNode":Landroid/icu/text/RBBINode;
	//    .end local v7    # "endNode":Landroid/icu/text/RBBINode;
label_cond_7b:
	if ( !(0x0) )  
		goto label_cond_51;
	if ( !(this->fRB->fLBCMNoChain) )  
		goto label_cond_b3;
	c = this->fRB->fSetBuilder->getFirstChar(endNode->fVal);
	//    .local v2, "c":I
	if ( c == -0x1 )
		goto label_cond_b3;
	//    .local v3, "cLBProp":I
	if ( android::icu::lang::UCharacter::getIntPropertyValue(c, 0x1008) == 0x9 )
		goto label_cond_51;
	//    .end local v2    # "c":I
	//    .end local v3    # "cLBProp":I
label_cond_b3:
	startNode_S_iterator = matchStartNodes->iterator();
	//    .local v14, "startNode$iterator":Ljava/util/Iterator;
label_cond_b7:
label_goto_b7:
	if ( !(startNode_S_iterator->hasNext()) )  
		goto label_cond_51;
	startNode = startNode_S_iterator->next();
	startNode->checkCast("android::icu::text::RBBINode");
	//    .local v13, "startNode":Landroid/icu/text/RBBINode;
	if ( startNode->fType != 0x3 )
		goto label_cond_b7;
	if ( endNode->fVal != startNode->fVal )
		goto label_cond_b7;
	endNode->fFollowPos->addAll(startNode->fFollowPos);
	goto label_goto_b7;
	// 1318    .line 473
	// 1319    .end local v5    # "endMarkerNode$iterator":Ljava/util/Iterator;
	// 1320    .end local v13    # "startNode":Landroid/icu/text/RBBINode;
	// 1321    .end local v14    # "startNode$iterator":Ljava/util/Iterator;
	// 1322    .end local v15    # "tNode":Landroid/icu/text/RBBINode;
label_cond_e9:
	return;

}
// .method calcFirstPos(Landroid/icu/text/RBBINode;)V
void android::icu::text::RBBITableBuilder::calcFirstPos(std::shared_ptr<android::icu::text::RBBINode> n)
{
	
	//    .param p1, "n"    # Landroid/icu/text/RBBINode;
	if ( n )     
		goto label_cond_3;
	return;
	// 1338    .line 259
label_cond_3:
	if ( n->fType == 0x3 )
		goto label_cond_d;
	if ( n->fType != 0x6 )
		goto label_cond_13;
label_cond_d:
	n->fFirstPosSet->add(n);
	return;
	// 1362    .line 261
label_cond_13:
	if ( n->fType == 0x4 )
		goto label_cond_d;
	if ( n->fType == 0x5 )
		goto label_cond_d;
	this->calcFirstPos(n->fLeftChild);
	this->calcFirstPos(n->fRightChild);
	if ( n->fType != 0x9 )
		goto label_cond_40;
	n->fFirstPosSet->addAll(n->fLeftChild->fFirstPosSet);
	n->fFirstPosSet->addAll(n->fRightChild->fFirstPosSet);
label_cond_3f:
label_goto_3f:
	return;
	// 1417    .line 278
label_cond_40:
	if ( n->fType != 0x8 )
		goto label_cond_5f;
	n->fFirstPosSet->addAll(n->fLeftChild->fFirstPosSet);
	if ( !(n->fLeftChild->fNullable) )  
		goto label_cond_3f;
	n->fFirstPosSet->addAll(n->fRightChild->fFirstPosSet);
	goto label_goto_3f;
	// 1452    .line 284
label_cond_5f:
	if ( n->fType == 0xa )
		goto label_cond_6b;
	if ( n->fType != 0xc )
		goto label_cond_75;
label_cond_6b:
label_goto_6b:
	n->fFirstPosSet->addAll(n->fLeftChild->fFirstPosSet);
	goto label_goto_3f;
	// 1480    .line 286
label_cond_75:
	if ( n->fType != 0xb )
		goto label_cond_3f;
	goto label_goto_6b;

}
// .method calcFollowPos(Landroid/icu/text/RBBINode;)V
void android::icu::text::RBBITableBuilder::calcFollowPos(std::shared_ptr<android::icu::text::RBBINode> n)
{
	
	std::shared_ptr<java::util::Iterator> i_S_iterator;
	std::shared_ptr<android::icu::text::RBBINode> i;
	
	//    .param p1, "n"    # Landroid/icu/text/RBBINode;
	if ( !(n) )  
		goto label_cond_7;
	if ( n->fType != 0x3 )
		goto label_cond_8;
label_cond_7:
	return;
	// 1510    .line 344
label_cond_8:
	if ( n->fType == 0x6 )
		goto label_cond_7;
	this->calcFollowPos(n->fLeftChild);
	this->calcFollowPos(n->fRightChild);
	if ( n->fType != 0x8 )
		goto label_cond_3b;
	i_S_iterator = n->fLeftChild->fLastPosSet->iterator();
	//    .local v1, "i$iterator":Ljava/util/Iterator;
label_goto_25:
	if ( !(i_S_iterator->hasNext()) )  
		goto label_cond_3b;
	i = i_S_iterator->next();
	i->checkCast("android::icu::text::RBBINode");
	//    .local v0, "i":Landroid/icu/text/RBBINode;
	i->fFollowPos->addAll(n->fRightChild->fFirstPosSet);
	goto label_goto_25;
	// 1570    .line 359
	// 1571    .end local v0    # "i":Landroid/icu/text/RBBINode;
	// 1572    .end local v1    # "i$iterator":Ljava/util/Iterator;
label_cond_3b:
	if ( n->fType == 0xa )
		goto label_cond_47;
	if ( n->fType != 0xb )
		goto label_cond_61;
label_cond_47:
	i_S_iterator = n->fLastPosSet->iterator();
	//    .restart local v1    # "i$iterator":Ljava/util/Iterator;
label_goto_4d:
	if ( !(i_S_iterator->hasNext()) )  
		goto label_cond_61;
	i = i_S_iterator->next();
	i->checkCast("android::icu::text::RBBINode");
	//    .restart local v0    # "i":Landroid/icu/text/RBBINode;
	i->fFollowPos->addAll(n->fFirstPosSet);
	goto label_goto_4d;
	// 1619    .line 365
	// 1620    .end local v0    # "i":Landroid/icu/text/RBBINode;
	// 1621    .end local v1    # "i$iterator":Ljava/util/Iterator;
label_cond_61:
	return;

}
// .method calcLastPos(Landroid/icu/text/RBBINode;)V
void android::icu::text::RBBITableBuilder::calcLastPos(std::shared_ptr<android::icu::text::RBBINode> n)
{
	
	//    .param p1, "n"    # Landroid/icu/text/RBBINode;
	if ( n )     
		goto label_cond_3;
	return;
	// 1637    .line 302
label_cond_3:
	if ( n->fType == 0x3 )
		goto label_cond_d;
	if ( n->fType != 0x6 )
		goto label_cond_13;
label_cond_d:
	n->fLastPosSet->add(n);
	return;
	// 1661    .line 304
label_cond_13:
	if ( n->fType == 0x4 )
		goto label_cond_d;
	if ( n->fType == 0x5 )
		goto label_cond_d;
	this->calcLastPos(n->fLeftChild);
	this->calcLastPos(n->fRightChild);
	if ( n->fType != 0x9 )
		goto label_cond_40;
	n->fLastPosSet->addAll(n->fLeftChild->fLastPosSet);
	n->fLastPosSet->addAll(n->fRightChild->fLastPosSet);
label_cond_3f:
label_goto_3f:
	return;
	// 1716    .line 321
label_cond_40:
	if ( n->fType != 0x8 )
		goto label_cond_5f;
	n->fLastPosSet->addAll(n->fRightChild->fLastPosSet);
	if ( !(n->fRightChild->fNullable) )  
		goto label_cond_3f;
	n->fLastPosSet->addAll(n->fLeftChild->fLastPosSet);
	goto label_goto_3f;
	// 1751    .line 327
label_cond_5f:
	if ( n->fType == 0xa )
		goto label_cond_6b;
	if ( n->fType != 0xc )
		goto label_cond_75;
label_cond_6b:
label_goto_6b:
	n->fLastPosSet->addAll(n->fLeftChild->fLastPosSet);
	goto label_goto_3f;
	// 1779    .line 329
label_cond_75:
	if ( n->fType != 0xb )
		goto label_cond_3f;
	goto label_goto_6b;

}
// .method calcNullable(Landroid/icu/text/RBBINode;)V
void android::icu::text::RBBITableBuilder::calcNullable(std::shared_ptr<android::icu::text::RBBINode> n)
{
	
	bool cVar2;
	bool cVar1;
	bool cVar3;
	
	//    .param p1, "n"    # Landroid/icu/text/RBBINode;
	cVar2 = 0x1;
	cVar1 = 0x0;
	if ( n )     
		goto label_cond_5;
	return;
	// 1805    .line 212
label_cond_5:
	if ( !(n->fType) )  
		goto label_cond_e;
	if ( n->fType != 0x6 )
		goto label_cond_11;
label_cond_e:
	n->fNullable = cVar1;
	return;
	// 1825    .line 219
label_cond_11:
	if ( n->fType == 0x4 )
		goto label_cond_1b;
	if ( n->fType != 0x5 )
		goto label_cond_1e;
label_cond_1b:
	n->fNullable = cVar2;
	return;
	// 1846    .line 229
label_cond_1e:
	this->calcNullable(n->fLeftChild);
	this->calcNullable(n->fRightChild);
	if ( n->fType != 0x9 )
		goto label_cond_3b;
	if ( n->fLeftChild->fNullable )     
		goto label_cond_38;
	cVar2 = n->fRightChild->fNullable;
label_cond_38:
	n->fNullable = cVar2;
label_goto_3a:
	return;
	// 1882    .line 236
label_cond_3b:
	if ( n->fType != 0x8 )
		goto label_cond_50;
	if ( !(n->fLeftChild->fNullable) )  
		goto label_cond_4e;
	cVar3 = n->fRightChild->fNullable;
label_goto_4b:
	n->fNullable = cVar3;
	goto label_goto_3a;
label_cond_4e:
	cVar3 = cVar1;
	goto label_goto_4b;
	// 1911    .line 239
label_cond_50:
	if ( n->fType == 0xa )
		goto label_cond_5c;
	if ( n->fType != 0xc )
		goto label_cond_5f;
label_cond_5c:
	n->fNullable = cVar2;
	goto label_goto_3a;
	// 1931    .line 243
label_cond_5f:
	n->fNullable = cVar1;
	goto label_goto_3a;

}
// .method exportTable()[S
short android::icu::text::RBBITableBuilder::exportTable()
{
	
	bool cVar0;
	int numStates;
	int rowLen;
	std::shared<std::vector<short[]>> table;
	int flags;
	int state;
	std::shared_ptr<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor> sd;
	int row;
	bool cVar1;
	bool cVar2;
	int col;
	
	if ( this->fRB->fTreeRoots[this->fRootIx] )     
		goto label_cond_e;
	return std::make_shared<std::vector<short[]>>(0x0);
	// 1960    .line 898
label_cond_e:
	if ( this->fRB->fSetBuilder->getNumCharCategories() >= 0x7fff )
		goto label_cond_dd;
	if ( this->fDStates->size() >= 0x7fff )
		goto label_cond_da;
	cVar0 = 0x1;
label_goto_25:
	android::icu::impl::Assert::assrt(cVar0);
	numStates = this->fDStates->size();
	//    .local v3, "numStates":I
	rowLen = ( this->fRB->fSetBuilder->getNumCharCategories() + 0x4);
	//    .local v5, "rowLen":I
	//    .local v9, "tableSize":I
	table = std::make_shared<std::vector<short[]>>(( this->getTableSize() / 0x2));
	//    .local v8, "table":[S
	table[0x0] = (short)(_ushri(numStates,0x10));
	table[0x1] = (short)((0xffff &  numStates));
	table[0x2] = (short)(_ushri(rowLen,0x10));
	table[0x3] = (short)((0xffff &  rowLen));
	flags = 0x0;
	//    .local v1, "flags":I
	if ( !(this->fRB->fLookAheadHardBreak) )  
		goto label_cond_64;
	flags = 0x1;
label_cond_64:
	if ( !(this->fRB->fSetBuilder->sawBOF()) )  
		goto label_cond_70;
	flags = ( flags | 0x2);
label_cond_70:
	table[0x4] = (short)(_ushri(flags,0x10));
	table[0x5] = (short)((0xffff &  flags));
	//    .local v2, "numCharCategories":I
	state = 0x0;
	//    .local v7, "state":I
label_goto_87:
	if ( state >= numStates )
		goto label_cond_e7;
	sd = this->fDStates->get(state);
	sd->checkCast("android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor");
	//    .local v6, "sd":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	row = ( (state * rowLen) + 0x8);
	//    .local v4, "row":I
	if ( -0x8000 >= sd->fAccepting )
		goto label_cond_e0;
	if ( sd->fAccepting >  0x7fff )
		goto label_cond_e0;
	cVar1 = 0x1;
label_goto_a2:
	android::icu::impl::Assert::assrt(cVar1);
	if ( -0x8000 >= sd->fLookAhead )
		goto label_cond_e2;
	if ( sd->fLookAhead >  0x7fff )
		goto label_cond_e2;
	cVar2 = 0x1;
label_goto_b2:
	android::icu::impl::Assert::assrt(cVar2);
	table[( row + 0x0)] = (short)(sd->fAccepting);
	table[( row + 0x1)] = (short)(sd->fLookAhead);
	table[( row + 0x2)] = (short)(sd->fTagsIdx);
	col = 0x0;
	//    .local v0, "col":I
label_goto_cb:
	if ( col >= this->fRB->fSetBuilder->getNumCharCategories() )
		goto label_cond_e4;
	table[(( row + 0x4) +  col)] = (short)(sd->fDtran[col]);
	col = ( col + 0x1);
	goto label_goto_cb;
	// 2234    .line 899
	// 2235    .end local v0    # "col":I
	// 2236    .end local v1    # "flags":I
	// 2237    .end local v2    # "numCharCategories":I
	// 2238    .end local v3    # "numStates":I
	// 2239    .end local v4    # "row":I
	// 2240    .end local v5    # "rowLen":I
	// 2241    .end local v6    # "sd":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	// 2242    .end local v7    # "state":I
	// 2243    .end local v8    # "table":[S
	// 2244    .end local v9    # "tableSize":I
label_cond_da:
	cVar0 = 0x0;
	goto label_goto_25;
	// 2250    .line 898
label_cond_dd:
	cVar0 = 0x0;
	goto label_goto_25;
	// 2256    .line 938
	// 2257    .restart local v1    # "flags":I
	// 2258    .restart local v2    # "numCharCategories":I
	// 2259    .restart local v3    # "numStates":I
	// 2260    .restart local v4    # "row":I
	// 2261    .restart local v5    # "rowLen":I
	// 2262    .restart local v6    # "sd":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	// 2263    .restart local v7    # "state":I
	// 2264    .restart local v8    # "table":[S
	// 2265    .restart local v9    # "tableSize":I
label_cond_e0:
	cVar1 = 0x0;
	goto label_goto_a2;
	// 2271    .line 939
label_cond_e2:
	cVar2 = 0x0;
	goto label_goto_b2;
	// 2277    .line 935
	// 2278    .restart local v0    # "col":I
label_cond_e4:
	state = ( state + 0x1);
	goto label_goto_87;
	// 2284    .line 947
	// 2285    .end local v0    # "col":I
	// 2286    .end local v4    # "row":I
	// 2287    .end local v6    # "sd":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
label_cond_e7:
	return table;

}
// .method flagAcceptingStates()V
void android::icu::text::RBBITableBuilder::flagAcceptingStates()
{
	
	int cVar0;
	std::shared_ptr<java::util::ArrayList> endMarkerNodes;
	int i;
	std::shared_ptr<android::icu::text::RBBINode> endMarker;
	int n;
	std::shared_ptr<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor> sd;
	
	cVar0 = -0x1;
	endMarkerNodes = std::make_shared<java::util::ArrayList>();
	//    .local v1, "endMarkerNodes":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/RBBINode;>;"
	this->fRB->fTreeRoots[this->fRootIx]->findNodes(endMarkerNodes, 0x6);
	i = 0x0;
	//    .local v2, "i":I
label_goto_13:
	if ( i >= endMarkerNodes->size() )
		goto label_cond_60;
	endMarker = endMarkerNodes->get(i);
	endMarker->checkCast("android::icu::text::RBBINode");
	//    .local v0, "endMarker":Landroid/icu/text/RBBINode;
	n = 0x0;
	//    .local v3, "n":I
label_goto_20:
	if ( n >= this->fDStates->size() )
		goto label_cond_5d;
	sd = this->fDStates->get(n);
	sd->checkCast("android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor");
	//    .local v4, "sd":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	if ( !(sd->fPositions->contains(endMarker)) )  
		goto label_cond_5a;
	if ( sd->fAccepting )     
		goto label_cond_46;
	sd->fAccepting = endMarker->fVal;
	if ( sd->fAccepting )     
		goto label_cond_46;
	sd->fAccepting = cVar0;
label_cond_46:
	if ( sd->fAccepting != cVar0 )
		goto label_cond_52;
	if ( !(endMarker->fVal) )  
		goto label_cond_52;
	sd->fAccepting = endMarker->fVal;
label_cond_52:
	if ( !(endMarker->fLookAheadEnd) )  
		goto label_cond_5a;
	sd->fLookAhead = sd->fAccepting;
label_cond_5a:
	n = ( n + 0x1);
	goto label_goto_20;
	// 2418    .line 632
	// 2419    .end local v4    # "sd":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
label_cond_5d:
	i = ( i + 0x1);
	goto label_goto_13;
	// 2425    .line 669
	// 2426    .end local v0    # "endMarker":Landroid/icu/text/RBBINode;
	// 2427    .end local v3    # "n":I
label_cond_60:
	return;

}
// .method flagLookAheadStates()V
void android::icu::text::RBBITableBuilder::flagLookAheadStates()
{
	
	std::shared_ptr<java::util::ArrayList> lookAheadNodes;
	int i;
	std::shared_ptr<android::icu::text::RBBINode> lookAheadNode;
	int n;
	std::shared_ptr<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor> sd;
	
	lookAheadNodes = std::make_shared<java::util::ArrayList>();
	//    .local v2, "lookAheadNodes":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/RBBINode;>;"
	this->fRB->fTreeRoots[this->fRootIx]->findNodes(lookAheadNodes, 0x4);
	i = 0x0;
	//    .local v0, "i":I
label_goto_12:
	if ( i >= lookAheadNodes->size() )
		goto label_cond_41;
	lookAheadNode = lookAheadNodes->get(i);
	lookAheadNode->checkCast("android::icu::text::RBBINode");
	//    .local v1, "lookAheadNode":Landroid/icu/text/RBBINode;
	n = 0x0;
	//    .local v3, "n":I
label_goto_1f:
	if ( n >= this->fDStates->size() )
		goto label_cond_3e;
	sd = this->fDStates->get(n);
	sd->checkCast("android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor");
	//    .local v4, "sd":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	if ( !(sd->fPositions->contains(lookAheadNode)) )  
		goto label_cond_3b;
	sd->fLookAhead = lookAheadNode->fVal;
label_cond_3b:
	n = ( n + 0x1);
	goto label_goto_1f;
	// 2517    .line 684
	// 2518    .end local v4    # "sd":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
label_cond_3e:
	i = ( i + 0x1);
	goto label_goto_12;
	// 2524    .line 694
	// 2525    .end local v1    # "lookAheadNode":Landroid/icu/text/RBBINode;
	// 2526    .end local v3    # "n":I
label_cond_41:
	return;

}
// .method flagTaggedStates()V
void android::icu::text::RBBITableBuilder::flagTaggedStates()
{
	
	std::shared_ptr<java::util::ArrayList> tagNodes;
	int i;
	std::shared_ptr<android::icu::text::RBBINode> tagNode;
	int n;
	std::shared_ptr<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor> sd;
	
	tagNodes = std::make_shared<java::util::ArrayList>();
	//    .local v4, "tagNodes":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/RBBINode;>;"
	this->fRB->fTreeRoots[this->fRootIx]->findNodes(tagNodes, 0x5);
	i = 0x0;
	//    .local v0, "i":I
label_goto_12:
	if ( i >= tagNodes->size() )
		goto label_cond_48;
	tagNode = tagNodes->get(i);
	tagNode->checkCast("android::icu::text::RBBINode");
	//    .local v3, "tagNode":Landroid/icu/text/RBBINode;
	n = 0x0;
	//    .local v1, "n":I
label_goto_1f:
	if ( n >= this->fDStates->size() )
		goto label_cond_45;
	sd = this->fDStates->get(n);
	sd->checkCast("android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor");
	//    .local v2, "sd":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	if ( !(sd->fPositions->contains(tagNode)) )  
		goto label_cond_42;
	sd->fTagVals->add(java::lang::Integer::valueOf(tagNode->fVal));
label_cond_42:
	n = ( n + 0x1);
	goto label_goto_1f;
	// 2622    .line 711
	// 2623    .end local v2    # "sd":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
label_cond_45:
	i = ( i + 0x1);
	goto label_goto_12;
	// 2629    .line 721
	// 2630    .end local v1    # "n":I
	// 2631    .end local v3    # "tagNode":Landroid/icu/text/RBBINode;
label_cond_48:
	return;

}
// .method getTableSize()I
int android::icu::text::RBBITableBuilder::getTableSize()
{
	
	int size;
	
	size = 0x0;
	//    .local v3, "size":I
	if ( this->fRB->fTreeRoots[this->fRootIx] )     
		goto label_cond_d;
	return 0x0;
	// 2660    .line 856
label_cond_d:
	0x10;
	//    .local v1, "numRows":I
	//    .local v0, "numCols":I
	//    .local v2, "rowSize":I
	size = ( (this->fDStates->size() * ( ( this->fRB->fSetBuilder->getNumCharCategories() * 0x2) + 0x8)) + 0x10);
label_goto_25:
	if ( ( size % 0x8) <= 0 )
		goto label_cond_2c;
	size = ( size + 0x1);
	goto label_goto_25;
	// 2704    .line 871
label_cond_2c:
	return size;

}
// .method mergeRuleStatusVals()V
void android::icu::text::RBBITableBuilder::mergeRuleStatusVals()
{
	
	int cVar0;
	std::shared_ptr<java::util::TreeSet> s0;
	std::shared_ptr<java::lang::Object> izero;
	std::shared_ptr<java::util::TreeSet> s1;
	int n;
	std::shared_ptr<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor> sd;
	std::shared_ptr<java::util::SortedSet> statusVals;
	std::shared_ptr<java::lang::Integer> arrayIndexI;
	std::shared_ptr<java::lang::Object> arrayIndexI;
	
	cVar0 = 0x0;
	if ( this->fRB->fRuleStatusVals->size() )     
		goto label_cond_41;
	this->fRB->fRuleStatusVals->add(java::lang::Integer::valueOf(0x1));
	this->fRB->fRuleStatusVals->add(java::lang::Integer::valueOf(cVar0));
	s0 = std::make_shared<java::util::TreeSet>();
	//    .local v3, "s0":Ljava/util/SortedSet;, "Ljava/util/SortedSet<Ljava/lang/Integer;>;"
	izero = java::lang::Integer::valueOf(cVar0);
	//    .local v1, "izero":Ljava/lang/Integer;
	this->fRB->fStatusSets->put(s0, izero);
	s1 = std::make_shared<java::util::TreeSet>();
	//    .local v4, "s1":Ljava/util/SortedSet;, "Ljava/util/SortedSet<Ljava/lang/Integer;>;"
	s1->add(izero);
	this->fRB->fStatusSets->put(s0, izero);
	//    .end local v1    # "izero":Ljava/lang/Integer;
	//    .end local v3    # "s0":Ljava/util/SortedSet;, "Ljava/util/SortedSet<Ljava/lang/Integer;>;"
	//    .end local v4    # "s1":Ljava/util/SortedSet;, "Ljava/util/SortedSet<Ljava/lang/Integer;>;"
label_cond_41:
	n = 0x0;
	//    .local v2, "n":I
label_goto_42:
	if ( n >= this->fDStates->size() )
		goto label_cond_92;
	sd = this->fDStates->get(n);
	sd->checkCast("android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor");
	//    .local v5, "sd":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	statusVals = sd->fTagVals;
	//    .local v6, "statusVals":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Integer;>;"
	arrayIndexI = this->fRB->fStatusSets->get(statusVals);
	arrayIndexI->checkCast("java::lang::Integer");
	//    .local v0, "arrayIndexI":Ljava/lang/Integer;
	if ( arrayIndexI )     
		goto label_cond_89;
	arrayIndexI = java::lang::Integer::valueOf(this->fRB->fRuleStatusVals->size());
	this->fRB->fStatusSets->put(statusVals, arrayIndexI);
	this->fRB->fRuleStatusVals->add(java::lang::Integer::valueOf(statusVals->size()));
	this->fRB->fRuleStatusVals->addAll(statusVals);
label_cond_89:
	sd->fTagsIdx = arrayIndexI->intValue();
	n = ( n + 0x1);
	goto label_goto_42;
	// 2886    .line 799
	// 2887    .end local v0    # "arrayIndexI":Ljava/lang/Integer;
	// 2888    .end local v5    # "sd":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	// 2889    .end local v6    # "statusVals":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Integer;>;"
label_cond_92:
	return;

}
// .method printPosSets(Landroid/icu/text/RBBINode;)V
void android::icu::text::RBBITableBuilder::printPosSets(std::shared_ptr<android::icu::text::RBBINode> n)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "n"    # Landroid/icu/text/RBBINode;
	if ( n )     
		goto label_cond_3;
	return;
	// 2905    .line 818
label_cond_3:
	android::icu::text::RBBINode::printNode(n);
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->print(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("         Nullable:  ")))->append(n->fNullable)->toString());
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("         firstpos:  ")));
	this->printSet(n->fFirstPosSet);
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("         lastpos:   ")));
	this->printSet(n->fLastPosSet);
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("         followpos: ")));
	this->printSet(n->fFollowPos);
	this->printPosSets(n->fLeftChild);
	this->printPosSets(n->fRightChild);
	return;

}
// .method printRuleStatusTable()V
void android::icu::text::RBBITableBuilder::printRuleStatusTable()
{
	
	int cVar0;
	int nextRecord;
	std::shared_ptr<java::util::List> tbl;
	int thisRecord;
	std::shared_ptr<java::lang::Integer> cVar1;
	int i;
	std::shared_ptr<java::lang::Integer> cVar2;
	
	cVar0 = 0x7;
	0x0;
	//    .local v3, "thisRecord":I
	nextRecord = 0x0;
	//    .local v1, "nextRecord":I
	tbl = this->fRB->fRuleStatusVals;
	//    .local v2, "tbl":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Integer;>;"
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("index |  tags \n")));
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("-------------------\n")));
label_goto_17:
	if ( nextRecord >= tbl->size() )
		goto label_cond_4b;
	thisRecord = nextRecord;
	cVar1 = tbl->get(nextRecord);
	cVar1->checkCast("java::lang::Integer");
	nextRecord = ( (cVar1->intValue() +  thisRecord) + 0x1);
	android::icu::text::RBBINode::printInt(thisRecord, cVar0);
	i = ( thisRecord + 0x1);
	//    .local v0, "i":I
label_goto_30:
	if ( i >= nextRecord )
		goto label_cond_42;
	cVar2 = tbl->get(i);
	cVar2->checkCast("java::lang::Integer");
	//    .local v4, "val":I
	android::icu::text::RBBINode::printInt(cVar2->intValue(), cVar0);
	i = ( i + 0x1);
	goto label_goto_30;
	// 3074    .line 1032
	// 3075    .end local v4    # "val":I
label_cond_42:
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	goto label_goto_17;
	// 3085    .line 1034
	// 3086    .end local v0    # "i":I
label_cond_4b:
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n\n")));
	return;

}
// .method printSet(Ljava/util/Collection;)V
void android::icu::text::RBBITableBuilder::printSet(std::shared_ptr<java::util::Collection<android::icu::text::RBBINode>> s)
{
	
	std::shared_ptr<java::util::Iterator> n_S_iterator;
	std::shared_ptr<android::icu::text::RBBINode> n;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3101        value = {
	// 3102            "(",
	// 3103            "Ljava/util/Collection",
	// 3104            "<",
	// 3105            "Landroid/icu/text/RBBINode;",
	// 3106            ">;)V"
	// 3107        }
	// 3108    .end annotation
	//    .local p1, "s":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/RBBINode;>;"
	n_S_iterator = s->iterator();
	//    .local v1, "n$iterator":Ljava/util/Iterator;
label_goto_4:
	if ( !(n_S_iterator->hasNext()) )  
		goto label_cond_18;
	n = n_S_iterator->next();
	n->checkCast("android::icu::text::RBBINode");
	//    .local v0, "n":Landroid/icu/text/RBBINode;
	android::icu::text::RBBINode::printInt(n->fSerialNum, 0x8);
	goto label_goto_4;
	// 3141    .line 962
	// 3142    .end local v0    # "n":Landroid/icu/text/RBBINode;
label_cond_18:
	java::lang::System::out->println();
	return;

}
// .method printStates()V
void android::icu::text::RBBITableBuilder::printStates()
{
	
	int cVar0;
	int c;
	int n;
	std::shared_ptr<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor> sd;
	
	cVar0 = 0x3;
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("state |           i n p u t     s y m b o l s \n")));
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("      | Acc  LA    Tag")));
	c = 0x0;
	//    .local v0, "c":I
label_goto_12:
	if ( c >= this->fRB->fSetBuilder->getNumCharCategories() )
		goto label_cond_22;
	android::icu::text::RBBINode::printInt(c, cVar0);
	c = ( c + 0x1);
	goto label_goto_12;
	// 3195    .line 982
label_cond_22:
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("      |---------------")));
	c = 0x0;
label_goto_33:
	if ( c >= this->fRB->fSetBuilder->getNumCharCategories() )
		goto label_cond_48;
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("---")));
	c = ( c + 0x1);
	goto label_goto_33;
	// 3236    .line 987
label_cond_48:
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	n = 0x0;
	//    .local v1, "n":I
label_goto_51:
	if ( n >= this->fDStates->size() )
		goto label_cond_a6;
	sd = this->fDStates->get(n);
	sd->checkCast("android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor");
	//    .local v2, "sd":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
	android::icu::text::RBBINode::printInt(n, 0x5);
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>(" | ")));
	android::icu::text::RBBINode::printInt(sd->fAccepting, cVar0);
	android::icu::text::RBBINode::printInt(sd->fLookAhead, 0x4);
	android::icu::text::RBBINode::printInt(sd->fTagsIdx, 0x6);
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")));
	c = 0x0;
label_goto_87:
	if ( c >= this->fRB->fSetBuilder->getNumCharCategories() )
		goto label_cond_9b;
	android::icu::text::RBBINode::printInt(sd->fDtran[c], cVar0);
	c = ( c + 0x1);
	goto label_goto_87;
	// 3331    .line 1001
label_cond_9b:
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	n = ( n + 0x1);
	goto label_goto_51;
	// 3344    .line 1003
	// 3345    .end local v2    # "sd":Landroid/icu/text/RBBITableBuilder$RBBIStateDescriptor;
label_cond_a6:
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n\n")));
	return;

}


