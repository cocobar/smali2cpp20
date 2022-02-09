// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\DalvikLogging.smali
#include "java2ctype.h"
#include "dalvik.system.DalvikLogging.h"
#include "java.lang.String.h"

// .method private constructor <init>()V
dalvik::system::DalvikLogging::DalvikLogging()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static loggerNameToTag(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::DalvikLogging::loggerNameToTag(std::shared_ptr<java::lang::String> loggerName)
{
	
	int cVar0;
	int length;
	int lastPeriod;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .param p0, "loggerName"    # Ljava/lang/String;
	cVar0 = 0x17;
	if ( loggerName )     
		goto label_cond_8;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("null"));
	// 032    .line 38
label_cond_8:
	length = loggerName->length();
	//    .local v1, "length":I
	if ( length >  cVar0 )
		goto label_cond_f;
	return loggerName;
	// 045    .line 43
label_cond_f:
	lastPeriod = loggerName->lastIndexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")));
	//    .local v0, "lastPeriod":I
	if ( (length - ( lastPeriod + 0x1)) >  cVar0 )
		goto label_cond_23;
	cVar1 = loggerName->substring(( lastPeriod + 0x1));
label_goto_22:
	return cVar1;
	// 072    .line 46
label_cond_23:
	cVar1 = loggerName->substring(( loggerName->length() + -0x17));
	goto label_goto_22;

}


