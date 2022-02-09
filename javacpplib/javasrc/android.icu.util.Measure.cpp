// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Measure.smali
#include "java2ctype.h"
#include "android.icu.util.Measure.h"
#include "android.icu.util.MeasureUnit.h"
#include "java.lang.Double.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(Ljava/lang/Number;Landroid/icu/util/MeasureUnit;)V
android::icu::util::Measure::Measure(std::shared_ptr<java::lang::Number> number,std::shared_ptr<android::icu::util::MeasureUnit> unit)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "number"    # Ljava/lang/Number;
	//    .param p2, "unit"    # Landroid/icu/util/MeasureUnit;
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( !(number) )  
		goto label_cond_7;
	if ( unit )     
		goto label_cond_d;
label_cond_7:
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 035    .line 47
label_cond_d:
	this->number = number;
	this->unit = unit;
	return;

}
// .method private static numbersEqual(Ljava/lang/Number;Ljava/lang/Number;)Z
bool android::icu::util::Measure::numbersEqual(std::shared_ptr<java::lang::Number> a,std::shared_ptr<java::lang::Number> b)
{
	
	bool cVar0;
	
	//    .param p0, "a"    # Ljava/lang/Number;
	//    .param p1, "b"    # Ljava/lang/Number;
	cVar0 = 0x1;
	if ( !(a->equals(b)) )  
		goto label_cond_8;
	return cVar0;
	// 064    .line 78
label_cond_8:
	if ( (a->doubleValue() < b->doubleValue()) )     
		goto label_cond_15;
	return cVar0;
	// 081    .line 81
label_cond_15:
	return 0x0;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::Measure::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::util::Measure> m;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( obj != this )
		goto label_cond_5;
	return 0x1;
	// 105    .line 60
label_cond_5:
	if ( obj->instanceOf("android::icu::util::Measure") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	m = obj;
	m->checkCast("android::icu::util::Measure");
	//    .local v0, "m":Landroid/icu/util/Measure;
	if ( !(this->unit->equals(m->unit)) )  
		goto label_cond_1f;
	cVar1 = android::icu::util::Measure::numbersEqual(this->number, m->number);
label_cond_1f:
	return cVar1;

}
// .method public getNumber()Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::util::Measure::getNumber()
{
	
	return this->number;

}
// .method public getUnit()Landroid/icu/util/MeasureUnit;
std::shared_ptr<android::icu::util::MeasureUnit> android::icu::util::Measure::getUnit()
{
	
	return this->unit;

}
// .method public hashCode()I
int android::icu::util::Measure::hashCode()
{
	
	return (( java::lang::Double::valueOf(this->number->doubleValue())->hashCode() * 0x1f) +  this->unit->hashCode());

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Measure::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->number->toString())->append(0x20)->append(this->unit->toString())->toString();

}


