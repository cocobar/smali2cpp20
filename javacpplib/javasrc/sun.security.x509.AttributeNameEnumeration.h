#ifndef __sun_security_x509_AttributeNameEnumeration__
#define __sun_security_x509_AttributeNameEnumeration__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\AttributeNameEnumeration.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.util.Vector.h"

namespace sun::security::x509{
class AttributeNameEnumeration : public java::util::Vector<java::lang::String> {
protected:
private:
	static long long serialVersionUID;
public:
	AttributeNameEnumeration();
public:
	virtual ~AttributeNameEnumeration(){
	}

}; // class AttributeNameEnumeration
}; // namespace sun::security::x509

#endif //__sun_security_x509_AttributeNameEnumeration__

