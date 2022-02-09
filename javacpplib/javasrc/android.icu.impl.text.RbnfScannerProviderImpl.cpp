// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\text\RbnfScannerProviderImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUDebug.h"
#include "android.icu.impl.text.RbnfScannerProviderImpl_S_RbnfLenientScannerImpl.h"
#include "android.icu.impl.text.RbnfScannerProviderImpl.h"
#include "android.icu.text.Collator.h"
#include "android.icu.text.RbnfLenientScanner.h"
#include "android.icu.text.RuleBasedCollator.h"
#include "android.icu.util.ULocale.h"
#include "java.io.PrintStream.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.HashMap.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"

static android::icu::impl::text::RbnfScannerProviderImpl::DEBUG;
// .method static constructor <clinit>()V
void android::icu::impl::text::RbnfScannerProviderImpl::static_cinit()
{
	
	android::icu::impl::text::RbnfScannerProviderImpl::DEBUG = android::icu::impl::ICUDebug::enabled(std::make_shared<java::lang::String>(std::make_shared<char[]>("rbnf")));
	return;

}
// .method public constructor <init>()V
android::icu::impl::text::RbnfScannerProviderImpl::RbnfScannerProviderImpl()
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 059    .end annotation
	// 063    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::HashMap>();
	this->cache = cVar0;
	return;

}
// .method protected createScanner(Landroid/icu/util/ULocale;Ljava/lang/String;)Landroid/icu/text/RbnfLenientScanner;
std::shared_ptr<android::icu::text::RbnfLenientScanner> android::icu::impl::text::RbnfScannerProviderImpl::createScanner(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> extras)
{
	
	std::shared_ptr<android::icu::impl::text::RbnfScannerProviderImpl_S_RbnfLenientScannerImpl> cVar2;
	std::shared_ptr<android::icu::text::RuleBasedCollator> cVar0;
	std::shared_ptr<android::icu::text::RuleBasedCollator> collator;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "extras"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 083    .end annotation
	0x0;
	//    .local v1, "collator":Landroid/icu/text/RuleBasedCollator;
	try {
	//label_try_start_2:
	cVar0 = android::icu::text::Collator::getInstance(locale->toLocale());
	cVar0->checkCast("android::icu::text::RuleBasedCollator");
	collator = cVar0;
	//    .local v1, "collator":Landroid/icu/text/RuleBasedCollator;
	if ( !(extras) )  
		goto label_cond_2b;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "rules":Ljava/lang/String;
	collator = std::make_shared<android::icu::text::RuleBasedCollator>(cVar1->append(collator->getRules())->append(extras)->toString());
	//    .end local v1    # "collator":Landroid/icu/text/RuleBasedCollator;
	//    .local v2, "collator":Landroid/icu/text/RuleBasedCollator;
	collator = collator;
	//    .end local v2    # "collator":Landroid/icu/text/RuleBasedCollator;
	//    .end local v4    # "rules":Ljava/lang/String;
	//    .restart local v1    # "collator":Landroid/icu/text/RuleBasedCollator;
label_cond_2b:
	collator->setDecomposition(0x11);
	//label_try_end_30:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_36;
	}
	//    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_30} :catch_36
	//    .end local v1    # "collator":Landroid/icu/text/RuleBasedCollator;
label_goto_30:
	cVar2 = std::make_shared<android::icu::impl::text::RbnfScannerProviderImpl_S_RbnfLenientScannerImpl>(collator, 0x0);
	return cVar2;
	// 163    .line 112
label_catch_36:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "e":Ljava/lang/Exception;
	if ( !(android::icu::impl::text::RbnfScannerProviderImpl::DEBUG) )  
		goto label_cond_46;
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("++++")));
label_cond_46:
	//    .local v1, "collator":Landroid/icu/text/RuleBasedCollator;
	goto label_goto_30;

}
// .method public get(Landroid/icu/util/ULocale;Ljava/lang/String;)Landroid/icu/text/RbnfLenientScanner;
std::shared_ptr<android::icu::text::RbnfLenientScanner> android::icu::impl::text::RbnfScannerProviderImpl::get(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> extras)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<java::util::Map> cVar1;
	std::shared_ptr<android::icu::text::RbnfLenientScanner> result;
	std::shared_ptr<java::lang::Object> result;
	std::shared_ptr<java::util::Map> cVar2;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "extras"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 195    .end annotation
	0x0;
	//    .local v1, "result":Landroid/icu/text/RbnfLenientScanner;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	key = cVar0->append(locale->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(extras)->toString();
	//    .local v0, "key":Ljava/lang/String;
	cVar1 = this->cache;
	cVar1->monitor_enter();
	try {
	//label_try_start_20:
	result = this->cache->get(key);
	//    .end local v1    # "result":Landroid/icu/text/RbnfLenientScanner;
	result->checkCast("android::icu::text::RbnfLenientScanner");
	//label_try_end_28:
	}
	catch (...){
		goto label_catchall_3b;
	}
	//    .catchall {:try_start_20 .. :try_end_28} :catchall_3b
	//    .local v1, "result":Landroid/icu/text/RbnfLenientScanner;
	if ( !(result) )  
		goto label_cond_2c;
	cVar1->monitor_exit();
	return result;
label_cond_2c:
	cVar1->monitor_exit();
	result = this->createScanner(locale, extras);
	cVar2 = this->cache;
	cVar2->monitor_enter();
	try {
	//label_try_start_34:
	this->cache->put(key, result);
	//label_try_end_39:
	}
	catch (...){
		goto label_catchall_3e;
	}
	//    .catchall {:try_start_34 .. :try_end_39} :catchall_3e
	cVar2->monitor_exit();
	return result;
	// 283    .line 80
	// 284    .end local v1    # "result":Landroid/icu/text/RbnfLenientScanner;
label_catchall_3b:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;
	// 292    .line 87
	// 293    .restart local v1    # "result":Landroid/icu/text/RbnfLenientScanner;
label_catchall_3e:
	// move-exception
	
	cVar2->monitor_exit();
	// throw
	throw;

}


