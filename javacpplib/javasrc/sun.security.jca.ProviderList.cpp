// CPP L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderList.smali
#include "java2ctype.h"
#include "java.io.PrintStream.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.security.AccessController.h"
#include "java.security.Provider_S_Service.h"
#include "java.security.Provider.h"
#include "java.security.Security.h"
#include "java.util.ArrayList.h"
#include "java.util.Arrays.h"
#include "java.util.Collection.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.security.jca.ProviderConfig.h"
#include "sun.security.jca.ProviderList_S_1.h"
#include "sun.security.jca.ProviderList_S_2.h"
#include "sun.security.jca.ProviderList_S_3.h"
#include "sun.security.jca.ProviderList_S_ServiceList.h"
#include "sun.security.jca.ProviderList.h"
#include "sun.security.jca.ServiceId.h"
#include "sun.security.util.Debug.h"

static sun::security::jca::ProviderList::EMPTY;
static sun::security::jca::ProviderList::EMPTY_PROVIDER;
static sun::security::jca::ProviderList::P0;
static sun::security::jca::ProviderList::PC0;
static sun::security::jca::ProviderList::debug;
// .method static synthetic -get0(Lsun/security/jca/ProviderList;)[Lsun/security/jca/ProviderConfig;
std::shared_ptr<sun::security::jca::ProviderConfig> sun::security::jca::ProviderList::_get0(std::shared_ptr<sun::security::jca::ProviderList> _this)
{
	
	//    .param p0, "-this"    # Lsun/security/jca/ProviderList;
	return _this->configs;

}
// .method static constructor <clinit>()V
void sun::security::jca::ProviderList::static_cinit()
{
	
	int cVar0;
	std::shared_ptr<sun::security::jca::ProviderList> cVar1;
	std::shared_ptr<sun::security::jca::ProviderList_S_1> cVar2;
	
	cVar0 = 0x0;
	sun::security::jca::ProviderList::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("jca")), std::make_shared<java::lang::String>(std::make_shared<char[]>("ProviderList")));
	sun::security::jca::ProviderList::PC0 = std::make_shared<std::vector<std::vector<sun::security::jca::ProviderConfig>>>(cVar0);
	sun::security::jca::ProviderList::P0 = std::make_shared<std::vector<std::vector<java::security::Provider>>>(cVar0);
	cVar1 = std::make_shared<sun::security::jca::ProviderList>(sun::security::jca::ProviderList::PC0, 0x1);
	sun::security::jca::ProviderList::EMPTY = cVar1;
	cVar2 = std::make_shared<sun::security::jca::ProviderList_S_1>(std::make_shared<java::lang::String>(std::make_shared<char[]>("##Empty##")), 0x3ff0000000000000L, std::make_shared<java::lang::String>(std::make_shared<char[]>("initialization in progress")));
	sun::security::jca::ProviderList::EMPTY_PROVIDER = cVar2;
	return;

}
// .method private constructor <init>()V
sun::security::jca::ProviderList::ProviderList()
{
	
	std::shared_ptr<sun::security::jca::ProviderList_S_2> cVar0;
	std::shared_ptr<java::util::ArrayList> configList;
	int i;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> entry;
	std::shared_ptr<std::vector<sun::security::jca::ProviderConfig>> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	int k;
	std::shared_ptr<sun::security::jca::ProviderConfig> config;
	
	// 120    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<sun::security::jca::ProviderList_S_2>(this);
	this->userList = cVar0;
	configList = std::make_shared<java::util::ArrayList>();
	//    .local v3, "configList":Ljava/util/List;, "Ljava/util/List<Lsun/security/jca/ProviderConfig;>;"
	i = 0x1;
	//    .local v5, "i":I
label_goto_11:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	entry = java::security::Security::getProperty(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("security.provider.")))->append(i)->toString());
	//    .local v4, "entry":Ljava/lang/String;
	if ( entry )     
		goto label_cond_53;
label_goto_2b:
	cVar2 = configList->toArray(sun::security::jca::ProviderList::PC0);
	cVar2->checkCast("std::vector<sun::security::jca::ProviderConfig>");
	this->configs = cVar2;
	if ( !(sun::security::jca::ProviderList::debug) )  
		goto label_cond_52;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::jca::ProviderList::debug->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("provider configuration: ")))->append(configList)->toString());
label_cond_52:
	return;
	// 211    .line 170
label_cond_53:
	entry = entry->trim();
	if ( entry->length() )     
		goto label_cond_77;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::err->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid entry for security.provider.")))->append(i)->toString());
	goto label_goto_2b;
	// 249    .line 176
label_cond_77:
	k = entry->indexOf(0x20);
	//    .local v6, "k":I
	if ( k != -0x1 )
		goto label_cond_91;
	config = std::make_shared<sun::security::jca::ProviderConfig>(entry);
	//    .local v2, "config":Lsun/security/jca/ProviderConfig;
label_goto_85:
	if ( configList->contains(config) )     
		goto label_cond_8e;
	configList->add(config);
label_cond_8e:
	i = ( i + 0x1);
	goto label_goto_11;
	// 286    .line 181
	// 287    .end local v2    # "config":Lsun/security/jca/ProviderConfig;
label_cond_91:
	//    .local v1, "className":Ljava/lang/String;
	//    .local v0, "argument":Ljava/lang/String;
	config = std::make_shared<sun::security::jca::ProviderConfig>(entry->substring(0x0, k), entry->substring(( k + 0x1))->trim());
	//    .restart local v2    # "config":Lsun/security/jca/ProviderConfig;
	goto label_goto_85;

}
// .method synthetic constructor <init>(Lsun/security/jca/ProviderList;)V
sun::security::jca::ProviderList::ProviderList(std::shared_ptr<sun::security::jca::ProviderList> _this0)
{
	
	//    .param p1, "-this0"    # Lsun/security/jca/ProviderList;
	// 320    invoke-direct {p0}, Lsun/security/jca/ProviderList;-><init>()V
	return;

}
// .method private constructor <init>([Lsun/security/jca/ProviderConfig;Z)V
sun::security::jca::ProviderList::ProviderList(std::shared_ptr<std::vector<sun::security::jca::ProviderConfig>> configs,bool allLoaded)
{
	
	std::shared_ptr<sun::security::jca::ProviderList_S_2> cVar0;
	
	//    .param p1, "configs"    # [Lsun/security/jca/ProviderConfig;
	//    .param p2, "allLoaded"    # Z
	// 332    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<sun::security::jca::ProviderList_S_2>(this);
	this->userList = cVar0;
	this->configs = configs;
	this->allLoaded = allLoaded;
	return;

}
// .method public static add(Lsun/security/jca/ProviderList;Ljava/security/Provider;)Lsun/security/jca/ProviderList;
std::shared_ptr<sun::security::jca::ProviderList> sun::security::jca::ProviderList::add(std::shared_ptr<sun::security::jca::ProviderList> providerList,std::shared_ptr<java::security::Provider> p)
{
	
	//    .param p0, "providerList"    # Lsun/security/jca/ProviderList;
	//    .param p1, "p"    # Ljava/security/Provider;
	return sun::security::jca::ProviderList::insertAt(providerList, p, -0x1);

}
// .method static fromSecurityProperties()Lsun/security/jca/ProviderList;
std::shared_ptr<sun::security::jca::ProviderList> sun::security::jca::ProviderList::fromSecurityProperties()
{
	
	std::shared_ptr<sun::security::jca::ProviderList_S_3> cVar0;
	std::shared_ptr<sun::security::jca::ProviderList> cVar1;
	
	cVar0 = std::make_shared<sun::security::jca::ProviderList_S_3>();
	cVar1 = java::security::AccessController::doPrivileged(cVar0);
	cVar1->checkCast("sun::security::jca::ProviderList");
	return cVar1;

}
// .method private getProviderConfig(Ljava/lang/String;)Lsun/security/jca/ProviderConfig;
std::shared_ptr<sun::security::jca::ProviderConfig> sun::security::jca::ProviderList::getProviderConfig(std::shared_ptr<java::lang::String> name)
{
	
	int index;
	std::shared_ptr<sun::security::jca::ProviderConfig> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	index = this->getIndex(name);
	//    .local v0, "index":I
	if ( index == -0x1 )
		goto label_cond_c;
	cVar0 = this->configs[index];
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method public static insertAt(Lsun/security/jca/ProviderList;Ljava/security/Provider;I)Lsun/security/jca/ProviderList;
std::shared_ptr<sun::security::jca::ProviderList> sun::security::jca::ProviderList::insertAt(std::shared_ptr<sun::security::jca::ProviderList> providerList,std::shared_ptr<java::security::Provider> p,int cVar0)
{
	
	std::shared_ptr<java::util::ArrayList> list;
	int n;
	int cVar0;
	std::shared_ptr<sun::security::jca::ProviderConfig> cVar1;
	std::shared_ptr<sun::security::jca::ProviderList> cVar2;
	std::shared_ptr<std::vector<sun::security::jca::ProviderConfig>> cVar3;
	
	//    .param p0, "providerList"    # Lsun/security/jca/ProviderList;
	//    .param p1, "p"    # Ljava/security/Provider;
	//    .param p2, "position"    # I
	if ( !(providerList->getProvider(p->getName())) )  
		goto label_cond_b;
	return providerList;
	// 436    .line 100
label_cond_b:
	list = std::make_shared<java::util::ArrayList>(java::util::Arrays::asList(providerList->configs));
	//    .local v0, "list":Ljava/util/List;, "Ljava/util/List<Lsun/security/jca/ProviderConfig;>;"
	n = list->size();
	//    .local v1, "n":I
	if ( cVar0 < 0 ) 
		goto label_cond_1e;
	if ( cVar0 <= n )
		goto label_cond_1f;
label_cond_1e:
	cVar0 = n;
label_cond_1f:
	cVar1 = std::make_shared<sun::security::jca::ProviderConfig>(p);
	list->add(cVar0, cVar1);
	cVar3 = list->toArray(sun::security::jca::ProviderList::PC0);
	cVar3->checkCast("std::vector<sun::security::jca::ProviderConfig>");
	cVar2 = std::make_shared<sun::security::jca::ProviderList>(cVar3, 0x1);
	return cVar2;

}
// .method private loadAll()I
int sun::security::jca::ProviderList::loadAll()
{
	
	std::shared_ptr<java::lang::Exception> cVar0;
	int n;
	int i;
	
	if ( !(this->allLoaded) )  
		goto label_cond_8;
	return this->configs->size();
	// 508    .line 276
label_cond_8:
	if ( !(sun::security::jca::ProviderList::debug) )  
		goto label_cond_1f;
	sun::security::jca::ProviderList::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Loading all providers")));
	cVar0 = std::make_shared<java::lang::Exception>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Call trace")));
	cVar0->printStackTrace();
label_cond_1f:
	n = 0x0;
	//    .local v1, "n":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_21:
	if ( i >= this->configs->size() )
		goto label_cond_35;
	//    .local v2, "p":Ljava/security/Provider;
	if ( !(this->configs[i]->getProvider()) )  
		goto label_cond_32;
	n = ( n + 0x1);
label_cond_32:
	i = ( i + 0x1);
	goto label_goto_21;
	// 568    .line 287
	// 569    .end local v2    # "p":Ljava/security/Provider;
label_cond_35:
	if ( n != this->configs->size() )
		goto label_cond_3d;
	this->allLoaded = 0x1;
label_cond_3d:
	return n;

}
// .method public static varargs newList([Ljava/security/Provider;)Lsun/security/jca/ProviderList;
std::shared_ptr<sun::security::jca::ProviderList> sun::security::jca::ProviderList::newList(std::shared_ptr<std::vector<java::security::Provider>> providers)
{
	
	std::shared<std::vector<std::vector<sun::security::jca::ProviderConfig>>> configs;
	int i;
	std::shared_ptr<sun::security::jca::ProviderConfig> cVar0;
	std::shared_ptr<sun::security::jca::ProviderList> cVar1;
	
	//    .param p0, "providers"    # [Ljava/security/Provider;
	configs = std::make_shared<std::vector<std::vector<sun::security::jca::ProviderConfig>>>(providers->size());
	//    .local v0, "configs":[Lsun/security/jca/ProviderConfig;
	i = 0x0;
	//    .local v1, "i":I
label_goto_4:
	if ( i >= providers->size() )
		goto label_cond_13;
	cVar0 = std::make_shared<sun::security::jca::ProviderConfig>(providers[i]);
	configs[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_4;
	// 621    .line 133
label_cond_13:
	cVar1 = std::make_shared<sun::security::jca::ProviderList>(configs, 0x1);
	return cVar1;

}
// .method public static remove(Lsun/security/jca/ProviderList;Ljava/lang/String;)Lsun/security/jca/ProviderList;
std::shared_ptr<sun::security::jca::ProviderList> sun::security::jca::ProviderList::remove(std::shared_ptr<sun::security::jca::ProviderList> providerList,std::shared_ptr<java::lang::String> name)
{
	
	std::shared<std::vector<std::vector<sun::security::jca::ProviderConfig>>> configs;
	std::shared_ptr<std::vector<sun::security::jca::ProviderConfig>> cVar0;
	int cVar1;
	int j;
	std::shared_ptr<sun::security::jca::ProviderConfig> config;
	std::shared_ptr<sun::security::jca::ProviderList> cVar3;
	
	//    .param p0, "providerList"    # Lsun/security/jca/ProviderList;
	//    .param p1, "name"    # Ljava/lang/String;
	if ( providerList->getProvider(name) )     
		goto label_cond_7;
	return providerList;
	// 648    .line 116
label_cond_7:
	configs = std::make_shared<std::vector<std::vector<sun::security::jca::ProviderConfig>>>(( providerList->size() + -0x1));
	//    .local v1, "configs":[Lsun/security/jca/ProviderConfig;
	//    .local v2, "j":I
	cVar0 = providerList->configs;
	cVar1 = 0x0;
	j = 0x0;
	//    .end local v2    # "j":I
	//    .local v3, "j":I
label_goto_15:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_2f;
	config = cVar0[cVar1];
	//    .local v0, "config":Lsun/security/jca/ProviderConfig;
	if ( config->getProvider()->getName()->equals(name) )     
		goto label_cond_36;
	//    .end local v3    # "j":I
	//    .restart local v2    # "j":I
	configs[j] = config;
label_goto_2b:
	cVar1 = ( cVar1 + 0x1);
	j = j;
	//    .end local v2    # "j":I
	//    .restart local v3    # "j":I
	goto label_goto_15;
	// 712    .line 123
	// 713    .end local v0    # "config":Lsun/security/jca/ProviderConfig;
label_cond_2f:
	cVar3 = std::make_shared<sun::security::jca::ProviderList>(configs, 0x1);
	return cVar3;
	// 723    .restart local v0    # "config":Lsun/security/jca/ProviderConfig;
label_cond_36:
	//    .end local v3    # "j":I
	//    .restart local v2    # "j":I
	goto label_goto_2b;

}
// .method public getIndex(Ljava/lang/String;)I
int sun::security::jca::ProviderList::getIndex(std::shared_ptr<java::lang::String> name)
{
	
	int i;
	
	//    .param p1, "name"    # Ljava/lang/String;
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= this->configs->size() )
		goto label_cond_18;
	//    .local v1, "p":Ljava/security/Provider;
	if ( !(this->getProvider(i)->getName()->equals(name)) )  
		goto label_cond_15;
	return i;
	// 770    .line 262
label_cond_15:
	i = ( i + 0x1);
	goto label_goto_1;
	// 776    .line 268
	// 777    .end local v1    # "p":Ljava/security/Provider;
label_cond_18:
	return -0x1;

}
// .method getJarList([Ljava/lang/String;)Lsun/security/jca/ProviderList;
std::shared_ptr<sun::security::jca::ProviderList> sun::security::jca::ProviderList::getJarList(std::shared_ptr<std::vector<java::lang::String>> jarClassNames)
{
	
	bool cVar0;
	std::shared_ptr<java::util::ArrayList> newConfigs;
	int cVar1;
	std::shared_ptr<sun::security::jca::ProviderConfig> newConfig;
	std::shared_ptr<std::vector<sun::security::jca::ProviderConfig>> cVar2;
	int cVar3;
	std::shared_ptr<sun::security::jca::ProviderConfig> config;
	std::shared_ptr<std::vector<sun::security::jca::ProviderConfig>> configArray;
	std::shared_ptr<sun::security::jca::ProviderList> cVar6;
	
	//    .param p1, "jarClassNames"    # [Ljava/lang/String;
	cVar0 = 0x0;
	newConfigs = std::make_shared<java::util::ArrayList>();
	//    .local v4, "newConfigs":Ljava/util/List;, "Ljava/util/List<Lsun/security/jca/ProviderConfig;>;"
	cVar1 = cVar0;
label_goto_8:
	if ( cVar1 >= jarClassNames->size() )
		goto label_cond_2a;
	//    .local v0, "className":Ljava/lang/String;
	newConfig = std::make_shared<sun::security::jca::ProviderConfig>(jarClassNames[cVar1]);
	//    .local v3, "newConfig":Lsun/security/jca/ProviderConfig;
	cVar2 = this->configs;
	cVar3 = cVar0;
label_goto_15:
	if ( cVar3 >= cVar2->size() )
		goto label_cond_20;
	config = cVar2[cVar3];
	//    .local v1, "config":Lsun/security/jca/ProviderConfig;
	if ( !(config->equals(newConfig)) )  
		goto label_cond_27;
	//    .end local v1    # "config":Lsun/security/jca/ProviderConfig;
label_cond_20:
	newConfigs->add(newConfig);
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_8;
	// 849    .line 207
	// 850    .restart local v1    # "config":Lsun/security/jca/ProviderConfig;
label_cond_27:
	cVar3 = ( cVar3 + 0x1);
	goto label_goto_15;
	// 856    .line 220
	// 857    .end local v0    # "className":Ljava/lang/String;
	// 858    .end local v1    # "config":Lsun/security/jca/ProviderConfig;
	// 859    .end local v3    # "newConfig":Lsun/security/jca/ProviderConfig;
label_cond_2a:
	configArray = newConfigs->toArray(sun::security::jca::ProviderList::PC0);
	configArray->checkCast("std::vector<sun::security::jca::ProviderConfig>");
	//    .local v2, "configArray":[Lsun/security/jca/ProviderConfig;
	cVar6 = std::make_shared<sun::security::jca::ProviderList>(configArray, cVar0);
	return cVar6;

}
// .method getProvider(I)Ljava/security/Provider;
std::shared_ptr<java::security::Provider> sun::security::jca::ProviderList::getProvider(int index)
{
	
	std::shared_ptr<java::security::Provider> p;
	
	//    .param p1, "index"    # I
	p = this->configs[index]->getProvider();
	//    .local v0, "p":Ljava/security/Provider;
	if ( !(p) )  
		goto label_cond_b;
	//    .end local v0    # "p":Ljava/security/Provider;
label_goto_a:
	return p;
	// 900    .restart local v0    # "p":Ljava/security/Provider;
label_cond_b:
	p = sun::security::jca::ProviderList::EMPTY_PROVIDER;
	goto label_goto_a;

}
// .method public getProvider(Ljava/lang/String;)Ljava/security/Provider;
std::shared_ptr<java::security::Provider> sun::security::jca::ProviderList::getProvider(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::security::Provider> cVar0;
	std::shared_ptr<sun::security::jca::ProviderConfig> config;
	
	//    .param p1, "name"    # Ljava/lang/String;
	cVar0 = 0x0;
	config = this->getProviderConfig(name);
	//    .local v0, "config":Lsun/security/jca/ProviderConfig;
	if ( config )     
		goto label_cond_8;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = config->getProvider();
	goto label_goto_7;

}
// .method public getService(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;
std::shared_ptr<java::security::Provider_S_Service> sun::security::jca::ProviderList::getService(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> name)
{
	
	int i;
	std::shared_ptr<java::security::Provider_S_Service> s;
	
	//    .param p1, "type"    # Ljava/lang/String;
	//    .param p2, "name"    # Ljava/lang/String;
	i = 0x0;
	//    .local v0, "i":I
label_goto_2:
	if ( i >= this->configs->size() )
		goto label_cond_15;
	//    .local v1, "p":Ljava/security/Provider;
	s = this->getProvider(i)->getService(type, name);
	//    .local v2, "s":Ljava/security/Provider$Service;
	if ( !(s) )  
		goto label_cond_12;
	return s;
	// 971    .line 330
label_cond_12:
	i = ( i + 0x1);
	goto label_goto_2;
	// 977    .line 337
	// 978    .end local v1    # "p":Ljava/security/Provider;
	// 979    .end local v2    # "s":Ljava/security/Provider$Service;
label_cond_15:
	return 0x0;

}
// .method public getServices(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;
std::shared_ptr<java::util::List<java::security::Provider_S_Service>> sun::security::jca::ProviderList::getServices(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm)
{
	
	std::shared_ptr<sun::security::jca::ProviderList_S_ServiceList> cVar0;
	
	//    .param p1, "type"    # Ljava/lang/String;
	//    .param p2, "algorithm"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 989        value = {
	// 990            "(",
	// 991            "Ljava/lang/String;",
	// 992            "Ljava/lang/String;",
	// 993            ")",
	// 994            "Ljava/util/List",
	// 995            "<",
	// 996            "Ljava/security/Provider$Service;",
	// 997            ">;"
	// 998        }
	// 999    .end annotation
	cVar0 = std::make_shared<sun::security::jca::ProviderList_S_ServiceList>(this, type, algorithm);
	return cVar0;

}
// .method public getServices(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;
std::shared_ptr<java::util::List<java::security::Provider_S_Service>> sun::security::jca::ProviderList::getServices(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::util::List<java::lang::String>> algorithms)
{
	
	std::shared_ptr<java::util::ArrayList> ids;
	std::shared_ptr<java::util::Iterator> alg_S_iterator;
	std::shared_ptr<java::lang::String> alg;
	std::shared_ptr<sun::security::jca::ServiceId> cVar0;
	
	//    .param p1, "type"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1014        value = {
	// 1015            "(",
	// 1016            "Ljava/lang/String;",
	// 1017            "Ljava/util/List",
	// 1018            "<",
	// 1019            "Ljava/lang/String;",
	// 1020            ">;)",
	// 1021            "Ljava/util/List",
	// 1022            "<",
	// 1023            "Ljava/security/Provider$Service;",
	// 1024            ">;"
	// 1025        }
	// 1026    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1029    .end annotation
	//    .local p2, "algorithms":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	ids = std::make_shared<java::util::ArrayList>();
	//    .local v2, "ids":Ljava/util/List;, "Ljava/util/List<Lsun/security/jca/ServiceId;>;"
	alg_S_iterator = algorithms->iterator();
	//    .local v1, "alg$iterator":Ljava/util/Iterator;
label_goto_9:
	if ( !(alg_S_iterator->hasNext()) )  
		goto label_cond_1e;
	alg = alg_S_iterator->next();
	alg->checkCast("java::lang::String");
	//    .local v0, "alg":Ljava/lang/String;
	cVar0 = std::make_shared<sun::security::jca::ServiceId>(type, alg);
	ids->add(cVar0);
	goto label_goto_9;
	// 1068    .line 364
	// 1069    .end local v0    # "alg":Ljava/lang/String;
label_cond_1e:
	return this->getServices(ids);

}
// .method public getServices(Ljava/util/List;)Ljava/util/List;
std::shared_ptr<java::util::List<java::security::Provider_S_Service>> sun::security::jca::ProviderList::getServices(std::shared_ptr<java::util::List<sun::security::jca::ServiceId>> ids)
{
	
	std::shared_ptr<sun::security::jca::ProviderList_S_ServiceList> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1081        value = {
	// 1082            "(",
	// 1083            "Ljava/util/List",
	// 1084            "<",
	// 1085            "Lsun/security/jca/ServiceId;",
	// 1086            ">;)",
	// 1087            "Ljava/util/List",
	// 1088            "<",
	// 1089            "Ljava/security/Provider$Service;",
	// 1090            ">;"
	// 1091        }
	// 1092    .end annotation
	//    .local p1, "ids":Ljava/util/List;, "Ljava/util/List<Lsun/security/jca/ServiceId;>;"
	cVar0 = std::make_shared<sun::security::jca::ProviderList_S_ServiceList>(this, ids);
	return cVar0;

}
// .method public providers()Ljava/util/List;
std::shared_ptr<java::util::List<java::security::Provider>> sun::security::jca::ProviderList::providers()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1107        value = {
	// 1108            "()",
	// 1109            "Ljava/util/List",
	// 1110            "<",
	// 1111            "Ljava/security/Provider;",
	// 1112            ">;"
	// 1113        }
	// 1114    .end annotation
	return this->userList;

}
// .method removeInvalid()Lsun/security/jca/ProviderList;
std::shared_ptr<sun::security::jca::ProviderList> sun::security::jca::ProviderList::removeInvalid()
{
	
	int n;
	std::shared<std::vector<std::vector<sun::security::jca::ProviderConfig>>> newConfigs;
	int i;
	int j;
	std::shared_ptr<sun::security::jca::ProviderConfig> config;
	std::shared_ptr<sun::security::jca::ProviderList> cVar0;
	
	n = this->loadAll();
	//    .local v4, "n":I
	if ( n != this->configs->size() )
		goto label_cond_a;
	return this;
	// 1143    .line 303
label_cond_a:
	newConfigs = std::make_shared<std::vector<std::vector<sun::security::jca::ProviderConfig>>>(n);
	//    .local v5, "newConfigs":[Lsun/security/jca/ProviderConfig;
	i = 0x0;
	//    .local v1, "i":I
	j = 0x0;
	//    .local v2, "j":I
label_goto_e:
	if ( i >= this->configs->size() )
		goto label_cond_25;
	config = this->configs[i];
	//    .local v0, "config":Lsun/security/jca/ProviderConfig;
	if ( !(config->isLoaded()) )  
		goto label_cond_22;
	//    .end local v2    # "j":I
	//    .local v3, "j":I
	newConfigs[j] = config;
	j = ( j + 0x1);
	//    .end local v3    # "j":I
	//    .restart local v2    # "j":I
label_cond_22:
	i = ( i + 0x1);
	goto label_goto_e;
	// 1192    .line 310
	// 1193    .end local v0    # "config":Lsun/security/jca/ProviderConfig;
label_cond_25:
	cVar0 = std::make_shared<sun::security::jca::ProviderList>(newConfigs, 0x1);
	return cVar0;

}
// .method public size()I
int sun::security::jca::ProviderList::size()
{
	
	return this->configs->size();

}
// .method public toArray()[Ljava/security/Provider;
std::shared_ptr<java::security::Provider> sun::security::jca::ProviderList::toArray()
{
	
	std::shared_ptr<std::vector<java::security::Provider>> cVar0;
	
	cVar0 = this->providers()->toArray(sun::security::jca::ProviderList::P0);
	cVar0->checkCast("std::vector<java::security::Provider>");
	return cVar0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::jca::ProviderList::toString()
{
	
	return java::util::Arrays::asList(this->configs)->toString();

}


