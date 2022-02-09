// CPP L:\smali2cpp20\x64\Release\out\sun\security\action\GetPropertyAction.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "sun.security.action.GetPropertyAction.h"

// .method public constructor <init>(Ljava/lang/String;)V
sun::security::action::GetPropertyAction::GetPropertyAction(std::shared_ptr<java::lang::String> theProp)
{
	
	//    .param p1, "theProp"    # Ljava/lang/String;
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->theProp = theProp;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
sun::security::action::GetPropertyAction::GetPropertyAction(std::shared_ptr<java::lang::String> theProp,std::shared_ptr<java::lang::String> defaultVal)
{
	
	//    .param p1, "theProp"    # Ljava/lang/String;
	//    .param p2, "defaultVal"    # Ljava/lang/String;
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->theProp = theProp;
	this->defaultVal = defaultVal;
	return;

}
// .method public run()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::action::GetPropertyAction::run()
{
	
	std::shared_ptr<java::lang::String> value;
	
	value = java::lang::System::getProperty(this->theProp);
	//    .local v0, "value":Ljava/lang/String;
	if ( value )     
		goto label_cond_a;
	//    .end local v0    # "value":Ljava/lang/String;
label_cond_a:
	return value;

}


