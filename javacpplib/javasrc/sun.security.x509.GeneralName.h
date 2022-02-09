#ifndef __sun_security_x509_GeneralName__
#define __sun_security_x509_GeneralName__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\GeneralName.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralNameInterface.h"

namespace sun::security::x509{
class GeneralName : public java::lang::Object {
protected:
private:
	std::shared_ptr<sun::security::x509::GeneralNameInterface> name;
public:
	GeneralName(std::shared_ptr<sun::security::util::DerValue> encName);
	GeneralName(std::shared_ptr<sun::security::util::DerValue> encName,bool nameConstraint);
	GeneralName(std::shared_ptr<sun::security::x509::GeneralNameInterface> name);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<sun::security::x509::GeneralNameInterface> virtual getName();
	int virtual getType();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~GeneralName(){
	}

}; // class GeneralName
}; // namespace sun::security::x509

#endif //__sun_security_x509_GeneralName__

