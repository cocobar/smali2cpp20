#ifndef __sun_security_x509_RDN__
#define __sun_security_x509_RDN__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\RDN.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AVA.h"

namespace sun::security::x509{
class RDN : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::List<sun::security::x509::AVA>> avaList;
	std::shared_ptr<java::lang::String> canonicalString;
	std::shared_ptr<java::lang::String> virtual toRFC2253StringInternal(bool canonical,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap);
public:
	std::shared_ptr<std::vector<sun::security::x509::AVA>> assertion;
	RDN(int i);
	RDN(std::shared_ptr<java::lang::String> name);
	RDN(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> format);
	RDN(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> format,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> keywordMap);
	RDN(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> keywordMap);
	RDN(std::shared_ptr<sun::security::util::DerValue> rdn);
	RDN(std::shared_ptr<sun::security::x509::AVA> ava);
	RDN(std::shared_ptr<std::vector<sun::security::x509::AVA>> avas);
	std::shared_ptr<java::util::List<sun::security::x509::AVA>> virtual avas();
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<sun::security::util::DerValue> virtual findAttribute(std::shared_ptr<sun::security::util::ObjectIdentifier> oid);
	int virtual hashCode();
	int virtual size();
	std::shared_ptr<java::lang::String> virtual toRFC1779String();
	std::shared_ptr<java::lang::String> virtual toRFC1779String(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap);
	std::shared_ptr<java::lang::String> virtual toRFC2253String();
	std::shared_ptr<java::lang::String> virtual toRFC2253String(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap);
	std::shared_ptr<java::lang::String> virtual toRFC2253String(bool canonical);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~RDN(){
	}

}; // class RDN
}; // namespace sun::security::x509

#endif //__sun_security_x509_RDN__

