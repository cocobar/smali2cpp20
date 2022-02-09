#ifndef __sun_security_util_DerOutputStream__
#define __sun_security_util_DerOutputStream__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\DerOutputStream.smali
#include "java2ctype.h"
#include "java.io.ByteArrayOutputStream.hh"
#include "sun.security.util.DerEncoder.hh"

namespace sun::security::util{
class DerOutputStream : public java::io::ByteArrayOutputStream, public sun::security::util::DerEncoder {
public:
	DerOutputStream();
	virtual ~DerOutputStream();

}; // class DerOutputStream
}; // namespace sun::security::util

#endif //__sun_security_util_DerOutputStream__

