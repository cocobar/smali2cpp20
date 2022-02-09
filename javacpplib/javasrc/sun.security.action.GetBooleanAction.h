#ifndef __sun_security_action_GetBooleanAction__
#define __sun_security_action_GetBooleanAction__
// H L:\smali2cpp20\x64\Release\out\sun\security\action\GetBooleanAction.smali
#include "java2ctype.h"
#include "java.lang.Boolean.h"
#include "java.lang.String.h"
#include "java.security.PrivilegedAction.h"

namespace sun::security::action{
class GetBooleanAction : public java::security::PrivilegedAction<java::lang::Boolean> {
protected:
private:
	std::shared_ptr<java::lang::String> theProp;
public:
	GetBooleanAction(std::shared_ptr<java::lang::String> theProp);
	std::shared_ptr<java::lang::Boolean> virtual run();
public:
	virtual ~GetBooleanAction(){
	}

}; // class GetBooleanAction
}; // namespace sun::security::action

#endif //__sun_security_action_GetBooleanAction__

