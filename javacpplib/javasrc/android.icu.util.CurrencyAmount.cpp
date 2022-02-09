// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\CurrencyAmount.smali
#include "java2ctype.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.CurrencyAmount.h"
#include "android.icu.util.Measure.h"
#include "android.icu.util.MeasureUnit.h"
#include "java.lang.Double.h"
#include "java.lang.Number.h"

// .method public constructor <init>(DLandroid/icu/util/Currency;)V
android::icu::util::CurrencyAmount::CurrencyAmount(double number,std::shared_ptr<android::icu::util::Currency> currency)
{
	
	std::shared_ptr<java::lang::Double> cVar0;
	
	//    .param p1, "number"    # D
	//    .param p3, "currency"    # Landroid/icu/util/Currency;
	cVar0 = std::make_shared<java::lang::Double>(number);
	android::icu::util::Measure::(cVar0, currency);
	return;

}
// .method public constructor <init>(Ljava/lang/Number;Landroid/icu/util/Currency;)V
android::icu::util::CurrencyAmount::CurrencyAmount(std::shared_ptr<java::lang::Number> number,std::shared_ptr<android::icu::util::Currency> currency)
{
	
	//    .param p1, "number"    # Ljava/lang/Number;
	//    .param p2, "currency"    # Landroid/icu/util/Currency;
	android::icu::util::Measure::(number, currency);
	return;

}
// .method public getCurrency()Landroid/icu/util/Currency;
std::shared_ptr<android::icu::util::Currency> android::icu::util::CurrencyAmount::getCurrency()
{
	
	std::shared_ptr<android::icu::util::Currency> cVar0;
	
	cVar0 = this->getUnit();
	cVar0->checkCast("android::icu::util::Currency");
	return cVar0;

}


