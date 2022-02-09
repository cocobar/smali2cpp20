// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat$ImmutableNumberFormat.smali
#include "java2ctype.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.MeasureFormat_S_ImmutableNumberFormat.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.util.CurrencyAmount.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.FieldPosition.h"

// .method static synthetic -get0(Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::MeasureFormat_S_ImmutableNumberFormat::_get0(std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MeasureFormat$ImmutableNumberFormat;
	return _this->nf;

}
// .method public constructor <init>(Landroid/icu/text/NumberFormat;)V
android::icu::text::MeasureFormat_S_ImmutableNumberFormat::MeasureFormat_S_ImmutableNumberFormat(std::shared_ptr<android::icu::text::NumberFormat> nf)
{
	
	std::shared_ptr<android::icu::text::NumberFormat> cVar0;
	
	//    .param p1, "nf"    # Landroid/icu/text/NumberFormat;
	// 038    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = nf->clone();
	cVar0->checkCast("android::icu::text::NumberFormat");
	this->nf = cVar0;
	return;

}
// .method public declared-synchronized format(Ljava/lang/Number;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MeasureFormat_S_ImmutableNumberFormat::format(std::shared_ptr<java::lang::Number> number)
{
	
	//    .param p1, "number"    # Ljava/lang/Number;
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_1 .. :try_end_6} :catchall_9
	this->monitor_exit();
	return this->nf->format(number);
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized format(Landroid/icu/util/CurrencyAmount;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::MeasureFormat_S_ImmutableNumberFormat::format(std::shared_ptr<android::icu::util::CurrencyAmount> n,std::shared_ptr<java::lang::StringBuffer> buffer,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	//    .param p1, "n"    # Landroid/icu/util/CurrencyAmount;
	//    .param p2, "buffer"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_1 .. :try_end_6} :catchall_9
	this->monitor_exit();
	return this->nf->format(n, buffer, pos);
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized format(Ljava/lang/Number;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::MeasureFormat_S_ImmutableNumberFormat::format(std::shared_ptr<java::lang::Number> n,std::shared_ptr<java::lang::StringBuffer> buffer,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	//    .param p1, "n"    # Ljava/lang/Number;
	//    .param p2, "buffer"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_1 .. :try_end_6} :catchall_9
	this->monitor_exit();
	return this->nf->format(n, buffer, pos);
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized get()Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::MeasureFormat_S_ImmutableNumberFormat::get()
{
	
	std::shared_ptr<android::icu::text::NumberFormat> cVar0;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	cVar0 = this->nf->clone();
	cVar0->checkCast("android::icu::text::NumberFormat");
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_1 .. :try_end_9} :catchall_b
	this->monitor_exit();
	return cVar0;
label_catchall_b:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public getPrefix(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MeasureFormat_S_ImmutableNumberFormat::getPrefix(bool positive)
{
	
	std::shared_ptr<android::icu::text::NumberFormat> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<android::icu::text::NumberFormat> cVar2;
	
	//    .param p1, "positive"    # Z
	if ( !(positive) )  
		goto label_cond_b;
	cVar0 = this->nf;
	cVar0->checkCast("android::icu::text::DecimalFormat");
	cVar1 = cVar0->getPositivePrefix();
label_goto_a:
	return cVar1;
label_cond_b:
	cVar2 = this->nf;
	cVar2->checkCast("android::icu::text::DecimalFormat");
	cVar1 = cVar2->getNegativePrefix();
	goto label_goto_a;

}
// .method public getSuffix(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MeasureFormat_S_ImmutableNumberFormat::getSuffix(bool positive)
{
	
	std::shared_ptr<android::icu::text::NumberFormat> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<android::icu::text::NumberFormat> cVar2;
	
	//    .param p1, "positive"    # Z
	if ( !(positive) )  
		goto label_cond_b;
	cVar0 = this->nf;
	cVar0->checkCast("android::icu::text::DecimalFormat");
	cVar1 = cVar0->getPositiveSuffix();
label_goto_a:
	return cVar1;
label_cond_b:
	cVar2 = this->nf;
	cVar2->checkCast("android::icu::text::DecimalFormat");
	cVar1 = cVar2->getNegativeSuffix();
	goto label_goto_a;

}


