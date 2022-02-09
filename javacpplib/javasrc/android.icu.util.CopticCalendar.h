#ifndef __android_icu_util_CopticCalendar__
#define __android_icu_util_CopticCalendar__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\CopticCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.CECalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class CopticCalendar : public android::icu::util::CECalendar {
protected:
	int virtual getJDEpochOffset();
	void virtual handleComputeFields(int julianDay);
	int virtual handleGetExtendedYear();
private:
	static int BCE;
	static int CE;
	static int JD_EPOCH_OFFSET;
	static long long serialVersionUID;
public:
	static int AMSHIR;
	static int BABA;
	static int BARAMHAT;
	static int BARAMOUDA;
	static int BASHANS;
	static int EPEP;
	static int HATOR;
	static int KIAHK;
	static int MESRA;
	static int NASIE;
	static int PAONA;
	static int TOBA;
	static int TOUT;
	CopticCalendar();
	CopticCalendar(int year,int month,int date);
	CopticCalendar(int year,int month,int date,int hour,int minute,int second);
	CopticCalendar(std::shared_ptr<android::icu::util::TimeZone> zone);
	CopticCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	CopticCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale);
	CopticCalendar(std::shared_ptr<android::icu::util::ULocale> locale);
	CopticCalendar(std::shared_ptr<java::util::Date> date);
	CopticCalendar(std::shared_ptr<java::util::Locale> aLocale);
	static int copticToJD(long long year,int month,int date);
	std::shared_ptr<java::lang::String> virtual getType();
public:
	virtual ~CopticCalendar(){
	}

}; // class CopticCalendar
}; // namespace android::icu::util

#endif //__android_icu_util_CopticCalendar__

