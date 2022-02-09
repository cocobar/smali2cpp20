// CPP L:\smali2cpp20\x64\Release\out\sun\security\pkcs\PKCS7$VerbatimX509Certificate.smali
#include "java2ctype.h"
#include "java.security.cert.X509Certificate.h"
#include "sun.security.pkcs.PKCS7_S_VerbatimX509Certificate.h"
#include "sun.security.pkcs.PKCS7_S_WrappedX509Certificate.h"

// .method public constructor <init>(Ljava/security/cert/X509Certificate;[B)V
sun::security::pkcs::PKCS7_S_VerbatimX509Certificate::PKCS7_S_VerbatimX509Certificate(std::shared_ptr<java::security::cert::X509Certificate> wrapped,std::shared_ptr<unsigned char[]> encodedVerbatim)
{
	
	//    .param p1, "wrapped"    # Ljava/security/cert/X509Certificate;
	//    .param p2, "encodedVerbatim"    # [B
	sun::security::pkcs::PKCS7_S_WrappedX509Certificate::(wrapped);
	this->encodedVerbatim = encodedVerbatim;
	return;

}
// .method public getEncoded()[B
unsigned char sun::security::pkcs::PKCS7_S_VerbatimX509Certificate::getEncoded()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 043        value = {
	// 044            Ljava/security/cert/CertificateEncodingException;
	// 045        }
	// 046    .end annotation
	return this->encodedVerbatim;

}


