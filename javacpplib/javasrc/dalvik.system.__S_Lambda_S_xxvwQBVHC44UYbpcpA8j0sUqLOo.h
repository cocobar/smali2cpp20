#ifndef __dalvik_system___S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo__
#define __dalvik_system___S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\-$Lambda$xxvwQBVHC44UYbpcpA8j0sUqLOo.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.util.function.Predicate.h"

namespace dalvik::system{
class __S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo : public java::util::function::Predicate {
protected:
private:
	bool virtual _S_m_S_0(std::shared_ptr<java::lang::Object> arg0);
	__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo();
public:
	static std::shared_ptr<dalvik::system::__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo> _S_INST_S_0;
	static void static_cinit();
	bool virtual test(std::shared_ptr<java::lang::Object> var0);
private:
	class static_init_class {
	public:
		static_init_class(){
			dalvik::system::__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo(){
	}

}; // class __S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo
}; // namespace dalvik::system

#endif //__dalvik_system___S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo__

