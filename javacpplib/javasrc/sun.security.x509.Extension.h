#ifndef __sun_security_x509_Extension__
#define __sun_security_x509_Extension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\Extension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.cert.Extension.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"

namespace sun::security::x509{
class Extension : public java::security::cert::Extension {
protected:
	bool critical;
	std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId;
	std::shared_ptr<unsigned char[]> extensionValue;
private:
	static int hashMagic;
public:
	Extension();
	Extension(std::shared_ptr<sun::security::util::DerValue> derVal);
	Extension(std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,bool critical,std::shared_ptr<unsigned char[]> extensionValue);
	Extension(std::shared_ptr<sun::security::x509::Extension> ext);
	static std::shared_ptr<sun::security::x509::Extension> newExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,bool critical,std::shared_ptr<unsigned char[]> rawExtensionValue);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<sun::security::util::ObjectIdentifier> virtual getExtensionId();
	unsigned char virtual getExtensionValue();
	std::shared_ptr<java::lang::String> virtual getId();
	unsigned char virtual getValue();
	int virtual hashCode();
	bool virtual isCritical();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~Extension(){
	}

}; // class Extension
}; // namespace sun::security::x509

#endif //__sun_security_x509_Extension__

