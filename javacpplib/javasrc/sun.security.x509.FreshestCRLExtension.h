#ifndef __sun_security_x509_FreshestCRLExtension__
#define __sun_security_x509_FreshestCRLExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\FreshestCRLExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"
#include "sun.security.x509.CRLDistributionPointsExtension.h"
#include "sun.security.x509.DistributionPoint.h"

namespace sun::security::x509{
class FreshestCRLExtension : public sun::security::x509::CRLDistributionPointsExtension {
protected:
private:
public:
	static std::shared_ptr<java::lang::String> NAME;
	FreshestCRLExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	FreshestCRLExtension(std::shared_ptr<java::util::List<sun::security::x509::DistributionPoint>> distributionPoints);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
public:
	virtual ~FreshestCRLExtension(){
	}

}; // class FreshestCRLExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_FreshestCRLExtension__

