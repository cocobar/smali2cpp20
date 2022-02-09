// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat$NumericFormatters.smali
#include "java2ctype.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.MeasureFormat_S_NumericFormatters.h"

// .method public constructor <init>(Landroid/icu/text/DateFormat;Landroid/icu/text/DateFormat;Landroid/icu/text/DateFormat;)V
android::icu::text::MeasureFormat_S_NumericFormatters::MeasureFormat_S_NumericFormatters(std::shared_ptr<android::icu::text::DateFormat> hourMinute,std::shared_ptr<android::icu::text::DateFormat> minuteSecond,std::shared_ptr<android::icu::text::DateFormat> hourMinuteSecond)
{
	
	//    .param p1, "hourMinute"    # Landroid/icu/text/DateFormat;
	//    .param p2, "minuteSecond"    # Landroid/icu/text/DateFormat;
	//    .param p3, "hourMinuteSecond"    # Landroid/icu/text/DateFormat;
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->hourMinute = hourMinute;
	this->minuteSecond = minuteSecond;
	this->hourMinuteSecond = hourMinuteSecond;
	return;

}
// .method public getHourMinute()Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::MeasureFormat_S_NumericFormatters::getHourMinute()
{
	
	return this->hourMinute;

}
// .method public getHourMinuteSecond()Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::MeasureFormat_S_NumericFormatters::getHourMinuteSecond()
{
	
	return this->hourMinuteSecond;

}
// .method public getMinuteSecond()Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::MeasureFormat_S_NumericFormatters::getMinuteSecond()
{
	
	return this->minuteSecond;

}


