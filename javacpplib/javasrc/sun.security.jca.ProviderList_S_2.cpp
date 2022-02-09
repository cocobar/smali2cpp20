// CPP L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderList$2.smali
#include "java2ctype.h"
#include "java.security.Provider.h"
#include "sun.security.jca.ProviderConfig.h"
#include "sun.security.jca.ProviderList_S_2.h"
#include "sun.security.jca.ProviderList.h"

// .method constructor <init>(Lsun/security/jca/ProviderList;)V
sun::security::jca::ProviderList_S_2::ProviderList_S_2(std::shared_ptr<sun::security::jca::ProviderList> this_S_0)
{
	
	//    .param p1, "this$0"    # Lsun/security/jca/ProviderList;
	this->this_S_0 = this_S_0;
	// 040    invoke-direct {p0}, Ljava/util/AbstractList;-><init>()V
	return;

}
// .method public get(I)Ljava/security/Provider;
std::shared_ptr<java::security::Provider> sun::security::jca::ProviderList_S_2::get(int index)
{
	
	//    .param p1, "index"    # I
	return this->this_S_0->getProvider(index);

}
// .method public size()I
int sun::security::jca::ProviderList_S_2::size()
{
	
	return sun::security::jca::ProviderList::-get0(this->this_S_0)->size();

}


