// CPP L:\smali2cpp20\x64\Release\out\sun\util\logging\PlatformLogger$1.smali
#include "java2ctype.h"
#include "java.lang.Boolean.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "sun.util.logging.PlatformLogger_S_1.h"

// .method constructor <init>()V
sun::util::logging::PlatformLogger_S_1::PlatformLogger_S_1()
{
	
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/lang/Boolean;
std::shared_ptr<java::lang::Boolean> sun::util::logging::PlatformLogger_S_1::run()
{
	
	bool cVar0;
	
	cVar0 = 0x1;
	//    .local v0, "cname":Ljava/lang/String;
	//    .local v1, "fname":Ljava/lang/String;
	if ( java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.util.logging.config.class"))) )     
		goto label_cond_13;
	if ( !(java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.util.logging.config.file")))) )  
		goto label_cond_18;
label_cond_13:
label_goto_13:
	return java::lang::Boolean::valueOf(cVar0);
label_cond_18:
	cVar0 = 0x0;
	goto label_goto_13;

}


