#ifndef __sun_security_util_AlgorithmDecomposer__
#define __sun_security_util_AlgorithmDecomposer__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\AlgorithmDecomposer.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Set.h"
#include "java.util.regex.Pattern.h"

namespace sun::security::util{
class AlgorithmDecomposer : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::util::regex::Pattern> pattern;
	static std::shared_ptr<java::util::regex::Pattern> transPattern;
	static std::shared_ptr<java::util::Set<java::lang::String>> decomposeImpl(std::shared_ptr<java::lang::String> algorithm);
	static void hasLoop(std::shared_ptr<java::util::Set<java::lang::String>> elements,std::shared_ptr<java::lang::String> find,std::shared_ptr<java::lang::String> replace);
public:
	static void static_cinit();
	AlgorithmDecomposer();
	static std::shared_ptr<java::util::Set<java::lang::String>> decomposeOneHash(std::shared_ptr<java::lang::String> algorithm);
	static std::shared_ptr<java::lang::String> hashName(std::shared_ptr<java::lang::String> algorithm);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual decompose(std::shared_ptr<java::lang::String> algorithm);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::AlgorithmDecomposer::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~AlgorithmDecomposer(){
	}

}; // class AlgorithmDecomposer
}; // namespace sun::security::util

#endif //__sun_security_util_AlgorithmDecomposer__

