#ifndef __sun_security_provider_certpath_State__
#define __sun_security_provider_certpath_State__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\State.smali
#include "java2ctype.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.security.cert.X509Certificate.h"

namespace sun::security::provider::certpath{
class State : public java::lang::Cloneable {
protected:
private:
public:
	std::shared_ptr<java::lang::Object> clone() = 0;
	bool isInitial() = 0;
	bool keyParamsNeeded() = 0;
	void updateState(std::shared_ptr<java::security::cert::X509Certificate> var0);
	State(){ };
	virtual ~State(){ };

}; // class State
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_State__

