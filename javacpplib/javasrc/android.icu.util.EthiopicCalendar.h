#ifndef __android_icu_util_EthiopicCalendar__
#define __android_icu_util_EthiopicCalendar__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\EthiopicCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.CECalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class EthiopicCalendar : public android::icu::util::CECalendar {
protected:
	int virtual getJDEpochOffset();
	void virtual handleComputeFields(int julianDay);
	int virtual handleGetExtendedYear();
	int virtual handleGetLimit(int field,int limitType);
private:
	static int AMETE_ALEM;
	static int AMETE_ALEM_ERA;
	static int AMETE_MIHRET;
	static int AMETE_MIHRET_DELTA;
	static int AMETE_MIHRET_ERA;
	static int JD_EPOCH_OFFSET_AMETE_MIHRET;
	static long long serialVersionUID;
	int eraType;
	void virtual setCalcTypeForLocale(std::shared_ptr<android::icu::util::ULocale> locale);
public:
	static int GENBOT;
	static int HAMLE;
	static int HEDAR;
	static int MEGABIT;
	static int MESKEREM;
	static int MIAZIA;
	static int NEHASSE;
	static int PAGUMEN;
	static int SENE;
	static int TAHSAS;
	static int TEKEMT;
	static int TER;
	static int YEKATIT;
	EthiopicCalendar();
	EthiopicCalendar(int year,int month,int date);
	EthiopicCalendar(int year,int month,int date,int hour,int minute,int second);
	EthiopicCalendar(std::shared_ptr<android::icu::util::TimeZone> zone);
	EthiopicCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	EthiopicCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale);
	EthiopicCalendar(std::shared_ptr<android::icu::util::ULocale> locale);
	EthiopicCalendar(std::shared_ptr<java::util::Date> date);
	EthiopicCalendar(std::shared_ptr<java::util::Locale> aLocale);
	static int EthiopicToJD(long long year,int month,int date);
	std::shared_ptr<java::lang::String> virtual getType();
	bool virtual isAmeteAlemEra();
	void virtual setAmeteAlemEra(bool onOff);
public:
	virtual ~EthiopicCalendar(){
	}

}; // class EthiopicCalendar
}; // namespace android::icu::util

#endif //__android_icu_util_EthiopicCalendar__

