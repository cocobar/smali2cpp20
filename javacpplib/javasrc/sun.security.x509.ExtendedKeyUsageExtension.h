#ifndef __sun_security_x509_ExtendedKeyUsageExtension__
#define __sun_security_x509_ExtendedKeyUsageExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\ExtendedKeyUsageExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Vector.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class ExtendedKeyUsageExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	static std::shared_ptr<int[]> OCSPSigningOidData;
	static std::shared_ptr<int[]> anyExtendedKeyUsageOidData;
	static std::shared_ptr<int[]> clientAuthOidData;
	static std::shared_ptr<int[]> codeSigningOidData;
	static std::shared_ptr<int[]> emailProtectionOidData;
	static std::shared_ptr<int[]> ipsecEndSystemOidData;
	static std::shared_ptr<int[]> ipsecTunnelOidData;
	static std::shared_ptr<int[]> ipsecUserOidData;
	static std::shared_ptr<java::util::Map<sun::security::util::ObjectIdentifier,java::lang::String>> map;
	static std::shared_ptr<int[]> serverAuthOidData;
	static std::shared_ptr<int[]> timeStampingOidData;
	std::shared_ptr<java::util::Vector<sun::security::util::ObjectIdentifier>> keyUsages;
	void virtual encodeThis();
public:
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> USAGES;
	static void static_cinit();
	ExtendedKeyUsageExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	ExtendedKeyUsageExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::util::Vector<sun::security::util::ObjectIdentifier>> keyUsages);
	ExtendedKeyUsageExtension(std::shared_ptr<java::util::Vector<sun::security::util::ObjectIdentifier>> keyUsages);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::util::Vector<sun::security::util::ObjectIdentifier>> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::util::List<java::lang::String>> virtual getExtendedKeyUsage();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::ExtendedKeyUsageExtension::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ExtendedKeyUsageExtension(){
	}

}; // class ExtendedKeyUsageExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_ExtendedKeyUsageExtension__

