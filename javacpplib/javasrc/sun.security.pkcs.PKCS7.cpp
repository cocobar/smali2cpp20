// CPP L:\smali2cpp20\x64\Release\out\sun\security\pkcs\PKCS7.smali
#include "java2ctype.h"
#include "java.io.ByteArrayInputStream.h"
#include "java.io.DataInputStream.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.math.BigInteger.h"
#include "java.security.Principal.h"
#include "java.security.cert.CRL.h"
#include "java.security.cert.CRLException.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.CertificateFactory.h"
#include "java.security.cert.X509CRL.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Arrays.h"
#include "java.util.HashSet.h"
#include "java.util.Vector.h"
#include "sun.security.pkcs.ContentInfo.h"
#include "sun.security.pkcs.PKCS7_S_VerbatimX509Certificate.h"
#include "sun.security.pkcs.PKCS7.h"
#include "sun.security.pkcs.ParsingException.h"
#include "sun.security.pkcs.SignerInfo.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerEncoder.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.X500Name.h"
#include "sun.security.x509.X509CRLImpl.h"
#include "sun.security.x509.X509CertImpl.h"
#include "sun.security.x509.X509CertInfo.h"

// .method public constructor <init>(Ljava/io/InputStream;)V
sun::security::pkcs::PKCS7::PKCS7(std::shared_ptr<java::io::InputStream> in)
{
	
	std::shared_ptr<java::math::BigInteger> cVar0;
	std::shared_ptr<java::io::DataInputStream> dis;
	std::shared<std::vector<unsigned char[]>> data;
	std::shared_ptr<sun::security::util::DerInputStream> cVar1;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 040        value = {
	// 041            Lsun/security/pkcs/ParsingException;,
	// 042            Ljava/io/IOException;
	// 043        }
	// 044    .end annotation
	cVar0 = 0x0;
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->version = cVar0;
	this->digestAlgorithmIds = cVar0;
	this->contentInfo = cVar0;
	this->certificates = cVar0;
	this->crls = cVar0;
	this->signerInfos = cVar0;
	this->oldStyle = 0x0;
	dis = std::make_shared<java::io::DataInputStream>(in);
	//    .local v1, "dis":Ljava/io/DataInputStream;
	data = std::make_shared<std::vector<unsigned char[]>>(dis->available());
	//    .local v0, "data":[B
	dis->readFully(data);
	cVar1 = std::make_shared<sun::security::util::DerInputStream>(data);
	this->parse(cVar1);
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::pkcs::PKCS7::PKCS7(std::shared_ptr<sun::security::util::DerInputStream> derin)
{
	
	std::shared_ptr<java::math::BigInteger> cVar0;
	
	//    .param p1, "derin"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 107        value = {
	// 108            Lsun/security/pkcs/ParsingException;
	// 109        }
	// 110    .end annotation
	cVar0 = 0x0;
	// 116    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->version = cVar0;
	this->digestAlgorithmIds = cVar0;
	this->contentInfo = cVar0;
	this->certificates = cVar0;
	this->crls = cVar0;
	this->signerInfos = cVar0;
	this->oldStyle = 0x0;
	this->parse(derin);
	return;

}
// .method public constructor <init>([B)V
sun::security::pkcs::PKCS7::PKCS7(std::shared_ptr<unsigned char[]> bytes)
{
	
	std::shared_ptr<java::math::BigInteger> cVar0;
	std::shared_ptr<sun::security::pkcs::ParsingException> pe;
	std::shared_ptr<sun::security::util::DerInputStream> derin;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "bytes"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 152        value = {
	// 153            Lsun/security/pkcs/ParsingException;
	// 154        }
	// 155    .end annotation
	cVar0 = 0x0;
	// 161    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->version = cVar0;
	this->digestAlgorithmIds = cVar0;
	this->contentInfo = cVar0;
	this->certificates = cVar0;
	this->crls = cVar0;
	this->signerInfos = cVar0;
	this->oldStyle = 0x0;
	try {
	//label_try_start_13:
	derin = std::make_shared<sun::security::util::DerInputStream>(bytes);
	//    .local v0, "derin":Lsun/security/util/DerInputStream;
	this->parse(derin);
	//label_try_end_1b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1c;
	}
	//    .catch Ljava/io/IOException; {:try_start_13 .. :try_end_1b} :catch_1c
	return;
	// 201    .line 149
	// 202    .end local v0    # "derin":Lsun/security/util/DerInputStream;
label_catch_1c:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "ioe1":Ljava/io/IOException;
	pe = std::make_shared<sun::security::pkcs::ParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to parse the encoded bytes")));
	//    .local v2, "pe":Lsun/security/pkcs/ParsingException;
	pe->initCause(getCatchExcetionFromList);
	// throw
	throw pe;

}
// .method public constructor <init>([Lsun/security/x509/AlgorithmId;Lsun/security/pkcs/ContentInfo;[Ljava/security/cert/X509Certificate;[Ljava/security/cert/X509CRL;[Lsun/security/pkcs/SignerInfo;)V
sun::security::pkcs::PKCS7::PKCS7(std::shared_ptr<std::vector<sun::security::x509::AlgorithmId>> digestAlgorithmIds,std::shared_ptr<sun::security::pkcs::ContentInfo> contentInfo,std::shared_ptr<std::vector<java::security::cert::X509Certificate>> certificates,std::shared_ptr<std::vector<java::security::cert::X509CRL>> crls,std::shared_ptr<std::vector<sun::security::pkcs::SignerInfo>> signerInfos)
{
	
	std::shared_ptr<java::math::BigInteger> cVar0;
	
	//    .param p1, "digestAlgorithmIds"    # [Lsun/security/x509/AlgorithmId;
	//    .param p2, "contentInfo"    # Lsun/security/pkcs/ContentInfo;
	//    .param p3, "certificates"    # [Ljava/security/cert/X509Certificate;
	//    .param p4, "crls"    # [Ljava/security/cert/X509CRL;
	//    .param p5, "signerInfos"    # [Lsun/security/pkcs/SignerInfo;
	cVar0 = 0x0;
	// 236    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->version = cVar0;
	this->digestAlgorithmIds = cVar0;
	this->contentInfo = cVar0;
	this->certificates = cVar0;
	this->crls = cVar0;
	this->signerInfos = cVar0;
	this->oldStyle = 0x0;
	this->version = java::math::BigInteger::ONE;
	this->digestAlgorithmIds = digestAlgorithmIds;
	this->contentInfo = contentInfo;
	this->certificates = certificates;
	this->crls = crls;
	this->signerInfos = signerInfos;
	return;

}
// .method public constructor <init>([Lsun/security/x509/AlgorithmId;Lsun/security/pkcs/ContentInfo;[Ljava/security/cert/X509Certificate;[Lsun/security/pkcs/SignerInfo;)V
sun::security::pkcs::PKCS7::PKCS7(std::shared_ptr<std::vector<sun::security::x509::AlgorithmId>> digestAlgorithmIds,std::shared_ptr<sun::security::pkcs::ContentInfo> contentInfo,std::shared_ptr<std::vector<java::security::cert::X509Certificate>> certificates,std::shared_ptr<std::vector<sun::security::pkcs::SignerInfo>> signerInfos)
{
	
	//    .param p1, "digestAlgorithmIds"    # [Lsun/security/x509/AlgorithmId;
	//    .param p2, "contentInfo"    # Lsun/security/pkcs/ContentInfo;
	//    .param p3, "certificates"    # [Ljava/security/cert/X509Certificate;
	//    .param p4, "signerInfos"    # [Lsun/security/pkcs/SignerInfo;
	sun::security::pkcs::PKCS7::(digestAlgorithmIds, contentInfo, certificates, 0x0, signerInfos);
	return;

}
// .method private parse(Lsun/security/util/DerInputStream;)V
void sun::security::pkcs::PKCS7::parse(std::shared_ptr<sun::security::util::DerInputStream> derin)
{
	
	std::shared_ptr<java::io::IOException> ioe1;
	std::shared_ptr<sun::security::pkcs::ParsingException> pe;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "derin"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 316        value = {
	// 317            Lsun/security/pkcs/ParsingException;
	// 318        }
	// 319    .end annotation
	try {
	//label_try_start_0:
	derin->mark(derin->available());
	this->parse(derin, 0x0);
	//label_try_end_b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_c;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_b} :catch_c
label_goto_b:
	return;
	// 341    .line 167
label_catch_c:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ioe":Ljava/io/IOException;
	try {
	//label_try_start_d:
	derin->reset();
	this->parse(derin, 0x1);
	this->oldStyle = 0x1;
	//label_try_end_17:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_18;
	}
	//    .catch Ljava/io/IOException; {:try_start_d .. :try_end_17} :catch_18
	goto label_goto_b;
	// 364    .line 173
label_catch_18:
	// move-exception
	ioe1 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ioe1":Ljava/io/IOException;
	pe = std::make_shared<sun::security::pkcs::ParsingException>(ioe1->getMessage());
	//    .local v2, "pe":Lsun/security/pkcs/ParsingException;
	pe->initCause(getCatchExcetionFromList);
	pe->addSuppressed(ioe1);
	// throw
	throw pe;

}
// .method private parse(Lsun/security/util/DerInputStream;Z)V
void sun::security::pkcs::PKCS7::parse(std::shared_ptr<sun::security::util::DerInputStream> derin,bool oldStyle)
{
	
	std::shared_ptr<sun::security::pkcs::ContentInfo> cVar0;
	std::shared_ptr<sun::security::util::DerValue> content;
	std::shared_ptr<sun::security::pkcs::ParsingException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "derin"    # Lsun/security/util/DerInputStream;
	//    .param p2, "oldStyle"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 396        value = {
	// 397            Ljava/io/IOException;
	// 398        }
	// 399    .end annotation
	cVar0 = std::make_shared<sun::security::pkcs::ContentInfo>(derin, oldStyle);
	this->contentInfo = cVar0;
	this->contentType = this->contentInfo->contentType;
	content = this->contentInfo->getContent();
	//    .local v0, "content":Lsun/security/util/DerValue;
	if ( !(this->contentType->equals(sun::security::pkcs::ContentInfo::SIGNED_DATA_OID)) )  
		goto label_cond_21;
	this->parseSignedData(content);
label_goto_20:
	return;
	// 442    .line 199
label_cond_21:
	if ( !(this->contentType->equals(sun::security::pkcs::ContentInfo::OLD_SIGNED_DATA_OID)) )  
		goto label_cond_2f;
	this->parseOldSignedData(content);
	goto label_goto_20;
	// 459    .line 202
label_cond_2f:
	if ( !(this->contentType->equals(sun::security::pkcs::ContentInfo::NETSCAPE_CERT_SEQUENCE_OID)) )  
		goto label_cond_3d;
	this->parseNetscapeCertChain(content);
	goto label_goto_20;
	// 478    .line 206
label_cond_3d:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<sun::security::pkcs::ParsingException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("content type ")))->append(this->contentType)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" not supported.")))->toString());
	// throw
	throw cVar1;

}
// .method private parseNetscapeCertChain(Lsun/security/util/DerValue;)V
void sun::security::pkcs::PKCS7::parseNetscapeCertChain(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	std::shared_ptr<sun::security::util::DerInputStream> dis;
	auto contents;
	std::shared_ptr<java::security::cert::CertificateFactory> certfac;
	int i;
	std::shared_ptr<java::io::ByteArrayInputStream> bais;
	std::shared_ptr<java::security::cert::CertificateException> ce;
	std::shared_ptr<java::lang::Object> catchall;
	std::shared_ptr<sun::security::pkcs::ParsingException> pe;
	std::shared_ptr<java::io::IOException> ioe;
	std::shared_ptr<unsigned char[]> original;
	std::shared_ptr<sun::security::x509::X509CertImpl> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::pkcs::PKCS7_S_VerbatimX509Certificate> cVar1;
	std::shared_ptr<java::security::cert::X509Certificate> cVar2;
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 519        value = {
	// 520            Lsun/security/pkcs/ParsingException;,
	// 521            Ljava/io/IOException;
	// 522        }
	// 523    .end annotation
	dis = std::make_shared<sun::security::util::DerInputStream>(val->toByteArray());
	//    .local v5, "dis":Lsun/security/util/DerInputStream;
	contents = dis->getSequence(0x2, 0x1);
	//    .local v4, "contents":[Lsun/security/util/DerValue;
	this->certificates = std::make_shared<std::vector<std::vector<java::security::cert::X509Certificate>>>(contents->size());
	certfac = 0x0;
	//    .local v3, "certfac":Ljava/security/cert/CertificateFactory;
	try {
	//label_try_start_16:
	//label_try_end_1c:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_83;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_16 .. :try_end_1c} :catch_83
	java::security::cert::CertificateFactory::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509")));
	//    .end local v3    # "certfac":Ljava/security/cert/CertificateFactory;
label_goto_1d:
	i = 0x0;
	//    .local v6, "i":I
label_goto_1e:
	if ( i >= contents->size() )
		goto label_cond_79;
	bais = 0x0;
	//    .local v0, "bais":Ljava/io/ByteArrayInputStream;
	try {
	//label_try_start_22:
	original = contents[i]->getOriginalEncodedForm();
	//    .local v8, "original":[B
	if ( certfac )     
		goto label_cond_3d;
	cVar0 = std::make_shared<sun::security::x509::X509CertImpl>(contents[i], original);
	this->certificates[i] = cVar0;
	//label_try_end_35:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6b;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_56;
	}
	catch (...){
		goto label_catchall_64;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_22 .. :try_end_35} :catch_6b
	//    .catch Ljava/io/IOException; {:try_start_22 .. :try_end_35} :catch_56
	//    .catchall {:try_start_22 .. :try_end_35} :catchall_64
label_goto_35:
	if ( !(0x0) )  
		goto label_cond_3a;
	bais->close();
label_cond_3a:
	i = ( i + 0x1);
	goto label_goto_1e;
	// 624    .line 261
label_cond_3d:
	try {
	//label_try_start_3d:
	bais = std::make_shared<java::io::ByteArrayInputStream>(original);
	//label_try_end_42:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6b;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_56;
	}
	catch (...){
		goto label_catchall_64;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_3d .. :try_end_42} :catch_6b
	//    .catch Ljava/io/IOException; {:try_start_3d .. :try_end_42} :catch_56
	//    .catchall {:try_start_3d .. :try_end_42} :catchall_64
	//    .end local v0    # "bais":Ljava/io/ByteArrayInputStream;
	//    .local v1, "bais":Ljava/io/ByteArrayInputStream;
	try {
	//label_try_start_42:
	cVar2 = certfac->generateCertificate(bais);
	cVar2->checkCast("java::security::cert::X509Certificate");
	cVar1 = std::make_shared<sun::security::pkcs::PKCS7_S_VerbatimX509Certificate>(cVar2, original);
	this->certificates[i] = cVar1;
	bais->close();
	//label_try_end_54:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7d;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_80;
	}
	catch (...){
		goto label_catchall_7a;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_42 .. :try_end_54} :catch_7d
	//    .catch Ljava/io/IOException; {:try_start_42 .. :try_end_54} :catch_80
	//    .catchall {:try_start_42 .. :try_end_54} :catchall_7a
	0x0;
	//    .restart local v0    # "bais":Ljava/io/ByteArrayInputStream;
	goto label_goto_35;
	// 668    .line 272
	// 669    .end local v1    # "bais":Ljava/io/ByteArrayInputStream;
	// 670    .end local v8    # "original":[B
label_catch_56:
	// move-exception
	ioe = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v0    # "bais":Ljava/io/ByteArrayInputStream;
	//    .local v7, "ioe":Ljava/io/IOException;
label_goto_57:
	try {
	//label_try_start_57:
	pe = std::make_shared<sun::security::pkcs::ParsingException>(ioe->getMessage());
	//    .local v9, "pe":Lsun/security/pkcs/ParsingException;
	pe->initCause(ioe);
	// throw
	throw pe;
	// 693    :try_end_64
	// 694    .catchall {:try_start_57 .. :try_end_64} :catchall_64
	// 696    .line 276
	// 697    .end local v7    # "ioe":Ljava/io/IOException;
	// 698    .end local v9    # "pe":Lsun/security/pkcs/ParsingException;
label_catchall_64:
	// move-exception
	catchall = tryCatchExcetionList.back();
label_goto_65:
	if ( !(bais) )  
		goto label_cond_6a;
	bais->close();
label_cond_6a:
	// throw
	throw;
	// 713    .line 268
	// 714    .restart local v0    # "bais":Ljava/io/ByteArrayInputStream;
label_catch_6b:
	// move-exception
	ce = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v0    # "bais":Ljava/io/ByteArrayInputStream;
	//    .local v2, "ce":Ljava/security/cert/CertificateException;
label_goto_6c:
	try {
	//label_try_start_6c:
	pe = std::make_shared<sun::security::pkcs::ParsingException>(ce->getMessage());
	//    .restart local v9    # "pe":Lsun/security/pkcs/ParsingException;
	pe->initCause(ce);
	// throw
	throw pe;
	// 737    :try_end_79
	// 738    .catchall {:try_start_6c .. :try_end_79} :catchall_64
	// 740    .line 281
	// 741    .end local v2    # "ce":Ljava/security/cert/CertificateException;
	// 742    .end local v9    # "pe":Lsun/security/pkcs/ParsingException;
label_cond_79:
	return;
	// 746    .line 276
	// 747    .restart local v1    # "bais":Ljava/io/ByteArrayInputStream;
	// 748    .restart local v8    # "original":[B
label_catchall_7a:
	// move-exception
	catchall = tryCatchExcetionList.back();
	//    .end local v1    # "bais":Ljava/io/ByteArrayInputStream;
	//    .local v0, "bais":Ljava/io/ByteArrayInputStream;
	goto label_goto_65;
	// 758    .line 268
	// 759    .end local v0    # "bais":Ljava/io/ByteArrayInputStream;
	// 760    .restart local v1    # "bais":Ljava/io/ByteArrayInputStream;
label_catch_7d:
	// move-exception
	ce = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v2    # "ce":Ljava/security/cert/CertificateException;
	bais;
	//    .end local v1    # "bais":Ljava/io/ByteArrayInputStream;
	//    .restart local v0    # "bais":Ljava/io/ByteArrayInputStream;
	goto label_goto_6c;
	// 771    .line 272
	// 772    .end local v0    # "bais":Ljava/io/ByteArrayInputStream;
	// 773    .end local v2    # "ce":Ljava/security/cert/CertificateException;
	// 774    .restart local v1    # "bais":Ljava/io/ByteArrayInputStream;
label_catch_80:
	// move-exception
	ioe = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v7    # "ioe":Ljava/io/IOException;
	bais;
	//    .end local v1    # "bais":Ljava/io/ByteArrayInputStream;
	//    .restart local v0    # "bais":Ljava/io/ByteArrayInputStream;
	goto label_goto_57;
	// 785    .line 250
	// 786    .end local v0    # "bais":Ljava/io/ByteArrayInputStream;
	// 787    .end local v6    # "i":I
	// 788    .end local v7    # "ioe":Ljava/io/IOException;
	// 789    .end local v8    # "original":[B
	// 790    .restart local v3    # "certfac":Ljava/security/cert/CertificateFactory;
label_catch_83:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v2    # "ce":Ljava/security/cert/CertificateException;
	goto label_goto_1d;

}
// .method private parseOldSignedData(Lsun/security/util/DerValue;)V
void sun::security::pkcs::PKCS7::parseOldSignedData(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	std::shared_ptr<sun::security::util::DerInputStream> dis;
	auto digestAlgorithmIdVals;
	int len;
	int i;
	std::shared_ptr<sun::security::pkcs::ParsingException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::pkcs::ContentInfo> cVar1;
	std::shared_ptr<java::security::cert::CertificateFactory> certfac;
	auto certVals;
	std::shared_ptr<java::io::ByteArrayInputStream> bais;
	std::shared_ptr<java::security::cert::CertificateException> ce;
	std::shared_ptr<java::lang::Object> catchall;
	std::shared_ptr<sun::security::pkcs::ParsingException> pe;
	std::shared_ptr<java::io::IOException> ioe;
	auto original;
	std::shared_ptr<sun::security::x509::X509CertImpl> cVar2;
	std::shared_ptr<sun::security::pkcs::PKCS7_S_VerbatimX509Certificate> cVar3;
	std::shared_ptr<java::security::cert::X509Certificate> cVar4;
	auto signerInfoVals;
	std::shared_ptr<sun::security::pkcs::SignerInfo> cVar6;
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 802        value = {
	// 803            Lsun/security/pkcs/ParsingException;,
	// 804            Ljava/io/IOException;
	// 805        }
	// 806    .end annotation
	dis = val->toDerInputStream();
	//    .local v9, "dis":Lsun/security/util/DerInputStream;
	this->version = dis->getBigInteger();
	digestAlgorithmIdVals = dis->getSet(0x1);
	//    .local v8, "digestAlgorithmIdVals":[Lsun/security/util/DerValue;
	len = digestAlgorithmIdVals->size();
	//    .local v14, "len":I
	this->digestAlgorithmIds = std::make_shared<std::vector<std::vector<sun::security::x509::AlgorithmId>>>(len);
	i = 0x0;
	//    .local v11, "i":I
label_goto_22:
	if ( i >= len )
		goto label_cond_3f;
	try {
	//label_try_start_24:
	//    .local v15, "oid":Lsun/security/util/DerValue;
	this->digestAlgorithmIds[i] = sun::security::x509::AlgorithmId::parse(digestAlgorithmIdVals[i]);
	//label_try_end_32:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_35;
	}
	//    .catch Ljava/io/IOException; {:try_start_24 .. :try_end_32} :catch_35
	i = ( i + 0x1);
	goto label_goto_22;
	// 883    .line 432
	// 884    .end local v15    # "oid":Lsun/security/util/DerValue;
label_catch_35:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v10, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<sun::security::pkcs::ParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Error parsing digest AlgorithmId IDs")));
	// throw
	throw cVar0;
	// 898    .line 437
	// 899    .end local v10    # "e":Ljava/io/IOException;
label_cond_3f:
	var30 = cVar1(dis, 0x1);
	this->contentInfo = cVar1;
	certfac = 0x0;
	//    .local v7, "certfac":Ljava/security/cert/CertificateFactory;
	try {
	//label_try_start_51:
	//label_try_end_57:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_137;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_51 .. :try_end_57} :catch_137
	java::security::cert::CertificateFactory::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509")));
	//    .end local v7    # "certfac":Ljava/security/cert/CertificateFactory;
label_goto_58:
	certVals = dis->getSet(0x2, 0x0, 0x1);
	//    .local v6, "certVals":[Lsun/security/util/DerValue;
	len = certVals->size();
	this->certificates = std::make_shared<std::vector<std::vector<java::security::cert::X509Certificate>>>(len);
	i = 0x0;
label_goto_74:
	if ( i >= len )
		goto label_cond_f2;
	bais = 0x0;
	//    .local v3, "bais":Ljava/io/ByteArrayInputStream;
	try {
	//label_try_start_77:
	original = certVals[i]->getOriginalEncodedForm();
	//    .local v16, "original":[B
	if ( certfac )     
		goto label_cond_9e;
	var62 = cVar2(certVals[i], original);
	this->certificates[i] = cVar2;
	//label_try_end_94:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_de;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_c3;
	}
	catch (...){
		goto label_catchall_d7;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_77 .. :try_end_94} :catch_de
	//    .catch Ljava/io/IOException; {:try_start_77 .. :try_end_94} :catch_c3
	//    .catchall {:try_start_77 .. :try_end_94} :catchall_d7
label_goto_94:
	if ( !(0x0) )  
		goto label_cond_9b;
	bais->close();
label_cond_9b:
	i = ( i + 0x1);
	goto label_goto_74;
	// 1027    .line 457
label_cond_9e:
	try {
	//label_try_start_9e:
	bais = std::make_shared<java::io::ByteArrayInputStream>(original);
	//label_try_end_a5:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_de;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_c3;
	}
	catch (...){
		goto label_catchall_d7;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_9e .. :try_end_a5} :catch_de
	//    .catch Ljava/io/IOException; {:try_start_9e .. :try_end_a5} :catch_c3
	//    .catchall {:try_start_9e .. :try_end_a5} :catchall_d7
	//    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	//    .local v4, "bais":Ljava/io/ByteArrayInputStream;
	try {
	//label_try_start_a5:
	cVar4 = certfac->generateCertificate(bais);
	cVar4->checkCast("java::security::cert::X509Certificate");
	var78 = cVar3(cVar4, original);
	this->certificates[i] = cVar3;
	bais->close();
	//label_try_end_c1:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_131;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_134;
	}
	catch (...){
		goto label_catchall_12e;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_a5 .. :try_end_c1} :catch_131
	//    .catch Ljava/io/IOException; {:try_start_a5 .. :try_end_c1} :catch_134
	//    .catchall {:try_start_a5 .. :try_end_c1} :catchall_12e
	0x0;
	//    .restart local v3    # "bais":Ljava/io/ByteArrayInputStream;
	goto label_goto_94;
	// 1083    .line 468
	// 1084    .end local v4    # "bais":Ljava/io/ByteArrayInputStream;
	// 1085    .end local v16    # "original":[B
label_catch_c3:
	// move-exception
	ioe = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	//    .local v13, "ioe":Ljava/io/IOException;
label_goto_c4:
	try {
	//label_try_start_c4:
	var88 = pe(ioe->getMessage());
	//    .local v17, "pe":Lsun/security/pkcs/ParsingException;
	pe->initCause(ioe);
	// throw
	throw pe;
	// 1114    :try_end_d7
	// 1115    .catchall {:try_start_c4 .. :try_end_d7} :catchall_d7
	// 1117    .line 472
	// 1118    .end local v13    # "ioe":Ljava/io/IOException;
	// 1119    .end local v17    # "pe":Lsun/security/pkcs/ParsingException;
label_catchall_d7:
	// move-exception
	catchall = tryCatchExcetionList.back();
label_goto_d8:
	if ( !(bais) )  
		goto label_cond_dd;
	bais->close();
label_cond_dd:
	// throw
	throw;
	// 1134    .line 464
	// 1135    .restart local v3    # "bais":Ljava/io/ByteArrayInputStream;
label_catch_de:
	// move-exception
	ce = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	//    .local v5, "ce":Ljava/security/cert/CertificateException;
label_goto_df:
	try {
	//label_try_start_df:
	var99 = pe(ce->getMessage());
	//    .restart local v17    # "pe":Lsun/security/pkcs/ParsingException;
	pe->initCause(ce);
	// throw
	throw pe;
	// 1164    :try_end_f2
	// 1165    .catchall {:try_start_df .. :try_end_f2} :catchall_d7
	// 1167    .line 479
	// 1168    .end local v5    # "ce":Ljava/security/cert/CertificateException;
	// 1169    .end local v17    # "pe":Lsun/security/pkcs/ParsingException;
label_cond_f2:
	dis->getSet(0x0);
	signerInfoVals = dis->getSet(0x1);
	//    .local v18, "signerInfoVals":[Lsun/security/util/DerValue;
	len = signerInfoVals->size();
	this->signerInfos = std::make_shared<std::vector<std::vector<sun::security::pkcs::SignerInfo>>>(len);
	i = 0x0;
label_goto_10f:
	if ( i >= len )
		goto label_cond_12d;
	//    .local v12, "in":Lsun/security/util/DerInputStream;
	var126 = cVar6(signerInfoVals[i]->toDerInputStream(), 0x1);
	this->signerInfos[i] = cVar6;
	i = ( i + 0x1);
	goto label_goto_10f;
	// 1241    .line 489
	// 1242    .end local v12    # "in":Lsun/security/util/DerInputStream;
label_cond_12d:
	return;
	// 1246    .line 472
	// 1247    .end local v18    # "signerInfoVals":[Lsun/security/util/DerValue;
	// 1248    .restart local v4    # "bais":Ljava/io/ByteArrayInputStream;
	// 1249    .restart local v16    # "original":[B
label_catchall_12e:
	// move-exception
	catchall = tryCatchExcetionList.back();
	//    .end local v4    # "bais":Ljava/io/ByteArrayInputStream;
	//    .local v3, "bais":Ljava/io/ByteArrayInputStream;
	goto label_goto_d8;
	// 1259    .line 464
	// 1260    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	// 1261    .restart local v4    # "bais":Ljava/io/ByteArrayInputStream;
label_catch_131:
	// move-exception
	ce = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v5    # "ce":Ljava/security/cert/CertificateException;
	bais;
	//    .end local v4    # "bais":Ljava/io/ByteArrayInputStream;
	//    .restart local v3    # "bais":Ljava/io/ByteArrayInputStream;
	goto label_goto_df;
	// 1272    .line 468
	// 1273    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	// 1274    .end local v5    # "ce":Ljava/security/cert/CertificateException;
	// 1275    .restart local v4    # "bais":Ljava/io/ByteArrayInputStream;
label_catch_134:
	// move-exception
	ioe = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v13    # "ioe":Ljava/io/IOException;
	bais;
	//    .end local v4    # "bais":Ljava/io/ByteArrayInputStream;
	//    .restart local v3    # "bais":Ljava/io/ByteArrayInputStream;
	goto label_goto_c4;
	// 1286    .line 443
	// 1287    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	// 1288    .end local v6    # "certVals":[Lsun/security/util/DerValue;
	// 1289    .end local v13    # "ioe":Ljava/io/IOException;
	// 1290    .end local v16    # "original":[B
	// 1291    .restart local v7    # "certfac":Ljava/security/cert/CertificateFactory;
label_catch_137:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v5    # "ce":Ljava/security/cert/CertificateException;
	goto label_goto_58;

}
// .method private parseSignedData(Lsun/security/util/DerValue;)V
void sun::security::pkcs::PKCS7::parseSignedData(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	std::shared_ptr<sun::security::util::DerInputStream> dis;
	auto digestAlgorithmIdVals;
	int len;
	int i;
	std::shared_ptr<java::io::IOException> e;
	std::shared_ptr<sun::security::pkcs::ParsingException> pe;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::pkcs::ContentInfo> cVar1;
	std::shared_ptr<java::security::cert::CertificateFactory> certfac;
	auto certVals;
	int count;
	std::shared_ptr<java::io::ByteArrayInputStream> bais;
	std::shared_ptr<java::security::cert::CertificateException> ce;
	std::shared_ptr<java::lang::Object> catchall;
	std::shared_ptr<java::io::IOException> ioe;
	auto original;
	std::shared_ptr<sun::security::x509::X509CertImpl> cVar2;
	std::shared_ptr<sun::security::pkcs::PKCS7_S_VerbatimX509Certificate> cVar3;
	std::shared_ptr<java::security::cert::X509Certificate> cVar4;
	std::shared_ptr<std::vector<java::security::cert::X509Certificate>> cVar6;
	auto crlVals;
	std::shared_ptr<java::security::cert::CRLException> e;
	std::shared_ptr<sun::security::x509::X509CRLImpl> cVar7;
	std::shared_ptr<java::security::cert::X509CRL> cVar8;
	auto signerInfoVals;
	std::shared_ptr<sun::security::pkcs::SignerInfo> cVar10;
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1303        value = {
	// 1304            Lsun/security/pkcs/ParsingException;,
	// 1305            Ljava/io/IOException;
	// 1306        }
	// 1307    .end annotation
	dis = val->toDerInputStream();
	//    .local v11, "dis":Lsun/security/util/DerInputStream;
	this->version = dis->getBigInteger();
	digestAlgorithmIdVals = dis->getSet(0x1);
	//    .local v10, "digestAlgorithmIdVals":[Lsun/security/util/DerValue;
	len = digestAlgorithmIdVals->size();
	//    .local v18, "len":I
	this->digestAlgorithmIds = std::make_shared<std::vector<std::vector<sun::security::x509::AlgorithmId>>>(len);
	i = 0x0;
	//    .local v15, "i":I
label_goto_26:
	if ( i >= len )
		goto label_cond_63;
	try {
	//label_try_start_2a:
	//    .local v19, "oid":Lsun/security/util/DerValue;
	this->digestAlgorithmIds[i] = sun::security::x509::AlgorithmId::parse(digestAlgorithmIdVals[i]);
	//label_try_end_38:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3b;
	}
	//    .catch Ljava/io/IOException; {:try_start_2a .. :try_end_38} :catch_3b
	i = ( i + 0x1);
	goto label_goto_26;
	// 1390    .line 301
	// 1391    .end local v19    # "oid":Lsun/security/util/DerValue;
label_catch_3b:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v12, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	var40 = pe(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Error parsing digest AlgorithmId IDs: ")))->append(e->getMessage())->toString());
	//    .local v21, "pe":Lsun/security/pkcs/ParsingException;
	pe->initCause(e);
	// throw
	throw pe;
	// 1438    .line 309
	// 1439    .end local v12    # "e":Ljava/io/IOException;
	// 1440    .end local v21    # "pe":Lsun/security/pkcs/ParsingException;
label_cond_63:
	var46 = cVar1(dis);
	this->contentInfo = cVar1;
	certfac = 0x0;
	//    .local v7, "certfac":Ljava/security/cert/CertificateFactory;
	try {
	//label_try_start_71:
	//label_try_end_77:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_225;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_71 .. :try_end_77} :catch_225
	java::security::cert::CertificateFactory::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509")));
	//    .end local v7    # "certfac":Ljava/security/cert/CertificateFactory;
label_goto_78:
	if ( (unsigned char)(dis->peekByte()) != -0x60 )
		goto label_cond_154;
	certVals = dis->getSet(0x2, 0x1, 0x1);
	//    .local v6, "certVals":[Lsun/security/util/DerValue;
	len = certVals->size();
	this->certificates = std::make_shared<std::vector<std::vector<java::security::cert::X509Certificate>>>(len);
	count = 0x0;
	//    .local v8, "count":I
	i = 0x0;
label_goto_aa:
	if ( i >= len )
		goto label_cond_13c;
	bais = 0x0;
	//    .local v3, "bais":Ljava/io/ByteArrayInputStream;
	try {
	//label_try_start_af:
	//    .local v23, "tag":B
	if ( certVals[i]->getTag() != 0x30 )
		goto label_cond_dc;
	original = certVals[i]->getOriginalEncodedForm();
	//    .local v20, "original":[B
	if ( certfac )     
		goto label_cond_e6;
	var95 = cVar2(certVals[i], original);
	this->certificates[count] = cVar2;
	//label_try_end_da:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_128;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10b;
	}
	catch (...){
		goto label_catchall_121;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_af .. :try_end_da} :catch_128
	//    .catch Ljava/io/IOException; {:try_start_af .. :try_end_da} :catch_10b
	//    .catchall {:try_start_af .. :try_end_da} :catchall_121
label_goto_da:
	count = ( count + 0x1);
	//    .end local v20    # "original":[B
label_cond_dc:
	if ( !(0x0) )  
		goto label_cond_e3;
	bais->close();
label_cond_e3:
	i = ( i + 0x1);
	goto label_goto_aa;
	// 1615    .line 340
	// 1616    .restart local v20    # "original":[B
label_cond_e6:
	try {
	//label_try_start_e6:
	bais = std::make_shared<java::io::ByteArrayInputStream>(original);
	//label_try_end_ed:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_128;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10b;
	}
	catch (...){
		goto label_catchall_121;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_e6 .. :try_end_ed} :catch_128
	//    .catch Ljava/io/IOException; {:try_start_e6 .. :try_end_ed} :catch_10b
	//    .catchall {:try_start_e6 .. :try_end_ed} :catchall_121
	//    .local v4, "bais":Ljava/io/ByteArrayInputStream;
	try {
	//label_try_start_ed:
	//    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	cVar4 = certfac->generateCertificate(bais);
	cVar4->checkCast("java::security::cert::X509Certificate");
	var112 = cVar3(cVar4, original);
	this->certificates[count] = cVar3;
	bais->close();
	//label_try_end_109:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_21d;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_221;
	}
	catch (...){
		goto label_catchall_219;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_ed .. :try_end_109} :catch_21d
	//    .catch Ljava/io/IOException; {:try_start_ed .. :try_end_109} :catch_221
	//    .catchall {:try_start_ed .. :try_end_109} :catchall_219
	0x0;
	//    .restart local v3    # "bais":Ljava/io/ByteArrayInputStream;
	goto label_goto_da;
	// 1672    .line 353
	// 1673    .end local v4    # "bais":Ljava/io/ByteArrayInputStream;
	// 1674    .end local v20    # "original":[B
	// 1675    .end local v23    # "tag":B
label_catch_10b:
	// move-exception
	ioe = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	//    .local v17, "ioe":Ljava/io/IOException;
label_goto_10c:
	try {
	//label_try_start_10c:
	var122 = pe(ioe->getMessage());
	//    .restart local v21    # "pe":Lsun/security/pkcs/ParsingException;
	pe->initCause(ioe);
	// throw
	throw pe;
	// 1706    :try_end_121
	// 1707    .catchall {:try_start_10c .. :try_end_121} :catchall_121
	// 1709    .line 357
	// 1710    .end local v17    # "ioe":Ljava/io/IOException;
	// 1711    .end local v21    # "pe":Lsun/security/pkcs/ParsingException;
label_catchall_121:
	// move-exception
	catchall = tryCatchExcetionList.back();
label_goto_122:
	if ( !(bais) )  
		goto label_cond_127;
	bais->close();
label_cond_127:
	// throw
	throw;
	// 1726    .line 349
	// 1727    .restart local v3    # "bais":Ljava/io/ByteArrayInputStream;
label_catch_128:
	// move-exception
	ce = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	//    .local v5, "ce":Ljava/security/cert/CertificateException;
label_goto_129:
	try {
	//label_try_start_129:
	var134 = pe(ce->getMessage());
	//    .restart local v21    # "pe":Lsun/security/pkcs/ParsingException;
	pe->initCause(ce);
	// throw
	throw pe;
	// 1756    :try_end_13c
	// 1757    .catchall {:try_start_129 .. :try_end_13c} :catchall_121
	// 1759    .line 362
	// 1760    .end local v5    # "ce":Ljava/security/cert/CertificateException;
	// 1761    .end local v21    # "pe":Lsun/security/pkcs/ParsingException;
label_cond_13c:
	if ( count == len )
		goto label_cond_154;
	cVar6 = java::util::Arrays::copyOf(this->certificates, count);
	cVar6->checkCast("std::vector<java::security::cert::X509Certificate>");
	this->certificates = cVar6;
	//    .end local v6    # "certVals":[Lsun/security/util/DerValue;
	//    .end local v8    # "count":I
label_cond_154:
	if ( (unsigned char)(dis->peekByte()) != -0x5f )
		goto label_cond_1da;
	crlVals = dis->getSet(0x1, 0x1);
	//    .local v9, "crlVals":[Lsun/security/util/DerValue;
	len = crlVals->size();
	this->crls = std::make_shared<std::vector<std::vector<java::security::cert::X509CRL>>>(len);
	i = 0x0;
label_goto_181:
	if ( i >= len )
		goto label_cond_1da;
	bais = 0x0;
	//    .restart local v3    # "bais":Ljava/io/ByteArrayInputStream;
	if ( certfac )     
		goto label_cond_1a1;
	try {
	//label_try_start_188:
	cVar7 = std::make_shared<sun::security::x509::X509CRLImpl>(crlVals[i]);
	this->crls[i] = cVar7;
	//label_try_end_197:
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1bf;
	}
	catch (...){
		goto label_catchall_1d3;
	}
	//    .catch Ljava/security/cert/CRLException; {:try_start_188 .. :try_end_197} :catch_1bf
	//    .catchall {:try_start_188 .. :try_end_197} :catchall_1d3
label_goto_197:
	if ( !(0x0) )  
		goto label_cond_19e;
	bais->close();
label_cond_19e:
	i = ( i + 0x1);
	goto label_goto_181;
	// 1891    .line 380
label_cond_1a1:
	try {
	//label_try_start_1a1:
	//    .local v14, "encoded":[B
	bais = std::make_shared<java::io::ByteArrayInputStream>(crlVals[i]->toByteArray());
	//label_try_end_1ac:
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1bf;
	}
	catch (...){
		goto label_catchall_1d3;
	}
	//    .catch Ljava/security/cert/CRLException; {:try_start_1a1 .. :try_end_1ac} :catch_1bf
	//    .catchall {:try_start_1a1 .. :try_end_1ac} :catchall_1d3
	//    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	//    .restart local v4    # "bais":Ljava/io/ByteArrayInputStream;
	try {
	//label_try_start_1ac:
	cVar8 = certfac->generateCRL(bais);
	cVar8->checkCast("java::security::cert::X509CRL");
	this->crls[i] = cVar8;
	bais->close();
	//label_try_end_1bd:
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_216;
	}
	catch (...){
		goto label_catchall_213;
	}
	//    .catch Ljava/security/cert/CRLException; {:try_start_1ac .. :try_end_1bd} :catch_216
	//    .catchall {:try_start_1ac .. :try_end_1bd} :catchall_213
	0x0;
	//    .restart local v3    # "bais":Ljava/io/ByteArrayInputStream;
	goto label_goto_197;
	// 1939    .line 386
	// 1940    .end local v4    # "bais":Ljava/io/ByteArrayInputStream;
	// 1941    .end local v14    # "encoded":[B
label_catch_1bf:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	//    .local v13, "e":Ljava/security/cert/CRLException;
label_goto_1c0:
	try {
	//label_try_start_1c0:
	var197 = pe(e->getMessage());
	//    .restart local v21    # "pe":Lsun/security/pkcs/ParsingException;
	pe->initCause(e);
	// throw
	throw pe;
	// 1970    :try_end_1d3
	// 1971    .catchall {:try_start_1c0 .. :try_end_1d3} :catchall_1d3
	// 1973    .line 391
	// 1974    .end local v13    # "e":Ljava/security/cert/CRLException;
	// 1975    .end local v21    # "pe":Lsun/security/pkcs/ParsingException;
label_catchall_1d3:
	// move-exception
	catchall = tryCatchExcetionList.back();
label_goto_1d4:
	if ( !(bais) )  
		goto label_cond_1d9;
	bais->close();
label_cond_1d9:
	// throw
	throw;
	// 1990    .line 399
	// 1991    .end local v9    # "crlVals":[Lsun/security/util/DerValue;
label_cond_1da:
	signerInfoVals = dis->getSet(0x1);
	//    .local v22, "signerInfoVals":[Lsun/security/util/DerValue;
	len = signerInfoVals->size();
	this->signerInfos = std::make_shared<std::vector<std::vector<sun::security::pkcs::SignerInfo>>>(len);
	i = 0x0;
label_goto_1f4:
	if ( i >= len )
		goto label_cond_212;
	//    .local v16, "in":Lsun/security/util/DerInputStream;
	var225 = cVar10(signerInfoVals[i]->toDerInputStream());
	this->signerInfos[i] = cVar10;
	i = ( i + 0x1);
	goto label_goto_1f4;
	// 2060    .line 408
	// 2061    .end local v16    # "in":Lsun/security/util/DerInputStream;
label_cond_212:
	return;
	// 2065    .line 391
	// 2066    .end local v22    # "signerInfoVals":[Lsun/security/util/DerValue;
	// 2067    .restart local v4    # "bais":Ljava/io/ByteArrayInputStream;
	// 2068    .restart local v9    # "crlVals":[Lsun/security/util/DerValue;
	// 2069    .restart local v14    # "encoded":[B
label_catchall_213:
	// move-exception
	catchall = tryCatchExcetionList.back();
	//    .end local v4    # "bais":Ljava/io/ByteArrayInputStream;
	//    .local v3, "bais":Ljava/io/ByteArrayInputStream;
	goto label_goto_1d4;
	// 2079    .line 386
	// 2080    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	// 2081    .restart local v4    # "bais":Ljava/io/ByteArrayInputStream;
label_catch_216:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v13    # "e":Ljava/security/cert/CRLException;
	bais;
	//    .end local v4    # "bais":Ljava/io/ByteArrayInputStream;
	//    .restart local v3    # "bais":Ljava/io/ByteArrayInputStream;
	goto label_goto_1c0;
	// 2092    .line 357
	// 2093    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	// 2094    .end local v9    # "crlVals":[Lsun/security/util/DerValue;
	// 2095    .end local v13    # "e":Ljava/security/cert/CRLException;
	// 2096    .end local v14    # "encoded":[B
	// 2097    .restart local v4    # "bais":Ljava/io/ByteArrayInputStream;
	// 2098    .restart local v6    # "certVals":[Lsun/security/util/DerValue;
	// 2099    .restart local v8    # "count":I
	// 2100    .restart local v20    # "original":[B
	// 2101    .restart local v23    # "tag":B
label_catchall_219:
	// move-exception
	catchall = tryCatchExcetionList.back();
	//    .end local v4    # "bais":Ljava/io/ByteArrayInputStream;
	//    .restart local v3    # "bais":Ljava/io/ByteArrayInputStream;
	goto label_goto_122;
	// 2111    .line 349
	// 2112    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	// 2113    .restart local v4    # "bais":Ljava/io/ByteArrayInputStream;
label_catch_21d:
	// move-exception
	ce = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v5    # "ce":Ljava/security/cert/CertificateException;
	bais;
	//    .end local v4    # "bais":Ljava/io/ByteArrayInputStream;
	//    .restart local v3    # "bais":Ljava/io/ByteArrayInputStream;
	goto label_goto_129;
	// 2124    .line 353
	// 2125    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	// 2126    .end local v5    # "ce":Ljava/security/cert/CertificateException;
	// 2127    .restart local v4    # "bais":Ljava/io/ByteArrayInputStream;
label_catch_221:
	// move-exception
	ioe = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v17    # "ioe":Ljava/io/IOException;
	bais;
	//    .end local v4    # "bais":Ljava/io/ByteArrayInputStream;
	//    .restart local v3    # "bais":Ljava/io/ByteArrayInputStream;
	goto label_goto_10c;
	// 2138    .line 314
	// 2139    .end local v3    # "bais":Ljava/io/ByteArrayInputStream;
	// 2140    .end local v6    # "certVals":[Lsun/security/util/DerValue;
	// 2141    .end local v8    # "count":I
	// 2142    .end local v17    # "ioe":Ljava/io/IOException;
	// 2143    .end local v20    # "original":[B
	// 2144    .end local v23    # "tag":B
	// 2145    .restart local v7    # "certfac":Ljava/security/cert/CertificateFactory;
label_catch_225:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v5    # "ce":Ljava/security/cert/CertificateException;
	goto label_goto_78;

}
// .method private populateCertIssuerNames()V
void sun::security::pkcs::PKCS7::populateCertIssuerNames()
{
	
	int i;
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	std::shared_ptr<sun::security::x509::X500Name> certIssuerName;
	std::shared_ptr<sun::security::x509::X509CertInfo> tbsCert;
	std::shared_ptr<java::security::Principal> cVar0;
	auto certIssuerName;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( this->certificates )     
		goto label_cond_5;
	return;
	// 2165    .line 741
label_cond_5:
	this->certIssuerNames = std::make_shared<std::vector<std::vector<java::security::Principal>>>(this->certificates->size());
	i = 0x0;
	//    .local v4, "i":I
label_goto_d:
	if ( i >= this->certificates->size() )
		goto label_cond_39;
	cert = this->certificates[i];
	//    .local v1, "cert":Ljava/security/cert/X509Certificate;
	certIssuerName = cert->getIssuerDN();
	//    .local v2, "certIssuerName":Ljava/security/Principal;
	if ( certIssuerName->instanceOf("sun::security::x509::X500Name") )     
		goto label_cond_32;
	try {
	//label_try_start_1e:
	tbsCert = std::make_shared<sun::security::x509::X509CertInfo>(cert->getTBSCertificate());
	//    .local v5, "tbsCert":Lsun/security/x509/X509CertInfo;
	cVar0 = tbsCert->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuer.dname")));
	cVar0->checkCast("java::security::Principal");
	certIssuerName = cVar0;
	//label_try_end_32:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3a;
	}
	//    .catch Ljava/lang/Exception; {:try_start_1e .. :try_end_32} :catch_3a
	//    .end local v5    # "tbsCert":Lsun/security/x509/X509CertInfo;
label_cond_32:
label_goto_32:
	this->certIssuerNames[i] = certIssuerName;
	i = ( i + 0x1);
	goto label_goto_d;
	// 2243    .line 763
	// 2244    .end local v1    # "cert":Ljava/security/cert/X509Certificate;
	// 2245    .end local v2    # "certIssuerName":Ljava/security/Principal;
label_cond_39:
	return;
	// 2249    .line 756
	// 2250    .restart local v1    # "cert":Ljava/security/cert/X509Certificate;
	// 2251    .restart local v2    # "certIssuerName":Ljava/security/Principal;
label_catch_3a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "e":Ljava/lang/Exception;
	goto label_goto_32;

}
// .method public encodeSignedData(Ljava/io/OutputStream;)V
void sun::security::pkcs::PKCS7::encodeSignedData(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> derout;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2265        value = {
	// 2266            Ljava/io/IOException;
	// 2267        }
	// 2268    .end annotation
	derout = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "derout":Lsun/security/util/DerOutputStream;
	this->encodeSignedData(derout);
	out->write(derout->toByteArray());
	return;

}
// .method public encodeSignedData(Lsun/security/util/DerOutputStream;)V
void sun::security::pkcs::PKCS7::encodeSignedData(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> signedData;
	std::shared<std::vector<std::vector<sun::security::x509::X509CertImpl>>> implCerts;
	int i;
	std::shared_ptr<sun::security::x509::X509CertImpl> cVar0;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<sun::security::x509::X509CertImpl> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::HashSet> implCRLs;
	std::shared_ptr<std::vector<java::security::cert::X509CRL>> cVar3;
	int cVar4;
	std::shared_ptr<sun::security::x509::X509CRLImpl> crl;
	std::shared_ptr<java::io::IOException> cVar7;
	std::shared_ptr<sun::security::x509::X509CRLImpl> cVar6;
	std::shared_ptr<std::vector<sun::security::util::DerEncoder>> cVar8;
	std::shared_ptr<sun::security::util::DerValue> signedDataSeq;
	std::shared_ptr<sun::security::pkcs::ContentInfo> block;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2295        value = {
	// 2296            Ljava/io/IOException;
	// 2297        }
	// 2298    .end annotation
	signedData = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v8, "signedData":Lsun/security/util/DerOutputStream;
	signedData->putInteger(this->version);
	signedData->putOrderedSetOf(0x31, this->digestAlgorithmIds);
	this->contentInfo->encode(signedData);
	if ( !(this->certificates) )  
		goto label_cond_59;
	if ( !(this->certificates->size()) )  
		goto label_cond_59;
	implCerts = std::make_shared<std::vector<std::vector<sun::security::x509::X509CertImpl>>>(this->certificates->size());
	//    .local v7, "implCerts":[Lsun/security/x509/X509CertImpl;
	i = 0x0;
	//    .local v5, "i":I
label_goto_25:
	if ( i >= this->certificates->size() )
		goto label_cond_54;
	if ( !(this->certificates[i]->instanceOf("sun::security::x509::X509CertImpl")) )  
		goto label_cond_3d;
	cVar0 = this->certificates[i];
	cVar0->checkCast("sun::security::x509::X509CertImpl");
	implCerts[i] = cVar0;
label_goto_3a:
	i = ( i + 0x1);
	goto label_goto_25;
	// 2378    .line 532
label_cond_3d:
	try {
	//label_try_start_3d:
	//    .local v4, "encoded":[B
	cVar1 = std::make_shared<sun::security::x509::X509CertImpl>(this->certificates[i]->getEncoded());
	implCerts[i] = cVar1;
	//label_try_end_4c:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4d;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_3d .. :try_end_4c} :catch_4d
	goto label_goto_3a;
	// 2401    .line 534
	// 2402    .end local v4    # "encoded":[B
label_catch_4d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "ce":Ljava/security/cert/CertificateException;
	cVar2 = std::make_shared<java::io::IOException>(getCatchExcetionFromList);
	// throw
	throw cVar2;
	// 2414    .line 542
	// 2415    .end local v2    # "ce":Ljava/security/cert/CertificateException;
label_cond_54:
	signedData->putOrderedSetOf(-0x60, implCerts);
	//    .end local v5    # "i":I
	//    .end local v7    # "implCerts":[Lsun/security/x509/X509CertImpl;
label_cond_59:
	if ( !(this->crls) )  
		goto label_cond_a3;
	if ( !(this->crls->size()) )  
		goto label_cond_a3;
	implCRLs = std::make_shared<java::util::HashSet>(this->crls->size());
	//    .local v6, "implCRLs":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/x509/X509CRLImpl;>;"
	cVar3 = this->crls;
	cVar4 = 0x0;
label_goto_6e:
	if ( cVar4 >= cVar3->size() )
		goto label_cond_92;
	crl = cVar3[cVar4];
	//    .local v3, "crl":Ljava/security/cert/X509CRL;
	if ( !(crl->instanceOf("sun::security::x509::X509CRLImpl")) )  
		goto label_cond_7e;
	crl->checkCast("sun::security::x509::X509CRLImpl");
	//    .end local v3    # "crl":Ljava/security/cert/X509CRL;
	implCRLs->add(crl);
label_goto_7b:
	cVar4 = ( cVar4 + 0x1);
	goto label_goto_6e;
	// 2475    .line 554
	// 2476    .restart local v3    # "crl":Ljava/security/cert/X509CRL;
label_cond_7e:
	try {
	//label_try_start_7e:
	//    .restart local v4    # "encoded":[B
	cVar6 = std::make_shared<sun::security::x509::X509CRLImpl>(crl->getEncoded());
	implCRLs->add(cVar6);
	//label_try_end_8a:
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8b;
	}
	//    .catch Ljava/security/cert/CRLException; {:try_start_7e .. :try_end_8a} :catch_8b
	goto label_goto_7b;
	// 2495    .line 556
	// 2496    .end local v4    # "encoded":[B
label_catch_8b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "ce":Ljava/security/cert/CRLException;
	cVar7 = std::make_shared<java::io::IOException>(getCatchExcetionFromList);
	// throw
	throw cVar7;
	// 2508    .line 565
	// 2509    .end local v1    # "ce":Ljava/security/cert/CRLException;
	// 2510    .end local v3    # "crl":Ljava/security/cert/X509CRL;
label_cond_92:
	cVar8 = implCRLs->toArray(std::make_shared<std::vector<std::vector<sun::security::x509::X509CRLImpl>>>(implCRLs->size()));
	cVar8->checkCast("std::vector<sun::security::util::DerEncoder>");
	signedData->putOrderedSetOf(-0x5f, cVar8);
	//    .end local v6    # "implCRLs":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/x509/X509CRLImpl;>;"
label_cond_a3:
	signedData->putOrderedSetOf(0x31, this->signerInfos);
	signedDataSeq = std::make_shared<sun::security::util::DerValue>(0x30, signedData->toByteArray());
	//    .local v9, "signedDataSeq":Lsun/security/util/DerValue;
	block = std::make_shared<sun::security::pkcs::ContentInfo>(sun::security::pkcs::ContentInfo::SIGNED_DATA_OID, signedDataSeq);
	//    .local v0, "block":Lsun/security/pkcs/ContentInfo;
	block->encode(out);
	return;

}
// .method public getCRLs()[Ljava/security/cert/X509CRL;
std::shared_ptr<java::security::cert::X509CRL> sun::security::pkcs::PKCS7::getCRLs()
{
	
	std::shared_ptr<std::vector<java::security::cert::X509CRL>> cVar0;
	
	if ( !(this->crls) )  
		goto label_cond_e;
	cVar0 = this->crls->clone();
	cVar0->checkCast("std::vector<java::security::cert::X509CRL>");
	return cVar0;
	// 2589    .line 696
label_cond_e:
	return 0x0;

}
// .method public getCertificate(Ljava/math/BigInteger;Lsun/security/x509/X500Name;)Ljava/security/cert/X509Certificate;
std::shared_ptr<java::security::cert::X509Certificate> sun::security::pkcs::PKCS7::getCertificate(std::shared_ptr<java::math::BigInteger> serial,std::shared_ptr<sun::security::x509::X500Name> issuerName)
{
	
	int i;
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	
	//    .param p1, "serial"    # Ljava/math/BigInteger;
	//    .param p2, "issuerName"    # Lsun/security/x509/X500Name;
	if ( !(this->certificates) )  
		goto label_cond_2e;
	if ( this->certIssuerNames )     
		goto label_cond_c;
	this->populateCertIssuerNames();
label_cond_c:
	i = 0x0;
	//    .local v1, "i":I
label_goto_d:
	if ( i >= this->certificates->size() )
		goto label_cond_2e;
	cert = this->certificates[i];
	//    .local v0, "cert":Ljava/security/cert/X509Certificate;
	//    .local v2, "thisSerial":Ljava/math/BigInteger;
	if ( !(serial->equals(cert->getSerialNumber())) )  
		goto label_cond_2b;
	if ( !(issuerName->equals(this->certIssuerNames[i])) )  
		goto label_cond_2b;
	return cert;
	// 2661    .line 720
label_cond_2b:
	i = ( i + 0x1);
	goto label_goto_d;
	// 2667    .line 730
	// 2668    .end local v0    # "cert":Ljava/security/cert/X509Certificate;
	// 2669    .end local v1    # "i":I
	// 2670    .end local v2    # "thisSerial":Ljava/math/BigInteger;
label_cond_2e:
	return 0x0;

}
// .method public getCertificates()[Ljava/security/cert/X509Certificate;
std::shared_ptr<java::security::cert::X509Certificate> sun::security::pkcs::PKCS7::getCertificates()
{
	
	std::shared_ptr<std::vector<java::security::cert::X509Certificate>> cVar0;
	
	if ( !(this->certificates) )  
		goto label_cond_e;
	cVar0 = this->certificates->clone();
	cVar0->checkCast("std::vector<java::security::cert::X509Certificate>");
	return cVar0;
	// 2697    .line 684
label_cond_e:
	return 0x0;

}
// .method public getContentInfo()Lsun/security/pkcs/ContentInfo;
std::shared_ptr<sun::security::pkcs::ContentInfo> sun::security::pkcs::PKCS7::getContentInfo()
{
	
	return this->contentInfo;

}
// .method public getDigestAlgorithmIds()[Lsun/security/x509/AlgorithmId;
std::shared_ptr<sun::security::x509::AlgorithmId> sun::security::pkcs::PKCS7::getDigestAlgorithmIds()
{
	
	return this->digestAlgorithmIds;

}
// .method public getSignerInfos()[Lsun/security/pkcs/SignerInfo;
std::shared_ptr<sun::security::pkcs::SignerInfo> sun::security::pkcs::PKCS7::getSignerInfos()
{
	
	return this->signerInfos;

}
// .method public getVersion()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::pkcs::PKCS7::getVersion()
{
	
	return this->version;

}
// .method public isOldStyle()Z
bool sun::security::pkcs::PKCS7::isOldStyle()
{
	
	return this->oldStyle;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::pkcs::PKCS7::toString()
{
	
	std::shared_ptr<java::lang::String> out;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	int i;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	
	out = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v1, "out":Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	out = cVar0->append(out)->append(this->contentInfo)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();
	if ( !(this->version) )  
		goto label_cond_46;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	out = cVar1->append(out)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS7 :: version: ")))->append(sun::security::util::Debug::toHexString(this->version))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();
label_cond_46:
	if ( !(this->digestAlgorithmIds) )  
		goto label_cond_8a;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	out = cVar2->append(out)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS7 :: digest AlgorithmIds: \n")))->toString();
	i = 0x0;
	//    .local v0, "i":I
label_goto_5f:
	if ( i >= this->digestAlgorithmIds->size() )
		goto label_cond_8a;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	out = cVar3->append(out)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\t")))->append(this->digestAlgorithmIds[i])->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();
	i = ( i + 0x1);
	goto label_goto_5f;
	// 2899    .line 779
	// 2900    .end local v0    # "i":I
label_cond_8a:
	if ( !(this->certificates) )  
		goto label_cond_d9;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	out = cVar4->append(out)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS7 :: certificates: \n")))->toString();
	i = 0x0;
	//    .restart local v0    # "i":I
label_goto_a3:
	if ( i >= this->certificates->size() )
		goto label_cond_d9;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	out = cVar5->append(out)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\t")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".   ")))->append(this->certificates[i])->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();
	i = ( i + 0x1);
	goto label_goto_a3;
	// 2984    .line 784
	// 2985    .end local v0    # "i":I
label_cond_d9:
	if ( !(this->crls) )  
		goto label_cond_128;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	out = cVar6->append(out)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS7 :: crls: \n")))->toString();
	i = 0x0;
	//    .restart local v0    # "i":I
label_goto_f2:
	if ( i >= this->crls->size() )
		goto label_cond_128;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	out = cVar7->append(out)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\t")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".   ")))->append(this->crls[i])->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();
	i = ( i + 0x1);
	goto label_goto_f2;
	// 3069    .line 789
	// 3070    .end local v0    # "i":I
label_cond_128:
	if ( !(this->signerInfos) )  
		goto label_cond_177;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	out = cVar8->append(out)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS7 :: signer infos: \n")))->toString();
	i = 0x0;
	//    .restart local v0    # "i":I
label_goto_141:
	if ( i >= this->signerInfos->size() )
		goto label_cond_177;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	out = cVar9->append(out)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\t")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".  ")))->append(this->signerInfos[i])->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();
	i = ( i + 0x1);
	goto label_goto_141;
	// 3154    .line 794
	// 3155    .end local v0    # "i":I
label_cond_177:
	return out;

}
// .method public verify(Lsun/security/pkcs/SignerInfo;Ljava/io/InputStream;)Lsun/security/pkcs/SignerInfo;
std::shared_ptr<sun::security::pkcs::SignerInfo> sun::security::pkcs::PKCS7::verify(std::shared_ptr<sun::security::pkcs::SignerInfo> info,std::shared_ptr<java::io::InputStream> dataInputStream)
{
	
	//    .param p1, "info"    # Lsun/security/pkcs/SignerInfo;
	//    .param p2, "dataInputStream"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3165        value = {
	// 3166            Ljava/security/NoSuchAlgorithmException;,
	// 3167            Ljava/security/SignatureException;,
	// 3168            Ljava/io/IOException;
	// 3169        }
	// 3170    .end annotation
	return info->verify(this, dataInputStream);

}
// .method public verify(Lsun/security/pkcs/SignerInfo;[B)Lsun/security/pkcs/SignerInfo;
std::shared_ptr<sun::security::pkcs::SignerInfo> sun::security::pkcs::PKCS7::verify(std::shared_ptr<sun::security::pkcs::SignerInfo> info,std::shared_ptr<unsigned char[]> bytes)
{
	
	//    .param p1, "info"    # Lsun/security/pkcs/SignerInfo;
	//    .param p2, "bytes"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 3186        value = {
	// 3187            Ljava/security/NoSuchAlgorithmException;,
	// 3188            Ljava/security/SignatureException;
	// 3189        }
	// 3190    .end annotation
	return info->verify(this, bytes);

}
// .method public verify()[Lsun/security/pkcs/SignerInfo;
std::shared_ptr<sun::security::pkcs::SignerInfo> sun::security::pkcs::PKCS7::verify()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3204        value = {
	// 3205            Ljava/security/NoSuchAlgorithmException;,
	// 3206            Ljava/security/SignatureException;
	// 3207        }
	// 3208    .end annotation
	return this->verify(0x0);

}
// .method public verify([B)[Lsun/security/pkcs/SignerInfo;
std::shared_ptr<sun::security::pkcs::SignerInfo> sun::security::pkcs::PKCS7::verify(std::shared_ptr<unsigned char[]> bytes)
{
	
	std::shared_ptr<java::util::Vector> intResult;
	int i;
	std::shared_ptr<java::lang::Object> signerInfo;
	std::shared<std::vector<std::vector<sun::security::pkcs::SignerInfo>>> result;
	
	//    .param p1, "bytes"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 3225        value = {
	// 3226            Ljava/security/NoSuchAlgorithmException;,
	// 3227            Ljava/security/SignatureException;
	// 3228        }
	// 3229    .end annotation
	intResult = std::make_shared<java::util::Vector>();
	//    .local v1, "intResult":Ljava/util/Vector;, "Ljava/util/Vector<Lsun/security/pkcs/SignerInfo;>;"
	i = 0x0;
	//    .local v0, "i":I
label_goto_7:
	if ( i >= this->signerInfos->size() )
		goto label_cond_1c;
	signerInfo = this->verify(this->signerInfos[i], bytes);
	//    .local v3, "signerInfo":Lsun/security/pkcs/SignerInfo;
	if ( !(signerInfo) )  
		goto label_cond_19;
	intResult->addElement(signerInfo);
label_cond_19:
	i = ( i + 0x1);
	goto label_goto_7;
	// 3273    .line 630
	// 3274    .end local v3    # "signerInfo":Lsun/security/pkcs/SignerInfo;
label_cond_1c:
	if ( intResult->isEmpty() )     
		goto label_cond_2c;
	result = std::make_shared<std::vector<std::vector<sun::security::pkcs::SignerInfo>>>(intResult->size());
	//    .local v2, "result":[Lsun/security/pkcs/SignerInfo;
	intResult->copyInto(result);
	return result;
	// 3296    .line 636
	// 3297    .end local v2    # "result":[Lsun/security/pkcs/SignerInfo;
label_cond_2c:
	return 0x0;

}


