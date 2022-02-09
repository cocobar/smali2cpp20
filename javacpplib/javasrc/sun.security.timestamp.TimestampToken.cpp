// CPP L:\smali2cpp20\x64\Release\out\sun\security\timestamp\TimestampToken.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.util.Date.h"
#include "sun.security.timestamp.TimestampToken.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AlgorithmId.h"

// .method public constructor <init>([B)V
sun::security::timestamp::TimestampToken::TimestampToken(std::shared_ptr<unsigned char[]> timestampTokenInfo)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "timestampTokenInfo"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 027        value = {
	// 028            Ljava/io/IOException;
	// 029        }
	// 030    .end annotation
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( timestampTokenInfo )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No timestamp token info")));
	// throw
	throw cVar0;
	// 048    .line 93
label_cond_e:
	this->parse(timestampTokenInfo);
	return;

}
// .method private parse([B)V
void sun::security::timestamp::TimestampToken::parse(std::shared_ptr<unsigned char[]> timestampTokenInfo)
{
	
	std::shared_ptr<sun::security::util::DerValue> tstInfo;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<sun::security::util::DerInputStream> messageImprint;
	unsigned char d;
	
	//    .param p1, "timestampTokenInfo"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 060        value = {
	// 061            Ljava/io/IOException;
	// 062        }
	// 063    .end annotation
	tstInfo = std::make_shared<sun::security::util::DerValue>(timestampTokenInfo);
	//    .local v2, "tstInfo":Lsun/security/util/DerValue;
	if ( tstInfo->tag == 0x30 )
		goto label_cond_14;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad encoding for timestamp token info")));
	// throw
	throw cVar0;
	// 088    .line 141
label_cond_14:
	this->version = tstInfo->data->getInteger();
	this->policy = tstInfo->data->getOID();
	messageImprint = tstInfo->data->getDerValue();
	//    .local v1, "messageImprint":Lsun/security/util/DerValue;
	this->hashAlgorithm = sun::security::x509::AlgorithmId::parse(messageImprint->data->getDerValue());
	this->hashedMessage = messageImprint->data->getOctetString();
	this->serialNumber = tstInfo->data->getBigInteger();
	this->genTime = tstInfo->data->getGeneralizedTime();
label_cond_4e:
	if ( tstInfo->data->available() <= 0 )
		goto label_cond_67;
	d = tstInfo->data->getDerValue();
	//    .local v0, "d":Lsun/security/util/DerValue;
	if ( d->tag != 0x2 )
		goto label_cond_4e;
	this->nonce = d->getBigInteger();
	//    .end local v0    # "d":Lsun/security/util/DerValue;
label_cond_67:
	return;

}
// .method public getDate()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::timestamp::TimestampToken::getDate()
{
	
	return this->genTime;

}
// .method public getHashAlgorithm()Lsun/security/x509/AlgorithmId;
std::shared_ptr<sun::security::x509::AlgorithmId> sun::security::timestamp::TimestampToken::getHashAlgorithm()
{
	
	return this->hashAlgorithm;

}
// .method public getHashedMessage()[B
unsigned char sun::security::timestamp::TimestampToken::getHashedMessage()
{
	
	return this->hashedMessage;

}
// .method public getNonce()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::timestamp::TimestampToken::getNonce()
{
	
	return this->nonce;

}
// .method public getPolicyID()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::timestamp::TimestampToken::getPolicyID()
{
	
	return this->policy->toString();

}
// .method public getSerialNumber()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::timestamp::TimestampToken::getSerialNumber()
{
	
	return this->serialNumber;

}


