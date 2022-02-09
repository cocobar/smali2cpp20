// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CollatorServiceShim$1CFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService_S_LocaleKeyFactory.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.text.Collator_S_CollatorFactory.h"
#include "android.icu.text.Collator.h"
#include "android.icu.text.CollatorServiceShim_S_1CFactory.h"
#include "android.icu.text.CollatorServiceShim.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Set.h"

// .method constructor <init>(Landroid/icu/text/CollatorServiceShim;Landroid/icu/text/Collator$CollatorFactory;)V
android::icu::text::CollatorServiceShim_S_1CFactory::CollatorServiceShim_S_1CFactory(std::shared_ptr<android::icu::text::CollatorServiceShim> this_S_0,std::shared_ptr<android::icu::text::Collator_S_CollatorFactory> fctry)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/CollatorServiceShim;
	//    .param p2, "fctry"    # Landroid/icu/text/Collator$CollatorFactory;
	this->this_S_0 = this_S_0;
	android::icu::impl::ICULocaleService_S_LocaleKeyFactory::(fctry->visible());
	this->delegate = fctry;
	return;

}
// .method public getDisplayName(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CollatorServiceShim_S_1CFactory::getDisplayName(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	std::shared_ptr<android::icu::util::ULocale> objectLocale;
	
	//    .param p1, "id"    # Ljava/lang/String;
	//    .param p2, "displayLocale"    # Landroid/icu/util/ULocale;
	objectLocale = std::make_shared<android::icu::util::ULocale>(id);
	//    .local v0, "objectLocale":Landroid/icu/util/ULocale;
	return this->delegate->getDisplayName(objectLocale, displayLocale);

}
// .method public getSupportedIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::text::CollatorServiceShim_S_1CFactory::getSupportedIDs()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 074        value = {
	// 075            "()",
	// 076            "Ljava/util/Set",
	// 077            "<",
	// 078            "Ljava/lang/String;",
	// 079            ">;"
	// 080        }
	// 081    .end annotation
	return this->delegate->getSupportedLocaleIDs();

}
// .method public handleCreate(Landroid/icu/util/ULocale;ILandroid/icu/impl/ICUService;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::CollatorServiceShim_S_1CFactory::handleCreate(std::shared_ptr<android::icu::util::ULocale> loc,int kind,std::shared_ptr<android::icu::impl::ICUService> srvc)
{
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .param p2, "kind"    # I
	//    .param p3, "srvc"    # Landroid/icu/impl/ICUService;
	//    .local v0, "coll":Ljava/lang/Object;
	return this->delegate->createCollator(loc);

}


