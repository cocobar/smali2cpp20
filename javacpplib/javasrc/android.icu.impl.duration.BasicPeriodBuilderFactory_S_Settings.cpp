// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicPeriodBuilderFactory$Settings.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory_S_Settings.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "android.icu.impl.duration.impl.PeriodFormatterData.h"
#include "android.icu.impl.duration.impl.PeriodFormatterDataService.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"

// .method constructor <init>(Landroid/icu/impl/duration/BasicPeriodBuilderFactory;)V
android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings::BasicPeriodBuilderFactory_S_Settings(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory> this_S_0)
{
	
	bool cVar0;
	
	//    .param p1, "this$0"    # Landroid/icu/impl/duration/BasicPeriodBuilderFactory;
	cVar0 = 0x1;
	this->this_S_0 = this_S_0;
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->uset = 0xff;
	this->maxUnit = android::icu::impl::duration::TimeUnit::YEAR;
	this->minUnit = android::icu::impl::duration::TimeUnit::MILLISECOND;
	this->allowZero = cVar0;
	this->allowMillis = cVar0;
	return;

}
// .method public copy()Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings::copy()
{
	
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> result;
	
	result = std::make_shared<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings>(this->this_S_0);
	//    .local v0, "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	result->inUse = this->inUse;
	result->uset = this->uset;
	result->maxUnit = this->maxUnit;
	result->minUnit = this->minUnit;
	result->maxLimit = this->maxLimit;
	result->minLimit = this->minLimit;
	result->allowZero = this->allowZero;
	result->weeksAloneOnly = this->weeksAloneOnly;
	result->allowMillis = this->allowMillis;
	return result;

}
// .method createLimited(JZ)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings::createLimited(long long duration,bool inPast)
{
	
	std::shared_ptr<android::icu::impl::duration::TimeUnit> emu;
	auto emud;
	long long eml;
	
	//    .param p1, "duration"    # J
	//    .param p3, "inPast"    # Z
	if ( this->maxLimit <= 0 )
		goto label_cond_33;
	//    .local v8, "maxUnitDuration":J
	if ( ((0x3e8 * duration) > ((long long)(this->maxLimit) *  android::icu::impl::duration::BasicPeriodBuilderFactory::approximateDurationOf(this->maxUnit))) <= 0 )
		goto label_cond_33;
	return android::icu::impl::duration::Period::moreThan(( (float)(this->maxLimit) / 0x447a0000), this->maxUnit)->inPast(inPast);
	// 207    .line 170
	// 208    .end local v8    # "maxUnitDuration":J
label_cond_33:
	if ( this->minLimit <= 0 )
		goto label_cond_7b;
	emu = this->effectiveMinUnit();
	//    .local v4, "emu":Landroid/icu/impl/duration/TimeUnit;
	emud = android::icu::impl::duration::BasicPeriodBuilderFactory::approximateDurationOf(emu);
	//    .local v6, "emud":J
	if ( emu != this->minUnit )
		goto label_cond_65;
	eml = (long long)(this->minLimit);
	//    .local v2, "eml":J
label_goto_4c:
	if ( ((0x3e8 * duration) > (eml * emud)) >= 0 )
		goto label_cond_7b;
	return android::icu::impl::duration::Period::lessThan(( (float)(eml) / 0x447a0000), emu)->inPast(inPast);
	// 273    .line 174
	// 274    .end local v2    # "eml":J
label_cond_65:
	//    .restart local v2    # "eml":J
	goto label_goto_4c;
	// 303    .line 179
	// 304    .end local v2    # "eml":J
	// 305    .end local v4    # "emu":Landroid/icu/impl/duration/TimeUnit;
	// 306    .end local v6    # "emud":J
label_cond_7b:
	return 0x0;

}
// .method effectiveMinUnit()Landroid/icu/impl/duration/TimeUnit;
std::shared_ptr<android::icu::impl::duration::TimeUnit> android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings::effectiveMinUnit()
{
	
	int i;
	
	if ( this->allowMillis )     
		goto label_cond_a;
	if ( this->minUnit == android::icu::impl::duration::TimeUnit::MILLISECOND )
		goto label_cond_d;
label_cond_a:
	return this->minUnit;
	// 334    .line 94
label_cond_d:
	//    .local v0, "i":I
label_cond_12:
	i = ( i + -0x1);
	if ( i < 0 ) 
		goto label_cond_22;
	if ( !((this->uset &  (0x1 << i))) )  
		goto label_cond_12;
	return android::icu::impl::duration::TimeUnit::units[i];
	// 366    .line 99
label_cond_22:
	return android::icu::impl::duration::TimeUnit::SECOND;

}
// .method effectiveSet()S
short android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings::effectiveSet()
{
	
	if ( !(this->allowMillis) )  
		goto label_cond_7;
	return this->uset;
	// 387    .line 86
label_cond_7:
	return (short)((this->uset &  (~(0x1 << android::icu::impl::duration::TimeUnit::MILLISECOND->ordinal))));

}
// .method setAllowMilliseconds(Z)Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings::setAllowMilliseconds(bool allowMillis)
{
	
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> result;
	
	//    .param p1, "allowMillis"    # Z
	if ( this->allowMillis != allowMillis )
		goto label_cond_5;
	return this;
	// 421    .line 144
label_cond_5:
	if ( !(this->inUse) )  
		goto label_cond_10;
	result = this->copy();
	//    .local v0, "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
label_goto_d:
	result->allowMillis = allowMillis;
	return result;
	// 439    .line 144
	// 440    .end local v0    # "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
label_cond_10:
	result = this;
	//    .restart local v0    # "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	goto label_goto_d;

}
// .method setAllowZero(Z)Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings::setAllowZero(bool allow)
{
	
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> result;
	
	//    .param p1, "allow"    # Z
	if ( this->allowZero != allow )
		goto label_cond_5;
	return this;
	// 461    .line 126
label_cond_5:
	if ( !(this->inUse) )  
		goto label_cond_10;
	result = this->copy();
	//    .local v0, "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
label_goto_d:
	result->allowZero = allow;
	return result;
	// 479    .line 126
	// 480    .end local v0    # "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
label_cond_10:
	result = this;
	//    .restart local v0    # "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	goto label_goto_d;

}
// .method setInUse()Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings::setInUse()
{
	
	this->inUse = 0x1;
	return this;

}
// .method setLocale(Ljava/lang/String;)Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings::setLocale(std::shared_ptr<java::lang::String> localeName)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterData> data;
	
	//    .param p1, "localeName"    # Ljava/lang/String;
	cVar0 = 0x1;
	data = android::icu::impl::duration::BasicPeriodBuilderFactory::-get0(this->this_S_0)->get(localeName);
	//    .local v0, "data":Landroid/icu/impl/duration/impl/PeriodFormatterData;
	if ( data->useMilliseconds() == cVar0 )
		goto label_cond_26;
label_goto_21:
	return this->setAllowZero(data->allowZero())->setWeeksAloneOnly(data->weeksAloneOnly())->setAllowMilliseconds(cVar0);
	// 555    .line 154
label_cond_26:
	cVar0 = 0x0;
	goto label_goto_21;

}
// .method setMaxLimit(F)Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings::setMaxLimit(float maxLimit)
{
	
	int val;
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> result;
	
	//    .param p1, "maxLimit"    # F
	if ( (maxLimit > 0x0) > 0 ) 
		goto label_cond_c;
	val = 0x0;
	//    .local v1, "val":I
label_goto_6:
	if ( (maxLimit < (float)(val)) )     
		goto label_cond_11;
	return this;
	// 588    .line 103
	// 589    .end local v1    # "val":I
label_cond_c:
	val = (int)(( 0x447a0000 * maxLimit));
	//    .restart local v1    # "val":I
	goto label_goto_6;
	// 600    .line 107
label_cond_11:
	if ( !(this->inUse) )  
		goto label_cond_1c;
	result = this->copy();
	//    .local v0, "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
label_goto_19:
	result->maxLimit = val;
	return result;
	// 618    .line 107
	// 619    .end local v0    # "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
label_cond_1c:
	result = this;
	//    .restart local v0    # "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	goto label_goto_19;

}
// .method setMinLimit(F)Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings::setMinLimit(float minLimit)
{
	
	int val;
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> result;
	
	//    .param p1, "minLimit"    # F
	if ( (minLimit > 0x0) > 0 ) 
		goto label_cond_c;
	val = 0x0;
	//    .local v1, "val":I
label_goto_6:
	if ( (minLimit < (float)(val)) )     
		goto label_cond_11;
	return this;
	// 653    .line 113
	// 654    .end local v1    # "val":I
label_cond_c:
	val = (int)(( 0x447a0000 * minLimit));
	//    .restart local v1    # "val":I
	goto label_goto_6;
	// 665    .line 117
label_cond_11:
	if ( !(this->inUse) )  
		goto label_cond_1c;
	result = this->copy();
	//    .local v0, "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
label_goto_19:
	result->minLimit = val;
	return result;
	// 683    .line 117
	// 684    .end local v0    # "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
label_cond_1c:
	result = this;
	//    .restart local v0    # "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	goto label_goto_19;

}
// .method setUnits(I)Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings::setUnits(int uset)
{
	
	short cVar0;
	int cVar1;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> cVar2;
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> result;
	int lastUnit;
	int i;
	
	//    .param p1, "uset"    # I
	cVar0 = 0xff;
	cVar1 = -0x1;
	cVar2 = 0x0;
	if ( this->uset != uset )
		goto label_cond_9;
	return this;
	// 711    .line 53
label_cond_9:
	if ( !(this->inUse) )  
		goto label_cond_23;
	result = this->copy();
	//    .local v2, "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
label_goto_11:
	result->uset = (short)(uset);
	if ( ( uset & 0xff) != cVar0 )
		goto label_cond_25;
	result->uset = cVar0;
	result->maxUnit = android::icu::impl::duration::TimeUnit::YEAR;
	result->minUnit = android::icu::impl::duration::TimeUnit::MILLISECOND;
label_goto_22:
	return result;
	// 750    .line 53
	// 751    .end local v2    # "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
label_cond_23:
	result = this;
	//    .restart local v2    # "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	goto label_goto_11;
	// 758    .line 62
label_cond_25:
	lastUnit = -0x1;
	//    .local v1, "lastUnit":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_27:
	if ( i >= android::icu::impl::duration::TimeUnit::units->size() )
		goto label_cond_3d;
	if ( !(((0x1 << i) &  uset)) )  
		goto label_cond_3a;
	if ( lastUnit != cVar1 )
		goto label_cond_39;
	result->maxUnit = android::icu::impl::duration::TimeUnit::units[i];
label_cond_39:
	lastUnit = i;
label_cond_3a:
	i = ( i + 0x1);
	goto label_goto_27;
	// 803    .line 71
label_cond_3d:
	if ( lastUnit != cVar1 )
		goto label_cond_44;
	result->maxUnit = cVar2;
	result->minUnit = cVar2;
	goto label_goto_22;
	// 814    .line 75
label_cond_44:
	result->minUnit = android::icu::impl::duration::TimeUnit::units[lastUnit];
	goto label_goto_22;

}
// .method setWeeksAloneOnly(Z)Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings::setWeeksAloneOnly(bool weeksAlone)
{
	
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> result;
	
	//    .param p1, "weeksAlone"    # Z
	if ( this->weeksAloneOnly != weeksAlone )
		goto label_cond_5;
	return this;
	// 838    .line 135
label_cond_5:
	if ( !(this->inUse) )  
		goto label_cond_10;
	result = this->copy();
	//    .local v0, "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
label_goto_d:
	result->weeksAloneOnly = weeksAlone;
	return result;
	// 856    .line 135
	// 857    .end local v0    # "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
label_cond_10:
	result = this;
	//    .restart local v0    # "result":Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
	goto label_goto_d;

}


