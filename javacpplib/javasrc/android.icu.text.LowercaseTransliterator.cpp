// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\LowercaseTransliterator.smali
#include "java2ctype.h"
#include "android.icu.impl.UCaseProps.h"
#include "android.icu.text.LowercaseTransliterator_S_1.h"
#include "android.icu.text.LowercaseTransliterator_S_2.h"
#include "android.icu.text.LowercaseTransliterator.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.ReplaceableContextIterator.h"
#include "android.icu.text.SourceTargetUtility.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::LowercaseTransliterator::_ID = std::make_shared<java::lang::String>("Any-Lower");
// .method static synthetic -get0(Landroid/icu/text/LowercaseTransliterator;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::LowercaseTransliterator::_get0(std::shared_ptr<android::icu::text::LowercaseTransliterator> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/LowercaseTransliterator;
	return _this->locale;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::text::LowercaseTransliterator::LowercaseTransliterator(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	std::shared_ptr<android::icu::text::UnicodeFilter> cVar0;
	std::shared_ptr<android::icu::text::ReplaceableContextIterator> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	android::icu::text::Transliterator::(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Lower")), cVar0);
	this->sourceTargetUtility = cVar0;
	this->locale = loc;
	this->csp = android::icu::impl::UCaseProps::INSTANCE;
	cVar1 = std::make_shared<android::icu::text::ReplaceableContextIterator>();
	this->iter = cVar1;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	this->result = cVar2;
	this->caseLocale = android::icu::impl::UCaseProps::getCaseLocale(this->locale);
	return;

}
// .method static register()V
void android::icu::text::LowercaseTransliterator::register()
{
	
	std::shared_ptr<android::icu::text::LowercaseTransliterator_S_1> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::LowercaseTransliterator_S_1>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Lower")), cVar0);
	android::icu::text::Transliterator::registerSpecialInverse(std::make_shared<java::lang::String>(std::make_shared<char[]>("Lower")), std::make_shared<java::lang::String>(std::make_shared<char[]>("Upper")), 0x1);
	return;

}
// .method public addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::LowercaseTransliterator::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	std::shared_ptr<android::icu::text::SourceTargetUtility> cVar0;
	std::shared_ptr<android::icu::text::LowercaseTransliterator_S_2> cVar1;
	
	//    .param p1, "inputFilter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->sourceTargetUtility )     
		goto label_cond_11;
	cVar1 = std::make_shared<android::icu::text::LowercaseTransliterator_S_2>(this);
	cVar0 = std::make_shared<android::icu::text::SourceTargetUtility>(cVar1);
	this->sourceTargetUtility = cVar0;
	//label_try_end_11:
	}
	catch (...){
		goto label_catchall_18;
	}
	//    .catchall {:try_start_1 .. :try_end_11} :catchall_18
label_cond_11:
	this->monitor_exit();
	this->sourceTargetUtility->addSourceTargetSet(this, inputFilter, sourceSet, targetSet);
	return;
	// 153    .line 126
label_catchall_18:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method protected declared-synchronized handleTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V
void android::icu::text::LowercaseTransliterator::handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> offsets,bool isIncremental)
{
	
	int c;
	int delta;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "offsets"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "isIncremental"    # Z
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_3:
	}
	catch (...){
		goto label_catchall_7e;
	}
	//    .catchall {:try_start_1 .. :try_end_3} :catchall_7e
	if ( this->csp )     
		goto label_cond_7;
	this->monitor_exit();
	return;
	// 184    .line 73
label_cond_7:
	try {
	//label_try_start_7:
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_7e;
	}
	//    .catchall {:try_start_7 .. :try_end_b} :catchall_7e
	if ( offsets->start <  offsets->limit )
		goto label_cond_f;
	this->monitor_exit();
	return;
	// 200    .line 77
label_cond_f:
	try {
	//label_try_start_f:
	this->iter->setText(text);
	this->result->setLength(0x0);
	this->iter->setIndex(offsets->start);
	this->iter->setLimit(offsets->limit);
	this->iter->setContextLimits(offsets->contextStart, offsets->contextLimit);
label_cond_31:
label_goto_31:
	c = this->iter->nextCaseMapCP();
	//    .local v0, "c":I
	if ( c < 0 ) 
		goto label_cond_8c;
	c = this->csp->toFullLower(c, this->iter, this->result, this->caseLocale);
	if ( !(this->iter->didReachLimit()) )  
		goto label_cond_59;
	if ( !(isIncremental) )  
		goto label_cond_59;
	offsets->start = this->iter->getCaseMapCPStart();
	//label_try_end_57:
	}
	catch (...){
		goto label_catchall_7e;
	}
	//    .catchall {:try_start_f .. :try_end_57} :catchall_7e
	this->monitor_exit();
	return;
	// 289    .line 98
label_cond_59:
	if ( c < 0 ) 
		goto label_cond_31;
	if ( c >  0x1f )
		goto label_cond_81;
	try {
	//label_try_start_5f:
	delta = this->iter->replace(this->result->toString());
	//    .local v1, "delta":I
	this->result->setLength(0x0);
label_goto_71:
	if ( !(delta) )  
		goto label_cond_31;
	offsets->limit = (offsets->limit +  delta);
	offsets->contextLimit = (offsets->contextLimit +  delta);
	//label_try_end_7d:
	}
	catch (...){
		goto label_catchall_7e;
	}
	//    .catchall {:try_start_5f .. :try_end_7d} :catchall_7e
	goto label_goto_31;
	// 342    .end local v0    # "c":I
	// 343    .end local v1    # "delta":I
label_catchall_7e:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 351    .line 107
	// 352    .restart local v0    # "c":I
label_cond_81:
	try {
	//label_try_start_81:
	//    .restart local v1    # "delta":I
	goto label_goto_71;
	// 368    .line 115
	// 369    .end local v1    # "delta":I
label_cond_8c:
	offsets->start = offsets->limit;
	//label_try_end_90:
	}
	catch (...){
		goto label_catchall_7e;
	}
	//    .catchall {:try_start_81 .. :try_end_90} :catchall_7e
	this->monitor_exit();
	return;

}


