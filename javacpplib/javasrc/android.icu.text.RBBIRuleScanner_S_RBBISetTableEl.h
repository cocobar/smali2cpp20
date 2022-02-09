#ifndef __android_icu_text_RBBIRuleScanner_S_RBBISetTableEl__
#define __android_icu_text_RBBIRuleScanner_S_RBBISetTableEl__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBIRuleScanner$RBBISetTableEl.smali
#include "java2ctype.h"
#include "android.icu.text.RBBINode.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RBBIRuleScanner_S_RBBISetTableEl : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> key;
	std::shared_ptr<android::icu::text::RBBINode> val;
	RBBIRuleScanner_S_RBBISetTableEl();
public:
	virtual ~RBBIRuleScanner_S_RBBISetTableEl(){
	}

}; // class RBBIRuleScanner_S_RBBISetTableEl
}; // namespace android::icu::text

#endif //__android_icu_text_RBBIRuleScanner_S_RBBISetTableEl__

