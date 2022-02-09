#ifndef __android_icu_text_RBNFChinesePostProcessor__
#define __android_icu_text_RBNFChinesePostProcessor__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBNFChinesePostProcessor.smali
#include "java2ctype.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.RBNFPostProcessor.h"
#include "android.icu.text.RuleBasedNumberFormat.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::text{
class RBNFChinesePostProcessor : public android::icu::text::RBNFPostProcessor {
protected:
private:
	static std::shared_ptr<std::vector<java::lang::String>> rulesetNames;
	int format;
	bool longForm;
public:
	static void static_cinit();
	RBNFChinesePostProcessor();
	void virtual init(std::shared_ptr<android::icu::text::RuleBasedNumberFormat> formatter,std::shared_ptr<java::lang::String> rules);
	void virtual process(std::shared_ptr<java::lang::StringBuilder> buf,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RBNFChinesePostProcessor::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RBNFChinesePostProcessor(){
	}

}; // class RBNFChinesePostProcessor
}; // namespace android::icu::text

#endif //__android_icu_text_RBNFChinesePostProcessor__

