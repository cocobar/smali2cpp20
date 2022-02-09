// CPP L:\smali2cpp20\x64\Release\out\sun\security\jca\ServiceId.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.jca.ServiceId.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
sun::security::jca::ServiceId::ServiceId(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm)
{
	
	//    .param p1, "type"    # Ljava/lang/String;
	//    .param p2, "algorithm"    # Ljava/lang/String;
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->type = type;
	this->algorithm = algorithm;
	return;

}


