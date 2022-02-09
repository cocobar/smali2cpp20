#ifndef __sun_security_util_DisabledAlgorithmConstraints_S_jdkCAConstraint__
#define __sun_security_util_DisabledAlgorithmConstraints_S_jdkCAConstraint__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\DisabledAlgorithmConstraints$jdkCAConstraint.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.util.CertConstraintParameters.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_Constraint.h"

namespace sun::security::util{
class DisabledAlgorithmConstraints_S_jdkCAConstraint : public sun::security::util::DisabledAlgorithmConstraints_S_Constraint {
protected:
private:
public:
	DisabledAlgorithmConstraints_S_jdkCAConstraint(std::shared_ptr<java::lang::String> algo);
	void virtual permits(std::shared_ptr<sun::security::util::CertConstraintParameters> cp);
public:
	virtual ~DisabledAlgorithmConstraints_S_jdkCAConstraint(){
	}

}; // class DisabledAlgorithmConstraints_S_jdkCAConstraint
}; // namespace sun::security::util

#endif //__sun_security_util_DisabledAlgorithmConstraints_S_jdkCAConstraint__

