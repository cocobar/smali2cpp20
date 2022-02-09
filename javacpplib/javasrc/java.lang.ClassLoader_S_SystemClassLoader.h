#ifndef __java_lang_ClassLoader_S_SystemClassLoader__
#define __java_lang_ClassLoader_S_SystemClassLoader__
// H L:\smali2cpp20\x64\Release\out\java\lang\ClassLoader$SystemClassLoader.smali
#include "java2ctype.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"

namespace java::lang{
class ClassLoader_S_SystemClassLoader : public java::lang::Object {
protected:
private:
	ClassLoader_S_SystemClassLoader();
public:
	static std::shared_ptr<java::lang::ClassLoader> loader;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::ClassLoader_S_SystemClassLoader::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ClassLoader_S_SystemClassLoader(){
	}

}; // class ClassLoader_S_SystemClassLoader
}; // namespace java::lang

#endif //__java_lang_ClassLoader_S_SystemClassLoader__

