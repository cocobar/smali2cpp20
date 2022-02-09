// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RBBIRuleParseTable$RBBIRuleTableElement.smali
#include "java2ctype.h"
#include "android.icu.text.RBBIRuleParseTable_S_RBBIRuleTableElement.h"
#include "java.lang.String.h"

// .method constructor <init>(SIIIZLjava/lang/String;)V
android::icu::text::RBBIRuleParseTable_S_RBBIRuleTableElement::RBBIRuleParseTable_S_RBBIRuleTableElement(short a,int cc,int ns,int ps,bool nc,std::shared_ptr<java::lang::String> sn)
{
	
	//    .param p1, "a"    # S
	//    .param p2, "cc"    # I
	//    .param p3, "ns"    # I
	//    .param p4, "ps"    # I
	//    .param p5, "nc"    # Z
	//    .param p6, "sn"    # Ljava/lang/String;
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fAction = a;
	this->fCharClass = (short)(cc);
	this->fNextState = (short)(ns);
	this->fPushState = (short)(ps);
	this->fNextChar = nc;
	this->fStateName = sn;
	return;

}


