#ifndef __sun_security_x509_X509CertInfo__
#define __sun_security_x509_X509CertInfo__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\X509CertInfo.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "java.util.Map.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.CertificateAlgorithmId.h"
#include "sun.security.x509.CertificateExtensions.h"
#include "sun.security.x509.CertificateSerialNumber.h"
#include "sun.security.x509.CertificateValidity.h"
#include "sun.security.x509.CertificateVersion.h"
#include "sun.security.x509.CertificateX509Key.h"
#include "sun.security.x509.UniqueIdentity.h"
#include "sun.security.x509.X500Name.h"

namespace sun::security::x509{
class X509CertInfo : public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
	std::shared_ptr<sun::security::x509::CertificateAlgorithmId> algId;
	std::shared_ptr<sun::security::x509::CertificateExtensions> extensions;
	std::shared_ptr<sun::security::x509::CertificateValidity> interval;
	std::shared_ptr<sun::security::x509::X500Name> issuer;
	std::shared_ptr<sun::security::x509::UniqueIdentity> issuerUniqueId;
	std::shared_ptr<sun::security::x509::CertificateX509Key> pubKey;
	std::shared_ptr<sun::security::x509::CertificateSerialNumber> serialNum;
	std::shared_ptr<sun::security::x509::X500Name> subject;
	std::shared_ptr<sun::security::x509::UniqueIdentity> subjectUniqueId;
	std::shared_ptr<sun::security::x509::CertificateVersion> version;
private:
	static int ATTR_ALGORITHM;
	static int ATTR_EXTENSIONS;
	static int ATTR_ISSUER;
	static int ATTR_ISSUER_ID;
	static int ATTR_KEY;
	static int ATTR_SERIAL;
	static int ATTR_SUBJECT;
	static int ATTR_SUBJECT_ID;
	static int ATTR_VALIDITY;
	static int ATTR_VERSION;
	static std::shared_ptr<java::util::Map<java::lang::String,java::lang::Integer>> map;
	std::shared_ptr<unsigned char[]> rawCertInfo;
	int virtual attributeMap(std::shared_ptr<java::lang::String> name);
	void virtual emit(std::shared_ptr<sun::security::util::DerOutputStream> out);
	std::shared_ptr<java::lang::Object> virtual getX500Name(std::shared_ptr<java::lang::String> name,bool getIssuer);
	void virtual parse(std::shared_ptr<sun::security::util::DerValue> val);
	void virtual setAlgorithmId(std::shared_ptr<java::lang::Object> val);
	void virtual setExtensions(std::shared_ptr<java::lang::Object> val);
	void virtual setIssuer(std::shared_ptr<java::lang::Object> val);
	void virtual setIssuerUniqueId(std::shared_ptr<java::lang::Object> val);
	void virtual setKey(std::shared_ptr<java::lang::Object> val);
	void virtual setSerialNumber(std::shared_ptr<java::lang::Object> val);
	void virtual setSubject(std::shared_ptr<java::lang::Object> val);
	void virtual setSubjectUniqueId(std::shared_ptr<java::lang::Object> val);
	void virtual setValidity(std::shared_ptr<java::lang::Object> val);
	void virtual setVersion(std::shared_ptr<java::lang::Object> val);
	void virtual verifyCert(std::shared_ptr<sun::security::x509::X500Name> subject,std::shared_ptr<sun::security::x509::CertificateExtensions> extensions);
public:
	static std::shared_ptr<java::lang::String> ALGORITHM_ID;
	static std::shared_ptr<java::lang::String> DN_NAME;
	static std::shared_ptr<java::lang::String> EXTENSIONS;
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> ISSUER;
	static std::shared_ptr<java::lang::String> ISSUER_ID;
	static std::shared_ptr<java::lang::String> KEY;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> SERIAL_NUMBER;
	static std::shared_ptr<java::lang::String> SUBJECT;
	static std::shared_ptr<java::lang::String> SUBJECT_ID;
	static std::shared_ptr<java::lang::String> VALIDITY;
	static std::shared_ptr<java::lang::String> VERSION;
	static void static_cinit();
	X509CertInfo();
	X509CertInfo(std::shared_ptr<sun::security::util::DerValue> derVal);
	X509CertInfo(std::shared_ptr<unsigned char[]> cert);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	bool virtual equals(std::shared_ptr<sun::security::x509::X509CertInfo> other);
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	unsigned char virtual getEncodedInfo();
	std::shared_ptr<java::lang::String> virtual getName();
	int virtual hashCode();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> val);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::X509CertInfo::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~X509CertInfo(){
	}

}; // class X509CertInfo
}; // namespace sun::security::x509

#endif //__sun_security_x509_X509CertInfo__

