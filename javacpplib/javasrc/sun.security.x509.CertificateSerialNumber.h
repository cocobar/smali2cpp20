#ifndef __sun_security_x509_CertificateSerialNumber__
#define __sun_security_x509_CertificateSerialNumber__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateSerialNumber.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.SerialNumber.h"

namespace sun::security::x509{
class CertificateSerialNumber : public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	std::shared_ptr<sun::security::x509::SerialNumber> serial;
public:
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> NUMBER;
	CertificateSerialNumber(int num);
	CertificateSerialNumber(std::shared_ptr<java::io::InputStream> in);
	CertificateSerialNumber(std::shared_ptr<java::math::BigInteger> num);
	CertificateSerialNumber(std::shared_ptr<sun::security::util::DerInputStream> in);
	CertificateSerialNumber(std::shared_ptr<sun::security::util::DerValue> val);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<sun::security::x509::SerialNumber> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CertificateSerialNumber(){
	}

}; // class CertificateSerialNumber
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateSerialNumber__

