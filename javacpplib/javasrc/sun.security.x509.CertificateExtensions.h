#ifndef __sun_security_x509_CertificateExtensions__
#define __sun_security_x509_CertificateExtensions__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateExtensions.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.Enumeration.h"
#include "java.util.Map.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class CertificateExtensions : public sun::security::x509::CertAttrSet<sun::security::x509::Extension> {
protected:
private:
	static std::shared_ptr<std::vector<java::lang::Class>> PARAMS;
	static std::shared_ptr<sun::security::util::Debug> debug;
	std::shared_ptr<java::util::Map<java::lang::String,sun::security::x509::Extension>> map;
	std::shared_ptr<java::util::Map<java::lang::String,sun::security::x509::Extension>> unparseableExtensions;
	bool unsupportedCritExt;
	void virtual init(std::shared_ptr<sun::security::util::DerInputStream> in);
	void virtual parseExtension(std::shared_ptr<sun::security::x509::Extension> ext);
public:
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> NAME;
	static void static_cinit();
	CertificateExtensions();
	CertificateExtensions(std::shared_ptr<sun::security::util::DerInputStream> in);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out,bool isCertReq);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<sun::security::x509::Extension> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Collection<sun::security::x509::Extension>> virtual getAllExtensions();
	std::shared_ptr<java::util::Enumeration<sun::security::x509::Extension>> virtual getElements();
	std::shared_ptr<sun::security::x509::Extension> virtual getExtension(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<java::lang::String> virtual getNameByOid(std::shared_ptr<sun::security::util::ObjectIdentifier> oid);
	std::shared_ptr<java::util::Map<java::lang::String,sun::security::x509::Extension>> virtual getUnparseableExtensions();
	bool virtual hasUnsupportedCriticalExtension();
	int virtual hashCode();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::CertificateExtensions::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CertificateExtensions(){
	}

}; // class CertificateExtensions
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateExtensions__

