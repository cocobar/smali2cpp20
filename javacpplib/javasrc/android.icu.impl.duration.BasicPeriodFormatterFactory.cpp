// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicPeriodFormatterFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodFormatter.h"
#include "android.icu.impl.duration.BasicPeriodFormatterFactory_S_Customizations.h"
#include "android.icu.impl.duration.BasicPeriodFormatterFactory.h"
#include "android.icu.impl.duration.BasicPeriodFormatterService.h"
#include "android.icu.impl.duration.PeriodFormatter.h"
#include "android.icu.impl.duration.PeriodFormatterFactory.h"
#include "android.icu.impl.duration.impl.PeriodFormatterData.h"
#include "android.icu.impl.duration.impl.PeriodFormatterDataService.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"

// .method constructor <init>(Landroid/icu/impl/duration/impl/PeriodFormatterDataService;)V
android::icu::impl::duration::BasicPeriodFormatterFactory::BasicPeriodFormatterFactory(std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterDataService> ds)
{
	
	std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory_S_Customizations> cVar0;
	
	//    .param p1, "ds"    # Landroid/icu/impl/duration/impl/PeriodFormatterDataService;
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->ds = ds;
	cVar0 = std::make_shared<android::icu::impl::duration::BasicPeriodFormatterFactory_S_Customizations>();
	this->customizations = cVar0;
	this->localeName = java::util::Locale::getDefault({const[class].FS-Param})->toString();
	return;

}
// .method public static getDefault()Landroid/icu/impl/duration/BasicPeriodFormatterFactory;
std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory> android::icu::impl::duration::BasicPeriodFormatterFactory::getDefault()
{
	
	std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory> cVar0;
	
	cVar0 = android::icu::impl::duration::BasicPeriodFormatterService::getInstance({const[class].FS-Param})->newPeriodFormatterFactory();
	cVar0->checkCast("android::icu::impl::duration::BasicPeriodFormatterFactory");
	return cVar0;

}
// .method private updateCustomizations()Landroid/icu/impl/duration/BasicPeriodFormatterFactory$Customizations;
std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory_S_Customizations> android::icu::impl::duration::BasicPeriodFormatterFactory::updateCustomizations()
{
	
	if ( !(this->customizationsInUse) )  
		goto label_cond_f;
	this->customizations = this->customizations->copy();
	this->customizationsInUse = 0x0;
label_cond_f:
	return this->customizations;

}
// .method public getCountVariant()I
int android::icu::impl::duration::BasicPeriodFormatterFactory::getCountVariant()
{
	
	return this->customizations->countVariant;

}
// .method getData()Landroid/icu/impl/duration/impl/PeriodFormatterData;
std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterData> android::icu::impl::duration::BasicPeriodFormatterFactory::getData()
{
	
	if ( this->data )     
		goto label_cond_e;
	this->data = this->ds->get(this->localeName);
label_cond_e:
	return this->data;

}
// .method getData(Ljava/lang/String;)Landroid/icu/impl/duration/impl/PeriodFormatterData;
std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterData> android::icu::impl::duration::BasicPeriodFormatterFactory::getData(std::shared_ptr<java::lang::String> locName)
{
	
	//    .param p1, "locName"    # Ljava/lang/String;
	return this->ds->get(locName);

}
// .method public getDisplayLimit()Z
bool android::icu::impl::duration::BasicPeriodFormatterFactory::getDisplayLimit()
{
	
	return this->customizations->displayLimit;

}
// .method public getDisplayPastFuture()Z
bool android::icu::impl::duration::BasicPeriodFormatterFactory::getDisplayPastFuture()
{
	
	return this->customizations->displayDirection;

}
// .method public getFormatter()Landroid/icu/impl/duration/PeriodFormatter;
std::shared_ptr<android::icu::impl::duration::PeriodFormatter> android::icu::impl::duration::BasicPeriodFormatterFactory::getFormatter()
{
	
	std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatter> cVar0;
	
	this->customizationsInUse = 0x1;
	cVar0 = std::make_shared<android::icu::impl::duration::BasicPeriodFormatter>(this, this->localeName, this->getData(), this->customizations);
	return cVar0;

}
// .method public getSeparatorVariant()I
int android::icu::impl::duration::BasicPeriodFormatterFactory::getSeparatorVariant()
{
	
	return this->customizations->separatorVariant;

}
// .method public getUnitVariant()I
int android::icu::impl::duration::BasicPeriodFormatterFactory::getUnitVariant()
{
	
	return this->customizations->unitVariant;

}
// .method public setCountVariant(I)Landroid/icu/impl/duration/PeriodFormatterFactory;
std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> android::icu::impl::duration::BasicPeriodFormatterFactory::setCountVariant(int variant)
{
	
	//    .param p1, "variant"    # I
	this->updateCustomizations()->countVariant = (unsigned char)(variant);
	return this;

}
// .method public setDisplayLimit(Z)Landroid/icu/impl/duration/PeriodFormatterFactory;
std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> android::icu::impl::duration::BasicPeriodFormatterFactory::setDisplayLimit(bool display)
{
	
	//    .param p1, "display"    # Z
	this->updateCustomizations()->displayLimit = display;
	return this;

}
// .method public setDisplayPastFuture(Z)Landroid/icu/impl/duration/PeriodFormatterFactory;
std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> android::icu::impl::duration::BasicPeriodFormatterFactory::setDisplayPastFuture(bool display)
{
	
	//    .param p1, "display"    # Z
	this->updateCustomizations()->displayDirection = display;
	return this;

}
// .method public setLocale(Ljava/lang/String;)Landroid/icu/impl/duration/PeriodFormatterFactory;
std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> android::icu::impl::duration::BasicPeriodFormatterFactory::setLocale(std::shared_ptr<java::lang::String> localeName)
{
	
	//    .param p1, "localeName"    # Ljava/lang/String;
	this->data = 0x0;
	this->localeName = localeName;
	return this;

}
// .method public setSeparatorVariant(I)Landroid/icu/impl/duration/PeriodFormatterFactory;
std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> android::icu::impl::duration::BasicPeriodFormatterFactory::setSeparatorVariant(int variant)
{
	
	//    .param p1, "variant"    # I
	this->updateCustomizations()->separatorVariant = (unsigned char)(variant);
	return this;

}
// .method public setUnitVariant(I)Landroid/icu/impl/duration/PeriodFormatterFactory;
std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> android::icu::impl::duration::BasicPeriodFormatterFactory::setUnitVariant(int variant)
{
	
	//    .param p1, "variant"    # I
	this->updateCustomizations()->unitVariant = (unsigned char)(variant);
	return this;

}


