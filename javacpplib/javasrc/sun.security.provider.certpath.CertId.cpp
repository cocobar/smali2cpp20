// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\CertId.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.math.BigInteger.h"
#include "java.security.MessageDigest.h"
#include "java.security.NoSuchAlgorithmException.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Arrays.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.provider.certpath.CertId.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.SerialNumber.h"

static sun::security::provider::certpath::CertId::SHA1_ALGID;
static sun::security::provider::certpath::CertId::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::CertId::static_cinit()
{
	
	std::shared_ptr<sun::security::x509::AlgorithmId> cVar0;
	
	cVar0 = std::make_shared<sun::security::x509::AlgorithmId>(sun::security::x509::AlgorithmId::SHA_oid);
	sun::security::provider::certpath::CertId::SHA1_ALGID = cVar0;
	return;

}
// .method public constructor <init>(Ljava/security/cert/X509Certificate;Lsun/security/x509/SerialNumber;)V
sun::security::provider::certpath::CertId::CertId(std::shared_ptr<java::security::cert::X509Certificate> issuerCert,std::shared_ptr<sun::security::x509::SerialNumber> serialNumber)
{
	
	//    .param p1, "issuerCert"    # Ljava/security/cert/X509Certificate;
	//    .param p2, "serialNumber"    # Lsun/security/x509/SerialNumber;
	//    .annotation system Ldalvik/annotation/Throws;
	// 048        value = {
	// 049            Ljava/io/IOException;
	// 050        }
	// 051    .end annotation
	sun::security::provider::certpath::CertId::(issuerCert->getSubjectX500Principal(), issuerCert->getPublicKey(), serialNumber);
	return;

}
// .method public constructor <init>(Ljavax/security/auth/x500/X500Principal;Ljava/security/PublicKey;Lsun/security/x509/SerialNumber;)V
sun::security::provider::certpath::CertId::CertId(std::shared_ptr<javax::security::auth::x500::X500Principal> issuerName,std::shared_ptr<java::security::PublicKey> issuerKey,std::shared_ptr<sun::security::x509::SerialNumber> serialNumber)
{
	
	int cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::MessageDigest> md;
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared<std::vector<std::vector<sun::security::util::DerValue>>> seq;
	
	//    .param p1, "issuerName"    # Ljavax/security/auth/x500/X500Principal;
	//    .param p2, "issuerKey"    # Ljava/security/PublicKey;
	//    .param p3, "serialNumber"    # Lsun/security/x509/SerialNumber;
	//    .annotation system Ldalvik/annotation/Throws;
	// 077        value = {
	// 078            Ljava/io/IOException;
	// 079        }
	// 080    .end annotation
	cVar0 = 0x1;
	// 086    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->myhash = -0x1;
	0x0;
	//    .local v1, "md":Ljava/security/MessageDigest;
	try {
	//label_try_start_8:
	//label_try_end_e:
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4f;
	}
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_8 .. :try_end_e} :catch_4f
	md = java::security::MessageDigest::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1")));
	//    .local v1, "md":Ljava/security/MessageDigest;
	this->hashAlgId = sun::security::provider::certpath::CertId::SHA1_ALGID;
	md->update(issuerName->getEncoded());
	this->issuerNameHash = md->digest();
	//    .local v3, "pubKey":[B
	val = std::make_shared<sun::security::util::DerValue>(issuerKey->getEncoded());
	//    .local v5, "val":Lsun/security/util/DerValue;
	seq = std::make_shared<std::vector<std::vector<sun::security::util::DerValue>>>(0x2);
	//    .local v4, "seq":[Lsun/security/util/DerValue;
	seq[0x0] = val->data->getDerValue();
	seq[cVar0] = val->data->getDerValue();
	//    .local v0, "keyBytes":[B
	md->update(seq[cVar0]->getBitString());
	this->issuerKeyHash = md->digest();
	this->certSerialNumber = serialNumber;
	return;
	// 189    .line 86
	// 190    .end local v0    # "keyBytes":[B
	// 191    .end local v3    # "pubKey":[B
	// 192    .end local v4    # "seq":[Lsun/security/util/DerValue;
	// 193    .end local v5    # "val":Lsun/security/util/DerValue;
	// 194    .local v1, "md":Ljava/security/MessageDigest;
label_catch_4f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "nsae":Ljava/security/NoSuchAlgorithmException;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to create CertId")), getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::provider::certpath::CertId::CertId(std::shared_ptr<sun::security::util::DerInputStream> derIn)
{
	
	std::shared_ptr<sun::security::x509::SerialNumber> cVar0;
	
	//    .param p1, "derIn"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 213        value = {
	// 214            Ljava/io/IOException;
	// 215        }
	// 216    .end annotation
	// 220    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->myhash = -0x1;
	this->hashAlgId = sun::security::x509::AlgorithmId::parse(derIn->getDerValue());
	this->issuerNameHash = derIn->getOctetString();
	this->issuerKeyHash = derIn->getOctetString();
	cVar0 = std::make_shared<sun::security::x509::SerialNumber>(derIn);
	this->certSerialNumber = cVar0;
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::provider::certpath::CertId::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 269        value = {
	// 270            Ljava/io/IOException;
	// 271        }
	// 272    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	this->hashAlgId->encode(tmp);
	tmp->putOctetString(this->issuerNameHash);
	tmp->putOctetString(this->issuerKeyHash);
	this->certSerialNumber->encode(tmp);
	out->write(0x30, tmp);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::provider::certpath::CertId::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<sun::security::provider::certpath::CertId> that;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 325    .line 205
label_cond_5:
	if ( !(other) )  
		goto label_cond_d;
	if ( !(( other->instanceOf("sun::security::provider::certpath::CertId") ^ 0x1)) )  
		goto label_cond_e;
label_cond_d:
	return cVar1;
label_cond_e:
	that = other;
	that->checkCast("sun::security::provider::certpath::CertId");
	//    .local v0, "that":Lsun/security/provider/certpath/CertId;
	if ( !(this->hashAlgId->equals(that->getHashAlgorithm())) )  
		goto label_cond_46;
	if ( !(java::util::Arrays::equals(this->issuerNameHash, that->getIssuerNameHash())) )  
		goto label_cond_46;
	if ( !(java::util::Arrays::equals(this->issuerKeyHash, that->getIssuerKeyHash())) )  
		goto label_cond_46;
	if ( !(this->certSerialNumber->getNumber()->equals(that->getSerialNumber())) )  
		goto label_cond_46;
	return cVar0;
	// 408    .line 216
label_cond_46:
	return cVar1;

}
// .method public getHashAlgorithm()Lsun/security/x509/AlgorithmId;
std::shared_ptr<sun::security::x509::AlgorithmId> sun::security::provider::certpath::CertId::getHashAlgorithm()
{
	
	return this->hashAlgId;

}
// .method public getIssuerKeyHash()[B
unsigned char sun::security::provider::certpath::CertId::getIssuerKeyHash()
{
	
	return this->issuerKeyHash;

}
// .method public getIssuerNameHash()[B
unsigned char sun::security::provider::certpath::CertId::getIssuerNameHash()
{
	
	return this->issuerNameHash;

}
// .method public getSerialNumber()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::provider::certpath::CertId::getSerialNumber()
{
	
	return this->certSerialNumber->getNumber();

}
// .method public hashCode()I
int sun::security::provider::certpath::CertId::hashCode()
{
	
	int i;
	
	if ( this->myhash != -0x1 )
		goto label_cond_42;
	this->myhash = this->hashAlgId->hashCode();
	i = 0x0;
	//    .local v0, "i":I
label_goto_e:
	if ( i >= this->issuerNameHash->size() )
		goto label_cond_20;
	this->myhash = (this->myhash +  (this->issuerNameHash[i] *  i));
	i = ( i + 0x1);
	goto label_goto_e;
	// 506    .line 184
label_cond_20:
	i = 0x0;
label_goto_21:
	if ( i >= this->issuerKeyHash->size() )
		goto label_cond_33;
	this->myhash = (this->myhash +  (this->issuerKeyHash[i] *  i));
	i = ( i + 0x1);
	goto label_goto_21;
	// 535    .line 187
label_cond_33:
	this->myhash = (this->myhash +  this->certSerialNumber->getNumber()->hashCode());
	//    .end local v0    # "i":I
label_cond_42:
	return this->myhash;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::CertId::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<sun::misc::HexDumpEncoder> encoder;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "sb":Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertId \n")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Algorithm: ")))->append(this->hashAlgId->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuerNameHash \n")));
	encoder = std::make_shared<sun::misc::HexDumpEncoder>();
	//    .local v0, "encoder":Lsun/misc/HexDumpEncoder;
	sb->append(encoder->encode(this->issuerNameHash));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nissuerKeyHash: \n")));
	sb->append(encoder->encode(this->issuerKeyHash));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->append(this->certSerialNumber->toString());
	return sb->toString();

}


