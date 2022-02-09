#ifndef __sun_security_x509_CRLDistributionPointsExtension__
#define __sun_security_x509_CRLDistributionPointsExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CRLDistributionPointsExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "java.util.List.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.DistributionPoint.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class CRLDistributionPointsExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
	CRLDistributionPointsExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value,std::shared_ptr<java::lang::String> extensionName);
	CRLDistributionPointsExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,bool isCritical,std::shared_ptr<java::util::List<sun::security::x509::DistributionPoint>> distributionPoints,std::shared_ptr<java::lang::String> extensionName);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out,std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,bool isCritical);
private:
	std::shared_ptr<java::util::List<sun::security::x509::DistributionPoint>> distributionPoints;
	std::shared_ptr<java::lang::String> extensionName;
	void virtual encodeThis();
public:
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> POINTS;
	CRLDistributionPointsExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	CRLDistributionPointsExtension(std::shared_ptr<java::util::List<sun::security::x509::DistributionPoint>> distributionPoints);
	CRLDistributionPointsExtension(bool isCritical,std::shared_ptr<java::util::List<sun::security::x509::DistributionPoint>> distributionPoints);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::util::List<sun::security::x509::DistributionPoint>> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CRLDistributionPointsExtension(){
	}

}; // class CRLDistributionPointsExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_CRLDistributionPointsExtension__

