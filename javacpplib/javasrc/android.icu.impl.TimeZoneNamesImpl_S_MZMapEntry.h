#ifndef __android_icu_impl_TimeZoneNamesImpl_S_MZMapEntry__
#define __android_icu_impl_TimeZoneNamesImpl_S_MZMapEntry__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$MZMapEntry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class TimeZoneNamesImpl_S_MZMapEntry : public java::lang::Object {
protected:
private:
	long long _from;
	std::shared_ptr<java::lang::String> _mzID;
	long long _to;
public:
	TimeZoneNamesImpl_S_MZMapEntry(std::shared_ptr<java::lang::String> mzID,long long from,long long to);
	long long virtual from();
	std::shared_ptr<java::lang::String> virtual mzID();
	long long virtual to();
public:
	virtual ~TimeZoneNamesImpl_S_MZMapEntry(){
	}

}; // class TimeZoneNamesImpl_S_MZMapEntry
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneNamesImpl_S_MZMapEntry__

