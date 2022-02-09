#ifndef __java_lang_Byte__
#define __java_lang_Byte__
// H L:\smali2cpp20\x64\Release\out\java\lang\Byte.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Comparable.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::lang{
class Byte : public java::lang::Number, public java::lang::Comparable<java::lang::Byte> {
protected:
private:
	static std::shared_ptr<char[]> DIGITS;
	static std::shared_ptr<char[]> UPPER_CASE_DIGITS;
	static long long serialVersionUID;
	unsigned char value;
public:
	static int BYTES;
	static unsigned char MAX_VALUE;
	static unsigned char MIN_VALUE;
	static int SIZE;
	static std::shared_ptr<java::lang::Class<java::lang::Byte>> TYPE;
	static void static_cinit();
	Byte(unsigned char value);
	Byte(std::shared_ptr<java::lang::String> s);
	static int compare(unsigned char x,unsigned char y);
	static std::shared_ptr<java::lang::Byte> decode(std::shared_ptr<java::lang::String> nm);
	static int hashCode(unsigned char value);
	static unsigned char parseByte(std::shared_ptr<java::lang::String> s);
	static unsigned char parseByte(std::shared_ptr<java::lang::String> s,int radix);
	static std::shared_ptr<java::lang::String> toHexString(unsigned char b,bool upperCase);
	static std::shared_ptr<java::lang::String> toString(unsigned char b);
	static int toUnsignedInt(unsigned char x);
	static long long toUnsignedLong(unsigned char x);
	static std::shared_ptr<java::lang::Byte> valueOf(unsigned char b);
	static std::shared_ptr<java::lang::Byte> valueOf(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::Byte> valueOf(std::shared_ptr<java::lang::String> s,int radix);
	unsigned char virtual byteValue();
	int virtual compareTo(std::shared_ptr<java::lang::Byte> anotherByte);
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
			java::lang::Byte::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Byte(){
	}

}; // class Byte
}; // namespace java::lang

#endif //__java_lang_Byte__

