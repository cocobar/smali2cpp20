// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicPeriodFormatterService.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicDurationFormatterFactory.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory.h"
#include "android.icu.impl.duration.BasicPeriodFormatterFactory.h"
#include "android.icu.impl.duration.BasicPeriodFormatterService.h"
#include "android.icu.impl.duration.DurationFormatterFactory.h"
#include "android.icu.impl.duration.PeriodBuilderFactory.h"
#include "android.icu.impl.duration.PeriodFormatterFactory.h"
#include "android.icu.impl.duration.impl.PeriodFormatterDataService.h"
#include "android.icu.impl.duration.impl.ResourceBasedPeriodFormatterDataService.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"

static android::icu::impl::duration::BasicPeriodFormatterService::instance;
// .method public constructor <init>(Landroid/icu/impl/duration/impl/PeriodFormatterDataService;)V
android::icu::impl::duration::BasicPeriodFormatterService::BasicPeriodFormatterService(std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterDataService> ds)
{
	
	//    .param p1, "ds"    # Landroid/icu/impl/duration/impl/PeriodFormatterDataService;
	// 024    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->ds = ds;
	return;

}
// .method public static getInstance()Landroid/icu/impl/duration/BasicPeriodFormatterService;
std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterService> android::icu::impl::duration::BasicPeriodFormatterService::getInstance()
{
	
	std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterService> cVar0;
	
	if ( android::icu::impl::duration::BasicPeriodFormatterService::instance )     
		goto label_cond_f;
	//    .local v0, "ds":Landroid/icu/impl/duration/impl/PeriodFormatterDataService;
	cVar0 = std::make_shared<android::icu::impl::duration::BasicPeriodFormatterService>(android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService::getInstance({const[class].FS-Param}));
	android::icu::impl::duration::BasicPeriodFormatterService::instance = cVar0;
label_cond_f:
	return android::icu::impl::duration::BasicPeriodFormatterService::instance;

}
// .method public getAvailableLocaleNames()Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::lang::String>> android::icu::impl::duration::BasicPeriodFormatterService::getAvailableLocaleNames()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 067        value = {
	// 068            "()",
	// 069            "Ljava/util/Collection",
	// 070            "<",
	// 071            "Ljava/lang/String;",
	// 072            ">;"
	// 073        }
	// 074    .end annotation
	return this->ds->getAvailableLocales();

}
// .method public newDurationFormatterFactory()Landroid/icu/impl/duration/DurationFormatterFactory;
std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> android::icu::impl::duration::BasicPeriodFormatterService::newDurationFormatterFactory()
{
	
	std::shared_ptr<android::icu::impl::duration::BasicDurationFormatterFactory> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::duration::BasicDurationFormatterFactory>(this);
	return cVar0;

}
// .method public newPeriodBuilderFactory()Landroid/icu/impl/duration/PeriodBuilderFactory;
std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> android::icu::impl::duration::BasicPeriodFormatterService::newPeriodBuilderFactory()
{
	
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::duration::BasicPeriodBuilderFactory>(this->ds);
	return cVar0;

}
// .method public newPeriodFormatterFactory()Landroid/icu/impl/duration/PeriodFormatterFactory;
std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> android::icu::impl::duration::BasicPeriodFormatterService::newPeriodFormatterFactory()
{
	
	std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::duration::BasicPeriodFormatterFactory>(this->ds);
	return cVar0;

}


