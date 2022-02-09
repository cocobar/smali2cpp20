// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalFormat$Amount.smali
#include "java2ctype.h"
#include "android.icu.text.CompactDecimalFormat_S_Amount.h"
#include "android.icu.text.DecimalFormat_S_Unit.h"

// .method public constructor <init>(DLandroid/icu/text/DecimalFormat$Unit;)V
android::icu::text::CompactDecimalFormat_S_Amount::CompactDecimalFormat_S_Amount(double qty,std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> unit)
{
	
	//    .param p1, "qty"    # D
	//    .param p3, "unit"    # Landroid/icu/text/DecimalFormat$Unit;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->qty = qty;
	this->unit = unit;
	return;

}
// .method public getQty()D
double android::icu::text::CompactDecimalFormat_S_Amount::getQty()
{
	
	return this->qty;

}
// .method public getUnit()Landroid/icu/text/DecimalFormat$Unit;
std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> android::icu::text::CompactDecimalFormat_S_Amount::getUnit()
{
	
	return this->unit;

}


