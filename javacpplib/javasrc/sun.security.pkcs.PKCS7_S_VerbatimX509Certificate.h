#ifndef __sun_security_pkcs_PKCS7_S_VerbatimX509Certificate__
#define __sun_security_pkcs_PKCS7_S_VerbatimX509Certificate__
// H L:\smali2cpp20\x64\Release\out\sun\security\pkcs\PKCS7$VerbatimX509Certificate.smali
#include "java2ctype.h"
#include "java.security.cert.X509Certificate.h"
#include "sun.security.pkcs.PKCS7_S_WrappedX509Certificate.h"

namespace sun::security::pkcs{
class PKCS7_S_VerbatimX509Certificate : public sun::security::pkcs::PKCS7_S_WrappedX509Certificate {
protected:
private:
	std::shared_ptr<unsigned char[]> encodedVerbatim;
public:
	PKCS7_S_VerbatimX509Certificate(std::shared_ptr<java::security::cert::X509Certificate> wrapped,std::shared_ptr<unsigned char[]> encodedVerbatim);
	unsigned char virtual getEncoded();
public:
	virtual ~PKCS7_S_VerbatimX509Certificate(){
	}

}; // class PKCS7_S_VerbatimX509Certificate
}; // namespace sun::security::pkcs

#endif //__sun_security_pkcs_PKCS7_S_VerbatimX509Certificate__

