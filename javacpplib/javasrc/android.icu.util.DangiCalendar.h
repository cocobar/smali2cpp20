#ifndef __android_icu_util_DangiCalendar__
#define __android_icu_util_DangiCalendar__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\DangiCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.ChineseCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"

namespace android::icu::util{
class DangiCalendar : public android::icu::util::ChineseCalendar {
protected:
private:
	static int DANGI_EPOCH_YEAR;
	static std::shared_ptr<android::icu::util::TimeZone> KOREA_ZONE;
	static long long serialVersionUID;
public:
	static void static_cinit();
	DangiCalendar();
	DangiCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	DangiCalendar(std::shared_ptr<java::util::Date> date);
	std::shared_ptr<java::lang::String> virtual getType();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::DangiCalendar::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DangiCalendar(){
	}

}; // class DangiCalendar
}; // namespace android::icu::util

#endif //__android_icu_util_DangiCalendar__

