#ifndef __sun_security_x509_RFC822Name__
#define __sun_security_x509_RFC822Name__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\RFC822Name.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralNameInterface.h"

namespace sun::security::x509{
class RFC822Name : public sun::security::x509::GeneralNameInterface {
protected:
private:
	std::shared_ptr<java::lang::String> name;
public:
	RFC822Name(std::shared_ptr<java::lang::String> name);
	RFC822Name(std::shared_ptr<sun::security::util::DerValue> derValue);
	int virtual constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual getName();
	int virtual getType();
	int virtual hashCode();
	void virtual parseName(std::shared_ptr<java::lang::String> name);
	int virtual subtreeDepth();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~RFC822Name(){
	}

}; // class RFC822Name
}; // namespace sun::security::x509

#endif //__sun_security_x509_RFC822Name__

