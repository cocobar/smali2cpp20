#ifndef __sun_security_x509_X509Key__
#define __sun_security_x509_X509Key__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\X509Key.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.PublicKey.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.AlgorithmId.h"

namespace sun::security::x509{
class X509Key : public java::security::PublicKey {
protected:
	std::shared_ptr<sun::security::x509::AlgorithmId> algid;
	std::shared_ptr<unsigned char[]> encodedKey;
	std::shared_ptr<unsigned char[]> key;
	std::shared_ptr<sun::security::util::BitArray> virtual getKey();
	void virtual parseKeyBits();
	void virtual setKey(std::shared_ptr<sun::security::util::BitArray> key);
private:
	static long long serialVersionUID;
	std::shared_ptr<sun::security::util::BitArray> bitStringKey;
	int unusedBits;
	X509Key(std::shared_ptr<sun::security::x509::AlgorithmId> algid,std::shared_ptr<sun::security::util::BitArray> key);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> stream);
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> stream);
public:
	X509Key();
	static std::shared_ptr<java::security::PublicKey> buildX509Key(std::shared_ptr<sun::security::x509::AlgorithmId> algid,std::shared_ptr<sun::security::util::BitArray> key);
	static void encode(std::shared_ptr<sun::security::util::DerOutputStream> out,std::shared_ptr<sun::security::x509::AlgorithmId> algid,std::shared_ptr<sun::security::util::BitArray> key);
	static std::shared_ptr<java::security::PublicKey> parse(std::shared_ptr<sun::security::util::DerValue> in);
	void virtual decode(std::shared_ptr<java::io::InputStream> in);
	void virtual decode(std::shared_ptr<unsigned char[]> encodedKey);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	unsigned char virtual encode();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual getAlgorithm();
	std::shared_ptr<sun::security::x509::AlgorithmId> virtual getAlgorithmId();
	unsigned char virtual getEncoded();
	unsigned char virtual getEncodedInternal();
	std::shared_ptr<java::lang::String> virtual getFormat();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~X509Key(){
	}

}; // class X509Key
}; // namespace sun::security::x509

#endif //__sun_security_x509_X509Key__

