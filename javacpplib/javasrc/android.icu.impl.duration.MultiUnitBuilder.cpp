// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\MultiUnitBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory_S_Settings.h"
#include "android.icu.impl.duration.MultiUnitBuilder.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.PeriodBuilderImpl.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "java.lang.Math.h"

// .method constructor <init>(ILandroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;)V
android::icu::impl::duration::MultiUnitBuilder::MultiUnitBuilder(int nPeriods,std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settings)
{
	
	//    .param p1, "nPeriods"    # I
	//    .param p2, "settings"    # Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	android::icu::impl::duration::PeriodBuilderImpl::(settings);
	this->nPeriods = nPeriods;
	return;

}
// .method public static get(ILandroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;)Landroid/icu/impl/duration/MultiUnitBuilder;
std::shared_ptr<android::icu::impl::duration::MultiUnitBuilder> android::icu::impl::duration::MultiUnitBuilder::get(int nPeriods,std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settings)
{
	
	std::shared_ptr<android::icu::impl::duration::MultiUnitBuilder> cVar0;
	
	//    .param p0, "nPeriods"    # I
	//    .param p1, "settings"    # Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	if ( nPeriods <= 0 )
		goto label_cond_b;
	if ( !(settings) )  
		goto label_cond_b;
	cVar0 = std::make_shared<android::icu::impl::duration::MultiUnitBuilder>(nPeriods, settings);
	return cVar0;
	// 047    .line 503
label_cond_b:
	return 0x0;

}
// .method protected handleCreate(JJZ)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::MultiUnitBuilder::handleCreate(long long duration,long long referenceDate,bool inPast)
{
	
	std::shared_ptr<android::icu::impl::duration::Period> period;
	int n;
	int i;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> unit;
	auto unitDuration;
	double count;
	auto count;
	long long duration;
	auto period;
	
	//    .param p1, "duration"    # J
	//    .param p3, "referenceDate"    # J
	//    .param p5, "inPast"    # Z
	period = 0x0;
	//    .local v6, "period":Landroid/icu/impl/duration/Period;
	n = 0x0;
	//    .local v5, "n":I
	//    .local v10, "uset":S
	i = 0x0;
	//    .end local v6    # "period":Landroid/icu/impl/duration/Period;
	//    .local v4, "i":I
label_goto_b:
	if ( i >= android::icu::impl::duration::TimeUnit::units->size() )
		goto label_cond_1f;
	if ( !(((0x1 << i) &  this->settings->effectiveSet())) )  
		goto label_cond_50;
	unit = android::icu::impl::duration::TimeUnit::units[i];
	//    .local v7, "unit":Landroid/icu/impl/duration/TimeUnit;
	if ( n != this->nPeriods )
		goto label_cond_20;
	//    .end local v7    # "unit":Landroid/icu/impl/duration/TimeUnit;
label_cond_1f:
	return period;
	// 118    .line 523
	// 119    .restart local v7    # "unit":Landroid/icu/impl/duration/TimeUnit;
label_cond_20:
	unitDuration = this->approximateDurationOf(unit);
	//    .local v8, "unitDuration":J
	if ( (duration > unitDuration) >= 0 )
		goto label_cond_2c;
	if ( n <= 0 )
		goto label_cond_50;
label_cond_2c:
	n = ( n + 0x1);
	count = ((double)(duration) /  (double)(unitDuration));
	//    .local v2, "count":D
	if ( n >= this->nPeriods )
		goto label_cond_43;
	count = java::lang::Math::floor(count);
	duration = (duration - (long long)(( (double)(unitDuration) * count)));
label_cond_43:
	if ( period )     
		goto label_cond_53;
	period = android::icu::impl::duration::Period::at((float)(count), unit)->inPast(inPast);
	//    .end local v2    # "count":D
	//    .end local v7    # "unit":Landroid/icu/impl/duration/TimeUnit;
	//    .end local v8    # "unitDuration":J
label_cond_50:
label_goto_50:
	i = ( i + 0x1);
	goto label_goto_b;
	// 197    .line 534
	// 198    .restart local v2    # "count":D
	// 199    .restart local v7    # "unit":Landroid/icu/impl/duration/TimeUnit;
	// 200    .restart local v8    # "unitDuration":J
label_cond_53:
	period = period->and((float)(count), unit);
	//    .local v6, "period":Landroid/icu/impl/duration/Period;
	goto label_goto_50;

}
// .method protected withSettings(Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;)Landroid/icu/impl/duration/PeriodBuilder;
std::shared_ptr<android::icu::impl::duration::PeriodBuilder> android::icu::impl::duration::MultiUnitBuilder::withSettings(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settingsToUse)
{
	
	//    .param p1, "settingsToUse"    # Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	return android::icu::impl::duration::MultiUnitBuilder::get(this->nPeriods, settingsToUse);

}


