#ifndef __sun_security_util_AbstractAlgorithmConstraints__
#define __sun_security_util_AbstractAlgorithmConstraints__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\AbstractAlgorithmConstraints.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.AlgorithmConstraints.h"
#include "sun.security.util.AlgorithmDecomposer.h"

namespace sun::security::util{
class AbstractAlgorithmConstraints : public java::security::AlgorithmConstraints {
protected:
	std::shared_ptr<sun::security::util::AlgorithmDecomposer> decomposer;
	AbstractAlgorithmConstraints(std::shared_ptr<sun::security::util::AlgorithmDecomposer> decomposer);
private:
public:
	static bool checkAlgorithm(std::shared_ptr<std::vector<java::lang::String>> algorithms,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<sun::security::util::AlgorithmDecomposer> decomposer);
	static std::shared_ptr<java::lang::String> getAlgorithms(std::shared_ptr<java::lang::String> propertyName);
public:
	virtual ~AbstractAlgorithmConstraints(){
	}

}; // class AbstractAlgorithmConstraints
}; // namespace sun::security::util

#endif //__sun_security_util_AbstractAlgorithmConstraints__

