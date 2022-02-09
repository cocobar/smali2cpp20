#ifndef __sun_security_pkcs_PKCS8Key__
#define __sun_security_pkcs_PKCS8Key__
// H L:\smali2cpp20\x64\Release\out\sun\security\pkcs\PKCS8Key.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.security.PrivateKey.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.AlgorithmId.h"

namespace sun::security::pkcs{
class PKCS8Key : public java::security::PrivateKey {
protected:
	std::shared_ptr<sun::security::x509::AlgorithmId> algid;
	std::shared_ptr<unsigned char[]> encodedKey;
	std::shared_ptr<unsigned char[]> key;
	void virtual parseKeyBits();
	std::shared_ptr<java::lang::Object> virtual writeReplace();
private:
	static long long serialVersionUID;
	PKCS8Key(std::shared_ptr<sun::security::x509::AlgorithmId> algid,std::shared_ptr<unsigned char[]> key);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> stream);
public:
	static std::shared_ptr<java::math::BigInteger> version;
	static void static_cinit();
	PKCS8Key();
	static std::shared_ptr<java::security::PrivateKey> buildPKCS8Key(std::shared_ptr<sun::security::x509::AlgorithmId> algid,std::shared_ptr<unsigned char[]> key);
	static void encode(std::shared_ptr<sun::security::util::DerOutputStream> out,std::shared_ptr<sun::security::x509::AlgorithmId> algid,std::shared_ptr<unsigned char[]> key);
	static std::shared_ptr<sun::security::pkcs::PKCS8Key> parse(std::shared_ptr<sun::security::util::DerValue> in);
	static std::shared_ptr<java::security::PrivateKey> parseKey(std::shared_ptr<sun::security::util::DerValue> in);
	void virtual decode(std::shared_ptr<java::io::InputStream> in);
	void virtual decode(std::shared_ptr<unsigned char[]> encodedKey);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	unsigned char virtual encode();
	bool virtual equals(std::shared_ptr<java::lang::Object> object);
	std::shared_ptr<java::lang::String> virtual getAlgorithm();
	std::shared_ptr<sun::security::x509::AlgorithmId> virtual getAlgorithmId();
	unsigned char virtual getEncoded();
	std::shared_ptr<java::lang::String> virtual getFormat();
	int virtual hashCode();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::pkcs::PKCS8Key::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PKCS8Key(){
	}

}; // class PKCS8Key
}; // namespace sun::security::pkcs

#endif //__sun_security_pkcs_PKCS8Key__

