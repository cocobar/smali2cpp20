// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\SingleUnitBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory_S_Settings.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.PeriodBuilderImpl.h"
#include "android.icu.impl.duration.SingleUnitBuilder.h"
#include "android.icu.impl.duration.TimeUnit.h"

// .method constructor <init>(Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;)V
android::icu::impl::duration::SingleUnitBuilder::SingleUnitBuilder(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settings)
{
	
	//    .param p1, "settings"    # Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	android::icu::impl::duration::PeriodBuilderImpl::(settings);
	return;

}
// .method public static get(Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;)Landroid/icu/impl/duration/SingleUnitBuilder;
std::shared_ptr<android::icu::impl::duration::SingleUnitBuilder> android::icu::impl::duration::SingleUnitBuilder::get(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settings)
{
	
	std::shared_ptr<android::icu::impl::duration::SingleUnitBuilder> cVar0;
	
	//    .param p0, "settings"    # Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	if ( settings )     
		goto label_cond_4;
	return 0x0;
	// 032    .line 417
label_cond_4:
	cVar0 = std::make_shared<android::icu::impl::duration::SingleUnitBuilder>(settings);
	return cVar0;

}
// .method protected handleCreate(JJZ)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::SingleUnitBuilder::handleCreate(long long duration,long long referenceDate,bool inPast)
{
	
	int i;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> unit;
	auto unitDuration;
	
	//    .param p1, "duration"    # J
	//    .param p3, "referenceDate"    # J
	//    .param p5, "inPast"    # Z
	//    .local v6, "uset":S
	i = 0x0;
	//    .local v2, "i":I
label_goto_7:
	if ( i >= android::icu::impl::duration::TimeUnit::units->size() )
		goto label_cond_2f;
	if ( !(((0x1 << i) &  this->settings->effectiveSet())) )  
		goto label_cond_2c;
	unit = android::icu::impl::duration::TimeUnit::units[i];
	//    .local v3, "unit":Landroid/icu/impl/duration/TimeUnit;
	unitDuration = this->approximateDurationOf(unit);
	//    .local v4, "unitDuration":J
	if ( (duration > unitDuration) < 0 ) 
		goto label_cond_2c;
	return android::icu::impl::duration::Period::at((float)(( (double)(duration) / (double)(unitDuration))), unit)->inPast(inPast);
	// 116    .line 429
	// 117    .end local v3    # "unit":Landroid/icu/impl/duration/TimeUnit;
	// 118    .end local v4    # "unitDuration":J
label_cond_2c:
	i = ( i + 0x1);
	goto label_goto_7;
	// 124    .line 439
label_cond_2f:
	return 0x0;

}
// .method protected withSettings(Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;)Landroid/icu/impl/duration/PeriodBuilder;
std::shared_ptr<android::icu::impl::duration::PeriodBuilder> android::icu::impl::duration::SingleUnitBuilder::withSettings(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settingsToUse)
{
	
	//    .param p1, "settingsToUse"    # Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	return android::icu::impl::duration::SingleUnitBuilder::get(settingsToUse);

}


