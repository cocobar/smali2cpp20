// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RBBIRuleScanner.smali
#include "java2ctype.h"
#include "android.icu.impl.Assert.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.RBBINode.h"
#include "android.icu.text.RBBIRuleBuilder.h"
#include "android.icu.text.RBBIRuleParseTable_S_RBBIRuleTableElement.h"
#include "android.icu.text.RBBIRuleParseTable.h"
#include "android.icu.text.RBBIRuleScanner_S_RBBIRuleChar.h"
#include "android.icu.text.RBBIRuleScanner_S_RBBISetTableEl.h"
#include "android.icu.text.RBBIRuleScanner.h"
#include "android.icu.text.RBBISymbolTable.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.io.PrintStream.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.text.ParsePosition.h"
#include "java.util.HashMap.h"
#include "java.util.List.h"

static android::icu::text::RBBIRuleScanner::chLS = 0x2028;
static android::icu::text::RBBIRuleScanner::chNEL = 0x85;
static android::icu::text::RBBIRuleScanner::gRuleSet_digit_char_pattern = nullptr;
static android::icu::text::RBBIRuleScanner::gRuleSet_name_char_pattern = nullptr;
static android::icu::text::RBBIRuleScanner::gRuleSet_name_start_char_pattern = nullptr;
static android::icu::text::RBBIRuleScanner::gRuleSet_rule_char_pattern = nullptr;
static android::icu::text::RBBIRuleScanner::gRuleSet_white_space_pattern = nullptr;
static android::icu::text::RBBIRuleScanner::kAny = nullptr;
static android::icu::text::RBBIRuleScanner::kStackSize = 0x64;
// .method static constructor <clinit>()V
void android::icu::text::RBBIRuleScanner::static_cinit()
{
	
	android::icu::text::RBBIRuleScanner::gRuleSet_rule_char_pattern = std::make_shared<java::lang::String>(std::make_shared<char[]>("[^[\\p{Z}\\u0020-\\u007f]-[\\p{L}]-[\\p{N}]]"));
	android::icu::text::RBBIRuleScanner::gRuleSet_name_char_pattern = std::make_shared<java::lang::String>(std::make_shared<char[]>("[_\\p{L}\\p{N}]"));
	android::icu::text::RBBIRuleScanner::gRuleSet_digit_char_pattern = std::make_shared<java::lang::String>(std::make_shared<char[]>("[0-9]"));
	android::icu::text::RBBIRuleScanner::gRuleSet_name_start_char_pattern = std::make_shared<java::lang::String>(std::make_shared<char[]>("[_\\p{L}]"));
	android::icu::text::RBBIRuleScanner::gRuleSet_white_space_pattern = std::make_shared<java::lang::String>(std::make_shared<char[]>("[\\p{Pattern_White_Space}]"));
	android::icu::text::RBBIRuleScanner::kAny = std::make_shared<java::lang::String>(std::make_shared<char[]>("any"));
	return;

}
// .method constructor <init>(Landroid/icu/text/RBBIRuleBuilder;)V
android::icu::text::RBBIRuleScanner::RBBIRuleScanner(std::shared_ptr<android::icu::text::RBBIRuleBuilder> rb)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::RBBIRuleScanner_S_RBBIRuleChar> cVar2;
	std::shared_ptr<java::util::HashMap> cVar3;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar4;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar5;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar6;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar7;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar8;
	std::shared_ptr<android::icu::text::RBBISymbolTable> cVar9;
	
	//    .param p1, "rb"    # Landroid/icu/text/RBBIRuleBuilder;
	cVar0 = 0x64;
	cVar1 = 0x1;
	// 136    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar2 = std::make_shared<android::icu::text::RBBIRuleScanner_S_RBBIRuleChar>();
	this->fC = cVar2;
	this->fStack = std::make_shared<std::vector<short[]>>(cVar0);
	this->fNodeStack = std::make_shared<std::vector<std::vector<android::icu::text::RBBINode>>>(cVar0);
	cVar3 = std::make_shared<java::util::HashMap>();
	this->fSetTable = cVar3;
	this->fRuleSets = std::make_shared<std::vector<std::vector<android::icu::text::UnicodeSet>>>(0xa);
	this->fRB = rb;
	this->fLineNum = cVar1;
	cVar4 = std::make_shared<android::icu::text::UnicodeSet>(android::icu::text::RBBIRuleScanner::gRuleSet_rule_char_pattern);
	this->fRuleSets[0x3] = cVar4;
	cVar5 = std::make_shared<android::icu::text::UnicodeSet>(android::icu::text::RBBIRuleScanner::gRuleSet_white_space_pattern);
	this->fRuleSets[0x4] = cVar5;
	cVar6 = std::make_shared<android::icu::text::UnicodeSet>(android::icu::text::RBBIRuleScanner::gRuleSet_name_char_pattern);
	this->fRuleSets[cVar1] = cVar6;
	cVar7 = std::make_shared<android::icu::text::UnicodeSet>(android::icu::text::RBBIRuleScanner::gRuleSet_name_start_char_pattern);
	this->fRuleSets[0x2] = cVar7;
	cVar8 = std::make_shared<android::icu::text::UnicodeSet>(android::icu::text::RBBIRuleScanner::gRuleSet_digit_char_pattern);
	this->fRuleSets[0x0] = cVar8;
	cVar9 = std::make_shared<android::icu::text::RBBISymbolTable>(this);
	this->fSymbolTable = cVar9;
	return;

}
// .method static stripRules(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RBBIRuleScanner::stripRules(std::shared_ptr<java::lang::String> rules)
{
	
	std::shared_ptr<java::lang::StringBuilder> strippedRules;
	int rulesLength;
	int idx;
	int ch;
	
	//    .param p0, "rules"    # Ljava/lang/String;
	strippedRules = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "strippedRules":Ljava/lang/StringBuilder;
	rulesLength = rules->length();
	//    .local v3, "rulesLength":I
	//    .local v1, "idx":I
	idx = 0x0;
	//    .end local v1    # "idx":I
	//    .local v2, "idx":I
label_goto_b:
	if ( idx >= rulesLength )
		goto label_cond_39;
	idx = ( idx + 0x1);
	//    .end local v2    # "idx":I
	//    .restart local v1    # "idx":I
	ch = rules->charAt(idx);
	//    .local v0, "ch":C
	if ( ch != 0x23 )
		goto label_cond_2e;
label_goto_17:
	idx = idx;
	//    .end local v1    # "idx":I
	//    .restart local v2    # "idx":I
	if ( idx >= rulesLength )
		goto label_cond_2d;
	if ( ch == 0xd )
		goto label_cond_2d;
	if ( ch == 0xa )
		goto label_cond_2d;
	if ( ch == 0x85 )
		goto label_cond_2d;
	//    .end local v2    # "idx":I
	//    .restart local v1    # "idx":I
	ch = rules->charAt(idx);
	goto label_goto_17;
	// 324    .end local v1    # "idx":I
	// 325    .restart local v2    # "idx":I
label_cond_2d:
	//    .end local v2    # "idx":I
	//    .restart local v1    # "idx":I
label_cond_2e:
	if ( android::icu::lang::UCharacter::isISOControl(ch) )     
		goto label_cond_37;
	strippedRules->append(ch);
label_cond_37:
	idx = idx;
	//    .end local v1    # "idx":I
	//    .restart local v2    # "idx":I
	goto label_goto_b;
	// 349    .line 708
	// 350    .end local v0    # "ch":C
label_cond_39:
	return strippedRules->toString();

}
// .method doParseActions(I)Z
bool android::icu::text::RBBIRuleScanner::doParseActions(int action)
{
	
	bool returnVal;
	std::shared_ptr<android::icu::text::RBBINode> n;
	auto varRefNode;
	std::shared_ptr<android::icu::text::RBBINode> RHSExprNode;
	bool cVar2;
	auto thisRule;
	std::shared_ptr<android::icu::text::RBBINode> endNode;
	std::shared_ptr<android::icu::text::RBBINode> catNode;
	int destRules;
	std::shared_ptr<android::icu::text::RBBINode> prevRules;
	std::shared_ptr<android::icu::text::RBBINode> orNode;
	int n;
	int cVar1;
	std::shared_ptr<android::icu::text::RBBINode> operandNode;
	int cVar0;
	std::shared_ptr<java::lang::String> opt;
	int cVar4;
	std::shared_ptr<android::icu::text::RBBINode> plusNode;
	int cVar5;
	std::shared_ptr<android::icu::text::RBBINode> qNode;
	int cVar6;
	auto starNode;
	
	//    .param p1, "action"    # I
	0x0;
	//    .local v7, "n":Landroid/icu/text/RBBINode;
	returnVal = 0x1;
	//    .local v14, "returnVal":Z
	// switch
	{
	auto item = ( action );
	if (item == 1) goto label_pswitch_666;
	if (item == 2) goto label_pswitch_3bc;
	if (item == 3) goto label_pswitch_c9;
	if (item == 4) goto label_pswitch_15d;
	if (item == 5) goto label_pswitch_602;
	if (item == 6) goto label_pswitch_694;
	if (item == 7) goto label_pswitch_60;
	if (item == 8) goto label_pswitch_10;
	if (item == 9) goto label_pswitch_32;
	if (item == 10) goto label_pswitch_99;
	if (item == 11) goto label_pswitch_11;
	if (item == 12) goto label_pswitch_8e;
	if (item == 13) goto label_pswitch_10;
	if (item == 14) goto label_pswitch_29;
	if (item == 15) goto label_pswitch_4fd;
	if (item == 16) goto label_pswitch_4ef;
	if (item == 17) goto label_pswitch_5e2;
	if (item == 18) goto label_pswitch_362;
	if (item == 19) goto label_pswitch_2d3;
	if (item == 20) goto label_pswitch_687;
	if (item == 21) goto label_pswitch_697;
	if (item == 22) goto label_pswitch_405;
	if (item == 23) goto label_pswitch_a4;
	if (item == 24) goto label_pswitch_453;
	if (item == 25) goto label_pswitch_5ec;
	if (item == 26) goto label_pswitch_479;
	if (item == 27) goto label_pswitch_4e2;
	if (item == 28) goto label_pswitch_4ac;
	if (item == 29) goto label_pswitch_2ec;
	if (item == 30) goto label_pswitch_312;
	if (item == 31) goto label_pswitch_338;
	if (item == 32) goto label_pswitch_2e0;
	}
	this->error(0x10201);
	returnVal = 0x0;
	//    .end local v7    # "n":Landroid/icu/text/RBBINode;
label_cond_10:
label_goto_10:
label_pswitch_10:
	return returnVal;
	// 396    .line 142
	// 397    .restart local v7    # "n":Landroid/icu/text/RBBINode;
label_pswitch_11:
	this->pushNewNode(0x7);
	this->fRuleNum = ( this->fRuleNum + 0x1);
	goto label_goto_10;
	// 424    .line 148
label_pswitch_29:
	this->fNoChainInRule = 0x1;
	goto label_goto_10;
	// 436    .line 153
label_pswitch_32:
	this->fixOpStack(0x4);
	cVar0 = this->fNodeStackPtr;
	this->fNodeStackPtr = ( cVar0 + -0x1);
	operandNode = this->fNodeStack[cVar0];
	//    .local v8, "operandNode":Landroid/icu/text/RBBINode;
	orNode = this->pushNewNode(0x9);
	//    .local v10, "orNode":Landroid/icu/text/RBBINode;
	orNode->fLeftChild = operandNode;
	operandNode->fParent = orNode;
	goto label_goto_10;
	// 490    .line 168
	// 491    .end local v8    # "operandNode":Landroid/icu/text/RBBINode;
	// 492    .end local v10    # "orNode":Landroid/icu/text/RBBINode;
label_pswitch_60:
	this->fixOpStack(0x4);
	cVar1 = this->fNodeStackPtr;
	this->fNodeStackPtr = ( cVar1 + -0x1);
	operandNode = this->fNodeStack[cVar1];
	//    .restart local v8    # "operandNode":Landroid/icu/text/RBBINode;
	catNode = this->pushNewNode(0x8);
	//    .local v4, "catNode":Landroid/icu/text/RBBINode;
	catNode->fLeftChild = operandNode;
	operandNode->fParent = catNode;
	goto label_goto_10;
	// 546    .line 183
	// 547    .end local v4    # "catNode":Landroid/icu/text/RBBINode;
	// 548    .end local v8    # "operandNode":Landroid/icu/text/RBBINode;
label_pswitch_8e:
	this->pushNewNode(0xf);
	goto label_goto_10;
	// 560    .line 187
label_pswitch_99:
	this->fixOpStack(0x2);
	goto label_goto_10;
	// 572    .line 203
label_pswitch_a4:
	//    .local v7, "n":Landroid/icu/text/RBBINode;
	this->fNodeStack[( this->fNodeStackPtr + -0x1)]->fFirstPos = this->fNextIndex;
	this->pushNewNode(0x7);
	goto label_goto_10;
	// 613    .line 217
	// 614    .local v7, "n":Landroid/icu/text/RBBINode;
label_pswitch_c9:
	this->fixOpStack(0x1);
	//    .local v17, "startExprNode":Landroid/icu/text/RBBINode;
	varRefNode = this->fNodeStack[( this->fNodeStackPtr + -0x1)];
	//    .local v20, "varRefNode":Landroid/icu/text/RBBINode;
	RHSExprNode = this->fNodeStack[this->fNodeStackPtr];
	//    .local v3, "RHSExprNode":Landroid/icu/text/RBBINode;
	RHSExprNode->fFirstPos = this->fNodeStack[( this->fNodeStackPtr + -0x2)]->fFirstPos;
	RHSExprNode->fLastPos = this->fScanIndex;
	RHSExprNode->fText = this->fRB->fRules->substring(RHSExprNode->fFirstPos, RHSExprNode->fLastPos);
	varRefNode->fLeftChild = RHSExprNode;
	RHSExprNode->fParent = varRefNode;
	this->fSymbolTable->addEntry(varRefNode->fText, varRefNode);
	this->fNodeStackPtr = ( this->fNodeStackPtr + -0x3);
	goto label_goto_10;
	// 777    .line 247
	// 778    .end local v3    # "RHSExprNode":Landroid/icu/text/RBBINode;
	// 779    .end local v17    # "startExprNode":Landroid/icu/text/RBBINode;
	// 780    .end local v20    # "varRefNode":Landroid/icu/text/RBBINode;
label_pswitch_15d:
	this->fixOpStack(0x1);
	if ( !(this->fRB->fDebugEnv) )  
		goto label_cond_193;
	if ( this->fRB->fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("rtree"))) < 0 ) 
		goto label_cond_193;
	this->printNodeStack(std::make_shared<java::lang::String>(std::make_shared<char[]>("end of rule")));
label_cond_193:
	if ( this->fNodeStackPtr != 0x1 )
		goto label_cond_2a7;
	cVar2 = 0x1;
label_goto_1a3:
	android::icu::impl::Assert::assrt(cVar2);
	thisRule = this->fNodeStack[this->fNodeStackPtr];
	//    .local v18, "thisRule":Landroid/icu/text/RBBINode;
	if ( !(this->fLookAheadRule) )  
		goto label_cond_204;
	endNode = this->pushNewNode(0x6);
	//    .local v6, "endNode":Landroid/icu/text/RBBINode;
	catNode = this->pushNewNode(0x8);
	//    .restart local v4    # "catNode":Landroid/icu/text/RBBINode;
	this->fNodeStackPtr = ( this->fNodeStackPtr + -0x2);
	catNode->fLeftChild = thisRule;
	catNode->fRightChild = endNode;
	this->fNodeStack[this->fNodeStackPtr] = catNode;
	endNode->fVal = this->fRuleNum;
	endNode->fLookAheadEnd = 0x1;
	thisRule = catNode;
	//    .end local v4    # "catNode":Landroid/icu/text/RBBINode;
	//    .end local v6    # "endNode":Landroid/icu/text/RBBINode;
label_cond_204:
	thisRule->fRuleRoot = 0x1;
	if ( !(this->fRB->fChainRules) )  
		goto label_cond_22c;
	if ( !(( this->fNoChainInRule ^ 0x1)) )  
		goto label_cond_22c;
	thisRule->fChainIn = 0x1;
label_cond_22c:
	if ( !(this->fReverseRule) )  
		goto label_cond_2ab;
	destRules = 0x1;
	//    .local v5, "destRules":I
label_goto_235:
	if ( !(this->fRB->fTreeRoots[destRules]) )  
		goto label_cond_2b6;
	thisRule = this->fNodeStack[this->fNodeStackPtr];
	prevRules = this->fRB->fTreeRoots[destRules];
	//    .local v12, "prevRules":Landroid/icu/text/RBBINode;
	orNode = this->pushNewNode(0x9);
	//    .restart local v10    # "orNode":Landroid/icu/text/RBBINode;
	orNode->fLeftChild = prevRules;
	prevRules->fParent = orNode;
	orNode->fRightChild = thisRule;
	thisRule->fParent = orNode;
	this->fRB->fTreeRoots[destRules] = orNode;
	//    .end local v10    # "orNode":Landroid/icu/text/RBBINode;
	//    .end local v12    # "prevRules":Landroid/icu/text/RBBINode;
label_goto_285:
	this->fReverseRule = 0x0;
	this->fLookAheadRule = 0x0;
	this->fNoChainInRule = 0x0;
	this->fNodeStackPtr = 0x0;
	goto label_goto_10;
	// 1157    .line 253
	// 1158    .end local v5    # "destRules":I
	// 1159    .end local v18    # "thisRule":Landroid/icu/text/RBBINode;
label_cond_2a7:
	cVar2 = 0x0;
	goto label_goto_1a3;
	// 1165    .line 295
	// 1166    .restart local v18    # "thisRule":Landroid/icu/text/RBBINode;
label_cond_2ab:
	destRules = this->fRB->fDefaultTree;
	//    .restart local v5    # "destRules":I
	goto label_goto_235;
	// 1181    .line 314
label_cond_2b6:
	this->fRB->fTreeRoots[destRules] = this->fNodeStack[this->fNodeStackPtr];
	goto label_goto_285;
	// 1213    .line 324
	// 1214    .end local v5    # "destRules":I
	// 1215    .end local v18    # "thisRule":Landroid/icu/text/RBBINode;
label_pswitch_2d3:
	this->error(0x10204);
	returnVal = 0x0;
	goto label_goto_10;
	// 1231    .line 329
label_pswitch_2e0:
	this->error(0x10204);
	goto label_goto_10;
	// 1243    .line 339
label_pswitch_2ec:
	cVar4 = this->fNodeStackPtr;
	this->fNodeStackPtr = ( cVar4 + -0x1);
	operandNode = this->fNodeStack[cVar4];
	//    .restart local v8    # "operandNode":Landroid/icu/text/RBBINode;
	plusNode = this->pushNewNode(0xb);
	//    .local v11, "plusNode":Landroid/icu/text/RBBINode;
	plusNode->fLeftChild = operandNode;
	operandNode->fParent = plusNode;
	goto label_goto_10;
	// 1288    .line 347
	// 1289    .end local v8    # "operandNode":Landroid/icu/text/RBBINode;
	// 1290    .end local v11    # "plusNode":Landroid/icu/text/RBBINode;
label_pswitch_312:
	cVar5 = this->fNodeStackPtr;
	this->fNodeStackPtr = ( cVar5 + -0x1);
	operandNode = this->fNodeStack[cVar5];
	//    .restart local v8    # "operandNode":Landroid/icu/text/RBBINode;
	qNode = this->pushNewNode(0xc);
	//    .local v13, "qNode":Landroid/icu/text/RBBINode;
	qNode->fLeftChild = operandNode;
	operandNode->fParent = qNode;
	goto label_goto_10;
	// 1335    .line 355
	// 1336    .end local v8    # "operandNode":Landroid/icu/text/RBBINode;
	// 1337    .end local v13    # "qNode":Landroid/icu/text/RBBINode;
label_pswitch_338:
	cVar6 = this->fNodeStackPtr;
	this->fNodeStackPtr = ( cVar6 + -0x1);
	operandNode = this->fNodeStack[cVar6];
	//    .restart local v8    # "operandNode":Landroid/icu/text/RBBINode;
	starNode = this->pushNewNode(0xa);
	//    .local v16, "starNode":Landroid/icu/text/RBBINode;
	starNode->fLeftChild = operandNode;
	operandNode->fParent = starNode;
	goto label_goto_10;
	// 1386    .line 370
	// 1387    .end local v8    # "operandNode":Landroid/icu/text/RBBINode;
	// 1388    .end local v16    # "starNode":Landroid/icu/text/RBBINode;
label_pswitch_362:
	n = this->pushNewNode(0x0);
	//    .local v7, "n":Landroid/icu/text/RBBINode;
	//    .local v15, "s":Ljava/lang/String;
	this->findSetFor(java::lang::String::valueOf((char)(this->fC->fChar)), n, 0x0);
	n->fFirstPos = this->fScanIndex;
	n->fLastPos = this->fNextIndex;
	n->fText = this->fRB->fRules->substring(n->fFirstPos, n->fLastPos);
	goto label_goto_10;
	// 1487    .line 382
	// 1488    .end local v15    # "s":Ljava/lang/String;
	// 1489    .local v7, "n":Landroid/icu/text/RBBINode;
label_pswitch_3bc:
	n = this->pushNewNode(0x0);
	//    .local v7, "n":Landroid/icu/text/RBBINode;
	this->findSetFor(android::icu::text::RBBIRuleScanner::kAny, n, 0x0);
	n->fFirstPos = this->fScanIndex;
	n->fLastPos = this->fNextIndex;
	n->fText = this->fRB->fRules->substring(n->fFirstPos, n->fLastPos);
	goto label_goto_10;
	// 1568    .line 393
	// 1569    .local v7, "n":Landroid/icu/text/RBBINode;
label_pswitch_405:
	n = this->pushNewNode(0x4);
	//    .local v7, "n":Landroid/icu/text/RBBINode;
	n->fVal = this->fRuleNum;
	n->fFirstPos = this->fScanIndex;
	n->fLastPos = this->fNextIndex;
	n->fText = this->fRB->fRules->substring(n->fFirstPos, n->fLastPos);
	this->fLookAheadRule = 0x1;
	goto label_goto_10;
	// 1655    .line 404
	// 1656    .local v7, "n":Landroid/icu/text/RBBINode;
label_pswitch_453:
	n = this->pushNewNode(0x5);
	//    .local v7, "n":Landroid/icu/text/RBBINode;
	n->fVal = 0x0;
	n->fFirstPos = this->fScanIndex;
	n->fLastPos = this->fNextIndex;
	goto label_goto_10;
	// 1700    .line 413
	// 1701    .local v7, "n":Landroid/icu/text/RBBINode;
label_pswitch_479:
	n = this->fNodeStack[this->fNodeStackPtr];
	//    .local v7, "n":Landroid/icu/text/RBBINode;
	//    .local v19, "v":I
	n->fVal = (( n->fVal * 0xa) + android::icu::lang::UCharacter::digit((char)(this->fC->fChar), 0xa));
	goto label_goto_10;
	// 1759    .line 420
	// 1760    .end local v19    # "v":I
	// 1761    .local v7, "n":Landroid/icu/text/RBBINode;
label_pswitch_4ac:
	n = this->fNodeStack[this->fNodeStackPtr];
	//    .local v7, "n":Landroid/icu/text/RBBINode;
	n->fLastPos = this->fNextIndex;
	n->fText = this->fRB->fRules->substring(n->fFirstPos, n->fLastPos);
	goto label_goto_10;
	// 1820    .line 426
	// 1821    .local v7, "n":Landroid/icu/text/RBBINode;
label_pswitch_4e2:
	this->error(0x1020e);
	returnVal = 0x0;
	goto label_goto_10;
	// 1837    .line 432
label_pswitch_4ef:
	this->fOptionStart = this->fScanIndex;
	goto label_goto_10;
	// 1853    .line 436
label_pswitch_4fd:
	opt = this->fRB->fRules->substring(this->fOptionStart, this->fScanIndex);
	//    .local v9, "opt":Ljava/lang/String;
	if ( !(opt->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("chain")))) )  
		goto label_cond_534;
	this->fRB->fChainRules = 0x1;
	goto label_goto_10;
	// 1912    .line 439
label_cond_534:
	if ( !(opt->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("LBCMNoChain")))) )  
		goto label_cond_54f;
	this->fRB->fLBCMNoChain = 0x1;
	goto label_goto_10;
	// 1941    .line 441
label_cond_54f:
	if ( !(opt->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("forward")))) )  
		goto label_cond_56a;
	this->fRB->fDefaultTree = 0x0;
	goto label_goto_10;
	// 1970    .line 443
label_cond_56a:
	if ( !(opt->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("reverse")))) )  
		goto label_cond_585;
	this->fRB->fDefaultTree = 0x1;
	goto label_goto_10;
	// 1999    .line 445
label_cond_585:
	if ( !(opt->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("safe_forward")))) )  
		goto label_cond_5a0;
	this->fRB->fDefaultTree = 0x2;
	goto label_goto_10;
	// 2028    .line 447
label_cond_5a0:
	if ( !(opt->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("safe_reverse")))) )  
		goto label_cond_5bb;
	this->fRB->fDefaultTree = 0x3;
	goto label_goto_10;
	// 2057    .line 449
label_cond_5bb:
	if ( !(opt->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("lookAheadHardBreak")))) )  
		goto label_cond_5d6;
	this->fRB->fLookAheadHardBreak = 0x1;
	goto label_goto_10;
	// 2086    .line 452
label_cond_5d6:
	this->error(0x1020d);
	goto label_goto_10;
	// 2098    .line 458
	// 2099    .end local v9    # "opt":Ljava/lang/String;
label_pswitch_5e2:
	this->fReverseRule = 0x1;
	goto label_goto_10;
	// 2111    .line 462
label_pswitch_5ec:
	//    .local v7, "n":Landroid/icu/text/RBBINode;
	this->pushNewNode(0x2)->fFirstPos = this->fScanIndex;
	goto label_goto_10;
	// 2137    .line 467
	// 2138    .local v7, "n":Landroid/icu/text/RBBINode;
label_pswitch_602:
	n = this->fNodeStack[this->fNodeStackPtr];
	//    .local v7, "n":Landroid/icu/text/RBBINode;
	if ( !(n) )  
		goto label_cond_61e;
	if ( n->fType == 0x2 )
		goto label_cond_62a;
label_cond_61e:
	this->error(0x10201);
	goto label_goto_10;
	// 2182    .line 472
label_cond_62a:
	n->fLastPos = this->fScanIndex;
	n->fText = this->fRB->fRules->substring(( n->fFirstPos + 0x1), n->fLastPos);
	n->fLeftChild = this->fSymbolTable->lookupNode(n->fText);
	goto label_goto_10;
	// 2246    .line 485
	// 2247    .local v7, "n":Landroid/icu/text/RBBINode;
label_pswitch_666:
	//    .local v7, "n":Landroid/icu/text/RBBINode;
	if ( this->fNodeStack[this->fNodeStackPtr]->fLeftChild )     
		goto label_cond_10;
	this->error(0x1020a);
	returnVal = 0x0;
	goto label_goto_10;
	// 2285    .line 496
	// 2286    .local v7, "n":Landroid/icu/text/RBBINode;
label_pswitch_687:
	this->error(0x10206);
	returnVal = 0x0;
	goto label_goto_10;
	// 2302    .line 501
label_pswitch_694:
	returnVal = 0x0;
	goto label_goto_10;
	// 2309    .line 505
label_pswitch_697:
	this->scanSet();
	goto label_goto_10;
	// 2315    .line 139
	// 2316    :pswitch_data_69c
	// 2317    .packed-switch 0x1
	// 2318        :pswitch_666
	// 2319        :pswitch_3bc
	// 2320        :pswitch_c9
	// 2321        :pswitch_15d
	// 2322        :pswitch_602
	// 2323        :pswitch_694
	// 2324        :pswitch_60
	// 2325        :pswitch_10
	// 2326        :pswitch_32
	// 2327        :pswitch_99
	// 2328        :pswitch_11
	// 2329        :pswitch_8e
	// 2330        :pswitch_10
	// 2331        :pswitch_29
	// 2332        :pswitch_4fd
	// 2333        :pswitch_4ef
	// 2334        :pswitch_5e2
	// 2335        :pswitch_362
	// 2336        :pswitch_2d3
	// 2337        :pswitch_687
	// 2338        :pswitch_697
	// 2339        :pswitch_405
	// 2340        :pswitch_a4
	// 2341        :pswitch_453
	// 2342        :pswitch_5ec
	// 2343        :pswitch_479
	// 2344        :pswitch_4e2
	// 2345        :pswitch_4ac
	// 2346        :pswitch_2ec
	// 2347        :pswitch_312
	// 2348        :pswitch_338
	// 2349        :pswitch_2e0
	// 2350    .end packed-switch

}
// .method error(I)V
void android::icu::text::RBBIRuleScanner::error(int e)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> ex;
	
	//    .param p1, "e"    # I
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "s":Ljava/lang/String;
	ex = std::make_shared<java::lang::IllegalArgumentException>(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Error ")))->append(e)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" at line ")))->append(this->fLineNum)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" column ")))->append(this->fCharNum)->toString());
	//    .local v0, "ex":Ljava/lang/IllegalArgumentException;
	// throw
	throw ex;

}
// .method findSetFor(Ljava/lang/String;Landroid/icu/text/RBBINode;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::RBBIRuleScanner::findSetFor(std::shared_ptr<java::lang::String> s,std::shared_ptr<android::icu::text::RBBINode> node,std::shared_ptr<android::icu::text::UnicodeSet> setToAdopt)
{
	
	bool cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::RBBIRuleScanner_S_RBBISetTableEl> el;
	std::shared_ptr<android::icu::text::UnicodeSet> setToAdopt;
	std::shared_ptr<android::icu::text::RBBINode> usetNode;
	int c;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "node"    # Landroid/icu/text/RBBINode;
	//    .param p3, "setToAdopt"    # Landroid/icu/text/UnicodeSet;
	cVar0 = 0x1;
	cVar1 = 0x0;
	el = this->fSetTable->get(s);
	el->checkCast("android::icu::text::RBBIRuleScanner_S_RBBISetTableEl");
	//    .local v1, "el":Landroid/icu/text/RBBIRuleScanner$RBBISetTableEl;
	if ( !(el) )  
		goto label_cond_1c;
	node->fLeftChild = el->val;
	if ( node->fLeftChild->fType != cVar0 )
		goto label_cond_1a;
label_goto_16:
	android::icu::impl::Assert::assrt(cVar0);
	return;
label_cond_1a:
	cVar0 = cVar1;
	goto label_goto_16;
	// 2462    .line 641
label_cond_1c:
	if ( setToAdopt )     
		goto label_cond_2e;
	if ( !(s->equals(android::icu::text::RBBIRuleScanner::kAny)) )  
		goto label_cond_53;
	//    .end local p3    # "setToAdopt":Landroid/icu/text/UnicodeSet;
	setToAdopt = std::make_shared<android::icu::text::UnicodeSet>(cVar1, 0x10ffff);
	//    .restart local p3    # "setToAdopt":Landroid/icu/text/UnicodeSet;
label_cond_2e:
label_goto_2e:
	usetNode = std::make_shared<android::icu::text::RBBINode>(cVar0);
	//    .local v2, "usetNode":Landroid/icu/text/RBBINode;
	usetNode->fInputSet = setToAdopt;
	usetNode->fParent = node;
	node->fLeftChild = usetNode;
	usetNode->fText = s;
	this->fRB->fUSetNodes->add(usetNode);
	//    .end local v1    # "el":Landroid/icu/text/RBBIRuleScanner$RBBISetTableEl;
	el = std::make_shared<android::icu::text::RBBIRuleScanner_S_RBBISetTableEl>();
	//    .restart local v1    # "el":Landroid/icu/text/RBBIRuleScanner$RBBISetTableEl;
	el->key = s;
	el->val = usetNode;
	this->fSetTable->put(el->key, el);
	return;
	// 2534    .line 646
	// 2535    .end local v2    # "usetNode":Landroid/icu/text/RBBINode;
label_cond_53:
	c = android::icu::text::UTF16::charAt(s, cVar1);
	//    .local v0, "c":I
	//    .end local p3    # "setToAdopt":Landroid/icu/text/UnicodeSet;
	setToAdopt = std::make_shared<android::icu::text::UnicodeSet>(c, c);
	//    .restart local p3    # "setToAdopt":Landroid/icu/text/UnicodeSet;
	goto label_goto_2e;

}
// .method fixOpStack(I)V
void android::icu::text::RBBIRuleScanner::fixOpStack(int p)
{
	
	int cVar0;
	int n;
	
	//    .param p1, "p"    # I
	cVar0 = 0x2;
label_goto_1:
	n = this->fNodeStack[( this->fNodeStackPtr + -0x1)];
	//    .local v0, "n":Landroid/icu/text/RBBINode;
	if ( n->fPrecedence )     
		goto label_cond_1c;
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("RBBIRuleScanner.fixOpStack, bad operator node")));
	this->error(0x10201);
	return;
	// 2590    .line 557
label_cond_1c:
	if ( n->fPrecedence <  p )
		goto label_cond_24;
	if ( n->fPrecedence >  cVar0 )
		goto label_cond_45;
label_cond_24:
	if ( p >  cVar0 )
		goto label_cond_44;
	if ( n->fPrecedence == p )
		goto label_cond_30;
	this->error(0x10208);
label_cond_30:
	this->fNodeStack[( this->fNodeStackPtr + -0x1)] = this->fNodeStack[this->fNodeStackPtr];
	this->fNodeStackPtr = ( this->fNodeStackPtr + -0x1);
label_cond_44:
	return;
	// 2641    .line 565
label_cond_45:
	n->fRightChild = this->fNodeStack[this->fNodeStackPtr];
	this->fNodeStack[this->fNodeStackPtr]->fParent = n;
	this->fNodeStackPtr = ( this->fNodeStackPtr + -0x1);
	goto label_goto_1;

}
// .method nextChar(Landroid/icu/text/RBBIRuleScanner$RBBIRuleChar;)V
void android::icu::text::RBBIRuleScanner::nextChar(std::shared_ptr<android::icu::text::RBBIRuleScanner_S_RBBIRuleChar> c)
{
	
	int cVar0;
	int cVar1;
	bool cVar2;
	bool cVar3;
	std::shared<std::vector<int[]>> unescapeIndex;
	
	//    .param p1, "c"    # Landroid/icu/text/RBBIRuleScanner$RBBIRuleChar;
	cVar0 = 0x27;
	cVar1 = -0x1;
	cVar2 = 0x1;
	cVar3 = 0x0;
	this->fScanIndex = this->fNextIndex;
	c->fChar = this->nextCharLL();
	c->fEscaped = cVar3;
	if ( c->fChar != cVar0 )
		goto label_cond_29;
	if ( android::icu::text::UTF16::charAt(this->fRB->fRules, this->fNextIndex) != cVar0 )
		goto label_cond_30;
	c->fChar = this->nextCharLL();
	c->fEscaped = cVar2;
label_cond_29:
	if ( !(this->fQuoteMode) )  
		goto label_cond_46;
	c->fEscaped = cVar2;
label_cond_2f:
label_goto_2f:
	return;
	// 2740    .line 778
label_cond_30:
	this->fQuoteMode = ( this->fQuoteMode ^ 0x1);
	if ( !(this->fQuoteMode) )  
		goto label_cond_41;
	c->fChar = 0x28;
label_goto_3e:
	c->fEscaped = cVar3;
	return;
	// 2765    .line 782
label_cond_41:
	c->fChar = 0x29;
	goto label_goto_3e;
	// 2773    .line 794
label_cond_46:
	if ( c->fChar != 0x23 )
		goto label_cond_5c;
label_cond_4c:
	c->fChar = this->nextCharLL();
	if ( c->fChar == cVar1 )
		goto label_cond_5c;
	if ( c->fChar != 0xd )
		goto label_cond_61;
label_cond_5c:
label_goto_5c:
	if ( c->fChar != cVar1 )
		goto label_cond_74;
	return;
	// 2811    .line 804
label_cond_61:
	if ( c->fChar == 0xa )
		goto label_cond_5c;
	if ( c->fChar == 0x85 )
		goto label_cond_5c;
	if ( c->fChar != 0x2028 )
		goto label_cond_4c;
	goto label_goto_5c;
	// 2835    .line 820
label_cond_74:
	if ( c->fChar != 0x5c )
		goto label_cond_2f;
	c->fEscaped = cVar2;
	unescapeIndex = std::make_shared<std::vector<int[]>>(cVar2);
	//    .local v0, "unescapeIndex":[I
	unescapeIndex[cVar3] = this->fNextIndex;
	c->fChar = android::icu::impl::Utility::unescapeAt(this->fRB->fRules, unescapeIndex);
	if ( unescapeIndex[cVar3] != this->fNextIndex )
		goto label_cond_98;
	this->error(0x10202);
label_cond_98:
	this->fCharNum = (this->fCharNum +  (unescapeIndex[cVar3] -  this->fNextIndex));
	this->fNextIndex = unescapeIndex[cVar3];
	goto label_goto_2f;

}
// .method nextCharLL()I
int android::icu::text::RBBIRuleScanner::nextCharLL()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int ch;
	
	cVar0 = 0xd;
	cVar1 = 0xa;
	cVar2 = 0x0;
	if ( this->fNextIndex <  this->fRB->fRules->length() )
		goto label_cond_13;
	return -0x1;
	// 2928    .line 724
label_cond_13:
	ch = android::icu::text::UTF16::charAt(this->fRB->fRules, this->fNextIndex);
	//    .local v0, "ch":I
	this->fNextIndex = android::icu::text::UTF16::moveCodePointOffset(this->fRB->fRules, this->fNextIndex, 0x1);
	if ( ch == cVar0 )
		goto label_cond_30;
	if ( ch != 0x85 )
		goto label_cond_47;
label_cond_30:
	this->fLineNum = ( this->fLineNum + 0x1);
	this->fCharNum = cVar2;
	if ( !(this->fQuoteMode) )  
		goto label_cond_44;
	this->error(0x10209);
	this->fQuoteMode = cVar2;
label_cond_44:
label_goto_44:
	this->fLastChar = ch;
	return ch;
	// 2996    .line 729
label_cond_47:
	if ( ch == 0x2028 )
		goto label_cond_30;
	if ( ch != cVar1 )
		goto label_cond_51;
	if ( this->fLastChar != cVar0 )
		goto label_cond_30;
label_cond_51:
	if ( ch == cVar1 )
		goto label_cond_44;
	this->fCharNum = ( this->fCharNum + 0x1);
	goto label_goto_44;

}
// .method parse()V
void android::icu::text::RBBIRuleScanner::parse()
{
	
	int cVar0;
	int cVar1;
	bool cVar2;
	int cVar3;
	int state;
	std::shared_ptr<android::icu::text::RBBINode> operand;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	int tableRow;
	short tableEl;
	short state;
	
	cVar0 = 0x2;
	cVar1 = -0x1;
	cVar2 = 0x1;
	cVar3 = 0x0;
	state = 0x1;
	//    .local v1, "state":I
	this->nextChar(this->fC);
label_cond_b:
label_goto_b:
	if ( state )     
		goto label_cond_cd;
label_cond_d:
	if ( this->fRB->fTreeRoots[cVar3] )     
		goto label_cond_1b;
	this->error(0x10204);
label_cond_1b:
	if ( this->fRB->fTreeRoots[cVar2] )     
		goto label_cond_4e;
	this->fRB->fTreeRoots[cVar2] = this->pushNewNode(0xa);
	operand = this->pushNewNode(cVar3);
	//    .local v0, "operand":Landroid/icu/text/RBBINode;
	this->findSetFor(android::icu::text::RBBIRuleScanner::kAny, operand, 0x0);
	this->fRB->fTreeRoots[cVar2]->fLeftChild = operand;
	operand->fParent = this->fRB->fTreeRoots[cVar2];
	this->fNodeStackPtr = ( this->fNodeStackPtr + -0x2);
	//    .end local v0    # "operand":Landroid/icu/text/RBBINode;
label_cond_4e:
	if ( !(this->fRB->fDebugEnv) )  
		goto label_cond_66;
	if ( this->fRB->fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("symbols"))) < 0 ) 
		goto label_cond_66;
	this->fSymbolTable->rbbiSymtablePrint();
label_cond_66:
	if ( !(this->fRB->fDebugEnv) )  
		goto label_cond_cc;
	if ( this->fRB->fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("ptree"))) < 0 ) 
		goto label_cond_cc;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Completed Forward Rules Parse Tree...")));
	this->fRB->fTreeRoots[cVar3]->printTree(cVar2);
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nCompleted Reverse Rules Parse Tree...")));
	this->fRB->fTreeRoots[cVar2]->printTree(cVar2);
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nCompleted Safe Point Forward Rules Parse Tree...")));
	if ( this->fRB->fTreeRoots[cVar0] )     
		goto label_cond_241;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("  -- null -- ")));
label_goto_b3:
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nCompleted Safe Point Reverse Rules Parse Tree...")));
	if ( this->fRB->fTreeRoots[0x3] )     
		goto label_cond_24c;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("  -- null -- ")));
label_cond_cc:
label_goto_cc:
	return;
	// 3257    .line 871
label_cond_cd:
	//    .local v2, "tableEl":Landroid/icu/text/RBBIRuleParseTable$RBBIRuleTableElement;
	if ( !(this->fRB->fDebugEnv) )  
		goto label_cond_129;
	if ( this->fRB->fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("scan"))) < 0 ) 
		goto label_cond_129;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("char, line, col = (\'")))->append((char)(this->fC->fChar))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\', ")))->append(this->fLineNum)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(this->fCharNum)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("    state = ")))->append(android::icu::text::RBBIRuleParseTable::gRuleParseStateTable[state]->fStateName)->toString());
label_cond_129:
	tableRow = state;
	//    .local v3, "tableRow":I
label_goto_12a:
	tableEl = android::icu::text::RBBIRuleParseTable::gRuleParseStateTable[tableRow];
	if ( !(this->fRB->fDebugEnv) )  
		goto label_cond_149;
	if ( this->fRB->fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("scan"))) < 0 ) 
		goto label_cond_149;
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")));
label_cond_149:
	if ( tableEl->fCharClass >= 0x7f )
		goto label_cond_1b9;
	if ( this->fC->fEscaped )     
		goto label_cond_1b9;
	if ( tableEl->fCharClass != this->fC->fChar )
		goto label_cond_1b9;
label_cond_15d:
	if ( !(this->fRB->fDebugEnv) )  
		goto label_cond_178;
	if ( this->fRB->fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("scan"))) < 0 ) 
		goto label_cond_178;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
label_cond_178:
	if ( !(this->doParseActions(tableEl->fAction)) )  
		goto label_cond_d;
	if ( !(tableEl->fPushState) )  
		goto label_cond_1a6;
	this->fStackPtr = ( this->fStackPtr + 0x1);
	if ( this->fStackPtr <  0x64 )
		goto label_cond_19e;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("RBBIRuleScanner.parse() - state stack overflow.")));
	this->error(0x10201);
label_cond_19e:
	this->fStack[this->fStackPtr] = tableEl->fPushState;
label_cond_1a6:
	if ( !(tableEl->fNextChar) )  
		goto label_cond_1af;
	this->nextChar(this->fC);
label_cond_1af:
	if ( tableEl->fNextState == 0xff )
		goto label_cond_221;
	state = tableEl->fNextState;
	goto label_goto_b;
	// 3522    .line 890
label_cond_1b9:
	if ( tableEl->fCharClass == 0xff )
		goto label_cond_15d;
	if ( tableEl->fCharClass != 0xfe )
		goto label_cond_1cb;
	if ( this->fC->fEscaped )     
		goto label_cond_15d;
label_cond_1cb:
	if ( tableEl->fCharClass != 0xfd )
		goto label_cond_1e7;
	if ( !(this->fC->fEscaped) )  
		goto label_cond_1e7;
	if ( this->fC->fChar == 0x50 )
		goto label_cond_15d;
	if ( this->fC->fChar == 0x70 )
		goto label_cond_15d;
label_cond_1e7:
	if ( tableEl->fCharClass != 0xfc )
		goto label_cond_1f3;
	if ( this->fC->fChar == cVar1 )
		goto label_cond_15d;
label_cond_1f3:
	if ( tableEl->fCharClass <  0x80 )
		goto label_cond_21d;
	if ( tableEl->fCharClass >= 0xf0 )
		goto label_cond_21d;
	if ( this->fC->fEscaped )     
		goto label_cond_21d;
	if ( this->fC->fChar == cVar1 )
		goto label_cond_21d;
	//    .local v4, "uniset":Landroid/icu/text/UnicodeSet;
	if ( this->fRuleSets[( tableEl->fCharClass + -0x80)]->contains(this->fC->fChar) )     
		goto label_cond_15d;
	//    .end local v4    # "uniset":Landroid/icu/text/UnicodeSet;
label_cond_21d:
	tableRow = ( tableRow + 0x1);
	goto label_goto_12a;
	// 3644    .line 952
label_cond_221:
	state = this->fStack[this->fStackPtr];
	this->fStackPtr = ( this->fStackPtr + -0x1);
	if ( this->fStackPtr >= 0 )
		goto label_cond_b;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("RBBIRuleScanner.parse() - state stack underflow.")));
	this->error(0x10201);
	goto label_goto_b;
	// 3678    .line 997
	// 3679    .end local v2    # "tableEl":Landroid/icu/text/RBBIRuleParseTable$RBBIRuleTableElement;
	// 3680    .end local v3    # "tableRow":I
label_cond_241:
	this->fRB->fTreeRoots[cVar0]->printTree(cVar2);
	goto label_goto_b3;
	// 3692    .line 1003
label_cond_24c:
	this->fRB->fTreeRoots[0x3]->printTree(cVar2);
	goto label_goto_cc;

}
// .method printNodeStack(Ljava/lang/String;)V
void android::icu::text::RBBIRuleScanner::printNodeStack(std::shared_ptr<java::lang::String> title)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	int i;
	
	//    .param p1, "title"    # Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar0->append(title)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".  Dumping node stack...\n")))->toString());
	i = this->fNodeStackPtr;
	//    .local v0, "i":I
label_goto_1b:
	if ( i <= 0 )
		goto label_cond_28;
	this->fNodeStack[i]->printTree(0x1);
	i = ( i + -0x1);
	goto label_goto_1b;
	// 3756    .line 1020
label_cond_28:
	return;

}
// .method pushNewNode(I)Landroid/icu/text/RBBINode;
std::shared_ptr<android::icu::text::RBBINode> android::icu::text::RBBIRuleScanner::pushNewNode(int nodeType)
{
	
	std::shared_ptr<android::icu::text::RBBINode> cVar0;
	
	//    .param p1, "nodeType"    # I
	this->fNodeStackPtr = ( this->fNodeStackPtr + 0x1);
	if ( this->fNodeStackPtr <  0x64 )
		goto label_cond_1a;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("RBBIRuleScanner.pushNewNode - stack overflow.")));
	this->error(0x10201);
label_cond_1a:
	cVar0 = std::make_shared<android::icu::text::RBBINode>(nodeType);
	this->fNodeStack[this->fNodeStackPtr] = cVar0;
	return this->fNodeStack[this->fNodeStackPtr];

}
// .method scanSet()V
void android::icu::text::RBBIRuleScanner::scanSet()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> uset;
	std::shared_ptr<java::text::ParsePosition> pos;
	std::shared_ptr<android::icu::text::RBBINode> n;
	std::vector<std::any> tryCatchExcetionList;
	
	uset = 0x0;
	//    .local v5, "uset":Landroid/icu/text/UnicodeSet;
	pos = std::make_shared<java::text::ParsePosition>(this->fScanIndex);
	//    .local v3, "pos":Ljava/text/ParsePosition;
	//    .local v4, "startPos":I
	try {
	//label_try_start_a:
	uset = std::make_shared<android::icu::text::UnicodeSet>(this->fRB->fRules, pos, this->fSymbolTable, 0x1);
	//label_try_end_16:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4a;
	}
	//    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_16} :catch_4a
	//    .local v6, "uset":Landroid/icu/text/UnicodeSet;
	uset = uset;
	//    .end local v5    # "uset":Landroid/icu/text/UnicodeSet;
	//    .end local v6    # "uset":Landroid/icu/text/UnicodeSet;
label_goto_17:
	if ( !(uset->isEmpty()) )  
		goto label_cond_23;
	this->error(0x1020c);
label_cond_23:
	//    .local v1, "i":I
label_goto_27:
	if ( this->fNextIndex <  pos->getIndex() )
		goto label_cond_52;
	n = this->pushNewNode(0x0);
	//    .local v2, "n":Landroid/icu/text/RBBINode;
	n->fFirstPos = this->fScanIndex;
	n->fLastPos = this->fNextIndex;
	n->fText = this->fRB->fRules->substring(n->fFirstPos, n->fLastPos);
	this->findSetFor(n->fText, n, uset);
	return;
	// 3920    .line 1062
	// 3921    .end local v1    # "i":I
	// 3922    .end local v2    # "n":Landroid/icu/text/RBBINode;
	// 3923    .restart local v5    # "uset":Landroid/icu/text/UnicodeSet;
label_catch_4a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	this->error(0x1020f);
	goto label_goto_17;
	// 3935    .line 1086
	// 3936    .end local v0    # "e":Ljava/lang/Exception;
	// 3937    .end local v5    # "uset":Landroid/icu/text/UnicodeSet;
	// 3938    .restart local v1    # "i":I
label_cond_52:
	this->nextCharLL();
	goto label_goto_27;

}


