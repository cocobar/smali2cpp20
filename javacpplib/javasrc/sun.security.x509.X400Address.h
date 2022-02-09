#ifndef __sun_security_x509_X400Address__
#define __sun_security_x509_X400Address__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\X400Address.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralNameInterface.h"

namespace sun::security::x509{
class X400Address : public sun::security::x509::GeneralNameInterface {
protected:
private:
public:
	std::shared_ptr<unsigned char[]> nameValue;
	X400Address(std::shared_ptr<sun::security::util::DerValue> derValue);
	X400Address(std::shared_ptr<unsigned char[]> value);
	int virtual constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	int virtual getType();
	int virtual subtreeDepth();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~X400Address(){
	}

}; // class X400Address
}; // namespace sun::security::x509

#endif //__sun_security_x509_X400Address__

