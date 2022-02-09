// CPP L:\smali2cpp20\x64\Release\out\sun\util\logging\PlatformLogger$LoggerProxy.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.util.logging.PlatformLogger_S_LoggerProxy.h"

// .method protected constructor <init>(Ljava/lang/String;)V
sun::util::logging::PlatformLogger_S_LoggerProxy::PlatformLogger_S_LoggerProxy(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	// 028    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->name = name;
	return;

}


