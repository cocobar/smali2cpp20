#ifndef __sun_security_pkcs_PKCS9Attributes__
#define __sun_security_pkcs_PKCS9Attributes__
// H L:\smali2cpp20\x64\Release\out\sun\security\pkcs\PKCS9Attributes.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Hashtable.h"
#include "sun.security.pkcs.PKCS9Attribute.h"
#include "sun.security.util.DerEncoder.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.ObjectIdentifier.h"

namespace sun::security::pkcs{
class PKCS9Attributes : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::Hashtable<sun::security::util::ObjectIdentifier,sun::security::pkcs::PKCS9Attribute>> attributes;
	std::shared_ptr<unsigned char[]> derEncoding;
	bool ignoreUnsupportedAttributes;
	std::shared_ptr<java::util::Hashtable<sun::security::util::ObjectIdentifier,sun::security::util::ObjectIdentifier>> permittedAttributes;
	unsigned char virtual decode(std::shared_ptr<sun::security::util::DerInputStream> in);
	unsigned char virtual generateDerEncoding();
public:
	PKCS9Attributes(std::shared_ptr<sun::security::util::DerInputStream> in);
	PKCS9Attributes(std::shared_ptr<sun::security::util::DerInputStream> in,bool ignoreUnsupportedAttributes);
	PKCS9Attributes(std::shared_ptr<std::vector<sun::security::pkcs::PKCS9Attribute>> attribs);
	PKCS9Attributes(std::shared_ptr<std::vector<sun::security::util::ObjectIdentifier>> permittedAttributes,std::shared_ptr<sun::security::util::DerInputStream> in);
	static std::shared_ptr<sun::security::util::DerEncoder> castToDerEncoder(std::shared_ptr<std::vector<java::lang::Object>> objs);
	void virtual encode(unsigned char tag,std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<sun::security::pkcs::PKCS9Attribute> virtual getAttribute(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<sun::security::pkcs::PKCS9Attribute> virtual getAttribute(std::shared_ptr<sun::security::util::ObjectIdentifier> oid);
	std::shared_ptr<java::lang::Object> virtual getAttributeValue(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::Object> virtual getAttributeValue(std::shared_ptr<sun::security::util::ObjectIdentifier> oid);
	std::shared_ptr<sun::security::pkcs::PKCS9Attribute> virtual getAttributes();
	unsigned char virtual getDerEncoding();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~PKCS9Attributes(){
	}

}; // class PKCS9Attributes
}; // namespace sun::security::pkcs

#endif //__sun_security_pkcs_PKCS9Attributes__

