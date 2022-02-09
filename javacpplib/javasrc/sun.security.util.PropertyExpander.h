#ifndef __sun_security_util_PropertyExpander__
#define __sun_security_util_PropertyExpander__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\PropertyExpander.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace sun::security::util{
class PropertyExpander : public java::lang::Object {
protected:
private:
public:
	PropertyExpander();
	static std::shared_ptr<java::lang::String> expand(std::shared_ptr<java::lang::String> value);
	static std::shared_ptr<java::lang::String> expand(std::shared_ptr<java::lang::String> value,bool encodeURL);
public:
	virtual ~PropertyExpander(){
	}

}; // class PropertyExpander
}; // namespace sun::security::util

#endif //__sun_security_util_PropertyExpander__

