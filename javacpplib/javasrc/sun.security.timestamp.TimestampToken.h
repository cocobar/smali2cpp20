#ifndef __sun_security_timestamp_TimestampToken__
#define __sun_security_timestamp_TimestampToken__
// H L:\smali2cpp20\x64\Release\out\sun\security\timestamp\TimestampToken.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.util.Date.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AlgorithmId.h"

namespace sun::security::timestamp{
class TimestampToken : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::Date> genTime;
	std::shared_ptr<sun::security::x509::AlgorithmId> hashAlgorithm;
	std::shared_ptr<unsigned char[]> hashedMessage;
	std::shared_ptr<java::math::BigInteger> nonce;
	std::shared_ptr<sun::security::util::ObjectIdentifier> policy;
	std::shared_ptr<java::math::BigInteger> serialNumber;
	int version;
	void virtual parse(std::shared_ptr<unsigned char[]> timestampTokenInfo);
public:
	TimestampToken(std::shared_ptr<unsigned char[]> timestampTokenInfo);
	std::shared_ptr<java::util::Date> virtual getDate();
	std::shared_ptr<sun::security::x509::AlgorithmId> virtual getHashAlgorithm();
	unsigned char virtual getHashedMessage();
	std::shared_ptr<java::math::BigInteger> virtual getNonce();
	std::shared_ptr<java::lang::String> virtual getPolicyID();
	std::shared_ptr<java::math::BigInteger> virtual getSerialNumber();
public:
	virtual ~TimestampToken(){
	}

}; // class TimestampToken
}; // namespace sun::security::timestamp

#endif //__sun_security_timestamp_TimestampToken__

