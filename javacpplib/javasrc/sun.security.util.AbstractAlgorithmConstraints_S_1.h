#ifndef __sun_security_util_AbstractAlgorithmConstraints_S_1__
#define __sun_security_util_AbstractAlgorithmConstraints_S_1__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\AbstractAlgorithmConstraints$1.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.PrivilegedAction.h"

namespace sun::security::util{
class AbstractAlgorithmConstraints_S_1 : public java::security::PrivilegedAction<java::lang::String> {
protected:
private:
public:
	std::shared_ptr<java::lang::String> val_S_propertyName;
	AbstractAlgorithmConstraints_S_1(std::shared_ptr<java::lang::String> var0);
	std::shared_ptr<java::lang::String> virtual run();
public:
	virtual ~AbstractAlgorithmConstraints_S_1(){
	}

}; // class AbstractAlgorithmConstraints_S_1
}; // namespace sun::security::util

#endif //__sun_security_util_AbstractAlgorithmConstraints_S_1__

