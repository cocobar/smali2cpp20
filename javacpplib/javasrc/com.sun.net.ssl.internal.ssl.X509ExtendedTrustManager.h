#ifndef __com_sun_net_ssl_internal_ssl_X509ExtendedTrustManager__
#define __com_sun_net_ssl_internal_ssl_X509ExtendedTrustManager__
// H L:\smali2cpp20\x64\Release\out\com\sun\net\ssl\internal\ssl\X509ExtendedTrustManager.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.cert.X509Certificate.h"
#include "javax.net.ssl.X509TrustManager.h"

namespace com::sun::net::ssl::internal::ssl{
class X509ExtendedTrustManager : public javax::net::ssl::X509TrustManager {
protected:
	X509ExtendedTrustManager();
private:
public:
	void checkClientTrusted(std::shared_ptr<std::vector<java::security::cert::X509Certificate>> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::lang::String> var2,std::shared_ptr<java::lang::String> var3);
	void checkServerTrusted(std::shared_ptr<std::vector<java::security::cert::X509Certificate>> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::lang::String> var2,std::shared_ptr<java::lang::String> var3);
public:
	virtual ~X509ExtendedTrustManager(){
	}

}; // class X509ExtendedTrustManager
}; // namespace com::sun::net::ssl::internal::ssl

#endif //__com_sun_net_ssl_internal_ssl_X509ExtendedTrustManager__

