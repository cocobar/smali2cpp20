#ifndef __sun_security_x509_DistributionPointName__
#define __sun_security_x509_DistributionPointName__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\DistributionPointName.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.RDN.h"

namespace sun::security::x509{
class DistributionPointName : public java::lang::Object {
protected:
private:
	static unsigned char TAG_FULL_NAME;
	static unsigned char TAG_RELATIVE_NAME;
	std::shared_ptr<sun::security::x509::GeneralNames> fullName;
	int hashCode;
	std::shared_ptr<sun::security::x509::RDN> relativeName;
public:
	DistributionPointName(std::shared_ptr<sun::security::util::DerValue> encoding);
	DistributionPointName(std::shared_ptr<sun::security::x509::GeneralNames> fullName);
	DistributionPointName(std::shared_ptr<sun::security::x509::RDN> relativeName);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<sun::security::x509::GeneralNames> virtual getFullName();
	std::shared_ptr<sun::security::x509::RDN> virtual getRelativeName();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~DistributionPointName(){
	}

}; // class DistributionPointName
}; // namespace sun::security::x509

#endif //__sun_security_x509_DistributionPointName__

