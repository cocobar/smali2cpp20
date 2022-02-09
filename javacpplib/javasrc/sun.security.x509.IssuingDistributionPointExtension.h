#ifndef __sun_security_x509_IssuingDistributionPointExtension__
#define __sun_security_x509_IssuingDistributionPointExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\IssuingDistributionPointExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.DistributionPointName.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.ReasonFlags.h"

namespace sun::security::x509{
class IssuingDistributionPointExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	static unsigned char TAG_DISTRIBUTION_POINT;
	static unsigned char TAG_INDIRECT_CRL;
	static unsigned char TAG_ONLY_ATTRIBUTE_CERTS;
	static unsigned char TAG_ONLY_CA_CERTS;
	static unsigned char TAG_ONLY_SOME_REASONS;
	static unsigned char TAG_ONLY_USER_CERTS;
	std::shared_ptr<sun::security::x509::DistributionPointName> distributionPoint;
	bool hasOnlyAttributeCerts;
	bool hasOnlyCACerts;
	bool hasOnlyUserCerts;
	bool isIndirectCRL;
	std::shared_ptr<sun::security::x509::ReasonFlags> revocationReasons;
	void virtual encodeThis();
public:
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> INDIRECT_CRL;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> ONLY_ATTRIBUTE_CERTS;
	static std::shared_ptr<java::lang::String> ONLY_CA_CERTS;
	static std::shared_ptr<java::lang::String> ONLY_USER_CERTS;
	static std::shared_ptr<java::lang::String> POINT;
	static std::shared_ptr<java::lang::String> REASONS;
	IssuingDistributionPointExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	IssuingDistributionPointExtension(std::shared_ptr<sun::security::x509::DistributionPointName> distributionPoint,std::shared_ptr<sun::security::x509::ReasonFlags> revocationReasons,bool hasOnlyUserCerts,bool hasOnlyCACerts,bool hasOnlyAttributeCerts,bool isIndirectCRL);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~IssuingDistributionPointExtension(){
	}

}; // class IssuingDistributionPointExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_IssuingDistributionPointExtension__

