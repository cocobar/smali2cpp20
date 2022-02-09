#ifndef __sun_security_x509_SerialNumber__
#define __sun_security_x509_SerialNumber__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\SerialNumber.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"

namespace sun::security::x509{
class SerialNumber : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::math::BigInteger> serialNum;
	void virtual construct(std::shared_ptr<sun::security::util::DerValue> derVal);
public:
	SerialNumber(int num);
	SerialNumber(std::shared_ptr<java::io::InputStream> in);
	SerialNumber(std::shared_ptr<java::math::BigInteger> num);
	SerialNumber(std::shared_ptr<sun::security::util::DerInputStream> in);
	SerialNumber(std::shared_ptr<sun::security::util::DerValue> val);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	std::shared_ptr<java::math::BigInteger> virtual getNumber();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~SerialNumber(){
	}

}; // class SerialNumber
}; // namespace sun::security::x509

#endif //__sun_security_x509_SerialNumber__

