// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormatServiceShim$NFFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService_S_LocaleKey.h"
#include "android.icu.impl.ICULocaleService_S_LocaleKeyFactory.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.text.NumberFormat_S_NumberFormatFactory.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.NumberFormatServiceShim_S_NFFactory.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Set.h"

// .method constructor <init>(Landroid/icu/text/NumberFormat$NumberFormatFactory;)V
android::icu::text::NumberFormatServiceShim_S_NFFactory::NumberFormatServiceShim_S_NFFactory(std::shared_ptr<android::icu::text::NumberFormat_S_NumberFormatFactory> delegate)
{
	
	bool cVar0;
	
	//    .param p1, "delegate"    # Landroid/icu/text/NumberFormat$NumberFormatFactory;
	if ( !(delegate->visible()) )  
		goto label_cond_d;
	cVar0 = 0x1;
label_goto_7:
	android::icu::impl::ICULocaleService_S_LocaleKeyFactory::(cVar0);
	this->delegate = delegate;
	return;
	// 045    .line 48
label_cond_d:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method public create(Landroid/icu/impl/ICUService$Key;Landroid/icu/impl/ICUService;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::NumberFormatServiceShim_S_NFFactory::create(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<android::icu::impl::ICUService> srvc)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<android::icu::impl::ICULocaleService_S_LocaleKey> lkey;
	std::shared_ptr<java::lang::Object> result;
	
	//    .param p1, "key"    # Landroid/icu/impl/ICUService$Key;
	//    .param p2, "srvc"    # Landroid/icu/impl/ICUService;
	cVar0 = 0x0;
	if ( !(this->handlesKey(key)) )  
		goto label_cond_d;
	if ( !(( key->instanceOf("android::icu::impl::ICULocaleService_S_LocaleKey") ^ 0x1)) )  
		goto label_cond_e;
label_cond_d:
	return cVar0;
label_cond_e:
	lkey = key;
	lkey->checkCast("android::icu::impl::ICULocaleService_S_LocaleKey");
	//    .local v0, "lkey":Landroid/icu/impl/ICULocaleService$LocaleKey;
	result = this->delegate->createFormat(lkey->canonicalLocale(), lkey->kind());
	//    .local v1, "result":Ljava/lang/Object;
	if ( result )     
		goto label_cond_25;
label_cond_25:
	return result;

}
// .method protected getSupportedIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::text::NumberFormatServiceShim_S_NFFactory::getSupportedIDs()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 118        value = {
	// 119            "()",
	// 120            "Ljava/util/Set",
	// 121            "<",
	// 122            "Ljava/lang/String;",
	// 123            ">;"
	// 124        }
	// 125    .end annotation
	return this->delegate->getSupportedLocaleNames();

}


