#ifndef __sun_security_pkcs_ESSCertId__
#define __sun_security_pkcs_ESSCertId__
// H L:\smali2cpp20\x64\Release\out\sun\security\pkcs\ESSCertId.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.SerialNumber.h"

namespace sun::security::pkcs{
class ESSCertId : public java::lang::Object {
protected:
private:
	static std::shared_ptr<sun::misc::HexDumpEncoder> hexDumper;
	std::shared_ptr<unsigned char[]> certHash;
	std::shared_ptr<sun::security::x509::GeneralNames> issuer;
	std::shared_ptr<sun::security::x509::SerialNumber> serialNumber;
public:
	ESSCertId(std::shared_ptr<sun::security::util::DerValue> certId);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~ESSCertId(){
	}

}; // class ESSCertId
}; // namespace sun::security::pkcs

#endif //__sun_security_pkcs_ESSCertId__

