// CPP L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderList$1.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.Provider_S_Service.h"
#include "java.security.Provider.h"
#include "sun.security.jca.ProviderList_S_1.h"

static sun::security::jca::ProviderList_S_1::serialVersionUID = 0xffa6e84ca1e2bc5L;
// .method constructor <init>(Ljava/lang/String;DLjava/lang/String;)V
sun::security::jca::ProviderList_S_1::ProviderList_S_1(std::shared_ptr<java::lang::String> _S_anonymous0,double _S_anonymous1,std::shared_ptr<java::lang::String> _S_anonymous2)
{
	
	//    .param p1, "$anonymous0"    # Ljava/lang/String;
	//    .param p2, "$anonymous1"    # D
	//    .param p4, "$anonymous2"    # Ljava/lang/String;
	java::security::Provider::(_S_anonymous0, _S_anonymous1, _S_anonymous2);
	return;

}
// .method public getService(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;
std::shared_ptr<java::security::Provider_S_Service> sun::security::jca::ProviderList_S_1::getService(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm)
{
	
	//    .param p1, "type"    # Ljava/lang/String;
	//    .param p2, "algorithm"    # Ljava/lang/String;
	return 0x0;

}


