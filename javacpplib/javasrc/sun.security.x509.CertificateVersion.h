#ifndef __sun_security_x509_CertificateVersion__
#define __sun_security_x509_CertificateVersion__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateVersion.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.CertAttrSet.h"

namespace sun::security::x509{
class CertificateVersion : public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	void virtual construct(std::shared_ptr<sun::security::util::DerValue> derVal);
	int virtual getVersion();
public:
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> NAME;
	static int V1;
	static int V2;
	static int V3;
	static std::shared_ptr<java::lang::String> VERSION;
	int version;
	CertificateVersion();
	CertificateVersion(int version);
	CertificateVersion(std::shared_ptr<java::io::InputStream> in);
	CertificateVersion(std::shared_ptr<sun::security::util::DerInputStream> in);
	CertificateVersion(std::shared_ptr<sun::security::util::DerValue> val);
	int virtual compare(int vers);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::lang::Integer> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CertificateVersion(){
	}

}; // class CertificateVersion
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateVersion__

