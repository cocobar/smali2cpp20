#ifndef __java_lang_Double__
#define __java_lang_Double__
// H L:\smali2cpp20\x64\Release\out\java\lang\Double.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Comparable.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::lang{
class Double : public java::lang::Number, public java::lang::Comparable<java::lang::Double> {
protected:
private:
	static long long serialVersionUID;
	double value;
public:
	static int BYTES;
	static int MAX_EXPONENT;
	static double MAX_VALUE;
	static int MIN_EXPONENT;
	static double MIN_NORMAL;
	static double MIN_VALUE;
	static double NEGATIVE_INFINITY;
	static double NaN;
	static double POSITIVE_INFINITY;
	static int SIZE;
	static std::shared_ptr<java::lang::Class<java::lang::Double>> TYPE;
	static void static_cinit();
	Double(double value);
	Double(std::shared_ptr<java::lang::String> s);
	static int compare(double d1,double d2);
	static long long doubleToLongBits(double value);
	static long long doubleToRawLongBits(double var0) = 0;
	static int hashCode(double value);
	static bool isFinite(double d);
	static bool isInfinite(double v);
	static bool isNaN(double v);
	static double longBitsToDouble(long long var0) = 0;
	static double max(double a,double b);
	static double min(double a,double b);
	static double parseDouble(std::shared_ptr<java::lang::String> s);
	static double sum(double a,double b);
	static std::shared_ptr<java::lang::String> toHexString(double d);
	static std::shared_ptr<java::lang::String> toString(double d);
	static std::shared_ptr<java::lang::Double> valueOf(double d);
	static std::shared_ptr<java::lang::Double> valueOf(std::shared_ptr<java::lang::String> s);
	unsigned char virtual byteValue();
	int virtual compareTo(std::shared_ptr<java::lang::Double> anotherDouble);
	double virtual doubleValue();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	float virtual floatValue();
	int virtual hashCode();
	int virtual intValue();
	bool virtual isInfinite();
	bool virtual isNaN();
	long long virtual longValue();
	short virtual shortValue();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Double::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Double(){
	}

}; // class Double
}; // namespace java::lang

#endif //__java_lang_Double__

