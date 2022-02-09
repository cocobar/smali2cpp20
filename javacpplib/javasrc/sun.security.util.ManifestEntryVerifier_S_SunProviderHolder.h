#ifndef __sun_security_util_ManifestEntryVerifier_S_SunProviderHolder__
#define __sun_security_util_ManifestEntryVerifier_S_SunProviderHolder__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\ManifestEntryVerifier$SunProviderHolder.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.security.Provider.h"

namespace sun::security::util{
class ManifestEntryVerifier_S_SunProviderHolder : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::security::Provider> instance;
	ManifestEntryVerifier_S_SunProviderHolder();
public:
	static std::shared_ptr<java::security::Provider> _get0();
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::ManifestEntryVerifier_S_SunProviderHolder::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ManifestEntryVerifier_S_SunProviderHolder(){
	}

}; // class ManifestEntryVerifier_S_SunProviderHolder
}; // namespace sun::security::util

#endif //__sun_security_util_ManifestEntryVerifier_S_SunProviderHolder__

