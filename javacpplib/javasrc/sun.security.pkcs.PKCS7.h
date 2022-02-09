#ifndef __sun_security_pkcs_PKCS7__
#define __sun_security_pkcs_PKCS7__
// H L:\smali2cpp20\x64\Release\out\sun\security\pkcs\PKCS7.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.security.Principal.h"
#include "java.security.cert.X509CRL.h"
#include "java.security.cert.X509Certificate.h"
#include "sun.security.pkcs.ContentInfo.h"
#include "sun.security.pkcs.SignerInfo.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.X500Name.h"

namespace sun::security::pkcs{
class PKCS7 : public java::lang::Object {
protected:
private:
	std::shared_ptr<std::vector<java::security::Principal>> certIssuerNames;
	std::shared_ptr<std::vector<java::security::cert::X509Certificate>> certificates;
	std::shared_ptr<sun::security::pkcs::ContentInfo> contentInfo;
	std::shared_ptr<sun::security::util::ObjectIdentifier> contentType;
	std::shared_ptr<std::vector<java::security::cert::X509CRL>> crls;
	std::shared_ptr<std::vector<sun::security::x509::AlgorithmId>> digestAlgorithmIds;
	bool oldStyle;
	std::shared_ptr<std::vector<sun::security::pkcs::SignerInfo>> signerInfos;
	std::shared_ptr<java::math::BigInteger> version;
	void virtual parse(std::shared_ptr<sun::security::util::DerInputStream> derin);
	void virtual parse(std::shared_ptr<sun::security::util::DerInputStream> derin,bool oldStyle);
	void virtual parseNetscapeCertChain(std::shared_ptr<sun::security::util::DerValue> val);
	void virtual parseOldSignedData(std::shared_ptr<sun::security::util::DerValue> val);
	void virtual parseSignedData(std::shared_ptr<sun::security::util::DerValue> val);
	void virtual populateCertIssuerNames();
public:
	PKCS7(std::shared_ptr<java::io::InputStream> in);
	PKCS7(std::shared_ptr<sun::security::util::DerInputStream> derin);
	PKCS7(std::shared_ptr<unsigned char[]> bytes);
	PKCS7(std::shared_ptr<std::vector<sun::security::x509::AlgorithmId>> digestAlgorithmIds,std::shared_ptr<sun::security::pkcs::ContentInfo> contentInfo,std::shared_ptr<std::vector<java::security::cert::X509Certificate>> certificates,std::shared_ptr<std::vector<java::security::cert::X509CRL>> crls,std::shared_ptr<std::vector<sun::security::pkcs::SignerInfo>> signerInfos);
	PKCS7(std::shared_ptr<std::vector<sun::security::x509::AlgorithmId>> digestAlgorithmIds,std::shared_ptr<sun::security::pkcs::ContentInfo> contentInfo,std::shared_ptr<std::vector<java::security::cert::X509Certificate>> certificates,std::shared_ptr<std::vector<sun::security::pkcs::SignerInfo>> signerInfos);
	void virtual encodeSignedData(std::shared_ptr<java::io::OutputStream> out);
	void virtual encodeSignedData(std::shared_ptr<sun::security::util::DerOutputStream> out);
	std::shared_ptr<java::security::cert::X509CRL> virtual getCRLs();
	std::shared_ptr<java::security::cert::X509Certificate> virtual getCertificate(std::shared_ptr<java::math::BigInteger> serial,std::shared_ptr<sun::security::x509::X500Name> issuerName);
	std::shared_ptr<java::security::cert::X509Certificate> virtual getCertificates();
	std::shared_ptr<sun::security::pkcs::ContentInfo> virtual getContentInfo();
	std::shared_ptr<sun::security::x509::AlgorithmId> virtual getDigestAlgorithmIds();
	std::shared_ptr<sun::security::pkcs::SignerInfo> virtual getSignerInfos();
	std::shared_ptr<java::math::BigInteger> virtual getVersion();
	bool virtual isOldStyle();
	std::shared_ptr<java::lang::String> virtual toString();
	std::shared_ptr<sun::security::pkcs::SignerInfo> virtual verify(std::shared_ptr<sun::security::pkcs::SignerInfo> info,std::shared_ptr<java::io::InputStream> dataInputStream);
	std::shared_ptr<sun::security::pkcs::SignerInfo> virtual verify(std::shared_ptr<sun::security::pkcs::SignerInfo> info,std::shared_ptr<unsigned char[]> bytes);
	std::shared_ptr<sun::security::pkcs::SignerInfo> virtual verify();
	std::shared_ptr<sun::security::pkcs::SignerInfo> virtual verify(std::shared_ptr<unsigned char[]> bytes);
public:
	virtual ~PKCS7(){
	}

}; // class PKCS7
}; // namespace sun::security::pkcs

#endif //__sun_security_pkcs_PKCS7__

