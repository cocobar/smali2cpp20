// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$MZMapEntry.smali
#include "java2ctype.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_MZMapEntry.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;JJ)V
android::icu::impl::TimeZoneNamesImpl_S_MZMapEntry::TimeZoneNamesImpl_S_MZMapEntry(std::shared_ptr<java::lang::String> mzID,long long from,long long to)
{
	
	//    .param p1, "mzID"    # Ljava/lang/String;
	//    .param p2, "from"    # J
	//    .param p4, "to"    # J
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_mzID = mzID;
	this->_from = from;
	this->_to = to;
	return;

}
// .method from()J
long long android::icu::impl::TimeZoneNamesImpl_S_MZMapEntry::from()
{
	
	return this->_from;

}
// .method mzID()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneNamesImpl_S_MZMapEntry::mzID()
{
	
	return this->_mzID;

}
// .method to()J
long long android::icu::impl::TimeZoneNamesImpl_S_MZMapEntry::to()
{
	
	return this->_to;

}


