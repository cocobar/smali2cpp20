#ifndef __sun_security_util_ResourcesMgr__
#define __sun_security_util_ResourcesMgr__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\ResourcesMgr.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.ResourceBundle.h"

namespace sun::security::util{
class ResourcesMgr : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::util::ResourceBundle> altBundle;
	static std::shared_ptr<java::util::ResourceBundle> bundle;
public:
	ResourcesMgr();
	static std::shared_ptr<java::lang::String> getString(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> getString(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::String> altBundleName);
public:
	virtual ~ResourcesMgr(){
	}

}; // class ResourcesMgr
}; // namespace sun::security::util

#endif //__sun_security_util_ResourcesMgr__

