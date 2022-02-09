#ifndef __sun_security_provider_certpath_CertId__
#define __sun_security_provider_certpath_CertId__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\CertId.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.X509Certificate.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.SerialNumber.h"

namespace sun::security::provider::certpath{
class CertId : public java::lang::Object {
protected:
private:
	static std::shared_ptr<sun::security::x509::AlgorithmId> SHA1_ALGID;
	static bool debug;
	std::shared_ptr<sun::security::x509::SerialNumber> certSerialNumber;
	std::shared_ptr<sun::security::x509::AlgorithmId> hashAlgId;
	std::shared_ptr<unsigned char[]> issuerKeyHash;
	std::shared_ptr<unsigned char[]> issuerNameHash;
	int myhash;
public:
	static void static_cinit();
	CertId(std::shared_ptr<java::security::cert::X509Certificate> issuerCert,std::shared_ptr<sun::security::x509::SerialNumber> serialNumber);
	CertId(std::shared_ptr<javax::security::auth::x500::X500Principal> issuerName,std::shared_ptr<java::security::PublicKey> issuerKey,std::shared_ptr<sun::security::x509::SerialNumber> serialNumber);
	CertId(std::shared_ptr<sun::security::util::DerInputStream> derIn);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<sun::security::x509::AlgorithmId> virtual getHashAlgorithm();
	unsigned char virtual getIssuerKeyHash();
	unsigned char virtual getIssuerNameHash();
	std::shared_ptr<java::math::BigInteger> virtual getSerialNumber();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::CertId::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CertId(){
	}

}; // class CertId
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_CertId__

