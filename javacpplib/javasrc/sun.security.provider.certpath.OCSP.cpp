// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\OCSP.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.net.HttpURLConnection.h"
#include "java.net.URI.h"
#include "java.net.URL.h"
#include "java.net.URLConnection.h"
#include "java.security.AccessController.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathValidatorException_S_BasicReason.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.Extension.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Arrays.h"
#include "java.util.Collections.h"
#include "java.util.Date.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.security.action.GetIntegerAction.h"
#include "sun.security.provider.certpath.CertId.h"
#include "sun.security.provider.certpath.OCSP_S_RevocationStatus.h"
#include "sun.security.provider.certpath.OCSP.h"
#include "sun.security.provider.certpath.OCSPRequest.h"
#include "sun.security.provider.certpath.OCSPResponse_S_SingleResponse.h"
#include "sun.security.provider.certpath.OCSPResponse.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AccessDescription.h"
#include "sun.security.x509.AuthorityInfoAccessExtension.h"
#include "sun.security.x509.GeneralName.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.SerialNumber.h"
#include "sun.security.x509.URIName.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::provider::certpath::OCSP::CONNECT_TIMEOUT;
static sun::security::provider::certpath::OCSP::DEFAULT_CONNECT_TIMEOUT = 0x3a98;
static sun::security::provider::certpath::OCSP::NONCE_EXTENSION_OID;
static sun::security::provider::certpath::OCSP::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::OCSP::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0xa);
	?;
	sun::security::provider::certpath::OCSP::NONCE_EXTENSION_OID = sun::security::util::ObjectIdentifier::newInternal(cVar0);
	sun::security::provider::certpath::OCSP::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	sun::security::provider::certpath::OCSP::CONNECT_TIMEOUT = sun::security::provider::certpath::OCSP::initializeTimeout({const[class].FS-Param});
	return;
	// 062    .line 69
	// 063    nop
	// 065    :array_1e
	// 066    .array-data 4
	// 067        0x1
	// 068        0x3
	// 069        0x6
	// 070        0x1
	// 071        0x5
	// 072        0x5
	// 073        0x7
	// 074        0x30
	// 075        0x1
	// 076        0x2
	// 077    .end array-data

}
// .method private constructor <init>()V
sun::security::provider::certpath::OCSP::OCSP()
{
	
	// 085    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static check(Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;)Lsun/security/provider/certpath/OCSP$RevocationStatus;
std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus> sun::security::provider::certpath::OCSP::check(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::security::cert::X509Certificate> issuerCert)
{
	
	std::shared_ptr<java::security::cert::X509Certificate> cVar0;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	std::shared_ptr<sun::security::x509::X509CertImpl> certImpl;
	std::shared_ptr<java::net::URI> responderURI;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar1;
	std::shared_ptr<sun::security::provider::certpath::CertId> certId;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	//    .param p1, "issuerCert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 095        value = {
	// 096            Ljava/io/IOException;,
	// 097            Ljava/security/cert/CertPathValidatorException;
	// 098        }
	// 099    .end annotation
	cVar0 = 0x0;
	0x0;
	//    .local v6, "certId":Lsun/security/provider/certpath/CertId;
	0x0;
	//    .local v1, "responderURI":Ljava/net/URI;
	try {
	//label_try_start_3:
	certImpl = sun::security::x509::X509CertImpl::toImpl(cert);
	//    .local v7, "certImpl":Lsun/security/x509/X509CertImpl;
	responderURI = sun::security::provider::certpath::OCSP::getResponderURI(certImpl);
	//    .local v1, "responderURI":Ljava/net/URI;
	if ( responderURI )     
		goto label_cond_20;
	cVar1 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No OCSP Responder URI in certificate")));
	// throw
	throw cVar1;
	// 138    :try_end_16
	// 139    .catch Ljava/security/cert/CertificateException; {:try_start_3 .. :try_end_16} :catch_16
	// 140    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_16} :catch_16
	// 142    .line 127
	// 143    .end local v1    # "responderURI":Ljava/net/URI;
	// 144    .end local v6    # "certId":Lsun/security/provider/certpath/CertId;
	// 145    .end local v7    # "certImpl":Lsun/security/x509/X509CertImpl;
label_catch_16:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v8, "e":Ljava/lang/Exception;
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exception while encoding OCSPRequest")), getCatchExcetionFromList);
	// throw
	throw cVar2;
	// 161    .line 126
	// 162    .end local v8    # "e":Ljava/lang/Exception;
	// 163    .restart local v1    # "responderURI":Ljava/net/URI;
	// 164    .restart local v6    # "certId":Lsun/security/provider/certpath/CertId;
	// 165    .restart local v7    # "certImpl":Lsun/security/x509/X509CertImpl;
label_cond_20:
	try {
	//label_try_start_20:
	//    .end local v6    # "certId":Lsun/security/provider/certpath/CertId;
	certId = std::make_shared<sun::security::provider::certpath::CertId>(issuerCert, certImpl->getSerialNumberObject());
	//label_try_end_29:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_20 .. :try_end_29} :catch_16
	//    .catch Ljava/io/IOException; {:try_start_20 .. :try_end_29} :catch_16
	//    .local v6, "certId":Lsun/security/provider/certpath/CertId;
	//    .local v9, "ocspResponse":Lsun/security/provider/certpath/OCSPResponse;
	return sun::security::provider::certpath::OCSP::check(java::util::Collections::singletonList(certId), responderURI, issuerCert, cVar0, cVar0, java::util::Collections::emptyList(java::util::Collections::singletonList(certId), responderURI, issuerCert, cVar0, cVar0, java::util::Collections::emptyList(java::util::Collections::singletonList(certId), responderURI, issuerCert, cVar0, cVar0, java::util::Collections::emptyList(java::util::Collections::singletonList(certId), responderURI, issuerCert, cVar0, cVar0, java::util::Collections::emptyList(java::util::Collections::singletonList(certId), responderURI, issuerCert, cVar0, cVar0, java::util::Collections::emptyList(java::util::Collections::singletonList(certId), responderURI, issuerCert, cVar0, cVar0, java::util::Collections::emptyList({const[class].FS-Param})))))))->getSingleResponse(certId);

}
// .method public static check(Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;Ljava/net/URI;Ljava/security/cert/X509Certificate;Ljava/util/Date;)Lsun/security/provider/certpath/OCSP$RevocationStatus;
std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus> sun::security::provider::certpath::OCSP::check(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::security::cert::X509Certificate> issuerCert,std::shared_ptr<java::net::URI> responderURI,std::shared_ptr<java::security::cert::X509Certificate> responderCert,std::shared_ptr<java::util::Date> date)
{
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	//    .param p1, "issuerCert"    # Ljava/security/cert/X509Certificate;
	//    .param p2, "responderURI"    # Ljava/net/URI;
	//    .param p3, "responderCert"    # Ljava/security/cert/X509Certificate;
	//    .param p4, "date"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Throws;
	// 217        value = {
	// 218            Ljava/io/IOException;,
	// 219            Ljava/security/cert/CertPathValidatorException;
	// 220        }
	// 221    .end annotation
	return sun::security::provider::certpath::OCSP::check(cert, issuerCert, responderURI, responderCert, date, java::util::Collections::emptyList(cert, issuerCert, responderURI, responderCert, date, java::util::Collections::emptyList(cert, issuerCert, responderURI, responderCert, date, java::util::Collections::emptyList(cert, issuerCert, responderURI, responderCert, date, java::util::Collections::emptyList(cert, issuerCert, responderURI, responderCert, date, java::util::Collections::emptyList(cert, issuerCert, responderURI, responderCert, date, java::util::Collections::emptyList({const[class].FS-Param})))))));

}
// .method public static check(Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;Ljava/net/URI;Ljava/security/cert/X509Certificate;Ljava/util/Date;Ljava/util/List;)Lsun/security/provider/certpath/OCSP$RevocationStatus;
std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus> sun::security::provider::certpath::OCSP::check(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::security::cert::X509Certificate> issuerCert,std::shared_ptr<java::net::URI> responderURI,std::shared_ptr<java::security::cert::X509Certificate> responderCert,std::shared_ptr<java::util::Date> date,std::shared_ptr<java::util::List<java::security::cert::Extension>> extensions)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	std::shared_ptr<sun::security::provider::certpath::CertId> certId;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	//    .param p1, "issuerCert"    # Ljava/security/cert/X509Certificate;
	//    .param p2, "responderURI"    # Ljava/net/URI;
	//    .param p3, "responderCert"    # Ljava/security/cert/X509Certificate;
	//    .param p4, "date"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Signature;
	// 255        value = {
	// 256            "(",
	// 257            "Ljava/security/cert/X509Certificate;",
	// 258            "Ljava/security/cert/X509Certificate;",
	// 259            "Ljava/net/URI;",
	// 260            "Ljava/security/cert/X509Certificate;",
	// 261            "Ljava/util/Date;",
	// 262            "Ljava/util/List",
	// 263            "<",
	// 264            "Ljava/security/cert/Extension;",
	// 265            ">;)",
	// 266            "Lsun/security/provider/certpath/OCSP$RevocationStatus;"
	// 267        }
	// 268    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 271        value = {
	// 272            Ljava/io/IOException;,
	// 273            Ljava/security/cert/CertPathValidatorException;
	// 274        }
	// 275    .end annotation
	//    .local p5, "extensions":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/Extension;>;"
	0x0;
	//    .local v6, "certId":Lsun/security/provider/certpath/CertId;
	try {
	//label_try_start_1:
	//    .local v7, "certImpl":Lsun/security/x509/X509CertImpl;
	//    .end local v6    # "certId":Lsun/security/provider/certpath/CertId;
	certId = std::make_shared<sun::security::provider::certpath::CertId>(issuerCert, sun::security::x509::X509CertImpl::toImpl(cert)->getSerialNumberObject());
	//label_try_end_e:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_20;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_20;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_1 .. :try_end_e} :catch_20
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_e} :catch_20
	//    .local v6, "certId":Lsun/security/provider/certpath/CertId;
	//    .local v9, "ocspResponse":Lsun/security/provider/certpath/OCSPResponse;
	return sun::security::provider::certpath::OCSP::check(java::util::Collections::singletonList(certId), responderURI, issuerCert, responderCert, date, extensions)->getSingleResponse(certId);
	// 331    .line 175
	// 332    .end local v6    # "certId":Lsun/security/provider/certpath/CertId;
	// 333    .end local v7    # "certImpl":Lsun/security/x509/X509CertImpl;
	// 334    .end local v9    # "ocspResponse":Lsun/security/provider/certpath/OCSPResponse;
label_catch_20:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v8, "e":Ljava/lang/Exception;
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exception while encoding OCSPRequest")), getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method static check(Ljava/util/List;Ljava/net/URI;Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;Ljava/util/Date;Ljava/util/List;)Lsun/security/provider/certpath/OCSPResponse;
std::shared_ptr<sun::security::provider::certpath::OCSPResponse> sun::security::provider::certpath::OCSP::check(std::shared_ptr<java::util::List<sun::security::provider::certpath::CertId>> certIds,std::shared_ptr<java::net::URI> responderURI,std::shared_ptr<java::security::cert::X509Certificate> issuerCert,std::shared_ptr<java::security::cert::X509Certificate> responderCert,std::shared_ptr<java::util::Date> date,std::shared_ptr<java::util::List<java::security::cert::Extension>> extensions)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar3;
	std::shared_ptr<sun::security::provider::certpath::OCSPRequest> request;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<unsigned char[]> bytes;
	std::shared_ptr<java::io::InputStream> in;
	std::shared_ptr<java::io::OutputStream> out;
	int response;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar5;
	std::shared_ptr<java::net::URL> url;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::net::HttpURLConnection> con;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int contentLength;
	int cVar2;
	std::shared_ptr<unsigned char[]> response;
	int total;
	int count;
	auto response;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar6;
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse> ocspResponse;
	
	//    .param p1, "responderURI"    # Ljava/net/URI;
	//    .param p2, "issuerCert"    # Ljava/security/cert/X509Certificate;
	//    .param p3, "responderCert"    # Ljava/security/cert/X509Certificate;
	//    .param p4, "date"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Signature;
	// 358        value = {
	// 359            "(",
	// 360            "Ljava/util/List",
	// 361            "<",
	// 362            "Lsun/security/provider/certpath/CertId;",
	// 363            ">;",
	// 364            "Ljava/net/URI;",
	// 365            "Ljava/security/cert/X509Certificate;",
	// 366            "Ljava/security/cert/X509Certificate;",
	// 367            "Ljava/util/Date;",
	// 368            "Ljava/util/List",
	// 369            "<",
	// 370            "Ljava/security/cert/Extension;",
	// 371            ">;)",
	// 372            "Lsun/security/provider/certpath/OCSPResponse;"
	// 373        }
	// 374    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 377        value = {
	// 378            Ljava/io/IOException;,
	// 379            Ljava/security/cert/CertPathValidatorException;
	// 380        }
	// 381    .end annotation
	//    .local p0, "certIds":Ljava/util/List;, "Ljava/util/List<Lsun/security/provider/certpath/CertId;>;"
	//    .local p5, "extensions":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/Extension;>;"
	0x0;
	//    .local v12, "bytes":[B
	0x0;
	//    .local v18, "request":Lsun/security/provider/certpath/OCSPRequest;
	try {
	//label_try_start_3:
	var9 = request(certIds, extensions);
	//label_try_end_e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_106;
	}
	//    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_e} :catch_106
	//    .local v19, "request":Lsun/security/provider/certpath/OCSPRequest;
	try {
	//label_try_start_e:
	//label_try_end_11:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_151;
	}
	//    .catch Ljava/io/IOException; {:try_start_e .. :try_end_11} :catch_151
	//    .end local v18    # "request":Lsun/security/provider/certpath/OCSPRequest;
	bytes = request->encodeBytes();
	//    .local v12, "bytes":[B
	in = 0x0;
	//    .local v16, "in":Ljava/io/InputStream;
	out = 0x0;
	//    .local v17, "out":Ljava/io/OutputStream;
	response = 0x0;
	//    .local v20, "response":[B
	try {
	//label_try_start_18:
	url = responderURI->toURL();
	//    .local v22, "url":Ljava/net/URL;
	if ( !(sun::security::provider::certpath::OCSP::debug) )  
		goto label_cond_3b;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSP::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("connecting to OCSP service at: ")))->append(url)->toString());
label_cond_3b:
	con = url->openConnection();
	con->checkCast("java::net::HttpURLConnection");
	//    .local v13, "con":Ljava/net/HttpURLConnection;
	con->setConnectTimeout(sun::security::provider::certpath::OCSP::CONNECT_TIMEOUT);
	con->setReadTimeout(sun::security::provider::certpath::OCSP::CONNECT_TIMEOUT);
	con->setDoOutput(0x1);
	con->setDoInput(0x1);
	con->setRequestMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("POST")));
	con->setRequestProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("Content-type")), std::make_shared<java::lang::String>(std::make_shared<char[]>("application/ocsp-request")));
	con->setRequestProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("Content-length")), java::lang::String::valueOf(bytes->size()));
	out = con->getOutputStream();
	//    .local v17, "out":Ljava/io/OutputStream;
	out->write(bytes);
	out->flush();
	if ( !(sun::security::provider::certpath::OCSP::debug) )  
		goto label_cond_b1;
	if ( con->getResponseCode() == 0xc8 )
		goto label_cond_b1;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSP::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Received HTTP error: ")))->append(con->getResponseCode())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" - ")))->append(con->getResponseMessage())->toString());
label_cond_b1:
	in = con->getInputStream();
	//    .local v16, "in":Ljava/io/InputStream;
	contentLength = con->getContentLength();
	//    .local v14, "contentLength":I
	if ( contentLength != -0x1 )
		goto label_cond_bf;
	contentLength = 0x7fffffff;
label_cond_bf:
	if ( contentLength <= 0x800 )
		goto label_cond_110;
	cVar2 = 0x800;
label_goto_c5:
	response = std::make_shared<std::vector<unsigned char[]>>(cVar2);
	//    .local v20, "response":[B
	total = 0x0;
	//    .local v21, "total":I
label_cond_cb:
label_goto_cb:
	if ( total >= contentLength )
		goto label_cond_e0;
	count = in->read(response, total, (response->size() - total));
	//    .local v15, "count":I
	if ( count >= 0 )
		goto label_cond_112;
	//    .end local v15    # "count":I
label_cond_e0:
	//label_try_end_e3:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12c;
	}
	catch (...){
		goto label_catchall_13a;
	}
	//    .catch Ljava/io/IOException; {:try_start_18 .. :try_end_e3} :catch_12c
	//    .catchall {:try_start_18 .. :try_end_e3} :catchall_13a
	response = java::util::Arrays::copyOf(response, total);
	if ( !(in) )  
		goto label_cond_e9;
	try {
	//label_try_start_e6:
	in->close();
	//label_try_end_e9:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_128;
	}
	//    .catch Ljava/io/IOException; {:try_start_e6 .. :try_end_e9} :catch_128
label_cond_e9:
	if ( !(out) )  
		goto label_cond_ee;
	try {
	//label_try_start_eb:
	out->close();
	//label_try_end_ee:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12a;
	}
	//    .catch Ljava/io/IOException; {:try_start_eb .. :try_end_ee} :catch_12a
label_cond_ee:
	0x0;
	//    .local v6, "ocspResponse":Lsun/security/provider/certpath/OCSPResponse;
	try {
	//label_try_start_ef:
	//    .end local v6    # "ocspResponse":Lsun/security/provider/certpath/OCSPResponse;
	ocspResponse = std::make_shared<sun::security::provider::certpath::OCSPResponse>(response);
	//label_try_end_f6:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_14a;
	}
	//    .catch Ljava/io/IOException; {:try_start_ef .. :try_end_f6} :catch_14a
	//    .local v6, "ocspResponse":Lsun/security/provider/certpath/OCSPResponse;
	ocspResponse->verify(certIds, issuerCert, responderCert, date, request->getNonce());
	return ocspResponse;
	// 727    .line 210
	// 728    .end local v6    # "ocspResponse":Lsun/security/provider/certpath/OCSPResponse;
	// 729    .end local v13    # "con":Ljava/net/HttpURLConnection;
	// 730    .end local v14    # "contentLength":I
	// 731    .end local v16    # "in":Ljava/io/InputStream;
	// 732    .end local v17    # "out":Ljava/io/OutputStream;
	// 733    .end local v19    # "request":Lsun/security/provider/certpath/OCSPRequest;
	// 734    .end local v20    # "response":[B
	// 735    .end local v21    # "total":I
	// 736    .end local v22    # "url":Ljava/net/URL;
	// 737    .local v12, "bytes":[B
	// 738    .restart local v18    # "request":Lsun/security/provider/certpath/OCSPRequest;
label_catch_106:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .end local v18    # "request":Lsun/security/provider/certpath/OCSPRequest;
	//    .local v5, "ioe":Ljava/io/IOException;
label_goto_107:
	cVar3 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exception while encoding OCSPRequest")), ioe);
	// throw
	throw cVar3;
	// 756    .end local v5    # "ioe":Ljava/io/IOException;
	// 757    .local v12, "bytes":[B
	// 758    .restart local v13    # "con":Ljava/net/HttpURLConnection;
	// 759    .restart local v14    # "contentLength":I
	// 760    .restart local v16    # "in":Ljava/io/InputStream;
	// 761    .restart local v17    # "out":Ljava/io/OutputStream;
	// 762    .restart local v19    # "request":Lsun/security/provider/certpath/OCSPRequest;
	// 763    .local v20, "response":[B
	// 764    .restart local v22    # "url":Ljava/net/URL;
label_cond_110:
	cVar2 = contentLength;
	goto label_goto_c5;
	// 771    .line 254
	// 772    .restart local v15    # "count":I
	// 773    .local v20, "response":[B
	// 774    .restart local v21    # "total":I
label_cond_112:
	total = (total + count);
	try {
	//label_try_start_114:
	if ( total <  response->size() )
		goto label_cond_cb;
	if ( total >= contentLength )
		goto label_cond_cb;
	//label_try_end_126:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12c;
	}
	catch (...){
		goto label_catchall_13a;
	}
	//    .catch Ljava/io/IOException; {:try_start_114 .. :try_end_126} :catch_12c
	//    .catchall {:try_start_114 .. :try_end_126} :catchall_13a
	response = java::util::Arrays::copyOf(response, ( total * 0x2));
	goto label_goto_cb;
	// 806    .line 268
	// 807    .end local v15    # "count":I
label_catch_128:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v5    # "ioe":Ljava/io/IOException;
	// throw
	throw;
	// 815    .line 275
	// 816    .end local v5    # "ioe":Ljava/io/IOException;
label_catch_12a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v5    # "ioe":Ljava/io/IOException;
	// throw
	throw;
	// 824    .line 260
	// 825    .end local v5    # "ioe":Ljava/io/IOException;
	// 826    .end local v13    # "con":Ljava/net/HttpURLConnection;
	// 827    .end local v14    # "contentLength":I
	// 828    .end local v16    # "in":Ljava/io/InputStream;
	// 829    .end local v17    # "out":Ljava/io/OutputStream;
	// 830    .end local v20    # "response":[B
	// 831    .end local v21    # "total":I
	// 832    .end local v22    # "url":Ljava/net/URL;
label_catch_12c:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v5    # "ioe":Ljava/io/IOException;
	try {
	//label_try_start_12d:
	cVar5 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to determine revocation status due to network error")), getCatchExcetionFromList, 0x0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::UNDETERMINED_REVOCATION_STATUS);
	// throw
	throw cVar5;
	// 855    :try_end_13a
	// 856    .catchall {:try_start_12d .. :try_end_13a} :catchall_13a
	// 858    .line 264
	// 859    .end local v5    # "ioe":Ljava/io/IOException;
label_catchall_13a:
	// move-exception
	
	if ( !(in) )  
		goto label_cond_140;
	try {
	//label_try_start_13d:
	in->close();
	//label_try_end_140:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_146;
	}
	//    .catch Ljava/io/IOException; {:try_start_13d .. :try_end_140} :catch_146
label_cond_140:
	if ( !(out) )  
		goto label_cond_145;
	try {
	//label_try_start_142:
	out->close();
	//label_try_end_145:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_148;
	}
	//    .catch Ljava/io/IOException; {:try_start_142 .. :try_end_145} :catch_148
label_cond_145:
	// throw
	throw;
	// 886    .line 268
label_catch_146:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v5    # "ioe":Ljava/io/IOException;
	// throw
	throw;
	// 894    .line 275
	// 895    .end local v5    # "ioe":Ljava/io/IOException;
label_catch_148:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v5    # "ioe":Ljava/io/IOException;
	// throw
	throw;
	// 903    .line 284
	// 904    .end local v5    # "ioe":Ljava/io/IOException;
	// 905    .restart local v13    # "con":Ljava/net/HttpURLConnection;
	// 906    .restart local v14    # "contentLength":I
	// 907    .restart local v16    # "in":Ljava/io/InputStream;
	// 908    .restart local v17    # "out":Ljava/io/OutputStream;
	// 909    .restart local v20    # "response":[B
	// 910    .restart local v21    # "total":I
	// 911    .restart local v22    # "url":Ljava/net/URL;
label_catch_14a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v5    # "ioe":Ljava/io/IOException;
	cVar6 = std::make_shared<java::security::cert::CertPathValidatorException>(getCatchExcetionFromList);
	// throw
	throw cVar6;
	// 923    .line 210
	// 924    .end local v5    # "ioe":Ljava/io/IOException;
	// 925    .end local v13    # "con":Ljava/net/HttpURLConnection;
	// 926    .end local v14    # "contentLength":I
	// 927    .end local v16    # "in":Ljava/io/InputStream;
	// 928    .end local v17    # "out":Ljava/io/OutputStream;
	// 929    .end local v20    # "response":[B
	// 930    .end local v21    # "total":I
	// 931    .end local v22    # "url":Ljava/net/URL;
	// 932    .local v12, "bytes":[B
label_catch_151:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v5    # "ioe":Ljava/io/IOException;
	request;
	//    .end local v19    # "request":Lsun/security/provider/certpath/OCSPRequest;
	//    .local v18, "request":Lsun/security/provider/certpath/OCSPRequest;
	goto label_goto_107;

}
// .method public static getResponderURI(Ljava/security/cert/X509Certificate;)Ljava/net/URI;
std::shared_ptr<java::net::URI> sun::security::provider::certpath::OCSP::getResponderURI(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	try {
	//label_try_start_0:
	//label_try_end_7:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_0 .. :try_end_7} :catch_9
	return sun::security::provider::certpath::OCSP::getResponderURI(sun::security::x509::X509CertImpl::toImpl(cert));
	// 963    .line 308
label_catch_9:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ce":Ljava/security/cert/CertificateException;
	return 0x0;

}
// .method static getResponderURI(Lsun/security/x509/X509CertImpl;)Ljava/net/URI;
std::shared_ptr<java::net::URI> sun::security::provider::certpath::OCSP::getResponderURI(std::shared_ptr<sun::security::x509::X509CertImpl> certImpl)
{
	
	std::shared_ptr<java::net::URI> cVar0;
	std::shared_ptr<sun::security::x509::AuthorityInfoAccessExtension> aia;
	std::shared_ptr<java::util::Iterator> description_S_iterator;
	std::shared_ptr<sun::security::x509::AccessDescription> description;
	std::shared_ptr<sun::security::x509::GeneralName> generalName;
	std::shared_ptr<sun::security::x509::URIName> uri;
	
	//    .param p0, "certImpl"    # Lsun/security/x509/X509CertImpl;
	cVar0 = 0x0;
	aia = certImpl->getAuthorityInfoAccessExtension();
	//    .local v0, "aia":Lsun/security/x509/AuthorityInfoAccessExtension;
	if ( aia )     
		goto label_cond_8;
	return cVar0;
	// 993    .line 323
label_cond_8:
	//    .local v3, "descriptions":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/AccessDescription;>;"
	description_S_iterator = aia->getAccessDescriptions()->iterator();
	//    .local v2, "description$iterator":Ljava/util/Iterator;
label_cond_10:
	if ( !(description_S_iterator->hasNext()) )  
		goto label_cond_3e;
	description = description_S_iterator->next();
	description->checkCast("sun::security::x509::AccessDescription");
	//    .local v1, "description":Lsun/security/x509/AccessDescription;
	if ( !(description->getAccessMethod()->equals(sun::security::x509::AccessDescription::Ad_OCSP_Id)) )  
		goto label_cond_10;
	generalName = description->getAccessLocation();
	//    .local v4, "generalName":Lsun/security/x509/GeneralName;
	if ( generalName->getType() != 0x6 )
		goto label_cond_10;
	uri = generalName->getName();
	uri->checkCast("sun::security::x509::URIName");
	//    .local v5, "uri":Lsun/security/x509/URIName;
	return uri->getURI();
	// 1065    .line 335
	// 1066    .end local v1    # "description":Lsun/security/x509/AccessDescription;
	// 1067    .end local v4    # "generalName":Lsun/security/x509/GeneralName;
	// 1068    .end local v5    # "uri":Lsun/security/x509/URIName;
label_cond_3e:
	return cVar0;

}
// .method private static initializeTimeout()I
int sun::security::provider::certpath::OCSP::initializeTimeout()
{
	
	std::shared_ptr<sun::security::action::GetIntegerAction> cVar0;
	std::shared_ptr<java::lang::Integer> tmp;
	
	cVar0 = std::make_shared<sun::security::action::GetIntegerAction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("com.sun.security.ocsp.timeout")));
	tmp = java::security::AccessController::doPrivileged(cVar0);
	tmp->checkCast("java::lang::Integer");
	//    .local v0, "tmp":Ljava/lang/Integer;
	if ( !(tmp) )  
		goto label_cond_16;
	if ( tmp->intValue() >= 0 )
		goto label_cond_19;
label_cond_16:
	return 0x3a98;
	// 1107    .line 95
label_cond_19:
	return ( tmp->intValue() * 0x3e8);

}


