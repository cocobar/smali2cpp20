// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneNames$MatchInfo.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneNames_S_MatchInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"

// .method public constructor <init>(Landroid/icu/text/TimeZoneNames$NameType;Ljava/lang/String;Ljava/lang/String;I)V
android::icu::text::TimeZoneNames_S_MatchInfo::TimeZoneNames_S_MatchInfo(std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> nameType,std::shared_ptr<java::lang::String> tzID,std::shared_ptr<java::lang::String> mzID,int matchLength)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "nameType"    # Landroid/icu/text/TimeZoneNames$NameType;
	//    .param p2, "tzID"    # Ljava/lang/String;
	//    .param p3, "mzID"    # Ljava/lang/String;
	//    .param p4, "matchLength"    # I
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( nameType )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("nameType is null")));
	// throw
	throw cVar0;
	// 051    .line 348
label_cond_e:
	if ( tzID )     
		goto label_cond_1b;
	if ( mzID )     
		goto label_cond_1b;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Either tzID or mzID must be available")));
	// throw
	throw cVar1;
	// 066    .line 351
label_cond_1b:
	if ( matchLength > 0 ) 
		goto label_cond_26;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("matchLength must be positive value")));
	// throw
	throw cVar2;
	// 079    .line 354
label_cond_26:
	this->_nameType = nameType;
	this->_tzID = tzID;
	this->_mzID = mzID;
	this->_matchLength = matchLength;
	return;

}
// .method public matchLength()I
int android::icu::text::TimeZoneNames_S_MatchInfo::matchLength()
{
	
	return this->_matchLength;

}
// .method public mzID()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneNames_S_MatchInfo::mzID()
{
	
	return this->_mzID;

}
// .method public nameType()Landroid/icu/text/TimeZoneNames$NameType;
std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> android::icu::text::TimeZoneNames_S_MatchInfo::nameType()
{
	
	return this->_nameType;

}
// .method public tzID()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneNames_S_MatchInfo::tzID()
{
	
	return this->_tzID;

}


