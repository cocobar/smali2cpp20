#ifndef __sun_security_util_DisabledAlgorithmConstraints_S_KeySizeConstraint__
#define __sun_security_util_DisabledAlgorithmConstraints_S_KeySizeConstraint__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\DisabledAlgorithmConstraints$KeySizeConstraint.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.Key.h"
#include "sun.security.util.CertConstraintParameters.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_Constraint_S_Operator.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_Constraint.h"

namespace sun::security::util{
class DisabledAlgorithmConstraints_S_KeySizeConstraint : public sun::security::util::DisabledAlgorithmConstraints_S_Constraint {
protected:
private:
	static std::shared_ptr<int[]> _sun_security_util_DisabledAlgorithmConstraints_S_Constraint_S_OperatorSwitchesValues;
	int maxSize;
	int minSize;
	int prohibitedSize;
	static int _getsun_security_util_DisabledAlgorithmConstraints_S_Constraint_S_OperatorSwitchesValues();
	bool virtual permitsImpl(std::shared_ptr<java::security::Key> key);
public:
	DisabledAlgorithmConstraints_S_KeySizeConstraint(std::shared_ptr<java::lang::String> algo,std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> operator,int length);
	void virtual permits(std::shared_ptr<sun::security::util::CertConstraintParameters> cp);
	bool virtual permits(std::shared_ptr<java::security::Key> key);
public:
	virtual ~DisabledAlgorithmConstraints_S_KeySizeConstraint(){
	}

}; // class DisabledAlgorithmConstraints_S_KeySizeConstraint
}; // namespace sun::security::util

#endif //__sun_security_util_DisabledAlgorithmConstraints_S_KeySizeConstraint__

