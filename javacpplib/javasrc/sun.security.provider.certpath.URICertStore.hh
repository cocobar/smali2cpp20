#ifndef __sun_security_provider_certpath_URICertStore__
#define __sun_security_provider_certpath_URICertStore__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\URICertStore.smali
#include "java2ctype.h"
#include "java.security.cert.CertStoreSpi.hh"

namespace sun::security::provider::certpath{
class URICertStore : public java::security::cert::CertStoreSpi {
public:
	URICertStore();
	virtual ~URICertStore();

}; // class URICertStore
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_URICertStore__

