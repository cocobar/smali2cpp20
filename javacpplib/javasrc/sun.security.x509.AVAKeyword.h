#ifndef __sun_security_x509_AVAKeyword__
#define __sun_security_x509_AVAKeyword__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\AVAKeyword.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"
#include "sun.security.util.ObjectIdentifier.h"

namespace sun::security::x509{
class AVAKeyword : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::util::Map<java::lang::String,sun::security::x509::AVAKeyword>> keywordMap;
	static std::shared_ptr<java::util::Map<sun::security::util::ObjectIdentifier,sun::security::x509::AVAKeyword>> oidMap;
	std::shared_ptr<java::lang::String> keyword;
	std::shared_ptr<sun::security::util::ObjectIdentifier> oid;
	bool rfc1779Compliant;
	bool rfc2253Compliant;
	AVAKeyword(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<sun::security::util::ObjectIdentifier> oid,bool rfc1779Compliant,bool rfc2253Compliant);
	bool virtual isCompliant(int standard);
public:
	static void static_cinit();
	static std::shared_ptr<java::lang::String> getKeyword(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,int standard);
	static std::shared_ptr<java::lang::String> getKeyword(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,int standard,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> extraOidMap);
	static std::shared_ptr<sun::security::util::ObjectIdentifier> getOID(std::shared_ptr<java::lang::String> keyword,int standard,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> extraKeywordMap);
	static bool hasKeyword(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,int standard);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::AVAKeyword::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~AVAKeyword(){
	}

}; // class AVAKeyword
}; // namespace sun::security::x509

#endif //__sun_security_x509_AVAKeyword__

