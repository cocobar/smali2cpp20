// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\FixedUnitBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory_S_Settings.h"
#include "android.icu.impl.duration.FixedUnitBuilder.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.PeriodBuilderImpl.h"
#include "android.icu.impl.duration.TimeUnit.h"

// .method constructor <init>(Landroid/icu/impl/duration/TimeUnit;Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;)V
android::icu::impl::duration::FixedUnitBuilder::FixedUnitBuilder(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settings)
{
	
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	//    .param p2, "settings"    # Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	android::icu::impl::duration::PeriodBuilderImpl::(settings);
	this->unit = unit;
	return;

}
// .method public static get(Landroid/icu/impl/duration/TimeUnit;Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;)Landroid/icu/impl/duration/FixedUnitBuilder;
std::shared_ptr<android::icu::impl::duration::FixedUnitBuilder> android::icu::impl::duration::FixedUnitBuilder::get(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settingsToUse)
{
	
	std::shared_ptr<android::icu::impl::duration::FixedUnitBuilder> cVar0;
	
	//    .param p0, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	//    .param p1, "settingsToUse"    # Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	if ( !(settingsToUse) )  
		goto label_cond_15;
	if ( !((settingsToUse->effectiveSet() &  (0x1 << unit->ordinal))) )  
		goto label_cond_15;
	cVar0 = std::make_shared<android::icu::impl::duration::FixedUnitBuilder>(unit, settingsToUse);
	return cVar0;
	// 059    .line 383
label_cond_15:
	return 0x0;

}
// .method protected handleCreate(JJZ)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::FixedUnitBuilder::handleCreate(long long duration,long long referenceDate,bool inPast)
{
	
	//    .param p1, "duration"    # J
	//    .param p3, "referenceDate"    # J
	//    .param p5, "inPast"    # Z
	if ( this->unit )     
		goto label_cond_6;
	return 0x0;
	// 083    .line 402
label_cond_6:
	//    .local v0, "unitDuration":J
	return android::icu::impl::duration::Period::at((float)(( (double)(duration) / (double)(this->approximateDurationOf(this->unit)))), this->unit)->inPast(inPast);

}
// .method protected withSettings(Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;)Landroid/icu/impl/duration/PeriodBuilder;
std::shared_ptr<android::icu::impl::duration::PeriodBuilder> android::icu::impl::duration::FixedUnitBuilder::withSettings(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settingsToUse)
{
	
	//    .param p1, "settingsToUse"    # Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	return android::icu::impl::duration::FixedUnitBuilder::get(this->unit, settingsToUse);

}


