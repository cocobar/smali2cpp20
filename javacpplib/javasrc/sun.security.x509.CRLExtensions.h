#ifndef __sun_security_x509_CRLExtensions__
#define __sun_security_x509_CRLExtensions__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CRLExtensions.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.Enumeration.h"
#include "java.util.Map.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class CRLExtensions : public java::lang::Object {
protected:
private:
	static std::shared_ptr<std::vector<java::lang::Class>> PARAMS;
	std::shared_ptr<java::util::Map<java::lang::String,sun::security::x509::Extension>> map;
	bool unsupportedCritExt;
	void virtual init(std::shared_ptr<sun::security::util::DerInputStream> derStrm);
	void virtual parseExtension(std::shared_ptr<sun::security::x509::Extension> ext);
public:
	static void static_cinit();
	CRLExtensions();
	CRLExtensions(std::shared_ptr<sun::security::util::DerInputStream> in);
	void virtual _delete_(std::shared_ptr<java::lang::String> alias);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out,bool isExplicit);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<sun::security::x509::Extension> virtual get(std::shared_ptr<java::lang::String> alias);
	std::shared_ptr<java::util::Collection<sun::security::x509::Extension>> virtual getAllExtensions();
	std::shared_ptr<java::util::Enumeration<sun::security::x509::Extension>> virtual getElements();
	bool virtual hasUnsupportedCriticalExtension();
	int virtual hashCode();
	void virtual set(std::shared_ptr<java::lang::String> alias,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::CRLExtensions::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CRLExtensions(){
	}

}; // class CRLExtensions
}; // namespace sun::security::x509

#endif //__sun_security_x509_CRLExtensions__

