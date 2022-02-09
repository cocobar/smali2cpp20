#ifndef __android_icu_impl_duration_Period__
#define __android_icu_impl_duration_Period__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\Period.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "java.lang.Object.h"

namespace android::icu::impl::duration{
class Period : public java::lang::Object {
protected:
private:
	Period(int limit,bool future,float count,std::shared_ptr<android::icu::impl::duration::TimeUnit> unit);
	static void checkCount(float count);
	std::shared_ptr<android::icu::impl::duration::Period> virtual setFuture(bool future);
	std::shared_ptr<android::icu::impl::duration::Period> virtual setTimeLimit(unsigned char limit);
	std::shared_ptr<android::icu::impl::duration::Period> virtual setTimeUnitInternalValue(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,int value);
	std::shared_ptr<android::icu::impl::duration::Period> virtual setTimeUnitValue(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,float value);
public:
	std::shared_ptr<int[]> counts;
	bool inFuture;
	unsigned char timeLimit;
	Period(int timeLimit,bool inFuture,std::shared_ptr<int[]> counts);
	static std::shared_ptr<android::icu::impl::duration::Period> at(float count,std::shared_ptr<android::icu::impl::duration::TimeUnit> unit);
	static std::shared_ptr<android::icu::impl::duration::Period> lessThan(float count,std::shared_ptr<android::icu::impl::duration::TimeUnit> unit);
	static std::shared_ptr<android::icu::impl::duration::Period> moreThan(float count,std::shared_ptr<android::icu::impl::duration::TimeUnit> unit);
	std::shared_ptr<android::icu::impl::duration::Period> virtual and(float count,std::shared_ptr<android::icu::impl::duration::TimeUnit> unit);
	std::shared_ptr<android::icu::impl::duration::Period> virtual at();
	bool virtual equals(std::shared_ptr<android::icu::impl::duration::Period> rhs);
	bool virtual equals(std::shared_ptr<java::lang::Object> rhs);
	float virtual getCount(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit);
	int virtual hashCode();
	std::shared_ptr<android::icu::impl::duration::Period> virtual inFuture();
	std::shared_ptr<android::icu::impl::duration::Period> virtual inFuture(bool future);
	std::shared_ptr<android::icu::impl::duration::Period> virtual inPast();
	std::shared_ptr<android::icu::impl::duration::Period> virtual inPast(bool past);
	bool virtual isInFuture();
	bool virtual isInPast();
	bool virtual isLessThan();
	bool virtual isMoreThan();
	bool virtual isSet();
	bool virtual isSet(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit);
	std::shared_ptr<android::icu::impl::duration::Period> virtual lessThan();
	std::shared_ptr<android::icu::impl::duration::Period> virtual moreThan();
	std::shared_ptr<android::icu::impl::duration::Period> virtual omit(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit);
public:
	virtual ~Period(){
	}

}; // class Period
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_Period__

