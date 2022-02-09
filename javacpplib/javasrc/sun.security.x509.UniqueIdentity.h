#ifndef __sun_security_x509_UniqueIdentity__
#define __sun_security_x509_UniqueIdentity__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\UniqueIdentity.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"

namespace sun::security::x509{
class UniqueIdentity : public java::lang::Object {
protected:
private:
	std::shared_ptr<sun::security::util::BitArray> id;
public:
	UniqueIdentity(std::shared_ptr<sun::security::util::BitArray> id);
	UniqueIdentity(std::shared_ptr<sun::security::util::DerInputStream> in);
	UniqueIdentity(std::shared_ptr<sun::security::util::DerValue> derVal);
	UniqueIdentity(std::shared_ptr<unsigned char[]> id);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out,unsigned char tag);
	bool virtual getId();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~UniqueIdentity(){
	}

}; // class UniqueIdentity
}; // namespace sun::security::x509

#endif //__sun_security_x509_UniqueIdentity__

