#ifndef __sun_security_x509_AccessDescription__
#define __sun_security_x509_AccessDescription__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\AccessDescription.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.GeneralName.h"

namespace sun::security::x509{
class AccessDescription : public java::lang::Object {
protected:
private:
	std::shared_ptr<sun::security::x509::GeneralName> accessLocation;
	std::shared_ptr<sun::security::util::ObjectIdentifier> accessMethod;
	int myhash;
public:
	static std::shared_ptr<sun::security::util::ObjectIdentifier> Ad_CAISSUERS_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> Ad_CAREPOSITORY_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> Ad_OCSP_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> Ad_TIMESTAMPING_Id;
	static void static_cinit();
	AccessDescription(std::shared_ptr<sun::security::util::DerValue> derValue);
	AccessDescription(std::shared_ptr<sun::security::util::ObjectIdentifier> accessMethod,std::shared_ptr<sun::security::x509::GeneralName> accessLocation);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<sun::security::x509::GeneralName> virtual getAccessLocation();
	std::shared_ptr<sun::security::util::ObjectIdentifier> virtual getAccessMethod();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::AccessDescription::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~AccessDescription(){
	}

}; // class AccessDescription
}; // namespace sun::security::x509

#endif //__sun_security_x509_AccessDescription__

