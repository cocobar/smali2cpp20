#ifndef __sun_security_x509_GeneralNameInterface__
#define __sun_security_x509_GeneralNameInterface__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\GeneralNameInterface.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "sun.security.util.DerOutputStream.h"

namespace sun::security::x509{
class GeneralNameInterface : public java::lang::Object {
protected:
private:
public:
	static int NAME_ANY;
	static int NAME_DIFF_TYPE;
	static int NAME_DIRECTORY;
	static int NAME_DNS;
	static int NAME_EDI;
	static int NAME_IP;
	static int NAME_MATCH;
	static int NAME_NARROWS;
	static int NAME_OID;
	static int NAME_RFC822;
	static int NAME_SAME_TYPE;
	static int NAME_URI;
	static int NAME_WIDENS;
	static int NAME_X400;
	int constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> var0);
	void encode(std::shared_ptr<sun::security::util::DerOutputStream> var0);
	int getType() = 0;
	int subtreeDepth();
	GeneralNameInterface(){ };
	virtual ~GeneralNameInterface(){ };

}; // class GeneralNameInterface
}; // namespace sun::security::x509

#endif //__sun_security_x509_GeneralNameInterface__

