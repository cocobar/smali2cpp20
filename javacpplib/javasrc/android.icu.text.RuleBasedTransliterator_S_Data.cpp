// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedTransliterator$Data.smali
#include "java2ctype.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.TransliterationRuleSet.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "android.icu.text.UnicodeReplacer.h"
#include "java.lang.Object.h"
#include "java.util.HashMap.h"

// .method public constructor <init>()V
android::icu::text::RuleBasedTransliterator_S_Data::RuleBasedTransliterator_S_Data()
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<android::icu::text::TransliterationRuleSet> cVar1;
	
	// 042    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::HashMap>();
	this->variableNames = cVar0;
	cVar1 = std::make_shared<android::icu::text::TransliterationRuleSet>();
	this->ruleSet = cVar1;
	return;

}
// .method public lookupMatcher(I)Landroid/icu/text/UnicodeMatcher;
std::shared_ptr<android::icu::text::UnicodeMatcher> android::icu::text::RuleBasedTransliterator_S_Data::lookupMatcher(int standIn)
{
	
	int i;
	std::shared_ptr<android::icu::text::UnicodeMatcher> cVar0;
	
	//    .param p1, "standIn"    # I
	i = (standIn - this->variablesBase);
	//    .local v0, "i":I
	if ( i < 0 ) 
		goto label_cond_12;
	if ( i >= this->variables->size() )
		goto label_cond_12;
	cVar0 = this->variables[i];
	cVar0->checkCast("android::icu::text::UnicodeMatcher");
label_goto_11:
	return cVar0;
	// 095    .line 421
label_cond_12:
	cVar0 = 0x0;
	goto label_goto_11;

}
// .method public lookupReplacer(I)Landroid/icu/text/UnicodeReplacer;
std::shared_ptr<android::icu::text::UnicodeReplacer> android::icu::text::RuleBasedTransliterator_S_Data::lookupReplacer(int standIn)
{
	
	int i;
	std::shared_ptr<android::icu::text::UnicodeReplacer> cVar0;
	
	//    .param p1, "standIn"    # I
	i = (standIn - this->variablesBase);
	//    .local v0, "i":I
	if ( i < 0 ) 
		goto label_cond_12;
	if ( i >= this->variables->size() )
		goto label_cond_12;
	cVar0 = this->variables[i];
	cVar0->checkCast("android::icu::text::UnicodeReplacer");
label_goto_11:
	return cVar0;
	// 133    .line 431
label_cond_12:
	cVar0 = 0x0;
	goto label_goto_11;

}


