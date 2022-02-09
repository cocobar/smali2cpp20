// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TitlecaseTransliterator.smali
#include "java2ctype.h"
#include "android.icu.impl.UCaseProps.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.ReplaceableContextIterator.h"
#include "android.icu.text.SourceTargetUtility.h"
#include "android.icu.text.TitlecaseTransliterator_S_1.h"
#include "android.icu.text.TitlecaseTransliterator_S_2.h"
#include "android.icu.text.TitlecaseTransliterator.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::TitlecaseTransliterator::_ID = std::make_shared<java::lang::String>("Any-Title");
// .method static synthetic -get0(Landroid/icu/text/TitlecaseTransliterator;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::TitlecaseTransliterator::_get0(std::shared_ptr<android::icu::text::TitlecaseTransliterator> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/TitlecaseTransliterator;
	return _this->locale;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::text::TitlecaseTransliterator::TitlecaseTransliterator(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	std::shared_ptr<android::icu::text::UnicodeFilter> cVar0;
	std::shared_ptr<android::icu::text::ReplaceableContextIterator> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	android::icu::text::Transliterator::(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Title")), cVar0);
	this->sourceTargetUtility = cVar0;
	this->locale = loc;
	this->setMaximumContextLength(0x2);
	this->csp = android::icu::impl::UCaseProps::INSTANCE;
	cVar1 = std::make_shared<android::icu::text::ReplaceableContextIterator>();
	this->iter = cVar1;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	this->result = cVar2;
	this->caseLocale = android::icu::impl::UCaseProps::getCaseLocale(this->locale);
	return;

}
// .method static register()V
void android::icu::text::TitlecaseTransliterator::register()
{
	
	std::shared_ptr<android::icu::text::TitlecaseTransliterator_S_1> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::TitlecaseTransliterator_S_1>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Title")), cVar0);
	android::icu::text::TitlecaseTransliterator::registerSpecialInverse(std::make_shared<java::lang::String>(std::make_shared<char[]>("Title")), std::make_shared<java::lang::String>(std::make_shared<char[]>("Lower")), 0x0);
	return;

}
// .method public addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::TitlecaseTransliterator::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	std::shared_ptr<android::icu::text::SourceTargetUtility> cVar0;
	std::shared_ptr<android::icu::text::TitlecaseTransliterator_S_2> cVar1;
	
	//    .param p1, "inputFilter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->sourceTargetUtility )     
		goto label_cond_11;
	cVar1 = std::make_shared<android::icu::text::TitlecaseTransliterator_S_2>(this);
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
	// 158    .line 165
label_catchall_18:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method protected declared-synchronized handleTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V
void android::icu::text::TitlecaseTransliterator::handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> offsets,bool isIncremental)
{
	
	int doTitle;
	int start;
	int c;
	int type;
	int delta;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "offsets"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "isIncremental"    # Z
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_5:
	}
	catch (...){
		goto label_catchall_b2;
	}
	//    .catchall {:try_start_1 .. :try_end_5} :catchall_b2
	if ( offsets->start <  offsets->limit )
		goto label_cond_9;
	this->monitor_exit();
	return;
	// 191    .line 84
label_cond_9:
	doTitle = 0x1;
	//    .local v2, "doTitle":Z
	try {
	//label_try_start_a:
	start = ( offsets->start + -0x1);
	//    .local v3, "start":I
label_goto_e:
	if ( start <  offsets->contextStart )
		goto label_cond_1f;
	c = text->char32At(start);
	//    .local v0, "c":I
	type = this->csp->getTypeOrIgnorable(c);
	//    .local v4, "type":I
	if ( type <= 0 )
		goto label_cond_76;
	doTitle = 0x0;
	//    .end local v0    # "c":I
	//    .end local v4    # "type":I
label_cond_1f:
	this->iter->setText(text);
	this->iter->setIndex(offsets->start);
	this->iter->setLimit(offsets->limit);
	this->iter->setContextLimits(offsets->contextStart, offsets->contextLimit);
	this->result->setLength(0x0);
label_cond_41:
label_goto_41:
	c = this->iter->nextCaseMapCP();
	//    .restart local v0    # "c":I
	if ( c < 0 ) 
		goto label_cond_c0;
	type = this->csp->getTypeOrIgnorable(c);
	//    .restart local v4    # "type":I
	if ( type < 0 ) 
		goto label_cond_41;
	if ( !(doTitle) )  
		goto label_cond_7e;
	c = this->csp->toFullTitle(c, this->iter, this->result, this->caseLocale);
label_goto_5f:
	if ( type )     
		goto label_cond_8b;
	doTitle = 0x1;
label_goto_62:
	if ( !(this->iter->didReachLimit()) )  
		goto label_cond_8d;
	if ( !(isIncremental) )  
		goto label_cond_8d;
	offsets->start = this->iter->getCaseMapCPStart();
	//label_try_end_74:
	}
	catch (...){
		goto label_catchall_b2;
	}
	//    .catchall {:try_start_a .. :try_end_74} :catchall_b2
	this->monitor_exit();
	return;
	// 339    .line 97
label_cond_76:
	if ( !(type) )  
		goto label_cond_1f;
	try {
	//label_try_start_78:
	start = (start -  android::icu::text::UTF16::getCharCount(c));
	goto label_goto_e;
	// 353    .line 124
label_cond_7e:
	c = this->csp->toFullLower(c, this->iter, this->result, this->caseLocale);
	goto label_goto_5f;
	// 369    .line 126
label_cond_8b:
	doTitle = 0x0;
	goto label_goto_62;
	// 375    .line 136
label_cond_8d:
	if ( c < 0 ) 
		goto label_cond_41;
	if ( c >  0x1f )
		goto label_cond_b5;
	delta = this->iter->replace(this->result->toString());
	//    .local v1, "delta":I
	this->result->setLength(0x0);
label_goto_a5:
	if ( !(delta) )  
		goto label_cond_41;
	offsets->limit = (offsets->limit +  delta);
	offsets->contextLimit = (offsets->contextLimit +  delta);
	//label_try_end_b1:
	}
	catch (...){
		goto label_catchall_b2;
	}
	//    .catchall {:try_start_78 .. :try_end_b1} :catchall_b2
	goto label_goto_41;
	// 427    .end local v0    # "c":I
	// 428    .end local v1    # "delta":I
	// 429    .end local v2    # "doTitle":Z
	// 430    .end local v3    # "start":I
	// 431    .end local v4    # "type":I
label_catchall_b2:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 439    .line 145
	// 440    .restart local v0    # "c":I
	// 441    .restart local v2    # "doTitle":Z
	// 442    .restart local v3    # "start":I
	// 443    .restart local v4    # "type":I
label_cond_b5:
	try {
	//label_try_start_b5:
	//    .restart local v1    # "delta":I
	goto label_goto_a5;
	// 459    .line 154
	// 460    .end local v1    # "delta":I
	// 461    .end local v4    # "type":I
label_cond_c0:
	offsets->start = offsets->limit;
	//label_try_end_c4:
	}
	catch (...){
		goto label_catchall_b2;
	}
	//    .catchall {:try_start_b5 .. :try_end_c4} :catchall_b2
	this->monitor_exit();
	return;

}


