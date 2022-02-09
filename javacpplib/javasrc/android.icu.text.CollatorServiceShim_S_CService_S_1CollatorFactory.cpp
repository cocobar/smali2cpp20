// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CollatorServiceShim$CService$1CollatorFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService_S_ICUResourceBundleFactory.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.text.Collator.h"
#include "android.icu.text.CollatorServiceShim_S_CService_S_1CollatorFactory.h"
#include "android.icu.text.CollatorServiceShim_S_CService.h"
#include "android.icu.text.CollatorServiceShim.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method constructor <init>(Landroid/icu/text/CollatorServiceShim$CService;)V
android::icu::text::CollatorServiceShim_S_CService_S_1CollatorFactory::CollatorServiceShim_S_CService_S_1CollatorFactory(std::shared_ptr<android::icu::text::CollatorServiceShim_S_CService> this_S_1)
{
	
	//    .param p1, "this$1"    # Landroid/icu/text/CollatorServiceShim$CService;
	this->this_S_1 = this_S_1;
	android::icu::impl::ICULocaleService_S_ICUResourceBundleFactory::(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/coll")));
	return;

}
// .method protected handleCreate(Landroid/icu/util/ULocale;ILandroid/icu/impl/ICUService;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::CollatorServiceShim_S_CService_S_1CollatorFactory::handleCreate(std::shared_ptr<android::icu::util::ULocale> uloc,int kind,std::shared_ptr<android::icu::impl::ICUService> srvc)
{
	
	//    .param p1, "uloc"    # Landroid/icu/util/ULocale;
	//    .param p2, "kind"    # I
	//    .param p3, "srvc"    # Landroid/icu/impl/ICUService;
	return android::icu::text::CollatorServiceShim::-wrap0(uloc);

}


