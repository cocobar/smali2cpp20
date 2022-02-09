#ifndef __sun_security_pkcs_SignerInfo__
#define __sun_security_pkcs_SignerInfo__
// H L:\smali2cpp20\x64\Release\out\sun\security\pkcs\SignerInfo.smali
#include "java2ctype.h"
#include "sun.security.util.DerEncoder.hh"

namespace sun::security::pkcs{
class SignerInfo : public sun::security::util::DerEncoder {
public:
	SignerInfo();
	virtual ~SignerInfo();

}; // class SignerInfo
}; // namespace sun::security::pkcs

#endif //__sun_security_pkcs_SignerInfo__

