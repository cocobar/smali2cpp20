#ifndef __sun_security_util_DerInputStream__
#define __sun_security_util_DerInputStream__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\DerInputStream.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.util.Date.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerInputBuffer.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"

namespace sun::security::util{
class DerInputStream : public java::lang::Object {
protected:
	std::shared_ptr<sun::security::util::DerValue> virtual readVector(int startLen);
	std::shared_ptr<sun::security::util::DerValue> virtual readVector(int startLen,bool originalEncodedFormRetained);
private:
	void virtual init(std::shared_ptr<unsigned char[]> data,int offset,int len,bool allowIndefiniteLength);
	std::shared_ptr<java::lang::String> virtual readString(unsigned char stringTag,std::shared_ptr<java::lang::String> stringName,std::shared_ptr<java::lang::String> enc);
public:
	std::shared_ptr<sun::security::util::DerInputBuffer> buffer;
	unsigned char tag;
	DerInputStream(std::shared_ptr<sun::security::util::DerInputBuffer> buf);
	DerInputStream(std::shared_ptr<unsigned char[]> data);
	DerInputStream(std::shared_ptr<unsigned char[]> data,int offset,int len);
	DerInputStream(std::shared_ptr<unsigned char[]> data,int offset,int len,bool allowIndefiniteLength);
	static int getLength(int lenByte,std::shared_ptr<java::io::InputStream> in);
	static int getLength(std::shared_ptr<java::io::InputStream> in);
	int virtual available();
	std::shared_ptr<java::lang::String> virtual getBMPString();
	std::shared_ptr<java::math::BigInteger> virtual getBigInteger();
	unsigned char virtual getBitString();
	int virtual getByte();
	void virtual getBytes(std::shared_ptr<unsigned char[]> val);
	std::shared_ptr<sun::security::util::DerValue> virtual getDerValue();
	int virtual getEnumerated();
	std::shared_ptr<java::lang::String> virtual getGeneralString();
	std::shared_ptr<java::util::Date> virtual getGeneralizedTime();
	std::shared_ptr<java::lang::String> virtual getIA5String();
	int virtual getInteger();
	int virtual getLength();
	void virtual getNull();
	std::shared_ptr<sun::security::util::ObjectIdentifier> virtual getOID();
	unsigned char virtual getOctetString();
	std::shared_ptr<java::math::BigInteger> virtual getPositiveBigInteger();
	std::shared_ptr<java::lang::String> virtual getPrintableString();
	std::shared_ptr<sun::security::util::DerValue> virtual getSequence(int startLen);
	std::shared_ptr<sun::security::util::DerValue> virtual getSequence(int startLen,bool originalEncodedFormRetained);
	std::shared_ptr<sun::security::util::DerValue> virtual getSet(int startLen);
	std::shared_ptr<sun::security::util::DerValue> virtual getSet(int startLen,bool implicit);
	std::shared_ptr<sun::security::util::DerValue> virtual getSet(int startLen,bool implicit,bool originalEncodedFormRetained);
	std::shared_ptr<java::lang::String> virtual getT61String();
	std::shared_ptr<java::util::Date> virtual getUTCTime();
	std::shared_ptr<java::lang::String> virtual getUTF8String();
	std::shared_ptr<sun::security::util::BitArray> virtual getUnalignedBitString();
	void virtual mark(int value);
	int virtual peekByte();
	void virtual reset();
	std::shared_ptr<sun::security::util::DerInputStream> virtual subStream(int len,bool do_skip);
	unsigned char virtual toByteArray();
public:
	virtual ~DerInputStream(){
	}

}; // class DerInputStream
}; // namespace sun::security::util

#endif //__sun_security_util_DerInputStream__

