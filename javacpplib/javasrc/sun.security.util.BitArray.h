#ifndef __sun_security_util_BitArray__
#define __sun_security_util_BitArray__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\BitArray.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace sun::security::util{
class BitArray : public java::lang::Object {
protected:
private:
	static int BITS_PER_UNIT;
	static int BYTES_PER_LINE;
	static std::shared_ptr<unsigned char[][]> NYBBLE;
	int length;
	std::shared_ptr<unsigned char[]> repn;
	BitArray(std::shared_ptr<sun::security::util::BitArray> ba);
	static int position(int idx);
	static int subscript(int idx);
public:
	static void static_cinit();
	BitArray(int length);
	BitArray(int length,std::shared_ptr<unsigned char[]> a);
	BitArray(std::shared_ptr<bool[]> bits);
	std::shared_ptr<java::lang::Object> virtual clone();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	bool virtual get(int index);
	int virtual hashCode();
	int virtual length();
	void virtual set(int index,bool value);
	bool virtual toBooleanArray();
	unsigned char virtual toByteArray();
	std::shared_ptr<java::lang::String> virtual toString();
	std::shared_ptr<sun::security::util::BitArray> virtual truncate();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::BitArray::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BitArray(){
	}

}; // class BitArray
}; // namespace sun::security::util

#endif //__sun_security_util_BitArray__

