#ifndef __sun_security_action_GetIntegerAction__
#define __sun_security_action_GetIntegerAction__
// H L:\smali2cpp20\x64\Release\out\sun\security\action\GetIntegerAction.smali
#include "java2ctype.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"
#include "java.security.PrivilegedAction.h"

namespace sun::security::action{
class GetIntegerAction : public java::security::PrivilegedAction<java::lang::Integer> {
protected:
private:
	bool defaultSet;
	int defaultVal;
	std::shared_ptr<java::lang::String> theProp;
public:
	GetIntegerAction(std::shared_ptr<java::lang::String> theProp);
	GetIntegerAction(std::shared_ptr<java::lang::String> theProp,int defaultVal);
	std::shared_ptr<java::lang::Integer> virtual run();
public:
	virtual ~GetIntegerAction(){
	}

}; // class GetIntegerAction
}; // namespace sun::security::action

#endif //__sun_security_action_GetIntegerAction__

