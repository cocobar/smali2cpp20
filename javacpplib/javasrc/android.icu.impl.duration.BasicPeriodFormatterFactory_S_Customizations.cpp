// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicPeriodFormatterFactory$Customizations.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodFormatterFactory_S_Customizations.h"

// .method constructor <init>()V
android::icu::impl::duration::BasicPeriodFormatterFactory_S_Customizations::BasicPeriodFormatterFactory_S_Customizations()
{
	
	bool cVar0;
	unsigned char cVar1;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	// 039    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->displayLimit = cVar0;
	this->displayDirection = cVar0;
	this->separatorVariant = 0x2;
	this->unitVariant = cVar1;
	this->countVariant = cVar1;
	return;

}
// .method public copy()Landroid/icu/impl/duration/BasicPeriodFormatterFactory$Customizations;
std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory_S_Customizations> android::icu::impl::duration::BasicPeriodFormatterFactory_S_Customizations::copy()
{
	
	std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory_S_Customizations> result;
	
	result = std::make_shared<android::icu::impl::duration::BasicPeriodFormatterFactory_S_Customizations>();
	//    .local v0, "result":Landroid/icu/impl/duration/BasicPeriodFormatterFactory$Customizations;
	result->displayLimit = this->displayLimit;
	result->displayDirection = this->displayDirection;
	result->separatorVariant = this->separatorVariant;
	result->unitVariant = this->unitVariant;
	result->countVariant = this->countVariant;
	return result;

}


