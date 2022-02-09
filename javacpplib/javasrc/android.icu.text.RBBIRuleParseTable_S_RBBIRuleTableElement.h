#ifndef __android_icu_text_RBBIRuleParseTable_S_RBBIRuleTableElement__
#define __android_icu_text_RBBIRuleParseTable_S_RBBIRuleTableElement__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBIRuleParseTable$RBBIRuleTableElement.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RBBIRuleParseTable_S_RBBIRuleTableElement : public java::lang::Object {
protected:
private:
public:
	short fAction;
	short fCharClass;
	bool fNextChar;
	short fNextState;
	short fPushState;
	std::shared_ptr<java::lang::String> fStateName;
	RBBIRuleParseTable_S_RBBIRuleTableElement(short a,int cc,int ns,int ps,bool nc,std::shared_ptr<java::lang::String> sn);
public:
	virtual ~RBBIRuleParseTable_S_RBBIRuleTableElement(){
	}

}; // class RBBIRuleParseTable_S_RBBIRuleTableElement
}; // namespace android::icu::text

#endif //__android_icu_text_RBBIRuleParseTable_S_RBBIRuleTableElement__

