#ifndef __sun_security_util_ResourcesMgr_S_2__
#define __sun_security_util_ResourcesMgr_S_2__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\ResourcesMgr$2.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.PrivilegedAction.h"
#include "java.util.ResourceBundle.h"

namespace sun::security::util{
class ResourcesMgr_S_2 : public java::security::PrivilegedAction<java::util::ResourceBundle> {
protected:
private:
public:
	std::shared_ptr<java::lang::String> val_S_altBundleName;
	ResourcesMgr_S_2(std::shared_ptr<java::lang::String> var0);
	std::shared_ptr<java::util::ResourceBundle> virtual run();
public:
	virtual ~ResourcesMgr_S_2(){
	}

}; // class ResourcesMgr_S_2
}; // namespace sun::security::util

#endif //__sun_security_util_ResourcesMgr_S_2__

