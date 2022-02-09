// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\OCSPRequest.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.cert.Extension.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.provider.certpath.CertId.h"
#include "sun.security.provider.certpath.OCSP.h"
#include "sun.security.provider.certpath.OCSPRequest.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"

static sun::security::provider::certpath::OCSPRequest::debug;
static sun::security::provider::certpath::OCSPRequest::dump;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::OCSPRequest::static_cinit()
{
	
	bool cVar0;
	
	sun::security::provider::certpath::OCSPRequest::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	if ( !(sun::security::provider::certpath::OCSPRequest::debug) )  
		goto label_cond_17;
	cVar0 = sun::security::util::Debug::isOn(std::make_shared<java::lang::String>(std::make_shared<char[]>("ocsp")));
label_goto_14:
	sun::security::provider::certpath::OCSPRequest::dump = cVar0;
	return;
	// 069    .line 80
label_cond_17:
	cVar0 = 0x0;
	goto label_goto_14;

}
// .method constructor <init>(Ljava/util/List;)V
sun::security::provider::certpath::OCSPRequest::OCSPRequest(std::shared_ptr<java::util::List<sun::security::provider::certpath::CertId>> certIds)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 079        value = {
	// 080            "(",
	// 081            "Ljava/util/List",
	// 082            "<",
	// 083            "Lsun/security/provider/certpath/CertId;",
	// 084            ">;)V"
	// 085        }
	// 086    .end annotation
	//    .local p1, "certIds":Ljava/util/List;, "Ljava/util/List<Lsun/security/provider/certpath/CertId;>;"
	// 091    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->certIds = certIds;
	this->extensions = java::util::Collections::emptyList({const[class].FS-Param});
	return;

}
// .method constructor <init>(Ljava/util/List;Ljava/util/List;)V
sun::security::provider::certpath::OCSPRequest::OCSPRequest(std::shared_ptr<java::util::List<sun::security::provider::certpath::CertId>> certIds,std::shared_ptr<java::util::List<java::security::cert::Extension>> extensions)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 110        value = {
	// 111            "(",
	// 112            "Ljava/util/List",
	// 113            "<",
	// 114            "Lsun/security/provider/certpath/CertId;",
	// 115            ">;",
	// 116            "Ljava/util/List",
	// 117            "<",
	// 118            "Ljava/security/cert/Extension;",
	// 119            ">;)V"
	// 120        }
	// 121    .end annotation
	//    .local p1, "certIds":Ljava/util/List;, "Ljava/util/List<Lsun/security/provider/certpath/CertId;>;"
	//    .local p2, "extensions":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/Extension;>;"
	// 127    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->certIds = certIds;
	this->extensions = extensions;
	return;

}
// .method constructor <init>(Lsun/security/provider/certpath/CertId;)V
sun::security::provider::certpath::OCSPRequest::OCSPRequest(std::shared_ptr<sun::security::provider::certpath::CertId> certId)
{
	
	//    .param p1, "certId"    # Lsun/security/provider/certpath/CertId;
	sun::security::provider::certpath::OCSPRequest::(java::util::Collections::singletonList(certId));
	return;

}
// .method encodeBytes()[B
unsigned char sun::security::provider::certpath::OCSPRequest::encodeBytes()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<sun::security::util::DerOutputStream> requestsOut;
	std::shared_ptr<java::util::Iterator> certId_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::CertId> certId;
	std::shared_ptr<sun::security::util::DerOutputStream> certIdOut;
	std::shared_ptr<sun::security::util::DerOutputStream> extOut;
	std::shared_ptr<java::util::Iterator> ext_S_iterator;
	std::shared_ptr<java::security::cert::Extension> ext;
	std::shared_ptr<sun::security::util::DerOutputStream> extsOut;
	std::shared_ptr<sun::security::util::DerOutputStream> tbsRequest;
	std::shared_ptr<sun::security::util::DerOutputStream> ocspRequest;
	std::shared_ptr<unsigned char[]> bytes;
	std::shared_ptr<sun::misc::HexDumpEncoder> hexEnc;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 160        value = {
	// 161            Ljava/io/IOException;
	// 162        }
	// 163    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v13, "tmp":Lsun/security/util/DerOutputStream;
	requestsOut = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v11, "requestsOut":Lsun/security/util/DerOutputStream;
	certId_S_iterator = this->certIds->iterator();
	//    .local v3, "certId$iterator":Ljava/util/Iterator;
label_goto_12:
	if ( !(certId_S_iterator->hasNext()) )  
		goto label_cond_2c;
	certId = certId_S_iterator->next();
	certId->checkCast("sun::security::provider::certpath::CertId");
	//    .local v2, "certId":Lsun/security/provider/certpath/CertId;
	certIdOut = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v4, "certIdOut":Lsun/security/util/DerOutputStream;
	certId->encode(certIdOut);
	requestsOut->write(0x30, certIdOut);
	goto label_goto_12;
	// 218    .line 116
	// 219    .end local v2    # "certId":Lsun/security/provider/certpath/CertId;
	// 220    .end local v4    # "certIdOut":Lsun/security/util/DerOutputStream;
label_cond_2c:
	tmp->write(0x30, requestsOut);
	if ( this->extensions->isEmpty() )     
		goto label_cond_86;
	extOut = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v7, "extOut":Lsun/security/util/DerOutputStream;
	ext_S_iterator = this->extensions->iterator();
	//    .local v6, "ext$iterator":Ljava/util/Iterator;
label_cond_48:
label_goto_48:
	if ( !(ext_S_iterator->hasNext()) )  
		goto label_cond_70;
	ext = ext_S_iterator->next();
	ext->checkCast("java::security::cert::Extension");
	//    .local v5, "ext":Ljava/security/cert/Extension;
	ext->encode(extOut);
	if ( !(ext->getId()->equals(sun::security::provider::certpath::OCSP::NONCE_EXTENSION_OID->toString())) )  
		goto label_cond_48;
	this->nonce = ext->getValue();
	goto label_goto_48;
	// 299    .line 125
	// 300    .end local v5    # "ext":Ljava/security/cert/Extension;
label_cond_70:
	extsOut = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v8, "extsOut":Lsun/security/util/DerOutputStream;
	extsOut->write(0x30, extOut);
	tmp->write(sun::security::util::DerValue::createTag(-0x80, 0x1, 0x2), extsOut);
	//    .end local v6    # "ext$iterator":Ljava/util/Iterator;
	//    .end local v7    # "extOut":Lsun/security/util/DerOutputStream;
	//    .end local v8    # "extsOut":Lsun/security/util/DerOutputStream;
label_cond_86:
	tbsRequest = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v12, "tbsRequest":Lsun/security/util/DerOutputStream;
	tbsRequest->write(0x30, tmp);
	ocspRequest = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v10, "ocspRequest":Lsun/security/util/DerOutputStream;
	ocspRequest->write(0x30, tbsRequest);
	bytes = ocspRequest->toByteArray();
	//    .local v1, "bytes":[B
	if ( !(sun::security::provider::certpath::OCSPRequest::dump) )  
		goto label_cond_cb;
	hexEnc = std::make_shared<sun::misc::HexDumpEncoder>();
	//    .local v9, "hexEnc":Lsun/misc/HexDumpEncoder;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPRequest::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSPRequest bytes...\n\n")))->append(hexEnc->encode(bytes))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString());
	//    .end local v9    # "hexEnc":Lsun/misc/HexDumpEncoder;
label_cond_cb:
	return bytes;

}
// .method getCertIds()Ljava/util/List;
std::shared_ptr<java::util::List<sun::security::provider::certpath::CertId>> sun::security::provider::certpath::OCSPRequest::getCertIds()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 416        value = {
	// 417            "()",
	// 418            "Ljava/util/List",
	// 419            "<",
	// 420            "Lsun/security/provider/certpath/CertId;",
	// 421            ">;"
	// 422        }
	// 423    .end annotation
	return this->certIds;

}
// .method getNonce()[B
unsigned char sun::security::provider::certpath::OCSPRequest::getNonce()
{
	
	return this->nonce;

}


