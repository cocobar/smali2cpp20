#ifndef __sun_security_x509_GeneralSubtree__
#define __sun_security_x509_GeneralSubtree__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\GeneralSubtree.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralName.h"

namespace sun::security::x509{
class GeneralSubtree : public java::lang::Object {
protected:
private:
	static int MIN_DEFAULT;
	static unsigned char TAG_MAX;
	static unsigned char TAG_MIN;
	int maximum;
	int minimum;
	int myhash;
	std::shared_ptr<sun::security::x509::GeneralName> name;
public:
	GeneralSubtree(std::shared_ptr<sun::security::util::DerValue> val);
	GeneralSubtree(std::shared_ptr<sun::security::x509::GeneralName> name,int min,int max);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual getMaximum();
	int virtual getMinimum();
	std::shared_ptr<sun::security::x509::GeneralName> virtual getName();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~GeneralSubtree(){
	}

}; // class GeneralSubtree
}; // namespace sun::security::x509

#endif //__sun_security_x509_GeneralSubtree__

