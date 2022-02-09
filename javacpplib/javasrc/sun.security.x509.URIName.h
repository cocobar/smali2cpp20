#ifndef __sun_security_x509_URIName__
#define __sun_security_x509_URIName__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\URIName.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.net.URI.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.DNSName.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.IPAddressName.h"

namespace sun::security::x509{
class URIName : public sun::security::x509::GeneralNameInterface {
protected:
private:
	std::shared_ptr<java::lang::String> host;
	std::shared_ptr<sun::security::x509::DNSName> hostDNS;
	std::shared_ptr<sun::security::x509::IPAddressName> hostIP;
	std::shared_ptr<java::net::URI> uri;
public:
	URIName(std::shared_ptr<java::lang::String> name);
	URIName(std::shared_ptr<java::net::URI> uri,std::shared_ptr<java::lang::String> host,std::shared_ptr<sun::security::x509::DNSName> hostDNS);
	URIName(std::shared_ptr<sun::security::util::DerValue> derValue);
	static std::shared_ptr<sun::security::x509::URIName> nameConstraint(std::shared_ptr<sun::security::util::DerValue> value);
	int virtual constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual getHost();
	std::shared_ptr<java::lang::Object> virtual getHostObject();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<java::lang::String> virtual getScheme();
	int virtual getType();
	std::shared_ptr<java::net::URI> virtual getURI();
	int virtual hashCode();
	int virtual subtreeDepth();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~URIName(){
	}

}; // class URIName
}; // namespace sun::security::x509

#endif //__sun_security_x509_URIName__

