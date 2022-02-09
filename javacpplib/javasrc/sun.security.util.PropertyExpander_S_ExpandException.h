#ifndef __sun_security_util_PropertyExpander_S_ExpandException__
#define __sun_security_util_PropertyExpander_S_ExpandException__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\PropertyExpander$ExpandException.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.GeneralSecurityException.h"

namespace sun::security::util{
class PropertyExpander_S_ExpandException : public java::security::GeneralSecurityException {
protected:
private:
	static long long serialVersionUID;
public:
	PropertyExpander_S_ExpandException(std::shared_ptr<java::lang::String> msg);
public:
	virtual ~PropertyExpander_S_ExpandException(){
	}

}; // class PropertyExpander_S_ExpandException
}; // namespace sun::security::util

#endif //__sun_security_util_PropertyExpander_S_ExpandException__

