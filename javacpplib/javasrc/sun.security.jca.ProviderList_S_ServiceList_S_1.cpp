// CPP L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderList$ServiceList$1.smali
#include "java2ctype.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.security.Provider_S_Service.h"
#include "java.util.NoSuchElementException.h"
#include "sun.security.jca.ProviderList_S_ServiceList_S_1.h"
#include "sun.security.jca.ProviderList_S_ServiceList.h"

// .method constructor <init>(Lsun/security/jca/ProviderList$ServiceList;)V
sun::security::jca::ProviderList_S_ServiceList_S_1::ProviderList_S_ServiceList_S_1(std::shared_ptr<sun::security::jca::ProviderList_S_ServiceList> this_S_1)
{
	
	//    .param p1, "this$1"    # Lsun/security/jca/ProviderList$ServiceList;
	this->this_S_1 = this_S_1;
	// 046    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public hasNext()Z
bool sun::security::jca::ProviderList_S_ServiceList_S_1::hasNext()
{
	
	bool cVar0;
	
	if ( !(sun::security::jca::ProviderList_S_ServiceList::-wrap0(this->this_S_1, this->index)) )  
		goto label_cond_c;
	cVar0 = 0x1;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method public next()Ljava/security/Provider$Service;
std::shared_ptr<java::security::Provider_S_Service> sun::security::jca::ProviderList_S_ServiceList_S_1::next()
{
	
	std::shared_ptr<java::security::Provider_S_Service> s;
	std::shared_ptr<java::util::NoSuchElementException> cVar0;
	
	s = sun::security::jca::ProviderList_S_ServiceList::-wrap0(this->this_S_1, this->index);
	//    .local v0, "s":Ljava/security/Provider$Service;
	if ( s )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::util::NoSuchElementException>();
	// throw
	throw cVar0;
	// 116    .line 494
label_cond_10:
	this->index = ( this->index + 0x1);
	return s;

}
// .method public remove()V
void sun::security::jca::ProviderList_S_ServiceList_S_1::remove()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}


