#ifndef __sun_security_x509_OIDMap_S_OIDInfo__
#define __sun_security_x509_OIDMap_S_OIDInfo__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\OIDMap$OIDInfo.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.ObjectIdentifier.h"

namespace sun::security::x509{
class OIDMap_S_OIDInfo : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::Class<java::lang::Object>> clazz;
public:
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<sun::security::util::ObjectIdentifier> oid;
	OIDMap_S_OIDInfo(std::shared_ptr<java::lang::String> name,std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz);
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual getClazz();
public:
	virtual ~OIDMap_S_OIDInfo(){
	}

}; // class OIDMap_S_OIDInfo
}; // namespace sun::security::x509

#endif //__sun_security_x509_OIDMap_S_OIDInfo__

