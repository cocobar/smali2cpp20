// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BreakIteratorFactory$BFService$1RBBreakIteratorFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.BreakIteratorFactory_S_BFService_S_1RBBreakIteratorFactory.h"
#include "android.icu.text.BreakIteratorFactory_S_BFService.h"
#include "android.icu.text.BreakIteratorFactory.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"

// .method constructor <init>(Landroid/icu/text/BreakIteratorFactory$BFService;)V
android::icu::text::BreakIteratorFactory_S_BFService_S_1RBBreakIteratorFactory::BreakIteratorFactory_S_BFService_S_1RBBreakIteratorFactory(std::shared_ptr<android::icu::text::BreakIteratorFactory_S_BFService> this_S_1)
{
	
	//    .param p1, "this$1"    # Landroid/icu/text/BreakIteratorFactory$BFService;
	this->this_S_1 = this_S_1;
	// 030    invoke-direct {p0}, Landroid/icu/impl/ICULocaleService$ICUResourceBundleFactory;-><init>()V
	return;

}
// .method protected handleCreate(Landroid/icu/util/ULocale;ILandroid/icu/impl/ICUService;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::BreakIteratorFactory_S_BFService_S_1RBBreakIteratorFactory::handleCreate(std::shared_ptr<android::icu::util::ULocale> loc,int kind,std::shared_ptr<android::icu::impl::ICUService> srvc)
{
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .param p2, "kind"    # I
	//    .param p3, "srvc"    # Landroid/icu/impl/ICUService;
	return android::icu::text::BreakIteratorFactory::-wrap0(loc, kind);

}


