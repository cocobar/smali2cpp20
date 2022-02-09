#ifndef __sun_security_pkcs_SignerInfo__
#define __sun_security_pkcs_SignerInfo__
// H L:\smali2cpp20\x64\Release\out\sun\security\pkcs\SignerInfo.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.security.CryptoPrimitive.h"
#include "java.security.Timestamp.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.ArrayList.h"
#include "java.util.Set.h"
#include "sun.security.pkcs.PKCS7.h"
#include "sun.security.pkcs.PKCS9Attributes.h"
#include "sun.security.timestamp.TimestampToken.h"
#include "sun.security.util.DerEncoder.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DisabledAlgorithmConstraints.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.X500Name.h"

namespace sun::security::pkcs{
class SignerInfo : public sun::security::util::DerEncoder {
protected:
private:
	static std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> DIGEST_PRIMITIVE_SET;
	static std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints> JAR_DISABLED_CHECK;
	static std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> SIG_PRIMITIVE_SET;
	bool hasTimestamp;
	void virtual verifyTimestamp(std::shared_ptr<sun::security::timestamp::TimestampToken> token);
public:
	std::shared_ptr<sun::security::pkcs::PKCS9Attributes> authenticatedAttributes;
	std::shared_ptr<java::math::BigInteger> certificateSerialNumber;
	std::shared_ptr<sun::security::x509::AlgorithmId> digestAlgorithmId;
	std::shared_ptr<sun::security::x509::AlgorithmId> digestEncryptionAlgorithmId;
	std::shared_ptr<unsigned char[]> encryptedDigest;
	std::shared_ptr<sun::security::x509::X500Name> issuerName;
	std::shared_ptr<java::security::Timestamp> timestamp;
	std::shared_ptr<sun::security::pkcs::PKCS9Attributes> unauthenticatedAttributes;
	std::shared_ptr<java::math::BigInteger> version;
	static void static_cinit();
	SignerInfo(std::shared_ptr<sun::security::util::DerInputStream> derin);
	SignerInfo(std::shared_ptr<sun::security::util::DerInputStream> derin,bool oldStyle);
	SignerInfo(std::shared_ptr<sun::security::x509::X500Name> issuerName,std::shared_ptr<java::math::BigInteger> serial,std::shared_ptr<sun::security::x509::AlgorithmId> digestAlgorithmId,std::shared_ptr<sun::security::pkcs::PKCS9Attributes> authenticatedAttributes,std::shared_ptr<sun::security::x509::AlgorithmId> digestEncryptionAlgorithmId,std::shared_ptr<unsigned char[]> encryptedDigest,std::shared_ptr<sun::security::pkcs::PKCS9Attributes> unauthenticatedAttributes);
	SignerInfo(std::shared_ptr<sun::security::x509::X500Name> issuerName,std::shared_ptr<java::math::BigInteger> serial,std::shared_ptr<sun::security::x509::AlgorithmId> digestAlgorithmId,std::shared_ptr<sun::security::x509::AlgorithmId> digestEncryptionAlgorithmId,std::shared_ptr<unsigned char[]> encryptedDigest);
	void virtual derEncode(std::shared_ptr<java::io::OutputStream> out);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	std::shared_ptr<sun::security::pkcs::PKCS9Attributes> virtual getAuthenticatedAttributes();
	std::shared_ptr<java::security::cert::X509Certificate> virtual getCertificate(std::shared_ptr<sun::security::pkcs::PKCS7> block);
	std::shared_ptr<java::util::ArrayList<java::security::cert::X509Certificate>> virtual getCertificateChain(std::shared_ptr<sun::security::pkcs::PKCS7> block);
	std::shared_ptr<java::math::BigInteger> virtual getCertificateSerialNumber();
	std::shared_ptr<sun::security::x509::AlgorithmId> virtual getDigestAlgorithmId();
	std::shared_ptr<sun::security::x509::AlgorithmId> virtual getDigestEncryptionAlgorithmId();
	unsigned char virtual getEncryptedDigest();
	std::shared_ptr<sun::security::x509::X500Name> virtual getIssuerName();
	std::shared_ptr<java::security::Timestamp> virtual getTimestamp();
	std::shared_ptr<sun::security::pkcs::PKCS7> virtual getTsToken();
	std::shared_ptr<sun::security::pkcs::PKCS9Attributes> virtual getUnauthenticatedAttributes();
	std::shared_ptr<java::math::BigInteger> virtual getVersion();
	std::shared_ptr<java::lang::String> virtual toString();
	std::shared_ptr<sun::security::pkcs::SignerInfo> virtual verify(std::shared_ptr<sun::security::pkcs::PKCS7> block);
	std::shared_ptr<sun::security::pkcs::SignerInfo> virtual verify(std::shared_ptr<sun::security::pkcs::PKCS7> block,std::shared_ptr<java::io::InputStream> inputStream);
	std::shared_ptr<sun::security::pkcs::SignerInfo> virtual verify(std::shared_ptr<sun::security::pkcs::PKCS7> block,std::shared_ptr<unsigned char[]> data);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::pkcs::SignerInfo::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SignerInfo(){
	}

}; // class SignerInfo
}; // namespace sun::security::pkcs

#endif //__sun_security_pkcs_SignerInfo__

