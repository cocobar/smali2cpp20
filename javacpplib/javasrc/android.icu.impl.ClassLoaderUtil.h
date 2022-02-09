#ifndef __android_icu_impl_ClassLoaderUtil__
#define __android_icu_impl_ClassLoaderUtil__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ClassLoaderUtil.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class ClassLoaderUtil : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::ClassLoader> BOOTSTRAP_CLASSLOADER;
	static std::shared_ptr<java::lang::ClassLoader> getBootstrapClassLoader();
public:
	ClassLoaderUtil();
	static std::shared_ptr<java::lang::ClassLoader> getClassLoader();
	static std::shared_ptr<java::lang::ClassLoader> getClassLoader(std::shared_ptr<java::lang::Class<java::lang::Object>> cls);
public:
	virtual ~ClassLoaderUtil(){
	}

}; // class ClassLoaderUtil
}; // namespace android::icu::impl

#endif //__android_icu_impl_ClassLoaderUtil__

