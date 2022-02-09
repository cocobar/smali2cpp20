// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RBBISetBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.Assert.h"
#include "android.icu.impl.IntTrieBuilder.h"
#include "android.icu.text.RBBINode.h"
#include "android.icu.text.RBBIRuleBuilder.h"
#include "android.icu.text.RBBISetBuilder_S_RBBIDataManipulate.h"
#include "android.icu.text.RBBISetBuilder_S_RangeDescriptor.h"
#include "android.icu.text.RBBISetBuilder.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.io.PrintStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"

// .method constructor <init>(Landroid/icu/text/RBBIRuleBuilder;)V
android::icu::text::RBBISetBuilder::RBBISetBuilder(std::shared_ptr<android::icu::text::RBBIRuleBuilder> rb)
{
	
	std::shared_ptr<android::icu::text::RBBISetBuilder_S_RBBIDataManipulate> cVar0;
	
	//    .param p1, "rb"    # Landroid/icu/text/RBBIRuleBuilder;
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::text::RBBISetBuilder_S_RBBIDataManipulate>(this);
	this->dm = cVar0;
	this->fRB = rb;
	return;

}
// .method addValToSet(Landroid/icu/text/RBBINode;I)V
void android::icu::text::RBBISetBuilder::addValToSet(std::shared_ptr<android::icu::text::RBBINode> usetNode,int val)
{
	
	std::shared_ptr<android::icu::text::RBBINode> leafNode;
	std::shared_ptr<android::icu::text::RBBINode> orNode;
	
	//    .param p1, "usetNode"    # Landroid/icu/text/RBBINode;
	//    .param p2, "val"    # I
	leafNode = std::make_shared<android::icu::text::RBBINode>(0x3);
	//    .local v0, "leafNode":Landroid/icu/text/RBBINode;
	leafNode->fVal = val;
	if ( usetNode->fLeftChild )     
		goto label_cond_11;
	usetNode->fLeftChild = leafNode;
	leafNode->fParent = usetNode;
label_goto_10:
	return;
	// 086    .line 386
label_cond_11:
	orNode = std::make_shared<android::icu::text::RBBINode>(0x9);
	//    .local v1, "orNode":Landroid/icu/text/RBBINode;
	orNode->fLeftChild = usetNode->fLeftChild;
	orNode->fRightChild = leafNode;
	orNode->fLeftChild->fParent = orNode;
	orNode->fRightChild->fParent = orNode;
	usetNode->fLeftChild = orNode;
	orNode->fParent = usetNode;
	goto label_goto_10;

}
// .method addValToSets(Ljava/util/List;I)V
void android::icu::text::RBBISetBuilder::addValToSets(std::shared_ptr<java::util::List<android::icu::text::RBBINode>> sets,int val)
{
	
	std::shared_ptr<java::util::Iterator> usetNode_S_iterator;
	std::shared_ptr<android::icu::text::RBBINode> usetNode;
	
	//    .param p2, "val"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 126        value = {
	// 127            "(",
	// 128            "Ljava/util/List",
	// 129            "<",
	// 130            "Landroid/icu/text/RBBINode;",
	// 131            ">;I)V"
	// 132        }
	// 133    .end annotation
	//    .local p1, "sets":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/RBBINode;>;"
	usetNode_S_iterator = sets->iterator();
	//    .local v1, "usetNode$iterator":Ljava/util/Iterator;
label_goto_4:
	if ( !(usetNode_S_iterator->hasNext()) )  
		goto label_cond_14;
	usetNode = usetNode_S_iterator->next();
	usetNode->checkCast("android::icu::text::RBBINode");
	//    .local v0, "usetNode":Landroid/icu/text/RBBINode;
	this->addValToSet(usetNode, val);
	goto label_goto_4;
	// 162    .line 374
	// 163    .end local v0    # "usetNode":Landroid/icu/text/RBBINode;
label_cond_14:
	return;

}
// .method build()V
void android::icu::text::RBBISetBuilder::build()
{
	
	std::shared_ptr<android::icu::text::RBBISetBuilder_S_RangeDescriptor> cVar0;
	std::shared_ptr<java::util::Iterator> usetNode_S_iterator;
	std::shared_ptr<android::icu::text::RBBINode> usetNode;
	std::shared_ptr<android::icu::text::UnicodeSet> inputSet;
	int inputSetRangeIndex;
	std::shared_ptr<android::icu::text::RBBISetBuilder_S_RangeDescriptor> rlRange;
	int inputSetRangeBegin;
	int inputSetRangeEnd;
	auto rlSearchRange;
	std::shared_ptr<android::icu::impl::IntTrieBuilder> cVar1;
	
	if ( !(this->fRB->fDebugEnv) )  
		goto label_cond_1a;
	if ( this->fRB->fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("usets"))) < 0 ) 
		goto label_cond_1a;
	this->printSets();
label_cond_1a:
	cVar0 = std::make_shared<android::icu::text::RBBISetBuilder_S_RangeDescriptor>();
	this->fRangeList = cVar0;
	this->fRangeList->fStartChar = 0x0;
	this->fRangeList->fEndChar = 0x10ffff;
	usetNode_S_iterator = this->fRB->fUSetNodes->iterator();
	//    .local v18, "usetNode$iterator":Ljava/util/Iterator;
label_cond_3d:
	if ( !(usetNode_S_iterator->hasNext()) )  
		goto label_cond_93;
	usetNode = usetNode_S_iterator->next();
	usetNode->checkCast("android::icu::text::RBBINode");
	//    .local v17, "usetNode":Landroid/icu/text/RBBINode;
	inputSet = usetNode->fInputSet;
	//    .local v10, "inputSet":Landroid/icu/text/UnicodeSet;
	//    .local v12, "inputSetRangeCount":I
	inputSetRangeIndex = 0x0;
	//    .local v14, "inputSetRangeIndex":I
	rlRange = this->fRangeList;
	//    .local v15, "rlRange":Landroid/icu/text/RBBISetBuilder$RangeDescriptor;
label_goto_56:
	if ( inputSetRangeIndex >= inputSet->getRangeCount() )
		goto label_cond_3d;
	inputSetRangeBegin = inputSet->getRangeStart(inputSetRangeIndex);
	//    .local v11, "inputSetRangeBegin":I
	inputSetRangeEnd = inputSet->getRangeEnd(inputSetRangeIndex);
	//    .local v13, "inputSetRangeEnd":I
label_goto_60:
	if ( rlRange->fEndChar >= inputSetRangeBegin )
		goto label_cond_67;
	rlRange = rlRange->fNext;
	goto label_goto_60;
	// 300    .line 198
label_cond_67:
	if ( rlRange->fStartChar >= inputSetRangeBegin )
		goto label_cond_6f;
	rlRange->split(inputSetRangeBegin);
	goto label_goto_56;
	// 311    .line 208
label_cond_6f:
	if ( rlRange->fEndChar <= inputSetRangeEnd )
		goto label_cond_78;
	rlRange->split(( inputSetRangeEnd + 0x1));
label_cond_78:
	if ( rlRange->fIncludesSets->indexOf(usetNode) != -0x1 )
		goto label_cond_8a;
	rlRange->fIncludesSets->add(usetNode);
label_cond_8a:
	if ( inputSetRangeEnd != rlRange->fEndChar )
		goto label_cond_90;
	inputSetRangeIndex = ( inputSetRangeIndex + 0x1);
label_cond_90:
	rlRange = rlRange->fNext;
	goto label_goto_56;
	// 358    .line 226
	// 359    .end local v10    # "inputSet":Landroid/icu/text/UnicodeSet;
	// 360    .end local v11    # "inputSetRangeBegin":I
	// 361    .end local v12    # "inputSetRangeCount":I
	// 362    .end local v13    # "inputSetRangeEnd":I
	// 363    .end local v14    # "inputSetRangeIndex":I
	// 364    .end local v15    # "rlRange":Landroid/icu/text/RBBISetBuilder$RangeDescriptor;
	// 365    .end local v17    # "usetNode":Landroid/icu/text/RBBINode;
label_cond_93:
	if ( !(this->fRB->fDebugEnv) )  
		goto label_cond_ad;
	if ( this->fRB->fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("range"))) < 0 ) 
		goto label_cond_ad;
	this->printRanges();
label_cond_ad:
	rlRange = this->fRangeList;
	//    .restart local v15    # "rlRange":Landroid/icu/text/RBBISetBuilder$RangeDescriptor;
label_goto_b1:
	if ( !(rlRange) )  
		goto label_cond_ff;
	rlSearchRange = this->fRangeList;
	//    .local v16, "rlSearchRange":Landroid/icu/text/RBBISetBuilder$RangeDescriptor;
label_goto_b9:
	if ( rlSearchRange == rlRange )
		goto label_cond_cf;
	if ( !(rlRange->fIncludesSets->equals(rlSearchRange->fIncludesSets)) )  
		goto label_cond_f8;
	rlRange->fNum = rlSearchRange->fNum;
label_cond_cf:
	if ( rlRange->fNum )     
		goto label_cond_f5;
	this->fGroupCount = ( this->fGroupCount + 0x1);
	rlRange->fNum = ( this->fGroupCount + 0x2);
	rlRange->setDictionaryFlag();
	this->addValToSets(rlRange->fIncludesSets, ( this->fGroupCount + 0x2));
label_cond_f5:
	rlRange = rlRange->fNext;
	goto label_goto_b1;
	// 482    .line 241
label_cond_f8:
	rlSearchRange = rlSearchRange->fNext;
	goto label_goto_b9;
	// 492    .line 265
	// 493    .end local v16    # "rlSearchRange":Landroid/icu/text/RBBISetBuilder$RangeDescriptor;
label_cond_ff:
	//    .local v9, "eofString":Ljava/lang/String;
	//    .local v8, "bofString":Ljava/lang/String;
	usetNode_S_iterator = this->fRB->fUSetNodes->iterator();
label_cond_10f:
label_goto_10f:
	if ( !(usetNode_S_iterator->hasNext()) )  
		goto label_cond_141;
	usetNode = usetNode_S_iterator->next();
	usetNode->checkCast("android::icu::text::RBBINode");
	//    .restart local v17    # "usetNode":Landroid/icu/text/RBBINode;
	inputSet = usetNode->fInputSet;
	//    .restart local v10    # "inputSet":Landroid/icu/text/UnicodeSet;
	if ( !(inputSet->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("eof")))) )  
		goto label_cond_12d;
	this->addValToSet(usetNode, 0x1);
label_cond_12d:
	if ( !(inputSet->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("bof")))) )  
		goto label_cond_10f;
	this->addValToSet(usetNode, 0x2);
	this->fSawBOF = 0x1;
	goto label_goto_10f;
	// 576    .line 280
	// 577    .end local v10    # "inputSet":Landroid/icu/text/UnicodeSet;
	// 578    .end local v17    # "usetNode":Landroid/icu/text/RBBINode;
label_cond_141:
	if ( !(this->fRB->fDebugEnv) )  
		goto label_cond_15b;
	if ( this->fRB->fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("rgroup"))) < 0 ) 
		goto label_cond_15b;
	this->printRangeGroups();
label_cond_15b:
	if ( !(this->fRB->fDebugEnv) )  
		goto label_cond_175;
	if ( this->fRB->fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("esets"))) < 0 ) 
		goto label_cond_175;
	this->printSets();
label_cond_175:
	cVar1 = std::make_shared<android::icu::impl::IntTrieBuilder>(0x0, 0x186a0, 0x0, 0x0, 0x1);
	this->fTrie = cVar1;
	rlRange = this->fRangeList;
label_goto_189:
	if ( !(rlRange) )  
		goto label_cond_19e;
	this->fTrie->setRange(rlRange->fStartChar, ( rlRange->fEndChar + 0x1), rlRange->fNum, 0x1);
	rlRange = rlRange->fNext;
	goto label_goto_189;
	// 685    .line 297
label_cond_19e:
	return;

}
// .method getFirstChar(I)I
int android::icu::text::RBBISetBuilder::getFirstChar(int category)
{
	
	std::shared_ptr<android::icu::text::RBBISetBuilder_S_RangeDescriptor> rlRange;
	
	//    .param p1, "category"    # I
	//    .local v0, "retVal":I
	rlRange = this->fRangeList;
	//    .local v1, "rlRange":Landroid/icu/text/RBBISetBuilder$RangeDescriptor;
label_goto_3:
	if ( !(rlRange) )  
		goto label_cond_b;
	if ( rlRange->fNum != category )
		goto label_cond_c;
label_cond_b:
	return -0x1;
	// 718    .line 426
label_cond_c:
	rlRange = rlRange->fNext;
	goto label_goto_3;

}
// .method getNumCharCategories()I
int android::icu::text::RBBISetBuilder::getNumCharCategories()
{
	
	return ( this->fGroupCount + 0x3);

}
// .method getTrieSize()I
int android::icu::text::RBBISetBuilder::getTrieSize()
{
	
	int size;
	std::vector<std::any> tryCatchExcetionList;
	
	size = 0x0;
	//    .local v1, "size":I
	try {
	//label_try_start_1:
	//label_try_end_a:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_c;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_a} :catch_c
	size = this->fTrie->serialize(0x0, 0x1, this->dm);
label_goto_b:
	return size;
	// 765    .line 340
label_catch_c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	android::icu::impl::Assert::assrt(0x0);
	goto label_goto_b;

}
// .method printRangeGroups()V
void android::icu::text::RBBISetBuilder::printRangeGroups()
{
	
	int lastPrintedGroupNum;
	std::shared_ptr<android::icu::text::RBBISetBuilder_S_RangeDescriptor> rlRange;
	int groupNum;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	int i;
	std::shared_ptr<android::icu::text::RBBINode> usetNode;
	std::shared_ptr<android::icu::text::RBBINode> setRef;
	std::shared_ptr<android::icu::text::RBBINode> varRef;
	int tRange;
	std::shared_ptr<android::icu::text::RBBISetBuilder_S_RangeDescriptor> tRange;
	
	lastPrintedGroupNum = 0x0;
	//    .local v3, "lastPrintedGroupNum":I
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nRanges grouped by Unicode Set Membership...\n")));
	rlRange = this->fRangeList;
	//    .local v4, "rlRange":Landroid/icu/text/RBBISetBuilder$RangeDescriptor;
label_goto_c:
	if ( !(rlRange) )  
		goto label_cond_ba;
	groupNum = (rlRange->fNum & 0xbfff);
	//    .local v0, "groupNum":I
	if ( groupNum <= lastPrintedGroupNum )
		goto label_cond_b6;
	lastPrintedGroupNum = groupNum;
	if ( groupNum >= 0xa )
		goto label_cond_24;
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")));
label_cond_24:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->print(cVar0->append(groupNum)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->toString());
	if ( !(( rlRange->fNum & 0x4000)) )  
		goto label_cond_4b;
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>(" <DICT> ")));
label_cond_4b:
	i = 0x0;
	//    .local v1, "i":I
label_goto_4c:
	if ( i >= rlRange->fIncludesSets->size() )
		goto label_cond_7e;
	usetNode = rlRange->fIncludesSets->get(i);
	usetNode->checkCast("android::icu::text::RBBINode");
	//    .local v8, "usetNode":Landroid/icu/text/RBBINode;
	//    .local v5, "setName":Ljava/lang/String;
	setRef = usetNode->fParent;
	//    .local v6, "setRef":Landroid/icu/text/RBBINode;
	if ( !(setRef) )  
		goto label_cond_6e;
	varRef = setRef->fParent;
	//    .local v9, "varRef":Landroid/icu/text/RBBINode;
	if ( !(varRef) )  
		goto label_cond_6e;
	if ( varRef->fType != 0x2 )
		goto label_cond_6e;
	//    .end local v9    # "varRef":Landroid/icu/text/RBBINode;
label_cond_6e:
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("anon")));
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")));
	i = ( i + 0x1);
	goto label_goto_4c;
	// 933    .line 506
	// 934    .end local v5    # "setName":Ljava/lang/String;
	// 935    .end local v6    # "setRef":Landroid/icu/text/RBBINode;
	// 936    .end local v8    # "usetNode":Landroid/icu/text/RBBINode;
label_cond_7e:
	i = 0x0;
	tRange = rlRange;
	//    .local v7, "tRange":Landroid/icu/text/RBBISetBuilder$RangeDescriptor;
	i = i;
	//    .end local v1    # "i":I
	//    .local v2, "i":I
label_goto_81:
	if ( !(tRange) )  
		goto label_cond_ae;
	if ( tRange->fNum != rlRange->fNum )
		goto label_cond_c3;
	i = ( i + 0x1);
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	if ( ( i % 0x5) )     
		goto label_cond_97;
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n    ")));
label_cond_97:
	android::icu::text::RBBINode::printHex(tRange->fStartChar, -0x1);
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	android::icu::text::RBBINode::printHex(tRange->fEndChar, 0x0);
label_goto_aa:
	tRange = tRange->fNext;
	i = i;
	//    .end local v1    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_81;
	// 1004    .line 517
label_cond_ae:
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	//    .end local v2    # "i":I
	//    .end local v7    # "tRange":Landroid/icu/text/RBBISetBuilder$RangeDescriptor;
label_cond_b6:
	rlRange = rlRange->fNext;
	goto label_goto_c;
	// 1020    .line 520
	// 1021    .end local v0    # "groupNum":I
label_cond_ba:
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	return;
	// 1032    .restart local v0    # "groupNum":I
	// 1033    .restart local v2    # "i":I
	// 1034    .restart local v7    # "tRange":Landroid/icu/text/RBBISetBuilder$RangeDescriptor;
label_cond_c3:
	i = i;
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_aa;

}
// .method printRanges()V
void android::icu::text::RBBISetBuilder::printRanges()
{
	
	std::shared_ptr<android::icu::text::RBBISetBuilder_S_RangeDescriptor> rlRange;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	int i;
	std::shared_ptr<android::icu::text::RBBINode> usetNode;
	std::shared_ptr<android::icu::text::RBBINode> setRef;
	std::shared_ptr<android::icu::text::RBBINode> varRef;
	
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n\n Nonoverlapping Ranges ...\n")));
	rlRange = this->fRangeList;
	//    .local v1, "rlRange":Landroid/icu/text/RBBISetBuilder$RangeDescriptor;
label_goto_a:
	if ( !(rlRange) )  
		goto label_cond_7f;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->print(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(rlRange->fNum)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("   ")))->append(rlRange->fStartChar)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(rlRange->fEndChar)->toString());
	i = 0x0;
	//    .local v0, "i":I
label_goto_42:
	if ( i >= rlRange->fIncludesSets->size() )
		goto label_cond_74;
	usetNode = rlRange->fIncludesSets->get(i);
	usetNode->checkCast("android::icu::text::RBBINode");
	//    .local v4, "usetNode":Landroid/icu/text/RBBINode;
	//    .local v2, "setName":Ljava/lang/String;
	setRef = usetNode->fParent;
	//    .local v3, "setRef":Landroid/icu/text/RBBINode;
	if ( !(setRef) )  
		goto label_cond_64;
	varRef = setRef->fParent;
	//    .local v5, "varRef":Landroid/icu/text/RBBINode;
	if ( !(varRef) )  
		goto label_cond_64;
	if ( varRef->fType != 0x2 )
		goto label_cond_64;
	//    .end local v5    # "varRef":Landroid/icu/text/RBBINode;
label_cond_64:
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("anon")));
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")));
	i = ( i + 0x1);
	goto label_goto_42;
	// 1178    .line 464
	// 1179    .end local v2    # "setName":Ljava/lang/String;
	// 1180    .end local v3    # "setRef":Landroid/icu/text/RBBINode;
	// 1181    .end local v4    # "usetNode":Landroid/icu/text/RBBINode;
label_cond_74:
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	rlRange = rlRange->fNext;
	goto label_goto_a;
	// 1194    .line 466
	// 1195    .end local v0    # "i":I
label_cond_7f:
	return;

}
// .method printSets()V
void android::icu::text::RBBISetBuilder::printSets()
{
	
	int cVar0;
	int i;
	std::shared_ptr<android::icu::text::RBBINode> usetNode;
	std::shared_ptr<android::icu::text::RBBINode> setRef;
	std::shared_ptr<android::icu::text::RBBINode> varRef;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	cVar0 = 0x2;
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n\nUnicode Sets List\n------------------\n")));
	i = 0x0;
	//    .local v0, "i":I
label_goto_a:
	if ( i >= this->fRB->fUSetNodes->size() )
		goto label_cond_6f;
	usetNode = this->fRB->fUSetNodes->get(i);
	usetNode->checkCast("android::icu::text::RBBINode");
	//    .local v3, "usetNode":Landroid/icu/text/RBBINode;
	android::icu::text::RBBINode::printInt(cVar0, i);
	//    .local v1, "setName":Ljava/lang/String;
	setRef = usetNode->fParent;
	//    .local v2, "setRef":Landroid/icu/text/RBBINode;
	if ( !(setRef) )  
		goto label_cond_32;
	varRef = setRef->fParent;
	//    .local v4, "varRef":Landroid/icu/text/RBBINode;
	if ( !(varRef) )  
		goto label_cond_32;
	if ( varRef->fType != cVar0 )
		goto label_cond_32;
	//    .end local v4    # "varRef":Landroid/icu/text/RBBINode;
label_cond_32:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->print(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("anonymous")))->toString());
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("   ")));
	java::lang::System::out->print(usetNode->fText);
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	if ( !(usetNode->fLeftChild) )  
		goto label_cond_6c;
	usetNode->fLeftChild->printTree(0x1);
label_cond_6c:
	i = ( i + 0x1);
	goto label_goto_a;
	// 1332    .line 561
	// 1333    .end local v1    # "setName":Ljava/lang/String;
	// 1334    .end local v2    # "setRef":Landroid/icu/text/RBBINode;
	// 1335    .end local v3    # "usetNode":Landroid/icu/text/RBBINode;
label_cond_6f:
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	return;

}
// .method sawBOF()Z
bool android::icu::text::RBBISetBuilder::sawBOF()
{
	
	return this->fSawBOF;

}
// .method serializeTrie(Ljava/io/OutputStream;)V
void android::icu::text::RBBISetBuilder::serializeTrie(std::shared_ptr<java::io::OutputStream> os)
{
	
	//    .param p1, "os"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1361        value = {
	// 1362            Ljava/io/IOException;
	// 1363        }
	// 1364    .end annotation
	this->fTrie->serialize(os, 0x1, this->dm);
	return;

}


