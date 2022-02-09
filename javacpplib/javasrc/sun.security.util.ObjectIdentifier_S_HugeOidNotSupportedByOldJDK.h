#ifndef __sun_security_util_ObjectIdentifier_S_HugeOidNotSupportedByOldJDK__
#define __sun_security_util_ObjectIdentifier_S_HugeOidNotSupportedByOldJDK__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\ObjectIdentifier$HugeOidNotSupportedByOldJDK.smali
#include "java2ctype.h"
#include "java.io.Serializable.h"

namespace sun::security::util{
class ObjectIdentifier_S_HugeOidNotSupportedByOldJDK : public java::io::Serializable {
protected:
private:
	static long long serialVersionUID;
public:
	static std::shared_ptr<sun::security::util::ObjectIdentifier_S_HugeOidNotSupportedByOldJDK> theOne;
	static void static_cinit();
	ObjectIdentifier_S_HugeOidNotSupportedByOldJDK();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::ObjectIdentifier_S_HugeOidNotSupportedByOldJDK::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ObjectIdentifier_S_HugeOidNotSupportedByOldJDK(){
	}

}; // class ObjectIdentifier_S_HugeOidNotSupportedByOldJDK
}; // namespace sun::security::util

#endif //__sun_security_util_ObjectIdentifier_S_HugeOidNotSupportedByOldJDK__

