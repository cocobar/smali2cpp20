#ifndef __com_sun_security_cert_internal_x509_X509V1CertImpl__
#define __com_sun_security_cert_internal_x509_X509V1CertImpl__
// H L:\smali2cpp20\x64\Release\out\com\sun\security\cert\internal\x509\X509V1CertImpl.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.Serializable.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.security.Principal.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertificateFactory.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Date.h"
#include "javax.security.cert.X509Certificate.h"

namespace com::sun::security::cert::internal::x509{
class X509V1CertImpl : public javax::security::cert::X509Certificate, public java::io::Serializable {
protected:
private:
	std::shared_ptr<java::security::cert::X509Certificate> wrappedCert;
	static std::shared_ptr<java::security::cert::CertificateFactory> getFactory();
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> stream);
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> stream);
public:
	static long long serialVersionUID;
	X509V1CertImpl();
	X509V1CertImpl(std::shared_ptr<java::io::InputStream> in);
	X509V1CertImpl(std::shared_ptr<unsigned char[]> certData);
	void virtual checkValidity();
	void virtual checkValidity(std::shared_ptr<java::util::Date> date);
	unsigned char virtual getEncoded();
	std::shared_ptr<java::security::Principal> virtual getIssuerDN();
	std::shared_ptr<java::util::Date> virtual getNotAfter();
	std::shared_ptr<java::util::Date> virtual getNotBefore();
	std::shared_ptr<java::security::PublicKey> virtual getPublicKey();
	std::shared_ptr<java::math::BigInteger> virtual getSerialNumber();
	std::shared_ptr<java::lang::String> virtual getSigAlgName();
	std::shared_ptr<java::lang::String> virtual getSigAlgOID();
	unsigned char virtual getSigAlgParams();
	std::shared_ptr<java::security::Principal> virtual getSubjectDN();
	int virtual getVersion();
	std::shared_ptr<java::security::cert::X509Certificate> virtual getX509Certificate();
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual verify(std::shared_ptr<java::security::PublicKey> key);
	void virtual verify(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::lang::String> sigProvider);
public:
	virtual ~X509V1CertImpl(){
	}

}; // class X509V1CertImpl
}; // namespace com::sun::security::cert::internal::x509

#endif //__com_sun_security_cert_internal_x509_X509V1CertImpl__

