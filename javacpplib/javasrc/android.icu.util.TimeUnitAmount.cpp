// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\TimeUnitAmount.smali
#include "java2ctype.h"
#include "android.icu.util.Measure.h"
#include "android.icu.util.MeasureUnit.h"
#include "android.icu.util.TimeUnit.h"
#include "android.icu.util.TimeUnitAmount.h"
#include "java.lang.Double.h"
#include "java.lang.Number.h"

// .method public constructor <init>(DLandroid/icu/util/TimeUnit;)V
android::icu::util::TimeUnitAmount::TimeUnitAmount(double number,std::shared_ptr<android::icu::util::TimeUnit> unit)
{
	
	std::shared_ptr<java::lang::Double> cVar0;
	
	//    .param p1, "number"    # D
	//    .param p3, "unit"    # Landroid/icu/util/TimeUnit;
	cVar0 = std::make_shared<java::lang::Double>(number);
	android::icu::util::Measure::(cVar0, unit);
	return;

}
// .method public constructor <init>(Ljava/lang/Number;Landroid/icu/util/TimeUnit;)V
android::icu::util::TimeUnitAmount::TimeUnitAmount(std::shared_ptr<java::lang::Number> number,std::shared_ptr<android::icu::util::TimeUnit> unit)
{
	
	//    .param p1, "number"    # Ljava/lang/Number;
	//    .param p2, "unit"    # Landroid/icu/util/TimeUnit;
	android::icu::util::Measure::(number, unit);
	return;

}
// .method public getTimeUnit()Landroid/icu/util/TimeUnit;
std::shared_ptr<android::icu::util::TimeUnit> android::icu::util::TimeUnitAmount::getTimeUnit()
{
	
	std::shared_ptr<android::icu::util::TimeUnit> cVar0;
	
	cVar0 = this->getUnit();
	cVar0->checkCast("android::icu::util::TimeUnit");
	return cVar0;

}


