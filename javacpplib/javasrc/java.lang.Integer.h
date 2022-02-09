#ifndef __java_lang_Integer__
#define __java_lang_Integer__
// H L:\smali2cpp20\x64\Release\out\java\lang\Integer.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Comparable.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::lang{
class Integer : public java::lang::Number, public java::lang::Comparable<java::lang::Integer> {
protected:
private:
	static std::shared_ptr<std::vector<java::lang::String>> SMALL_NEG_VALUES;
	static std::shared_ptr<std::vector<java::lang::String>> SMALL_NONNEG_VALUES;
	static long long serialVersionUID;
	int value;
	static std::shared_ptr<java::lang::String> toUnsignedString0(int val,int shift);
public:
	static int BYTES;
	static std::shared_ptr<char[]> DigitOnes;
	static std::shared_ptr<char[]> DigitTens;
	static int MAX_VALUE;
	static int MIN_VALUE;
	static int SIZE;
	static std::shared_ptr<java::lang::Class<java::lang::Integer>> TYPE;
	static std::shared_ptr<char[]> digits;
	static std::shared_ptr<int[]> sizeTable;
	static void static_cinit();
	Integer(int value);
	Integer(std::shared_ptr<java::lang::String> s);
	static int bitCount(int i);
	static int compare(int x,int y);
	static int compareUnsigned(int x,int y);
	static std::shared_ptr<java::lang::Integer> decode(std::shared_ptr<java::lang::String> nm);
	static int divideUnsigned(int dividend,int divisor);
	static int formatUnsignedInt(int val,int shift,std::shared_ptr<char[]> buf,int offset,int len);
	static void getChars(int cVar0,int index,std::shared_ptr<char[]> buf);
	static std::shared_ptr<java::lang::Integer> getInteger(std::shared_ptr<java::lang::String> nm);
	static std::shared_ptr<java::lang::Integer> getInteger(std::shared_ptr<java::lang::String> nm,int val);
	static std::shared_ptr<java::lang::Integer> getInteger(std::shared_ptr<java::lang::String> nm,std::shared_ptr<java::lang::Integer> val);
	static int hashCode(int value);
	static int highestOneBit(int i);
	static int lowestOneBit(int i);
	static int max(int a,int b);
	static int min(int a,int b);
	static int numberOfLeadingZeros(int cVar3);
	static int numberOfTrailingZeros(int cVar3);
	static int parseInt(std::shared_ptr<java::lang::String> s);
	static int parseInt(std::shared_ptr<java::lang::String> s,int radix);
	static int parseUnsignedInt(std::shared_ptr<java::lang::String> s);
	static int parseUnsignedInt(std::shared_ptr<java::lang::String> s,int radix);
	static int remainderUnsigned(int dividend,int divisor);
	static int reverse(int i);
	static int reverseBytes(int i);
	static int rotateLeft(int i,int distance);
	static int rotateRight(int i,int distance);
	static int signum(int i);
	static int stringSize(int x);
	static int sum(int a,int b);
	static std::shared_ptr<java::lang::String> toBinaryString(int i);
	static std::shared_ptr<java::lang::String> toHexString(int i);
	static std::shared_ptr<java::lang::String> toOctalString(int i);
	static std::shared_ptr<java::lang::String> toString(int cVar5);
	static std::shared_ptr<java::lang::String> toString(int cVar1,int cVar0);
	static long long toUnsignedLong(int x);
	static std::shared_ptr<java::lang::String> toUnsignedString(int i);
	static std::shared_ptr<java::lang::String> toUnsignedString(int i,int radix);
	static std::shared_ptr<java::lang::Integer> valueOf(int i);
	static std::shared_ptr<java::lang::Integer> valueOf(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::Integer> valueOf(std::shared_ptr<java::lang::String> s,int radix);
	unsigned char virtual byteValue();
	int virtual compareTo(std::shared_ptr<java::lang::Integer> anotherInteger);
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
			java::lang::Integer::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Integer(){
	}

}; // class Integer
}; // namespace java::lang

#endif //__java_lang_Integer__

