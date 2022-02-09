#ifndef __sun_security_pkcs_PKCS7_S_WrappedX509Certificate__
#define __sun_security_pkcs_PKCS7_S_WrappedX509Certificate__
// H L:\smali2cpp20\x64\Release\out\sun\security\pkcs\PKCS7$WrappedX509Certificate.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.security.Principal.h"
#include "java.security.Provider.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Date.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"

namespace sun::security::pkcs{
class PKCS7_S_WrappedX509Certificate : public java::security::cert::X509Certificate {
protected:
private:
	std::shared_ptr<java::security::cert::X509Certificate> wrapped;
public:
	PKCS7_S_WrappedX509Certificate(std::shared_ptr<java::security::cert::X509Certificate> wrapped);
	void virtual checkValidity();
	void virtual checkValidity(std::shared_ptr<java::util::Date> date);
	int virtual getBasicConstraints();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getCriticalExtensionOIDs();
	unsigned char virtual getEncoded();
	std::shared_ptr<java::util::List<java::lang::String>> virtual getExtendedKeyUsage();
	unsigned char virtual getExtensionValue(std::shared_ptr<java::lang::String> oid);
	std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> virtual getIssuerAlternativeNames();
	std::shared_ptr<java::security::Principal> virtual getIssuerDN();
	bool virtual getIssuerUniqueID();
	std::shared_ptr<javax::security::auth::x500::X500Principal> virtual getIssuerX500Principal();
	bool virtual getKeyUsage();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getNonCriticalExtensionOIDs();
	std::shared_ptr<java::util::Date> virtual getNotAfter();
	std::shared_ptr<java::util::Date> virtual getNotBefore();
	std::shared_ptr<java::security::PublicKey> virtual getPublicKey();
	std::shared_ptr<java::math::BigInteger> virtual getSerialNumber();
	std::shared_ptr<java::lang::String> virtual getSigAlgName();
	std::shared_ptr<java::lang::String> virtual getSigAlgOID();
	unsigned char virtual getSigAlgParams();
	unsigned char virtual getSignature();
	std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> virtual getSubjectAlternativeNames();
	std::shared_ptr<java::security::Principal> virtual getSubjectDN();
	bool virtual getSubjectUniqueID();
	std::shared_ptr<javax::security::auth::x500::X500Principal> virtual getSubjectX500Principal();
	unsigned char virtual getTBSCertificate();
	int virtual getVersion();
	bool virtual hasUnsupportedCriticalExtension();
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual verify(std::shared_ptr<java::security::PublicKey> key);
	void virtual verify(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::lang::String> sigProvider);
	void virtual verify(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::security::Provider> sigProvider);
public:
	virtual ~PKCS7_S_WrappedX509Certificate(){
	}

}; // class PKCS7_S_WrappedX509Certificate
}; // namespace sun::security::pkcs

#endif //__sun_security_pkcs_PKCS7_S_WrappedX509Certificate__

