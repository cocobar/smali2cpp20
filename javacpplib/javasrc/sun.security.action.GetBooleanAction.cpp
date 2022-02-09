// CPP L:\smali2cpp20\x64\Release\out\sun\security\action\GetBooleanAction.smali
#include "java2ctype.h"
#include "java.lang.Boolean.h"
#include "java.lang.String.h"
#include "sun.security.action.GetBooleanAction.h"

// .method public constructor <init>(Ljava/lang/String;)V
sun::security::action::GetBooleanAction::GetBooleanAction(std::shared_ptr<java::lang::String> theProp)
{
	
	//    .param p1, "theProp"    # Ljava/lang/String;
	// 032    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->theProp = theProp;
	return;

}
// .method public run()Ljava/lang/Boolean;
std::shared_ptr<java::lang::Boolean> sun::security::action::GetBooleanAction::run()
{
	
	return java::lang::Boolean::valueOf(java::lang::Boolean::getBoolean(this->theProp));

}


