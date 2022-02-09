#ifndef __sun_security_x509_X509CRLImpl__
#define __sun_security_x509_X509CRLImpl__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\X509CRLImpl.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.security.Principal.h"
#include "java.security.PrivateKey.h"
#include "java.security.Provider.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.X509CRL.h"
#include "java.security.cert.X509CRLEntry.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Date.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.util.DerEncoder.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.AuthorityKeyIdentifierExtension.h"
#include "sun.security.x509.CRLExtensions.h"
#include "sun.security.x509.CRLNumberExtension.h"
#include "sun.security.x509.DeltaCRLIndicatorExtension.h"
#include "sun.security.x509.IssuerAlternativeNameExtension.h"
#include "sun.security.x509.IssuingDistributionPointExtension.h"
#include "sun.security.x509.KeyIdentifier.h"
#include "sun.security.x509.X500Name.h"
#include "sun.security.x509.X509CRLEntryImpl.h"
#include "sun.security.x509.X509CRLImpl_S_X509IssuerSerial.h"

namespace sun::security::x509{
class X509CRLImpl : public java::security::cert::X509CRL, public sun::security::util::DerEncoder {
protected:
private:
	static long long YR_2050;
	static bool isExplicit;
	std::shared_ptr<sun::security::x509::CRLExtensions> extensions;
	std::shared_ptr<sun::security::x509::AlgorithmId> infoSigAlgId;
	std::shared_ptr<sun::security::x509::X500Name> issuer;
	std::shared_ptr<javax::security::auth::x500::X500Principal> issuerPrincipal;
	std::shared_ptr<java::util::Date> nextUpdate;
	bool readOnly;
	std::shared_ptr<java::util::List<java::security::cert::X509CRLEntry>> revokedList;
	std::shared_ptr<java::util::Map<sun::security::x509::X509CRLImpl_S_X509IssuerSerial,java::security::cert::X509CRLEntry>> revokedMap;
	std::shared_ptr<sun::security::x509::AlgorithmId> sigAlgId;
	std::shared_ptr<unsigned char[]> signature;
	std::shared_ptr<unsigned char[]> signedCRL;
	std::shared_ptr<unsigned char[]> tbsCertList;
	std::shared_ptr<java::util::Date> thisUpdate;
	std::shared_ptr<java::lang::String> verifiedProvider;
	std::shared_ptr<java::security::PublicKey> verifiedPublicKey;
	int version;
	X509CRLImpl();
	std::shared_ptr<javax::security::auth::x500::X500Principal> virtual getCertIssuer(std::shared_ptr<sun::security::x509::X509CRLEntryImpl> entry,std::shared_ptr<javax::security::auth::x500::X500Principal> prevCertIssuer);
	void virtual parse(std::shared_ptr<sun::security::util::DerValue> val);
public:
	X509CRLImpl(std::shared_ptr<java::io::InputStream> inStrm);
	X509CRLImpl(std::shared_ptr<sun::security::util::DerValue> val);
	X509CRLImpl(std::shared_ptr<sun::security::x509::X500Name> issuer,std::shared_ptr<java::util::Date> thisDate,std::shared_ptr<java::util::Date> nextDate);
	X509CRLImpl(std::shared_ptr<sun::security::x509::X500Name> issuer,std::shared_ptr<java::util::Date> thisDate,std::shared_ptr<java::util::Date> nextDate,std::shared_ptr<std::vector<java::security::cert::X509CRLEntry>> badCerts);
	X509CRLImpl(std::shared_ptr<sun::security::x509::X500Name> issuer,std::shared_ptr<java::util::Date> thisDate,std::shared_ptr<java::util::Date> nextDate,std::shared_ptr<std::vector<java::security::cert::X509CRLEntry>> badCerts,std::shared_ptr<sun::security::x509::CRLExtensions> crlExts);
	X509CRLImpl(std::shared_ptr<unsigned char[]> crlData);
	static unsigned char getEncodedInternal(std::shared_ptr<java::security::cert::X509CRL> crl);
	static std::shared_ptr<javax::security::auth::x500::X500Principal> getIssuerX500Principal(std::shared_ptr<java::security::cert::X509CRL> crl);
	static std::shared_ptr<sun::security::x509::X509CRLImpl> toImpl(std::shared_ptr<java::security::cert::X509CRL> crl);
	void virtual derEncode(std::shared_ptr<java::io::OutputStream> out);
	void virtual encodeInfo(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<sun::security::x509::KeyIdentifier> virtual getAuthKeyId();
	std::shared_ptr<sun::security::x509::AuthorityKeyIdentifierExtension> virtual getAuthKeyIdExtension();
	std::shared_ptr<java::math::BigInteger> virtual getBaseCRLNumber();
	std::shared_ptr<java::math::BigInteger> virtual getCRLNumber();
	std::shared_ptr<sun::security::x509::CRLNumberExtension> virtual getCRLNumberExtension();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getCriticalExtensionOIDs();
	std::shared_ptr<sun::security::x509::DeltaCRLIndicatorExtension> virtual getDeltaCRLIndicatorExtension();
	unsigned char virtual getEncoded();
	unsigned char virtual getEncodedInternal();
	std::shared_ptr<java::lang::Object> virtual getExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> oid);
	unsigned char virtual getExtensionValue(std::shared_ptr<java::lang::String> oid);
	std::shared_ptr<sun::security::x509::IssuerAlternativeNameExtension> virtual getIssuerAltNameExtension();
	std::shared_ptr<java::security::Principal> virtual getIssuerDN();
	std::shared_ptr<javax::security::auth::x500::X500Principal> virtual getIssuerX500Principal();
	std::shared_ptr<sun::security::x509::IssuingDistributionPointExtension> virtual getIssuingDistributionPointExtension();
	std::shared_ptr<java::util::Date> virtual getNextUpdate();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getNonCriticalExtensionOIDs();
	std::shared_ptr<java::security::cert::X509CRLEntry> virtual getRevokedCertificate(std::shared_ptr<java::math::BigInteger> serialNumber);
	std::shared_ptr<java::security::cert::X509CRLEntry> virtual getRevokedCertificate(std::shared_ptr<java::security::cert::X509Certificate> cert);
	std::shared_ptr<java::util::Set<java::security::cert::X509CRLEntry>> virtual getRevokedCertificates();
	std::shared_ptr<sun::security::x509::AlgorithmId> virtual getSigAlgId();
	std::shared_ptr<java::lang::String> virtual getSigAlgName();
	std::shared_ptr<java::lang::String> virtual getSigAlgOID();
	unsigned char virtual getSigAlgParams();
	unsigned char virtual getSignature();
	unsigned char virtual getTBSCertList();
	std::shared_ptr<java::util::Date> virtual getThisUpdate();
	int virtual getVersion();
	bool virtual hasUnsupportedCriticalExtension();
	bool virtual isRevoked(std::shared_ptr<java::security::cert::Certificate> cert);
	void virtual sign(std::shared_ptr<java::security::PrivateKey> key,std::shared_ptr<java::lang::String> algorithm);
	void virtual sign(std::shared_ptr<java::security::PrivateKey> key,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::lang::String> provider);
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual verify(std::shared_ptr<java::security::PublicKey> key);
	void virtual verify(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::lang::String> cVar0);
	void virtual verify(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::security::Provider> sigProvider);
public:
	virtual ~X509CRLImpl(){
	}

}; // class X509CRLImpl
}; // namespace sun::security::x509

#endif //__sun_security_x509_X509CRLImpl__

