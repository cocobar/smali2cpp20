// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames$GenericMatchInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericMatchInfo.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericNameType.h"
#include "android.icu.text.TimeZoneFormat_S_TimeType.h"
#include "java.lang.String.h"

// .method private constructor <init>(Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;Ljava/lang/String;I)V
android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo::TimeZoneGenericNames_S_GenericMatchInfo(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> nameType,std::shared_ptr<java::lang::String> tzID,int matchLength)
{
	
	//    .param p1, "nameType"    # Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
	//    .param p2, "tzID"    # Ljava/lang/String;
	//    .param p3, "matchLength"    # I
	android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo::(nameType, tzID, matchLength, android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN);
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;Ljava/lang/String;ILandroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;)V
android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo::TimeZoneGenericNames_S_GenericMatchInfo(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> nameType,std::shared_ptr<java::lang::String> tzID,int matchLength,std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo> _this3)
{
	
	//    .param p1, "nameType"    # Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
	//    .param p2, "tzID"    # Ljava/lang/String;
	//    .param p3, "matchLength"    # I
	//    .param p4, "-this3"    # Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
	android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo::(nameType, tzID, matchLength);
	return;

}
// .method private constructor <init>(Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;Ljava/lang/String;ILandroid/icu/text/TimeZoneFormat$TimeType;)V
android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo::TimeZoneGenericNames_S_GenericMatchInfo(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> nameType,std::shared_ptr<java::lang::String> tzID,int matchLength,std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> timeType)
{
	
	//    .param p1, "nameType"    # Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
	//    .param p2, "tzID"    # Ljava/lang/String;
	//    .param p3, "matchLength"    # I
	//    .param p4, "timeType"    # Landroid/icu/text/TimeZoneFormat$TimeType;
	// 066    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->nameType = nameType;
	this->tzID = tzID;
	this->matchLength = matchLength;
	this->timeType = timeType;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;Ljava/lang/String;ILandroid/icu/text/TimeZoneFormat$TimeType;Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;)V
android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo::TimeZoneGenericNames_S_GenericMatchInfo(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> nameType,std::shared_ptr<java::lang::String> tzID,int matchLength,std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> timeType,std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo> _this4)
{
	
	//    .param p1, "nameType"    # Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
	//    .param p2, "tzID"    # Ljava/lang/String;
	//    .param p3, "matchLength"    # I
	//    .param p4, "timeType"    # Landroid/icu/text/TimeZoneFormat$TimeType;
	//    .param p5, "-this4"    # Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
	android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo::(nameType, tzID, matchLength, timeType);
	return;

}
// .method public matchLength()I
int android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo::matchLength()
{
	
	return this->matchLength;

}
// .method public nameType()Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo::nameType()
{
	
	return this->nameType;

}
// .method public timeType()Landroid/icu/text/TimeZoneFormat$TimeType;
std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo::timeType()
{
	
	return this->timeType;

}
// .method public tzID()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo::tzID()
{
	
	return this->tzID;

}


