// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TZDBTimeZoneNames$TZDBNameInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.TZDBTimeZoneNames_S_TZDBNameInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;Z[Ljava/lang/String;)V
android::icu::impl::TZDBTimeZoneNames_S_TZDBNameInfo::TZDBTimeZoneNames_S_TZDBNameInfo(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type,bool ambiguousType,std::shared_ptr<std::vector<java::lang::String>> parseRegions)
{
	
	//    .param p1, "mzID"    # Ljava/lang/String;
	//    .param p2, "type"    # Landroid/icu/text/TimeZoneNames$NameType;
	//    .param p3, "ambiguousType"    # Z
	//    .param p4, "parseRegions"    # [Ljava/lang/String;
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->mzID = mzID;
	this->type = type;
	this->ambiguousType = ambiguousType;
	this->parseRegions = parseRegions;
	return;

}


