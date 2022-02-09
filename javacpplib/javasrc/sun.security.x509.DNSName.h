#ifndef __sun_security_x509_DNSName__
#define __sun_security_x509_DNSName__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\DNSName.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralNameInterface.h"

namespace sun::security::x509{
class DNSName : public sun::security::x509::GeneralNameInterface {
protected:
private:
	static std::shared_ptr<java::lang::String> alpha;
	static std::shared_ptr<java::lang::String> alphaDigitsAndHyphen;
	static std::shared_ptr<java::lang::String> digitsAndHyphen;
	std::shared_ptr<java::lang::String> name;
public:
	DNSName(std::shared_ptr<java::lang::String> name);
	DNSName(std::shared_ptr<sun::security::util::DerValue> derValue);
	int virtual constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual getName();
	int virtual getType();
	int virtual hashCode();
	int virtual subtreeDepth();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~DNSName(){
	}

}; // class DNSName
}; // namespace sun::security::x509

#endif //__sun_security_x509_DNSName__

