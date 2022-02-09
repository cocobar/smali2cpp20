#ifndef __sun_security_jca_GetInstance__
#define __sun_security_jca_GetInstance__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\GetInstance.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.Provider_S_Service.h"
#include "java.security.Provider.h"
#include "java.util.List.h"
#include "sun.security.jca.GetInstance_S_Instance.h"
#include "sun.security.jca.ServiceId.h"

namespace sun::security::jca{
class GetInstance : public java::lang::Object {
protected:
private:
	GetInstance();
public:
	static void checkSuperClass(std::shared_ptr<java::security::Provider_S_Service> s,std::shared_ptr<java::lang::Class<java::lang::Object>> subClass,std::shared_ptr<java::lang::Class<java::lang::Object>> superClass);
	static std::shared_ptr<sun::security::jca::GetInstance_S_Instance> getInstance(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,std::shared_ptr<java::lang::String> algorithm);
	static std::shared_ptr<sun::security::jca::GetInstance_S_Instance> getInstance(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::lang::Object> param);
	static std::shared_ptr<sun::security::jca::GetInstance_S_Instance> getInstance(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::lang::Object> param,std::shared_ptr<java::lang::String> provider);
	static std::shared_ptr<sun::security::jca::GetInstance_S_Instance> getInstance(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::lang::Object> param,std::shared_ptr<java::security::Provider> provider);
	static std::shared_ptr<sun::security::jca::GetInstance_S_Instance> getInstance(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::lang::String> provider);
	static std::shared_ptr<sun::security::jca::GetInstance_S_Instance> getInstance(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::security::Provider> provider);
	static std::shared_ptr<sun::security::jca::GetInstance_S_Instance> getInstance(std::shared_ptr<java::security::Provider_S_Service> s,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz);
	static std::shared_ptr<sun::security::jca::GetInstance_S_Instance> getInstance(std::shared_ptr<java::security::Provider_S_Service> s,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,std::shared_ptr<java::lang::Object> param);
	static std::shared_ptr<java::security::Provider_S_Service> getService(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm);
	static std::shared_ptr<java::security::Provider_S_Service> getService(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::lang::String> provider);
	static std::shared_ptr<java::security::Provider_S_Service> getService(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::security::Provider> provider);
	static std::shared_ptr<java::util::List<java::security::Provider_S_Service>> getServices(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm);
	static std::shared_ptr<java::util::List<java::security::Provider_S_Service>> getServices(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::util::List<java::lang::String>> algorithms);
	static std::shared_ptr<java::util::List<java::security::Provider_S_Service>> getServices(std::shared_ptr<java::util::List<sun::security::jca::ServiceId>> ids);
public:
	virtual ~GetInstance(){
	}

}; // class GetInstance
}; // namespace sun::security::jca

#endif //__sun_security_jca_GetInstance__

