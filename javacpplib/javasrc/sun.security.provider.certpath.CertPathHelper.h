#ifndef __sun_security_provider_certpath_CertPathHelper__
#define __sun_security_provider_certpath_CertPathHelper__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\CertPathHelper.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.security.cert.X509CRLSelector.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.util.Date.h"
#include "java.util.Set.h"
#include "sun.security.x509.GeneralNameInterface.h"

namespace sun::security::provider::certpath{
class CertPathHelper : public java::lang::Object {
protected:
	static std::shared_ptr<sun::security::provider::certpath::CertPathHelper> instance;
	CertPathHelper();
	void implSetDateAndTime(std::shared_ptr<java::security::cert::X509CRLSelector> var0,std::shared_ptr<java::util::Date> var1,long long var2) = 0;
	void implSetPathToNames(std::shared_ptr<java::security::cert::X509CertSelector> var0,std::shared_ptr<java::util::Set<sun::security::x509::GeneralNameInterface>> var1);
private:
public:
	static void setDateAndTime(std::shared_ptr<java::security::cert::X509CRLSelector> sel,std::shared_ptr<java::util::Date> date,long long skew);
	static void setPathToNames(std::shared_ptr<java::security::cert::X509CertSelector> sel,std::shared_ptr<java::util::Set<sun::security::x509::GeneralNameInterface>> names);
public:
	virtual ~CertPathHelper(){
	}

}; // class CertPathHelper
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_CertPathHelper__

