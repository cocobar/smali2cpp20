// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\PeriodBuilderImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory_S_Settings.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.PeriodBuilderImpl.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.TimeZone.h"

// .method protected constructor <init>(Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;)V
android::icu::impl::duration::PeriodBuilderImpl::PeriodBuilderImpl(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settings)
{
	
	//    .param p1, "settings"    # Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->settings = settings;
	return;

}
// .method public approximateDurationOf(Landroid/icu/impl/duration/TimeUnit;)J
long long android::icu::impl::duration::PeriodBuilderImpl::approximateDurationOf(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit)
{
	
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	return android::icu::impl::duration::BasicPeriodBuilderFactory::approximateDurationOf(unit);

}
// .method public create(J)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::PeriodBuilderImpl::create(long long duration)
{
	
	//    .param p1, "duration"    # J
	return this->createWithReferenceDate(duration, java::lang::System::currentTimeMillis({const[class].FS-Param}));

}
// .method public createWithReferenceDate(JJ)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::PeriodBuilderImpl::createWithReferenceDate(long long cVar0,long long referenceDate)
{
	
	bool inPast;
	long long cVar0;
	std::shared_ptr<android::icu::impl::duration::Period> ts;
	
	//    .param p1, "duration"    # J
	//    .param p3, "referenceDate"    # J
	if ( (cVar0 > 0x0) >= 0 )
		goto label_cond_2c;
	inPast = 0x1;
	//    .local v6, "inPast":Z
label_goto_7:
	if ( !(inPast) )  
		goto label_cond_a;
	cVar0 = (0 - cVar0);
label_cond_a:
	ts = this->settings->createLimited(cVar0, inPast);
	//    .local v0, "ts":Landroid/icu/impl/duration/Period;
	if ( ts )     
		goto label_cond_2b;
	ts = this->handleCreate(cVar0, referenceDate, inPast);
	if ( ts )     
		goto label_cond_2b;
label_cond_2b:
	return ts;
	// 131    .line 337
	// 132    .end local v0    # "ts":Landroid/icu/impl/duration/Period;
	// 133    .end local v6    # "inPast":Z
label_cond_2c:
	inPast = 0x0;
	//    .restart local v6    # "inPast":Z
	goto label_goto_7;

}
// .method public withLocale(Ljava/lang/String;)Landroid/icu/impl/duration/PeriodBuilder;
std::shared_ptr<android::icu::impl::duration::PeriodBuilder> android::icu::impl::duration::PeriodBuilderImpl::withLocale(std::shared_ptr<java::lang::String> localeName)
{
	
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> newSettings;
	
	//    .param p1, "localeName"    # Ljava/lang/String;
	newSettings = this->settings->setLocale(localeName);
	//    .local v0, "newSettings":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	if ( newSettings == this->settings )
		goto label_cond_f;
	return this->withSettings(newSettings);
	// 169    .line 363
label_cond_f:
	return this;

}
// .method public withTimeZone(Ljava/util/TimeZone;)Landroid/icu/impl/duration/PeriodBuilder;
std::shared_ptr<android::icu::impl::duration::PeriodBuilder> android::icu::impl::duration::PeriodBuilderImpl::withTimeZone(std::shared_ptr<java::util::TimeZone> timeZone)
{
	
	//    .param p1, "timeZone"    # Ljava/util/TimeZone;
	return this;

}


