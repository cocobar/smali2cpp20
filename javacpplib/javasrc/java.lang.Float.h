#ifndef __java_lang_Float__
#define __java_lang_Float__
// H L:\smali2cpp20\x64\Release\out\java\lang\Float.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Comparable.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::lang{
class Float : public java::lang::Number, public java::lang::Comparable<java::lang::Float> {
protected:
private:
	static long long serialVersionUID;
	float value;
public:
	static int BYTES;
	static int MAX_EXPONENT;
	static float MAX_VALUE;
	static int MIN_EXPONENT;
	static float MIN_NORMAL;
	static float MIN_VALUE;
	static float NEGATIVE_INFINITY;
	static float NaN;
	static float POSITIVE_INFINITY;
	static int SIZE;
	static std::shared_ptr<java::lang::Class<java::lang::Float>> TYPE;
	static void static_cinit();
	Float(double value);
	Float(float value);
	Float(std::shared_ptr<java::lang::String> s);
	static int compare(float f1,float f2);
	static int floatToIntBits(float value);
	static int floatToRawIntBits(float var0) = 0;
	static int hashCode(float value);
	static float intBitsToFloat(int var0) = 0;
	static bool isFinite(float f);
	static bool isInfinite(float v);
	static bool isNaN(float v);
	static float max(float a,float b);
	static float min(float a,float b);
	static float parseFloat(std::shared_ptr<java::lang::String> s);
	static float sum(float a,float b);
	static std::shared_ptr<java::lang::String> toHexString(float f);
	static std::shared_ptr<java::lang::String> toString(float f);
	static std::shared_ptr<java::lang::Float> valueOf(float f);
	static std::shared_ptr<java::lang::Float> valueOf(std::shared_ptr<java::lang::String> s);
	unsigned char virtual byteValue();
	int virtual compareTo(std::shared_ptr<java::lang::Float> anotherFloat);
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
			java::lang::Float::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Float(){
	}

}; // class Float
}; // namespace java::lang

#endif //__java_lang_Float__

