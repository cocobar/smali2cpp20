#ifndef __android_icu_math_BigDecimal__
#define __android_icu_math_BigDecimal__
// H L:\smali2cpp20\x64\Release\out\android\icu\math\BigDecimal.smali
#include "java2ctype.h"
#include "android.icu.math.MathContext.h"
#include "java.io.Serializable.h"
#include "java.lang.Comparable.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigDecimal.h"
#include "java.math.BigInteger.h"

namespace android::icu::math{
class BigDecimal : public java::lang::Number, public java::io::Serializable, public java::lang::Comparable<android::icu::math::BigDecimal> {
protected:
private:
	static int MaxArg;
	static int MaxExp;
	static int MinArg;
	static int MinExp;
	static std::shared_ptr<unsigned char[]> bytecar;
	static std::shared_ptr<unsigned char[]> bytedig;
	static unsigned char isneg;
	static unsigned char ispos;
	static unsigned char iszero;
	static std::shared_ptr<android::icu::math::MathContext> plainMC;
	static long long serialVersionUID;
	int exp;
	unsigned char form;
	unsigned char ind;
	std::shared_ptr<unsigned char[]> mant;
	BigDecimal();
	static bool allzero(std::shared_ptr<unsigned char[]> array,int cVar0);
	void virtual bad(std::shared_ptr<char[]> s);
	void virtual badarg(std::shared_ptr<java::lang::String> name,int pos,std::shared_ptr<java::lang::String> value);
	static unsigned char byteaddsub(std::shared_ptr<unsigned char[]> a,int avlen,std::shared_ptr<unsigned char[]> b,int bvlen,int m,bool reuse);
	void virtual checkdigits(std::shared_ptr<android::icu::math::BigDecimal> rhs,int dig);
	static std::shared_ptr<android::icu::math::BigDecimal> clone(std::shared_ptr<android::icu::math::BigDecimal> dec);
	static unsigned char diginit();
	std::shared_ptr<android::icu::math::BigDecimal> virtual dodivide(char code,std::shared_ptr<android::icu::math::BigDecimal> cVar1,std::shared_ptr<android::icu::math::MathContext> set,int cVar2);
	static unsigned char extend(std::shared_ptr<unsigned char[]> inarr,int newlen);
	std::shared_ptr<android::icu::math::BigDecimal> virtual finish(std::shared_ptr<android::icu::math::MathContext> set,bool strip);
	int virtual intcheck(int min,int max);
	char virtual layout();
	std::shared_ptr<android::icu::math::BigDecimal> virtual round(int len,int mode);
	std::shared_ptr<android::icu::math::BigDecimal> virtual round(std::shared_ptr<android::icu::math::MathContext> set);
public:
	static std::shared_ptr<android::icu::math::BigDecimal> ONE;
	static int ROUND_CEILING;
	static int ROUND_DOWN;
	static int ROUND_FLOOR;
	static int ROUND_HALF_DOWN;
	static int ROUND_HALF_EVEN;
	static int ROUND_HALF_UP;
	static int ROUND_UNNECESSARY;
	static int ROUND_UP;
	static std::shared_ptr<android::icu::math::BigDecimal> TEN;
	static std::shared_ptr<android::icu::math::BigDecimal> ZERO;
	static void static_cinit();
	BigDecimal(double num);
	BigDecimal(int cVar3);
	BigDecimal(long long cVar3);
	BigDecimal(std::shared_ptr<java::lang::String> string);
	BigDecimal(std::shared_ptr<java::math::BigDecimal> bd);
	BigDecimal(std::shared_ptr<java::math::BigInteger> bi);
	BigDecimal(std::shared_ptr<java::math::BigInteger> bi,int scale);
	BigDecimal(std::shared_ptr<char[]> inchars);
	BigDecimal(std::shared_ptr<char[]> inchars,int cVar1,int cVar0);
	static std::shared_ptr<android::icu::math::BigDecimal> valueOf(double dub);
	static std::shared_ptr<android::icu::math::BigDecimal> valueOf(long long lint);
	static std::shared_ptr<android::icu::math::BigDecimal> valueOf(long long lint,int scale);
	std::shared_ptr<android::icu::math::BigDecimal> virtual abs();
	std::shared_ptr<android::icu::math::BigDecimal> virtual abs(std::shared_ptr<android::icu::math::MathContext> set);
	std::shared_ptr<android::icu::math::BigDecimal> virtual add(std::shared_ptr<android::icu::math::BigDecimal> rhs);
	std::shared_ptr<android::icu::math::BigDecimal> virtual add(std::shared_ptr<android::icu::math::BigDecimal> cVar0,std::shared_ptr<android::icu::math::MathContext> set);
	unsigned char virtual byteValueExact();
	int virtual compareTo(std::shared_ptr<android::icu::math::BigDecimal> rhs);
	int virtual compareTo(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set);
	std::shared_ptr<android::icu::math::BigDecimal> virtual divide(std::shared_ptr<android::icu::math::BigDecimal> rhs);
	std::shared_ptr<android::icu::math::BigDecimal> virtual divide(std::shared_ptr<android::icu::math::BigDecimal> rhs,int round);
	std::shared_ptr<android::icu::math::BigDecimal> virtual divide(std::shared_ptr<android::icu::math::BigDecimal> rhs,int scale,int round);
	std::shared_ptr<android::icu::math::BigDecimal> virtual divide(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set);
	std::shared_ptr<android::icu::math::BigDecimal> virtual divideInteger(std::shared_ptr<android::icu::math::BigDecimal> rhs);
	std::shared_ptr<android::icu::math::BigDecimal> virtual divideInteger(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set);
	double virtual doubleValue();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	float virtual floatValue();
	std::shared_ptr<java::lang::String> virtual format(int before,int after);
	std::shared_ptr<java::lang::String> virtual format(int before,int after,int explaces,int exdigits,int exformint,int exround);
	int virtual hashCode();
	int virtual intValue();
	int virtual intValueExact();
	long long virtual longValue();
	long long virtual longValueExact();
	std::shared_ptr<android::icu::math::BigDecimal> virtual max(std::shared_ptr<android::icu::math::BigDecimal> rhs);
	std::shared_ptr<android::icu::math::BigDecimal> virtual max(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set);
	std::shared_ptr<android::icu::math::BigDecimal> virtual min(std::shared_ptr<android::icu::math::BigDecimal> rhs);
	std::shared_ptr<android::icu::math::BigDecimal> virtual min(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set);
	std::shared_ptr<android::icu::math::BigDecimal> virtual movePointLeft(int n);
	std::shared_ptr<android::icu::math::BigDecimal> virtual movePointRight(int n);
	std::shared_ptr<android::icu::math::BigDecimal> virtual multiply(std::shared_ptr<android::icu::math::BigDecimal> rhs);
	std::shared_ptr<android::icu::math::BigDecimal> virtual multiply(std::shared_ptr<android::icu::math::BigDecimal> cVar0,std::shared_ptr<android::icu::math::MathContext> set);
	std::shared_ptr<android::icu::math::BigDecimal> virtual negate();
	std::shared_ptr<android::icu::math::BigDecimal> virtual negate(std::shared_ptr<android::icu::math::MathContext> set);
	std::shared_ptr<android::icu::math::BigDecimal> virtual plus();
	std::shared_ptr<android::icu::math::BigDecimal> virtual plus(std::shared_ptr<android::icu::math::MathContext> set);
	std::shared_ptr<android::icu::math::BigDecimal> virtual pow(std::shared_ptr<android::icu::math::BigDecimal> rhs);
	std::shared_ptr<android::icu::math::BigDecimal> virtual pow(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set);
	std::shared_ptr<android::icu::math::BigDecimal> virtual remainder(std::shared_ptr<android::icu::math::BigDecimal> rhs);
	std::shared_ptr<android::icu::math::BigDecimal> virtual remainder(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set);
	int virtual scale();
	std::shared_ptr<android::icu::math::BigDecimal> virtual setScale(int scale);
	std::shared_ptr<android::icu::math::BigDecimal> virtual setScale(int scale,int round);
	short virtual shortValueExact();
	int virtual signum();
	std::shared_ptr<android::icu::math::BigDecimal> virtual subtract(std::shared_ptr<android::icu::math::BigDecimal> rhs);
	std::shared_ptr<android::icu::math::BigDecimal> virtual subtract(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set);
	std::shared_ptr<java::math::BigDecimal> virtual toBigDecimal();
	std::shared_ptr<java::math::BigInteger> virtual toBigInteger();
	std::shared_ptr<java::math::BigInteger> virtual toBigIntegerExact();
	char virtual toCharArray();
	std::shared_ptr<java::lang::String> virtual toString();
	std::shared_ptr<java::math::BigInteger> virtual unscaledValue();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::math::BigDecimal::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BigDecimal(){
	}

}; // class BigDecimal
}; // namespace android::icu::math

#endif //__android_icu_math_BigDecimal__

