// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicDurationFormatterFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicDurationFormatter.h"
#include "android.icu.impl.duration.BasicDurationFormatterFactory.h"
#include "android.icu.impl.duration.BasicPeriodFormatterService.h"
#include "android.icu.impl.duration.DateFormatter.h"
#include "android.icu.impl.duration.DurationFormatter.h"
#include "android.icu.impl.duration.DurationFormatterFactory.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.PeriodBuilderFactory.h"
#include "android.icu.impl.duration.PeriodFormatter.h"
#include "android.icu.impl.duration.PeriodFormatterFactory.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.TimeZone.h"

// .method constructor <init>(Landroid/icu/impl/duration/BasicPeriodFormatterService;)V
android::icu::impl::duration::BasicDurationFormatterFactory::BasicDurationFormatterFactory(std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterService> ps)
{
	
	//    .param p1, "ps"    # Landroid/icu/impl/duration/BasicPeriodFormatterService;
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->ps = ps;
	this->localeName = java::util::Locale::getDefault({const[class].FS-Param})->toString();
	this->timeZone = java::util::TimeZone::getDefault({const[class].FS-Param});
	return;

}
// .method protected createFormatter()Landroid/icu/impl/duration/BasicDurationFormatter;
std::shared_ptr<android::icu::impl::duration::BasicDurationFormatter> android::icu::impl::duration::BasicDurationFormatterFactory::createFormatter()
{
	
	std::shared_ptr<android::icu::impl::duration::BasicDurationFormatter> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::duration::BasicDurationFormatter>(this->formatter, this->builder, this->fallback, this->fallbackLimit, this->localeName, this->timeZone);
	return cVar0;

}
// .method public getFallback()Landroid/icu/impl/duration/DateFormatter;
std::shared_ptr<android::icu::impl::duration::DateFormatter> android::icu::impl::duration::BasicDurationFormatterFactory::getFallback()
{
	
	return this->fallback;

}
// .method public getFallbackLimit()J
long long android::icu::impl::duration::BasicDurationFormatterFactory::getFallbackLimit()
{
	
	long long cVar0;
	
	if ( this->fallback )     
		goto label_cond_7;
	cVar0 = 0x0;
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = this->fallbackLimit;
	goto label_goto_6;

}
// .method public getFormatter()Landroid/icu/impl/duration/DurationFormatter;
std::shared_ptr<android::icu::impl::duration::DurationFormatter> android::icu::impl::duration::BasicDurationFormatterFactory::getFormatter()
{
	
	if ( this->f )     
		goto label_cond_2a;
	if ( !(this->fallback) )  
		goto label_cond_18;
	this->fallback = this->fallback->withLocale(this->localeName)->withTimeZone(this->timeZone);
label_cond_18:
	this->formatter = this->getPeriodFormatter();
	this->builder = this->getPeriodBuilder();
	this->f = this->createFormatter();
label_cond_2a:
	return this->f;

}
// .method public getLocaleName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::BasicDurationFormatterFactory::getLocaleName()
{
	
	return this->localeName;

}
// .method public getPeriodBuilder()Landroid/icu/impl/duration/PeriodBuilder;
std::shared_ptr<android::icu::impl::duration::PeriodBuilder> android::icu::impl::duration::BasicDurationFormatterFactory::getPeriodBuilder()
{
	
	if ( this->builder )     
		goto label_cond_1c;
	this->builder = this->ps->newPeriodBuilderFactory()->setLocale(this->localeName)->setTimeZone(this->timeZone)->getSingleUnitBuilder();
label_cond_1c:
	return this->builder;

}
// .method public getPeriodFormatter()Landroid/icu/impl/duration/PeriodFormatter;
std::shared_ptr<android::icu::impl::duration::PeriodFormatter> android::icu::impl::duration::BasicDurationFormatterFactory::getPeriodFormatter()
{
	
	if ( this->formatter )     
		goto label_cond_16;
	this->formatter = this->ps->newPeriodFormatterFactory()->setLocale(this->localeName)->getFormatter();
label_cond_16:
	return this->formatter;

}
// .method public getTimeZone()Ljava/util/TimeZone;
std::shared_ptr<java::util::TimeZone> android::icu::impl::duration::BasicDurationFormatterFactory::getTimeZone()
{
	
	return this->timeZone;

}
// .method protected reset()V
void android::icu::impl::duration::BasicDurationFormatterFactory::reset()
{
	
	this->f = 0x0;
	return;

}
// .method public setFallback(Landroid/icu/impl/duration/DateFormatter;)Landroid/icu/impl/duration/DurationFormatterFactory;
std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> android::icu::impl::duration::BasicDurationFormatterFactory::setFallback(std::shared_ptr<android::icu::impl::duration::DateFormatter> fallback)
{
	
	int cVar0;
	
	//    .param p1, "fallback"    # Landroid/icu/impl/duration/DateFormatter;
	if ( fallback )     
		goto label_cond_11;
	if ( !(this->fallback) )  
		goto label_cond_f;
	cVar0 = 0x1;
label_goto_7:
	if ( !(cVar0) )  
		goto label_cond_e;
	this->fallback = fallback;
	this->reset();
label_cond_e:
	return this;
	// 324    .line 86
label_cond_f:
	cVar0 = 0x0;
	//    .local v0, "doReset":Z
	goto label_goto_7;
	// 331    .line 87
	// 332    .end local v0    # "doReset":Z
label_cond_11:
	cVar0 = ( fallback->equals(this->fallback) ^ 0x1);
	//    .local v0, "doReset":Z
	goto label_goto_7;

}
// .method public setFallbackLimit(J)Landroid/icu/impl/duration/DurationFormatterFactory;
std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> android::icu::impl::duration::BasicDurationFormatterFactory::setFallbackLimit(long long cVar0)
{
	
	long long cVar0;
	
	//    .param p1, "fallbackLimit"    # J
	if ( (cVar0 > 0x0) >= 0 )
		goto label_cond_8;
	cVar0 = 0x0;
label_cond_8:
	if ( !((cVar0 > this->fallbackLimit)) )  
		goto label_cond_13;
	this->fallbackLimit = cVar0;
	this->reset();
label_cond_13:
	return this;

}
// .method public setLocale(Ljava/lang/String;)Landroid/icu/impl/duration/DurationFormatterFactory;
std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> android::icu::impl::duration::BasicDurationFormatterFactory::setLocale(std::shared_ptr<java::lang::String> localeName)
{
	
	//    .param p1, "localeName"    # Ljava/lang/String;
	if ( localeName->equals(this->localeName) )     
		goto label_cond_25;
	this->localeName = localeName;
	if ( !(this->builder) )  
		goto label_cond_16;
	this->builder = this->builder->withLocale(localeName);
label_cond_16:
	if ( !(this->formatter) )  
		goto label_cond_22;
	this->formatter = this->formatter->withLocale(localeName);
label_cond_22:
	this->reset();
label_cond_25:
	return this;

}
// .method public setPeriodBuilder(Landroid/icu/impl/duration/PeriodBuilder;)Landroid/icu/impl/duration/DurationFormatterFactory;
std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> android::icu::impl::duration::BasicDurationFormatterFactory::setPeriodBuilder(std::shared_ptr<android::icu::impl::duration::PeriodBuilder> builder)
{
	
	//    .param p1, "builder"    # Landroid/icu/impl/duration/PeriodBuilder;
	if ( builder == this->builder )
		goto label_cond_9;
	this->builder = builder;
	this->reset();
label_cond_9:
	return this;

}
// .method public setPeriodFormatter(Landroid/icu/impl/duration/PeriodFormatter;)Landroid/icu/impl/duration/DurationFormatterFactory;
std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> android::icu::impl::duration::BasicDurationFormatterFactory::setPeriodFormatter(std::shared_ptr<android::icu::impl::duration::PeriodFormatter> formatter)
{
	
	//    .param p1, "formatter"    # Landroid/icu/impl/duration/PeriodFormatter;
	if ( formatter == this->formatter )
		goto label_cond_9;
	this->formatter = formatter;
	this->reset();
label_cond_9:
	return this;

}
// .method public setTimeZone(Ljava/util/TimeZone;)Landroid/icu/impl/duration/DurationFormatterFactory;
std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> android::icu::impl::duration::BasicDurationFormatterFactory::setTimeZone(std::shared_ptr<java::util::TimeZone> timeZone)
{
	
	//    .param p1, "timeZone"    # Ljava/util/TimeZone;
	if ( timeZone->equals(this->timeZone) )     
		goto label_cond_19;
	this->timeZone = timeZone;
	if ( !(this->builder) )  
		goto label_cond_16;
	this->builder = this->builder->withTimeZone(timeZone);
label_cond_16:
	this->reset();
label_cond_19:
	return this;

}


