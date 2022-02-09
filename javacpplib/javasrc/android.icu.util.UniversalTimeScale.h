#ifndef __android_icu_util_UniversalTimeScale__
#define __android_icu_util_UniversalTimeScale__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\UniversalTimeScale.smali
#include "java2ctype.h"
#include "android.icu.math.BigDecimal.h"
#include "android.icu.util.UniversalTimeScale_S_TimeScaleData.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class UniversalTimeScale : public java::lang::Object {
protected:
private:
	static long long days;
	static long long hours;
	static long long microseconds;
	static long long milliseconds;
	static long long minutes;
	static long long seconds;
	static long long ticks;
	static std::shared_ptr<std::vector<android::icu::util::UniversalTimeScale_S_TimeScaleData>> timeScaleTable;
	UniversalTimeScale();
	static std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> fromRangeCheck(long long otherTime,int scale);
	static std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> getTimeScaleData(int scale);
	static std::shared_ptr<android::icu::util::UniversalTimeScale_S_TimeScaleData> toRangeCheck(long long universalTime,int scale);
public:
	static int DB2_TIME;
	static int DOTNET_DATE_TIME;
	static int EPOCH_OFFSET_MINUS_1_VALUE;
	static int EPOCH_OFFSET_PLUS_1_VALUE;
	static int EPOCH_OFFSET_VALUE;
	static int EXCEL_TIME;
	static int FROM_MAX_VALUE;
	static int FROM_MIN_VALUE;
	static int ICU4C_TIME;
	static int JAVA_TIME;
	static int MAC_OLD_TIME;
	static int MAC_TIME;
	static int MAX_ROUND_VALUE;
	static int MAX_SCALE;
	static int MAX_SCALE_VALUE;
	static int MIN_ROUND_VALUE;
	static int TO_MAX_VALUE;
	static int TO_MIN_VALUE;
	static int UNITS_ROUND_VALUE;
	static int UNITS_VALUE;
	static int UNIX_MICROSECONDS_TIME;
	static int UNIX_TIME;
	static int WINDOWS_FILE_TIME;
	static void static_cinit();
	static std::shared_ptr<android::icu::math::BigDecimal> bigDecimalFrom(double otherTime,int timeScale);
	static std::shared_ptr<android::icu::math::BigDecimal> bigDecimalFrom(long long otherTime,int timeScale);
	static std::shared_ptr<android::icu::math::BigDecimal> bigDecimalFrom(std::shared_ptr<android::icu::math::BigDecimal> otherTime,int timeScale);
	static long long from(long long otherTime,int timeScale);
	static long long getTimeScaleValue(int scale,int value);
	static std::shared_ptr<android::icu::math::BigDecimal> toBigDecimal(long long universalTime,int timeScale);
	static std::shared_ptr<android::icu::math::BigDecimal> toBigDecimal(std::shared_ptr<android::icu::math::BigDecimal> universalTime,int timeScale);
	static std::shared_ptr<android::icu::math::BigDecimal> toBigDecimalTrunc(std::shared_ptr<android::icu::math::BigDecimal> universalTime,int timeScale);
	static long long toLong(long long universalTime,int timeScale);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::UniversalTimeScale::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UniversalTimeScale(){
	}

}; // class UniversalTimeScale
}; // namespace android::icu::util

#endif //__android_icu_util_UniversalTimeScale__

