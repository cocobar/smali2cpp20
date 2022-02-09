#ifndef __sun_security_x509_DeltaCRLIndicatorExtension__
#define __sun_security_x509_DeltaCRLIndicatorExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\DeltaCRLIndicatorExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "sun.security.x509.CRLNumberExtension.h"

namespace sun::security::x509{
class DeltaCRLIndicatorExtension : public sun::security::x509::CRLNumberExtension {
protected:
private:
	static std::shared_ptr<java::lang::String> LABEL;
public:
	static std::shared_ptr<java::lang::String> NAME;
	DeltaCRLIndicatorExtension(int crlNum);
	DeltaCRLIndicatorExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	DeltaCRLIndicatorExtension(std::shared_ptr<java::math::BigInteger> crlNum);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
public:
	virtual ~DeltaCRLIndicatorExtension(){
	}

}; // class DeltaCRLIndicatorExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_DeltaCRLIndicatorExtension__

