#ifndef __sun_reflect_misc_ReflectUtil__
#define __sun_reflect_misc_ReflectUtil__
// H L:\smali2cpp20\x64\Release\out\sun\reflect\misc\ReflectUtil.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace sun::reflect::misc{
class ReflectUtil : public java::lang::Object {
protected:
private:
	ReflectUtil();
	static bool isAncestor(std::shared_ptr<java::lang::ClassLoader> p,std::shared_ptr<java::lang::ClassLoader> cl);
	static bool isSubclassOf(std::shared_ptr<java::lang::Class<java::lang::Object>> queryClass,std::shared_ptr<java::lang::Class<java::lang::Object>> ofClass);
public:
	static void checkPackageAccess(std::shared_ptr<java::lang::Class<java::lang::Object>> clazz);
	static void checkPackageAccess(std::shared_ptr<java::lang::String> name);
	static void checkProxyPackageAccess(std::shared_ptr<java::lang::Class<java::lang::Object>> clazz);
	static void checkProxyPackageAccess(std::shared_ptr<java::lang::ClassLoader> ccl,std::shared_ptr<std::vector<java::lang::Class<java::lang::Object>>> interfaces);
	static std::shared_ptr<java::lang::Class<java::lang::Object>> forName(std::shared_ptr<java::lang::String> name);
	static bool isNonPublicProxyClass(std::shared_ptr<java::lang::Class<java::lang::Object>> cls);
	static bool isPackageAccessible(std::shared_ptr<java::lang::Class<java::lang::Object>> clazz);
	static bool needsPackageAccessCheck(std::shared_ptr<java::lang::ClassLoader> from,std::shared_ptr<java::lang::ClassLoader> to);
	static std::shared_ptr<java::lang::Object> newInstance(std::shared_ptr<java::lang::Class<java::lang::Object>> cls);
public:
	virtual ~ReflectUtil(){
	}

}; // class ReflectUtil
}; // namespace sun::reflect::misc

#endif //__sun_reflect_misc_ReflectUtil__

