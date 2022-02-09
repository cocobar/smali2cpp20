#ifndef __sun_security_provider_certpath_X509CertPath__
#define __sun_security_provider_certpath_X509CertPath__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\X509CertPath.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.lang.String.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"

namespace sun::security::provider::certpath{
class X509CertPath : public java::security::cert::CertPath {
protected:
private:
	static std::shared_ptr<java::lang::String> COUNT_ENCODING;
	static std::shared_ptr<java::lang::String> PKCS7_ENCODING;
	static std::shared_ptr<java::lang::String> PKIPATH_ENCODING;
	static std::shared_ptr<java::util::Collection<java::lang::String>> encodingList;
	static long long serialVersionUID;
	std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> certs;
	unsigned char virtual encodePKCS7();
	unsigned char virtual encodePKIPATH();
	static std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> parsePKCS7(std::shared_ptr<java::io::InputStream> is);
	static std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> parsePKIPATH(std::shared_ptr<java::io::InputStream> is);
	static unsigned char readAllBytes(std::shared_ptr<java::io::InputStream> is);
public:
	static void static_cinit();
	X509CertPath(std::shared_ptr<java::io::InputStream> is);
	X509CertPath(std::shared_ptr<java::io::InputStream> is,std::shared_ptr<java::lang::String> encoding);
	X509CertPath(std::shared_ptr<java::util::List<java::security::cert::Certificate>> certs);
	static std::shared_ptr<java::util::Iterator<java::lang::String>> getEncodingsStatic();
	std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> virtual getCertificates();
	unsigned char virtual getEncoded();
	unsigned char virtual getEncoded(std::shared_ptr<java::lang::String> encoding);
	std::shared_ptr<java::util::Iterator<java::lang::String>> virtual getEncodings();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::X509CertPath::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~X509CertPath(){
	}

}; // class X509CertPath
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_X509CertPath__

