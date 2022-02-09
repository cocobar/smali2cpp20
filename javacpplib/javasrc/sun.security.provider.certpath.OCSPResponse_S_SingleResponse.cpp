// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\OCSPResponse$SingleResponse.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.cert.CRLReason.h"
#include "java.security.cert.Extension.h"
#include "java.util.Collections.h"
#include "java.util.Date.h"
#include "java.util.HashMap.h"
#include "java.util.Map.h"
#include "sun.security.provider.certpath.CertId.h"
#include "sun.security.provider.certpath.OCSP_S_RevocationStatus_S_CertStatus.h"
#include "sun.security.provider.certpath.OCSPResponse_S_SingleResponse.h"
#include "sun.security.provider.certpath.OCSPResponse.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.Extension.h"

// .method static synthetic -get0(Lsun/security/provider/certpath/OCSPResponse$SingleResponse;)Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::provider::certpath::OCSPResponse_S_SingleResponse::_get0(std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_SingleResponse> _this)
{
	
	//    .param p0, "-this"    # Lsun/security/provider/certpath/OCSPResponse$SingleResponse;
	return _this->nextUpdate;

}
// .method static synthetic -get1(Lsun/security/provider/certpath/OCSPResponse$SingleResponse;)Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::provider::certpath::OCSPResponse_S_SingleResponse::_get1(std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_SingleResponse> _this)
{
	
	//    .param p0, "-this"    # Lsun/security/provider/certpath/OCSPResponse$SingleResponse;
	return _this->thisUpdate;

}
// .method static synthetic -wrap0(Lsun/security/provider/certpath/OCSPResponse$SingleResponse;)Lsun/security/provider/certpath/CertId;
std::shared_ptr<sun::security::provider::certpath::CertId> sun::security::provider::certpath::OCSPResponse_S_SingleResponse::_wrap0(std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_SingleResponse> _this)
{
	
	//    .param p0, "-this"    # Lsun/security/provider/certpath/OCSPResponse$SingleResponse;
	return _this->getCertId();

}
// .method private constructor <init>(Lsun/security/util/DerValue;)V
sun::security::provider::certpath::OCSPResponse_S_SingleResponse::OCSPResponse_S_SingleResponse(std::shared_ptr<sun::security::util::DerValue> der)
{
	
	unsigned char cVar0;
	std::shared_ptr<java::util::Date> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<sun::security::util::DerInputStream> tmp;
	std::shared_ptr<sun::security::provider::certpath::CertId> cVar3;
	unsigned char derVal;
	short tag;
	unsigned char dv;
	int reason;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<sun::security::util::DerValue> derVal;
	auto singleExtDer;
	std::shared_ptr<java::util::HashMap> cVar6;
	int i;
	std::shared_ptr<sun::security::x509::Extension> ext;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::io::IOException> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	std::shared_ptr<java::io::IOException> cVar10;
	
	//    .param p1, "der"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 083        value = {
	// 084            Ljava/io/IOException;
	// 085        }
	// 086    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	// 094    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( der->tag == 0x30 )
		goto label_cond_14;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad ASN.1 encoding in SingleResponse")));
	// throw
	throw cVar2;
	// 112    .line 695
label_cond_14:
	tmp = der->data;
	//    .local v7, "tmp":Lsun/security/util/DerInputStream;
	cVar3 = std::make_shared<sun::security::provider::certpath::CertId>(tmp->getDerValue()->data);
	this->certId = cVar3;
	derVal = tmp->getDerValue();
	//    .local v0, "derVal":Lsun/security/util/DerValue;
	tag = (short)((unsigned char)(( derVal->tag & 0x1f)));
	//    .local v6, "tag":S
	if ( tag != cVar0 )
		goto label_cond_137;
	this->certStatus = sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::REVOKED;
	this->revocationTime = derVal->data->getGeneralizedTime();
	if ( !(derVal->data->available()) )  
		goto label_cond_131;
	dv = derVal->data->getDerValue();
	//    .local v1, "dv":Lsun/security/util/DerValue;
	if ( (short)((unsigned char)(( dv->tag & 0x1f))) )     
		goto label_cond_12b;
	reason = dv->data->getEnumerated();
	//    .local v4, "reason":I
	if ( reason < 0 ) 
		goto label_cond_125;
	if ( reason >= sun::security::provider::certpath::OCSPResponse::-get1({const[class].FS-Param})->size() )
		goto label_cond_125;
	this->revocationReason = sun::security::provider::certpath::OCSPResponse::-get1({const[class].FS-Param})[reason];
	//    .end local v1    # "dv":Lsun/security/util/DerValue;
	//    .end local v4    # "reason":I
label_goto_68:
	if ( !(sun::security::provider::certpath::OCSPResponse::-get0({const[class].FS-Param})) )  
		goto label_cond_a8;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPResponse::-get0({const[class].FS-Param})->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Revocation time: ")))->append(this->revocationTime)->toString());
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPResponse::-get0({const[class].FS-Param})->println(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Revocation reason: ")))->append(this->revocationReason)->toString());
label_cond_a8:
label_goto_a8:
	this->thisUpdate = tmp->getGeneralizedTime();
	if ( tmp->available() )     
		goto label_cond_157;
	this->nextUpdate = cVar1;
label_cond_b6:
label_goto_b6:
	if ( tmp->available() <= 0 )
		goto label_cond_195;
	derVal = tmp->getDerValue();
	if ( !(derVal->isContextSpecific(cVar0)) )  
		goto label_cond_18e;
	singleExtDer = derVal->data->getSequence(0x3);
	//    .local v5, "singleExtDer":[Lsun/security/util/DerValue;
	cVar6 = std::make_shared<java::util::HashMap>(singleExtDer->size());
	this->singleExtensions = cVar6;
	i = 0x0;
	//    .local v3, "i":I
label_goto_d6:
	if ( i >= singleExtDer->size() )
		goto label_cond_194;
	ext = std::make_shared<sun::security::x509::Extension>(singleExtDer[i]);
	//    .local v2, "ext":Lsun/security/x509/Extension;
	if ( !(sun::security::provider::certpath::OCSPResponse::-get0({const[class].FS-Param})) )  
		goto label_cond_101;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPResponse::-get0({const[class].FS-Param})->println(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSP single extension: ")))->append(ext)->toString());
label_cond_101:
	if ( !(ext->isCritical()) )  
		goto label_cond_181;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<java::io::IOException>(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unsupported OCSP critical extension: ")))->append(ext->getExtensionId())->toString());
	// throw
	throw cVar8;
	// 436    .line 712
	// 437    .end local v2    # "ext":Lsun/security/x509/Extension;
	// 438    .end local v3    # "i":I
	// 439    .end local v5    # "singleExtDer":[Lsun/security/util/DerValue;
	// 440    .restart local v1    # "dv":Lsun/security/util/DerValue;
	// 441    .restart local v4    # "reason":I
label_cond_125:
	this->revocationReason = java::security::cert::CRLReason::UNSPECIFIED;
	goto label_goto_68;
	// 449    .line 715
	// 450    .end local v4    # "reason":I
label_cond_12b:
	this->revocationReason = java::security::cert::CRLReason::UNSPECIFIED;
	goto label_goto_68;
	// 458    .line 718
	// 459    .end local v1    # "dv":Lsun/security/util/DerValue;
label_cond_131:
	this->revocationReason = java::security::cert::CRLReason::UNSPECIFIED;
	goto label_goto_68;
	// 467    .line 726
label_cond_137:
	this->revocationTime = cVar1;
	this->revocationReason = java::security::cert::CRLReason::UNSPECIFIED;
	if ( tag )     
		goto label_cond_145;
	this->certStatus = sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::GOOD;
	goto label_goto_a8;
	// 486    .line 730
label_cond_145:
	if ( tag != 0x2 )
		goto label_cond_14e;
	this->certStatus = sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::UNKNOWN;
	goto label_goto_a8;
	// 499    .line 733
label_cond_14e:
	cVar10 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid certificate status")));
	// throw
	throw cVar10;
	// 509    .line 743
label_cond_157:
	derVal = tmp->getDerValue();
	if ( (short)((unsigned char)(( derVal->tag & 0x1f))) )     
		goto label_cond_17d;
	this->nextUpdate = derVal->data->getGeneralizedTime();
	if ( !(tmp->available()) )  
		goto label_cond_b6;
	(short)((unsigned char)(( tmp->getDerValue()->tag & 0x1f)));
	goto label_goto_b6;
	// 559    .line 756
label_cond_17d:
	this->nextUpdate = cVar1;
	goto label_goto_b6;
	// 565    .line 780
	// 566    .restart local v2    # "ext":Lsun/security/x509/Extension;
	// 567    .restart local v3    # "i":I
	// 568    .restart local v5    # "singleExtDer":[Lsun/security/util/DerValue;
label_cond_181:
	this->singleExtensions->put(ext->getId(), ext);
	i = ( i + 0x1);
	goto label_goto_d6;
	// 583    .line 783
	// 584    .end local v2    # "ext":Lsun/security/x509/Extension;
	// 585    .end local v3    # "i":I
	// 586    .end local v5    # "singleExtDer":[Lsun/security/util/DerValue;
label_cond_18e:
	this->singleExtensions = java::util::Collections::emptyMap({const[class].FS-Param});
label_cond_194:
label_goto_194:
	return;
	// 599    .line 786
label_cond_195:
	this->singleExtensions = java::util::Collections::emptyMap({const[class].FS-Param});
	goto label_goto_194;

}
// .method synthetic constructor <init>(Lsun/security/util/DerValue;Lsun/security/provider/certpath/OCSPResponse$SingleResponse;)V
sun::security::provider::certpath::OCSPResponse_S_SingleResponse::OCSPResponse_S_SingleResponse(std::shared_ptr<sun::security::util::DerValue> der,std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_SingleResponse> _this1)
{
	
	//    .param p1, "der"    # Lsun/security/util/DerValue;
	//    .param p2, "-this1"    # Lsun/security/provider/certpath/OCSPResponse$SingleResponse;
	sun::security::provider::certpath::OCSPResponse_S_SingleResponse::(der);
	return;

}
// .method private getCertId()Lsun/security/provider/certpath/CertId;
std::shared_ptr<sun::security::provider::certpath::CertId> sun::security::provider::certpath::OCSPResponse_S_SingleResponse::getCertId()
{
	
	return this->certId;

}
// .method public getCertStatus()Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;
std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> sun::security::provider::certpath::OCSPResponse_S_SingleResponse::getCertStatus()
{
	
	return this->certStatus;

}
// .method public getRevocationReason()Ljava/security/cert/CRLReason;
std::shared_ptr<java::security::cert::CRLReason> sun::security::provider::certpath::OCSPResponse_S_SingleResponse::getRevocationReason()
{
	
	return this->revocationReason;

}
// .method public getRevocationTime()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::provider::certpath::OCSPResponse_S_SingleResponse::getRevocationTime()
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	cVar0 = this->revocationTime->clone();
	cVar0->checkCast("java::util::Date");
	return cVar0;

}
// .method public getSingleExtensions()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::security::cert::Extension>> sun::security::provider::certpath::OCSPResponse_S_SingleResponse::getSingleExtensions()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 672        value = {
	// 673            "()",
	// 674            "Ljava/util/Map",
	// 675            "<",
	// 676            "Ljava/lang/String;",
	// 677            "Ljava/security/cert/Extension;",
	// 678            ">;"
	// 679        }
	// 680    .end annotation
	return java::util::Collections::unmodifiableMap(this->singleExtensions);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::OCSPResponse_S_SingleResponse::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SingleResponse:  \n")));
	sb->append(this->certId);
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nCertStatus: ")))->append(this->certStatus)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	if ( this->certStatus != sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::REVOKED )
		goto label_cond_4f;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("revocationTime is ")))->append(this->revocationTime)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("revocationReason is ")))->append(this->revocationReason)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
label_cond_4f:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("thisUpdate is ")))->append(this->thisUpdate)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	if ( !(this->nextUpdate) )  
		goto label_cond_79;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("nextUpdate is ")))->append(this->nextUpdate)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
label_cond_79:
	return sb->toString();

}


