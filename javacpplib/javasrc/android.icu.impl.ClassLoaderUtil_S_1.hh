#ifndef __android_icu_impl_ClassLoaderUtil_S_1__
#define __android_icu_impl_ClassLoaderUtil_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ClassLoaderUtil$1.smali
#include "java2ctype.h"
#include "java.lang.ClassLoader.h"
#include "java.security.PrivilegedAction.h"

namespace android::icu::impl{
class ClassLoaderUtil_S_1 : public java::security::PrivilegedAction<java::lang::ClassLoader> {
public:
	ClassLoaderUtil_S_1();
	virtual ~ClassLoaderUtil_S_1();

}; // class ClassLoaderUtil_S_1
}; // namespace android::icu::impl

#endif //__android_icu_impl_ClassLoaderUtil_S_1__

