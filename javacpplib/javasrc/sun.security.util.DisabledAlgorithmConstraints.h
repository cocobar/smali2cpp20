#ifndef __sun_security_util_DisabledAlgorithmConstraints__
#define __sun_security_util_DisabledAlgorithmConstraints__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\DisabledAlgorithmConstraints.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.AlgorithmParameters.h"
#include "java.security.CryptoPrimitive.h"
#include "java.security.Key.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Set.h"
#include "sun.security.util.AbstractAlgorithmConstraints.h"
#include "sun.security.util.AlgorithmDecomposer.h"
#include "sun.security.util.CertConstraintParameters.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_Constraints.h"

namespace sun::security::util{
class DisabledAlgorithmConstraints : public sun::security::util::AbstractAlgorithmConstraints {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraints> algorithmConstraints;
	std::shared_ptr<std::vector<java::lang::String>> disabledAlgorithms;
	void virtual checkConstraints(std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> primitives,std::shared_ptr<sun::security::util::CertConstraintParameters> cp);
	bool virtual checkConstraints(std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> primitives,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::security::Key> key,std::shared_ptr<java::security::AlgorithmParameters> parameters);
public:
	static std::shared_ptr<java::lang::String> PROPERTY_CERTPATH_DISABLED_ALGS;
	static std::shared_ptr<java::lang::String> PROPERTY_JAR_DISABLED_ALGS;
	static std::shared_ptr<java::lang::String> PROPERTY_TLS_DISABLED_ALGS;
	static std::shared_ptr<sun::security::util::Debug> _get0();
	static void static_cinit();
	DisabledAlgorithmConstraints(std::shared_ptr<java::lang::String> propertyName);
	DisabledAlgorithmConstraints(std::shared_ptr<java::lang::String> propertyName,std::shared_ptr<sun::security::util::AlgorithmDecomposer> decomposer);
	bool virtual checkProperty(std::shared_ptr<java::lang::String> param);
	void virtual permits(std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> primitives,std::shared_ptr<java::security::cert::X509Certificate> cert);
	void virtual permits(std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> primitives,std::shared_ptr<sun::security::util::CertConstraintParameters> cp);
	bool virtual permits(std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> primitives,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::security::AlgorithmParameters> parameters);
	bool virtual permits(std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> primitives,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::security::Key> key,std::shared_ptr<java::security::AlgorithmParameters> parameters);
	bool virtual permits(std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> primitives,std::shared_ptr<java::security::Key> key);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::DisabledAlgorithmConstraints::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DisabledAlgorithmConstraints(){
	}

}; // class DisabledAlgorithmConstraints
}; // namespace sun::security::util

#endif //__sun_security_util_DisabledAlgorithmConstraints__

