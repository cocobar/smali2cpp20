#ifndef __sun_security_x509_CertificateAlgorithmId__
#define __sun_security_x509_CertificateAlgorithmId__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateAlgorithmId.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.CertAttrSet.h"

namespace sun::security::x509{
class CertificateAlgorithmId : public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	std::shared_ptr<sun::security::x509::AlgorithmId> algId;
public:
	static std::shared_ptr<java::lang::String> ALGORITHM;
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> NAME;
	CertificateAlgorithmId(std::shared_ptr<java::io::InputStream> in);
	CertificateAlgorithmId(std::shared_ptr<sun::security::util::DerInputStream> in);
	CertificateAlgorithmId(std::shared_ptr<sun::security::x509::AlgorithmId> algId);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<sun::security::x509::AlgorithmId> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CertificateAlgorithmId(){
	}

}; // class CertificateAlgorithmId
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateAlgorithmId__

