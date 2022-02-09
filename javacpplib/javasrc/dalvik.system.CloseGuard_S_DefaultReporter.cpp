// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\CloseGuard$DefaultReporter.smali
#include "java2ctype.h"
#include "dalvik.system.CloseGuard_S_DefaultReporter.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"

// .method private constructor <init>()V
dalvik::system::CloseGuard_S_DefaultReporter::CloseGuard_S_DefaultReporter()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Ldalvik/system/CloseGuard$DefaultReporter;)V
dalvik::system::CloseGuard_S_DefaultReporter::CloseGuard_S_DefaultReporter(std::shared_ptr<dalvik::system::CloseGuard_S_DefaultReporter> _this0)
{
	
	//    .param p1, "-this0"    # Ldalvik/system/CloseGuard$DefaultReporter;
	// 036    invoke-direct {p0}, Ldalvik/system/CloseGuard$DefaultReporter;-><init>()V
	return;

}
// .method public report(Ljava/lang/String;Ljava/lang/Throwable;)V
void dalvik::system::CloseGuard_S_DefaultReporter::report(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> allocationSite)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "allocationSite"    # Ljava/lang/Throwable;
	java::lang::System::logW(message, allocationSite);
	return;

}


