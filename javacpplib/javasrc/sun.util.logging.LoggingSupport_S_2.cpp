// CPP L:\smali2cpp20\x64\Release\out\sun\util\logging\LoggingSupport$2.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "sun.util.logging.LoggingSupport_S_2.h"

// .method constructor <init>()V
sun::util::logging::LoggingSupport_S_2::LoggingSupport_S_2()
{
	
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::logging::LoggingSupport_S_2::run()
{
	
	return java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.util.logging.SimpleFormatter.format")));

}


