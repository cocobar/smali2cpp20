// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\AbstractAlgorithmConstraints$1.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.Security.h"
#include "sun.security.util.AbstractAlgorithmConstraints_S_1.h"

// .method constructor <init>(Ljava/lang/String;)V
sun::security::util::AbstractAlgorithmConstraints_S_1::AbstractAlgorithmConstraints_S_1(std::shared_ptr<java::lang::String> var0)
{
	
	this->val_S_propertyName = var0;
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::AbstractAlgorithmConstraints_S_1::run()
{
	
	return java::security::Security::getProperty(this->val_S_propertyName);

}


