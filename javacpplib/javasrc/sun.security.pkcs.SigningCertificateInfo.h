#ifndef __sun_security_pkcs_SigningCertificateInfo__
#define __sun_security_pkcs_SigningCertificateInfo__
// H L:\smali2cpp20\x64\Release\out\sun\security\pkcs\SigningCertificateInfo.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.pkcs.ESSCertId.h"

namespace sun::security::pkcs{
class SigningCertificateInfo : public java::lang::Object {
protected:
private:
	std::shared_ptr<unsigned char[]> ber;
	std::shared_ptr<std::vector<sun::security::pkcs::ESSCertId>> certId;
public:
	SigningCertificateInfo(std::shared_ptr<unsigned char[]> ber);
	void virtual parse(std::shared_ptr<unsigned char[]> bytes);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~SigningCertificateInfo(){
	}

}; // class SigningCertificateInfo
}; // namespace sun::security::pkcs

#endif //__sun_security_pkcs_SigningCertificateInfo__

