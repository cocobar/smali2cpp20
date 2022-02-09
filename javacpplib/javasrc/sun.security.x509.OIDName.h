#ifndef __sun_security_x509_OIDName__
#define __sun_security_x509_OIDName__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\OIDName.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.GeneralNameInterface.h"

namespace sun::security::x509{
class OIDName : public sun::security::x509::GeneralNameInterface {
protected:
private:
	std::shared_ptr<sun::security::util::ObjectIdentifier> oid;
public:
	OIDName(std::shared_ptr<java::lang::String> name);
	OIDName(std::shared_ptr<sun::security::util::DerValue> derValue);
	OIDName(std::shared_ptr<sun::security::util::ObjectIdentifier> oid);
	int virtual constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<sun::security::util::ObjectIdentifier> virtual getOID();
	int virtual getType();
	int virtual hashCode();
	int virtual subtreeDepth();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~OIDName(){
	}

}; // class OIDName
}; // namespace sun::security::x509

#endif //__sun_security_x509_OIDName__

