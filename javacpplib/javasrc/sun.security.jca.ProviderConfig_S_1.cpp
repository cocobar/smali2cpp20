// CPP L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderConfig$1.smali
#include "java2ctype.h"
#include "java.io.File.h"
#include "java.lang.Boolean.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "sun.security.jca.ProviderConfig_S_1.h"
#include "sun.security.jca.ProviderConfig.h"

// .method constructor <init>(Lsun/security/jca/ProviderConfig;)V
sun::security::jca::ProviderConfig_S_1::ProviderConfig_S_1(std::shared_ptr<sun::security::jca::ProviderConfig> this_S_0)
{
	
	//    .param p1, "this$0"    # Lsun/security/jca/ProviderConfig;
	this->this_S_0 = this_S_0;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/lang/Boolean;
std::shared_ptr<java::lang::Boolean> sun::security::jca::ProviderConfig_S_1::run()
{
	
	std::shared_ptr<java::io::File> file;
	
	file = std::make_shared<java::io::File>(std::make_shared<java::lang::String>(std::make_shared<char[]>("/usr/lib/libpkcs11.so")));
	//    .local v0, "file":Ljava/io/File;
	if ( file->exists() )     
		goto label_cond_11;
	return java::lang::Boolean::FALSE;
	// 076    .line 109
label_cond_11:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("false"))->equalsIgnoreCase(java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.security.pkcs11.enable-solaris"))))) )  
		goto label_cond_24;
	return java::lang::Boolean::FALSE;
	// 099    .line 113
label_cond_24:
	return java::lang::Boolean::TRUE;

}


