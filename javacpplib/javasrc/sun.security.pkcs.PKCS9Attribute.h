#ifndef __sun_security_pkcs_PKCS9Attribute__
#define __sun_security_pkcs_PKCS9Attribute__
// H L:\smali2cpp20\x64\Release\out\sun\security\pkcs\PKCS9Attribute.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Byte.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Hashtable.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerEncoder.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"

namespace sun::security::pkcs{
class PKCS9Attribute : public sun::security::util::DerEncoder {
protected:
private:
	static std::shared_ptr<java::lang::Class<java::lang::Object>> BYTE_ARRAY_CLASS;
	static std::shared_ptr<java::util::Hashtable<java::lang::String,sun::security::util::ObjectIdentifier>> NAME_OID_TABLE;
	static std::shared_ptr<java::util::Hashtable<sun::security::util::ObjectIdentifier,java::lang::String>> OID_NAME_TABLE;
	static std::shared_ptr<std::vector<std::vector<java::lang::Byte>>> PKCS9_VALUE_TAGS;
	static std::shared_ptr<java::lang::String> RSA_PROPRIETARY_STR;
	static std::shared_ptr<bool[]> SINGLE_VALUED;
	static std::shared_ptr<java::lang::String> SMIME_SIGNING_DESC_STR;
	static std::shared_ptr<std::vector<java::lang::Class<java::lang::Object>>> VALUE_CLASSES;
	static std::shared_ptr<sun::security::util::Debug> debug;
	int index;
	std::shared_ptr<sun::security::util::ObjectIdentifier> oid;
	std::shared_ptr<java::lang::Object> value;
	void virtual init(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<java::lang::Object> value);
	void virtual throwSingleValuedException();
	void virtual throwTagException(std::shared_ptr<java::lang::Byte> tag);
public:
	static std::shared_ptr<sun::security::util::ObjectIdentifier> CHALLENGE_PASSWORD_OID;
	static std::shared_ptr<java::lang::String> CHALLENGE_PASSWORD_STR;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> CONTENT_TYPE_OID;
	static std::shared_ptr<java::lang::String> CONTENT_TYPE_STR;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> COUNTERSIGNATURE_OID;
	static std::shared_ptr<java::lang::String> COUNTERSIGNATURE_STR;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> EMAIL_ADDRESS_OID;
	static std::shared_ptr<java::lang::String> EMAIL_ADDRESS_STR;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> EXTENDED_CERTIFICATE_ATTRIBUTES_OID;
	static std::shared_ptr<java::lang::String> EXTENDED_CERTIFICATE_ATTRIBUTES_STR;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> EXTENSION_REQUEST_OID;
	static std::shared_ptr<java::lang::String> EXTENSION_REQUEST_STR;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> ISSUER_SERIALNUMBER_OID;
	static std::shared_ptr<java::lang::String> ISSUER_SERIALNUMBER_STR;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> MESSAGE_DIGEST_OID;
	static std::shared_ptr<java::lang::String> MESSAGE_DIGEST_STR;
	static std::shared_ptr<std::vector<sun::security::util::ObjectIdentifier>> PKCS9_OIDS;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SIGNATURE_TIMESTAMP_TOKEN_OID;
	static std::shared_ptr<java::lang::String> SIGNATURE_TIMESTAMP_TOKEN_STR;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SIGNING_CERTIFICATE_OID;
	static std::shared_ptr<java::lang::String> SIGNING_CERTIFICATE_STR;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SIGNING_TIME_OID;
	static std::shared_ptr<java::lang::String> SIGNING_TIME_STR;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SMIME_CAPABILITY_OID;
	static std::shared_ptr<java::lang::String> SMIME_CAPABILITY_STR;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> UNSTRUCTURED_ADDRESS_OID;
	static std::shared_ptr<java::lang::String> UNSTRUCTURED_ADDRESS_STR;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> UNSTRUCTURED_NAME_OID;
	static std::shared_ptr<java::lang::String> UNSTRUCTURED_NAME_STR;
	static void static_cinit();
	PKCS9Attribute(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> value);
	PKCS9Attribute(std::shared_ptr<sun::security::util::DerValue> derVal);
	PKCS9Attribute(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<java::lang::Object> value);
	static std::shared_ptr<java::lang::String> getName(std::shared_ptr<sun::security::util::ObjectIdentifier> oid);
	static std::shared_ptr<sun::security::util::ObjectIdentifier> getOID(std::shared_ptr<java::lang::String> name);
	static int indexOf(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<std::vector<java::lang::Object>> a,int start);
	void virtual derEncode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<sun::security::util::ObjectIdentifier> virtual getOID();
	std::shared_ptr<java::lang::Object> virtual getValue();
	bool virtual isKnown();
	bool virtual isSingleValued();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::pkcs::PKCS9Attribute::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PKCS9Attribute(){
	}

}; // class PKCS9Attribute
}; // namespace sun::security::pkcs

#endif //__sun_security_pkcs_PKCS9Attribute__

