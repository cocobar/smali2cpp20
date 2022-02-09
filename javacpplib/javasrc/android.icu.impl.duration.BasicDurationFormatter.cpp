// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicDurationFormatter.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicDurationFormatter.h"
#include "android.icu.impl.duration.DateFormatter.h"
#include "android.icu.impl.duration.DurationFormatter.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.PeriodFormatter.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.Date.h"
#include "java.util.TimeZone.h"

// .method public constructor <init>(Landroid/icu/impl/duration/PeriodFormatter;Landroid/icu/impl/duration/PeriodBuilder;Landroid/icu/impl/duration/DateFormatter;J)V
android::icu::impl::duration::BasicDurationFormatter::BasicDurationFormatter(std::shared_ptr<android::icu::impl::duration::PeriodFormatter> formatter,std::shared_ptr<android::icu::impl::duration::PeriodBuilder> builder,std::shared_ptr<android::icu::impl::duration::DateFormatter> fallback,long long cVar1)
{
	
	long long cVar0;
	long long cVar1;
	
	//    .param p1, "formatter"    # Landroid/icu/impl/duration/PeriodFormatter;
	//    .param p2, "builder"    # Landroid/icu/impl/duration/PeriodBuilder;
	//    .param p3, "fallback"    # Landroid/icu/impl/duration/DateFormatter;
	//    .param p4, "fallbackLimit"    # J
	cVar0 = 0x0;
	// 035    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->formatter = formatter;
	this->builder = builder;
	this->fallback = fallback;
	if ( (cVar1 > cVar0) >= 0 )
		goto label_cond_10;
	cVar1 = cVar0;
	//    .end local p4    # "fallbackLimit":J
label_cond_10:
	this->fallbackLimit = cVar1;
	return;

}
// .method protected constructor <init>(Landroid/icu/impl/duration/PeriodFormatter;Landroid/icu/impl/duration/PeriodBuilder;Landroid/icu/impl/duration/DateFormatter;JLjava/lang/String;Ljava/util/TimeZone;)V
android::icu::impl::duration::BasicDurationFormatter::BasicDurationFormatter(std::shared_ptr<android::icu::impl::duration::PeriodFormatter> formatter,std::shared_ptr<android::icu::impl::duration::PeriodBuilder> builder,std::shared_ptr<android::icu::impl::duration::DateFormatter> fallback,long long fallbackLimit,std::shared_ptr<java::lang::String> localeName,std::shared_ptr<java::util::TimeZone> timeZone)
{
	
	//    .param p1, "formatter"    # Landroid/icu/impl/duration/PeriodFormatter;
	//    .param p2, "builder"    # Landroid/icu/impl/duration/PeriodBuilder;
	//    .param p3, "fallback"    # Landroid/icu/impl/duration/DateFormatter;
	//    .param p4, "fallbackLimit"    # J
	//    .param p6, "localeName"    # Ljava/lang/String;
	//    .param p7, "timeZone"    # Ljava/util/TimeZone;
	// 072    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->formatter = formatter;
	this->builder = builder;
	this->fallback = fallback;
	this->fallbackLimit = fallbackLimit;
	this->localeName = localeName;
	this->timeZone = timeZone;
	return;

}
// .method protected doBuild(JJ)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::BasicDurationFormatter::doBuild(long long duration,long long referenceDate)
{
	
	//    .param p1, "duration"    # J
	//    .param p3, "referenceDate"    # J
	return this->builder->createWithReferenceDate(duration, referenceDate);

}
// .method protected doFallback(JJ)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::BasicDurationFormatter::doFallback(long long duration,long long referenceDate)
{
	
	//    .param p1, "duration"    # J
	//    .param p3, "referenceDate"    # J
	if ( !(this->fallback) )  
		goto label_cond_20;
	if ( (this->fallbackLimit > 0x0) <= 0 )
		goto label_cond_20;
	if ( (java::lang::Math::abs(duration) > this->fallbackLimit) < 0 ) 
		goto label_cond_20;
	return this->fallback->format((referenceDate + duration));
	// 158    .line 113
label_cond_20:
	return 0x0;

}
// .method protected doFormat(Landroid/icu/impl/duration/Period;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::BasicDurationFormatter::doFormat(std::shared_ptr<android::icu::impl::duration::Period> period)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "period"    # Landroid/icu/impl/duration/Period;
	if ( period->isSet() )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("period is not set")));
	// throw
	throw cVar0;
	// 184    .line 124
label_cond_f:
	return this->formatter->format(period);

}
// .method public formatDurationFrom(JJ)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::BasicDurationFormatter::formatDurationFrom(long long duration,long long referenceDate)
{
	
	std::shared_ptr<java::lang::String> s;
	
	//    .param p1, "duration"    # J
	//    .param p3, "referenceDate"    # J
	s = this->doFallback(duration, referenceDate);
	//    .local v1, "s":Ljava/lang/String;
	if ( s )     
		goto label_cond_e;
	//    .local v0, "p":Landroid/icu/impl/duration/Period;
	//    .end local v0    # "p":Landroid/icu/impl/duration/Period;
label_cond_e:
	return s;

}
// .method public formatDurationFromNow(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::BasicDurationFormatter::formatDurationFromNow(long long duration)
{
	
	//    .param p1, "duration"    # J
	return this->formatDurationFrom(duration, java::lang::System::currentTimeMillis({const[class].FS-Param}));

}
// .method public formatDurationFromNowTo(Ljava/util/Date;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::BasicDurationFormatter::formatDurationFromNowTo(std::shared_ptr<java::util::Date> targetDate)
{
	
	long long now;
	
	//    .param p1, "targetDate"    # Ljava/util/Date;
	now = java::lang::System::currentTimeMillis({const[class].FS-Param});
	//    .local v2, "now":J
	//    .local v0, "duration":J
	return this->formatDurationFrom((targetDate->getTime() - now), now);

}
// .method public withLocale(Ljava/lang/String;)Landroid/icu/impl/duration/DurationFormatter;
std::shared_ptr<android::icu::impl::duration::DurationFormatter> android::icu::impl::duration::BasicDurationFormatter::withLocale(std::shared_ptr<java::lang::String> locName)
{
	
	std::shared_ptr<android::icu::impl::duration::DateFormatter> cVar0;
	std::shared_ptr<android::icu::impl::duration::BasicDurationFormatter> cVar1;
	
	//    .param p1, "locName"    # Ljava/lang/String;
	if ( locName->equals(this->localeName) )     
		goto label_cond_2b;
	//    .local v1, "newFormatter":Landroid/icu/impl/duration/PeriodFormatter;
	//    .local v2, "newBuilder":Landroid/icu/impl/duration/PeriodBuilder;
	if ( this->fallback )     
		goto label_cond_24;
	cVar0 = 0x0;
label_goto_19:
	cVar1 = std::make_shared<android::icu::impl::duration::BasicDurationFormatter>(this->formatter->withLocale(locName), this->builder->withLocale(locName), cVar0, this->fallbackLimit, locName, this->timeZone);
	return cVar1;
	// 326    .line 85
label_cond_24:
	cVar0 = this->fallback->withLocale(locName);
	//    .local v3, "newFallback":Landroid/icu/impl/duration/DateFormatter;
	goto label_goto_19;
	// 337    .line 90
	// 338    .end local v1    # "newFormatter":Landroid/icu/impl/duration/PeriodFormatter;
	// 339    .end local v2    # "newBuilder":Landroid/icu/impl/duration/PeriodBuilder;
	// 340    .end local v3    # "newFallback":Landroid/icu/impl/duration/DateFormatter;
label_cond_2b:
	return this;

}
// .method public withTimeZone(Ljava/util/TimeZone;)Landroid/icu/impl/duration/DurationFormatter;
std::shared_ptr<android::icu::impl::duration::DurationFormatter> android::icu::impl::duration::BasicDurationFormatter::withTimeZone(std::shared_ptr<java::util::TimeZone> tz)
{
	
	std::shared_ptr<android::icu::impl::duration::DateFormatter> cVar0;
	std::shared_ptr<android::icu::impl::duration::BasicDurationFormatter> cVar1;
	
	//    .param p1, "tz"    # Ljava/util/TimeZone;
	if ( tz->equals(this->timeZone) )     
		goto label_cond_27;
	//    .local v2, "newBuilder":Landroid/icu/impl/duration/PeriodBuilder;
	if ( this->fallback )     
		goto label_cond_20;
	cVar0 = 0x0;
label_goto_13:
	cVar1 = std::make_shared<android::icu::impl::duration::BasicDurationFormatter>(this->formatter, this->builder->withTimeZone(tz), cVar0, this->fallbackLimit, this->localeName, tz);
	return cVar1;
	// 394    .line 99
label_cond_20:
	cVar0 = this->fallback->withTimeZone(tz);
	//    .local v3, "newFallback":Landroid/icu/impl/duration/DateFormatter;
	goto label_goto_13;
	// 405    .line 104
	// 406    .end local v2    # "newBuilder":Landroid/icu/impl/duration/PeriodBuilder;
	// 407    .end local v3    # "newFallback":Landroid/icu/impl/duration/DateFormatter;
label_cond_27:
	return this;

}


