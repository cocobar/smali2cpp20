// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames$NameInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericNameType.h"
#include "android.icu.impl.TimeZoneGenericNames_S_NameInfo.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;)V
android::icu::impl::TimeZoneGenericNames_S_NameInfo::TimeZoneGenericNames_S_NameInfo(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> type)
{
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .param p2, "type"    # Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->tzID = tzID;
	this->type = type;
	return;

}


