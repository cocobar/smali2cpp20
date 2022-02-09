#ifndef __sun_security_x509_CertificateValidity__
#define __sun_security_x509_CertificateValidity__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateValidity.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.CertAttrSet.h"

namespace sun::security::x509{
class CertificateValidity : public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	static long long YR_2050;
	std::shared_ptr<java::util::Date> notAfter;
	std::shared_ptr<java::util::Date> notBefore;
	void virtual construct(std::shared_ptr<sun::security::util::DerValue> derVal);
	std::shared_ptr<java::util::Date> virtual getNotAfter();
	std::shared_ptr<java::util::Date> virtual getNotBefore();
public:
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> NOT_AFTER;
	static std::shared_ptr<java::lang::String> NOT_BEFORE;
	CertificateValidity();
	CertificateValidity(std::shared_ptr<java::util::Date> notBefore,std::shared_ptr<java::util::Date> notAfter);
	CertificateValidity(std::shared_ptr<sun::security::util::DerInputStream> in);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::util::Date> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual valid();
	void virtual valid(std::shared_ptr<java::util::Date> now);
public:
	virtual ~CertificateValidity(){
	}

}; // class CertificateValidity
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateValidity__

