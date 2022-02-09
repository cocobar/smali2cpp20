#ifndef __sun_security_util_DisabledAlgorithmConstraints_S_Constraint__
#define __sun_security_util_DisabledAlgorithmConstraints_S_Constraint__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\DisabledAlgorithmConstraints$Constraint.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.Key.h"
#include "sun.security.util.CertConstraintParameters.h"

namespace sun::security::util{
class DisabledAlgorithmConstraints_S_Constraint : public java::lang::Object {
protected:
private:
	DisabledAlgorithmConstraints_S_Constraint();
public:
	std::shared_ptr<java::lang::String> algorithm;
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint> nextConstraint;
	DisabledAlgorithmConstraints_S_Constraint(std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint> _this0);
	void permits(std::shared_ptr<sun::security::util::CertConstraintParameters> var0);
	bool virtual permits(std::shared_ptr<java::security::Key> key);
public:
	virtual ~DisabledAlgorithmConstraints_S_Constraint(){
	}

}; // class DisabledAlgorithmConstraints_S_Constraint
}; // namespace sun::security::util

#endif //__sun_security_util_DisabledAlgorithmConstraints_S_Constraint__

