#ifndef __sun_security_util_Resources__
#define __sun_security_util_Resources__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\Resources.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.util.ListResourceBundle.h"

namespace sun::security::util{
class Resources : public java::util::ListResourceBundle {
protected:
private:
	static std::shared_ptr<std::vector<std::vector<java::lang::Object>>> contents;
public:
	static void static_cinit();
	Resources();
	std::shared_ptr<java::lang::Object> virtual getContents();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::Resources::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Resources(){
	}

}; // class Resources
}; // namespace sun::security::util

#endif //__sun_security_util_Resources__

