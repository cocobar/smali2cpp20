#ifndef __sun_security_x509_NetscapeCertTypeExtension__
#define __sun_security_x509_NetscapeCertTypeExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\NetscapeCertTypeExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "java.util.Vector.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.NetscapeCertTypeExtension_S_MapEntry.h"

namespace sun::security::x509{
class NetscapeCertTypeExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	static std::shared_ptr<int[]> CertType_data;
	static std::shared_ptr<java::util::Vector<java::lang::String>> mAttributeNames;
	static std::shared_ptr<std::vector<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry>> mMapData;
	std::shared_ptr<bool[]> bitString;
	void virtual encodeThis();
	static int getPosition(std::shared_ptr<java::lang::String> name);
	bool virtual isSet(int position);
	void virtual set(int position,bool val);
public:
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> NetscapeCertType_Id;
	static std::shared_ptr<java::lang::String> OBJECT_SIGNING;
	static std::shared_ptr<java::lang::String> OBJECT_SIGNING_CA;
	static std::shared_ptr<java::lang::String> SSL_CA;
	static std::shared_ptr<java::lang::String> SSL_CLIENT;
	static std::shared_ptr<java::lang::String> SSL_SERVER;
	static std::shared_ptr<java::lang::String> S_MIME;
	static std::shared_ptr<java::lang::String> S_MIME_CA;
	static void static_cinit();
	NetscapeCertTypeExtension();
	NetscapeCertTypeExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	NetscapeCertTypeExtension(std::shared_ptr<unsigned char[]> bitString);
	NetscapeCertTypeExtension(std::shared_ptr<bool[]> bitString);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::lang::Boolean> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	bool virtual getKeyUsageMappedBits();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::NetscapeCertTypeExtension::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~NetscapeCertTypeExtension(){
	}

}; // class NetscapeCertTypeExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_NetscapeCertTypeExtension__

