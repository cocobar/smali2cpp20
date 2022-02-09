#ifndef __sun_security_x509_CRLNumberExtension__
#define __sun_security_x509_CRLNumberExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CRLNumberExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class CRLNumberExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
	CRLNumberExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value,std::shared_ptr<java::lang::String> extensionName,std::shared_ptr<java::lang::String> extensionLabel);
	CRLNumberExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,bool isCritical,std::shared_ptr<java::math::BigInteger> crlNum,std::shared_ptr<java::lang::String> extensionName,std::shared_ptr<java::lang::String> extensionLabel);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out,std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,bool isCritical);
private:
	static std::shared_ptr<java::lang::String> LABEL;
	std::shared_ptr<java::math::BigInteger> crlNumber;
	std::shared_ptr<java::lang::String> extensionLabel;
	std::shared_ptr<java::lang::String> extensionName;
	void virtual encodeThis();
public:
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> NUMBER;
	CRLNumberExtension(int crlNum);
	CRLNumberExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	CRLNumberExtension(std::shared_ptr<java::math::BigInteger> crlNum);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::math::BigInteger> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CRLNumberExtension(){
	}

}; // class CRLNumberExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_CRLNumberExtension__

