#ifndef __android_icu_impl_duration_impl_PeriodFormatterData__
#define __android_icu_impl_duration_impl_PeriodFormatterData__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\PeriodFormatterData.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "android.icu.impl.duration.impl.DataRecord.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

namespace android::icu::impl::duration::impl{
class PeriodFormatterData : public java::lang::Object {
protected:
private:
	static int FORM_DUAL;
	static int FORM_HALF_SPELLED;
	static int FORM_PAUCAL;
	static int FORM_PLURAL;
	static int FORM_SINGULAR;
	static int FORM_SINGULAR_NO_OMIT;
	static int FORM_SINGULAR_SPELLED;
	int virtual computeForm(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,int count,int cv,bool lastOfMultiple);
public:
	static bool trace;
	std::shared_ptr<android::icu::impl::duration::impl::DataRecord> dr;
	std::shared_ptr<java::lang::String> localeName;
	static void static_cinit();
	PeriodFormatterData(std::shared_ptr<java::lang::String> localeName,std::shared_ptr<android::icu::impl::duration::impl::DataRecord> dr);
	bool virtual allowZero();
	int virtual appendCount(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,bool omitCount,bool useDigitPrefix,int count,int cVar0,bool useSep,std::shared_ptr<java::lang::String> name,bool last,std::shared_ptr<java::lang::StringBuffer> sb);
	void virtual appendCountValue(int count,int integralDigits,int decimalDigits,std::shared_ptr<java::lang::StringBuffer> sb);
	void virtual appendDigits(long long num,int mindigits,int maxdigits,std::shared_ptr<java::lang::StringBuffer> sb);
	void virtual appendInteger(int num,int mindigits,int maxdigits,std::shared_ptr<java::lang::StringBuffer> sb);
	bool virtual appendPrefix(int tl,int td,std::shared_ptr<java::lang::StringBuffer> sb);
	void virtual appendSkippedUnit(std::shared_ptr<java::lang::StringBuffer> sb);
	void virtual appendSuffix(int tl,int td,std::shared_ptr<java::lang::StringBuffer> sb);
	bool virtual appendUnit(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,int count,int cv,int uv,bool useCountSep,bool useDigitPrefix,bool multiple,bool last,bool wasSkipped,std::shared_ptr<java::lang::StringBuffer> sb);
	bool virtual appendUnitSeparator(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,bool longSep,bool afterFirst,bool beforeLast,std::shared_ptr<java::lang::StringBuffer> sb);
	int virtual pluralization();
	int virtual useMilliseconds();
	bool virtual weeksAloneOnly();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::duration::impl::PeriodFormatterData::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PeriodFormatterData(){
	}

}; // class PeriodFormatterData
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_PeriodFormatterData__

