// CPP L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderConfig.smali
#include "java2ctype.h"
#include "java.lang.Boolean.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.reflect.Constructor.h"
#include "java.security.AccessController.h"
#include "java.security.Provider.h"
#include "sun.security.jca.ProviderConfig_S_1.h"
#include "sun.security.jca.ProviderConfig_S_2.h"
#include "sun.security.jca.ProviderConfig_S_3.h"
#include "sun.security.jca.ProviderConfig.h"
#include "sun.security.util.Debug.h"

static sun::security::jca::ProviderConfig::CL_STRING;
static sun::security::jca::ProviderConfig::MAX_LOAD_TRIES = 0x1e;
static sun::security::jca::ProviderConfig::P11_SOL_ARG = std::make_shared<java::lang::String>("${java.home}/lib/security/sunpkcs11-solaris.cfg");
static sun::security::jca::ProviderConfig::P11_SOL_NAME = std::make_shared<java::lang::String>("sun.security.pkcs11.SunPKCS11");
static sun::security::jca::ProviderConfig::debug;
// .method static synthetic -get0(Lsun/security/jca/ProviderConfig;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::jca::ProviderConfig::_get0(std::shared_ptr<sun::security::jca::ProviderConfig> _this)
{
	
	//    .param p0, "-this"    # Lsun/security/jca/ProviderConfig;
	return _this->className;

}
// .method static synthetic -get1()Lsun/security/util/Debug;
std::shared_ptr<sun::security::util::Debug> sun::security::jca::ProviderConfig::_get1()
{
	
	return sun::security::jca::ProviderConfig::debug;

}
// .method static synthetic -wrap0(Lsun/security/jca/ProviderConfig;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/security/Provider;
std::shared_ptr<java::security::Provider> sun::security::jca::ProviderConfig::_wrap0(std::shared_ptr<sun::security::jca::ProviderConfig> _this,std::shared_ptr<java::lang::String> className,std::shared_ptr<java::lang::ClassLoader> cl)
{
	
	//    .param p0, "-this"    # Lsun/security/jca/ProviderConfig;
	//    .param p1, "className"    # Ljava/lang/String;
	//    .param p2, "cl"    # Ljava/lang/ClassLoader;
	return _this->initProvider(className, cl);

}
// .method static synthetic -wrap1(Lsun/security/jca/ProviderConfig;)V
void sun::security::jca::ProviderConfig::_wrap1(std::shared_ptr<sun::security::jca::ProviderConfig> _this)
{
	
	//    .param p0, "-this"    # Lsun/security/jca/ProviderConfig;
	_this->disableLoad();
	return;

}
// .method static constructor <clinit>()V
void sun::security::jca::ProviderConfig::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar0;
	
	sun::security::jca::ProviderConfig::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("jca")), std::make_shared<java::lang::String>(std::make_shared<char[]>("ProviderConfig")));
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x1);
	cVar0[0x0] = java::lang::String();
	sun::security::jca::ProviderConfig::CL_STRING = cVar0;
	return;

}
// .method constructor <init>(Ljava/lang/String;)V
sun::security::jca::ProviderConfig::ProviderConfig(std::shared_ptr<java::lang::String> className)
{
	
	//    .param p1, "className"    # Ljava/lang/String;
	sun::security::jca::ProviderConfig::(className, std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	return;

}
// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
sun::security::jca::ProviderConfig::ProviderConfig(std::shared_ptr<java::lang::String> className,std::shared_ptr<java::lang::String> argument)
{
	
	//    .param p1, "className"    # Ljava/lang/String;
	//    .param p2, "argument"    # Ljava/lang/String;
	// 127    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( !(className->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.security.pkcs11.SunPKCS11")))) )  
		goto label_cond_18;
	if ( !(argument->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("${java.home}/lib/security/sunpkcs11-solaris.cfg")))) )  
		goto label_cond_18;
	this->checkSunPKCS11Solaris();
label_cond_18:
	this->className = className;
	this->argument = sun::security::jca::ProviderConfig::expand(argument);
	return;

}
// .method constructor <init>(Ljava/security/Provider;)V
sun::security::jca::ProviderConfig::ProviderConfig(std::shared_ptr<java::security::Provider> provider)
{
	
	//    .param p1, "provider"    # Ljava/security/Provider;
	// 170    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->className = provider->getClass()->getName();
	this->argument = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->provider = provider;
	return;

}
// .method private checkSunPKCS11Solaris()V
void sun::security::jca::ProviderConfig::checkSunPKCS11Solaris()
{
	
	std::shared_ptr<sun::security::jca::ProviderConfig_S_1> cVar0;
	std::shared_ptr<java::lang::Boolean> o;
	
	cVar0 = std::make_shared<sun::security::jca::ProviderConfig_S_1>(this);
	o = java::security::AccessController::doPrivileged(cVar0);
	o->checkCast("java::lang::Boolean");
	//    .local v0, "o":Ljava/lang/Boolean;
	if ( o != java::lang::Boolean::FALSE )
		goto label_cond_13;
	this->tries = 0x1e;
label_cond_13:
	return;

}
// .method private disableLoad()V
void sun::security::jca::ProviderConfig::disableLoad()
{
	
	this->tries = 0x1e;
	return;

}
// .method private doLoadProvider()Ljava/security/Provider;
std::shared_ptr<java::security::Provider> sun::security::jca::ProviderConfig::doLoadProvider()
{
	
	std::shared_ptr<sun::security::jca::ProviderConfig_S_2> cVar0;
	std::shared_ptr<java::security::Provider> cVar1;
	
	cVar0 = std::make_shared<sun::security::jca::ProviderConfig_S_2>(this);
	cVar1 = java::security::AccessController::doPrivileged(cVar0);
	cVar1->checkCast("java::security::Provider");
	return cVar1;

}
// .method private static expand(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::jca::ProviderConfig::expand(std::shared_ptr<java::lang::String> value)
{
	
	std::shared_ptr<sun::security::jca::ProviderConfig_S_3> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .param p0, "value"    # Ljava/lang/String;
	if ( value->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("${"))) )     
		goto label_cond_a;
	return value;
	// 275    .line 285
label_cond_a:
	cVar0 = std::make_shared<sun::security::jca::ProviderConfig_S_3>(value);
	cVar1 = java::security::AccessController::doPrivileged(cVar0);
	cVar1->checkCast("java::lang::String");
	return cVar1;

}
// .method private hasArgument()Z
bool sun::security::jca::ProviderConfig::hasArgument()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( !(this->argument->length()) )  
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method private initProvider(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/security/Provider;
std::shared_ptr<java::security::Provider> sun::security::jca::ProviderConfig::initProvider(std::shared_ptr<java::lang::String> className,std::shared_ptr<java::lang::ClassLoader> cl)
{
	
	std::shared_ptr<java::lang::Class> provClass;
	std::shared_ptr<java::security::Provider> obj;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar1;
	
	//    .param p1, "className"    # Ljava/lang/String;
	//    .param p2, "cl"    # Ljava/lang/ClassLoader;
	//    .annotation system Ldalvik/annotation/Throws;
	// 316        value = {
	// 317            Ljava/lang/Exception;
	// 318        }
	// 319    .end annotation
	if ( !(cl) )  
		goto label_cond_35;
	provClass = cl->loadClass(className);
	//    .local v2, "provClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_goto_7:
	if ( this->hasArgument() )     
		goto label_cond_3a;
	obj = provClass->newInstance();
	//    .local v1, "obj":Ljava/lang/Object;
label_goto_11:
	if ( !(obj->instanceOf("java::security::Provider")) )  
		goto label_cond_4d;
	if ( !(sun::security::jca::ProviderConfig::debug) )  
		goto label_cond_32;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::jca::ProviderConfig::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Loaded provider ")))->append(obj)->toString());
label_cond_32:
	obj->checkCast("java::security::Provider");
	//    .end local v1    # "obj":Ljava/lang/Object;
	return obj;
	// 388    .line 251
	// 389    .end local v2    # "provClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_35:
	//    .restart local v2    # "provClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	goto label_goto_7;
	// 398    .line 257
label_cond_3a:
	//    .local v0, "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar1[0x0] = this->argument;
	//    .restart local v1    # "obj":Ljava/lang/Object;
	goto label_goto_11;
	// 425    .line 266
	// 426    .end local v0    # "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
label_cond_4d:
	if ( !(sun::security::jca::ProviderConfig::debug) )  
		goto label_cond_6a;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::jca::ProviderConfig::debug->println(cVar2->append(className)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" is not a provider")))->toString());
label_cond_6a:
	this->disableLoad();
	return 0x0;

}
// .method private shouldLoad()Z
bool sun::security::jca::ProviderConfig::shouldLoad()
{
	
	bool cVar0;
	
	if ( this->tries >= 0x1e )
		goto label_cond_8;
	cVar0 = 0x1;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::jca::ProviderConfig::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<sun::security::jca::ProviderConfig> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return 0x1;
	// 502    .line 143
label_cond_5:
	if ( obj->instanceOf("sun::security::jca::ProviderConfig") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	other = obj;
	other->checkCast("sun::security::jca::ProviderConfig");
	//    .local v0, "other":Lsun/security/jca/ProviderConfig;
	if ( !(this->className->equals(other->className)) )  
		goto label_cond_1f;
	cVar1 = this->argument->equals(other->argument);
label_cond_1f:
	return cVar1;

}
// .method declared-synchronized getProvider()Ljava/security/Provider;
std::shared_ptr<java::security::Provider> sun::security::jca::ProviderConfig::getProvider()
{
	
	std::shared_ptr<java::security::Provider> cVar0;
	std::shared_ptr<java::security::Provider> p;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::Exception> cVar2;
	
	cVar0 = 0x0;
	this->monitor_enter();
	try {
	//label_try_start_2:
	p = this->provider;
	//label_try_end_4:
	}
	catch (...){
		goto label_catchall_57;
	}
	//    .catchall {:try_start_2 .. :try_end_4} :catchall_57
	//    .local v0, "p":Ljava/security/Provider;
	if ( !(p) )  
		goto label_cond_8;
	this->monitor_exit();
	return p;
	// 566    .line 172
label_cond_8:
	try {
	//label_try_start_8:
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_57;
	}
	//    .catchall {:try_start_8 .. :try_end_b} :catchall_57
	if ( this->shouldLoad() )     
		goto label_cond_10;
	this->monitor_exit();
	return cVar0;
	// 582    .line 175
label_cond_10:
	try {
	//label_try_start_10:
	if ( !(this->isLoading) )  
		goto label_cond_3e;
	if ( !(sun::security::jca::ProviderConfig::debug) )  
		goto label_cond_3c;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::jca::ProviderConfig::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Recursion loading provider: ")))->append(this)->toString());
	cVar2 = std::make_shared<java::lang::Exception>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Call trace")));
	cVar2->printStackTrace();
	//label_try_end_3c:
	}
	catch (...){
		goto label_catchall_57;
	}
	//    .catchall {:try_start_10 .. :try_end_3c} :catchall_57
label_cond_3c:
	this->monitor_exit();
	return cVar0;
	// 634    .line 185
label_cond_3e:
	try {
	//label_try_start_3f:
	this->isLoading = 0x1;
	this->tries = ( this->tries + 0x1);
	//label_try_end_4a:
	}
	catch (...){
		goto label_catchall_52;
	}
	//    .catchall {:try_start_3f .. :try_end_4a} :catchall_52
	p = this->doLoadProvider();
	try {
	//label_try_start_4c:
	this->isLoading = 0x0;
	this->provider = p;
	//label_try_end_50:
	}
	catch (...){
		goto label_catchall_57;
	}
	//    .catchall {:try_start_4c .. :try_end_50} :catchall_57
	this->monitor_exit();
	return p;
	// 671    .line 188
label_catchall_52:
	// move-exception
	
	try {
	//label_try_start_54:
	this->isLoading = 0x0;
	// throw
	throw;
	// 683    :try_end_57
	// 684    .catchall {:try_start_54 .. :try_end_57} :catchall_57
	// 686    .end local v0    # "p":Ljava/security/Provider;
label_catchall_57:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public hashCode()I
int sun::security::jca::ProviderConfig::hashCode()
{
	
	return (this->className->hashCode() +  this->argument->hashCode());

}
// .method isLoaded()Z
bool sun::security::jca::ProviderConfig::isLoaded()
{
	
	bool cVar0;
	
	if ( !(this->provider) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::jca::ProviderConfig::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	if ( !(this->hasArgument()) )  
		goto label_cond_2a;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->className)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(\'")))->append(this->argument)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\')")))->toString();
	// 783    .line 159
label_cond_2a:
	return this->className;

}


