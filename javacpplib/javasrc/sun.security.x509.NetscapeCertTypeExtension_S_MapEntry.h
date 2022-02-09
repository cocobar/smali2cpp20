#ifndef __sun_security_x509_NetscapeCertTypeExtension_S_MapEntry__
#define __sun_security_x509_NetscapeCertTypeExtension_S_MapEntry__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\NetscapeCertTypeExtension$MapEntry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace sun::security::x509{
class NetscapeCertTypeExtension_S_MapEntry : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> mName;
	int mPosition;
	NetscapeCertTypeExtension_S_MapEntry(std::shared_ptr<java::lang::String> name,int position);
public:
	virtual ~NetscapeCertTypeExtension_S_MapEntry(){
	}

}; // class NetscapeCertTypeExtension_S_MapEntry
}; // namespace sun::security::x509

#endif //__sun_security_x509_NetscapeCertTypeExtension_S_MapEntry__

