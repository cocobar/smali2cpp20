#ifndef __sun_security_x509_UnparseableExtension__
#define __sun_security_x509_UnparseableExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\UnparseableExtension.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class UnparseableExtension : public sun::security::x509::Extension {
protected:
private:
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::Throwable> why;
public:
	UnparseableExtension(std::shared_ptr<sun::security::x509::Extension> ext,std::shared_ptr<java::lang::Throwable> why);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~UnparseableExtension(){
	}

}; // class UnparseableExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_UnparseableExtension__

