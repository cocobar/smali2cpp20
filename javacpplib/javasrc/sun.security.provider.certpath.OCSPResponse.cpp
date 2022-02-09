// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\OCSPResponse.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.math.BigInteger.h"
#include "java.security.AccessController.h"
#include "java.security.GeneralSecurityException.h"
#include "java.security.InvalidKeyException.h"
#include "java.security.NoSuchAlgorithmException.h"
#include "java.security.PublicKey.h"
#include "java.security.Signature.h"
#include "java.security.SignatureException.h"
#include "java.security.cert.CRLReason.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathValidatorException_S_BasicReason.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.ArrayList.h"
#include "java.util.Arrays.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Date.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.action.GetIntegerAction.h"
#include "sun.security.provider.certpath.AlgorithmChecker.h"
#include "sun.security.provider.certpath.CertId.h"
#include "sun.security.provider.certpath.OCSP_S_RevocationStatus_S_CertStatus.h"
#include "sun.security.provider.certpath.OCSP.h"
#include "sun.security.provider.certpath.OCSPResponse_S_ResponseStatus.h"
#include "sun.security.provider.certpath.OCSPResponse_S_SingleResponse.h"
#include "sun.security.provider.certpath.OCSPResponse.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.KeyIdentifier.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::provider::certpath::OCSPResponse::_sun_security_provider_certpath_OCSPResponse_S_ResponseStatusSwitchesValues = nullptr;
static sun::security::provider::certpath::OCSPResponse::CERT_STATUS_GOOD = 0x0;
static sun::security::provider::certpath::OCSPResponse::CERT_STATUS_REVOKED = 0x1;
static sun::security::provider::certpath::OCSPResponse::CERT_STATUS_UNKNOWN = 0x2;
static sun::security::provider::certpath::OCSPResponse::DEFAULT_MAX_CLOCK_SKEW = 0xdbba0;
static sun::security::provider::certpath::OCSPResponse::KEY_TAG = 0x2;
static sun::security::provider::certpath::OCSPResponse::KP_OCSP_SIGNING_OID = std::make_shared<java::lang::String>("1.3.6.1.5.5.7.3.9");
static sun::security::provider::certpath::OCSPResponse::MAX_CLOCK_SKEW;
static sun::security::provider::certpath::OCSPResponse::NAME_TAG = 0x1;
static sun::security::provider::certpath::OCSPResponse::OCSP_BASIC_RESPONSE_OID;
static sun::security::provider::certpath::OCSPResponse::debug;
static sun::security::provider::certpath::OCSPResponse::dump;
static sun::security::provider::certpath::OCSPResponse::rsvalues;
static sun::security::provider::certpath::OCSPResponse::values;
// .method static synthetic -get0()Lsun/security/util/Debug;
std::shared_ptr<sun::security::util::Debug> sun::security::provider::certpath::OCSPResponse::_get0()
{
	
	return sun::security::provider::certpath::OCSPResponse::debug;

}
// .method static synthetic -get1()[Ljava/security/cert/CRLReason;
std::shared_ptr<java::security::cert::CRLReason> sun::security::provider::certpath::OCSPResponse::_get1()
{
	
	return sun::security::provider::certpath::OCSPResponse::values;

}
// .method private static synthetic -getsun-security-provider-certpath-OCSPResponse$ResponseStatusSwitchesValues()[I
int sun::security::provider::certpath::OCSPResponse::_getsun_security_provider_certpath_OCSPResponse_S_ResponseStatusSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(sun::security::provider::certpath::OCSPResponse::_sun_security_provider_certpath_OCSPResponse_S_ResponseStatusSwitchesValues) )  
		goto label_cond_7;
	return sun::security::provider::certpath::OCSPResponse::_sun_security_provider_certpath_OCSPResponse_S_ResponseStatusSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::INTERNAL_ERROR->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_5c
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::MALFORMED_REQUEST->ordinal()] = 0x5;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5a;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_5a
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::SIG_REQUIRED->ordinal()] = 0x6;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_58;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_58
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::SUCCESSFUL->ordinal()] = 0x2;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_56;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_56
label_goto_32:
	try {
	//label_try_start_32:
	cVar0[sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::TRY_LATER->ordinal()] = 0x3;
	//label_try_end_3b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_54;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_32 .. :try_end_3b} :catch_54
label_goto_3b:
	try {
	//label_try_start_3b:
	cVar0[sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::UNAUTHORIZED->ordinal()] = 0x4;
	//label_try_end_44:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_52;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3b .. :try_end_44} :catch_52
label_goto_44:
	try {
	//label_try_start_44:
	cVar0[sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::UNUSED->ordinal()] = 0x7;
	//label_try_end_4d:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_50;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_44 .. :try_end_4d} :catch_50
label_goto_4d:
	sun::security::provider::certpath::OCSPResponse::_sun_security_provider_certpath_OCSPResponse_S_ResponseStatusSwitchesValues = cVar0;
	return cVar0;
label_catch_50:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_4d;
label_catch_52:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_44;
label_catch_54:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3b;
label_catch_56:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_58:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_5a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_5c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static constructor <clinit>()V
void sun::security::provider::certpath::OCSPResponse::static_cinit()
{
	
	bool cVar0;
	std::shared<std::vector<int[]>> cVar1;
	
	sun::security::provider::certpath::OCSPResponse::rsvalues = sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::values({const[class].FS-Param});
	sun::security::provider::certpath::OCSPResponse::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_36;
	cVar0 = sun::security::util::Debug::isOn(std::make_shared<java::lang::String>(std::make_shared<char[]>("ocsp")));
label_goto_1a:
	sun::security::provider::certpath::OCSPResponse::dump = cVar0;
	cVar1 = std::make_shared<std::vector<int[]>>(0xa);
	?;
	sun::security::provider::certpath::OCSPResponse::OCSP_BASIC_RESPONSE_OID = sun::security::util::ObjectIdentifier::newInternal(cVar1);
	sun::security::provider::certpath::OCSPResponse::MAX_CLOCK_SKEW = sun::security::provider::certpath::OCSPResponse::initializeClockSkew({const[class].FS-Param});
	sun::security::provider::certpath::OCSPResponse::values = java::security::cert::CRLReason::values({const[class].FS-Param});
	return;
	// 326    .line 135
label_cond_36:
	cVar0 = 0x0;
	goto label_goto_1a;
	// 332    .line 137
	// 333    :array_38
	// 334    .array-data 4
	// 335        0x1
	// 336        0x3
	// 337        0x6
	// 338        0x1
	// 339        0x5
	// 340        0x5
	// 341        0x7
	// 342        0x30
	// 343        0x1
	// 344        0x1
	// 345    .end array-data

}
// .method constructor <init>([B)V
sun::security::provider::certpath::OCSPResponse::OCSPResponse(std::shared_ptr<unsigned char[]> bytes)
{
	
	std::shared_ptr<sun::misc::HexDumpEncoder> hexEnc;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<sun::security::util::DerValue> der;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<sun::security::util::DerInputStream> derIn;
	int status;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::util::ArrayList> cVar3;
	std::shared_ptr<java::io::IOException> cVar6;
	auto tmp;
	std::shared_ptr<java::io::IOException> cVar7;
	auto responseType;
	std::shared_ptr<sun::security::util::DerInputStream> basicOCSPResponse;
	auto seqTmp;
	std::shared_ptr<java::io::IOException> cVar8;
	unsigned char responseData;
	std::shared_ptr<java::io::IOException> cVar12;
	std::shared_ptr<sun::security::util::DerInputStream> seqDerIn;
	std::shared_ptr<sun::security::util::DerValue> seq;
	std::shared_ptr<java::io::IOException> cVar13;
	int tag;
	std::shared_ptr<javax::security::auth::x500::X500Principal> cVar14;
	std::shared_ptr<java::lang::StringBuilder> cVar15;
	std::shared_ptr<java::lang::StringBuilder> cVar16;
	auto singleResponseDer;
	std::shared_ptr<java::util::HashMap> cVar17;
	std::shared_ptr<java::lang::StringBuilder> cVar18;
	int i;
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_SingleResponse> singleResponse;
	auto seq;
	auto responseExtDer;
	std::shared_ptr<sun::security::x509::Extension> ext;
	std::shared_ptr<java::lang::StringBuilder> cVar22;
	std::shared_ptr<java::io::IOException> cVar23;
	std::shared_ptr<java::lang::StringBuilder> cVar24;
	std::shared_ptr<sun::security::util::DerValue> seqCert;
	std::shared_ptr<java::io::IOException> cVar25;
	auto derCerts;
	std::shared_ptr<java::util::ArrayList> cVar26;
	std::shared_ptr<java::io::IOException> cVar28;
	std::shared_ptr<sun::security::x509::X509CertImpl> cert;
	std::shared_ptr<java::lang::StringBuilder> cVar27;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::ArrayList> cVar29;
	std::shared_ptr<sun::security::x509::KeyIdentifier> cVar19;
	std::shared_ptr<java::lang::StringBuilder> cVar20;
	std::shared_ptr<java::io::IOException> cVar21;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	std::shared_ptr<java::io::IOException> cVar10;
	std::shared_ptr<java::lang::StringBuilder> cVar11;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	//    .param p1, "bytes"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 352        value = {
	// 353            Ljava/io/IOException;
	// 354        }
	// 355    .end annotation
	// 359    invoke-direct/range {p0 .. p0}, Ljava/lang/Object;-><init>()V
	this->signerCert = 0x0;
	this->responderName = 0x0;
	this->responderKeyId = 0x0;
	if ( !(sun::security::provider::certpath::OCSPResponse::dump) )  
		goto label_cond_4a;
	hexEnc = std::make_shared<sun::misc::HexDumpEncoder>();
	//    .local v10, "hexEnc":Lsun/misc/HexDumpEncoder;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPResponse::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSPResponse bytes...\n\n")))->append(hexEnc->encode(bytes))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString());
	//    .end local v10    # "hexEnc":Lsun/misc/HexDumpEncoder;
label_cond_4a:
	der = std::make_shared<sun::security::util::DerValue>(bytes);
	//    .local v6, "der":Lsun/security/util/DerValue;
	if ( der->tag == 0x30 )
		goto label_cond_66;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad encoding in OCSP response: expected ASN.1 SEQUENCE tag.")));
	// throw
	throw cVar1;
	// 470    .line 203
label_cond_66:
	derIn = der->getData();
	//    .local v8, "derIn":Lsun/security/util/DerInputStream;
	status = derIn->getEnumerated();
	//    .local v23, "status":I
	if ( status < 0 ) 
		goto label_cond_ee;
	if ( status >= sun::security::provider::certpath::OCSPResponse::rsvalues->size() )
		goto label_cond_ee;
	this->responseStatus = sun::security::provider::certpath::OCSPResponse::rsvalues[status];
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_aa;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPResponse::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSP response status: ")))->append(this->responseStatus)->toString());
label_cond_aa:
	if ( this->responseStatus == sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::SUCCESSFUL )
		goto label_cond_10c;
	this->singleResponseMap = java::util::Collections::emptyMap({const[class].FS-Param});
	cVar3 = std::make_shared<java::util::ArrayList>();
	this->certs = cVar3;
	this->sigAlgId = 0x0;
	this->signature = 0x0;
	this->tbsResponseData = 0x0;
	this->responseNonce = 0x0;
	return;
	// 622    .line 211
label_cond_ee:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::io::IOException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown OCSPResponse status: ")))->append(status)->toString());
	// throw
	throw cVar4;
	// 652    .line 228
label_cond_10c:
	der = derIn->getDerValue();
	if ( der->isContextSpecific(0x0) )     
		goto label_cond_123;
	cVar6 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad encoding in responseBytes element of OCSP response: expected ASN.1 context specific tag 0.")));
	// throw
	throw cVar6;
	// 678    .line 233
label_cond_123:
	tmp = der->data->getDerValue();
	//    .local v25, "tmp":Lsun/security/util/DerValue;
	if ( tmp->tag == 0x30 )
		goto label_cond_142;
	cVar7 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad encoding in responseBytes element of OCSP response: expected ASN.1 SEQUENCE tag.")));
	// throw
	throw cVar7;
	// 713    .line 240
label_cond_142:
	derIn = tmp->data;
	responseType = derIn->getOID();
	//    .local v16, "responseType":Lsun/security/util/ObjectIdentifier;
	if ( !(responseType->equals(sun::security::provider::certpath::OCSPResponse::OCSP_BASIC_RESPONSE_OID)) )  
		goto label_cond_18b;
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_162;
	sun::security::provider::certpath::OCSPResponse::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSP response type: basic")));
label_cond_162:
	basicOCSPResponse = std::make_shared<sun::security::util::DerInputStream>(derIn->getOctetString());
	//    .local v3, "basicOCSPResponse":Lsun/security/util/DerInputStream;
	seqTmp = basicOCSPResponse->getSequence(0x2);
	//    .local v20, "seqTmp":[Lsun/security/util/DerValue;
	if ( seqTmp->size() >= 0x3 )
		goto label_cond_1ca;
	cVar8 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unexpected BasicOCSPResponse value")));
	// throw
	throw cVar8;
	// 797    .line 247
	// 798    .end local v3    # "basicOCSPResponse":Lsun/security/util/DerInputStream;
	// 799    .end local v20    # "seqTmp":[Lsun/security/util/DerValue;
label_cond_18b:
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_1ac;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPResponse::debug->println(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSP response type: ")))->append(responseType)->toString());
label_cond_1ac:
	cVar11 = std::make_shared<java::lang::StringBuilder>();
	cVar10 = std::make_shared<java::io::IOException>(cVar11->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unsupported OCSP response type: ")))->append(responseType)->toString());
	// throw
	throw cVar10;
	// 862    .line 263
	// 863    .restart local v3    # "basicOCSPResponse":Lsun/security/util/DerInputStream;
	// 864    .restart local v20    # "seqTmp":[Lsun/security/util/DerValue;
label_cond_1ca:
	responseData = seqTmp[0x0];
	//    .local v14, "responseData":Lsun/security/util/DerValue;
	this->tbsResponseData = seqTmp[0x0]->toByteArray();
	if ( responseData->tag == 0x30 )
		goto label_cond_1f1;
	cVar12 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad encoding in tbsResponseData element of OCSP response: expected ASN.1 SEQUENCE tag.")));
	// throw
	throw cVar12;
	// 908    .line 273
label_cond_1f1:
	seqDerIn = responseData->data;
	//    .local v19, "seqDerIn":Lsun/security/util/DerInputStream;
	seq = seqDerIn->getDerValue();
	//    .local v17, "seq":Lsun/security/util/DerValue;
	if ( !(seq->isContextSpecific(0x0)) )  
		goto label_cond_238;
	if ( !(seq->isConstructed()) )  
		goto label_cond_238;
	if ( !(seq->isContextSpecific()) )  
		goto label_cond_238;
	seq = seq->data->getDerValue();
	seq->getInteger();
	//    .local v26, "version":I
	if ( !(seq->data->available()) )  
		goto label_cond_234;
	cVar13 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad encoding in version  element of OCSP response: bad format")));
	// throw
	throw cVar13;
	// 986    .line 287
label_cond_234:
	seq = seqDerIn->getDerValue();
	//    .end local v26    # "version":I
label_cond_238:
	tag = (short)((unsigned char)(( seq->tag & 0x1f)));
	//    .local v24, "tag":S
	if ( tag != 0x1 )
		goto label_cond_31a;
	cVar14 = std::make_shared<javax::security::auth::x500::X500Principal>(seq->getData()->toByteArray());
	this->responderName = cVar14;
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_288;
	cVar15 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPResponse::debug->println(cVar15->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Responder\'s name: ")))->append(this->responderName)->toString());
label_cond_288:
label_goto_288:
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_2af;
	//    .local v13, "producedAtDate":Ljava/util/Date;
	cVar16 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPResponse::debug->println(cVar16->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSP response produced at: ")))->append(seqDerIn->getDerValue()->getGeneralizedTime())->toString());
	//    .end local v13    # "producedAtDate":Ljava/util/Date;
label_cond_2af:
	singleResponseDer = seqDerIn->getSequence(0x1);
	//    .local v22, "singleResponseDer":[Lsun/security/util/DerValue;
	cVar17 = std::make_shared<java::util::HashMap>(singleResponseDer->size());
	this->singleResponseMap = cVar17;
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_2eb;
	cVar18 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPResponse::debug->println(cVar18->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSP number of SingleResponses: ")))->append(singleResponseDer->size())->toString());
label_cond_2eb:
	i = 0x0;
	//    .local v11, "i":I
label_goto_2ec:
	if ( i >= singleResponseDer->size() )
		goto label_cond_36b;
	var324 = singleResponse(singleResponseDer[i], 0x0);
	//    .local v21, "singleResponse":Lsun/security/provider/certpath/OCSPResponse$SingleResponse;
	this->singleResponseMap->put(sun::security::provider::certpath::OCSPResponse_S_SingleResponse::-wrap0(singleResponse), singleResponse);
	i = ( i + 0x1);
	goto label_goto_2ec;
	// 1244    .line 298
	// 1245    .end local v11    # "i":I
	// 1246    .end local v21    # "singleResponse":Lsun/security/provider/certpath/OCSPResponse$SingleResponse;
	// 1247    .end local v22    # "singleResponseDer":[Lsun/security/util/DerValue;
label_cond_31a:
	if ( tag != 0x2 )
		goto label_cond_362;
	cVar19 = std::make_shared<sun::security::x509::KeyIdentifier>(seq->getData()->getOctetString());
	this->responderKeyId = cVar19;
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_288;
	cVar20 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPResponse::debug->println(cVar20->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Responder\'s key ID: ")))->append(sun::security::util::Debug::toString(this->responderKeyId->getIdentifier()))->toString());
	goto label_goto_288;
	// 1322    .line 305
label_cond_362:
	cVar21 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad encoding in responderID element of OCSP response: expected ASN.1 context specific tag 0 or 1")));
	// throw
	throw cVar21;
	// 1332    .line 330
	// 1333    .restart local v11    # "i":I
	// 1334    .restart local v22    # "singleResponseDer":[Lsun/security/util/DerValue;
label_cond_36b:
	//    .local v12, "nonce":[B
	if ( seqDerIn->available() <= 0 )
		goto label_cond_3f5;
	seq = seqDerIn->getDerValue();
	if ( !(seq->isContextSpecific(0x1)) )  
		goto label_cond_3f5;
	responseExtDer = seq->data->getSequence(0x3);
	//    .local v15, "responseExtDer":[Lsun/security/util/DerValue;
	i = 0x0;
	//    .end local v12    # "nonce":[B
label_goto_38f:
	if ( i >= responseExtDer->size() )
		goto label_cond_3f5;
	ext = std::make_shared<sun::security::x509::Extension>(responseExtDer[i]);
	//    .local v9, "ext":Lsun/security/x509/Extension;
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_3be;
	cVar22 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPResponse::debug->println(cVar22->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSP extension: ")))->append(ext)->toString());
label_cond_3be:
	if ( !(ext->getExtensionId()->equals(sun::security::provider::certpath::OCSP::NONCE_EXTENSION_OID)) )  
		goto label_cond_3d1;
	ext->getExtensionValue();
label_cond_3ce:
	i = ( i + 0x1);
	goto label_goto_38f;
	// 1458    .line 345
label_cond_3d1:
	if ( !(ext->isCritical()) )  
		goto label_cond_3ce;
	cVar24 = std::make_shared<java::lang::StringBuilder>();
	cVar23 = std::make_shared<java::io::IOException>(cVar24->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unsupported OCSP critical extension: ")))->append(ext->getExtensionId())->toString());
	// throw
	throw cVar23;
	// 1499    .line 353
	// 1500    .end local v9    # "ext":Lsun/security/x509/Extension;
	// 1501    .end local v15    # "responseExtDer":[Lsun/security/util/DerValue;
label_cond_3f5:
	this->responseNonce = 0x0;
	this->sigAlgId = sun::security::x509::AlgorithmId::parse(seqTmp[0x1]);
	this->signature = seqTmp[0x2]->getBitString();
	if ( seqTmp->size() <= 0x3 )
		goto label_cond_4b2;
	seqCert = seqTmp[0x3];
	//    .local v18, "seqCert":Lsun/security/util/DerValue;
	if ( seqCert->isContextSpecific(0x0) )     
		goto label_cond_43b;
	cVar25 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad encoding in certs element of OCSP response: expected ASN.1 context specific tag 0.")));
	// throw
	throw cVar25;
	// 1580    .line 369
label_cond_43b:
	derCerts = seqCert->getData()->getSequence(0x3);
	//    .local v7, "derCerts":[Lsun/security/util/DerValue;
	cVar26 = std::make_shared<java::util::ArrayList>(derCerts->size());
	this->certs = cVar26;
	i = 0x0;
label_goto_454:
	try {
	//label_try_start_454:
	if ( i >= derCerts->size() )
		goto label_cond_4bd;
	cert = std::make_shared<sun::security::x509::X509CertImpl>(derCerts[i]->toByteArray());
	//    .local v5, "cert":Lsun/security/x509/X509CertImpl;
	this->certs->add(cert);
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_4a1;
	cVar27 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPResponse::debug->println(cVar27->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSP response cert #")))->append(( i + 0x1))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(": ")))->append(cert->getSubjectX500Principal())->toString());
	//label_try_end_4a1:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4a4;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_454 .. :try_end_4a1} :catch_4a4
label_cond_4a1:
	i = ( i + 0x1);
	goto label_goto_454;
	// 1700    .line 382
	// 1701    .end local v5    # "cert":Lsun/security/x509/X509CertImpl;
label_catch_4a4:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v4, "ce":Ljava/security/cert/CertificateException;
	var510 = cVar28(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad encoding in X509 Certificate")), getCatchExcetionFromList);
	// throw
	throw cVar28;
	// 1719    .line 386
	// 1720    .end local v4    # "ce":Ljava/security/cert/CertificateException;
	// 1721    .end local v7    # "derCerts":[Lsun/security/util/DerValue;
	// 1722    .end local v18    # "seqCert":Lsun/security/util/DerValue;
label_cond_4b2:
	cVar29 = std::make_shared<java::util::ArrayList>();
	this->certs = cVar29;
label_cond_4bd:
	return;

}
// .method private static initializeClockSkew()I
int sun::security::provider::certpath::OCSPResponse::initializeClockSkew()
{
	
	std::shared_ptr<sun::security::action::GetIntegerAction> cVar0;
	std::shared_ptr<java::lang::Integer> tmp;
	
	cVar0 = std::make_shared<sun::security::action::GetIntegerAction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("com.sun.security.ocsp.clockSkew")));
	tmp = java::security::AccessController::doPrivileged(cVar0);
	tmp->checkCast("java::lang::Integer");
	//    .local v0, "tmp":Ljava/lang/Integer;
	if ( !(tmp) )  
		goto label_cond_16;
	if ( tmp->intValue() >= 0 )
		goto label_cond_1a;
label_cond_16:
	return 0xdbba0;
	// 1773    .line 172
label_cond_1a:
	return ( tmp->intValue() * 0x3e8);

}
// .method private verifySignature(Ljava/security/cert/X509Certificate;)Z
bool sun::security::provider::certpath::OCSPResponse::verifySignature(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	std::shared_ptr<java::security::Signature> respSignature;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1788        value = {
	// 1789            Ljava/security/cert/CertPathValidatorException;
	// 1790        }
	// 1791    .end annotation
	try {
	//label_try_start_0:
	respSignature = java::security::Signature::getInstance(this->sigAlgId->getName());
	//    .local v1, "respSignature":Ljava/security/Signature;
	respSignature->initVerify(cert->getPublicKey());
	respSignature->update(this->tbsResponseData);
	if ( !(respSignature->verify(this->signature)) )  
		goto label_cond_2c;
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_2a;
	sun::security::provider::certpath::OCSPResponse::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Verified signature of OCSP Response")));
label_cond_2a:
	return 0x1;
	// 1846    .line 651
label_cond_2c:
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_38;
	sun::security::provider::certpath::OCSPResponse::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Error verifying signature of OCSP Response")));
	//label_try_end_38:
	}
	catch (java::security::InvalidKeyException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3a;
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3a;
	}
	catch (java::security::SignatureException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3a;
	}
	//    .catch Ljava/security/InvalidKeyException; {:try_start_0 .. :try_end_38} :catch_3a
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_0 .. :try_end_38} :catch_3a
	//    .catch Ljava/security/SignatureException; {:try_start_0 .. :try_end_38} :catch_3a
label_cond_38:
	return 0x0;
	// 1871    .line 659
	// 1872    .end local v1    # "respSignature":Ljava/security/Signature;
label_catch_3a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/GeneralSecurityException;
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method getResponseStatus()Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;
std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> sun::security::provider::certpath::OCSPResponse::getResponseStatus()
{
	
	return this->responseStatus;

}
// .method getSignerCertificate()Ljava/security/cert/X509Certificate;
std::shared_ptr<java::security::cert::X509Certificate> sun::security::provider::certpath::OCSPResponse::getSignerCertificate()
{
	
	return this->signerCert;

}
// .method getSingleResponse(Lsun/security/provider/certpath/CertId;)Lsun/security/provider/certpath/OCSPResponse$SingleResponse;
std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_SingleResponse> sun::security::provider::certpath::OCSPResponse::getSingleResponse(std::shared_ptr<sun::security::provider::certpath::CertId> certId)
{
	
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_SingleResponse> cVar0;
	
	//    .param p1, "certId"    # Lsun/security/provider/certpath/CertId;
	cVar0 = this->singleResponseMap->get(certId);
	cVar0->checkCast("sun::security::provider::certpath::OCSPResponse_S_SingleResponse");
	return cVar0;

}
// .method verify(Ljava/util/List;Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;Ljava/util/Date;[B)V
void sun::security::provider::certpath::OCSPResponse::verify(std::shared_ptr<java::util::List<sun::security::provider::certpath::CertId>> certIds,std::shared_ptr<java::security::cert::X509Certificate> issuerCert,std::shared_ptr<java::security::cert::X509Certificate> responderCert,std::shared_ptr<java::util::Date> date,std::shared_ptr<unsigned char[]> nonce)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::util::Iterator> certId_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::CertId> certId;
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_SingleResponse> sr;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar8;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::Iterator> cert_S_iterator;
	std::shared_ptr<sun::security::x509::X509CertImpl> cert;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar7;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar15;
	auto now;
	std::shared_ptr<java::util::Date> nowPlusSkew;
	std::shared_ptr<java::util::Date> nowMinusSkew;
	std::shared_ptr<java::util::Iterator> sr_S_iterator;
	std::shared_ptr<java::lang::StringBuilder> cVar16;
	std::shared_ptr<java::lang::StringBuilder> cVar17;
	std::shared_ptr<java::lang::StringBuilder> cVar18;
	std::shared_ptr<java::util::Date> cVar19;
	std::shared_ptr<java::util::Date> cVar20;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar21;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar14;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar10;
	auto keyPurposes;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar9;
	std::shared_ptr<sun::security::provider::certpath::AlgorithmChecker> algChecker;
	std::shared_ptr<java::security::cert::TrustAnchor> cVar11;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar12;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar13;
	std::shared_ptr<java::lang::Object> certKeyId;
	std::shared_ptr<sun::security::x509::KeyIdentifier> certKeyId;
	
	//    .param p2, "issuerCert"    # Ljava/security/cert/X509Certificate;
	//    .param p3, "responderCert"    # Ljava/security/cert/X509Certificate;
	//    .param p4, "date"    # Ljava/util/Date;
	//    .param p5, "nonce"    # [B
	//    .annotation system Ldalvik/annotation/Signature;
	// 1931        value = {
	// 1932            "(",
	// 1933            "Ljava/util/List",
	// 1934            "<",
	// 1935            "Lsun/security/provider/certpath/CertId;",
	// 1936            ">;",
	// 1937            "Ljava/security/cert/X509Certificate;",
	// 1938            "Ljava/security/cert/X509Certificate;",
	// 1939            "Ljava/util/Date;",
	// 1940            "[B)V"
	// 1941        }
	// 1942    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1945        value = {
	// 1946            Ljava/security/cert/CertPathValidatorException;
	// 1947        }
	// 1948    .end annotation
	//    .local p1, "certIds":Ljava/util/List;, "Ljava/util/List<Lsun/security/provider/certpath/CertId;>;"
	// switch
	{
	auto item = ( sun::security::provider::certpath::OCSPResponse::-getsun-security-provider-certpath-OCSPResponse$ResponseStatusSwitchesValues({const[class].FS-Param})[this->responseStatus->ordinal()] );
	if (item == 1) goto label_pswitch_2f;
	if (item == 2) goto label_pswitch_52;
	if (item == 3) goto label_pswitch_2f;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSP response error: ")))->append(this->responseStatus)->toString());
	// throw
	throw cVar0;
	// 2000    .line 399
label_pswitch_2f:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSP response error: ")))->append(this->responseStatus)->toString(), 0x0, 0x0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::UNDETERMINED_REVOCATION_STATUS);
	// throw
	throw cVar2;
	// 2042    .line 410
label_pswitch_52:
	certId_S_iterator = certIds->iterator();
	//    .local v13, "certId$iterator":Ljava/util/Iterator;
label_cond_56:
label_goto_56:
	if ( !(certId_S_iterator->hasNext()) )  
		goto label_cond_c1;
	certId = certId_S_iterator->next();
	certId->checkCast("sun::security::provider::certpath::CertId");
	//    .local v12, "certId":Lsun/security/provider/certpath/CertId;
	sr = this->getSingleResponse(certId);
	//    .local v26, "sr":Lsun/security/provider/certpath/OCSPResponse$SingleResponse;
	if ( sr )     
		goto label_cond_90;
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_87;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPResponse::debug->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("No response found for CertId: ")))->append(certId)->toString());
label_cond_87:
	cVar5 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSP response does not include a response for a certificate supplied in the OCSP request")));
	// throw
	throw cVar5;
	// 2115    .line 420
label_cond_90:
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_56;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPResponse::debug->println(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Status of certificate (with serial number ")))->append(certId->getSerialNumber())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") is: ")))->append(sr->getCertStatus())->toString());
	goto label_goto_56;
	// 2170    .line 427
	// 2171    .end local v12    # "certId":Lsun/security/provider/certpath/CertId;
	// 2172    .end local v26    # "sr":Lsun/security/provider/certpath/OCSPResponse$SingleResponse;
label_cond_c1:
	if ( this->signerCert )     
		goto label_cond_10b;
	try {
	//label_try_start_c7:
	this->certs->add(sun::security::x509::X509CertImpl::toImpl(issuerCert));
	if ( !(responderCert) )  
		goto label_cond_df;
	this->certs->add(sun::security::x509::X509CertImpl::toImpl(responderCert));
	//label_try_end_df:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_153;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_c7 .. :try_end_df} :catch_153
label_cond_df:
	if ( !(this->responderName) )  
		goto label_cond_15d;
	cert_S_iterator = this->certs->iterator();
	//    .local v11, "cert$iterator":Ljava/util/Iterator;
label_cond_ed:
	if ( !(cert_S_iterator->hasNext()) )  
		goto label_cond_10b;
	cert = cert_S_iterator->next();
	cert->checkCast("sun::security::x509::X509CertImpl");
	//    .local v10, "cert":Lsun/security/x509/X509CertImpl;
	if ( !(cert->getSubjectX500Principal()->equals(this->responderName)) )  
		goto label_cond_ed;
	this->signerCert = cert;
	//    .end local v10    # "cert":Lsun/security/x509/X509CertImpl;
	//    .end local v11    # "cert$iterator":Ljava/util/Iterator;
label_cond_10b:
label_goto_10b:
	if ( !(this->signerCert) )  
		goto label_cond_129;
	if ( !(this->signerCert->equals(issuerCert)) )  
		goto label_cond_1a6;
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_129;
	sun::security::provider::certpath::OCSPResponse::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSP response is signed by the target\'s Issuing CA")));
label_cond_129:
label_goto_129:
	if ( !(this->signerCert) )  
		goto label_cond_27b;
	sun::security::provider::certpath::AlgorithmChecker::check(this->signerCert->getPublicKey(), this->sigAlgId);
	if ( this->verifySignature(this->signerCert) )     
		goto label_cond_284;
	cVar7 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Error verifying OCSP Response\'s signature")));
	// throw
	throw cVar7;
	// 2344    .line 435
label_catch_153:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v9, "ce":Ljava/security/cert/CertificateException;
	cVar8 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid issuer or trusted responder certificate")), getCatchExcetionFromList);
	// throw
	throw cVar8;
	// 2360    .line 447
	// 2361    .end local v9    # "ce":Ljava/security/cert/CertificateException;
label_cond_15d:
	if ( !(this->responderKeyId) )  
		goto label_cond_10b;
	cert_S_iterator = this->certs->iterator();
	//    .restart local v11    # "cert$iterator":Ljava/util/Iterator;
label_cond_16b:
	if ( !(cert_S_iterator->hasNext()) )  
		goto label_cond_10b;
	cert = cert_S_iterator->next();
	cert->checkCast("sun::security::x509::X509CertImpl");
	//    .restart local v10    # "cert":Lsun/security/x509/X509CertImpl;
	certKeyId = cert->getSubjectKeyId();
	//    .local v14, "certKeyId":Lsun/security/x509/KeyIdentifier;
	if ( !(certKeyId) )  
		goto label_cond_18c;
	if ( !(this->responderKeyId->equals(certKeyId)) )  
		goto label_cond_18c;
	this->signerCert = cert;
	goto label_goto_10b;
	// 2419    .line 463
label_cond_18c:
	try {
	//label_try_start_18c:
	certKeyId = std::make_shared<sun::security::x509::KeyIdentifier>(cert->getPublicKey());
	//label_try_end_195:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_374;
	}
	//    .catch Ljava/io/IOException; {:try_start_18c .. :try_end_195} :catch_374
	//    .end local v14    # "certKeyId":Lsun/security/x509/KeyIdentifier;
	//    .local v15, "certKeyId":Lsun/security/x509/KeyIdentifier;
	//    .end local v15    # "certKeyId":Lsun/security/x509/KeyIdentifier;
	//    .restart local v14    # "certKeyId":Lsun/security/x509/KeyIdentifier;
label_goto_196:
	if ( !(this->responderKeyId->equals(certKeyId)) )  
		goto label_cond_16b;
	this->signerCert = cert;
	goto label_goto_10b;
	// 2457    .line 487
	// 2458    .end local v10    # "cert":Lsun/security/x509/X509CertImpl;
	// 2459    .end local v11    # "cert$iterator":Ljava/util/Iterator;
	// 2460    .end local v14    # "certKeyId":Lsun/security/x509/KeyIdentifier;
label_cond_1a6:
	if ( !(this->signerCert->equals(responderCert)) )  
		goto label_cond_1c0;
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_129;
	sun::security::provider::certpath::OCSPResponse::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSP response is signed by a Trusted Responder")));
	goto label_goto_129;
	// 2488    .line 495
label_cond_1c0:
	if ( !(this->signerCert->getIssuerX500Principal()->equals(issuerCert->getSubjectX500Principal())) )  
		goto label_cond_272;
	try {
	//label_try_start_1d2:
	keyPurposes = this->signerCert->getExtendedKeyUsage();
	//    .local v20, "keyPurposes":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	if ( !(keyPurposes) )  
		goto label_cond_1e9;
	if ( !(( keyPurposes->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("1.3.6.1.5.5.7.3.9"))) ^ 0x1)) )  
		goto label_cond_1fe;
label_cond_1e9:
	cVar9 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Responder\'s certificate not valid for signing OCSP responses")));
	// throw
	throw cVar9;
	// 2549    :try_end_1f2
	// 2550    .catch Ljava/security/cert/CertificateParsingException; {:try_start_1d2 .. :try_end_1f2} :catch_1f2
	// 2552    .line 507
	// 2553    .end local v20    # "keyPurposes":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
label_catch_1f2:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v16, "cpe":Ljava/security/cert/CertificateParsingException;
	tryCatchExcetionList.pop_back();
	cVar10 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Responder\'s certificate not valid for signing OCSP responses")), getCatchExcetionFromList);
	// throw
	throw cVar10;
	// 2571    .line 516
	// 2572    .end local v16    # "cpe":Ljava/security/cert/CertificateParsingException;
	// 2573    .restart local v20    # "keyPurposes":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
label_cond_1fe:
	cVar11 = std::make_shared<java::security::cert::TrustAnchor>(issuerCert, 0x0);
	algChecker = std::make_shared<sun::security::provider::certpath::AlgorithmChecker>(cVar11);
	//    .local v8, "algChecker":Lsun/security/provider/certpath/AlgorithmChecker;
	algChecker->init(0x0);
	algChecker->check(this->signerCert, java::util::Collections::emptySet({const[class].FS-Param}));
	if ( date )     
		goto label_cond_25c;
	try {
	//label_try_start_21c:
	this->signerCert->checkValidity();
	//label_try_end_223:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_266;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_21c .. :try_end_223} :catch_266
label_goto_223:
	//    .local v21, "noCheck":Lsun/security/x509/Extension;
	if ( !(this->signerCert->getExtension(sun::security::x509::PKIXExtensions::OCSPNoCheck_Id)) )  
		goto label_cond_23b;
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_23b;
	sun::security::provider::certpath::OCSPResponse::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Responder\'s certificate includes the extension id-pkix-ocsp-nocheck.")));
label_cond_23b:
	try {
	//label_try_start_23b:
	this->signerCert->verify(issuerCert->getPublicKey());
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_129;
	sun::security::provider::certpath::OCSPResponse::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSP response is signed by an Authorized Responder")));
	//label_try_end_252:
	}
	catch (java::security::GeneralSecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_254;
	}
	//    .catch Ljava/security/GeneralSecurityException; {:try_start_23b .. :try_end_252} :catch_254
	goto label_goto_129;
	// 2676    .line 562
label_catch_254:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v18, "e":Ljava/security/GeneralSecurityException;
	this->signerCert = 0x0;
	goto label_goto_129;
	// 2690    .line 526
	// 2691    .end local v18    # "e":Ljava/security/GeneralSecurityException;
	// 2692    .end local v21    # "noCheck":Lsun/security/x509/Extension;
label_cond_25c:
	try {
	//label_try_start_25c:
	this->signerCert->checkValidity(date);
	//label_try_end_265:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_266;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_25c .. :try_end_265} :catch_266
	goto label_goto_223;
	// 2707    .line 528
label_catch_266:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v19, "e":Ljava/security/cert/CertificateException;
	tryCatchExcetionList.pop_back();
	cVar12 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Responder\'s certificate not within the validity period")), getCatchExcetionFromList);
	// throw
	throw cVar12;
	// 2725    .line 566
	// 2726    .end local v8    # "algChecker":Lsun/security/provider/certpath/AlgorithmChecker;
	// 2727    .end local v19    # "e":Ljava/security/cert/CertificateException;
	// 2728    .end local v20    # "keyPurposes":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
label_cond_272:
	cVar13 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Responder\'s certificate is not authorized to sign OCSP responses")));
	// throw
	throw cVar13;
	// 2740    .line 585
label_cond_27b:
	cVar14 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to verify OCSP Response\'s signature")));
	// throw
	throw cVar14;
	// 2752    .line 589
label_cond_284:
	if ( !(nonce) )  
		goto label_cond_2a3;
	if ( !(this->responseNonce) )  
		goto label_cond_2a3;
	if ( !(( java::util::Arrays::equals(nonce, this->responseNonce) ^ 0x1)) )  
		goto label_cond_2a3;
	cVar15 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Nonces don\'t match")));
	// throw
	throw cVar15;
	// 2786    .line 597
label_cond_2a3:
	if ( date )     
		goto label_cond_368;
	now = java::lang::System::currentTimeMillis({const[class].FS-Param});
	//    .local v22, "now":J
label_goto_2a9:
	var278 = nowPlusSkew(((long long)(sun::security::provider::certpath::OCSPResponse::MAX_CLOCK_SKEW) + now));
	//    .local v25, "nowPlusSkew":Ljava/util/Date;
	var284 = nowMinusSkew((now - (long long)(sun::security::provider::certpath::OCSPResponse::MAX_CLOCK_SKEW)));
	//    .local v24, "nowMinusSkew":Ljava/util/Date;
	sr_S_iterator = this->singleResponseMap->values()->iterator();
	//    .local v27, "sr$iterator":Ljava/util/Iterator;
label_cond_2cd:
	if ( !(sr_S_iterator->hasNext()) )  
		goto label_cond_373;
	sr = sr_S_iterator->next();
	sr->checkCast("sun::security::provider::certpath::OCSPResponse_S_SingleResponse");
	//    .restart local v26    # "sr":Lsun/security/provider/certpath/OCSPResponse$SingleResponse;
	if ( !(sun::security::provider::certpath::OCSPResponse::debug) )  
		goto label_cond_341;
	//    .local v28, "until":Ljava/lang/String;
	if ( !(sun::security::provider::certpath::OCSPResponse_S_SingleResponse::-get0(sr)) )  
		goto label_cond_2fe;
	cVar16 = std::make_shared<java::lang::StringBuilder>();
label_cond_2fe:
	cVar17 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::OCSPResponse::debug->println(cVar17->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSP response validity interval is from ")))->append(sun::security::provider::certpath::OCSPResponse_S_SingleResponse::-get1(sr))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("")))->toString());
	cVar18 = std::make_shared<java::lang::StringBuilder>();
	cVar19 = std::make_shared<java::util::Date>(now);
	sun::security::provider::certpath::OCSPResponse::debug->println(cVar18->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Checking validity of OCSP response on: ")))->append(cVar19)->toString());
	//    .end local v28    # "until":Ljava/lang/String;
label_cond_341:
	if ( nowPlusSkew->before(sun::security::provider::certpath::OCSPResponse_S_SingleResponse::-get1(sr)) )     
		goto label_cond_35f;
	if ( !(sun::security::provider::certpath::OCSPResponse_S_SingleResponse::-get0(sr)) )  
		goto label_cond_36e;
	cVar20 = sun::security::provider::certpath::OCSPResponse_S_SingleResponse::-get0(sr);
label_goto_357:
	if ( !(nowMinusSkew->after(cVar20)) )  
		goto label_cond_2cd;
label_cond_35f:
	cVar21 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Response is unreliable: its validity interval is out-of-date")));
	// throw
	throw cVar21;
	// 3007    .line 597
	// 3008    .end local v22    # "now":J
	// 3009    .end local v24    # "nowMinusSkew":Ljava/util/Date;
	// 3010    .end local v25    # "nowPlusSkew":Ljava/util/Date;
	// 3011    .end local v26    # "sr":Lsun/security/provider/certpath/OCSPResponse$SingleResponse;
	// 3012    .end local v27    # "sr$iterator":Ljava/util/Iterator;
label_cond_368:
	now = date->getTime();
	//    .restart local v22    # "now":J
	goto label_goto_2a9;
	// 3021    .line 617
	// 3022    .restart local v24    # "nowMinusSkew":Ljava/util/Date;
	// 3023    .restart local v25    # "nowPlusSkew":Ljava/util/Date;
	// 3024    .restart local v26    # "sr":Lsun/security/provider/certpath/OCSPResponse$SingleResponse;
	// 3025    .restart local v27    # "sr$iterator":Ljava/util/Iterator;
label_cond_36e:
	cVar20 = sun::security::provider::certpath::OCSPResponse_S_SingleResponse::-get1(sr);
	goto label_goto_357;
	// 3033    .line 624
	// 3034    .end local v26    # "sr":Lsun/security/provider/certpath/OCSPResponse$SingleResponse;
label_cond_373:
	return;
	// 3038    .line 464
	// 3039    .end local v22    # "now":J
	// 3040    .end local v24    # "nowMinusSkew":Ljava/util/Date;
	// 3041    .end local v25    # "nowPlusSkew":Ljava/util/Date;
	// 3042    .end local v27    # "sr$iterator":Ljava/util/Iterator;
	// 3043    .restart local v10    # "cert":Lsun/security/x509/X509CertImpl;
	// 3044    .restart local v11    # "cert$iterator":Ljava/util/Iterator;
	// 3045    .restart local v14    # "certKeyId":Lsun/security/x509/KeyIdentifier;
label_catch_374:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v17, "e":Ljava/io/IOException;
	goto label_goto_196;
	// 3052    .line 394
	// 3053    nop
	// 3055    :pswitch_data_378
	// 3056    .packed-switch 0x1
	// 3057        :pswitch_2f
	// 3058        :pswitch_52
	// 3059        :pswitch_2f
	// 3060    .end packed-switch

}


