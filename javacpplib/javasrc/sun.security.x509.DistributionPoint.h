#ifndef __sun_security_x509_DistributionPoint__
#define __sun_security_x509_DistributionPoint__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\DistributionPoint.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.RDN.h"

namespace sun::security::x509{
class DistributionPoint : public java::lang::Object {
protected:
private:
	static std::shared_ptr<std::vector<java::lang::String>> REASON_STRINGS;
	static unsigned char TAG_DIST_PT;
	static unsigned char TAG_FULL_NAME;
	static unsigned char TAG_ISSUER;
	static unsigned char TAG_REASONS;
	static unsigned char TAG_REL_NAME;
	std::shared_ptr<sun::security::x509::GeneralNames> crlIssuer;
	std::shared_ptr<sun::security::x509::GeneralNames> fullName;
	int hashCode;
	std::shared_ptr<bool[]> reasonFlags;
	std::shared_ptr<sun::security::x509::RDN> relativeName;
	static std::shared_ptr<java::lang::String> reasonToString(int reason);
public:
	static int AA_COMPROMISE;
	static int AFFILIATION_CHANGED;
	static int CA_COMPROMISE;
	static int CERTIFICATE_HOLD;
	static int CESSATION_OF_OPERATION;
	static int KEY_COMPROMISE;
	static int PRIVILEGE_WITHDRAWN;
	static int SUPERSEDED;
	static void static_cinit();
	DistributionPoint(std::shared_ptr<sun::security::util::DerValue> val);
	DistributionPoint(std::shared_ptr<sun::security::x509::GeneralNames> fullName,std::shared_ptr<bool[]> reasonFlags,std::shared_ptr<sun::security::x509::GeneralNames> crlIssuer);
	DistributionPoint(std::shared_ptr<sun::security::x509::RDN> relativeName,std::shared_ptr<bool[]> reasonFlags,std::shared_ptr<sun::security::x509::GeneralNames> crlIssuer);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<sun::security::x509::GeneralNames> virtual getCRLIssuer();
	std::shared_ptr<sun::security::x509::GeneralNames> virtual getFullName();
	bool virtual getReasonFlags();
	std::shared_ptr<sun::security::x509::RDN> virtual getRelativeName();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::DistributionPoint::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DistributionPoint(){
	}

}; // class DistributionPoint
}; // namespace sun::security::x509

#endif //__sun_security_x509_DistributionPoint__

