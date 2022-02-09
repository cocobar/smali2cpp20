#ifndef __sun_security_util_DisabledAlgorithmConstraints_S_Constraints__
#define __sun_security_util_DisabledAlgorithmConstraints_S_Constraints__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\DisabledAlgorithmConstraints$Constraints.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.Key.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.regex.Pattern.h"
#include "sun.security.util.CertConstraintParameters.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_Constraint.h"

namespace sun::security::util{
class DisabledAlgorithmConstraints_S_Constraints : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::util::regex::Pattern> keySizePattern;
	std::shared_ptr<java::util::Map<java::lang::String,java::util::Set<sun::security::util::DisabledAlgorithmConstraints_S_Constraint>>> constraintsMap;
	std::shared_ptr<java::util::Set<sun::security::util::DisabledAlgorithmConstraints_S_Constraint>> virtual getConstraints(std::shared_ptr<java::lang::String> algorithm);
public:
	static void static_cinit();
	DisabledAlgorithmConstraints_S_Constraints(std::shared_ptr<std::vector<java::lang::String>> constraintArray);
	void virtual permits(std::shared_ptr<sun::security::util::CertConstraintParameters> cp);
	bool virtual permits(std::shared_ptr<java::security::Key> key);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::DisabledAlgorithmConstraints_S_Constraints::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DisabledAlgorithmConstraints_S_Constraints(){
	}

}; // class DisabledAlgorithmConstraints_S_Constraints
}; // namespace sun::security::util

#endif //__sun_security_util_DisabledAlgorithmConstraints_S_Constraints__

