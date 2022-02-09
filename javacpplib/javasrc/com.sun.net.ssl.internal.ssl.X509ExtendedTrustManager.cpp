// CPP L:\smali2cpp20\x64\Release\out\com\sun\net\ssl\internal\ssl\X509ExtendedTrustManager.smali
#include "java2ctype.h"
#include "com.sun.net.ssl.internal.ssl.X509ExtendedTrustManager.h"
#include "java.lang.String.h"
#include "java.security.cert.X509Certificate.h"

// .method protected constructor <init>()V
com::sun::net::ssl::internal::ssl::X509ExtendedTrustManager::X509ExtendedTrustManager()
{
	
	// 015    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public abstract checkClientTrusted([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
void com::sun::net::ssl::internal::ssl::X509ExtendedTrustManager::checkClientTrusted(std::shared_ptr<std::vector<java::security::cert::X509Certificate>> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::lang::String> var2,std::shared_ptr<java::lang::String> var3)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 025        value = {
	// 026            Ljava/security/cert/CertificateException;
	// 027        }
	// 028    .end annotation

}
// .method public abstract checkServerTrusted([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
void com::sun::net::ssl::internal::ssl::X509ExtendedTrustManager::checkServerTrusted(std::shared_ptr<std::vector<java::security::cert::X509Certificate>> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::lang::String> var2,std::shared_ptr<java::lang::String> var3)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 033        value = {
	// 034            Ljava/security/cert/CertificateException;
	// 035        }
	// 036    .end annotation

}


