#ifndef __sun_security_x509_EDIPartyName__
#define __sun_security_x509_EDIPartyName__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\EDIPartyName.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralNameInterface.h"

namespace sun::security::x509{
class EDIPartyName : public sun::security::x509::GeneralNameInterface {
protected:
private:
	static unsigned char TAG_ASSIGNER;
	static unsigned char TAG_PARTYNAME;
	std::shared_ptr<java::lang::String> assigner;
	int myhash;
	std::shared_ptr<java::lang::String> party;
public:
	EDIPartyName(std::shared_ptr<java::lang::String> partyName);
	EDIPartyName(std::shared_ptr<java::lang::String> assignerName,std::shared_ptr<java::lang::String> partyName);
	EDIPartyName(std::shared_ptr<sun::security::util::DerValue> derValue);
	int virtual constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<java::lang::String> virtual getAssignerName();
	std::shared_ptr<java::lang::String> virtual getPartyName();
	int virtual getType();
	int virtual hashCode();
	int virtual subtreeDepth();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~EDIPartyName(){
	}

}; // class EDIPartyName
}; // namespace sun::security::x509

#endif //__sun_security_x509_EDIPartyName__

