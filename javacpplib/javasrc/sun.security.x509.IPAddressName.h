#ifndef __sun_security_x509_IPAddressName__
#define __sun_security_x509_IPAddressName__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\IPAddressName.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralNameInterface.h"

namespace sun::security::x509{
class IPAddressName : public sun::security::x509::GeneralNameInterface {
protected:
private:
	static int MASKSIZE;
	std::shared_ptr<unsigned char[]> address;
	bool isIPv4;
	std::shared_ptr<java::lang::String> name;
	void virtual parseIPv4(std::shared_ptr<java::lang::String> name);
	void virtual parseIPv6(std::shared_ptr<java::lang::String> name);
public:
	IPAddressName(std::shared_ptr<java::lang::String> name);
	IPAddressName(std::shared_ptr<sun::security::util::DerValue> derValue);
	IPAddressName(std::shared_ptr<unsigned char[]> address);
	int virtual constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	unsigned char virtual getBytes();
	std::shared_ptr<java::lang::String> virtual getName();
	int virtual getType();
	int virtual hashCode();
	int virtual subtreeDepth();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~IPAddressName(){
	}

}; // class IPAddressName
}; // namespace sun::security::x509

#endif //__sun_security_x509_IPAddressName__

