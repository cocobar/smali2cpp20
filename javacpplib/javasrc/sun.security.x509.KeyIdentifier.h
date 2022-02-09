#ifndef __sun_security_x509_KeyIdentifier__
#define __sun_security_x509_KeyIdentifier__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\KeyIdentifier.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.PublicKey.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"

namespace sun::security::x509{
class KeyIdentifier : public java::lang::Object {
protected:
private:
	std::shared_ptr<unsigned char[]> octetString;
public:
	KeyIdentifier(std::shared_ptr<java::security::PublicKey> pubKey);
	KeyIdentifier(std::shared_ptr<sun::security::util::DerValue> val);
	KeyIdentifier(std::shared_ptr<unsigned char[]> octetString);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	unsigned char virtual getIdentifier();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~KeyIdentifier(){
	}

}; // class KeyIdentifier
}; // namespace sun::security::x509

#endif //__sun_security_x509_KeyIdentifier__

