// CPP L:\smali2cpp20\x64\Release\out\sun\security\jca\GetInstance$Instance.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.security.Provider.h"
#include "sun.security.jca.GetInstance_S_Instance.h"

// .method private constructor <init>(Ljava/security/Provider;Ljava/lang/Object;)V
sun::security::jca::GetInstance_S_Instance::GetInstance_S_Instance(std::shared_ptr<java::security::Provider> provider,std::shared_ptr<java::lang::Object> impl)
{
	
	//    .param p1, "provider"    # Ljava/security/Provider;
	//    .param p2, "impl"    # Ljava/lang/Object;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->provider = provider;
	this->impl = impl;
	return;

}
// .method synthetic constructor <init>(Ljava/security/Provider;Ljava/lang/Object;Lsun/security/jca/GetInstance$Instance;)V
sun::security::jca::GetInstance_S_Instance::GetInstance_S_Instance(std::shared_ptr<java::security::Provider> provider,std::shared_ptr<java::lang::Object> impl,std::shared_ptr<sun::security::jca::GetInstance_S_Instance> _this2)
{
	
	//    .param p1, "provider"    # Ljava/security/Provider;
	//    .param p2, "impl"    # Ljava/lang/Object;
	//    .param p3, "-this2"    # Lsun/security/jca/GetInstance$Instance;
	sun::security::jca::GetInstance_S_Instance::(provider, impl);
	return;

}
// .method public toArray()[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::jca::GetInstance_S_Instance::toArray()
{
	
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	cVar0[0x0] = this->impl;
	cVar0[0x1] = this->provider;
	return cVar0;

}


