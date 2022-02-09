#ifndef __sun_security_pkcs_ContentInfo__
#define __sun_security_pkcs_ContentInfo__
// H L:\smali2cpp20\x64\Release\out\sun\security\pkcs\ContentInfo.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"

namespace sun::security::pkcs{
class ContentInfo : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> OLD_DATA;
	static std::shared_ptr<int[]> OLD_SDATA;
	static std::shared_ptr<int[]> crdata;
	static std::shared_ptr<int[]> data;
	static std::shared_ptr<int[]> ddata;
	static std::shared_ptr<int[]> edata;
	static std::shared_ptr<int[]> nsdata;
	static std::shared_ptr<int[]> pkcs7;
	static std::shared_ptr<int[]> sdata;
	static std::shared_ptr<int[]> sedata;
	static std::shared_ptr<int[]> tstInfo;
public:
	static std::shared_ptr<sun::security::util::ObjectIdentifier> DATA_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> DIGESTED_DATA_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> ENCRYPTED_DATA_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> ENVELOPED_DATA_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> NETSCAPE_CERT_SEQUENCE_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> OLD_DATA_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> OLD_SIGNED_DATA_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> PKCS7_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SIGNED_AND_ENVELOPED_DATA_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SIGNED_DATA_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> TIMESTAMP_TOKEN_INFO_OID;
	std::shared_ptr<sun::security::util::DerValue> content;
	std::shared_ptr<sun::security::util::ObjectIdentifier> contentType;
	static void static_cinit();
	ContentInfo(std::shared_ptr<sun::security::util::DerInputStream> derin);
	ContentInfo(std::shared_ptr<sun::security::util::DerInputStream> derin,bool oldStyle);
	ContentInfo(std::shared_ptr<sun::security::util::ObjectIdentifier> contentType,std::shared_ptr<sun::security::util::DerValue> content);
	ContentInfo(std::shared_ptr<unsigned char[]> bytes);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	std::shared_ptr<sun::security::util::DerValue> virtual getContent();
	unsigned char virtual getContentBytes();
	std::shared_ptr<sun::security::util::ObjectIdentifier> virtual getContentType();
	unsigned char virtual getData();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::pkcs::ContentInfo::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ContentInfo(){
	}

}; // class ContentInfo
}; // namespace sun::security::pkcs

#endif //__sun_security_pkcs_ContentInfo__

