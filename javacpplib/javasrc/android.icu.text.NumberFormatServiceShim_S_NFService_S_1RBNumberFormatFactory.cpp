// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormatServiceShim$NFService$1RBNumberFormatFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.NumberFormatServiceShim_S_NFService_S_1RBNumberFormatFactory.h"
#include "android.icu.text.NumberFormatServiceShim_S_NFService.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"

// .method constructor <init>(Landroid/icu/text/NumberFormatServiceShim$NFService;)V
android::icu::text::NumberFormatServiceShim_S_NFService_S_1RBNumberFormatFactory::NumberFormatServiceShim_S_NFService_S_1RBNumberFormatFactory(std::shared_ptr<android::icu::text::NumberFormatServiceShim_S_NFService> this_S_1)
{
	
	//    .param p1, "this$1"    # Landroid/icu/text/NumberFormatServiceShim$NFService;
	this->this_S_1 = this_S_1;
	// 030    invoke-direct {p0}, Landroid/icu/impl/ICULocaleService$ICUResourceBundleFactory;-><init>()V
	return;

}
// .method protected handleCreate(Landroid/icu/util/ULocale;ILandroid/icu/impl/ICUService;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::NumberFormatServiceShim_S_NFService_S_1RBNumberFormatFactory::handleCreate(std::shared_ptr<android::icu::util::ULocale> loc,int kind,std::shared_ptr<android::icu::impl::ICUService> srvc)
{
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .param p2, "kind"    # I
	//    .param p3, "srvc"    # Landroid/icu/impl/ICUService;
	return android::icu::text::NumberFormat::createInstance(loc, kind);

}


