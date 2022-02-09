#ifndef __sun_security_util_DerValue__
#define __sun_security_util_DerValue__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\DerValue.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.util.Date.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerInputBuffer.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.ObjectIdentifier.h"

namespace sun::security::util{
class DerValue : public java::lang::Object {
protected:
	std::shared_ptr<sun::security::util::DerInputBuffer> buffer;
private:
	int length;
	std::shared_ptr<unsigned char[]> originalEncodedForm;
	unsigned char virtual append(std::shared_ptr<unsigned char[]> a,std::shared_ptr<unsigned char[]> b);
	static bool doEquals(std::shared_ptr<sun::security::util::DerValue> d1,std::shared_ptr<sun::security::util::DerValue> d2);
	std::shared_ptr<sun::security::util::DerInputStream> virtual init(unsigned char stringTag,std::shared_ptr<java::lang::String> value);
	std::shared_ptr<sun::security::util::DerInputStream> virtual init(bool fullyBuffered,std::shared_ptr<java::io::InputStream> in);
public:
	static unsigned char TAG_APPLICATION;
	static unsigned char TAG_CONTEXT;
	static unsigned char TAG_PRIVATE;
	static unsigned char TAG_UNIVERSAL;
	static unsigned char tag_BMPString;
	static unsigned char tag_BitString;
	static unsigned char tag_Boolean;
	static unsigned char tag_Enumerated;
	static unsigned char tag_GeneralString;
	static unsigned char tag_GeneralizedTime;
	static unsigned char tag_IA5String;
	static unsigned char tag_Integer;
	static unsigned char tag_Null;
	static unsigned char tag_ObjectId;
	static unsigned char tag_OctetString;
	static unsigned char tag_PrintableString;
	static unsigned char tag_Sequence;
	static unsigned char tag_SequenceOf;
	static unsigned char tag_Set;
	static unsigned char tag_SetOf;
	static unsigned char tag_T61String;
	static unsigned char tag_UTF8String;
	static unsigned char tag_UniversalString;
	static unsigned char tag_UtcTime;
	std::shared_ptr<sun::security::util::DerInputStream> data;
	unsigned char tag;
	DerValue(unsigned char stringTag,std::shared_ptr<java::lang::String> value);
	DerValue(unsigned char tag,std::shared_ptr<unsigned char[]> data);
	DerValue(std::shared_ptr<java::io::InputStream> in);
	DerValue(std::shared_ptr<java::lang::String> value);
	DerValue(std::shared_ptr<sun::security::util::DerInputBuffer> in,bool originalEncodedFormRetained);
	DerValue(std::shared_ptr<unsigned char[]> buf);
	DerValue(std::shared_ptr<unsigned char[]> buf,int offset,int len);
	static unsigned char createTag(unsigned char tagClass,bool form,unsigned char val);
	static bool isPrintableStringChar(char ch);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	bool virtual equals(std::shared_ptr<sun::security::util::DerValue> other);
	std::shared_ptr<java::lang::String> virtual getAsString();
	std::shared_ptr<java::lang::String> virtual getBMPString();
	std::shared_ptr<java::math::BigInteger> virtual getBigInteger();
	unsigned char virtual getBitString();
	unsigned char virtual getBitString(bool tagImplicit);
	bool virtual getBoolean();
	std::shared_ptr<sun::security::util::DerInputStream> virtual getData();
	unsigned char virtual getDataBytes();
	int virtual getEnumerated();
	std::shared_ptr<java::lang::String> virtual getGeneralString();
	std::shared_ptr<java::util::Date> virtual getGeneralizedTime();
	std::shared_ptr<java::lang::String> virtual getIA5String();
	int virtual getInteger();
	std::shared_ptr<sun::security::util::ObjectIdentifier> virtual getOID();
	unsigned char virtual getOctetString();
	unsigned char virtual getOriginalEncodedForm();
	std::shared_ptr<java::math::BigInteger> virtual getPositiveBigInteger();
	std::shared_ptr<java::lang::String> virtual getPrintableString();
	std::shared_ptr<java::lang::String> virtual getT61String();
	unsigned char virtual getTag();
	std::shared_ptr<java::util::Date> virtual getUTCTime();
	std::shared_ptr<java::lang::String> virtual getUTF8String();
	std::shared_ptr<sun::security::util::BitArray> virtual getUnalignedBitString();
	std::shared_ptr<sun::security::util::BitArray> virtual getUnalignedBitString(bool tagImplicit);
	int virtual hashCode();
	bool virtual isApplication();
	bool virtual isConstructed();
	bool virtual isConstructed(unsigned char constructedTag);
	bool virtual isContextSpecific();
	bool virtual isContextSpecific(unsigned char cntxtTag);
	bool virtual isPrivate();
	bool virtual isUniversal();
	int virtual length();
	void virtual resetTag(unsigned char tag);
	unsigned char virtual toByteArray();
	std::shared_ptr<sun::security::util::DerInputStream> virtual toDerInputStream();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~DerValue(){
	}

}; // class DerValue
}; // namespace sun::security::util

#endif //__sun_security_util_DerValue__

