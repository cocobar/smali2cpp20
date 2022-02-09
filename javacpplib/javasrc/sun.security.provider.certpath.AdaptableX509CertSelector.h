#ifndef __sun_security_provider_certpath_AdaptableX509CertSelector__
#define __sun_security_provider_certpath_AdaptableX509CertSelector__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\AdaptableX509CertSelector.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.math.BigInteger.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Date.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.AuthorityKeyIdentifierExtension.h"

namespace sun::security::provider::certpath{
class AdaptableX509CertSelector : public java::security::cert::X509CertSelector {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	std::shared_ptr<java::util::Date> endDate;
	std::shared_ptr<java::math::BigInteger> serial;
	std::shared_ptr<unsigned char[]> ski;
	std::shared_ptr<java::util::Date> startDate;
	bool virtual matchSubjectKeyID(std::shared_ptr<java::security::cert::X509Certificate> xcert);
public:
	static void static_cinit();
	AdaptableX509CertSelector();
	std::shared_ptr<java::lang::Object> virtual clone();
	bool virtual match(std::shared_ptr<java::security::cert::Certificate> cert);
	void virtual setSerialNumber(std::shared_ptr<java::math::BigInteger> serial);
	void virtual setSkiAndSerialNumber(std::shared_ptr<sun::security::x509::AuthorityKeyIdentifierExtension> ext);
	void virtual setSubjectKeyIdentifier(std::shared_ptr<unsigned char[]> subjectKeyID);
	void virtual setValidityPeriod(std::shared_ptr<java::util::Date> startDate,std::shared_ptr<java::util::Date> endDate);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::AdaptableX509CertSelector::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~AdaptableX509CertSelector(){
	}

}; // class AdaptableX509CertSelector
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_AdaptableX509CertSelector__

