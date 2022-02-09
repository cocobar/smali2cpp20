// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CaseFoldTransliterator.smali
#include "java2ctype.h"
#include "android.icu.impl.UCaseProps.h"
#include "android.icu.text.CaseFoldTransliterator_S_1.h"
#include "android.icu.text.CaseFoldTransliterator_S_2.h"
#include "android.icu.text.CaseFoldTransliterator.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.ReplaceableContextIterator.h"
#include "android.icu.text.SourceTargetUtility.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.text.UppercaseTransliterator.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::CaseFoldTransliterator::_ID = std::make_shared<java::lang::String>("Any-CaseFold");
static android::icu::text::CaseFoldTransliterator::sourceTargetUtility;
// .method static constructor <clinit>()V
void android::icu::text::CaseFoldTransliterator::static_cinit()
{
	
	android::icu::text::CaseFoldTransliterator::sourceTargetUtility = 0x0;
	return;

}
// .method public constructor <init>()V
android::icu::text::CaseFoldTransliterator::CaseFoldTransliterator()
{
	
	std::shared_ptr<android::icu::text::ReplaceableContextIterator> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	android::icu::text::Transliterator::(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-CaseFold")), 0x0);
	this->csp = android::icu::impl::UCaseProps::INSTANCE;
	cVar0 = std::make_shared<android::icu::text::ReplaceableContextIterator>();
	this->iter = cVar0;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	this->result = cVar1;
	return;

}
// .method static register()V
void android::icu::text::CaseFoldTransliterator::register()
{
	
	std::shared_ptr<android::icu::text::CaseFoldTransliterator_S_1> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::CaseFoldTransliterator_S_1>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-CaseFold")), cVar0);
	android::icu::text::Transliterator::registerSpecialInverse(std::make_shared<java::lang::String>(std::make_shared<char[]>("CaseFold")), std::make_shared<java::lang::String>(std::make_shared<char[]>("Upper")), 0x0);
	return;

}
// .method public addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::CaseFoldTransliterator::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	std::shared_ptr<android::icu::text::UppercaseTransliterator> cVar0;
	std::shared_ptr<android::icu::text::SourceTargetUtility> cVar1;
	std::shared_ptr<android::icu::text::CaseFoldTransliterator_S_2> cVar2;
	
	//    .param p1, "inputFilter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	cVar0 = android::icu::text::UppercaseTransliterator();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	if ( android::icu::text::CaseFoldTransliterator::sourceTargetUtility )     
		goto label_cond_13;
	cVar2 = std::make_shared<android::icu::text::CaseFoldTransliterator_S_2>(this);
	cVar1 = std::make_shared<android::icu::text::SourceTargetUtility>(cVar2);
	android::icu::text::CaseFoldTransliterator::sourceTargetUtility = cVar1;
	//label_try_end_13:
	}
	catch (...){
		goto label_catchall_1a;
	}
	//    .catchall {:try_start_3 .. :try_end_13} :catchall_1a
label_cond_13:
	cVar0->monitor_exit();
	android::icu::text::CaseFoldTransliterator::sourceTargetUtility->addSourceTargetSet(this, inputFilter, sourceSet, targetSet);
	return;
	// 138    .line 119
label_catchall_1a:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method protected declared-synchronized handleTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V
void android::icu::text::CaseFoldTransliterator::handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> offsets,bool isIncremental)
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
		goto label_catchall_7b;
	}
	//    .catchall {:try_start_1 .. :try_end_3} :catchall_7b
	if ( this->csp )     
		goto label_cond_7;
	this->monitor_exit();
	return;
	// 169    .line 67
label_cond_7:
	try {
	//label_try_start_7:
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_7b;
	}
	//    .catchall {:try_start_7 .. :try_end_b} :catchall_7b
	if ( offsets->start <  offsets->limit )
		goto label_cond_f;
	this->monitor_exit();
	return;
	// 185    .line 71
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
		goto label_cond_89;
	c = this->csp->toFullFolding(c, this->result, 0x0);
	if ( !(this->iter->didReachLimit()) )  
		goto label_cond_56;
	if ( !(isIncremental) )  
		goto label_cond_56;
	offsets->start = this->iter->getCaseMapCPStart();
	//label_try_end_54:
	}
	catch (...){
		goto label_catchall_7b;
	}
	//    .catchall {:try_start_f .. :try_end_54} :catchall_7b
	this->monitor_exit();
	return;
	// 272    .line 92
label_cond_56:
	if ( c < 0 ) 
		goto label_cond_31;
	if ( c >  0x1f )
		goto label_cond_7e;
	try {
	//label_try_start_5c:
	delta = this->iter->replace(this->result->toString());
	//    .local v1, "delta":I
	this->result->setLength(0x0);
label_goto_6e:
	if ( !(delta) )  
		goto label_cond_31;
	offsets->limit = (offsets->limit +  delta);
	offsets->contextLimit = (offsets->contextLimit +  delta);
	//label_try_end_7a:
	}
	catch (...){
		goto label_catchall_7b;
	}
	//    .catchall {:try_start_5c .. :try_end_7a} :catchall_7b
	goto label_goto_31;
	// 325    .end local v0    # "c":I
	// 326    .end local v1    # "delta":I
label_catchall_7b:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 334    .line 101
	// 335    .restart local v0    # "c":I
label_cond_7e:
	try {
	//label_try_start_7e:
	//    .restart local v1    # "delta":I
	goto label_goto_6e;
	// 351    .line 109
	// 352    .end local v1    # "delta":I
label_cond_89:
	offsets->start = offsets->limit;
	//label_try_end_8d:
	}
	catch (...){
		goto label_catchall_7b;
	}
	//    .catchall {:try_start_7e .. :try_end_8d} :catchall_7b
	this->monitor_exit();
	return;

}


