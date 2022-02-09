#ifndef __sun_security_util_DisabledAlgorithmConstraints_S_Constraint_S_Operator__
#define __sun_security_util_DisabledAlgorithmConstraints_S_Constraint_S_Operator__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\DisabledAlgorithmConstraints$Constraint$Operator.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace sun::security::util{
class DisabledAlgorithmConstraints_S_Constraint_S_Operator : public java::lang::Enum<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> {
protected:
private:
	static std::shared_ptr<std::vector<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator>> _S_VALUES;
	DisabledAlgorithmConstraints_S_Constraint_S_Operator(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> EQ;
	static std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> GE;
	static std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> GT;
	static std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> LE;
	static std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> LT;
	static std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> NE;
	static void static_cinit();
	static std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> of(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DisabledAlgorithmConstraints_S_Constraint_S_Operator(){
	}

}; // class DisabledAlgorithmConstraints_S_Constraint_S_Operator
}; // namespace sun::security::util

#endif //__sun_security_util_DisabledAlgorithmConstraints_S_Constraint_S_Operator__

