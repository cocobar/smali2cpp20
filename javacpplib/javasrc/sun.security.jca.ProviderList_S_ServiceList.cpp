// CPP L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderList$ServiceList.smali
#include "java2ctype.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.Provider_S_Service.h"
#include "java.security.Provider.h"
#include "java.util.ArrayList.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.security.jca.ProviderConfig.h"
#include "sun.security.jca.ProviderList_S_ServiceList_S_1.h"
#include "sun.security.jca.ProviderList_S_ServiceList.h"
#include "sun.security.jca.ProviderList.h"
#include "sun.security.jca.ServiceId.h"

// .method static synthetic -wrap0(Lsun/security/jca/ProviderList$ServiceList;I)Ljava/security/Provider$Service;
std::shared_ptr<java::security::Provider_S_Service> sun::security::jca::ProviderList_S_ServiceList::_wrap0(std::shared_ptr<sun::security::jca::ProviderList_S_ServiceList> _this,int index)
{
	
	//    .param p0, "-this"    # Lsun/security/jca/ProviderList$ServiceList;
	//    .param p1, "index"    # I
	return _this->tryGet(index);

}
// .method constructor <init>(Lsun/security/jca/ProviderList;Ljava/lang/String;Ljava/lang/String;)V
sun::security::jca::ProviderList_S_ServiceList::ProviderList_S_ServiceList(std::shared_ptr<sun::security::jca::ProviderList> this_S_0,std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm)
{
	
	//    .param p1, "this$0"    # Lsun/security/jca/ProviderList;
	//    .param p2, "type"    # Ljava/lang/String;
	//    .param p3, "algorithm"    # Ljava/lang/String;
	this->this_S_0 = this_S_0;
	// 084    invoke-direct {p0}, Ljava/util/AbstractList;-><init>()V
	this->type = type;
	this->algorithm = algorithm;
	this->ids = 0x0;
	return;

}
// .method constructor <init>(Lsun/security/jca/ProviderList;Ljava/util/List;)V
sun::security::jca::ProviderList_S_ServiceList::ProviderList_S_ServiceList(std::shared_ptr<sun::security::jca::ProviderList> this_S_0,std::shared_ptr<java::util::List<sun::security::jca::ServiceId>> ids)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "this$0"    # Lsun/security/jca/ProviderList;
	//    .annotation system Ldalvik/annotation/Signature;
	// 105        value = {
	// 106            "(",
	// 107            "Ljava/util/List",
	// 108            "<",
	// 109            "Lsun/security/jca/ServiceId;",
	// 110            ">;)V"
	// 111        }
	// 112    .end annotation
	//    .local p2, "ids":Ljava/util/List;, "Ljava/util/List<Lsun/security/jca/ServiceId;>;"
	cVar0 = 0x0;
	this->this_S_0 = this_S_0;
	// 121    invoke-direct {p0}, Ljava/util/AbstractList;-><init>()V
	this->type = cVar0;
	this->algorithm = cVar0;
	this->ids = ids;
	return;

}
// .method private addService(Ljava/security/Provider$Service;)V
void sun::security::jca::ProviderList_S_ServiceList::addService(std::shared_ptr<java::security::Provider_S_Service> s)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	//    .param p1, "s"    # Ljava/security/Provider$Service;
	if ( this->firstService )     
		goto label_cond_7;
	this->firstService = s;
label_goto_6:
	return;
	// 153    .line 415
label_cond_7:
	if ( this->services )     
		goto label_cond_1a;
	cVar0 = std::make_shared<java::util::ArrayList>(0x4);
	this->services = cVar0;
	this->services->add(this->firstService);
label_cond_1a:
	this->services->add(s);
	goto label_goto_6;

}
// .method private tryGet(I)Ljava/security/Provider$Service;
std::shared_ptr<java::security::Provider_S_Service> sun::security::jca::ProviderList_S_ServiceList::tryGet(int index)
{
	
	std::shared_ptr<java::security::Provider_S_Service> cVar0;
	int cVar1;
	std::shared_ptr<java::security::Provider> p;
	std::shared_ptr<java::security::Provider_S_Service> s;
	std::shared_ptr<java::util::Iterator> id_S_iterator;
	std::shared_ptr<sun::security::jca::ServiceId> id;
	
	//    .param p1, "index"    # I
label_cond_1:
label_goto_1:
	if ( index )     
		goto label_cond_a;
	if ( !(this->firstService) )  
		goto label_cond_a;
	return this->firstService;
	// 205    .line 427
label_cond_a:
	if ( !(this->services) )  
		goto label_cond_1f;
	if ( this->services->size() <= index )
		goto label_cond_1f;
	cVar0 = this->services->get(index);
	cVar0->checkCast("java::security::Provider_S_Service");
	return cVar0;
	// 230    .line 430
label_cond_1f:
	if ( this->providerIndex <  sun::security::jca::ProviderList::-get0(this->this_S_0)->size() )
		goto label_cond_2b;
	return 0x0;
	// 247    .line 434
label_cond_2b:
	cVar1 = this->providerIndex;
	this->providerIndex = ( cVar1 + 0x1);
	p = this->this_S_0->getProvider(cVar1);
	//    .local v2, "p":Ljava/security/Provider;
	if ( !(this->type) )  
		goto label_cond_49;
	s = p->getService(this->type, this->algorithm);
	//    .local v3, "s":Ljava/security/Provider$Service;
	if ( !(s) )  
		goto label_cond_1;
	this->addService(s);
	goto label_goto_1;
	// 285    .line 443
	// 286    .end local v3    # "s":Ljava/security/Provider$Service;
label_cond_49:
	id_S_iterator = this->ids->iterator();
	//    .local v1, "id$iterator":Ljava/util/Iterator;
label_cond_4f:
label_goto_4f:
	if ( !(id_S_iterator->hasNext()) )  
		goto label_cond_1;
	id = id_S_iterator->next();
	id->checkCast("sun::security::jca::ServiceId");
	//    .local v0, "id":Lsun/security/jca/ServiceId;
	s = p->getService(id->type, id->algorithm);
	//    .restart local v3    # "s":Ljava/security/Provider$Service;
	if ( !(s) )  
		goto label_cond_4f;
	this->addService(s);
	goto label_goto_4f;

}
// .method public get(I)Ljava/security/Provider$Service;
std::shared_ptr<java::security::Provider_S_Service> sun::security::jca::ProviderList_S_ServiceList::get(int index)
{
	
	std::shared_ptr<java::security::Provider_S_Service> s;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p1, "index"    # I
	s = this->tryGet(index);
	//    .local v0, "s":Ljava/security/Provider$Service;
	if ( s )     
		goto label_cond_c;
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 364    .line 458
label_cond_c:
	return s;

}
// .method public isEmpty()Z
bool sun::security::jca::ProviderList_S_ServiceList::isEmpty()
{
	
	int cVar1;
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->tryGet(cVar1) )     
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method public iterator()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<java::security::Provider_S_Service>> sun::security::jca::ProviderList_S_ServiceList::iterator()
{
	
	std::shared_ptr<sun::security::jca::ProviderList_S_ServiceList_S_1> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 391        value = {
	// 392            "()",
	// 393            "Ljava/util/Iterator",
	// 394            "<",
	// 395            "Ljava/security/Provider$Service;",
	// 396            ">;"
	// 397        }
	// 398    .end annotation
	cVar0 = std::make_shared<sun::security::jca::ProviderList_S_ServiceList_S_1>(this);
	return cVar0;

}
// .method public size()I
int sun::security::jca::ProviderList_S_ServiceList::size()
{
	
	int n;
	
	if ( !(this->services) )  
		goto label_cond_13;
	n = this->services->size();
	//    .local v0, "n":I
label_goto_a:
	if ( !(this->tryGet(n)) )  
		goto label_cond_1b;
	n = ( n + 0x1);
	goto label_goto_a;
	// 439    .line 466
	// 440    .end local v0    # "n":I
label_cond_13:
	if ( !(this->firstService) )  
		goto label_cond_19;
	n = 0x1;
	//    .restart local v0    # "n":I
	goto label_goto_a;
	// 451    .end local v0    # "n":I
label_cond_19:
	n = 0x0;
	//    .restart local v0    # "n":I
	goto label_goto_a;
	// 458    .line 471
label_cond_1b:
	return n;

}


