#ifndef __java_lang_Math__
#define __java_lang_Math__
// H L:\smali2cpp20\x64\Release\out\java\lang\Math.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace java::lang{
class Math : public java::lang::Object {
protected:
private:
	static long long negativeZeroDoubleBits;
	static long long negativeZeroFloatBits;
	Math();
public:
	static bool _assertionsDisabled;
	static double E;
	static double PI;
	static double twoToTheDoubleScaleDown;
	static double twoToTheDoubleScaleUp;
	static void static_cinit();
	static double IEEEremainder(double var0,double var1);
	static double abs(double a);
	static float abs(float a);
	static int abs(int cVar0);
	static long long abs(long long cVar0);
	static double acos(double var0);
	static int addExact(int x,int y);
	static long long addExact(long long x,long long y);
	static double asin(double var0);
	static double atan(double var0);
	static double atan2(double var0,double var1);
	static double cbrt(double var0);
	static double ceil(double var0);
	static double copySign(double magnitude,double sign);
	static float copySign(float magnitude,float sign);
	static double cos(double var0);
	static double cosh(double var0);
	static int decrementExact(int a);
	static long long decrementExact(long long a);
	static double exp(double var0);
	static double expm1(double var0);
	static double floor(double var0);
	static int floorDiv(int x,int y);
	static long long floorDiv(long long x,long long y);
	static int floorMod(int x,int y);
	static long long floorMod(long long x,long long y);
	static int getExponent(double d);
	static int getExponent(float f);
	static double hypot(double var0,double var1);
	static int incrementExact(int a);
	static long long incrementExact(long long a);
	static double log(double var0);
	static double log10(double var0);
	static double log1p(double var0);
	static double max(double a,double b);
	static float max(float a,float b);
	static int max(int a,int b);
	static long long max(long long a,long long b);
	static double min(double a,double b);
	static float min(float a,float b);
	static int min(int a,int b);
	static long long min(long long a,long long b);
	static int multiplyExact(int x,int y);
	static long long multiplyExact(long long x,long long y);
	static int negateExact(int a);
	static long long negateExact(long long a);
	static double nextAfter(double start,double direction);
	static float nextAfter(float start,double direction);
	static double nextDown(double d);
	static float nextDown(float f);
	static double nextUp(double d);
	static float nextUp(float f);
	static double pow(double var0,double var1);
	static double powerOfTwoD(int n);
	static float powerOfTwoF(int n);
	static double random();
	static int randomIntInternal();
	static long long randomLongInternal();
	static double rint(double var0);
	static int round(float a);
	static long long round(double a);
	static double scalb(double d,int scaleFactor);
	static float scalb(float f,int scaleFactor);
	static void setRandomSeedInternal(long long seed);
	static double signum(double d);
	static float signum(float f);
	static double sin(double var0);
	static double sinh(double var0);
	static double sqrt(double var0);
	static int subtractExact(int x,int y);
	static long long subtractExact(long long x,long long y);
	static double tan(double var0);
	static double tanh(double var0);
	static double toDegrees(double angrad);
	static int toIntExact(long long value);
	static double toRadians(double angdeg);
	static double ulp(double d);
	static float ulp(float f);
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Math::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Math(){
	}

}; // class Math
}; // namespace java::lang

#endif //__java_lang_Math__

