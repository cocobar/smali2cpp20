#ifndef __android_icu_util_DateInterval__
#define __android_icu_util_DateInterval__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\DateInterval.smali
#include "java2ctype.h"
#include "java.io.Serializable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class DateInterval : public java::io::Serializable {
protected:
private:
	static long long serialVersionUID;
	long long fromDate;
	long long toDate;
public:
	DateInterval(long long from,long long to);
	bool virtual equals(std::shared_ptr<java::lang::Object> a);
	long long virtual getFromDate();
	long long virtual getToDate();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~DateInterval(){
	}

}; // class DateInterval
}; // namespace android::icu::util

#endif //__android_icu_util_DateInterval__

