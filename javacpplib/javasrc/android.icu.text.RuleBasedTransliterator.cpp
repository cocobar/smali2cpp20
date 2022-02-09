// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedTransliterator.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.RuleBasedTransliterator.h"
#include "android.icu.text.TransliterationRuleSet.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;Landroid/icu/text/RuleBasedTransliterator$Data;Landroid/icu/text/UnicodeFilter;)V
android::icu::text::RuleBasedTransliterator::RuleBasedTransliterator(std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> data,std::shared_ptr<android::icu::text::UnicodeFilter> filter)
{
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .param p2, "data"    # Landroid/icu/text/RuleBasedTransliterator$Data;
	//    .param p3, "filter"    # Landroid/icu/text/UnicodeFilter;
	android::icu::text::Transliterator::(ID, filter);
	this->data = data;
	this->setMaximumContextLength(data->ruleSet->getMaximumContextLength());
	return;

}
// .method public addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::RuleBasedTransliterator::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> filter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	//    .param p1, "filter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 056    .end annotation
	this->data->ruleSet->addSourceTargetSet(filter, sourceSet, targetSet);
	return;

}
// .method protected handleTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V
void android::icu::text::RuleBasedTransliterator::handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index,bool incremental)
{
	
	std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> cVar0;
	int loopCount;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "index"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "incremental"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 076    .end annotation
	cVar0 = this->data;
	cVar0->monitor_enter();
	loopCount = 0x0;
	//    .local v0, "loopCount":I
	try {
	//label_try_start_4:
	//    .local v1, "loopLimit":I
	if ( ( (index->limit -  index->start) << 0x4) >= 0 )
		goto label_cond_10;
label_cond_10:
label_goto_10:
	if ( index->start >= index->limit )
		goto label_cond_25;
	if ( loopCount >  0x7fffffff )
		goto label_cond_25;
	//label_try_end_1f:
	}
	catch (...){
		goto label_catchall_27;
	}
	//    .catchall {:try_start_4 .. :try_end_1f} :catchall_27
	if ( !(this->data->ruleSet->transliterate(text, index, incremental)) )  
		goto label_cond_25;
	loopCount = ( loopCount + 0x1);
	goto label_goto_10;
label_cond_25:
	cVar0->monitor_exit();
	return;
	// 142    .line 358
	// 143    .end local v1    # "loopLimit":I
label_catchall_27:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public safeClone()Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::RuleBasedTransliterator::safeClone()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> filter;
	std::shared_ptr<android::icu::text::RuleBasedTransliterator> cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 155    .end annotation
	filter = this->getFilter();
	//    .local v0, "filter":Landroid/icu/text/UnicodeFilter;
	if ( !(filter) )  
		goto label_cond_12;
	if ( !(filter->instanceOf("android::icu::text::UnicodeSet")) )  
		goto label_cond_12;
	filter->checkCast("android::icu::text::UnicodeSet");
	//    .end local v0    # "filter":Landroid/icu/text/UnicodeFilter;
	filter = std::make_shared<android::icu::text::UnicodeSet>(filter);
	//    .local v1, "filter":Landroid/icu/text/UnicodeFilter;
	//    .end local v1    # "filter":Landroid/icu/text/UnicodeFilter;
	//    .restart local v0    # "filter":Landroid/icu/text/UnicodeFilter;
label_cond_12:
	cVar0 = std::make_shared<android::icu::text::RuleBasedTransliterator>(this->getID(), this->data, filter);
	return cVar0;

}
// .method public toRules(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedTransliterator::toRules(bool escapeUnprintable)
{
	
	//    .param p1, "escapeUnprintable"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 203    .end annotation
	return this->data->ruleSet->toRules(escapeUnprintable);

}


