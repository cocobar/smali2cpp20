#ifndef __sun_security_x509_AlgorithmId__
#define __sun_security_x509_AlgorithmId__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\AlgorithmId.smali
#include "java2ctype.h"
#include "java.io.Serializable.hh"
#include "sun.security.util.DerEncoder.hh"

namespace sun::security::x509{
class AlgorithmId : public java::io::Serializable, public sun::security::util::DerEncoder {
public:
	AlgorithmId();
	virtual ~AlgorithmId();

}; // class AlgorithmId
}; // namespace sun::security::x509

#endif //__sun_security_x509_AlgorithmId__

