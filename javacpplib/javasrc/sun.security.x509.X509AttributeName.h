#ifndef __sun_security_x509_X509AttributeName__
#define __sun_security_x509_X509AttributeName__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\X509AttributeName.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace sun::security::x509{
class X509AttributeName : public java::lang::Object {
protected:
private:
	static char SEPARATOR;
	std::shared_ptr<java::lang::String> prefix;
	std::shared_ptr<java::lang::String> suffix;
public:
	X509AttributeName(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::String> virtual getPrefix();
	std::shared_ptr<java::lang::String> virtual getSuffix();
public:
	virtual ~X509AttributeName(){
	}

}; // class X509AttributeName
}; // namespace sun::security::x509

#endif //__sun_security_x509_X509AttributeName__

