#ifndef __sun_security_x509_AlgorithmId__
#define __sun_security_x509_AlgorithmId__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\AlgorithmId.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.io.Serializable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.AlgorithmParameters.h"
#include "java.util.Map.h"
#include "sun.security.util.DerEncoder.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"

namespace sun::security::x509{
class AlgorithmId : public java::io::Serializable, public sun::security::util::DerEncoder {
protected:
	std::shared_ptr<sun::security::util::DerValue> params;
	void virtual decodeParams();
	std::shared_ptr<java::lang::String> virtual paramsToString();
private:
	static std::shared_ptr<int[]> DH_PKIX_data;
	static std::shared_ptr<int[]> DH_data;
	static std::shared_ptr<int[]> DSA_OIW_data;
	static std::shared_ptr<int[]> DSA_PKIX_data;
	static std::shared_ptr<int[]> RSAEncryption_data;
	static std::shared_ptr<int[]> RSA_data;
	static std::shared_ptr<int[]> dsaWithSHA1_PKIX_data;
	static int initOidTableVersion;
	static std::shared_ptr<int[]> md2WithRSAEncryption_data;
	static std::shared_ptr<int[]> md5WithRSAEncryption_data;
	static std::shared_ptr<java::util::Map<sun::security::util::ObjectIdentifier,java::lang::String>> nameTable;
	static std::shared_ptr<java::util::Map<java::lang::String,sun::security::util::ObjectIdentifier>> oidTable;
	static long long serialVersionUID;
	static std::shared_ptr<int[]> sha1WithDSA_OIW_data;
	static std::shared_ptr<int[]> sha1WithRSAEncryption_OIW_data;
	static std::shared_ptr<int[]> sha1WithRSAEncryption_data;
	static std::shared_ptr<int[]> sha224WithRSAEncryption_data;
	static std::shared_ptr<int[]> sha256WithRSAEncryption_data;
	static std::shared_ptr<int[]> sha384WithRSAEncryption_data;
	static std::shared_ptr<int[]> sha512WithRSAEncryption_data;
	static std::shared_ptr<int[]> shaWithDSA_OIW_data;
	std::shared_ptr<java::security::AlgorithmParameters> algParams;
	std::shared_ptr<sun::security::util::ObjectIdentifier> algid;
	bool constructedFromDer;
	AlgorithmId(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<sun::security::util::DerValue> params);
	static std::shared_ptr<sun::security::util::ObjectIdentifier> algOID(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<sun::security::util::ObjectIdentifier> oid(std::shared_ptr<int[]> values);
	static void reinitializeMappingTableLocked();
public:
	static std::shared_ptr<sun::security::util::ObjectIdentifier> AES_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> DH_PKIX_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> DH_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> DSA_OIW_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> DSA_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> ECDH_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> EC_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> MD2_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> MD5_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> RSAEncryption_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> RSA_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SHA224_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SHA256_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SHA384_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SHA512_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SHA_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> md2WithRSAEncryption_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> md5WithRSAEncryption_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> pbeWithMD5AndDES_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> pbeWithMD5AndRC2_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> pbeWithSHA1AndDES_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> pbeWithSHA1AndDESede_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> pbeWithSHA1AndRC2_40_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> pbeWithSHA1AndRC2_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> sha1WithDSA_OIW_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> sha1WithDSA_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> sha1WithECDSA_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> sha1WithRSAEncryption_OIW_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> sha1WithRSAEncryption_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> sha224WithDSA_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> sha224WithECDSA_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> sha224WithRSAEncryption_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> sha256WithDSA_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> sha256WithECDSA_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> sha256WithRSAEncryption_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> sha384WithECDSA_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> sha384WithRSAEncryption_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> sha512WithECDSA_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> sha512WithRSAEncryption_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> shaWithDSA_OIW_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> specifiedWithECDSA_oid;
	static void static_cinit();
	AlgorithmId();
	AlgorithmId(std::shared_ptr<sun::security::util::ObjectIdentifier> oid);
	AlgorithmId(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<java::security::AlgorithmParameters> algparams);
	static std::shared_ptr<sun::security::x509::AlgorithmId> get(std::shared_ptr<java::lang::String> algname);
	static std::shared_ptr<sun::security::x509::AlgorithmId> get(std::shared_ptr<java::security::AlgorithmParameters> algparams);
	static std::shared_ptr<sun::security::x509::AlgorithmId> getAlgorithmId(std::shared_ptr<java::lang::String> algname);
	static std::shared_ptr<java::lang::String> getDigAlgFromSigAlg(std::shared_ptr<java::lang::String> signatureAlgorithm);
	static std::shared_ptr<java::lang::String> getEncAlgFromSigAlg(std::shared_ptr<java::lang::String> signatureAlgorithm);
	static std::shared_ptr<java::lang::String> makeSigAlg(std::shared_ptr<java::lang::String> digAlg,std::shared_ptr<java::lang::String> cVar0);
	static std::shared_ptr<sun::security::x509::AlgorithmId> parse(std::shared_ptr<sun::security::util::DerValue> val);
	void virtual derEncode(std::shared_ptr<java::io::OutputStream> out);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	unsigned char virtual encode();
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	bool virtual equals(std::shared_ptr<sun::security::util::ObjectIdentifier> id);
	bool virtual equals(std::shared_ptr<sun::security::x509::AlgorithmId> other);
	unsigned char virtual getEncodedParams();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<sun::security::util::ObjectIdentifier> virtual getOID();
	std::shared_ptr<java::security::AlgorithmParameters> virtual getParameters();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::AlgorithmId::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~AlgorithmId(){
	}

}; // class AlgorithmId
}; // namespace sun::security::x509

#endif //__sun_security_x509_AlgorithmId__

