#ifndef __sun_security_x509_X509CertImpl__
#define __sun_security_x509_X509CertImpl__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\X509CertImpl.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.math.BigInteger.h"
#include "java.security.Principal.h"
#include "java.security.PrivateKey.h"
#include "java.security.Provider.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Date.h"
#include "java.util.Enumeration.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "java.util.concurrent.ConcurrentHashMap.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.util.DerEncoder.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AccessDescription.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.AuthorityInfoAccessExtension.h"
#include "sun.security.x509.AuthorityKeyIdentifierExtension.h"
#include "sun.security.x509.BasicConstraintsExtension.h"
#include "sun.security.x509.CRLDistributionPointsExtension.h"
#include "sun.security.x509.CertificatePoliciesExtension.h"
#include "sun.security.x509.ExtendedKeyUsageExtension.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.IssuerAlternativeNameExtension.h"
#include "sun.security.x509.KeyIdentifier.h"
#include "sun.security.x509.NameConstraintsExtension.h"
#include "sun.security.x509.PolicyConstraintsExtension.h"
#include "sun.security.x509.PolicyMappingsExtension.h"
#include "sun.security.x509.PrivateKeyUsageExtension.h"
#include "sun.security.x509.SerialNumber.h"
#include "sun.security.x509.SubjectAlternativeNameExtension.h"
#include "sun.security.x509.SubjectKeyIdentifierExtension.h"
#include "sun.security.x509.X509CertInfo.h"

namespace sun::security::x509{
class X509CertImpl : public java::security::cert::X509Certificate, public sun::security::util::DerEncoder {
protected:
	std::shared_ptr<sun::security::x509::AlgorithmId> algId;
	std::shared_ptr<sun::security::x509::X509CertInfo> info;
	std::shared_ptr<unsigned char[]> signature;
private:
	static std::shared_ptr<java::lang::String> AUTH_INFO_ACCESS_OID;
	static std::shared_ptr<java::lang::String> BASIC_CONSTRAINT_OID;
	static std::shared_ptr<java::lang::String> DOT;
	static std::shared_ptr<java::lang::String> EXTENDED_KEY_USAGE_OID;
	static std::shared_ptr<java::lang::String> ISSUER_ALT_NAME_OID;
	static std::shared_ptr<java::lang::String> KEY_USAGE_OID;
	static int NUM_STANDARD_KEY_USAGE;
	static std::shared_ptr<java::lang::String> SUBJECT_ALT_NAME_OID;
	static long long serialVersionUID;
	std::shared_ptr<java::util::Set<sun::security::x509::AccessDescription>> authInfoAccess;
	std::shared_ptr<java::util::List<java::lang::String>> extKeyUsage;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap<java::lang::String,java::lang::String>> fingerprints;
	std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> issuerAlternativeNames;
	bool readOnly;
	std::shared_ptr<unsigned char[]> signedCert;
	std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> subjectAlternativeNames;
	bool verificationResult;
	std::shared_ptr<java::lang::String> verifiedProvider;
	std::shared_ptr<java::security::PublicKey> verifiedPublicKey;
	static void byte2hex(unsigned char b,std::shared_ptr<java::lang::StringBuffer> buf);
	static std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> cloneAltNames(std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> altNames);
	static std::shared_ptr<javax::security::auth::x500::X500Principal> getX500Principal(std::shared_ptr<java::security::cert::X509Certificate> cert,bool getIssuer);
	static std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> makeAltNames(std::shared_ptr<sun::security::x509::GeneralNames> names);
	void virtual parse(std::shared_ptr<sun::security::util::DerValue> val);
	void virtual parse(std::shared_ptr<sun::security::util::DerValue> val,std::shared_ptr<unsigned char[]> originalEncodedForm);
public:
	static std::shared_ptr<java::lang::String> ALG_ID;
	static std::shared_ptr<java::lang::String> INFO;
	static std::shared_ptr<java::lang::String> ISSUER_DN;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> PUBLIC_KEY;
	static std::shared_ptr<java::lang::String> SERIAL_ID;
	static std::shared_ptr<java::lang::String> SIG;
	static std::shared_ptr<java::lang::String> SIGNATURE;
	static std::shared_ptr<java::lang::String> SIGNED_CERT;
	static std::shared_ptr<java::lang::String> SIG_ALG;
	static std::shared_ptr<java::lang::String> SUBJECT_DN;
	static std::shared_ptr<java::lang::String> VERSION;
	X509CertImpl();
	X509CertImpl(std::shared_ptr<sun::security::util::DerValue> derVal);
	X509CertImpl(std::shared_ptr<sun::security::util::DerValue> derVal,std::shared_ptr<unsigned char[]> encoded);
	X509CertImpl(std::shared_ptr<sun::security::x509::X509CertInfo> certInfo);
	X509CertImpl(std::shared_ptr<unsigned char[]> certData);
	static unsigned char getEncodedInternal(std::shared_ptr<java::security::cert::Certificate> cert);
	static std::shared_ptr<java::util::List<java::lang::String>> getExtendedKeyUsage(std::shared_ptr<java::security::cert::X509Certificate> cert);
	static std::shared_ptr<java::lang::String> getFingerprint(std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::security::cert::X509Certificate> cert);
	static std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> getIssuerAlternativeNames(std::shared_ptr<java::security::cert::X509Certificate> cert);
	static std::shared_ptr<javax::security::auth::x500::X500Principal> getIssuerX500Principal(std::shared_ptr<java::security::cert::X509Certificate> cert);
	static std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> getSubjectAlternativeNames(std::shared_ptr<java::security::cert::X509Certificate> cert);
	static std::shared_ptr<javax::security::auth::x500::X500Principal> getSubjectX500Principal(std::shared_ptr<java::security::cert::X509Certificate> cert);
	static bool isSelfIssued(std::shared_ptr<java::security::cert::X509Certificate> cert);
	static bool isSelfSigned(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::lang::String> sigProvider);
	static std::shared_ptr<sun::security::x509::X509CertImpl> toImpl(std::shared_ptr<java::security::cert::X509Certificate> cert);
	static void verify(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::security::Provider> sigProvider);
	void virtual checkValidity();
	void virtual checkValidity(std::shared_ptr<java::util::Date> date);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual derEncode(std::shared_ptr<java::io::OutputStream> out);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<sun::security::x509::KeyIdentifier> virtual getAuthKeyId();
	std::shared_ptr<sun::security::x509::AuthorityInfoAccessExtension> virtual getAuthorityInfoAccessExtension();
	std::shared_ptr<sun::security::x509::AuthorityKeyIdentifierExtension> virtual getAuthorityKeyIdentifierExtension();
	int virtual getBasicConstraints();
	std::shared_ptr<sun::security::x509::BasicConstraintsExtension> virtual getBasicConstraintsExtension();
	std::shared_ptr<sun::security::x509::CRLDistributionPointsExtension> virtual getCRLDistributionPointsExtension();
	std::shared_ptr<sun::security::x509::CertificatePoliciesExtension> virtual getCertificatePoliciesExtension();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getCriticalExtensionOIDs();
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	unsigned char virtual getEncoded();
	unsigned char virtual getEncodedInternal();
	std::shared_ptr<java::util::List<java::lang::String>> virtual getExtendedKeyUsage();
	std::shared_ptr<sun::security::x509::ExtendedKeyUsageExtension> virtual getExtendedKeyUsageExtension();
	std::shared_ptr<sun::security::x509::Extension> virtual getExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> oid);
	unsigned char virtual getExtensionValue(std::shared_ptr<java::lang::String> oid);
	std::shared_ptr<sun::security::x509::IssuerAlternativeNameExtension> virtual getIssuerAlternativeNameExtension();
	std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> virtual getIssuerAlternativeNames();
	std::shared_ptr<java::security::Principal> virtual getIssuerDN();
	bool virtual getIssuerUniqueID();
	std::shared_ptr<javax::security::auth::x500::X500Principal> virtual getIssuerX500Principal();
	bool virtual getKeyUsage();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<sun::security::x509::NameConstraintsExtension> virtual getNameConstraintsExtension();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getNonCriticalExtensionOIDs();
	std::shared_ptr<java::util::Date> virtual getNotAfter();
	std::shared_ptr<java::util::Date> virtual getNotBefore();
	std::shared_ptr<sun::security::x509::PolicyConstraintsExtension> virtual getPolicyConstraintsExtension();
	std::shared_ptr<sun::security::x509::PolicyMappingsExtension> virtual getPolicyMappingsExtension();
	std::shared_ptr<sun::security::x509::PrivateKeyUsageExtension> virtual getPrivateKeyUsageExtension();
	std::shared_ptr<java::security::PublicKey> virtual getPublicKey();
	std::shared_ptr<java::math::BigInteger> virtual getSerialNumber();
	std::shared_ptr<sun::security::x509::SerialNumber> virtual getSerialNumberObject();
	std::shared_ptr<java::lang::String> virtual getSigAlgName();
	std::shared_ptr<java::lang::String> virtual getSigAlgOID();
	unsigned char virtual getSigAlgParams();
	unsigned char virtual getSignature();
	std::shared_ptr<sun::security::x509::SubjectAlternativeNameExtension> virtual getSubjectAlternativeNameExtension();
	std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> virtual getSubjectAlternativeNames();
	std::shared_ptr<java::security::Principal> virtual getSubjectDN();
	std::shared_ptr<sun::security::x509::KeyIdentifier> virtual getSubjectKeyId();
	std::shared_ptr<sun::security::x509::SubjectKeyIdentifierExtension> virtual getSubjectKeyIdentifierExtension();
	bool virtual getSubjectUniqueID();
	std::shared_ptr<javax::security::auth::x500::X500Principal> virtual getSubjectX500Principal();
	unsigned char virtual getTBSCertificate();
	std::shared_ptr<sun::security::x509::Extension> virtual getUnparseableExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> oid);
	int virtual getVersion();
	bool virtual hasUnsupportedCriticalExtension();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	void virtual sign(std::shared_ptr<java::security::PrivateKey> key,std::shared_ptr<java::lang::String> algorithm);
	void virtual sign(std::shared_ptr<java::security::PrivateKey> key,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::lang::String> provider);
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual verify(std::shared_ptr<java::security::PublicKey> key);
	void virtual verify(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::lang::String> cVar0);
	void virtual verify(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::security::Provider> sigProvider);
public:
	virtual ~X509CertImpl(){
	}

}; // class X509CertImpl
}; // namespace sun::security::x509

#endif //__sun_security_x509_X509CertImpl__

