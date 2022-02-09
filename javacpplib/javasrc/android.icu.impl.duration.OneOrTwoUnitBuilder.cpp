// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\OneOrTwoUnitBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory_S_Settings.h"
#include "android.icu.impl.duration.OneOrTwoUnitBuilder.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.PeriodBuilderImpl.h"
#include "android.icu.impl.duration.TimeUnit.h"

// .method constructor <init>(Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;)V
android::icu::impl::duration::OneOrTwoUnitBuilder::OneOrTwoUnitBuilder(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settings)
{
	
	//    .param p1, "settings"    # Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	android::icu::impl::duration::PeriodBuilderImpl::(settings);
	return;

}
// .method public static get(Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;)Landroid/icu/impl/duration/OneOrTwoUnitBuilder;
std::shared_ptr<android::icu::impl::duration::OneOrTwoUnitBuilder> android::icu::impl::duration::OneOrTwoUnitBuilder::get(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settings)
{
	
	std::shared_ptr<android::icu::impl::duration::OneOrTwoUnitBuilder> cVar0;
	
	//    .param p0, "settings"    # Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	if ( settings )     
		goto label_cond_4;
	return 0x0;
	// 032    .line 452
label_cond_4:
	cVar0 = std::make_shared<android::icu::impl::duration::OneOrTwoUnitBuilder>(settings);
	return cVar0;

}
// .method protected handleCreate(JJZ)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::OneOrTwoUnitBuilder::handleCreate(long long duration,long long referenceDate,bool inPast)
{
	
	std::shared_ptr<android::icu::impl::duration::Period> period;
	int i;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> unit;
	auto unitDuration;
	double count;
	auto period;
	long long duration;
	
	//    .param p1, "duration"    # J
	//    .param p3, "referenceDate"    # J
	//    .param p5, "inPast"    # Z
	period = 0x0;
	//    .local v5, "period":Landroid/icu/impl/duration/Period;
	//    .local v7, "uset":S
	i = 0x0;
	//    .end local v5    # "period":Landroid/icu/impl/duration/Period;
	//    .local v4, "i":I
label_goto_8:
	if ( i >= android::icu::impl::duration::TimeUnit::units->size() )
		goto label_cond_33;
	if ( !(((0x1 << i) &  this->settings->effectiveSet())) )  
		goto label_cond_42;
	unit = android::icu::impl::duration::TimeUnit::units[i];
	//    .local v6, "unit":Landroid/icu/impl/duration/TimeUnit;
	unitDuration = this->approximateDurationOf(unit);
	//    .local v8, "unitDuration":J
	if ( (duration > unitDuration) >= 0 )
		goto label_cond_20;
	if ( !(period) )  
		goto label_cond_42;
label_cond_20:
	count = ((double)(duration) /  (double)(unitDuration));
	//    .local v2, "count":D
	if ( period )     
		goto label_cond_45;
	if ( (count < 0x4000000000000000L) < 0 ) 
		goto label_cond_34;
	//    .end local v2    # "count":D
	//    .end local v6    # "unit":Landroid/icu/impl/duration/TimeUnit;
	//    .end local v8    # "unitDuration":J
label_cond_33:
label_goto_33:
	return period;
	// 138    .line 476
	// 139    .restart local v2    # "count":D
	// 140    .restart local v6    # "unit":Landroid/icu/impl/duration/TimeUnit;
	// 141    .restart local v8    # "unitDuration":J
label_cond_34:
	period = android::icu::impl::duration::Period::at(0x3f800000, unit)->inPast(inPast);
	//    .local v5, "period":Landroid/icu/impl/duration/Period;
	duration = (duration - unitDuration);
	//    .end local v2    # "count":D
	//    .end local v5    # "period":Landroid/icu/impl/duration/Period;
	//    .end local v6    # "unit":Landroid/icu/impl/duration/TimeUnit;
	//    .end local v8    # "unitDuration":J
label_cond_42:
	i = ( i + 0x1);
	goto label_goto_8;
	// 169    .line 479
	// 170    .restart local v2    # "count":D
	// 171    .restart local v6    # "unit":Landroid/icu/impl/duration/TimeUnit;
	// 172    .restart local v8    # "unitDuration":J
label_cond_45:
	if ( (count < 0x3ff0000000000000L) < 0 ) 
		goto label_cond_33;
	//    .restart local v5    # "period":Landroid/icu/impl/duration/Period;
	goto label_goto_33;

}
// .method protected withSettings(Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;)Landroid/icu/impl/duration/PeriodBuilder;
std::shared_ptr<android::icu::impl::duration::PeriodBuilder> android::icu::impl::duration::OneOrTwoUnitBuilder::withSettings(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settingsToUse)
{
	
	//    .param p1, "settingsToUse"    # Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	return android::icu::impl::duration::OneOrTwoUnitBuilder::get(settingsToUse);

}


