#ifndef __sun_security_provider_certpath_BuildStep__
#define __sun_security_provider_certpath_BuildStep__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\BuildStep.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.security.cert.X509Certificate.h"
#include "sun.security.provider.certpath.Vertex.h"

namespace sun::security::provider::certpath{
class BuildStep : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	int result;
	std::shared_ptr<java::lang::Throwable> throwable;
	std::shared_ptr<sun::security::provider::certpath::Vertex> vertex;
public:
	static int BACK;
	static int FAIL;
	static int FOLLOW;
	static int POSSIBLE;
	static int SUCCEED;
	BuildStep(std::shared_ptr<sun::security::provider::certpath::Vertex> vtx,int res);
	std::shared_ptr<java::lang::String> virtual fullToString();
	std::shared_ptr<java::security::cert::X509Certificate> virtual getCertificate();
	std::shared_ptr<java::lang::String> virtual getIssuerName();
	std::shared_ptr<java::lang::String> virtual getIssuerName(std::shared_ptr<java::lang::String> defaultName);
	int virtual getResult();
	std::shared_ptr<java::lang::String> virtual getSubjectName();
	std::shared_ptr<java::lang::String> virtual getSubjectName(std::shared_ptr<java::lang::String> defaultName);
	std::shared_ptr<java::lang::Throwable> virtual getThrowable();
	std::shared_ptr<sun::security::provider::certpath::Vertex> virtual getVertex();
	std::shared_ptr<java::lang::String> virtual resultToString(int res);
	std::shared_ptr<java::lang::String> virtual toString();
	std::shared_ptr<java::lang::String> virtual verboseToString();
public:
	virtual ~BuildStep(){
	}

}; // class BuildStep
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_BuildStep__

