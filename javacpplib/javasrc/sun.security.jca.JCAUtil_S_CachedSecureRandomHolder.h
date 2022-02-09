#ifndef __sun_security_jca_JCAUtil_S_CachedSecureRandomHolder__
#define __sun_security_jca_JCAUtil_S_CachedSecureRandomHolder__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\JCAUtil$CachedSecureRandomHolder.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.security.SecureRandom.h"

namespace sun::security::jca{
class JCAUtil_S_CachedSecureRandomHolder : public java::lang::Object {
protected:
private:
	JCAUtil_S_CachedSecureRandomHolder();
public:
	static std::shared_ptr<java::security::SecureRandom> instance;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::jca::JCAUtil_S_CachedSecureRandomHolder::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~JCAUtil_S_CachedSecureRandomHolder(){
	}

}; // class JCAUtil_S_CachedSecureRandomHolder
}; // namespace sun::security::jca

#endif //__sun_security_jca_JCAUtil_S_CachedSecureRandomHolder__

