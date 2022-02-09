#ifndef __android_icu_text_DigitList__
#define __android_icu_text_DigitList__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DigitList.smali
#include "java2ctype.h"
#include "android.icu.math.BigDecimal.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigDecimal.h"
#include "java.math.BigInteger.h"

namespace android::icu::text{
class DigitList : public java::lang::Object {
protected:
private:
	static std::shared_ptr<unsigned char[]> LONG_MIN_REP;
	bool didRound;
	void virtual ensureCapacity(int digitCapacity,int digitsToCopy);
	std::shared_ptr<java::lang::String> virtual getStringRep(bool isPositive);
	bool virtual isLongMIN_VALUE();
	void virtual set(std::shared_ptr<java::lang::String> rep,int maxCount);
	void virtual setBigDecimalDigits(std::shared_ptr<java::lang::String> stringDigits,int cVar0,bool fixedPoint);
	bool virtual shouldRoundUp(int maximumDigits);
public:
	static int DBL_DIG;
	static int MAX_LONG_DIGITS;
	int count;
	int decimalAt;
	std::shared_ptr<unsigned char[]> digits;
	static void static_cinit();
	DigitList();
	void virtual append(int digit);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<android::icu::math::BigDecimal> virtual getBigDecimalICU(bool isPositive);
	std::shared_ptr<java::math::BigInteger> virtual getBigInteger(bool isPositive);
	unsigned char virtual getDigitValue(int i);
	double virtual getDouble();
	long long virtual getLong();
	int virtual hashCode();
	bool virtual isIntegral();
	bool virtual isZero();
	void virtual round(int cVar2);
	void virtual set(double cVar2,int cVar3,bool fixedPoint);
	void virtual set(long long source);
	void virtual set(long long source,int maximumDigits);
	void virtual set(std::shared_ptr<android::icu::math::BigDecimal> source,int maximumDigits,bool fixedPoint);
	void virtual set(std::shared_ptr<java::math::BigDecimal> source,int maximumDigits,bool fixedPoint);
	void virtual set(std::shared_ptr<java::math::BigInteger> source,int maximumDigits);
	std::shared_ptr<java::lang::String> virtual toString();
	bool virtual wasRounded();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DigitList::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DigitList(){
	}

}; // class DigitList
}; // namespace android::icu::text

#endif //__android_icu_text_DigitList__

