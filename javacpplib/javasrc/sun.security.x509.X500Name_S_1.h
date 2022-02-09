#ifndef __sun_security_x509_X500Name_S_1__
#define __sun_security_x509_X500Name_S_1__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\X500Name$1.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.security.PrivilegedExceptionAction.h"

namespace sun::security::x509{
class X500Name_S_1 : public java::security::PrivilegedExceptionAction<std::vector<java::lang::Object>> {
protected:
private:
public:
	X500Name_S_1();
	std::shared_ptr<java::lang::Object> virtual run();
public:
	virtual ~X500Name_S_1(){
	}

}; // class X500Name_S_1
}; // namespace sun::security::x509

#endif //__sun_security_x509_X500Name_S_1__
