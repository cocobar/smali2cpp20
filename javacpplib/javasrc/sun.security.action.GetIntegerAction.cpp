// CPP L:\smali2cpp20\x64\Release\out\sun\security\action\GetIntegerAction.smali
#include "java2ctype.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"
#include "sun.security.action.GetIntegerAction.h"

// .method public constructor <init>(Ljava/lang/String;)V
sun::security::action::GetIntegerAction::GetIntegerAction(std::shared_ptr<java::lang::String> theProp)
{
	
	//    .param p1, "theProp"    # Ljava/lang/String;
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->defaultSet = 0x0;
	this->theProp = theProp;
	return;

}
// .method public constructor <init>(Ljava/lang/String;I)V
sun::security::action::GetIntegerAction::GetIntegerAction(std::shared_ptr<java::lang::String> theProp,int defaultVal)
{
	
	//    .param p1, "theProp"    # Ljava/lang/String;
	//    .param p2, "defaultVal"    # I
	// 057    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->defaultSet = 0x0;
	this->theProp = theProp;
	this->defaultVal = defaultVal;
	this->defaultSet = 0x1;
	return;

}
// .method public run()Ljava/lang/Integer;
std::shared_ptr<java::lang::Integer> sun::security::action::GetIntegerAction::run()
{
	
	std::shared_ptr<java::lang::Integer> value;
	std::shared_ptr<java::lang::Integer> cVar0;
	
	value = java::lang::Integer::getInteger(this->theProp);
	//    .local v0, "value":Ljava/lang/Integer;
	if ( value )     
		goto label_cond_14;
	if ( !(this->defaultSet) )  
		goto label_cond_14;
	cVar0 = std::make_shared<java::lang::Integer>(this->defaultVal);
	return cVar0;
	// 109    .line 111
label_cond_14:
	return value;

}


