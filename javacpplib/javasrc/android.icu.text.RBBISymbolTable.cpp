// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RBBISymbolTable.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.RBBINode.h"
#include "android.icu.text.RBBIRuleScanner.h"
#include "android.icu.text.RBBISymbolTable_S_RBBISymbolTableEntry.h"
#include "android.icu.text.RBBISymbolTable.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.io.PrintStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.text.ParsePosition.h"
#include "java.util.Collection.h"
#include "java.util.HashMap.h"

// .method constructor <init>(Landroid/icu/text/RBBIRuleScanner;)V
android::icu::text::RBBISymbolTable::RBBISymbolTable(std::shared_ptr<android::icu::text::RBBIRuleScanner> rs)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	
	//    .param p1, "rs"    # Landroid/icu/text/RBBIRuleScanner;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fRuleScanner = rs;
	cVar0 = std::make_shared<java::util::HashMap>();
	this->fHashTable = cVar0;
	this->ffffString = std::make_shared<java::lang::String>(std::make_shared<char[]>("\uffff"));
	return;

}
// .method addEntry(Ljava/lang/String;Landroid/icu/text/RBBINode;)V
void android::icu::text::RBBISymbolTable::addEntry(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::text::RBBINode> val)
{
	
	std::shared_ptr<android::icu::text::RBBISymbolTable_S_RBBISymbolTableEntry> e;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "val"    # Landroid/icu/text/RBBINode;
	e = this->fHashTable->get(key);
	e->checkCast("android::icu::text::RBBISymbolTable_S_RBBISymbolTableEntry");
	//    .local v0, "e":Landroid/icu/text/RBBISymbolTable$RBBISymbolTableEntry;
	if ( !(e) )  
		goto label_cond_13;
	this->fRuleScanner->error(0x10207);
	return;
	// 096    .line 165
label_cond_13:
	//    .end local v0    # "e":Landroid/icu/text/RBBISymbolTable$RBBISymbolTableEntry;
	e = std::make_shared<android::icu::text::RBBISymbolTable_S_RBBISymbolTableEntry>();
	//    .restart local v0    # "e":Landroid/icu/text/RBBISymbolTable$RBBISymbolTableEntry;
	e->key = key;
	e->val = val;
	this->fHashTable->put(e->key, e);
	return;

}
// .method public lookup(Ljava/lang/String;)[C
char android::icu::text::RBBISymbolTable::lookup(std::shared_ptr<java::lang::String> s)
{
	
	std::shared_ptr<char[]> cVar0;
	std::shared_ptr<android::icu::text::RBBISymbolTable_S_RBBISymbolTableEntry> el;
	std::shared_ptr<android::icu::text::RBBINode> varRefNode;
	std::shared_ptr<android::icu::text::RBBINode> exprNode;
	
	//    .param p1, "s"    # Ljava/lang/String;
	cVar0 = 0x0;
	el = this->fHashTable->get(s);
	el->checkCast("android::icu::text::RBBISymbolTable_S_RBBISymbolTableEntry");
	//    .local v0, "el":Landroid/icu/text/RBBISymbolTable$RBBISymbolTableEntry;
	if ( el )     
		goto label_cond_c;
	return cVar0;
	// 144    .line 63
label_cond_c:
	varRefNode = el->val;
	//    .local v4, "varRefNode":Landroid/icu/text/RBBINode;
label_goto_e:
	if ( varRefNode->fLeftChild->fType != 0x2 )
		goto label_cond_18;
	varRefNode = varRefNode->fLeftChild;
	goto label_goto_e;
	// 164    .line 68
label_cond_18:
	exprNode = varRefNode->fLeftChild;
	//    .local v1, "exprNode":Landroid/icu/text/RBBINode;
	if ( exprNode->fType )     
		goto label_cond_2b;
	//    .local v3, "usetNode":Landroid/icu/text/RBBINode;
	this->fCachedSetLookup = exprNode->fLeftChild->fInputSet;
	//    .end local v3    # "usetNode":Landroid/icu/text/RBBINode;
	//    .local v2, "retString":Ljava/lang/String;
label_goto_26:
	return retString->toCharArray();
	// 196    .line 81
	// 197    .end local v2    # "retString":Ljava/lang/String;
label_cond_2b:
	this->fRuleScanner->error(0x1020f);
	//    .restart local v2    # "retString":Ljava/lang/String;
	this->fCachedSetLookup = cVar0;
	goto label_goto_26;

}
// .method public lookupMatcher(I)Landroid/icu/text/UnicodeMatcher;
std::shared_ptr<android::icu::text::UnicodeMatcher> android::icu::text::RBBISymbolTable::lookupMatcher(int ch)
{
	
	//    .param p1, "ch"    # I
	//    .local v0, "retVal":Landroid/icu/text/UnicodeSet;
	if ( ch != 0xffff )
		goto label_cond_b;
	//    .local v0, "retVal":Landroid/icu/text/UnicodeSet;
	this->fCachedSetLookup = 0x0;
	//    .end local v0    # "retVal":Landroid/icu/text/UnicodeSet;
label_cond_b:
	return 0x0;

}
// .method lookupNode(Ljava/lang/String;)Landroid/icu/text/RBBINode;
std::shared_ptr<android::icu::text::RBBINode> android::icu::text::RBBISymbolTable::lookupNode(std::shared_ptr<java::lang::String> key)
{
	
	std::shared_ptr<android::icu::text::RBBISymbolTable_S_RBBISymbolTableEntry> el;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .local v1, "retNode":Landroid/icu/text/RBBINode;
	el = this->fHashTable->get(key);
	el->checkCast("android::icu::text::RBBISymbolTable_S_RBBISymbolTableEntry");
	//    .local v0, "el":Landroid/icu/text/RBBISymbolTable$RBBISymbolTableEntry;
	if ( !(el) )  
		goto label_cond_d;
	//    .end local v1    # "retNode":Landroid/icu/text/RBBINode;
label_cond_d:
	return 0x0;

}
// .method public parseReference(Ljava/lang/String;Ljava/text/ParsePosition;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RBBISymbolTable::parseReference(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,int limit)
{
	
	int start;
	int i;
	int c;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	//    .param p3, "limit"    # I
	start = pos->getIndex();
	//    .local v3, "start":I
	i = start;
	//    .local v1, "i":I
	//    .local v2, "result":Ljava/lang/String;
label_goto_8:
	if ( i >= limit )
		goto label_cond_20;
	c = android::icu::text::UTF16::charAt(text, i);
	//    .local v0, "c":I
	if ( i != start )
		goto label_cond_18;
	if ( ( android::icu::lang::UCharacter::isUnicodeIdentifierStart(c) ^ 0x1) )     
		goto label_cond_20;
label_cond_18:
	if ( !(( android::icu::lang::UCharacter::isUnicodeIdentifierPart(c) ^ 0x1)) )  
		goto label_cond_23;
	//    .end local v0    # "c":I
label_cond_20:
	if ( i != start )
		goto label_cond_29;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 336    .line 124
	// 337    .restart local v0    # "c":I
label_cond_23:
	i = (i +  android::icu::text::UTF16::getCharCount(c));
	goto label_goto_8;
	// 347    .line 129
	// 348    .end local v0    # "c":I
label_cond_29:
	pos->setIndex(i);
	return text->substring(start, i);

}
// .method rbbiSymtablePrint()V
void android::icu::text::RBBISymbolTable::rbbiSymtablePrint()
{
	
	std::shared_ptr<std::vector<android::icu::text::RBBISymbolTable_S_RBBISymbolTableEntry>> syms;
	int i;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("Variable Definitions\nName               Node Val     String Val\n----------------------------------------------------------------------\n")));
	syms = this->fHashTable->values()->toArray(std::make_shared<std::vector<std::vector<android::icu::text::RBBISymbolTable_S_RBBISymbolTableEntry>>>(0x0));
	syms->checkCast("std::vector<android::icu::text::RBBISymbolTable_S_RBBISymbolTableEntry>");
	//    .local v2, "syms":[Landroid/icu/text/RBBISymbolTable$RBBISymbolTableEntry;
	i = 0x0;
	//    .local v0, "i":I
label_goto_18:
	if ( i >= syms->size() )
		goto label_cond_77;
	s = syms[i];
	//    .local v1, "s":Landroid/icu/text/RBBISymbolTable$RBBISymbolTableEntry;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->print(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")))->append(s->key)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")))->toString());
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->print(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")))->append(s->val)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")))->toString());
	java::lang::System::out->print(s->val->fLeftChild->fText);
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	i = ( i + 0x1);
	goto label_goto_18;
	// 490    .line 192
	// 491    .end local v1    # "s":Landroid/icu/text/RBBISymbolTable$RBBISymbolTableEntry;
label_cond_77:
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nParsed Variable Definitions\n")));
	i = 0x0;
label_goto_80:
	if ( i >= syms->size() )
		goto label_cond_9f;
	s = syms[i];
	//    .restart local v1    # "s":Landroid/icu/text/RBBISymbolTable$RBBISymbolTableEntry;
	java::lang::System::out->print(s->key);
	s->val->fLeftChild->printTree(0x1);
	java::lang::System::out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	i = ( i + 0x1);
	goto label_goto_80;
	// 539    .line 199
	// 540    .end local v1    # "s":Landroid/icu/text/RBBISymbolTable$RBBISymbolTableEntry;
label_cond_9f:
	return;

}


