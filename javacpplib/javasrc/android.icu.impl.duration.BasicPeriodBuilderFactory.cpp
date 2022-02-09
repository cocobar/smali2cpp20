// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicPeriodBuilderFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory_S_Settings.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory.h"
#include "android.icu.impl.duration.FixedUnitBuilder.h"
#include "android.icu.impl.duration.MultiUnitBuilder.h"
#include "android.icu.impl.duration.OneOrTwoUnitBuilder.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.PeriodBuilderFactory.h"
#include "android.icu.impl.duration.SingleUnitBuilder.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "android.icu.impl.duration.impl.PeriodFormatterDataService.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.TimeZone.h"

static android::icu::impl::duration::BasicPeriodBuilderFactory::allBits = 0xffs;
// .method static synthetic -get0(Landroid/icu/impl/duration/BasicPeriodBuilderFactory;)Landroid/icu/impl/duration/impl/PeriodFormatterDataService;
std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterDataService> android::icu::impl::duration::BasicPeriodBuilderFactory::_get0(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/duration/BasicPeriodBuilderFactory;
	return _this->ds;

}
// .method constructor <init>(Landroid/icu/impl/duration/impl/PeriodFormatterDataService;)V
android::icu::impl::duration::BasicPeriodBuilderFactory::BasicPeriodBuilderFactory(std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterDataService> ds)
{
	
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> cVar0;
	
	//    .param p1, "ds"    # Landroid/icu/impl/duration/impl/PeriodFormatterDataService;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->ds = ds;
	cVar0 = std::make_shared<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings>(this);
	this->settings = cVar0;
	return;

}
// .method static approximateDurationOf(Landroid/icu/impl/duration/TimeUnit;)J
long long android::icu::impl::duration::BasicPeriodBuilderFactory::approximateDurationOf(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit)
{
	
	//    .param p0, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	return android::icu::impl::duration::TimeUnit::approxDurations[unit->ordinal];

}
// .method private getSettings()Landroid/icu/impl/duration/BasicPeriodBuilderFactory$Settings;
std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> android::icu::impl::duration::BasicPeriodBuilderFactory::getSettings()
{
	
	if ( this->settings->effectiveSet() )     
		goto label_cond_a;
	return 0x0;
	// 093    .line 270
label_cond_a:
	return this->settings->setInUse();

}
// .method public getFixedUnitBuilder(Landroid/icu/impl/duration/TimeUnit;)Landroid/icu/impl/duration/PeriodBuilder;
std::shared_ptr<android::icu::impl::duration::PeriodBuilder> android::icu::impl::duration::BasicPeriodBuilderFactory::getFixedUnitBuilder(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit)
{
	
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	return android::icu::impl::duration::FixedUnitBuilder::get(unit, this->getSettings());

}
// .method public getMultiUnitBuilder(I)Landroid/icu/impl/duration/PeriodBuilder;
std::shared_ptr<android::icu::impl::duration::PeriodBuilder> android::icu::impl::duration::BasicPeriodBuilderFactory::getMultiUnitBuilder(int periodCount)
{
	
	//    .param p1, "periodCount"    # I
	return android::icu::impl::duration::MultiUnitBuilder::get(periodCount, this->getSettings());

}
// .method public getOneOrTwoUnitBuilder()Landroid/icu/impl/duration/PeriodBuilder;
std::shared_ptr<android::icu::impl::duration::PeriodBuilder> android::icu::impl::duration::BasicPeriodBuilderFactory::getOneOrTwoUnitBuilder()
{
	
	return android::icu::impl::duration::OneOrTwoUnitBuilder::get(this->getSettings());

}
// .method public getSingleUnitBuilder()Landroid/icu/impl/duration/PeriodBuilder;
std::shared_ptr<android::icu::impl::duration::PeriodBuilder> android::icu::impl::duration::BasicPeriodBuilderFactory::getSingleUnitBuilder()
{
	
	return android::icu::impl::duration::SingleUnitBuilder::get(this->getSettings());

}
// .method public setAllowMilliseconds(Z)Landroid/icu/impl/duration/PeriodBuilderFactory;
std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> android::icu::impl::duration::BasicPeriodBuilderFactory::setAllowMilliseconds(bool allow)
{
	
	//    .param p1, "allow"    # Z
	this->settings = this->settings->setAllowMilliseconds(allow);
	return this;

}
// .method public setAllowZero(Z)Landroid/icu/impl/duration/PeriodBuilderFactory;
std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> android::icu::impl::duration::BasicPeriodBuilderFactory::setAllowZero(bool allow)
{
	
	//    .param p1, "allow"    # Z
	this->settings = this->settings->setAllowZero(allow);
	return this;

}
// .method public setAvailableUnitRange(Landroid/icu/impl/duration/TimeUnit;Landroid/icu/impl/duration/TimeUnit;)Landroid/icu/impl/duration/PeriodBuilderFactory;
std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> android::icu::impl::duration::BasicPeriodBuilderFactory::setAvailableUnitRange(std::shared_ptr<android::icu::impl::duration::TimeUnit> minUnit,std::shared_ptr<android::icu::impl::duration::TimeUnit> maxUnit)
{
	
	int uset;
	unsigned char i;
	int i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "minUnit"    # Landroid/icu/impl/duration/TimeUnit;
	//    .param p2, "maxUnit"    # Landroid/icu/impl/duration/TimeUnit;
	uset = 0x0;
	//    .local v1, "uset":I
	i = maxUnit->ordinal;
	//    .local v0, "i":I
label_goto_3:
	if ( i >  minUnit->ordinal )
		goto label_cond_d;
	uset = (uset |  (0x1 << i));
	i = ( i + 0x1);
	goto label_goto_3;
	// 239    .line 204
label_cond_d:
	if ( uset )     
		goto label_cond_3b;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("range ")))->append(minUnit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" to ")))->append(maxUnit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" is empty")))->toString());
	// throw
	throw cVar0;
	// 284    .line 207
label_cond_3b:
	this->settings = this->settings->setUnits(uset);
	return this;

}
// .method public setLocale(Ljava/lang/String;)Landroid/icu/impl/duration/PeriodBuilderFactory;
std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> android::icu::impl::duration::BasicPeriodBuilderFactory::setLocale(std::shared_ptr<java::lang::String> localeName)
{
	
	//    .param p1, "localeName"    # Ljava/lang/String;
	this->settings = this->settings->setLocale(localeName);
	return this;

}
// .method public setMaxLimit(F)Landroid/icu/impl/duration/PeriodBuilderFactory;
std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> android::icu::impl::duration::BasicPeriodBuilderFactory::setMaxLimit(float maxLimit)
{
	
	//    .param p1, "maxLimit"    # F
	this->settings = this->settings->setMaxLimit(maxLimit);
	return this;

}
// .method public setMinLimit(F)Landroid/icu/impl/duration/PeriodBuilderFactory;
std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> android::icu::impl::duration::BasicPeriodBuilderFactory::setMinLimit(float minLimit)
{
	
	//    .param p1, "minLimit"    # F
	this->settings = this->settings->setMinLimit(minLimit);
	return this;

}
// .method public setTimeZone(Ljava/util/TimeZone;)Landroid/icu/impl/duration/PeriodBuilderFactory;
std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> android::icu::impl::duration::BasicPeriodBuilderFactory::setTimeZone(std::shared_ptr<java::util::TimeZone> timeZone)
{
	
	//    .param p1, "timeZone"    # Ljava/util/TimeZone;
	return this;

}
// .method public setUnitIsAvailable(Landroid/icu/impl/duration/TimeUnit;Z)Landroid/icu/impl/duration/PeriodBuilderFactory;
std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> android::icu::impl::duration::BasicPeriodBuilderFactory::setUnitIsAvailable(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,bool available)
{
	
	int cVar0;
	short uset;
	int uset;
	
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	//    .param p2, "available"    # Z
	cVar0 = 0x1;
	uset = this->settings->uset;
	//    .local v0, "uset":I
	if ( !(available) )  
		goto label_cond_15;
	uset = (uset |  (cVar0 << unit->ordinal));
label_goto_c:
	this->settings = this->settings->setUnits(uset);
	return this;
	// 398    .line 218
label_cond_15:
	uset = (uset &  (~(cVar0 << unit->ordinal)));
	goto label_goto_c;

}
// .method public setWeeksAloneOnly(Z)Landroid/icu/impl/duration/PeriodBuilderFactory;
std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> android::icu::impl::duration::BasicPeriodBuilderFactory::setWeeksAloneOnly(bool aloneOnly)
{
	
	//    .param p1, "aloneOnly"    # Z
	this->settings = this->settings->setWeeksAloneOnly(aloneOnly);
	return this;

}


