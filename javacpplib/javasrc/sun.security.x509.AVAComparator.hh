#ifndef __sun_security_x509_AVAComparator__
#define __sun_security_x509_AVAComparator__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\AVAComparator.smali
#include "java2ctype.h"
#include "java.util.Comparator.h"
#include "sun.security.x509.AVA.h"

namespace sun::security::x509{
class AVAComparator : public java::util::Comparator<sun::security::x509::AVA> {
public:
	AVAComparator();
	virtual ~AVAComparator();

}; // class AVAComparator
}; // namespace sun::security::x509

#endif //__sun_security_x509_AVAComparator__

