#ifndef __android_icu_text_RBNFPostProcessor__
#define __android_icu_text_RBNFPostProcessor__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBNFPostProcessor.smali
#include "java2ctype.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.RuleBasedNumberFormat.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::text{
class RBNFPostProcessor : public java::lang::Object {
protected:
private:
public:
	void init(std::shared_ptr<android::icu::text::RuleBasedNumberFormat> var0,std::shared_ptr<java::lang::String> var1) = 0;
	void process(std::shared_ptr<java::lang::StringBuilder> var0,std::shared_ptr<android::icu::text::NFRuleSet> var1) = 0;
	RBNFPostProcessor(){ };
	virtual ~RBNFPostProcessor(){ };

}; // class RBNFPostProcessor
}; // namespace android::icu::text

#endif //__android_icu_text_RBNFPostProcessor__

