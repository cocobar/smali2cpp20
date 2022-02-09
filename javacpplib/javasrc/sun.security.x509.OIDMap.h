#ifndef __sun_security_x509_OIDMap__
#define __sun_security_x509_OIDMap__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\OIDMap.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.OIDMap_S_OIDInfo.h"

namespace sun::security::x509{
class OIDMap : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> AUTH_INFO_ACCESS;
	static std::shared_ptr<java::lang::String> AUTH_KEY_IDENTIFIER;
	static std::shared_ptr<java::lang::String> BASIC_CONSTRAINTS;
	static std::shared_ptr<java::lang::String> CERT_ISSUER;
	static std::shared_ptr<java::lang::String> CERT_POLICIES;
	static std::shared_ptr<java::lang::String> CRL_DIST_POINTS;
	static std::shared_ptr<java::lang::String> CRL_NUMBER;
	static std::shared_ptr<java::lang::String> CRL_REASON;
	static std::shared_ptr<java::lang::String> DELTA_CRL_INDICATOR;
	static std::shared_ptr<java::lang::String> EXT_KEY_USAGE;
	static std::shared_ptr<java::lang::String> FRESHEST_CRL;
	static std::shared_ptr<java::lang::String> INHIBIT_ANY_POLICY;
	static std::shared_ptr<java::lang::String> ISSUER_ALT_NAME;
	static std::shared_ptr<java::lang::String> ISSUING_DIST_POINT;
	static std::shared_ptr<java::lang::String> KEY_USAGE;
	static std::shared_ptr<java::lang::String> NAME_CONSTRAINTS;
	static std::shared_ptr<java::lang::String> NETSCAPE_CERT;
	static std::shared_ptr<int[]> NetscapeCertType_data;
	static std::shared_ptr<java::lang::String> OCSPNOCHECK;
	static std::shared_ptr<java::lang::String> POLICY_CONSTRAINTS;
	static std::shared_ptr<java::lang::String> POLICY_MAPPINGS;
	static std::shared_ptr<java::lang::String> PRIVATE_KEY_USAGE;
	static std::shared_ptr<java::lang::String> ROOT;
	static std::shared_ptr<java::lang::String> SUBJECT_INFO_ACCESS;
	static std::shared_ptr<java::lang::String> SUB_ALT_NAME;
	static std::shared_ptr<java::lang::String> SUB_KEY_IDENTIFIER;
	static std::shared_ptr<java::util::Map<java::lang::String,sun::security::x509::OIDMap_S_OIDInfo>> nameMap;
	static std::shared_ptr<java::util::Map<sun::security::util::ObjectIdentifier,sun::security::x509::OIDMap_S_OIDInfo>> oidMap;
	OIDMap();
	static void addInternal(std::shared_ptr<java::lang::String> name,std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<java::lang::Class> clazz);
public:
	static void static_cinit();
	static void addAttribute(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> oid,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz);
	static std::shared_ptr<java::lang::Class<java::lang::Object>> getClass(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<java::lang::Class<java::lang::Object>> getClass(std::shared_ptr<sun::security::util::ObjectIdentifier> oid);
	static std::shared_ptr<java::lang::String> getName(std::shared_ptr<sun::security::util::ObjectIdentifier> oid);
	static std::shared_ptr<sun::security::util::ObjectIdentifier> getOID(std::shared_ptr<java::lang::String> name);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::OIDMap::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~OIDMap(){
	}

}; // class OIDMap
}; // namespace sun::security::x509

#endif //__sun_security_x509_OIDMap__

