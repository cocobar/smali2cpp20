#ifndef __sun_security_x509_GeneralNames__
#define __sun_security_x509_GeneralNames__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\GeneralNames.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralName.h"

namespace sun::security::x509{
class GeneralNames : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::List<sun::security::x509::GeneralName>> names;
public:
	GeneralNames();
	GeneralNames(std::shared_ptr<sun::security::util::DerValue> derVal);
	std::shared_ptr<sun::security::x509::GeneralNames> virtual add(std::shared_ptr<sun::security::x509::GeneralName> name);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<sun::security::x509::GeneralName> virtual get(int index);
	int virtual hashCode();
	bool virtual isEmpty();
	std::shared_ptr<java::util::Iterator<sun::security::x509::GeneralName>> virtual iterator();
	std::shared_ptr<java::util::List<sun::security::x509::GeneralName>> virtual names();
	int virtual size();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~GeneralNames(){
	}

}; // class GeneralNames
}; // namespace sun::security::x509

#endif //__sun_security_x509_GeneralNames__

