#ifndef __sun_security_x509_OtherName__
#define __sun_security_x509_OtherName__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\OtherName.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.GeneralNameInterface.h"

namespace sun::security::x509{
class OtherName : public sun::security::x509::GeneralNameInterface {
protected:
private:
	static unsigned char TAG_VALUE;
	std::shared_ptr<sun::security::x509::GeneralNameInterface> gni;
	int myhash;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<unsigned char[]> nameValue;
	std::shared_ptr<sun::security::util::ObjectIdentifier> oid;
	std::shared_ptr<sun::security::x509::GeneralNameInterface> virtual getGNI(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<unsigned char[]> nameValue);
public:
	OtherName(std::shared_ptr<sun::security::util::DerValue> derValue);
	OtherName(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<unsigned char[]> value);
	int virtual constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	unsigned char virtual getNameValue();
	std::shared_ptr<sun::security::util::ObjectIdentifier> virtual getOID();
	int virtual getType();
	int virtual hashCode();
	int virtual subtreeDepth();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~OtherName(){
	}

}; // class OtherName
}; // namespace sun::security::x509

#endif //__sun_security_x509_OtherName__

