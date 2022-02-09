#ifndef __sun_security_util_DerOutputStream__
#define __sun_security_util_DerOutputStream__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\DerOutputStream.smali
#include "java2ctype.h"
#include "java.io.ByteArrayOutputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.util.Comparator.h"
#include "java.util.Date.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.ByteArrayLexOrder.h"
#include "sun.security.util.ByteArrayTagOrder.h"
#include "sun.security.util.DerEncoder.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"

namespace sun::security::util{
class DerOutputStream : public java::io::ByteArrayOutputStream, public sun::security::util::DerEncoder {
protected:
private:
	static std::shared_ptr<sun::security::util::ByteArrayLexOrder> lexOrder;
	static std::shared_ptr<sun::security::util::ByteArrayTagOrder> tagOrder;
	void virtual putIntegerContents(int i);
	void virtual putOrderedSet(unsigned char tag,std::shared_ptr<std::vector<sun::security::util::DerEncoder>> set,std::shared_ptr<java::util::Comparator<unsigned char[]>> order);
	void virtual putTime(std::shared_ptr<java::util::Date> d,unsigned char tag);
	void virtual writeString(std::shared_ptr<java::lang::String> s,unsigned char stringTag,std::shared_ptr<java::lang::String> enc);
public:
	static void static_cinit();
	DerOutputStream();
	DerOutputStream(int size);
	void virtual derEncode(std::shared_ptr<java::io::OutputStream> out);
	void virtual putBMPString(std::shared_ptr<java::lang::String> s);
	void virtual putBitString(std::shared_ptr<unsigned char[]> bits);
	void virtual putBoolean(bool val);
	void virtual putDerValue(std::shared_ptr<sun::security::util::DerValue> val);
	void virtual putEnumerated(int i);
	void virtual putGeneralString(std::shared_ptr<java::lang::String> s);
	void virtual putGeneralizedTime(std::shared_ptr<java::util::Date> d);
	void virtual putIA5String(std::shared_ptr<java::lang::String> s);
	void virtual putInteger(int i);
	void virtual putInteger(std::shared_ptr<java::lang::Integer> i);
	void virtual putInteger(std::shared_ptr<java::math::BigInteger> i);
	void virtual putLength(int len);
	void virtual putNull();
	void virtual putOID(std::shared_ptr<sun::security::util::ObjectIdentifier> oid);
	void virtual putOctetString(std::shared_ptr<unsigned char[]> octets);
	void virtual putOrderedSet(unsigned char tag,std::shared_ptr<std::vector<sun::security::util::DerEncoder>> set);
	void virtual putOrderedSetOf(unsigned char tag,std::shared_ptr<std::vector<sun::security::util::DerEncoder>> set);
	void virtual putPrintableString(std::shared_ptr<java::lang::String> s);
	void virtual putSequence(std::shared_ptr<std::vector<sun::security::util::DerValue>> seq);
	void virtual putSet(std::shared_ptr<std::vector<sun::security::util::DerValue>> set);
	void virtual putT61String(std::shared_ptr<java::lang::String> s);
	void virtual putTag(unsigned char tagClass,bool form,unsigned char val);
	void virtual putTruncatedUnalignedBitString(std::shared_ptr<sun::security::util::BitArray> ba);
	void virtual putUTCTime(std::shared_ptr<java::util::Date> d);
	void virtual putUTF8String(std::shared_ptr<java::lang::String> s);
	void virtual putUnalignedBitString(std::shared_ptr<sun::security::util::BitArray> ba);
	void virtual write(unsigned char tag,std::shared_ptr<sun::security::util::DerOutputStream> out);
	void virtual write(unsigned char tag,std::shared_ptr<unsigned char[]> buf);
	void virtual writeImplicit(unsigned char tag,std::shared_ptr<sun::security::util::DerOutputStream> value);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::DerOutputStream::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DerOutputStream(){
	}

}; // class DerOutputStream
}; // namespace sun::security::util

#endif //__sun_security_util_DerOutputStream__

