#ifndef __java_lang_AndroidHardcodedSystemProperties__
#define __java_lang_AndroidHardcodedSystemProperties__
// H L:\smali2cpp20\x64\Release\out\java\lang\AndroidHardcodedSystemProperties.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::lang{
class AndroidHardcodedSystemProperties : public java::lang::Object {
protected:
private:
public:
	static std::shared_ptr<java::lang::String> JAVA_VERSION;
	static std::shared_ptr<std::vector<std::vector<java::lang::String>>> STATIC_PROPERTIES;
	static void static_cinit();
	AndroidHardcodedSystemProperties();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::AndroidHardcodedSystemProperties::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~AndroidHardcodedSystemProperties(){
	}

}; // class AndroidHardcodedSystemProperties
}; // namespace java::lang

#endif //__java_lang_AndroidHardcodedSystemProperties__

