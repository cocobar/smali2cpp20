#ifndef __sun_security_util_AnchorCertificates__
#define __sun_security_util_AnchorCertificates__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\AnchorCertificates.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.HashSet.h"
#include "sun.security.util.Debug.h"

namespace sun::security::util{
class AnchorCertificates : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> HASH;
	static std::shared_ptr<java::util::HashSet<java::lang::String>> certs;
	static std::shared_ptr<sun::security::util::Debug> debug;
	AnchorCertificates();
public:
	static std::shared_ptr<java::util::HashSet> _get0();
	static std::shared_ptr<sun::security::util::Debug> _get1();
	static std::shared_ptr<java::util::HashSet> _set0(std::shared_ptr<java::util::HashSet> _value);
	static void static_cinit();
	static bool contains(std::shared_ptr<java::security::cert::X509Certificate> cert);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::AnchorCertificates::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~AnchorCertificates(){
	}

}; // class AnchorCertificates
}; // namespace sun::security::util

#endif //__sun_security_util_AnchorCertificates__

