#ifndef __sun_util_locale_Extension__
#define __sun_util_locale_Extension__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\Extension.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace sun::util::locale{
class Extension : public java::lang::Object {
protected:
	Extension(char key);
	void virtual setValue(std::shared_ptr<java::lang::String> value);
private:
	std::shared_ptr<java::lang::String> id;
	char key;
	std::shared_ptr<java::lang::String> value;
public:
	Extension(char key,std::shared_ptr<java::lang::String> value);
	std::shared_ptr<java::lang::String> virtual getID();
	char virtual getKey();
	std::shared_ptr<java::lang::String> virtual getValue();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~Extension(){
	}

}; // class Extension
}; // namespace sun::util::locale

#endif //__sun_util_locale_Extension__

