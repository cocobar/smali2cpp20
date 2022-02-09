#ifndef __sun_security_action_GetPropertyAction__
#define __sun_security_action_GetPropertyAction__
// H L:\smali2cpp20\x64\Release\out\sun\security\action\GetPropertyAction.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.PrivilegedAction.h"

namespace sun::security::action{
class GetPropertyAction : public java::security::PrivilegedAction<java::lang::String> {
public:
	GetPropertyAction();
	virtual ~GetPropertyAction();

}; // class GetPropertyAction
}; // namespace sun::security::action

#endif //__sun_security_action_GetPropertyAction__

