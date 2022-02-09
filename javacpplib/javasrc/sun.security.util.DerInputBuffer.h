#ifndef __sun_security_util_DerInputBuffer__
#define __sun_security_util_DerInputBuffer__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\DerInputBuffer.smali
#include "java2ctype.h"
#include "java.io.ByteArrayInputStream.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.math.BigInteger.h"
#include "java.util.Date.h"
#include "sun.security.util.BitArray.h"

namespace sun::security::util{
class DerInputBuffer : public java::io::ByteArrayInputStream, public java::lang::Cloneable {
protected:
private:
	std::shared_ptr<java::util::Date> virtual getTime(int cVar4,bool generalized);
public:
	DerInputBuffer(std::shared_ptr<unsigned char[]> buf);
	DerInputBuffer(std::shared_ptr<unsigned char[]> buf,int offset,int len);
	std::shared_ptr<sun::security::util::DerInputBuffer> virtual dup();
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	bool virtual equals(std::shared_ptr<sun::security::util::DerInputBuffer> other);
	std::shared_ptr<java::math::BigInteger> virtual getBigInteger(int len,bool makePositive);
	unsigned char virtual getBitString();
	unsigned char virtual getBitString(int len);
	std::shared_ptr<java::util::Date> virtual getGeneralizedTime(int len);
	int virtual getInteger(int len);
	int virtual getPos();
	unsigned char virtual getSlice(int startPos,int size);
	std::shared_ptr<java::util::Date> virtual getUTCTime(int len);
	std::shared_ptr<sun::security::util::BitArray> virtual getUnalignedBitString();
	int virtual hashCode();
	int virtual peek();
	unsigned char virtual toByteArray();
	void virtual truncate(int len);
public:
	virtual ~DerInputBuffer(){
	}

}; // class DerInputBuffer
}; // namespace sun::security::util

#endif //__sun_security_util_DerInputBuffer__

