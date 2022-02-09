// CPP L:\smali2cpp20\x64\Release\out\sun\security\pkcs\SignerInfo.smali
#include "java2ctype.h"
#include "java.io.ByteArrayInputStream.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.math.BigInteger.h"
#include "java.security.AlgorithmParameters.h"
#include "java.security.CryptoPrimitive.h"
#include "java.security.InvalidKeyException.h"
#include "java.security.Key.h"
#include "java.security.MessageDigest.h"
#include "java.security.Principal.h"
#include "java.security.PublicKey.h"
#include "java.security.Signature.h"
#include "java.security.SignatureException.h"
#include "java.security.Timestamp.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertificateFactory.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.ArrayList.h"
#include "java.util.Arrays.h"
#include "java.util.Collections.h"
#include "java.util.Date.h"
#include "java.util.EnumSet.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.pkcs.ContentInfo.h"
#include "sun.security.pkcs.PKCS7.h"
#include "sun.security.pkcs.PKCS9Attribute.h"
#include "sun.security.pkcs.PKCS9Attributes.h"
#include "sun.security.pkcs.ParsingException.h"
#include "sun.security.pkcs.SignerInfo.h"
#include "sun.security.timestamp.TimestampToken.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.DisabledAlgorithmConstraints.h"
#include "sun.security.util.KeyUtil.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.KeyUsageExtension.h"
#include "sun.security.x509.X500Name.h"

static sun::security::pkcs::SignerInfo::DIGEST_PRIMITIVE_SET;
static sun::security::pkcs::SignerInfo::JAR_DISABLED_CHECK;
static sun::security::pkcs::SignerInfo::SIG_PRIMITIVE_SET;
// .method static constructor <clinit>()V
void sun::security::pkcs::SignerInfo::static_cinit()
{
	
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints> cVar0;
	
	sun::security::pkcs::SignerInfo::DIGEST_PRIMITIVE_SET = java::util::Collections::unmodifiableSet(java::util::EnumSet::of(java::security::CryptoPrimitive::MESSAGE_DIGEST));
	sun::security::pkcs::SignerInfo::SIG_PRIMITIVE_SET = java::util::Collections::unmodifiableSet(java::util::EnumSet::of(java::security::CryptoPrimitive::SIGNATURE));
	cVar0 = std::make_shared<sun::security::util::DisabledAlgorithmConstraints>(std::make_shared<java::lang::String>(std::make_shared<char[]>("jdk.jar.disabledAlgorithms")));
	sun::security::pkcs::SignerInfo::JAR_DISABLED_CHECK = cVar0;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::pkcs::SignerInfo::SignerInfo(std::shared_ptr<sun::security::util::DerInputStream> derin)
{
	
	//    .param p1, "derin"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 110        value = {
	// 111            Ljava/io/IOException;,
	// 112            Lsun/security/pkcs/ParsingException;
	// 113        }
	// 114    .end annotation
	sun::security::pkcs::SignerInfo::(derin, 0x0);
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;Z)V
sun::security::pkcs::SignerInfo::SignerInfo(std::shared_ptr<sun::security::util::DerInputStream> derin,bool oldStyle)
{
	
	bool cVar0;
	int cVar1;
	auto issuerAndSerialNumber;
	std::shared_ptr<sun::security::x509::X500Name> cVar2;
	std::shared_ptr<sun::security::util::DerValue> cVar3;
	std::shared_ptr<sun::security::pkcs::ParsingException> cVar4;
	std::shared_ptr<sun::security::pkcs::PKCS9Attributes> cVar6;
	std::shared_ptr<sun::security::pkcs::PKCS9Attributes> cVar5;
	
	//    .param p1, "derin"    # Lsun/security/util/DerInputStream;
	//    .param p2, "oldStyle"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 131        value = {
	// 132            Ljava/io/IOException;,
	// 133            Lsun/security/pkcs/ParsingException;
	// 134        }
	// 135    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	// 143    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->hasTimestamp = cVar0;
	this->version = derin->getBigInteger();
	issuerAndSerialNumber = derin->getSequence(0x2);
	//    .local v0, "issuerAndSerialNumber":[Lsun/security/util/DerValue;
	//    .local v1, "issuerBytes":[B
	cVar3 = std::make_shared<sun::security::util::DerValue>(0x30, issuerAndSerialNumber[cVar1]->toByteArray());
	cVar2 = std::make_shared<sun::security::x509::X500Name>(cVar3);
	this->issuerName = cVar2;
	this->certificateSerialNumber = issuerAndSerialNumber[cVar0]->getBigInteger();
	//    .local v2, "tmp":Lsun/security/util/DerValue;
	this->digestAlgorithmId = sun::security::x509::AlgorithmId::parse(derin->getDerValue());
	if ( !(oldStyle) )  
		goto label_cond_61;
	derin->getSet(cVar1);
label_cond_3d:
label_goto_3d:
	this->digestEncryptionAlgorithmId = sun::security::x509::AlgorithmId::parse(derin->getDerValue());
	this->encryptedDigest = derin->getOctetString();
	if ( !(oldStyle) )  
		goto label_cond_72;
	derin->getSet(cVar1);
label_cond_52:
label_goto_52:
	if ( !(derin->available()) )  
		goto label_cond_89;
	cVar4 = std::make_shared<sun::security::pkcs::ParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("extra data at the end")));
	// throw
	throw cVar4;
	// 257    .line 177
label_cond_61:
	if ( (unsigned char)(derin->peekByte()) != -0x60 )
		goto label_cond_3d;
	cVar5 = std::make_shared<sun::security::pkcs::PKCS9Attributes>(derin);
	this->authenticatedAttributes = cVar5;
	goto label_goto_3d;
	// 278    .line 199
label_cond_72:
	if ( !(derin->available()) )  
		goto label_cond_52;
	if ( (unsigned char)(derin->peekByte()) != -0x5f )
		goto label_cond_52;
	cVar6 = std::make_shared<sun::security::pkcs::PKCS9Attributes>(derin, cVar0);
	this->unauthenticatedAttributes = cVar6;
	goto label_goto_52;
	// 307    .line 210
label_cond_89:
	return;

}
// .method public constructor <init>(Lsun/security/x509/X500Name;Ljava/math/BigInteger;Lsun/security/x509/AlgorithmId;Lsun/security/pkcs/PKCS9Attributes;Lsun/security/x509/AlgorithmId;[BLsun/security/pkcs/PKCS9Attributes;)V
sun::security::pkcs::SignerInfo::SignerInfo(std::shared_ptr<sun::security::x509::X500Name> issuerName,std::shared_ptr<java::math::BigInteger> serial,std::shared_ptr<sun::security::x509::AlgorithmId> digestAlgorithmId,std::shared_ptr<sun::security::pkcs::PKCS9Attributes> authenticatedAttributes,std::shared_ptr<sun::security::x509::AlgorithmId> digestEncryptionAlgorithmId,std::shared_ptr<unsigned char[]> encryptedDigest,std::shared_ptr<sun::security::pkcs::PKCS9Attributes> unauthenticatedAttributes)
{
	
	//    .param p1, "issuerName"    # Lsun/security/x509/X500Name;
	//    .param p2, "serial"    # Ljava/math/BigInteger;
	//    .param p3, "digestAlgorithmId"    # Lsun/security/x509/AlgorithmId;
	//    .param p4, "authenticatedAttributes"    # Lsun/security/pkcs/PKCS9Attributes;
	//    .param p5, "digestEncryptionAlgorithmId"    # Lsun/security/x509/AlgorithmId;
	//    .param p6, "encryptedDigest"    # [B
	//    .param p7, "unauthenticatedAttributes"    # Lsun/security/pkcs/PKCS9Attributes;
	// 324    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->hasTimestamp = 0x1;
	this->version = java::math::BigInteger::ONE;
	this->issuerName = issuerName;
	this->certificateSerialNumber = serial;
	this->digestAlgorithmId = digestAlgorithmId;
	this->authenticatedAttributes = authenticatedAttributes;
	this->digestEncryptionAlgorithmId = digestEncryptionAlgorithmId;
	this->encryptedDigest = encryptedDigest;
	this->unauthenticatedAttributes = unauthenticatedAttributes;
	return;

}
// .method public constructor <init>(Lsun/security/x509/X500Name;Ljava/math/BigInteger;Lsun/security/x509/AlgorithmId;Lsun/security/x509/AlgorithmId;[B)V
sun::security::pkcs::SignerInfo::SignerInfo(std::shared_ptr<sun::security::x509::X500Name> issuerName,std::shared_ptr<java::math::BigInteger> serial,std::shared_ptr<sun::security::x509::AlgorithmId> digestAlgorithmId,std::shared_ptr<sun::security::x509::AlgorithmId> digestEncryptionAlgorithmId,std::shared_ptr<unsigned char[]> encryptedDigest)
{
	
	//    .param p1, "issuerName"    # Lsun/security/x509/X500Name;
	//    .param p2, "serial"    # Ljava/math/BigInteger;
	//    .param p3, "digestAlgorithmId"    # Lsun/security/x509/AlgorithmId;
	//    .param p4, "digestEncryptionAlgorithmId"    # Lsun/security/x509/AlgorithmId;
	//    .param p5, "encryptedDigest"    # [B
	// 371    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->hasTimestamp = 0x1;
	this->version = java::math::BigInteger::ONE;
	this->issuerName = issuerName;
	this->certificateSerialNumber = serial;
	this->digestAlgorithmId = digestAlgorithmId;
	this->digestEncryptionAlgorithmId = digestEncryptionAlgorithmId;
	this->encryptedDigest = encryptedDigest;
	return;

}
// .method private verifyTimestamp(Lsun/security/timestamp/TimestampToken;)V
void sun::security::pkcs::SignerInfo::verifyTimestamp(std::shared_ptr<sun::security::timestamp::TimestampToken> token)
{
	
	std::shared_ptr<java::lang::String> digestAlgname;
	std::shared_ptr<java::security::SignatureException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::security::SignatureException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "token"    # Lsun/security/timestamp/TimestampToken;
	//    .annotation system Ldalvik/annotation/Throws;
	// 406        value = {
	// 407            Ljava/security/NoSuchAlgorithmException;,
	// 408            Ljava/security/SignatureException;
	// 409        }
	// 410    .end annotation
	digestAlgname = token->getHashAlgorithm()->getName();
	//    .local v0, "digestAlgname":Ljava/lang/String;
	if ( sun::security::pkcs::SignerInfo::JAR_DISABLED_CHECK->permits(sun::security::pkcs::SignerInfo::DIGEST_PRIMITIVE_SET, digestAlgname, 0x0) )     
		goto label_cond_2d;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::SignatureException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Timestamp token digest check failed. Disabled algorithm used: ")))->append(digestAlgname)->toString());
	// throw
	throw cVar0;
	// 463    .line 621
label_cond_2d:
	//    .local v1, "md":Ljava/security/MessageDigest;
	if ( java::util::Arrays::equals(token->getHashedMessage(), java::security::MessageDigest::getInstance(digestAlgname)->digest(this->encryptedDigest)) )     
		goto label_cond_75;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::SignatureException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signature timestamp (#")))->append(token->getSerialNumber())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") generated on ")))->append(token->getDate())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" is inapplicable")))->toString());
	// throw
	throw cVar2;
	// 546    .line 641
label_cond_75:
	return;

}
// .method public derEncode(Ljava/io/OutputStream;)V
void sun::security::pkcs::SignerInfo::derEncode(std::shared_ptr<java::io::OutputStream> out)
{
	
	unsigned char cVar0;
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	std::shared_ptr<sun::security::util::DerOutputStream> issuerAndSerialNumber;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 557        value = {
	// 558            Ljava/io/IOException;
	// 559        }
	// 560    .end annotation
	cVar0 = 0x30;
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "seq":Lsun/security/util/DerOutputStream;
	seq->putInteger(this->version);
	issuerAndSerialNumber = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "issuerAndSerialNumber":Lsun/security/util/DerOutputStream;
	this->issuerName->encode(issuerAndSerialNumber);
	issuerAndSerialNumber->putInteger(this->certificateSerialNumber);
	seq->write(cVar0, issuerAndSerialNumber);
	this->digestAlgorithmId->encode(seq);
	if ( !(this->authenticatedAttributes) )  
		goto label_cond_2e;
	this->authenticatedAttributes->encode(-0x60, seq);
label_cond_2e:
	this->digestEncryptionAlgorithmId->encode(seq);
	seq->putOctetString(this->encryptedDigest);
	if ( !(this->unauthenticatedAttributes) )  
		goto label_cond_43;
	this->unauthenticatedAttributes->encode(-0x5f, seq);
label_cond_43:
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "tmp":Lsun/security/util/DerOutputStream;
	tmp->write(cVar0, seq);
	out->write(tmp->toByteArray());
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::pkcs::SignerInfo::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 660        value = {
	// 661            Ljava/io/IOException;
	// 662        }
	// 663    .end annotation
	this->derEncode(out);
	return;

}
// .method public getAuthenticatedAttributes()Lsun/security/pkcs/PKCS9Attributes;
std::shared_ptr<sun::security::pkcs::PKCS9Attributes> sun::security::pkcs::SignerInfo::getAuthenticatedAttributes()
{
	
	return this->authenticatedAttributes;

}
// .method public getCertificate(Lsun/security/pkcs/PKCS7;)Ljava/security/cert/X509Certificate;
std::shared_ptr<java::security::cert::X509Certificate> sun::security::pkcs::SignerInfo::getCertificate(std::shared_ptr<sun::security::pkcs::PKCS7> block)
{
	
	//    .param p1, "block"    # Lsun/security/pkcs/PKCS7;
	//    .annotation system Ldalvik/annotation/Throws;
	// 687        value = {
	// 688            Ljava/io/IOException;
	// 689        }
	// 690    .end annotation
	return block->getCertificate(this->certificateSerialNumber, this->issuerName);

}
// .method public getCertificateChain(Lsun/security/pkcs/PKCS7;)Ljava/util/ArrayList;
std::shared_ptr<java::util::ArrayList<java::security::cert::X509Certificate>> sun::security::pkcs::SignerInfo::getCertificateChain(std::shared_ptr<sun::security::pkcs::PKCS7> block)
{
	
	std::shared_ptr<java::lang::Object> userCert;
	std::shared_ptr<java::util::ArrayList> certList;
	auto pkcsCerts;
	std::shared_ptr<java::security::Principal> issuer;
	int start;
	int i;
	
	//    .param p1, "block"    # Lsun/security/pkcs/PKCS7;
	//    .annotation system Ldalvik/annotation/Signature;
	// 709        value = {
	// 710            "(",
	// 711            "Lsun/security/pkcs/PKCS7;",
	// 712            ")",
	// 713            "Ljava/util/ArrayList",
	// 714            "<",
	// 715            "Ljava/security/cert/X509Certificate;",
	// 716            ">;"
	// 717        }
	// 718    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 721        value = {
	// 722            Ljava/io/IOException;
	// 723        }
	// 724    .end annotation
	userCert = block->getCertificate(this->certificateSerialNumber, this->issuerName);
	//    .local v7, "userCert":Ljava/security/cert/X509Certificate;
	if ( userCert )     
		goto label_cond_c;
	return 0x0;
	// 745    .line 276
label_cond_c:
	certList = std::make_shared<java::util::ArrayList>();
	//    .local v0, "certList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/security/cert/X509Certificate;>;"
	certList->add(userCert);
	pkcsCerts = block->getCertificates();
	//    .local v4, "pkcsCerts":[Ljava/security/cert/X509Certificate;
	if ( !(pkcsCerts) )  
		goto label_cond_28;
	if ( !(userCert->getSubjectDN()->equals(userCert->getIssuerDN())) )  
		goto label_cond_29;
label_cond_28:
	return certList;
	// 784    .line 285
label_cond_29:
	issuer = userCert->getIssuerDN();
	//    .local v2, "issuer":Ljava/security/Principal;
	start = 0x0;
	//    .local v5, "start":I
label_cond_2e:
	//    .local v3, "match":Z
	i = start;
	//    .local v1, "i":I
label_goto_30:
	if ( i >= pkcsCerts->size() )
		goto label_cond_58;
	if ( !(issuer->equals(pkcsCerts[i]->getSubjectDN())) )  
		goto label_cond_6c;
	certList->add(pkcsCerts[i]);
	if ( !(pkcsCerts[i]->getSubjectDN()->equals(pkcsCerts[i]->getIssuerDN())) )  
		goto label_cond_5b;
	start = pkcsCerts->size();
label_goto_57:
label_cond_58:
	if ( 0x0 )     
		goto label_cond_2e;
	return certList;
	// 863    .line 300
label_cond_5b:
	issuer = pkcsCerts[i]->getIssuerDN();
	//    .local v6, "tmpCert":Ljava/security/cert/X509Certificate;
	pkcsCerts[start] = pkcsCerts[i];
	pkcsCerts[i] = pkcsCerts[start];
	start = ( start + 0x1);
	goto label_goto_57;
	// 888    .line 309
	// 889    .end local v6    # "tmpCert":Ljava/security/cert/X509Certificate;
label_cond_6c:
	i = ( i + 0x1);
	goto label_goto_30;

}
// .method public getCertificateSerialNumber()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::pkcs::SignerInfo::getCertificateSerialNumber()
{
	
	return this->certificateSerialNumber;

}
// .method public getDigestAlgorithmId()Lsun/security/x509/AlgorithmId;
std::shared_ptr<sun::security::x509::AlgorithmId> sun::security::pkcs::SignerInfo::getDigestAlgorithmId()
{
	
	return this->digestAlgorithmId;

}
// .method public getDigestEncryptionAlgorithmId()Lsun/security/x509/AlgorithmId;
std::shared_ptr<sun::security::x509::AlgorithmId> sun::security::pkcs::SignerInfo::getDigestEncryptionAlgorithmId()
{
	
	return this->digestEncryptionAlgorithmId;

}
// .method public getEncryptedDigest()[B
unsigned char sun::security::pkcs::SignerInfo::getEncryptedDigest()
{
	
	return this->encryptedDigest;

}
// .method public getIssuerName()Lsun/security/x509/X500Name;
std::shared_ptr<sun::security::x509::X500Name> sun::security::pkcs::SignerInfo::getIssuerName()
{
	
	return this->issuerName;

}
// .method public getTimestamp()Ljava/security/Timestamp;
std::shared_ptr<java::security::Timestamp> sun::security::pkcs::SignerInfo::getTimestamp()
{
	
	bool cVar0;
	std::shared_ptr<sun::security::pkcs::PKCS7> tsToken;
	std::shared_ptr<unsigned char[]> encTsTokenInfo;
	std::shared_ptr<sun::security::timestamp::TimestampToken> tsTokenInfo;
	std::shared_ptr<java::security::Timestamp> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 949        value = {
	// 950            Ljava/io/IOException;,
	// 951            Ljava/security/NoSuchAlgorithmException;,
	// 952            Ljava/security/SignatureException;,
	// 953            Ljava/security/cert/CertificateException;
	// 954        }
	// 955    .end annotation
	cVar0 = 0x0;
	if ( this->timestamp )     
		goto label_cond_c;
	if ( !(( this->hasTimestamp ^ 0x1)) )  
		goto label_cond_f;
label_cond_c:
	return this->timestamp;
	// 979    .line 581
label_cond_f:
	tsToken = this->getTsToken();
	//    .local v3, "tsToken":Lsun/security/pkcs/PKCS7;
	if ( tsToken )     
		goto label_cond_18;
	this->hasTimestamp = cVar0;
	return 0x0;
	// 995    .line 588
label_cond_18:
	encTsTokenInfo = tsToken->getContentInfo()->getData();
	//    .local v2, "encTsTokenInfo":[B
	//    .local v5, "tsa":[Lsun/security/pkcs/SignerInfo;
	//    .local v1, "chain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/security/cert/X509Certificate;>;"
	//    .local v0, "cf":Ljava/security/cert/CertificateFactory;
	//    .local v6, "tsaChain":Ljava/security/cert/CertPath;
	tsTokenInfo = std::make_shared<sun::security::timestamp::TimestampToken>(encTsTokenInfo);
	//    .local v4, "tsTokenInfo":Lsun/security/timestamp/TimestampToken;
	this->verifyTimestamp(tsTokenInfo);
	cVar1 = std::make_shared<java::security::Timestamp>(tsTokenInfo->getDate(), java::security::cert::CertificateFactory::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509")))->generateCertPath(tsToken->verify(encTsTokenInfo)[cVar0]->getCertificateChain(tsToken)));
	this->timestamp = cVar1;
	return this->timestamp;

}
// .method public getTsToken()Lsun/security/pkcs/PKCS7;
std::shared_ptr<sun::security::pkcs::PKCS7> sun::security::pkcs::SignerInfo::getTsToken()
{
	
	std::shared_ptr<sun::security::pkcs::PKCS7> cVar0;
	std::shared_ptr<sun::security::pkcs::PKCS9Attribute> tsTokenAttr;
	std::shared_ptr<sun::security::pkcs::PKCS7> cVar1;
	std::shared_ptr<unsigned char[]> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1063        value = {
	// 1064            Ljava/io/IOException;
	// 1065        }
	// 1066    .end annotation
	cVar0 = 0x0;
	if ( this->unauthenticatedAttributes )     
		goto label_cond_6;
	return cVar0;
	// 1079    .line 545
label_cond_6:
	tsTokenAttr = this->unauthenticatedAttributes->getAttribute(sun::security::pkcs::PKCS9Attribute::SIGNATURE_TIMESTAMP_TOKEN_OID);
	//    .local v0, "tsTokenAttr":Lsun/security/pkcs/PKCS9Attribute;
	if ( tsTokenAttr )     
		goto label_cond_11;
	return cVar0;
	// 1098    .line 550
label_cond_11:
	cVar2 = tsTokenAttr->getValue();
	cVar2->checkCast("unsigned char[]");
	cVar1 = std::make_shared<sun::security::pkcs::PKCS7>(cVar2);
	return cVar1;

}
// .method public getUnauthenticatedAttributes()Lsun/security/pkcs/PKCS9Attributes;
std::shared_ptr<sun::security::pkcs::PKCS9Attributes> sun::security::pkcs::SignerInfo::getUnauthenticatedAttributes()
{
	
	return this->unauthenticatedAttributes;

}
// .method public getVersion()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::pkcs::SignerInfo::getVersion()
{
	
	return this->version;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::pkcs::SignerInfo::toString()
{
	
	std::shared_ptr<sun::misc::HexDumpEncoder> hexDump;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::String> out;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	
	hexDump = std::make_shared<sun::misc::HexDumpEncoder>();
	//    .local v0, "hexDump":Lsun/misc/HexDumpEncoder;
	//    .local v1, "out":Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	out = cVar3->append(cVar2->append(cVar1->append(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signer Info for (issuer): ")))->append(this->issuerName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\tversion: ")))->append(sun::security::util::Debug::toHexString(this->version))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\tcertificateSerialNumber: ")))->append(sun::security::util::Debug::toHexString(this->certificateSerialNumber))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\tdigestAlgorithmId: ")))->append(this->digestAlgorithmId)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();
	if ( !(this->authenticatedAttributes) )  
		goto label_cond_b9;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
label_cond_b9:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	out = cVar6->append(cVar5->append(out)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\tdigestEncryptionAlgorithmId: ")))->append(this->digestEncryptionAlgorithmId)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\tencryptedDigest: \n")))->append(hexDump->encodeBuffer(this->encryptedDigest))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();
	if ( !(this->unauthenticatedAttributes) )  
		goto label_cond_124;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
label_cond_124:
	return out;

}
// .method verify(Lsun/security/pkcs/PKCS7;)Lsun/security/pkcs/SignerInfo;
std::shared_ptr<sun::security::pkcs::SignerInfo> sun::security::pkcs::SignerInfo::verify(std::shared_ptr<sun::security::pkcs::PKCS7> block)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .param p1, "block"    # Lsun/security/pkcs/PKCS7;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1443        value = {
	// 1444            Ljava/security/NoSuchAlgorithmException;,
	// 1445            Ljava/security/SignatureException;
	// 1446        }
	// 1447    .end annotation
	cVar0 = 0x0;
	cVar0->checkCast("unsigned char[]");
	return this->verify(block, cVar0);

}
// .method verify(Lsun/security/pkcs/PKCS7;Ljava/io/InputStream;)Lsun/security/pkcs/SignerInfo;
std::shared_ptr<sun::security::pkcs::SignerInfo> sun::security::pkcs::SignerInfo::verify(std::shared_ptr<sun::security::pkcs::PKCS7> block,std::shared_ptr<java::io::InputStream> inputStream)
{
	
	std::shared_ptr<java::security::SignatureException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::security::SignatureException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<sun::security::pkcs::ContentInfo> content;
	std::shared_ptr<java::io::ByteArrayInputStream> inputStream;
	auto inputStream;
	std::shared_ptr<java::lang::String> digestAlgname;
	std::shared_ptr<java::lang::String> encryptionAlgname;
	auto tmp;
	std::shared_ptr<java::lang::String> algname;
	std::shared_ptr<java::security::SignatureException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	std::shared_ptr<java::security::Key> key;
	std::shared_ptr<java::security::SignatureException> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	std::shared_ptr<java::security::SignatureException> cVar10;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<bool[]> keyUsageBits;
	std::shared_ptr<java::security::SignatureException> cVar12;
	std::shared_ptr<sun::security::x509::KeyUsageExtension> keyUsage;
	std::shared_ptr<java::security::SignatureException> cVar11;
	auto sig;
	std::shared<std::vector<unsigned char[]>> buffer;
	int read;
	std::shared_ptr<sun::security::util::ObjectIdentifier> contentType;
	std::shared_ptr<unsigned char[]> messageDigest;
	std::shared_ptr<java::security::SignatureException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::security::MessageDigest> md;
	auto computedMessageDigest;
	int i;
	std::shared_ptr<java::io::ByteArrayInputStream> dataSigned;
	
	//    .param p1, "block"    # Lsun/security/pkcs/PKCS7;
	//    .param p2, "inputStream"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1467        value = {
	// 1468            Ljava/security/NoSuchAlgorithmException;,
	// 1469            Ljava/security/SignatureException;,
	// 1470            Ljava/io/IOException;
	// 1471        }
	// 1472    .end annotation
	try {
	//label_try_start_0:
	content = block->getContentInfo();
	//    .local v7, "content":Lsun/security/pkcs/ContentInfo;
	if ( inputStream )     
		goto label_cond_15;
	var7 = inputStream(content->getContentBytes());
	//    .end local p2    # "inputStream":Ljava/io/InputStream;
	//    .local v16, "inputStream":Ljava/io/InputStream;
	inputStream = inputStream;
	//    .end local v16    # "inputStream":Ljava/io/InputStream;
	//    .restart local p2    # "inputStream":Ljava/io/InputStream;
label_cond_15:
	digestAlgname = this->getDigestAlgorithmId()->getName();
	//    .local v11, "digestAlgname":Ljava/lang/String;
	if ( this->authenticatedAttributes )     
		goto label_cond_88;
	//    .local v9, "dataSigned":Ljava/io/InputStream;
label_goto_27:
	encryptionAlgname = this->getDigestEncryptionAlgorithmId()->getName();
	//    .local v14, "encryptionAlgname":Ljava/lang/String;
	tmp = sun::security::x509::AlgorithmId::getEncAlgFromSigAlg(encryptionAlgname);
	//    .local v26, "tmp":Ljava/lang/String;
	if ( !(tmp) )  
		goto label_cond_37;
label_cond_37:
	algname = sun::security::x509::AlgorithmId::makeSigAlg(digestAlgname, encryptionAlgname);
	//    .local v3, "algname":Ljava/lang/String;
	if ( sun::security::pkcs::SignerInfo::JAR_DISABLED_CHECK->permits(sun::security::pkcs::SignerInfo::SIG_PRIMITIVE_SET, algname, 0x0) )     
		goto label_cond_171;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::SignatureException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signature check failed. Disabled algorithm used: ")))->append(algname)->toString());
	// throw
	throw cVar0;
	// 1602    :try_end_69
	// 1603    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_69} :catch_69
	// 1604    .catch Ljava/security/InvalidKeyException; {:try_start_0 .. :try_end_69} :catch_ea
	// 1606    .line 481
	// 1607    .end local v3    # "algname":Ljava/lang/String;
	// 1608    .end local v7    # "content":Lsun/security/pkcs/ContentInfo;
	// 1609    .end local v9    # "dataSigned":Ljava/io/InputStream;
	// 1610    .end local v11    # "digestAlgname":Ljava/lang/String;
	// 1611    .end local v14    # "encryptionAlgname":Ljava/lang/String;
	// 1612    .end local v26    # "tmp":Ljava/lang/String;
label_catch_69:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v12, "e":Ljava/io/IOException;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar2 = std::make_shared<java::security::SignatureException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IO error verifying signature:\n")))->append(getCatchExcetionFromList->getMessage())->toString());
	// throw
	throw cVar2;
	// 1648    .line 355
	// 1649    .end local v12    # "e":Ljava/io/IOException;
	// 1650    .restart local v7    # "content":Lsun/security/pkcs/ContentInfo;
	// 1651    .restart local v11    # "digestAlgname":Ljava/lang/String;
label_cond_88:
	try {
	//label_try_start_88:
	contentType = this->authenticatedAttributes->getAttributeValue(sun::security::pkcs::PKCS9Attribute::CONTENT_TYPE_OID);
	contentType->checkCast("sun::security::util::ObjectIdentifier");
	//    .local v8, "contentType":Lsun/security/util/ObjectIdentifier;
	if ( !(contentType) )  
		goto label_cond_a6;
	if ( !(( contentType->equals(content->contentType) ^ 0x1)) )  
		goto label_cond_a9;
label_cond_a6:
	return 0x0;
	// 1697    .line 363
label_cond_a9:
	messageDigest = this->authenticatedAttributes->getAttributeValue(sun::security::pkcs::PKCS9Attribute::MESSAGE_DIGEST_OID);
	messageDigest->checkCast("unsigned char[]");
	//    .local v22, "messageDigest":[B
	if ( messageDigest )     
		goto label_cond_bc;
	return 0x0;
	// 1725    .line 370
label_cond_bc:
	if ( sun::security::pkcs::SignerInfo::JAR_DISABLED_CHECK->permits(sun::security::pkcs::SignerInfo::DIGEST_PRIMITIVE_SET, digestAlgname, 0x0) )     
		goto label_cond_109;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::security::SignatureException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Digest check failed. Disabled algorithm used: ")))->append(digestAlgname)->toString());
	// throw
	throw cVar4;
	// 1773    :try_end_ea
	// 1774    .catch Ljava/io/IOException; {:try_start_88 .. :try_end_ea} :catch_69
	// 1775    .catch Ljava/security/InvalidKeyException; {:try_start_88 .. :try_end_ea} :catch_ea
	// 1777    .line 485
	// 1778    .end local v7    # "content":Lsun/security/pkcs/ContentInfo;
	// 1779    .end local v8    # "contentType":Lsun/security/util/ObjectIdentifier;
	// 1780    .end local v11    # "digestAlgname":Ljava/lang/String;
	// 1781    .end local v22    # "messageDigest":[B
label_catch_ea:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v13, "e":Ljava/security/InvalidKeyException;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar6 = std::make_shared<java::security::SignatureException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("InvalidKey: ")))->append(getCatchExcetionFromList->getMessage())->toString());
	// throw
	throw cVar6;
	// 1815    .line 376
	// 1816    .end local v13    # "e":Ljava/security/InvalidKeyException;
	// 1817    .restart local v7    # "content":Lsun/security/pkcs/ContentInfo;
	// 1818    .restart local v8    # "contentType":Lsun/security/util/ObjectIdentifier;
	// 1819    .restart local v11    # "digestAlgname":Ljava/lang/String;
	// 1820    .restart local v22    # "messageDigest":[B
label_cond_109:
	try {
	//label_try_start_109:
	md = java::security::MessageDigest::getInstance(digestAlgname);
	//    .local v21, "md":Ljava/security/MessageDigest;
	buffer = std::make_shared<std::vector<unsigned char[]>>(0x1000);
	//    .local v4, "buffer":[B
	0x0;
	//    .local v24, "read":I
label_goto_115:
	read = inputStream->read(buffer);
	if ( read == -0x1 )
		goto label_cond_12f;
	md->update(buffer, 0x0, read);
	goto label_goto_115;
	// 1869    .line 383
label_cond_12f:
	computedMessageDigest = md->digest();
	//    .local v6, "computedMessageDigest":[B
	if ( messageDigest->size() == computedMessageDigest->size() )
		goto label_cond_144;
	return 0x0;
	// 1898    .line 387
label_cond_144:
	i = 0x0;
	//    .local v15, "i":I
label_goto_145:
	if ( i >= messageDigest->size() )
		goto label_cond_15e;
	if ( messageDigest[i] == computedMessageDigest[i] )
		goto label_cond_15b;
	return 0x0;
	// 1930    .line 387
label_cond_15b:
	i = ( i + 0x1);
	goto label_goto_145;
	// 1936    .line 398
label_cond_15e:
	dataSigned = std::make_shared<java::io::ByteArrayInputStream>(this->authenticatedAttributes->getDerEncoding());
	//    .restart local v9    # "dataSigned":Ljava/io/InputStream;
	goto label_goto_27;
	// 1957    .line 419
	// 1958    .end local v4    # "buffer":[B
	// 1959    .end local v6    # "computedMessageDigest":[B
	// 1960    .end local v8    # "contentType":Lsun/security/util/ObjectIdentifier;
	// 1961    .end local v15    # "i":I
	// 1962    .end local v21    # "md":Ljava/security/MessageDigest;
	// 1963    .end local v22    # "messageDigest":[B
	// 1964    .end local v24    # "read":I
	// 1965    .restart local v3    # "algname":Ljava/lang/String;
	// 1966    .restart local v14    # "encryptionAlgname":Ljava/lang/String;
	// 1967    .restart local v26    # "tmp":Ljava/lang/String;
label_cond_171:
	cert = this->getCertificate(block);
	//    .local v5, "cert":Ljava/security/cert/X509Certificate;
	key = cert->getPublicKey();
	//    .local v18, "key":Ljava/security/PublicKey;
	if ( cert )     
		goto label_cond_17e;
	return 0x0;
	// 1988    .line 426
label_cond_17e:
	if ( sun::security::pkcs::SignerInfo::JAR_DISABLED_CHECK->permits(sun::security::pkcs::SignerInfo::SIG_PRIMITIVE_SET, key) )     
		goto label_cond_1bb;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<java::security::SignatureException>(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Public key check failed. Disabled key used: ")))->append(sun::security::util::KeyUtil::getKeySize(key))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" bit ")))->append(key->getAlgorithm())->toString());
	// throw
	throw cVar8;
	// 2055    .line 433
label_cond_1bb:
	if ( !(cert->hasUnsupportedCriticalExtension()) )  
		goto label_cond_1ca;
	cVar10 = std::make_shared<java::security::SignatureException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Certificate has unsupported critical extension(s)")));
	// throw
	throw cVar10;
	// 2072    .line 442
label_cond_1ca:
	//label_try_end_1cd:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_69;
	}
	catch (java::security::InvalidKeyException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ea;
	}
	//    .catch Ljava/io/IOException; {:try_start_109 .. :try_end_1cd} :catch_69
	//    .catch Ljava/security/InvalidKeyException; {:try_start_109 .. :try_end_1cd} :catch_ea
	keyUsageBits = cert->getKeyUsage();
	//    .local v20, "keyUsageBits":[Z
	if ( !(keyUsageBits) )  
		goto label_cond_20c;
	try {
	//label_try_start_1d0:
	keyUsage = std::make_shared<sun::security::x509::KeyUsageExtension>(keyUsageBits);
	//label_try_end_1d5:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_202;
	}
	catch (java::security::InvalidKeyException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ea;
	}
	//    .catch Ljava/io/IOException; {:try_start_1d0 .. :try_end_1d5} :catch_202
	//    .catch Ljava/security/InvalidKeyException; {:try_start_1d0 .. :try_end_1d5} :catch_ea
	//    .local v19, "keyUsage":Lsun/security/x509/KeyUsageExtension;
	try {
	//label_try_start_1d5:
	//    .local v10, "digSigAllowed":Z
	//    .local v23, "nonRepuAllowed":Z
	if ( keyUsage->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital_signature")))->booleanValue() )     
		goto label_cond_20c;
	if ( !(( keyUsage->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("non_repudiation")))->booleanValue() ^ 0x1)) )  
		goto label_cond_20c;
	cVar11 = std::make_shared<java::security::SignatureException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Key usage restricted: cannot be used for digital signatures")));
	// throw
	throw cVar11;
	// 2146    .line 451
	// 2147    .end local v10    # "digSigAllowed":Z
	// 2148    .end local v19    # "keyUsage":Lsun/security/x509/KeyUsageExtension;
	// 2149    .end local v23    # "nonRepuAllowed":Z
label_catch_202:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v17, "ioe":Ljava/io/IOException;
	cVar12 = std::make_shared<java::security::SignatureException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Failed to parse keyUsage extension")));
	// throw
	throw cVar12;
	// 2163    .line 469
	// 2164    .end local v17    # "ioe":Ljava/io/IOException;
label_cond_20c:
	sig = java::security::Signature::getInstance(algname);
	//    .local v25, "sig":Ljava/security/Signature;
	sig->initVerify(key);
	buffer = std::make_shared<std::vector<unsigned char[]>>(0x1000);
	//    .restart local v4    # "buffer":[B
	0x0;
	//    .restart local v24    # "read":I
label_goto_21f:
	read = dataSigned->read(buffer);
	if ( read == -0x1 )
		goto label_cond_237;
	sig->update(buffer, 0x0, read);
	goto label_goto_21f;
	// 2217    .line 477
label_cond_237:
	//label_try_end_244:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_69;
	}
	catch (java::security::InvalidKeyException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ea;
	}
	//    .catch Ljava/io/IOException; {:try_start_1d5 .. :try_end_244} :catch_69
	//    .catch Ljava/security/InvalidKeyException; {:try_start_1d5 .. :try_end_244} :catch_ea
	if ( !(sig->verify(this->encryptedDigest)) )  
		goto label_cond_248;
	return this;
	// 2241    .line 489
label_cond_248:
	return 0x0;

}
// .method verify(Lsun/security/pkcs/PKCS7;[B)Lsun/security/pkcs/SignerInfo;
std::shared_ptr<sun::security::pkcs::SignerInfo> sun::security::pkcs::SignerInfo::verify(std::shared_ptr<sun::security::pkcs::PKCS7> block,std::shared_ptr<unsigned char[]> data)
{
	
	std::shared_ptr<java::io::ByteArrayInputStream> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "block"    # Lsun/security/pkcs/PKCS7;
	//    .param p2, "data"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 2253        value = {
	// 2254            Ljava/security/NoSuchAlgorithmException;,
	// 2255            Ljava/security/SignatureException;
	// 2256        }
	// 2257    .end annotation
	try {
	//label_try_start_0:
	cVar0 = std::make_shared<java::io::ByteArrayInputStream>(data);
	//label_try_end_8:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_8} :catch_a
	return this->verify(block, cVar0);
	// 2274    .line 325
label_catch_a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	return 0x0;

}


