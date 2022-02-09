#ifndef __sun_security_x509_KeyUsageExtension__
#define __sun_security_x509_KeyUsageExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\KeyUsageExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class KeyUsageExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	std::shared_ptr<bool[]> bitString;
	void virtual encodeThis();
	bool virtual isSet(int position);
	void virtual set(int position,bool val);
public:
	static std::shared_ptr<java::lang::String> CRL_SIGN;
	static std::shared_ptr<java::lang::String> DATA_ENCIPHERMENT;
	static std::shared_ptr<java::lang::String> DECIPHER_ONLY;
	static std::shared_ptr<java::lang::String> DIGITAL_SIGNATURE;
	static std::shared_ptr<java::lang::String> ENCIPHER_ONLY;
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> KEY_AGREEMENT;
	static std::shared_ptr<java::lang::String> KEY_CERTSIGN;
	static std::shared_ptr<java::lang::String> KEY_ENCIPHERMENT;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> NON_REPUDIATION;
	KeyUsageExtension();
	KeyUsageExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	KeyUsageExtension(std::shared_ptr<sun::security::util::BitArray> bitString);
	KeyUsageExtension(std::shared_ptr<unsigned char[]> bitString);
	KeyUsageExtension(std::shared_ptr<bool[]> bitString);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::lang::Boolean> virtual get(std::shared_ptr<java::lang::String> name);
	bool virtual getBits();
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~KeyUsageExtension(){
	}

}; // class KeyUsageExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_KeyUsageExtension__

