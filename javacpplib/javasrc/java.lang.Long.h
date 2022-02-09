#ifndef __java_lang_Long__
#define __java_lang_Long__
// H L:\smali2cpp20\x64\Release\out\java\lang\Long.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Comparable.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"

namespace java::lang{
class Long : public java::lang::Number, public java::lang::Comparable<java::lang::Long> {
protected:
private:
	static long long serialVersionUID;
	long long value;
	static std::shared_ptr<java::math::BigInteger> toUnsignedBigInteger(long long i);
public:
	static int BYTES;
	static long long MAX_VALUE;
	static long long MIN_VALUE;
	static int SIZE;
	static std::shared_ptr<java::lang::Class<java::lang::Long>> TYPE;
	static void static_cinit();
	Long(long long value);
	Long(std::shared_ptr<java::lang::String> s);
	static int bitCount(long long i);
	static int compare(long long x,long long y);
	static int compareUnsigned(long long x,long long y);
	static std::shared_ptr<java::lang::Long> decode(std::shared_ptr<java::lang::String> nm);
	static long long divideUnsigned(long long dividend,long long divisor);
	static int formatUnsignedLong(long long val,int shift,std::shared_ptr<char[]> buf,int offset,int len);
	static void getChars(long long cVar0,int index,std::shared_ptr<char[]> buf);
	static std::shared_ptr<java::lang::Long> getLong(std::shared_ptr<java::lang::String> nm);
	static std::shared_ptr<java::lang::Long> getLong(std::shared_ptr<java::lang::String> nm,long long val);
	static std::shared_ptr<java::lang::Long> getLong(std::shared_ptr<java::lang::String> nm,std::shared_ptr<java::lang::Long> val);
	static int hashCode(long long value);
	static long long highestOneBit(long long i);
	static long long lowestOneBit(long long i);
	static long long max(long long a,long long b);
	static long long min(long long a,long long b);
	static int numberOfLeadingZeros(long long i);
	static int numberOfTrailingZeros(long long i);
	static long long parseLong(std::shared_ptr<java::lang::String> s);
	static long long parseLong(std::shared_ptr<java::lang::String> s,int radix);
	static long long parseUnsignedLong(std::shared_ptr<java::lang::String> s);
	static long long parseUnsignedLong(std::shared_ptr<java::lang::String> s,int radix);
	static long long remainderUnsigned(long long dividend,long long divisor);
	static long long reverse(long long i);
	static long long reverseBytes(long long i);
	static long long rotateLeft(long long i,int distance);
	static long long rotateRight(long long i,int distance);
	static int signum(long long i);
	static int stringSize(long long x);
	static long long sum(long long a,long long b);
	static std::shared_ptr<java::lang::String> toBinaryString(long long i);
	static std::shared_ptr<java::lang::String> toHexString(long long i);
	static std::shared_ptr<java::lang::String> toOctalString(long long i);
	static std::shared_ptr<java::lang::String> toString(long long i);
	static std::shared_ptr<java::lang::String> toString(long long cVar1,int cVar0);
	static std::shared_ptr<java::lang::String> toUnsignedString(long long i);
	static std::shared_ptr<java::lang::String> toUnsignedString(long long i,int radix);
	static std::shared_ptr<java::lang::String> toUnsignedString0(long long val,int shift);
	static std::shared_ptr<java::lang::Long> valueOf(long long l);
	static std::shared_ptr<java::lang::Long> valueOf(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::Long> valueOf(std::shared_ptr<java::lang::String> s,int radix);
	unsigned char virtual byteValue();
	int virtual compareTo(std::shared_ptr<java::lang::Long> anotherLong);
	double virtual doubleValue();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	float virtual floatValue();
	int virtual hashCode();
	int virtual intValue();
	long long virtual longValue();
	short virtual shortValue();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Long::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Long(){
	}

}; // class Long
}; // namespace java::lang

#endif //__java_lang_Long__

